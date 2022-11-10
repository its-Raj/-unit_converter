/**
 * @file Unit_converter.cpp
 * 
 * @author Rajvardhan Desai 
 * 
 * @brief Here is a Unit_converter using C++ that will convert one unit into other relevant units.
 * @copyright Copyright (c) 2022
 */

#include <bits/stdc++.h>

#include "D:\CPP\Project\length.h"
#include "D:\CPP\Project\currency.h"
#include "D:\CPP\Project\mass.h"
#include "D:\CPP\Project\time.h"
#include "D:\CPP\Project\speed.h"
#include "D:\CPP\Project\dtr.h"


using namespace std;

void goto_main();
void chk_x(int x);
void unit_converter();

int main()
{
    unit_converter();
    return 0;
}

void unit_converter()
{
    // This function will ask the user to choose the main option of unit converter.
    length_converter l;
    Currency_converter c;
    Mass_converter m;
    Time_converter t;
    Speed_converter s;
    DTR_converter dtr;

    int choice, x;
    system("cls");
    templet1();

    cout << "\t\t\t\tSelect one unit from the following to convert into another related unit: " << endl;

    cout << "\n\t\t\t\t1.length " << endl;
    cout << "\t\t\t\t2.Mass " << endl;
    cout << "\t\t\t\t3.Time " << endl;
    cout << "\t\t\t\t4.Speed " << endl;
    cout << "\t\t\t\t5.Currency " << endl;
    cout << "\t\t\t\t6.Data Transfer Rate " << endl;
    cout << "\t\t\t\t7.About Us " << endl;
    cout << "\t\t\t\t8.Exit " << endl;

    cout << "\n\t\t\t\tEnter Choice : ";
    cin >> choice;

    switch (choice)
    {

    case 1:
        x = l.convert_L();
        chk_x(x);
        break;

    case 2:
        x = m.convert_M();
        chk_x(x);
        break;

    case 3:
        x = t.convert_T();
        chk_x(x);
        break;

    case 4:
        x = s.convert_S();
        chk_x(x);
        break;

    case 5:
        x = c.convert_C();
        chk_x(x);
        break;

    case 6:
        x = dtr.convert_dtr();
        chk_x(x);
        break;

    case 7:
        about_us();
        break;

    case 8:
        exit;
        break;

    default:
        invaild_input();
        unit_converter();
        break;
    }

    if (choice != 8 && choice < 8)
        goto_main();
}

void goto_main()
{
    // This function will ask the user whether he wants to convert another unit or not.
    char ans;
    cout << "\n\n\t\t\t\tDo you want to convert another unit ? [Y/N] : ";
    cin >> ans;

    if (ans == 'Y' || ans == 'y')
        main();

    else if (ans == 'N' || ans == 'n')
    {
        cout << "\n\t\t\t\tSee you Soon ^_^";
        exit;
    }
    else
    {
        invaild_input();
        goto_main();
    }
}

void chk_x(int x)
{
    // This function will check the value of x; if it is 0, it will call the unit_converter() function.
    if (x == 0)
        unit_converter();
}