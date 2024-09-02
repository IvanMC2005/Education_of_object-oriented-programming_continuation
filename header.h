#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <iostream>
#include <clocale>
#include <iomanip>
#include <cstdio>
#include <cstring>
using namespace std;
class Films
{
protected:
    string country;
    string title;
    string director;
    string nameofclass;
    int duration;
    int rating;
public:
    Films(string , string , string , unsigned int , unsigned int);
    void Showname();
    Films(){};
    virtual void fillfields() =0;
    virtual void watch() const =0;
    virtual void eat_popcorn() const =0;
    virtual void assess() =0;
    virtual void Showfields() =0;
    virtual ~Films();
    void Setcountry(string );
    string Getcountry();
    void Settitle(string );
    string Gettitle();
    void Setdirector(string );
    string Getdirector();
    void Setnameofclass(string );
    string Getnameofclass();
    void Setduration(unsigned int );
    unsigned int Getduration();
};
class action_movie: public Films
{
public:
    void Action_scenes();
    void fillfields();
    void watch() const;
    void eat_popcorn() const;
    void assess();
    void Showfields();
    action_movie(string, string, string, unsigned int, unsigned int );
    action_movie (const action_movie & );
    action_movie();
    void Setaction_scenes(unsigned int );
    unsigned int Getaction_scenes();
    ~action_movie();
private:
    int action_scenes;
};

class comedy: public Films
{
    public:
    void Showfunnymom();
    void fillfields();
    void watch() const;
    void eat_popcorn() const;
    void assess();
    void Showfields();
    comedy(string city, string tit, string head, unsigned int dur, unsigned int rat);
    comedy (const comedy & other);
    comedy();
    ~comedy();
    void Setfunny_moments(unsigned int name);
    unsigned int Getfunny_moments();
    private:
    int funny_moments;
};

class cartoon: public Films
{
    public:
    void Assess_quality();
    void fillfields();
    void watch() const;
    void eat_popcorn() const;
    void assess();
    void Showfields();
    cartoon(string , string tit, string , unsigned int , unsigned int );
    cartoon(const cartoon & other);
    cartoon();
    ~cartoon();
    void Setdrawquality(double name);
    double Getdrawquality();
    private:
    double drawquality;
};
class horrors: public Films
{
    public:
    void Showhorrorscenes();
    void fillfields();
    void watch() const;
    void eat_popcorn() const;
    void assess();
    void Showfields();
    horrors(string city, string tit, string head, unsigned int dur, unsigned int rat);
    horrors (const horrors & other);
    horrors();
    ~horrors();
    void Sethorrorscenes(unsigned int name);
    unsigned int Gethorrorscenes();
    private:
    int horrorscenes;
};


#endif // HEADER_H_INCLUDED
