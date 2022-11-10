#ifndef DTR_H
#define DTR_H

#include <iostream>
#include <cmath>

#include "D:\unit-converter\fn.hpp"

using namespace std;

class DTR
{
protected:
    double bps, kbps, mbps, gbps, tbps;
    double DTR;
};

class DTR_converter : public DTR
{
protected:
    //------------------------- bps to other ---------------------------//
    inline double bps_to_kbps(double bps) { return (bps / 1000.0); }
    inline double bps_to_mbps(double bps) { return (bps / pow(10.0, 6)); }
    inline double bps_to_gbps(double bps) { return (bps / pow(10.0, 9)); }
    inline double bps_to_tbps(double bps) { return (bps / pow(10.0, 12)); }

    //-------------------------- kbps to other---------------------------//
    inline double kbps_to_bps(double kbps) { return (kbps * 1000); }
    inline double kbps_to_mbps(double kbps) { return (kbps / 1000); }
    inline double kbps_to_gbps(double kbps) { return (kbps / pow(10.0, 6)); }
    inline double kbps_to_tbps(double kbps) { return (kbps / pow(10.0, 9)); }

    //--------------------------mbps to other-------------------------//
    inline double mbps_to_bps(double mbps) { return (mbps * pow(10.0, 6)); }
    inline double mbps_to_kbps(double mbps) { return (mbps * 1000); }
    inline double mbps_to_gbps(double mbps) { return (mbps / 1000); }
    inline double mbps_to_tbps(double mbps) { return (mbps / pow(10.0, 6)); }

    //---------------------------gbps to other -------------------------//
    inline double gbps_to_bps(double gbps) { return (gbps * pow(10.0, 9)); }
    inline double gbps_to_kbps(double gbps) { return (gbps * pow(10.0, 6)); }
    inline double gbps_to_mbps(double gbps) { return (gbps * 1000); }
    inline double gbps_to_tbps(double gbps) { return (gbps / 1000); }

    //---------------------------tbps to other -------------------------//
    inline double tbps_to_bps(double tbps) { return (tbps * pow(10.0, 12)); }
    inline double tbps_to_kbps(double tbps) { return (tbps * pow(10.0, 9)); }
    inline double tbps_to_mbps(double tbps) { return (tbps * pow(10.0, 6)); }
    inline double tbps_to_gbps(double tbps) { return (tbps * 1000); }

    string m_bps() { return "\n\t\t\t\tData Transfer Rate in Bit per second (bps) : "; }
    string m_kbps() { return "\n\t\t\t\tData Transfer Rate in Kilobit per second (Kbps) : "; }
    string m_mbps() { return "\n\t\t\t\tData Transfer Rate in Megabit per second (Mbps) : "; }
    string m_gbps() { return "\n\t\t\t\tData Transfer Rate in Gigabit per second (Gbps) : "; }
    string m_tbps() { return "\n\t\t\t\tData Transfer Rate in Terabit per second (Tbps) : "; }

    void bps_to_other();
    void kbps_to_other();
    void mbps_to_other();
    void gbps_to_other();
    void tbps_to_other();

public:
    int ch, ch1;

    int convert_dtr()
    {
        system("cls");

        templet_dtr();
        cout << "\t\t\t\t1.Bit per second (bps) to others " << endl;
        cout << "\t\t\t\t2.Kilobit per second (Kbps) to others " << endl;
        cout << "\t\t\t\t3.Megabit per second (Mbps) to others " << endl;
        cout << "\t\t\t\t4.Gigabit per second (Gbps) to others " << endl;
        cout << "\t\t\t\t5.Terabit per second (Tbps) to others " << endl;

        cout << "\n\t\t\t\t0.back " << endl;

        cout << endl
             << "\n\t\t\t\t"
             << "Enter Choice : ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            bps_to_other();
            break;

        case 2:
            kbps_to_other();
            break;

        case 3:
            mbps_to_other();
            break;

        case 4:
            gbps_to_other();
            break;

        case 5:
            tbps_to_other();
            break;

        case 0:
            return 0;

        default:
            invaild_input();
            convert_dtr();
            break;
        }
        return 1;
    }
};

void DTR_converter ::bps_to_other()
{
    system("cls");
    templet_dtr();
    cout << "\t\t\t\t1.Bit per second (bps) to Kilobit per second (Kbps) " << endl;
    cout << "\t\t\t\t2.Bit per second (bps) to Megabit per second (Mbps)  " << endl;
    cout << "\t\t\t\t3.Bit per second (bps) to Gigabit per second (Gbps) " << endl;
    cout << "\t\t\t\t4.Bit per second (bps) to Terabit per second (Tbps) " << endl;
    cout << "\n\t\t\t\t0.Back " << endl;

    cout << endl
         << "\n\t\t\t\t"
         << "Enter Choice : ";
    cin >> ch1;

    if (ch1 < 5 && ch1 > 0)
    {
        cout << endl
             << "\n\t\t\t\tEnter Data Transfer Rate in Bit per second (bps) : ";
        cin >> DTR;
    }

    switch (ch1)
    {
    case 1:
        cout << endl
             << m_kbps() << bps_to_kbps(DTR);
        break;

    case 2:
        cout << endl
             << m_mbps() << bps_to_mbps(DTR);
        break;

    case 3:
        cout << endl
             << m_gbps() << bps_to_gbps(DTR);
        break;

    case 4:
        cout << endl
             << m_tbps() << bps_to_tbps(DTR);
        break;

    case 0:
        convert_dtr();
        break;

    default:
        invaild_input();
        bps_to_other();
        break;
    }
}

void DTR_converter ::kbps_to_other()
{
    system("cls");
    templet_dtr();
    cout << "\t\t\t\t1.Kilobit per second (Kbps) to Bit per second (bps) " << endl;
    cout << "\t\t\t\t2.Kilobit per second (Kbps) to Megabit per second (Mbps)  " << endl;
    cout << "\t\t\t\t3.Kilobit per second (Kbps) to Gigabit per second (Gbps) " << endl;
    cout << "\t\t\t\t4.Kilobit per second (Kbps) to Terabit per second (Tbps) " << endl;
    cout << "\n\t\t\t\t0.Back " << endl;

    cout << endl
         << "\n\t\t\t\t"
         << "Enter Choice : ";
    cin >> ch1;

    if (ch1 < 5 && ch1 > 0)
    {
        cout << endl
             << "\n\t\t\t\tEnter Data Transfer Rate in Kilobit per second (Kbps) : ";
        cin >> DTR;
    }

    switch (ch1)
    {
    case 1:
        cout << endl
             << m_bps() << kbps_to_bps(DTR);
        break;

    case 2:
        cout << endl
             << m_mbps() << kbps_to_mbps(DTR);
        break;

    case 3:
        cout << endl
             << m_gbps() << kbps_to_gbps(DTR);
        break;

    case 4:
        cout << endl
             << m_tbps() << kbps_to_tbps(DTR);
        break;

    case 0:
        convert_dtr();
        break;

    default:
        invaild_input();
        kbps_to_other();
        break;
    }
}

void DTR_converter ::mbps_to_other()
{
    system("cls");
    templet_dtr();
    cout << "\t\t\t\t1.Megabit per second (Mbps) to Bit per second (bps) " << endl;
    cout << "\t\t\t\t2.Megabit per second (Mbps) to Kilobit per second (Kbps)  " << endl;
    cout << "\t\t\t\t3.Megabit per second (Mbps) to Gigabit per second (Gbps) " << endl;
    cout << "\t\t\t\t4.Megabit per second (Mbps) to Terabit per second (Tbps) " << endl;
    cout << "\n\t\t\t\t0.Back " << endl;

    cout << endl
         << "\n\t\t\t\t"
         << "Enter Choice : ";
    cin >> ch1;

    if (ch1 < 5 && ch1 > 0)
    {
        cout << endl
             << "\n\t\t\t\tEnter Data Transfer Rate in Megabit per second (Mbps) : ";
        cin >> DTR;
    }

    switch (ch1)
    {
    case 1:
        cout << endl
             << m_bps() << mbps_to_bps(DTR);
        break;

    case 2:
        cout << endl
             << m_kbps() << mbps_to_kbps(DTR);
        break;

    case 3:
        cout << endl
             << m_gbps() << mbps_to_gbps(DTR);
        break;

    case 4:
        cout << endl
             << m_tbps() << mbps_to_tbps(DTR);
        break;

    case 0:
        convert_dtr();
        break;

    default:
        invaild_input();
        mbps_to_other();
        break;
    }
}

void DTR_converter ::gbps_to_other()
{
    system("cls");
    templet_dtr();
    cout << "\t\t\t\t1.Gigabit per second (Gbps) to Bit per second (bps) " << endl;
    cout << "\t\t\t\t2.Gigabit per second (Gbps) to Kilobit per second (Kbps)  " << endl;
    cout << "\t\t\t\t3.Gigabit per second (Gbps) to Megabit per second (Mbps) " << endl;
    cout << "\t\t\t\t4.Gigabit per second (Gbps) to Terabit per second (Tbps) " << endl;
    cout << "\n\t\t\t\t0.Back " << endl;

    cout << endl
         << "\n\t\t\t\t"
         << "Enter Choice : ";
    cin >> ch1;

    if (ch1 < 5 && ch1 > 0)
    {
        cout << endl
             << "\n\t\t\t\tEnter Data Transfer Rate in Gigabit per second (Gbps) : ";
        cin >> DTR;
    }

    switch (ch1)
    {
    case 1:
        cout << endl
             << m_bps() << gbps_to_bps(DTR);
        break;

    case 2:
        cout << endl
             << m_kbps() << gbps_to_kbps(DTR);
        break;

    case 3:
        cout << endl
             << m_mbps() << gbps_to_mbps(DTR);
        break;

    case 4:
        cout << endl
             << m_tbps() << gbps_to_tbps(DTR);
        break;

    case 0:
        convert_dtr();
        break;

    default:
        invaild_input();
        gbps_to_other();
        break;
    }
}

void DTR_converter ::tbps_to_other()
{
    system("cls");
    templet_dtr();
    cout << "\t\t\t\t1.Terabit per second (Tbps) to Bit per second (bps) " << endl;
    cout << "\t\t\t\t2.Terabit per second (Tbps) to Kilobit per second (Kbps)  " << endl;
    cout << "\t\t\t\t3.Terabit per second (Tbps) to Megabit per second (Mbps) " << endl;
    cout << "\t\t\t\t4.Terabit per second (Tbps) to Gigabit per second (Gbps) " << endl;
    cout << "\n\t\t\t\t0.Back " << endl;

    cout << endl
         << "\n\t\t\t\t"
         << "Enter Choice : ";
    cin >> ch1;

    if (ch1 < 5 && ch1 > 0)
    {
        cout << endl
             << "\n\t\t\t\tEnter Data Transfer Rate in Terabit per second (Tbps) : ";
        cin >> DTR;
    }

    switch (ch1)
    {
    case 1:
        cout << endl
             << m_bps() << tbps_to_bps(DTR);
        break;

    case 2:
        cout << endl
             << m_kbps() << tbps_to_kbps(DTR);
        break;

    case 3:
        cout << endl
             << m_mbps() << tbps_to_mbps(DTR);
        break;

    case 4:
        cout << endl
             << m_gbps() << tbps_to_gbps(DTR);
        break;

    case 0:
        convert_dtr();
        break;

    default:
        invaild_input();
        tbps_to_other();
        break;
    }
}

#endif