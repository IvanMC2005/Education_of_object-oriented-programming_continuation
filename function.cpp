#include "header.h"
Films::Films(string city, string tit, string head, unsigned int dur, unsigned int rat)
{
    country = city;
    title = tit;
    director = head;
    duration = dur;
    rating = rat;
}
void Films::Showname()
{
    cout << nameofclass << endl;
}
Films::~Films()
{
    cout << "���������� Films" << endl;
}
void Films::Setcountry(string name)
{
    country = name;
}
string Films::Getcountry()
{
    return country;
}
void Films::Settitle(string name)
{
    title = name;
}
string Films::Gettitle()
{
    return title;
}
void Films::Setdirector(string name)
{
    director = name;
}
string Films::Getdirector()
{
    return director;
}
void Films::Setnameofclass(string name)
{
    nameofclass = name;
}
string Films::Getnameofclass()
{
    return nameofclass;
}
void Films::Setduration(unsigned int name)
{
    duration = name;
}
unsigned int Films::Getduration()
{
    return duration;
}
void action_movie::Action_scenes()
{
    cout << "� ������ ������ ������������� ����� " << action_scenes << " ���� ����\n";
}
void action_movie::fillfields()
    {
        char ch;
        cout << "������� �������� ������ ������������� ";
        cin >> country;
        cout << endl;
        cout << "������� �������� ������ ";
        cin >> title;
        cout << endl;
        cout << "������� ��� �������� ";
        cin >> director;
        cout << endl;
        cout << "������� ����������������� ������ ";
        cin >> duration;
        if (duration < 0) cin.setstate(ios_base::failbit);
        while((ch = getchar()) != '\n');
        while(cin.fail())
        {
            cin.clear();
            cout << "������� ����������������� ������ ";
            cin >> duration;
            while((ch = getchar()) != '\n');
            if (duration < 0) cin.setstate(ios_base::failbit);
        }
        cout << endl;
        cout << "������� ������� ������ ";
        cin >> rating;
        if (rating < 0) cin.setstate(ios_base::failbit);
        while((ch = getchar()) != '\n');
        while(cin.fail())
        {
            cin.clear();
            cout << "������� ������� ������ ";
            cin >> rating;
            while((ch = getchar()) != '\n');
            if (rating < 0) cin.setstate(ios_base::failbit);
        }
        cout << endl;
        cout << "������� ���������� ������������ ���� � ������ ";
        cin >> action_scenes;
        if (action_scenes < 0) cin.setstate(ios_base::failbit);
        while((ch = getchar()) != '\n');
        while(cin.fail())
        {
            cin.clear();
            cout << "������� ���������� ������������ ���� � ������ ";
            cin >> action_scenes;
            while((ch = getchar()) != '\n');
            if (action_scenes < 0) cin.setstate(ios_base::failbit);
        }
        cout << endl;
    }
void action_movie::watch() const
    {
        cout << "�� ���������� ������ ��� ��������� " << title << endl;
    }
void action_movie::eat_popcorn() const
    {
        cout << "�� ����� ������� ��� ��������� ������� ��� ��������� " << title << endl;
    }
void action_movie::assess()
    {
        char ch;
        int mymark;
        cout << "������� ������������� ���� ����� ��� ������� " << director << endl;
        cin >> mymark;
        if (mymark < 0) cin.setstate(ios_base::failbit);
        while((ch = getchar()) != '\n');
        while(cin.fail())
        {
            cin.clear();
            char ch;
            cout << "������� ������������� ���� ����� ��� ������� " << director << endl;
            cin >> mymark;
            if (mymark < 0) cin.setstate(ios_base::failbit);
            while((ch = getchar()) != '\n');
        }
        rating = (rating * 10 + mymark) / 11;
    }
void action_movie::Showfields()
    {
        cout << "| ������ |" << "| �������� |" << "| ������� |" << "| ����������������� |" << "| ������� ������ |" << "| ���������� ������������ ���� |";
        cout << endl;
        cout << left << setw(12) << country;
        cout << left << setw(12) << title;
        cout << left << setw(14) << director;
        cout << left << setw(19) << duration;
        cout << left << setw(17) << rating;
        cout << left << setw(10) << action_scenes;
        cout << endl;
    }
action_movie::action_movie(string city, string tit, string head, unsigned int dur, unsigned int rat): Films(city, tit, head, dur, rat)
    {
        nameofclass = "action_movie";
        action_scenes = 10;
        cout << "����������� � ����������� ������ action_movie" << endl;
    }
action_movie::action_movie (const action_movie & other)
    {
        country = other.country;
        title = other.title;
        director = other.director;
        duration = other.duration;
        rating = other.rating;
        action_scenes = other.action_scenes;
    }
action_movie::action_movie()
    {
        nameofclass = "action_movie";
        cout << "����������� ��� ���������� ������ action_movie" << endl;
    }
void action_movie::Setaction_scenes(unsigned int name)
    {
        action_scenes = name;
    }
unsigned int action_movie::Getaction_scenes()
    {
        return action_scenes;
    }
action_movie::~action_movie()
    {
        cout << "����������(�����������) ������ action_movie" << endl;
    }
void comedy::Showfunnymom()
    {
        cout << "� ������ ������ ������������� ����� " << funny_moments << " �������� ����\n";
    }
void comedy::fillfields()
    {
        char ch;
        cout << "������� �������� ������ ������������� ";
        cin >> country;
        cout << endl;
        cout << "������� �������� ������ ";
        cin >> title;
        cout << endl;
        cout << "������� ��� �������� ";
        cin >> director;
        cout << endl;
        cout << "������� ����������������� ������ ";
        cin >> duration;
        if (duration < 0) cin.setstate(ios_base::failbit);
        while((ch = getchar()) != '\n');
        while(cin.fail())
        {
            cin.clear();
            cout << "������� ����������������� ������ ";
            cin >> duration;
            while((ch = getchar()) != '\n');
            if (duration < 0) cin.setstate(ios_base::failbit);
        }
        cout << endl;
        cout << "������� ������� ������ ";
        cin >> rating;
        if (rating < 0) cin.setstate(ios_base::failbit);
        while((ch = getchar()) != '\n');
        while(cin.fail())
        {
            cin.clear();
            cout << "������� ������� ������ ";
            cin >> rating;
            while((ch = getchar()) != '\n');
            if (rating < 0) cin.setstate(ios_base::failbit);
        }
        cout << endl;
        cout << "������� ���������� ������� �������� � ������ ";
        cin >> funny_moments;
        if (funny_moments < 0) cin.setstate(ios_base::failbit);
        while((ch = getchar()) != '\n');
        while(cin.fail())
        {
            cin.clear();
            cout << "������� ���������� ������� �������� � ������ ";
            cin >> funny_moments;
            while((ch = getchar()) != '\n');
            if (funny_moments < 0) cin.setstate(ios_base::failbit);
        }
        cout << endl;
    }
void comedy::watch() const
    {
        cout << "�� ���������� ������� ��� ��������� " << title << endl;
    }
void comedy::eat_popcorn() const
    {
        cout << "�� ����� ������� ��� ��������� ������� ��� ��������� " << title << endl;
    }
void comedy::assess()
    {
        char ch;
        int mymark;
        cout << "������� ������������� ���� �����, ���������� �������� ��� " << director << endl;
        cin >> mymark;
        if (mymark < 0) cin.setstate(ios_base::failbit);
        while((ch = getchar()) != '\n');
        while(cin.fail())
        {
            cin.clear();
            char ch;
            cout << "������� ������������� ���� �����, ���������� �������� ��� " << director << endl;
            cin >> mymark;
            if (mymark < 0) cin.setstate(ios_base::failbit);
            while((ch = getchar()) != '\n');
        }
        rating = (rating * 10 + mymark) / 11;
    }
void comedy::Showfields()
    {
        cout << "| ������ |" << "| �������� |" << "| ������� |" << "| ����������������� |" << "| ������� ������ |"<< "| ���������� ������� ���� |";
        cout << endl;
        cout << left << setw(12) << country;
        cout << left << setw(12) << title;
        cout << left << setw(14) << director;
        cout << left << setw(19) << duration;
        cout << left << setw(17) << rating;
        cout << left << setw(10) << funny_moments;
        cout << endl;
    }
comedy::comedy(string city, string tit, string head, unsigned int dur, unsigned int rat): Films(city, tit, head, dur, rat)
    {
        nameofclass = "comedy";
        cout << "����������� � ����������� ������ comedy" << endl;
    }
comedy::comedy (const comedy & other)
    {
        country = other.country;
        title = other.title;
        director = other.director;
        duration = other.duration;
        rating = other.rating;
        funny_moments = other.funny_moments;
    }
comedy::comedy()
    {
        nameofclass = "comedy";
        cout << "����������� ��� ���������� ������ comedy" << endl;
    }
comedy::~comedy()
    {
        cout << "����������(�����������) ������ comedy" << endl;
    }
void comedy::Setfunny_moments(unsigned int name)
    {
        funny_moments = name;
    }
unsigned int comedy::Getfunny_moments()
    {
        return funny_moments;
    }
void cartoon::Assess_quality()
    {
        cout << "�������� ��������� ������� ������������ ������������ " << drawquality << " ������\n";
    }
void cartoon::fillfields()
    {
        char ch;
        cout << "������� �������� ������ ������������� ";
        cin >> country;
        cout << endl;
        cout << "������� �������� ������ ";
        cin >> title;
        cout << endl;
        cout << "������� ��� �������� ";
        cin >> director;
        cout << endl;
        cout << "������� ����������������� ������ ";
        cin >> duration;
        if (duration < 0) cin.setstate(ios_base::failbit);
        while((ch = getchar()) != '\n');
        while(cin.fail())
        {
            cin.clear();
            cout << "������� ����������������� ������ ";
            cin >> duration;
            while((ch = getchar()) != '\n');
            if (duration < 0) cin.setstate(ios_base::failbit);
        }
        cout << endl;
        cout << "������� ������� ������ ";
        cin >> rating;
        if (rating < 0) cin.setstate(ios_base::failbit);
        while((ch = getchar()) != '\n');
        while(cin.fail())
        {
            cin.clear();
            cout << "������� ������� ������ ";
            cin >> rating;
            while((ch = getchar()) != '\n');
            if (rating < 0) cin.setstate(ios_base::failbit);
        }
        cout << endl;
        cout << "������� �������� ����������� � ����������� ";
        cin >> drawquality;
        if (drawquality < 0) cin.setstate(ios_base::failbit);
        while((ch = getchar()) != '\n');
        while(cin.fail())
        {
            cin.clear();
            cout << "������� �������� ����������� � ����������� ";
            cin >> drawquality;
            while((ch = getchar()) != '\n');
            if (drawquality < 0) cin.setstate(ios_base::failbit);
        }
        cout << endl;
    }
void cartoon::watch() const
    {
        cout << "�� ���������� ���������� ��� ��������� " << title << endl;
    }
void cartoon::eat_popcorn() const
    {
        cout << "�� ����� ������� ��� ��������� ����������� ��� ��������� " << title << endl;
    }
void cartoon::assess()
    {
        char ch;
        int mymark;
        cout << "������� ������������� ���� �����, ���������� �������� ��� " << director << endl;
        cin >> mymark;
        if (mymark < 0) cin.setstate(ios_base::failbit);
        while((ch = getchar()) != '\n');
        while(cin.fail())
        {
            cin.clear();
            char ch;
            cout << "������� ������������� ���� �����, ���������� �������� ��� " << director << endl;
            cin >> mymark;
            if (mymark < 0) cin.setstate(ios_base::failbit);
            while((ch = getchar()) != '\n');
        }
        rating = (rating * 10 + mymark) / 11;
    }
void cartoon::Showfields()
    {
        cout << "| ������ |" << "| �������� |" << "| ������� |" << "| ����������������� |" << "| ������� ������ |" << "| �������� ������� |" << "|  |";
        cout << endl;
        cout << left << setw(12) << country;
        cout << left << setw(12) << title;
        cout << left << setw(14) << director;
        cout << left << setw(19) << duration;
        cout << left << setw(18) << rating;
        cout << left << setw(10) << drawquality;
        cout << endl;
    }
cartoon::cartoon(string city, string tit, string head, unsigned int dur, unsigned int rat): Films(city, tit, head, dur, rat)
    {
        nameofclass = "cartoon";
        cout << "����������� � ����������� ������ cartoon" << endl;
    }
cartoon::cartoon(const cartoon & other)
    {
        country = other.country;
        title = other.title;
        director = other.director;
        duration = other.duration;
        rating = other.rating;
        drawquality = other.drawquality;
    }
cartoon::cartoon()
    {
        nameofclass = "cartoon";
        cout << "����������� ��� ���������� ������ cartoon" << endl;
    }
cartoon::~cartoon()
    {
        cout << "����������(�����������) ������ cartoon" << endl;
    }
void cartoon::Setdrawquality(double name)
    {
        drawquality = name;
    }
double cartoon::Getdrawquality()
    {
        return drawquality;
    }
void horrors::Showhorrorscenes()
    {
        cout << "� ������ ������ ������������� �����" << horrorscenes << " �������� ����" << endl;
    }
void horrors::fillfields()
    {
        char ch;
        cout << "������� �������� ������ ������������� ";
        cin >> country;
        cout << endl;
        cout << "������� �������� ������ ";
        cin >> title;
        cout << endl;
        cout << "������� ��� �������� ";
        cin >> director;
        cout << endl;
        cout << "������� ����������������� ������ ";
        cin >> duration;
        if (duration < 0) cin.setstate(ios_base::failbit);
        while((ch = getchar()) != '\n');
        while(cin.fail())
        {
            cin.clear();
            while((ch = getchar()) != '\n');
            cout << "������� ����������������� ������ ";
            cin >> duration;
            while((ch = getchar()) != '\n');
            if (duration < 0) cin.setstate(ios_base::failbit);
        }
        cout << endl;
        cout << "������� ������� ������ ";
        cin >> rating;
        if (rating < 0) cin.setstate(ios_base::failbit);
        while((ch = getchar()) != '\n');
        while(cin.fail())
        {
            cin.clear();
            cout << "������� ������� ������ ";
            cin >> rating;
            while((ch = getchar()) != '\n');
            if (rating < 0) cin.setstate(ios_base::failbit);
        }
        cout << endl;
        cout << "������� ���������� �������� ���� � ������ ";
        cin >> horrorscenes;
        if (horrorscenes < 0) cin.setstate(ios_base::failbit);
        while((ch = getchar()) != '\n');
        while(cin.fail())
        {
            cin.clear();
            cout << "������� ���������� �������� ���� � ������ ";
            cin >> horrorscenes;
            while((ch = getchar()) != '\n');
            if (horrorscenes < 0) cin.setstate(ios_base::failbit);
        }
        cout << endl;
    }
void horrors::watch() const
    {
        cout << "�� ���������� ���������� ��� ��������� " << title << endl;
    }
void horrors::eat_popcorn() const
    {
        cout << "�� ����� ������� ��� ��������� ����������� ��� ��������� " << title << endl;
    }
void horrors::assess()
    {
        char ch;
        int mymark;
        cout << "������� ������������� ���� �����, ���������� �������� ��� " << director << endl;
        cin >> mymark;
        if (mymark < 0) cin.setstate(ios_base::failbit);
        while((ch = getchar()) != '\n');
        while(cin.fail())
        {
            cin.clear();
            char ch;
            cout << "������� ������������� ���� �����, ���������� �������� ��� " << director << endl;
            cin >> mymark;
            if (mymark < 0) cin.setstate(ios_base::failbit);
            while((ch = getchar()) != '\n');
        }
        rating = (rating * 10 + mymark) / 11;
    }
void horrors::Showfields()
    {
        cout << "| ������ |" << "| �������� |" << "| ������� |" << "| ����������������� |" << "| ������� ������ |" << "| ���������� �������� ���� |";
        cout << endl;
        cout << left << setw(12) << country;
        cout << left << setw(12) << title;
        cout << left << setw(14) << director;
        cout << left << setw(19) << duration;
        cout << left << setw(17) << rating;
        cout << left << setw(10) << horrorscenes;
        cout << endl;
    }
horrors::horrors(string city, string tit, string head, unsigned int dur, unsigned int rat): Films(city, tit, head, dur, rat)
    {
        nameofclass = "horrors";
        cout << "����������� � ����������� ������ horrors" << endl;
    }
horrors::horrors (const horrors & other)
    {
        country = other.country;
        title = other.title;
        director = other.director;
        duration = other.duration;
        rating = other.rating;
        horrorscenes = other.horrorscenes;
    }
horrors::horrors()
    {
        nameofclass = "horrors";
        cout << "����������� ��� ���������� ������ horrors" << endl;
    }
horrors::~horrors()
    {
        cout << "����������(�����������) ������ horrors" << endl;
    }
void horrors::Sethorrorscenes(unsigned int name)
    {
        horrorscenes = name;
    }
unsigned int horrors::Gethorrorscenes()
    {
        return horrorscenes;
    }
