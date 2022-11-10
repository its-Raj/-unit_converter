#ifndef Time_H
#define Time_H

#include <iostream>
#include <cmath>

#include "D:\unit-converter\fn.hpp"

using namespace std;

class Time
{
protected:
    double ms, sec, min, hours, day, week;
    double Time;
};

class Time_converter : public Time
{
protected:
    // Functions for unit Conversion
    //------------------------- ms to other ---------------------------//
    inline double ms_to_sec(double ms) { return (ms / 1000.0); }
    inline double ms_to_min(double ms) { return (ms / 60000.0); }
    inline double ms_to_hours(double ms) { return (ms / 3600000.0); }
    inline double ms_to_day(double ms) { return (ms / 86400000.0); }
    inline double ms_to_week(double ms) { return (ms / 604800000.0); }

    //-------------------------- sec to other---------------------------//
    inline double sec_to_ms(double sec) { return (sec * 1000); }
    inline double sec_to_min(double sec) { return (sec / 60.0); }
    inline double sec_to_hours(double sec) { return (sec / 3600.0); }
    inline double sec_to_day(double sec) { return (sec / 86400.0); }
    inline double sec_to_week(double sec) { return (sec / 604800.0); }

    //--------------------------min to other-------------------------//
    inline double min_to_ms(double min) { return (min * 60000.0); }
    inline double min_to_sec(double min) { return (min * 60.0); }
    inline double min_to_hours(double min) { return (min / 60.0); }
    inline double min_to_day(double min) { return (min / 1440.0); }
    inline double min_to_week(double min) { return (min / 10080.0); }

    //---------------------------hours to other -------------------------//
    inline double hours_to_ms(double hours) { return (hours * 3600000.0); }
    inline double hours_to_sec(double hours) { return (hours * 86400.0); }
    inline double hours_to_min(double hours) { return (hours * 1440.0); }
    inline double hours_to_day(double hours) { return (hours / 24.0); }
    inline double hours_to_week(double hours) { return (hours / 168.0); }

    //---------------------------day to other -------------------------//
    inline double day_to_ms(double day) { return (day * 86400000.0); }
    inline double day_to_sec(double day) { return (day * 86400.0); }
    inline double day_to_min(double day) { return (day * 1440.0); }
    inline double day_to_hours(double day) { return (day * 24.0); }
    inline double day_to_week(double day) { return (day * 7.0); }

    //---------------------------week to other -------------------------//
    inline double week_to_ms(double week) { return (week * 604800000.0); }
    inline double week_to_sec(double week) { return (week * 604800.0); }
    inline double week_to_min(double week) { return (week * 10080.0); }
    inline double week_to_hours(double week) { return (week * 168.0); }
    inline double week_to_day(double week) { return (week * 7.0); }

    string m_ms() { return "\n\t\t\t\tTime in Millisecond : "; }
    string m_sec() { return "\n\t\t\t\tTime in Second : "; }
    string m_min() { return "\n\t\t\t\tTime in Minute : "; }
    string m_hours() { return "\n\t\t\t\tTime in Hour : "; }
    string m_day() { return "\n\t\t\t\tTime in day : "; }
    string m_week() { return "\n\t\t\t\tTime in week : "; }

    void ms_to_other();
    void sec_to_other();
    void min_to_other();
    void hours_to_other();
    void day_to_other();
    void week_to_other();

public:
    int ch, ch1;

    int convert_T()
    {
        system("cls");

        templet_t();
        cout << "\t\t\t\t1.Millisecond to others " << endl;
        cout << "\t\t\t\t2.Second to others " << endl;
        cout << "\t\t\t\t3.Minute to others " << endl;
        cout << "\t\t\t\t4.Hour to others " << endl;
        cout << "\t\t\t\t5.day to others " << endl;
        cout << "\t\t\t\t6.week to others " << endl;

        cout << "\n\t\t\t\t0.back " << endl;

        cout << endl
             << "\n\t\t\t\t"
             << "Enter Choice : ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            ms_to_other();
            break;

        case 2:
            sec_to_other();
            break;

        case 3:
            min_to_other();
            break;

        case 4:
            hours_to_other();
            break;

        case 5:
            day_to_other();
            break;

        case 6:
            week_to_other();
            break;

        case 0:
            return 0;

        default:
            invaild_input();
            convert_T();
            break;
        }
        return 1;
    }
};

void Time_converter ::ms_to_other()
{
    system("cls");
    templet_t();
    cout << "\t\t\t\t1.Millisecond to Second " << endl;
    cout << "\t\t\t\t2.Millisecond to Minute  " << endl;
    cout << "\t\t\t\t3.Millisecond to Hour " << endl;
    cout << "\t\t\t\t4.Millisecond to day " << endl;
    cout << "\t\t\t\t5.Millisecond to week " << endl;
    cout << "\n\t\t\t\t0.Back " << endl;

    cout << endl
         << "\n\t\t\t\t"
         << "Enter Choice : ";
    cin >> ch1;

    if (ch1 < 6 && ch1 > 0)
    {
        cout << endl
             << "\n\t\t\t\tEnter Time in Millisecond : ";
        cin >> Time;
    }

    switch (ch1)
    {
    case 1:
        cout << endl
             << m_sec() << ms_to_sec(Time);
        break;

    case 2:
        cout << endl
             << m_min() << ms_to_min(Time);
        break;

    case 3:
        cout << endl
             << m_hours() << ms_to_hours(Time);
        break;

    case 4:
        cout << endl
             << m_day() << ms_to_day(Time);
        break;

    case 5:
        cout << endl
             << m_week() << ms_to_week(Time);
        break;

    case 0:
        convert_T();
        break;

    default:
        invaild_input();
        ms_to_other();
        break;
    }
}

void Time_converter ::sec_to_other()
{
    system("cls");
    templet_t();
    cout << "\t\t\t\t1.Second to Millisecond " << endl;
    cout << "\t\t\t\t2.Second to Minute  " << endl;
    cout << "\t\t\t\t3.Second to Hour " << endl;
    cout << "\t\t\t\t4.Second to day " << endl;
    cout << "\t\t\t\t5.Second to week " << endl;
    cout << "\n\t\t\t\t0.Back " << endl;

    cout << endl
         << "\n\t\t\t\t"
         << "Enter Choice : ";
    cin >> ch1;

    if (ch1 < 6 && ch1 > 0)
    {
        cout << endl
             << "\n\t\t\t\tEnter Time in Second : ";
        cin >> Time;
    }

    switch (ch1)
    {
    case 1:
        cout << endl
             << m_ms() << sec_to_ms(Time);
        break;

    case 2:
        cout << endl
             << m_min() << sec_to_min(Time);
        break;

    case 3:
        cout << endl
             << m_hours() << sec_to_hours(Time);
        break;

    case 4:
        cout << endl
             << m_day() << sec_to_day(Time);
        break;

    case 5:
        cout << endl
             << m_week() << sec_to_week(Time);
        break;

    case 0:
        convert_T();
        break;

    default:
        invaild_input();
        sec_to_other();
        break;
    }
}

void Time_converter ::min_to_other()
{
    system("cls");
    templet_t();
    cout << "\t\t\t\t1.Minute to Millisecond " << endl;
    cout << "\t\t\t\t2.Minute to Second  " << endl;
    cout << "\t\t\t\t3.Minute to Hour " << endl;
    cout << "\t\t\t\t4.Minute to day " << endl;
    cout << "\t\t\t\t5.Minute to week " << endl;
    cout << "\n\t\t\t\t0.Back " << endl;

    cout << endl
         << "\n\t\t\t\t"
         << "Enter Choice : ";
    cin >> ch1;

    if (ch1 < 6 && ch1 > 0)
    {
        cout << endl
             << "\n\t\t\t\tEnter Time in Minute : ";
        cin >> Time;
    }

    switch (ch1)
    {
    case 1:
        cout << endl
             << m_ms() << min_to_ms(Time);
        break;

    case 2:
        cout << endl
             << m_sec() << min_to_sec(Time);
        break;

    case 3:
        cout << endl
             << m_hours() << min_to_hours(Time);
        break;

    case 4:
        cout << endl
             << m_day() << min_to_day(Time);
        break;

    case 5:
        cout << endl
             << m_week() << min_to_week(Time);
        break;

    case 0:
        convert_T();
        break;

    default:
        invaild_input();
        min_to_other();
        break;
    }
}

void Time_converter ::hours_to_other()
{
    system("cls");
    templet_t();
    cout << "\t\t\t\t1.Hour to Millisecond " << endl;
    cout << "\t\t\t\t2.Hour to Second  " << endl;
    cout << "\t\t\t\t3.Hour to Minute " << endl;
    cout << "\t\t\t\t4.Hour to day " << endl;
    cout << "\t\t\t\t5.Hour to week " << endl;
    cout << "\n\t\t\t\t0.Back " << endl;

    cout << endl
         << "\n\t\t\t\t"
         << "Enter Choice : ";
    cin >> ch1;

    if (ch1 < 6 && ch1 > 0)
    {
        cout << endl
             << "\n\t\t\t\tEnter Time in Hour : ";
        cin >> Time;
    }

    switch (ch1)
    {
    case 1:
        cout << endl
             << m_ms() << hours_to_ms(Time);
        break;

    case 2:
        cout << endl
             << m_sec() << hours_to_sec(Time);
        break;

    case 3:
        cout << endl
             << m_min() << hours_to_min(Time);
        break;

    case 4:
        cout << endl
             << m_day() << hours_to_day(Time);
        break;

    case 5:
        cout << endl
             << m_week() << hours_to_week(Time);
        break;

    case 0:
        convert_T();
        break;

    default:
        invaild_input();
        hours_to_other();
        break;
    }
}

void Time_converter ::day_to_other()
{
    system("cls");
    templet_t();
    cout << "\t\t\t\t1.day to Millisecond " << endl;
    cout << "\t\t\t\t2.day to Second  " << endl;
    cout << "\t\t\t\t3.day to Minute " << endl;
    cout << "\t\t\t\t4.day to Hour " << endl;
    cout << "\t\t\t\t5.day to week " << endl;
    cout << "\n\t\t\t\t0.Back " << endl;

    cout << endl
         << "\n\t\t\t\t"
         << "Enter Choice : ";
    cin >> ch1;

    if (ch1 < 6 && ch1 > 0)
    {
        cout << endl
             << "\n\t\t\t\tEnter Time in day : ";
        cin >> Time;
    }

    switch (ch1)
    {
    case 1:
        cout << endl
             << m_ms() << day_to_ms(Time);
        break;

    case 2:
        cout << endl
             << m_sec() << day_to_sec(Time);
        break;

    case 3:
        cout << endl
             << m_min() << day_to_min(Time);
        break;

    case 4:
        cout << endl
             << m_hours() << day_to_hours(Time);
        break;

    case 5:
        cout << endl
             << m_week() << day_to_week(Time);
        break;

    case 0:
        convert_T();
        break;

    default:
        invaild_input();
        day_to_other();
        break;
    }
}

void Time_converter ::week_to_other()
{
    system("cls");
    templet_t();
    cout << "\t\t\t\t1.week to Millisecond  " << endl;
    cout << "\t\t\t\t2.week to Second  " << endl;
    cout << "\t\t\t\t3.week to Minute " << endl;
    cout << "\t\t\t\t4.week to Hour " << endl;
    cout << "\t\t\t\t5.week to day " << endl;
    cout << "\n\t\t\t\t0.Back " << endl;

    cout << endl
         << "\n\t\t\t\t"
         << "Enter Choice : ";
    cin >> ch1;

    if (ch1 < 6 && ch1 > 0)
    {
        cout << endl
             << "\n\t\t\t\tEnter Time in week : ";
        cin >> Time;
    }

    switch (ch1)
    {
    case 1:
        cout << endl
             << m_ms() << week_to_ms(Time);
        break;

    case 2:
        cout << endl
             << m_sec() << week_to_sec(Time);
        break;

    case 3:
        cout << endl
             << m_min() << week_to_min(Time);
        break;
    case 4:
        cout << endl
             << m_hours() << week_to_hours(Time);
        break;

    case 5:
        cout << endl
             << m_day() << week_to_day(Time);
        break;

    case 0:
        convert_T();
        break;

    default:
        invaild_input();
        week_to_other();
        break;
    }
}

#endif