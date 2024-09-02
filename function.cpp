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
    cout << "Деструктор Films" << endl;
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
    cout << "В данном фильме насчитывается около " << action_scenes << " сцен драк\n";
}
void action_movie::fillfields()
    {
        char ch;
        cout << "Введите название страны производителя ";
        cin >> country;
        cout << endl;
        cout << "Введите название фильма ";
        cin >> title;
        cout << endl;
        cout << "Введите имя режжисёра ";
        cin >> director;
        cout << endl;
        cout << "Введите продолжительность фильма ";
        cin >> duration;
        if (duration < 0) cin.setstate(ios_base::failbit);
        while((ch = getchar()) != '\n');
        while(cin.fail())
        {
            cin.clear();
            cout << "Введите продолжительность фильма ";
            cin >> duration;
            while((ch = getchar()) != '\n');
            if (duration < 0) cin.setstate(ios_base::failbit);
        }
        cout << endl;
        cout << "Введите рейтинг фильма ";
        cin >> rating;
        if (rating < 0) cin.setstate(ios_base::failbit);
        while((ch = getchar()) != '\n');
        while(cin.fail())
        {
            cin.clear();
            cout << "Введите рейтинг фильма ";
            cin >> rating;
            while((ch = getchar()) != '\n');
            if (rating < 0) cin.setstate(ios_base::failbit);
        }
        cout << endl;
        cout << "Введите количество динамических сцен в фильме ";
        cin >> action_scenes;
        if (action_scenes < 0) cin.setstate(ios_base::failbit);
        while((ch = getchar()) != '\n');
        while(cin.fail())
        {
            cin.clear();
            cout << "Введите количество динамических сцен в фильме ";
            cin >> action_scenes;
            while((ch = getchar()) != '\n');
            if (action_scenes < 0) cin.setstate(ios_base::failbit);
        }
        cout << endl;
    }
void action_movie::watch() const
    {
        cout << "Вы посмотрели боевик под названием " << title << endl;
    }
void action_movie::eat_popcorn() const
    {
        cout << "Вы съели попкорн при просмотре боевика под названием " << title << endl;
    }
void action_movie::assess()
    {
        char ch;
        int mymark;
        cout << "Оцените просмотренный Вами фильм под началом " << director << endl;
        cin >> mymark;
        if (mymark < 0) cin.setstate(ios_base::failbit);
        while((ch = getchar()) != '\n');
        while(cin.fail())
        {
            cin.clear();
            char ch;
            cout << "Оцените просмотренный Вами фильм под началом " << director << endl;
            cin >> mymark;
            if (mymark < 0) cin.setstate(ios_base::failbit);
            while((ch = getchar()) != '\n');
        }
        rating = (rating * 10 + mymark) / 11;
    }
void action_movie::Showfields()
    {
        cout << "| Страна |" << "| Название |" << "| Режиссёр |" << "| Продолжительность |" << "| Рейтинг фильма |" << "| Количество динамических сцен |";
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
        cout << "Конструктор с параметрами класса action_movie" << endl;
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
        cout << "Конструктор без параметров класса action_movie" << endl;
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
        cout << "Деструктор(виртуальный) класса action_movie" << endl;
    }
void comedy::Showfunnymom()
    {
        cout << "В данном фильме насчитывается около " << funny_moments << " комичных сцен\n";
    }
void comedy::fillfields()
    {
        char ch;
        cout << "Введите название страны производителя ";
        cin >> country;
        cout << endl;
        cout << "Введите название фильма ";
        cin >> title;
        cout << endl;
        cout << "Введите имя режжисёра ";
        cin >> director;
        cout << endl;
        cout << "Введите продолжительность фильма ";
        cin >> duration;
        if (duration < 0) cin.setstate(ios_base::failbit);
        while((ch = getchar()) != '\n');
        while(cin.fail())
        {
            cin.clear();
            cout << "Введите продолжительность фильма ";
            cin >> duration;
            while((ch = getchar()) != '\n');
            if (duration < 0) cin.setstate(ios_base::failbit);
        }
        cout << endl;
        cout << "Введите рейтинг фильма ";
        cin >> rating;
        if (rating < 0) cin.setstate(ios_base::failbit);
        while((ch = getchar()) != '\n');
        while(cin.fail())
        {
            cin.clear();
            cout << "Введите рейтинг фильма ";
            cin >> rating;
            while((ch = getchar()) != '\n');
            if (rating < 0) cin.setstate(ios_base::failbit);
        }
        cout << endl;
        cout << "Введите количество смешных моментов в фильме ";
        cin >> funny_moments;
        if (funny_moments < 0) cin.setstate(ios_base::failbit);
        while((ch = getchar()) != '\n');
        while(cin.fail())
        {
            cin.clear();
            cout << "Введите количество смешных моментов в фильме ";
            cin >> funny_moments;
            while((ch = getchar()) != '\n');
            if (funny_moments < 0) cin.setstate(ios_base::failbit);
        }
        cout << endl;
    }
void comedy::watch() const
    {
        cout << "Вы посмотрели комедию под названием " << title << endl;
    }
void comedy::eat_popcorn() const
    {
        cout << "Вы съели попкорн при просмотре комедии под названием " << title << endl;
    }
void comedy::assess()
    {
        char ch;
        int mymark;
        cout << "Оцените просмотренный Вами фильм, директором которого был " << director << endl;
        cin >> mymark;
        if (mymark < 0) cin.setstate(ios_base::failbit);
        while((ch = getchar()) != '\n');
        while(cin.fail())
        {
            cin.clear();
            char ch;
            cout << "Оцените просмотренный Вами фильм, директором которого был " << director << endl;
            cin >> mymark;
            if (mymark < 0) cin.setstate(ios_base::failbit);
            while((ch = getchar()) != '\n');
        }
        rating = (rating * 10 + mymark) / 11;
    }
void comedy::Showfields()
    {
        cout << "| Страна |" << "| Название |" << "| Режиссёр |" << "| Продолжительность |" << "| Рейтинг фильма |"<< "| Количество смешных сцен |";
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
        cout << "Конструктор с параметрами класса comedy" << endl;
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
        cout << "Конструктор без параметров класса comedy" << endl;
    }
comedy::~comedy()
    {
        cout << "Деструктор(виртуальный) класса comedy" << endl;
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
        cout << "Качество отрисовки данного мультсериала соотвествует " << drawquality << " баллам\n";
    }
void cartoon::fillfields()
    {
        char ch;
        cout << "Введите название страны производителя ";
        cin >> country;
        cout << endl;
        cout << "Введите название фильма ";
        cin >> title;
        cout << endl;
        cout << "Введите имя режжисёра ";
        cin >> director;
        cout << endl;
        cout << "Введите продолжительность фильма ";
        cin >> duration;
        if (duration < 0) cin.setstate(ios_base::failbit);
        while((ch = getchar()) != '\n');
        while(cin.fail())
        {
            cin.clear();
            cout << "Введите продолжительность фильма ";
            cin >> duration;
            while((ch = getchar()) != '\n');
            if (duration < 0) cin.setstate(ios_base::failbit);
        }
        cout << endl;
        cout << "Введите рейтинг фильма ";
        cin >> rating;
        if (rating < 0) cin.setstate(ios_base::failbit);
        while((ch = getchar()) != '\n');
        while(cin.fail())
        {
            cin.clear();
            cout << "Введите рейтинг фильма ";
            cin >> rating;
            while((ch = getchar()) != '\n');
            if (rating < 0) cin.setstate(ios_base::failbit);
        }
        cout << endl;
        cout << "Введите качество изображения в мультфильме ";
        cin >> drawquality;
        if (drawquality < 0) cin.setstate(ios_base::failbit);
        while((ch = getchar()) != '\n');
        while(cin.fail())
        {
            cin.clear();
            cout << "Введите качество изображения в мультфильме ";
            cin >> drawquality;
            while((ch = getchar()) != '\n');
            if (drawquality < 0) cin.setstate(ios_base::failbit);
        }
        cout << endl;
    }
void cartoon::watch() const
    {
        cout << "Вы посмотрели мультфильм под названием " << title << endl;
    }
void cartoon::eat_popcorn() const
    {
        cout << "Вы съели попкорн при просмотре мультфильма под названием " << title << endl;
    }
void cartoon::assess()
    {
        char ch;
        int mymark;
        cout << "Оцените просмотренный Вами фильм, директором которого был " << director << endl;
        cin >> mymark;
        if (mymark < 0) cin.setstate(ios_base::failbit);
        while((ch = getchar()) != '\n');
        while(cin.fail())
        {
            cin.clear();
            char ch;
            cout << "Оцените просмотренный Вами фильм, директором которого был " << director << endl;
            cin >> mymark;
            if (mymark < 0) cin.setstate(ios_base::failbit);
            while((ch = getchar()) != '\n');
        }
        rating = (rating * 10 + mymark) / 11;
    }
void cartoon::Showfields()
    {
        cout << "| Страна |" << "| Название |" << "| Режиссёр |" << "| Продолжительность |" << "| Рейтинг фильма |" << "| Качество рисовки |" << "|  |";
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
        cout << "Конструктор с параметрами класса cartoon" << endl;
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
        cout << "Конструктор без параметров класса cartoon" << endl;
    }
cartoon::~cartoon()
    {
        cout << "Деструктор(виртуальный) класса cartoon" << endl;
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
        cout << "В данном фильме насчитывается около" << horrorscenes << " страшных сцен" << endl;
    }
void horrors::fillfields()
    {
        char ch;
        cout << "Введите название страны производителя ";
        cin >> country;
        cout << endl;
        cout << "Введите название фильма ";
        cin >> title;
        cout << endl;
        cout << "Введите имя режжисёра ";
        cin >> director;
        cout << endl;
        cout << "Введите продолжительность фильма ";
        cin >> duration;
        if (duration < 0) cin.setstate(ios_base::failbit);
        while((ch = getchar()) != '\n');
        while(cin.fail())
        {
            cin.clear();
            while((ch = getchar()) != '\n');
            cout << "Введите продолжительность фильма ";
            cin >> duration;
            while((ch = getchar()) != '\n');
            if (duration < 0) cin.setstate(ios_base::failbit);
        }
        cout << endl;
        cout << "Введите рейтинг фильма ";
        cin >> rating;
        if (rating < 0) cin.setstate(ios_base::failbit);
        while((ch = getchar()) != '\n');
        while(cin.fail())
        {
            cin.clear();
            cout << "Введите рейтинг фильма ";
            cin >> rating;
            while((ch = getchar()) != '\n');
            if (rating < 0) cin.setstate(ios_base::failbit);
        }
        cout << endl;
        cout << "Введите количество страшных сцен в фильме ";
        cin >> horrorscenes;
        if (horrorscenes < 0) cin.setstate(ios_base::failbit);
        while((ch = getchar()) != '\n');
        while(cin.fail())
        {
            cin.clear();
            cout << "Введите количество страшных сцен в фильме ";
            cin >> horrorscenes;
            while((ch = getchar()) != '\n');
            if (horrorscenes < 0) cin.setstate(ios_base::failbit);
        }
        cout << endl;
    }
void horrors::watch() const
    {
        cout << "Вы посмотрели мультфильм под названием " << title << endl;
    }
void horrors::eat_popcorn() const
    {
        cout << "Вы съели попкорн при просмотре мультфильма под названием " << title << endl;
    }
void horrors::assess()
    {
        char ch;
        int mymark;
        cout << "Оцените просмотренный Вами фильм, директором которого был " << director << endl;
        cin >> mymark;
        if (mymark < 0) cin.setstate(ios_base::failbit);
        while((ch = getchar()) != '\n');
        while(cin.fail())
        {
            cin.clear();
            char ch;
            cout << "Оцените просмотренный Вами фильм, директором которого был " << director << endl;
            cin >> mymark;
            if (mymark < 0) cin.setstate(ios_base::failbit);
            while((ch = getchar()) != '\n');
        }
        rating = (rating * 10 + mymark) / 11;
    }
void horrors::Showfields()
    {
        cout << "| Страна |" << "| Название |" << "| Режиссёр |" << "| Продолжительность |" << "| Рейтинг фильма |" << "| Количество страшных сцен |";
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
        cout << "Конструктор с параметрами класса horrors" << endl;
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
        cout << "Конструктор без параметров класса horrors" << endl;
    }
horrors::~horrors()
    {
        cout << "Деструктор(виртуальный) класса horrors" << endl;
    }
void horrors::Sethorrorscenes(unsigned int name)
    {
        horrorscenes = name;
    }
unsigned int horrors::Gethorrorscenes()
    {
        return horrorscenes;
    }
