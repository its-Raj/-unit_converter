#ifndef Mass_H
#define Mass_H

#include <iostream>
#include <cmath>

#include "D:\CPP\Project\fn.h"

using namespace std;

class Mass
{
protected:
    double mg, gm, kg, pound, tonne, ounce;
    double Mass;
};

class Mass_converter : public Mass
{
protected:
    // Functions for unit Conversion
    //------------------------- mg to other ---------------------------//
    inline double mg_to_gm(double mg) { return (mg / 1000); }
    inline double mg_to_kg(double mg) { return (mg / pow(10.0, 6)); }
    inline double mg_to_pound(double mg) { return (mg / 453600.0); }
    inline double mg_to_tonne(double mg) { return (mg / pow(10.0, 9)); }
    inline double mg_to_ounce(double mg) { return (mg / 28350.0); }

    //-------------------------- gm to other---------------------------//
    inline double gm_to_mg(double gm) { return (gm * 1000); }
    inline double gm_to_kg(double gm) { return (gm / 1000); }
    inline double gm_to_pound(double gm) { return (gm / 453.6); }
    inline double gm_to_tonne(double gm) { return (gm / pow(10.0, 6)); }
    inline double gm_to_ounce(double gm) { return (gm / 28.35); }

    //--------------------------kg to other-------------------------//
    inline double kg_to_mg(double kg) { return (kg * pow(10.0, 6)); }
    inline double kg_to_gm(double kg) { return (kg * 1000.0); }
    inline double kg_to_pound(double kg) { return (kg * 2.205); }
    inline double kg_to_tonne(double kg) { return (kg / 1000.0); }
    inline double kg_to_ounce(double kg) { return (kg * 35.274); }

    //---------------------------pound to other -------------------------//
    inline double pound_to_mg(double pound) { return (pound * 453600.0); }
    inline double pound_to_gm(double pound) { return (pound * 453.6); }
    inline double pound_to_kg(double pound) { return (pound / 2.205); }
    inline double pound_to_tonne(double pound) { return (pound / 2205.0); }
    inline double pound_to_ounce(double pound) { return (pound * 16.0); }

    //---------------------------tonne to other -------------------------//
    inline double tonne_to_mg(double tonne) { return (tonne * pow(10.0, 9)); }
    inline double tonne_to_gm(double tonne) { return (tonne * pow(10.0, 6)); }
    inline double tonne_to_kg(double tonne) { return (tonne * 1000.0); }
    inline double tonne_to_pound(double tonne) { return (tonne * 2205.0); }
    inline double tonne_to_ounce(double tonne) { return (tonne * 35270.0); }

    //---------------------------ounce to other -------------------------//
    inline double ounce_to_mg(double ounce) { return (ounce * 28350.0); }
    inline double ounce_to_gm(double ounce) { return (ounce * 28.35); }
    inline double ounce_to_kg(double ounce) { return (ounce / 35.274); }
    inline double ounce_to_pound(double ounce) { return (ounce / 16); }
    inline double ounce_to_tonne(double ounce) { return (ounce / 35270); }

    string m_mg() { return "\n\t\t\t\tMass in Milligram : "; }
    string m_gm() { return "\n\t\t\t\tMass in Gram : "; }
    string m_kg() { return "\n\t\t\t\tMass in kilogram : "; }
    string m_pound() { return "\n\t\t\t\tMass in Pound : "; }
    string m_tonne() { return "\n\t\t\t\tMass in tonne : "; }
    string m_ounce() { return "\n\t\t\t\tMass in ounce : "; }

    void mg_to_other();
    void gm_to_other();
    void kg_to_other();
    void pound_to_other();
    void tonne_to_other();
    void ounce_to_other();

public:
    int ch, ch1;

    int convert_M()
    {
        system("cls");

        templet_m();
        cout << "\t\t\t\t1.Milligram to others " << endl;
        cout << "\t\t\t\t2.Gram to others " << endl;
        cout << "\t\t\t\t3.kilogram to others " << endl;
        cout << "\t\t\t\t4.Pound to others " << endl;
        cout << "\t\t\t\t5.tonne to others " << endl;
        cout << "\t\t\t\t6.ounce to others " << endl;

        cout << "\n\t\t\t\t0.back " << endl;

        cout << endl
             << "\n\t\t\t\t"
             << "Enter Choice : ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            mg_to_other();
            break;

        case 2:
            gm_to_other();
            break;

        case 3:
            kg_to_other();
            break;

        case 4:
            pound_to_other();
            break;

        case 5:
            tonne_to_other();
            break;

        case 6:
            ounce_to_other();
            break;

        case 0:
            return 0;

        default:
            invaild_input();
            convert_M();
            break;
        }
        return 1;
    }
};

void Mass_converter ::mg_to_other()
{
    system("cls");
    templet_m();
    cout << "\t\t\t\t1.Milligram to Gram " << endl;
    cout << "\t\t\t\t2.Milligram to kilogram  " << endl;
    cout << "\t\t\t\t3.Milligram to Pound " << endl;
    cout << "\t\t\t\t4.Milligram to tonne " << endl;
    cout << "\t\t\t\t5.Milligram to ounce " << endl;
    cout << "\n\t\t\t\t0.Back " << endl;

    cout << endl
         << "\n\t\t\t\t"
         << "Enter Choice : ";
    cin >> ch1;

    if (ch1 < 6 && ch1 > 0)
    {
        cout << endl
             << "\n\t\t\t\tEnter Mass in Milligram : ";
        cin >> Mass;
    }

    switch (ch1)
    {
    case 1:
        cout << endl
             << m_gm() << mg_to_gm(Mass);
        break;

    case 2:
        cout << endl
             << m_kg() << mg_to_kg(Mass);
        break;

    case 3:
        cout << endl
             << m_pound() << mg_to_pound(Mass);
        break;

    case 4:
        cout << endl
             << m_tonne() << mg_to_tonne(Mass);
        break;

    case 5:
        cout << endl
             << m_ounce() << mg_to_ounce(Mass);
        break;

    case 0:
        convert_M();
        break;

    default:
        invaild_input();
        mg_to_other();
        break;
    }
}

void Mass_converter ::gm_to_other()
{
    system("cls");
    templet_m();
    cout << "\t\t\t\t1.Gram to Milligram " << endl;
    cout << "\t\t\t\t2.Gram to kilogram  " << endl;
    cout << "\t\t\t\t3.Gram to Pound " << endl;
    cout << "\t\t\t\t4.Gram to tonne " << endl;
    cout << "\t\t\t\t5.Gram to ounce " << endl;
    cout << "\n\t\t\t\t0.Back " << endl;

    cout << endl
         << "\n\t\t\t\t"
         << "Enter Choice : ";
    cin >> ch1;

    if (ch1 < 6 && ch1 > 0)
    {
        cout << endl
             << "\n\t\t\t\tEnter Mass in Gram : ";
        cin >> Mass;
    }

    switch (ch1)
    {
    case 1:
        cout << endl
             << m_mg() << gm_to_mg(Mass);
        break;

    case 2:
        cout << endl
             << m_kg() << gm_to_kg(Mass);
        break;

    case 3:
        cout << endl
             << m_pound() << gm_to_pound(Mass);
        break;

    case 4:
        cout << endl
             << m_tonne() << gm_to_tonne(Mass);
        break;

    case 5:
        cout << endl
             << m_ounce() << gm_to_ounce(Mass);
        break;

    case 0:
        convert_M();
        break;

    default:
        invaild_input();
        gm_to_other();
        break;
    }
}

void Mass_converter ::kg_to_other()
{
    system("cls");
    templet_m();
    cout << "\t\t\t\t1.kilogram to Milligram " << endl;
    cout << "\t\t\t\t2.kilogram to Gram  " << endl;
    cout << "\t\t\t\t3.kilogram to Pound " << endl;
    cout << "\t\t\t\t4.kilogram to tonne " << endl;
    cout << "\t\t\t\t5.kilogram to ounce " << endl;
    cout << "\n\t\t\t\t0.Back " << endl;

    cout << endl
         << "\n\t\t\t\t"
         << "Enter Choice : ";
    cin >> ch1;

    if (ch1 < 6 && ch1 > 0)
    {
        cout << endl
             << "\n\t\t\t\tEnter Mass in kilogram : ";
        cin >> Mass;
    }

    switch (ch1)
    {
    case 1:
        cout << endl
             << m_mg() << kg_to_mg(Mass);
        break;

    case 2:
        cout << endl
             << m_gm() << kg_to_gm(Mass);
        break;

    case 3:
        cout << endl
             << m_pound() << kg_to_pound(Mass);
        break;

    case 4:
        cout << endl
             << m_tonne() << kg_to_tonne(Mass);
        break;

    case 5:
        cout << endl
             << m_ounce() << kg_to_ounce(Mass);
        break;

    case 0:
        convert_M();
        break;

    default:
        invaild_input();
        kg_to_other();
        break;
    }
}

void Mass_converter ::pound_to_other()
{
    system("cls");
    templet_m();
    cout << "\t\t\t\t1.Pound to Milligram " << endl;
    cout << "\t\t\t\t2.Pound to Gram  " << endl;
    cout << "\t\t\t\t3.Pound to kilogram " << endl;
    cout << "\t\t\t\t4.Pound to tonne " << endl;
    cout << "\t\t\t\t5.Pound to ounce " << endl;
    cout << "\n\t\t\t\t0.Back " << endl;

    cout << endl
         << "\n\t\t\t\t"
         << "Enter Choice : ";
    cin >> ch1;

    if (ch1 < 6 && ch1 > 0)
    {
        cout << endl
             << "\n\t\t\t\tEnter Mass in Pound : ";
        cin >> Mass;
    }

    switch (ch1)
    {
    case 1:
        cout << endl
             << m_mg() << pound_to_mg(Mass);
        break;

    case 2:
        cout << endl
             << m_gm() << pound_to_gm(Mass);
        break;

    case 3:
        cout << endl
             << m_kg() << pound_to_kg(Mass);
        break;

    case 4:
        cout << endl
             << m_tonne() << pound_to_tonne(Mass);
        break;

    case 5:
        cout << endl
             << m_ounce() << pound_to_ounce(Mass);
        break;

    case 0:
        convert_M();
        break;

    default:
        invaild_input();
        pound_to_other();
        break;
    }
}

void Mass_converter ::tonne_to_other()
{
    system("cls");
    templet_m();
    cout << "\t\t\t\t1.tonne to Milligram " << endl;
    cout << "\t\t\t\t2.tonne to Gram  " << endl;
    cout << "\t\t\t\t3.tonne to kilogram " << endl;
    cout << "\t\t\t\t4.tonne to Pound " << endl;
    cout << "\t\t\t\t5.tonne to ounce " << endl;
    cout << "\n\t\t\t\t0.Back " << endl;

    cout << endl
         << "\n\t\t\t\t"
         << "Enter Choice : ";
    cin >> ch1;

    if (ch1 < 6 && ch1 > 0)
    {
        cout << endl
             << "\n\t\t\t\tEnter Mass in tonne : ";
        cin >> Mass;
    }

    switch (ch1)
    {
    case 1:
        cout << endl
             << m_mg() << tonne_to_mg(Mass);
        break;

    case 2:
        cout << endl
             << m_gm() << tonne_to_gm(Mass);
        break;

    case 3:
        cout << endl
             << m_kg() << tonne_to_kg(Mass);
        break;

    case 4:
        cout << endl
             << m_pound() << tonne_to_pound(Mass);
        break;

    case 5:
        cout << endl
             << m_ounce() << tonne_to_ounce(Mass);
        break;

    case 0:
        convert_M();
        break;

    default:
        invaild_input();
        tonne_to_other();
        break;
    }
}

void Mass_converter ::ounce_to_other()
{
    system("cls");
    templet_m();
    cout << "\t\t\t\t1.ounce to Milligram  " << endl;
    cout << "\t\t\t\t2.ounce to Gram  " << endl;
    cout << "\t\t\t\t3.ounce to kilogram " << endl;
    cout << "\t\t\t\t4.ounce to Pound " << endl;
    cout << "\t\t\t\t5.ounce to tonne " << endl;
    cout << "\n\t\t\t\t0.Back " << endl;

    cout << endl
         << "\n\t\t\t\t"
         << "Enter Choice : ";
    cin >> ch1;

    if (ch1 < 6 && ch1 > 0)
    {
        cout << endl
             << "\n\t\t\t\tEnter Mass in ounce : ";
        cin >> Mass;
    }

    switch (ch1)
    {
    case 1:
        cout << endl
             << m_mg() << ounce_to_mg(Mass);
        break;

    case 2:
        cout << endl
             << m_gm() << ounce_to_gm(Mass);
        break;

    case 3:
        cout << endl
             << m_kg() << ounce_to_kg(Mass);
        break;
    case 4:
        cout << endl
             << m_pound() << ounce_to_pound(Mass);
        break;

    case 5:
        cout << endl
             << m_tonne() << ounce_to_tonne(Mass);
        break;

    case 0:
        convert_M();
        break;

    default:
        invaild_input();
        ounce_to_other();
        break;
    }
}

#endif