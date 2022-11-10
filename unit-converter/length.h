
#ifndef length_H
#define length_H

#include <iostream>
#include "D:\CPP\Project\fn.h"

using namespace std;

class length
{
protected:
     double mm, cm, inch, foot, meter, km;
     double length;
};

class length_converter : public length
{
protected:
     // Functions for unit Conversion
     //------------------------- mm to other ---------------------------//
     inline double mm_to_cm(double mm) { return (mm / 10.0); }
     inline double mm_to_inch(double mm) { return (mm / 25.4); }
     inline double mm_to_foot(double mm) { return (mm / 304.8); }
     inline double mm_to_meter(double mm) { return (mm / 1000.0); }

     //--------------------------cm to other---------------------------//
     inline double cm_to_mm(double cm) { return (cm * 10.0); }
     inline double cm_to_inch(double cm) { return (cm / 2.54); }
     inline double cm_to_foot(double cm) { return (cm / 30.48); }
     inline double cm_to_meter(double cm) { return (cm / 100.0); }
     inline double cm_to_km(double cm) { return (cm / 100000.0); }

     //--------------------------inch to other-------------------------//
     inline double inch_to_mm(double inch) { return (inch * 25.4); }
     inline double inch_to_cm(double inch) { return (inch * 2.54); }
     inline double inch_to_foot(double inch) { return (inch / 12.0); }
     inline double inch_to_meter(double inch) { return (inch / 39.37); }
     inline double inch_to_km(double inch) { return (inch / 39370.0); }

     //---------------------------foot to other -------------------------//
     inline double foot_to_mm(double foot) { return (foot * 304.8); }
     inline double foot_to_cm(double foot) { return (foot * 30.48); }
     inline double foot_to_inch(double foot) { return (foot / 12.0); }
     inline double foot_to_meter(double foot) { return (foot / 3.281); }
     inline double foot_to_km(double foot) { return (foot / 39370.0); }

     //---------------------------meter to other -------------------------//
     inline double meter_to_mm(double meter) { return (meter * 1000.0); }
     inline double meter_to_cm(double meter) { return (meter / 100.0); }
     inline double meter_to_inch(double meter) { return (meter * 39.37); }
     inline double meter_to_foot(double meter) { return (meter * 3.2810); }
     inline double meter_to_km(double meter) { return (meter / 1000.0); }

     //---------------------------kilo-Meter to other -------------------------//
     inline double km_to_cm(double km) { return (km * 100000.0); }
     inline double km_to_inch(double km) { return (km * 39370.0); }
     inline double km_to_foot(double km) { return (km * 3281.0); }
     inline double km_to_meter(double km) { return (km * 1000.0); }

     string l_mm() { return "\n\t\t\t\tLength in Millimter : "; }
     string l_cm() { return "\n\t\t\t\tLength in Centimeter : "; }
     string l_inch() { return "\n\t\t\t\tLength in Inch : "; }
     string l_foot() { return "\n\t\t\t\tLength in foot : "; }
     string l_meter() { return "\n\t\t\t\tLength in Meter : "; }
     string l_km() { return "\n\t\t\t\tLength in Kilo-Meter : "; }

     void milimeter_to_other();
     void centimeter_to_others();
     void inch_to_others();
     void foot_to_others();
     void meter_to_other();
     void kilometer_to_others();

public:
     int ch, ch1;

     int convert_L()
     {
          system("cls");

          templet_l();
          cout << "\t\t\t\t1.Milimeter to others " << endl;
          cout << "\t\t\t\t2.Centimeter to others " << endl;
          cout << "\t\t\t\t3.Inch to others " << endl;
          cout << "\t\t\t\t4.Foot to others " << endl;
          cout << "\t\t\t\t5.Meter to others " << endl;
          cout << "\t\t\t\t6.Kilo-Meter to others " << endl;

          cout << "\n\t\t\t\t0.back " << endl;

          cout << endl
               << "\n\t\t\t\t"
               << "Enter Choice : ";
          cin >> ch;

          switch (ch)
          {
          case 1:
               milimeter_to_other();
               break;

          case 2:
               centimeter_to_others();
               break;

          case 3:
               inch_to_others();
               break;

          case 4:
               foot_to_others();
               break;

          case 5:
               meter_to_other();
               break;

          case 6:
               kilometer_to_others();
               break;

          case 0:
               return 0;
               break;

          default:
               invaild_input();
               convert_L();
               break;
          }
          return 1;
     }
};

void length_converter ::milimeter_to_other()
{
     system("cls");
     templet_l();
     cout << "\t\t\t\t1.Milimeter to cm " << endl;
     cout << "\t\t\t\t2.Milimeter to inch  " << endl;
     cout << "\t\t\t\t3.Milimeter to foot " << endl;
     cout << "\t\t\t\t4.Milimeter to meter " << endl;
     cout << "\n\t\t\t\t0.Back " << endl;

     cout << endl
          << "\n\t\t\t\t"
          << "Enter Choice : ";
     cin >> ch1;

     if (ch1 < 5 && ch1 > 0)
     {
          cout << endl
               << "\n\t\t\t\tEnter length in Milimeter : ";
          cin >> length;
     }

     switch (ch1)
     {
     case 1:
          cout << endl
               << l_cm() << mm_to_cm(length);
          break;

     case 2:
          cout << endl
               << l_inch() << mm_to_inch(length);
          break;

     case 3:
          cout << endl
               << l_foot() << mm_to_foot(length);
          break;

     case 4:
          cout << endl
               << l_meter() << mm_to_meter(length);
          break;

     case 0:
          convert_L();
          break;

     default:
          invaild_input();
          milimeter_to_other();
          break;
     }
}

void length_converter ::centimeter_to_others()
{
     system("cls");
     templet_l();
     cout << "\t\t\t\t1.CM to MM " << endl;
     cout << "\t\t\t\t2.CM to Inch  " << endl;
     cout << "\t\t\t\t3.CM to Foot " << endl;
     cout << "\t\t\t\t4.CM to Meter " << endl;
     cout << "\t\t\t\t5.CM to Kilo-Meter " << endl;
     cout << "\n\t\t\t\t0.Back " << endl;

     cout << endl
          << "\n\t\t\t\t"
          << "Enter Choice : ";
     cin >> ch1;

     if (ch1 < 6 && ch1 > 0)
     {
          cout << endl
               << "\n\t\t\t\tEnter length in CM : ";
          cin >> length;
     }

     switch (ch1)
     {
     case 1:
          cout << endl
               << l_mm() << cm_to_mm(length);
          break;

     case 2:
          cout << endl
               << l_inch() << cm_to_inch(length);
          break;

     case 3:
          cout << endl
               << l_foot() << cm_to_foot(length);
          break;

     case 4:
          cout << endl
               << l_meter() << cm_to_meter(length);
          break;

     case 5:
          cout << endl
               << l_km() << cm_to_km(length);
          break;

     case 0:
          convert_L();
          break;

     default:
          invaild_input();
          centimeter_to_others();
          break;
     }
}

void length_converter ::inch_to_others()
{
     system("cls");
     templet_l();
     cout << "\t\t\t\t1.Inch to MM " << endl;
     cout << "\t\t\t\t2.Inch to CM  " << endl;
     cout << "\t\t\t\t3.Inch to Foot " << endl;
     cout << "\t\t\t\t4.Inch to Meter " << endl;
     cout << "\t\t\t\t5.Inch to Kilo-Meter " << endl;
     cout << "\n\t\t\t\t0.Back " << endl;

     cout << endl
          << "\n\t\t\t\t"
          << "Enter Choice : ";
     cin >> ch1;

     if (ch1 < 6 && ch1 > 0)
     {
          cout << endl
               << "\n\t\t\t\tEnter length in Inch : ";
          cin >> length;
     }

     switch (ch1)
     {
     case 1:
          cout << endl
               << l_mm() << inch_to_mm(length);
          break;

     case 2:
          cout << endl
               << l_cm() << inch_to_cm(length);
          break;

     case 3:
          cout << endl
               << l_foot() << inch_to_foot(length);
          break;

     case 4:
          cout << endl
               << l_meter() << inch_to_meter(length);
          break;

     case 5:
          cout << endl
               << l_km() << inch_to_km(length);
          break;

     case 0:
          convert_L();
          break;

     default:
          invaild_input();
          inch_to_others();
          break;
     }
}

void length_converter ::foot_to_others()
{
     system("cls");
     templet_l();
     cout << "\t\t\t\t1.Foot to MM " << endl;
     cout << "\t\t\t\t2.Foot to CM  " << endl;
     cout << "\t\t\t\t3.Foot to Inch " << endl;
     cout << "\t\t\t\t4.Foot to Meter " << endl;
     cout << "\t\t\t\t5.Foot to Kilo-Meter " << endl;
     cout << "\n\t\t\t\t0.Back " << endl;

     cout << endl
          << "\n\t\t\t\t"
          << "Enter Choice : ";
     cin >> ch1;

     if (ch1 < 6 && ch1 > 0)
     {
          cout << endl
               << "\n\t\t\t\tEnter length in Foot : ";
          cin >> length;
     }

     switch (ch1)
     {
     case 1:
          cout << endl
               << l_mm() << foot_to_mm(length);
          break;

     case 2:
          cout << endl
               << l_cm() << foot_to_cm(length);
          break;

     case 3:
          cout << endl
               << l_inch() << foot_to_inch(length);
          break;

     case 4:
          cout << endl
               << l_meter() << foot_to_meter(length);
          break;

     case 5:
          cout << endl
               << l_km() << foot_to_km(length);
          break;

     case 0:
          convert_L();
          break;

     default:
          invaild_input();
          foot_to_others();
          break;
     }
}

void length_converter ::meter_to_other()
{
     system("cls");
     templet_l();
     cout << "\t\t\t\t1.Meter to MM " << endl;
     cout << "\t\t\t\t2.Meter to CM  " << endl;
     cout << "\t\t\t\t3.Meter to Inch " << endl;
     cout << "\t\t\t\t4.Meter to Foot " << endl;
     cout << "\t\t\t\t5.Meter to Kilo-Meter " << endl;
     cout << "\n\t\t\t\t0.Back " << endl;

     cout << endl
          << "\n\t\t\t\t"
          << "Enter Choice : ";
     cin >> ch1;

     if (ch1 < 6 && ch1 > 0)
     {
          cout << endl
               << "\n\t\t\t\tEnter length in Meter : ";
          cin >> length;
     }

     switch (ch1)
     {
     case 1:
          cout << endl
               << l_mm() << meter_to_mm(length);
          break;

     case 2:
          cout << endl
               << l_cm() << meter_to_cm(length);
          break;

     case 3:
          cout << endl
               << l_inch() << meter_to_inch(length);
          break;

     case 4:
          cout << endl
               << l_foot() << meter_to_foot(length);
          break;

     case 5:
          cout << endl
               << l_km() << meter_to_km(length);
          break;

     case 0:
          convert_L();
          break;

     default:
          invaild_input();
          meter_to_other();
          break;
     }
}

void length_converter ::kilometer_to_others()
{
     system("cls");
     templet_l();
     cout << "\t\t\t\t1.Kilo-Meter to CM  " << endl;
     cout << "\t\t\t\t2.Kilo-Meter to Inch " << endl;
     cout << "\t\t\t\t3.Kilo-Meter to Foot " << endl;
     cout << "\t\t\t\t4.Kilo-Meter to meter " << endl;
     cout << "\n\t\t\t\t0.Back " << endl;

     cout << endl
          << "\n\t\t\t\t"
          << "Enter Choice : ";
     cin >> ch1;

     if (ch1 < 6 && ch1 > 0)
     {
          cout << endl
               << "\n\t\t\t\tEnter length in Kilo-Meter : ";
          cin >> length;
     }

     switch (ch1)
     {
     case 1:
          cout << endl
               << l_cm() << km_to_cm(length);
          break;

     case 2:
          cout << endl
               << l_inch() << km_to_inch(length);
          break;
     case 3:
          cout << endl
               << l_foot() << km_to_foot(length);
          break;

     case 4:
          cout << endl
               << l_meter() << km_to_meter(length);
          break;

     case 0:
          convert_L();
          break;

     default:
          invaild_input();
          kilometer_to_others();
          break;
     }
}

#endif