#ifndef Speed_H
#define Speed_H

#include <iostream>
#include <cmath>

#include "D:\CPP\Project\fn.h"

using namespace std;

class Speed
{
protected:
    double fts, mps, kph, kont, mph;
    double Speed;
};

class Speed_converter : public Speed
{
protected:
    // Functions for unit Conversion
    //------------------------- fts to other ---------------------------//
    inline double fts_to_mps(double fts) { return (fts / 3.281); }
    inline double fts_to_kph(double fts) { return (fts * 1.097); }
    inline double fts_to_kont(double fts) { return (fts / 1.688); }
    inline double fts_to_mph(double fts) { return (fts / 1.467); }

    //-------------------------- mps to other---------------------------//
    inline double mps_to_fts(double mps) { return (mps * 3.281); }
    inline double mps_to_kph(double mps) { return (mps * 3.6); }
    inline double mps_to_kont(double mps) { return (mps * 1.944); }
    inline double mps_to_mph(double mps) { return (mps * 2.237); }

    //--------------------------kph to other-------------------------//
    inline double kph_to_fts(double kph) { return (kph / 1.097); }
    inline double kph_to_mps(double kph) { return (kph / 3.6); }
    inline double kph_to_kont(double kph) { return (kph / 1.852); }
    inline double kph_to_mph(double kph) { return (kph / 1.609); }

    //---------------------------kont to other -------------------------//
    inline double kont_to_fts(double kont) { return (kont * 1.688); }
    inline double kont_to_mps(double kont) { return (kont / 1.944); }
    inline double kont_to_kph(double kont) { return (kont * 1.852); }
    inline double kont_to_mph(double kont) { return (kont * 1.151); }

    //---------------------------mph to other -------------------------//
    inline double mph_to_fts(double mph) { return (mph * 1.467); }
    inline double mph_to_mps(double mph) { return (mph / 2.237); }
    inline double mph_to_kph(double mph) { return (mph * 1.609); }
    inline double mph_to_kont(double mph) { return (mph / 1.151); }

    string m_fts() { return "\n\t\t\t\tSpeed in Foot per second (fts) : "; }
    string m_mps() { return "\n\t\t\t\tSpeed in Meter per second (m/s) : "; }
    string m_kph() { return "\n\t\t\t\tSpeed in Kilometer per hour (kph) : "; }
    string m_kont() { return "\n\t\t\t\tSpeed in Kont : "; }
    string m_mph() { return "\n\t\t\t\tSpeed in Miles Per Hour (mph) : "; }

    void fts_to_other();
    void mps_to_other();
    void kph_to_other();
    void kont_to_other();
    void mph_to_other();

public:
    int ch, ch1;

    int convert_S()
    {
        system("cls");

        templet_s();
        cout << "\t\t\t\t1.Foot per second (fts) to others " << endl;
        cout << "\t\t\t\t2.Meter per second (m/s) to others " << endl;
        cout << "\t\t\t\t3.Kilometer per hour (kph) to others " << endl;
        cout << "\t\t\t\t4.Kont to others " << endl;
        cout << "\t\t\t\t5.Miles Per Hour (mph) to others " << endl;

        cout << "\n\t\t\t\t0.back " << endl;

        cout << endl
             << "\n\t\t\t\t"
             << "Enter Choice : ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            fts_to_other();
            break;

        case 2:
            mps_to_other();
            break;

        case 3:
            kph_to_other();
            break;

        case 4:
            kont_to_other();
            break;

        case 5:
            mph_to_other();
            break;

        case 0:
            return 0;

        default:
            invaild_input();
            convert_S();
            break;
        }
        return 1;
    }
};

void Speed_converter ::fts_to_other()
{
    system("cls");
    templet_s();
    cout << "\t\t\t\t1.Foot per second (fts) to Meter per second (m/s) " << endl;
    cout << "\t\t\t\t2.Foot per second (fts) to Kilometer per hour (kph)  " << endl;
    cout << "\t\t\t\t3.Foot per second (fts) to Kont " << endl;
    cout << "\t\t\t\t4.Foot per second (fts) to Miles Per Hour (mph) " << endl;
    cout << "\n\t\t\t\t0.Back " << endl;

    cout << endl
         << "\n\t\t\t\t"
         << "Enter Choice : ";
    cin >> ch1;

    if (ch1 < 5 && ch1 > 0)
    {
        cout << endl
             << "\n\t\t\t\tEnter Speed in Foot per second (fts) : ";
        cin >> Speed;
    }

    switch (ch1)
    {
    case 1:
        cout << endl
             << m_mps() << fts_to_mps(Speed);
        break;

    case 2:
        cout << endl
             << m_kph() << fts_to_kph(Speed);
        break;

    case 3:
        cout << endl
             << m_kont() << fts_to_kont(Speed);
        break;

    case 4:
        cout << endl
             << m_mph() << fts_to_mph(Speed);
        break;

    case 0:
        convert_S();
        break;

    default:
        invaild_input();
        fts_to_other();
        break;
    }
}

void Speed_converter ::mps_to_other()
{
    system("cls");
    templet_s();
    cout << "\t\t\t\t1.Meter per second (m/s) to Foot per second (fts) " << endl;
    cout << "\t\t\t\t2.Meter per second (m/s) to Kilometer per hour (kph)  " << endl;
    cout << "\t\t\t\t3.Meter per second (m/s) to Kont " << endl;
    cout << "\t\t\t\t4.Meter per second (m/s) to Miles Per Hour (mph) " << endl;
    cout << "\n\t\t\t\t0.Back " << endl;

    cout << endl
         << "\n\t\t\t\t"
         << "Enter Choice : ";
    cin >> ch1;

    if (ch1 < 5 && ch1 > 0)
    {
        cout << endl
             << "\n\t\t\t\tEnter Speed in Meter per second (m/s) : ";
        cin >> Speed;
    }

    switch (ch1)
    {
    case 1:
        cout << endl
             << m_fts() << mps_to_fts(Speed);
        break;

    case 2:
        cout << endl
             << m_kph() << mps_to_kph(Speed);
        break;

    case 3:
        cout << endl
             << m_kont() << mps_to_kont(Speed);
        break;

    case 4:
        cout << endl
             << m_mph() << mps_to_mph(Speed);
        break;

    case 0:
        convert_S();
        break;

    default:
        invaild_input();
        mps_to_other();
        break;
    }
}

void Speed_converter ::kph_to_other()
{
    system("cls");
    templet_s();
    cout << "\t\t\t\t1.Kilometer per hour (kph) to Foot per second (fts) " << endl;
    cout << "\t\t\t\t2.Kilometer per hour (kph) to Meter per second (m/s)  " << endl;
    cout << "\t\t\t\t3.Kilometer per hour (kph) to Kont " << endl;
    cout << "\t\t\t\t4.Kilometer per hour (kph) to Miles Per Hour (mph) " << endl;
    cout << "\n\t\t\t\t0.Back " << endl;

    cout << endl
         << "\n\t\t\t\t"
         << "Enter Choice : ";
    cin >> ch1;

    if (ch1 < 5 && ch1 > 0)
    {
        cout << endl
             << "\n\t\t\t\tEnter Speed in Kilometer per hour (kph) : ";
        cin >> Speed;
    }

    switch (ch1)
    {
    case 1:
        cout << endl
             << m_fts() << kph_to_fts(Speed);
        break;

    case 2:
        cout << endl
             << m_mps() << kph_to_mps(Speed);
        break;

    case 3:
        cout << endl
             << m_kont() << kph_to_kont(Speed);
        break;

    case 4:
        cout << endl
             << m_mph() << kph_to_mph(Speed);
        break;

    case 0:
        convert_S();
        break;

    default:
        invaild_input();
        kph_to_other();
        break;
    }
}

void Speed_converter ::kont_to_other()
{
    system("cls");
    templet_s();
    cout << "\t\t\t\t1.Kont to Foot per second (fts) " << endl;
    cout << "\t\t\t\t2.Kont to Meter per second (m/s)  " << endl;
    cout << "\t\t\t\t3.Kont to Kilometer per hour (kph) " << endl;
    cout << "\t\t\t\t4.Kont to Miles Per Hour (mph) " << endl;
    cout << "\n\t\t\t\t0.Back " << endl;

    cout << endl
         << "\n\t\t\t\t"
         << "Enter Choice : ";
    cin >> ch1;

    if (ch1 < 5 && ch1 > 0)
    {
        cout << endl
             << "\n\t\t\t\tEnter Speed in Kont : ";
        cin >> Speed;
    }

    switch (ch1)
    {
    case 1:
        cout << endl
             << m_fts() << kont_to_fts(Speed);
        break;

    case 2:
        cout << endl
             << m_mps() << kont_to_mps(Speed);
        break;

    case 3:
        cout << endl
             << m_kph() << kont_to_kph(Speed);
        break;

    case 4:
        cout << endl
             << m_mph() << kont_to_mph(Speed);
        break;

    case 0:
        convert_S();
        break;

    default:
        invaild_input();
        kont_to_other();
        break;
    }
}

void Speed_converter ::mph_to_other()
{
    system("cls");
    templet_s();
    cout << "\t\t\t\t1.Miles Per Hour (mph) to Foot per second (fts) " << endl;
    cout << "\t\t\t\t2.Miles Per Hour (mph) to Meter per second (m/s)  " << endl;
    cout << "\t\t\t\t3.Miles Per Hour (mph) to Kilometer per hour (kph) " << endl;
    cout << "\t\t\t\t4.Miles Per Hour (mph) to Kont " << endl;
    cout << "\n\t\t\t\t0.Back " << endl;

    cout << endl
         << "\n\t\t\t\t"
         << "Enter Choice : ";
    cin >> ch1;

    if (ch1 < 5 && ch1 > 0)
    {
        cout << endl
             << "\n\t\t\t\tEnter Speed in Miles Per Hour (mph) : ";
        cin >> Speed;
    }

    switch (ch1)
    {
    case 1:
        cout << endl
             << m_fts() << mph_to_fts(Speed);
        break;

    case 2:
        cout << endl
             << m_mps() << mph_to_mps(Speed);
        break;

    case 3:
        cout << endl
             << m_kph() << mph_to_kph(Speed);
        break;

    case 4:
        cout << endl
             << m_kont() << mph_to_kont(Speed);
        break;

    case 0:
        convert_S();
        break;

    default:
        invaild_input();
        mph_to_other();
        break;
    }
}

#endif