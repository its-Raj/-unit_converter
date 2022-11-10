#ifndef Currency_H
#define Currency_H

#include <iostream>
#include "D:\unit-converter\fn.hpp"

using namespace std;
class Currency
{
protected:
     double rs, usd, pound, jpy, eur, kwd;
     double Currency;
};

class Currency_converter : public Currency
{
protected:
     //------------------------- rs to other ---------------------------//
     inline double rs_to_usd(double rs) { return (rs / 83.0); }
     inline double rs_to_pound(double rs) { return (rs / 93.66); }
     inline double rs_to_jpy(double rs) { return (rs / 0.55); }
     inline double rs_to_eur(double rs) { return (rs / 81.88); }
     inline double rs_to_kwd(double rs) { return (rs / 265.98); }

     //-------------------------- usd to other---------------------------//
     inline double usd_to_rs(double usd) { return (usd * 82.37); }
     inline double usd_to_pound(double usd) { return (usd * 0.86); }
     inline double usd_to_jpy(double usd) { return (usd * 147.51); }
     inline double usd_to_eur(double usd) { return (usd * 1.01); }
     inline double usd_to_kwd(double usd) { return (usd * 0.31); }

     //--------------------------pound to other-------------------------//
     inline double pound_to_rs(double pound) { return (pound * 95.40); }
     inline double pound_to_usd(double pound) { return (pound * 1.16); }
     inline double pound_to_jpy(double pound) { return (pound * 170.95); }
     inline double pound_to_eur(double pound) { return (pound * 1.17); }
     inline double pound_to_kwd(double pound) { return (pound * 0.36); }

     //---------------------------jpy to other -------------------------//
     inline double jpy_to_rs(double jpy) { return (jpy * 0.56); }
     inline double jpy_to_usd(double jpy) { return (jpy * 0.0068); }
     inline double jpy_to_pound(double jpy) { return (jpy * 0.0059); }
     inline double jpy_to_eur(double jpy) { return (jpy * 0.0068); }
     inline double jpy_to_kwd(double jpy) { return (jpy * 0.0021); }

     //---------------------------eur to other -------------------------//
     inline double eur_to_rs(double eur) { return (eur * 81.76); }
     inline double eur_to_usd(double eur) { return (eur * 0.99); }
     inline double eur_to_pound(double eur) { return (eur * 0.86); }
     inline double eur_to_jpy(double eur) { return (eur * 146.73); }
     inline double eur_to_kwd(double eur) { return (eur * 0.31); }

     //---------------------------kwd to other -------------------------//
     inline double kwd_to_rs(double kwd) { return (kwd * 265.90); }
     inline double kwd_to_usd(double kwd) { return (kwd * 3.23); }
     inline double kwd_to_pound(double kwd) { return (kwd * 2.79); }
     inline double kwd_to_jpy(double kwd) { return (kwd * 477.01); }
     inline double kwd_to_eur(double kwd) { return (kwd * 3.25); }

     string c_rs() { return "\n\t\t\t\tCurrency in Indian Rupee : Rs.  "; }
     string c_usd() { return "\n\t\t\t\tCurrency in United States Dollar : $  "; }
     string c_pound() { return "\n\t\t\t\tCurrency in Pound sterling :  "; }
     string c_jpy() { return "\n\t\t\t\tCurrency in Japanese Yen :   "; }
     string c_eur() { return "\n\t\t\t\tCurrency in Euro :  "; }
     string c_kwd() { return "\n\t\t\t\tCurrency in Kuwaiti Dinar :  "; }

     void rs_to_other();
     void usd_to_other();
     void pound_to_other();
     void jpy_to_other();
     void eur_to_other();
     void kwd_to_other();

public:
     int ch, ch1;

     int convert_C()
     {
          system("cls");

          templet_c();
          cout << "\t\t\t\t1.Indian Rupee to others " << endl;
          cout << "\t\t\t\t2.United States Dollar to others " << endl;
          cout << "\t\t\t\t3.Pound sterling to others " << endl;
          cout << "\t\t\t\t4.Japanese Yen to others " << endl;
          cout << "\t\t\t\t5.Euro to others " << endl;
          cout << "\t\t\t\t6.Kuwaiti Dinar to others " << endl;

          cout << "\n\t\t\t\t0.back " << endl;

          cout << endl
               << "\n\t\t\t\t"
               << "Enter Choice : ";
          cin >> ch;

          switch (ch)
          {
          case 1:
               rs_to_other();
               break;

          case 2:
               usd_to_other();
               break;

          case 3:
               pound_to_other();
               break;

          case 4:
               jpy_to_other();
               break;

          case 5:
               eur_to_other();
               break;

          case 6:
               kwd_to_other();
               break;

          case 0:
               return 0;

          default:
               invaild_input();
               convert_C();
               break;
          }
          return 1;
     }
};

void Currency_converter ::rs_to_other()
{
     system("cls");
     templet_c();
     cout << "\t\t\t\t1.Indian Rupee to United States Dollar " << endl;
     cout << "\t\t\t\t2.Indian Rupee to Pound sterling  " << endl;
     cout << "\t\t\t\t3.Indian Rupee to Japanese Yen " << endl;
     cout << "\t\t\t\t4.Indian Rupee to Euro " << endl;
     cout << "\t\t\t\t5.Indian Rupee to Kuwaiti Dinar " << endl;
     cout << "\n\t\t\t\t0.Back " << endl;

     cout << endl
          << "\n\t\t\t\t"
          << "Enter Choice : ";
     cin >> ch1;

     if (ch1 < 6 && ch1 > 0)
     {
          cout << endl
               << "\n\t\t\t\tEnter Currency in Indian Rupee  : ";
          cin >> Currency;
     }

     switch (ch1)
     {
     case 1:
          cout << endl
               << c_usd() << rs_to_usd(Currency);
          break;

     case 2:
          cout << endl
               << c_pound() << rs_to_pound(Currency);
          break;

     case 3:
          cout << endl
               << c_jpy() << rs_to_jpy(Currency);
          break;

     case 4:
          cout << endl
               << c_eur() << rs_to_eur(Currency);
          break;

     case 5:
          cout << endl
               << c_kwd() << rs_to_kwd(Currency);
          break;

     case 0:
          convert_C();
          break;

     default:
          invaild_input();
          rs_to_other();
          break;
     }
}

void Currency_converter ::usd_to_other()
{
     system("cls");
     templet_c();
     cout << "\t\t\t\t1.United States Dollar to Indian Rupee " << endl;
     cout << "\t\t\t\t2.United States Dollar to Pound sterling  " << endl;
     cout << "\t\t\t\t3.United States Dollar to Japanese Yen " << endl;
     cout << "\t\t\t\t4.United States Dollar to Euro " << endl;
     cout << "\t\t\t\t5.United States Dollar to Kuwaiti Dinar " << endl;
     cout << "\n\t\t\t\t0.Back " << endl;

     cout << endl
          << "\n\t\t\t\t"
          << "Enter Choice : ";
     cin >> ch1;

     if (ch1 < 6 && ch1 > 0)
     {
          cout << endl
               << "\n\t\t\t\tEnter Currency in United States Dollar $ : ";
          cin >> Currency;
     }

     switch (ch1)
     {
     case 1:
          cout << endl
               << c_rs() << usd_to_rs(Currency);
          break;

     case 2:
          cout << endl
               << c_pound() << usd_to_pound(Currency);
          break;

     case 3:
          cout << endl
               << c_jpy() << usd_to_jpy(Currency);
          break;

     case 4:
          cout << endl
               << c_eur() << usd_to_eur(Currency);
          break;

     case 5:
          cout << endl
               << c_kwd() << usd_to_kwd(Currency);
          break;

     case 0:
          convert_C();
          break;

     default:
          invaild_input();
          usd_to_other();
          break;
     }
}

void Currency_converter ::pound_to_other()
{
     system("cls");
     templet_c();
     cout << "\t\t\t\t1.Pound sterling to Indian Rupee " << endl;
     cout << "\t\t\t\t2.Pound sterling to United States Dollar  " << endl;
     cout << "\t\t\t\t3.Pound sterling to Japanese Yen " << endl;
     cout << "\t\t\t\t4.Pound sterling to Euro " << endl;
     cout << "\t\t\t\t5.Pound sterling to Kuwaiti Dinar " << endl;
     cout << "\n\t\t\t\t0.Back " << endl;

     cout << endl
          << "\n\t\t\t\t"
          << "Enter Choice : ";
     cin >> ch1;

     if (ch1 < 6 && ch1 > 0)
     {
          cout << endl
               << "\n\t\t\t\tEnter Currency in Pound sterling : ";
          cin >> Currency;
     }

     switch (ch1)
     {
     case 1:
          cout << endl
               << c_rs() << pound_to_rs(Currency);
          break;

     case 2:
          cout << endl
               << c_usd() << pound_to_usd(Currency);
          break;

     case 3:
          cout << endl
               << c_jpy() << pound_to_jpy(Currency);
          break;

     case 4:
          cout << endl
               << c_eur() << pound_to_eur(Currency);
          break;

     case 5:
          cout << endl
               << c_kwd() << pound_to_kwd(Currency);
          break;

     case 0:
          convert_C();
          break;

     default:
          invaild_input();
          pound_to_other();
          break;
     }
}

void Currency_converter ::jpy_to_other()
{
     system("cls");
     templet_c();
     cout << "\t\t\t\t1.Japanese Yen to Indian Rupee " << endl;
     cout << "\t\t\t\t2.Japanese Yen to United States Dollar  " << endl;
     cout << "\t\t\t\t3.Japanese Yen to Pound sterling " << endl;
     cout << "\t\t\t\t4.Japanese Yen to Euro " << endl;
     cout << "\t\t\t\t5.Japanese Yen to Kuwaiti Dinar " << endl;
     cout << "\n\t\t\t\t0.Back " << endl;

     cout << endl
          << "\n\t\t\t\t"
          << "Enter Choice : ";
     cin >> ch1;

     if (ch1 < 6 && ch1 > 0)
     {
          cout << endl
               << "\n\t\t\t\tEnter Currency in Japanese Yen : ";
          cin >> Currency;
     }

     switch (ch1)
     {
     case 1:
          cout << endl
               << c_rs() << jpy_to_rs(Currency);
          break;

     case 2:
          cout << endl
               << c_usd() << jpy_to_usd(Currency);
          break;

     case 3:
          cout << endl
               << c_pound() << jpy_to_pound(Currency);
          break;

     case 4:
          cout << endl
               << c_eur() << jpy_to_eur(Currency);
          break;

     case 5:
          cout << endl
               << c_kwd() << jpy_to_kwd(Currency);
          break;

     case 0:
          convert_C();
          break;

     default:
          invaild_input();
          jpy_to_other();
          break;
     }
}

void Currency_converter ::eur_to_other()
{
     system("cls");
     templet_c();
     cout << "\t\t\t\t1.Euro to Indian Rupee " << endl;
     cout << "\t\t\t\t2.Euro to United States Dollar  " << endl;
     cout << "\t\t\t\t3.Euro to Pound sterling " << endl;
     cout << "\t\t\t\t4.Euro to Japanese Yen " << endl;
     cout << "\t\t\t\t5.Euro to Kuwaiti Dinar " << endl;
     cout << "\n\t\t\t\t0.Back " << endl;

     cout << endl
          << "\n\t\t\t\t"
          << "Enter Choice : ";
     cin >> ch1;

     if (ch1 < 6 && ch1 > 0)
     {
          cout << endl
               << "\n\t\t\t\tEnter Currency in Euro : ";
          cin >> Currency;
     }

     switch (ch1)
     {
     case 1:
          cout << endl
               << c_rs() << eur_to_rs(Currency);
          break;

     case 2:
          cout << endl
               << c_usd() << eur_to_usd(Currency);
          break;

     case 3:
          cout << endl
               << c_pound() << eur_to_pound(Currency);
          break;

     case 4:
          cout << endl
               << c_jpy() << eur_to_jpy(Currency);
          break;

     case 5:
          cout << endl
               << c_kwd() << eur_to_kwd(Currency);
          break;

     case 0:
          convert_C();
          break;

     default:
          invaild_input();
          eur_to_other();
          break;
     }
}

void Currency_converter ::kwd_to_other()
{
     system("cls");
     templet_c();
     cout << "\t\t\t\t1.Kuwaiti Dinar to Indian Rupee  " << endl;
     cout << "\t\t\t\t2.Kuwaiti Dinar to United States Dollar  " << endl;
     cout << "\t\t\t\t3.Kuwaiti Dinar to Pound sterling " << endl;
     cout << "\t\t\t\t4.Kuwaiti Dinar to Japanese Yen " << endl;
     cout << "\t\t\t\t5.Kuwaiti Dinar to Euro " << endl;
     cout << "\n\t\t\t\t0.Back " << endl;

     cout << endl
          << "\n\t\t\t\t"
          << "Enter Choice : ";
     cin >> ch1;

     if (ch1 < 6 && ch1 > 0)
     {
          cout << endl
               << "\n\t\t\t\tEnter Currency in Kuwaiti Dinar : ";
          cin >> Currency;
     }

     switch (ch1)
     {
     case 1:
          cout << endl
               << c_rs() << kwd_to_rs(Currency);
          break;

     case 2:
          cout << endl
               << c_usd() << kwd_to_usd(Currency);
          break;

     case 3:
          cout << endl
               << c_pound() << kwd_to_pound(Currency);
          break;
     case 4:
          cout << endl
               << c_jpy() << kwd_to_jpy(Currency);
          break;

     case 5:
          cout << endl
               << c_eur() << kwd_to_eur(Currency);
          break;

     case 0:
          convert_C();
          break;

     default:
          invaild_input();
          kwd_to_other();
          break;
     }
}

#endif