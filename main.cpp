#include <iostream>
#include <clocale>
#include <iomanip>
#include <cstdio>
#include <cstring>
#include "header.h"
using namespace std;
int main()
{
    setlocale(0, "rus");
    Films* films[6];
    char ch;
    int menu, dmenu, i = 0;
    do
    {
        system("CLS");
        cout << "1 - добавление добавление нового объекта выбранного пользователем класса в массив" << endl << "2 - выполнение указанного метода базового класса для всех объектов массива (у каждого должен выполнится перегруженный вариант)" << endl
        << "3 - Вывод всех объектов в массиве" << endl << "4 - выполнение уникального для указанного объекта метода" << endl << "5 - Выход" << endl;
        cin >> menu;
        if (menu < 1) cin.setstate(ios_base::failbit);
        while((ch = getchar()) != '\n');
        while(cin.fail())
        {
            cin.clear();
            cout << "1 - добавление добавление нового объекта выбранного пользователем класса в массив" << endl << "2 - выполнение указанного метода базового класса для всех объектов массива (у каждого должен выполнится перегруженный вариант)" << endl
            << "3 - Вывод всех объектов в массиве" << endl << "4 - выполнение уникального для указанного объекта метода" << endl << "5 - Выход" << endl;
            cin >> menu;
            if (menu < 1) cin.setstate(ios_base::failbit);
            while((ch = getchar()) != '\n');
        }
        switch(menu)
        {
            case 1:
            {
                do
                {
                    system("CLS");
                    if (i > 5)
                    {
                        cout << "Массив элементов переполнен, хотите начать перезапись с первого элемента? y/any" << endl;
                        char c;
                        cin >> c;
                        while((ch = getchar()) != '\n');
                        if (c != 'y')
                            break;
                        i = 0;
                    }
                    cout << "1 - Объявить новый объект типа action_movie" << endl << "2 - Объявить новый объект типа comedy" << endl << "3 - Объявить новый объект типа horrors" << endl << "4 - Объявить новый объект типа cartoon" << endl << "5 - Выход из подменю" << endl;
                    cin >> dmenu;
                    while((ch = getchar()) != '\n');
                    while(cin.fail())
                    {
                        cin.clear();
                        cout << "1 - Объявить новый объект типа action_movie" << endl << "2 - Объявить новый объект типа comedy" << endl << "3 - Объявить новый объект типа horrors" << endl << "4 - Объявить новый объект типа cartoon" << endl << "5 - Выход из подменю" << endl;
                        cin >> dmenu;
                        while((ch = getchar()) != '\n');
                    }
                    switch(dmenu)
                    {
                        case 1:
                        {
                            films[i] = new(nothrow) action_movie();
                            if (films[i] == NULL)
                            {
                                cout << "Ошибка выделения памяти" << endl;
                                while(i)
                                {
                                    delete films[--i];
                                }
                                return -1;
                            }
                            films[i]->fillfields();
                            i++;
                            break;
                        }
                        case 2:
                        {
                            films[i] = new(nothrow) comedy();
                            if (films[i] == NULL)
                            {
                                cout << "Ошибка выделения памяти" << endl;
                                while(i)
                                {
                                    delete films[--i];
                                }
                                return -1;
                            }
                            films[i]->fillfields();
                            i++;
                            break;
                        }
                        case 3:
                        {
                            films[i] = new(nothrow) horrors();
                            if (films[i] == NULL)
                            {
                                cout << "Ошибка выделения памяти" << endl;
                                while(i)
                                {
                                    delete films[--i];
                                }
                                return -1;
                            }
                            films[i]->fillfields();
                            i++;
                            break;
                        }
                        case 4:
                        {
                            films[i] = new(nothrow) cartoon();
                            if (films[i] == NULL)
                            {
                                cout << "Ошибка выделения памяти" << endl;
                                while(i)
                                {
                                    delete films[--i];
                                }
                                return -1;
                            }
                            films[i]->fillfields();
                            i++;
                            break;
                        }
                        default: break;
                    }
                }
                while(dmenu != 5);
                break;
            }
            case 2:
            {
                if (i == 0)
                {
                    cout << "Массив пуст\n";
                    break;
                }
                dmenu = 0;
                do
                {
                    system("cls");
                    cout << "1 - выполнить метод assess" << endl << "2 - выполнить метод eat_popcorn" << endl << "3 - выполнить метод watch" << endl << "4 - Выход" << endl;
                    cin >> dmenu;
                    if (dmenu < 1) cin.setstate(ios_base::failbit);
                    while((ch = getchar()) != '\n');
                    while(cin.fail())
                    {
                        cin.clear();
                        cout << "1 - выполнить метод assess" << endl << "2 - выполнить метод eat_popcorn" << endl << "3 - выполнить метод watch" << endl << "4 - Выход" << endl;
                        cin >> dmenu;
                        if (dmenu < 1) cin.setstate(ios_base::failbit);
                        while((ch = getchar()) != '\n');
                    }
                    switch(dmenu)
                    {
                        case 1:
                        {
                            for (int j{0}; j < i; j++)
                            {
                                films[j]->Showname();
                                films[j]->assess();
                                system("pause");
                            }
                            break;
                        }
                        case 2:
                        {
                            for (int j{0}; j < i; j++)
                            {
                                films[j]->Showname();
                                films[j]->eat_popcorn();
                                system("pause");
                            }
                            break;
                        }
                        case 3:
                        {
                            for (int j{0}; j < i; j++)
                            {
                                films[j]->Showname();
                                films[j]->watch();
                                system("pause");
                            }
                            break;
                        }
                    }
                }
                while(dmenu != 4);
                break;
            }
            case 3:
            {
                if (i == 0)
                {
                    cout << "Массив пуст\n";
                    break;
                }
                int j = i;
                while(j--)
                {
                    films[j]->Showfields();
                }
                break;
            }
            case 4:
            {
                if (i == 0)
                {
                    cout << "Массив пуст\n";
                    break;
                }
                dmenu = 0;
                do
                {
                    system("cls");
                    cout << "Укажите, для какого по счёту объекта массива выполнить уникальный метод, для выхода введите -1" << endl;
                    cin >> dmenu;
                    if (dmenu < -1) cin.setstate(ios_base::failbit);
                    while((ch = getchar()) != '\n');
                    while(cin.fail())
                    {
                        cin.clear();
                        cout << "Укажите, для какого по счёту объекта массива выполнить уникальный метод, для выхода введите -1" << endl;
                        cin >> dmenu;
                        if (dmenu < -1) cin.setstate(ios_base::failbit);
                        while((ch = getchar()) != '\n');
                    }
                    if((dmenu > 0) && (dmenu <= i))
                    {
                        dmenu--;
                        if (typeid(*(films[dmenu])) == typeid(action_movie))
                        {
                            dynamic_cast<action_movie *>(films[dmenu])->Action_scenes();
                        }
                        else if (typeid(*(films[dmenu])) == typeid(comedy))
                        {
                            dynamic_cast<comedy *>(films[dmenu])->Showfunnymom();
                        }
                        else if (typeid(*(films[dmenu])) == typeid(cartoon))
                        {
                            dynamic_cast<cartoon *>(films[dmenu])->Assess_quality();
                        }
                        else if (typeid(*(films[dmenu])) == typeid(horrors))
                        {
                            dynamic_cast<horrors *>(films[dmenu])->Showhorrorscenes();
                        }
                        system("pause");
                    }
                }
                while(dmenu != -1);
                break;
            }
        }
        system("pause");
    }
    while(menu != 5);
    while(i)
    {
        delete films[--i];
    }
    return 0;
}
