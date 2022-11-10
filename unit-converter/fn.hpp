#ifndef Fn_H
#define Fn_H

#include <iostream>
using namespace std;

void invaild_input()
{
     cout << "\n\t\t\t\tINVALID INPUT !!";
     cout << "\n\n\t\t\t\tPress Enter to try again.";
     fflush(stdin);
     getchar();
     cin.clear();
}

void templet()
{
     cout << "\n\n\n\n";
     cout << "\t\t\t\t************************************************************************\n";
     cout << "\t\t\t\t*********                                                       ********\n";
     cout << "\t\t\t\t*********                Welcome to Unit Converter              ********\n";
     cout << "\t\t\t\t*********                                                       ********\n";
     cout << "\t\t\t\t************************************************************************\n";
     cout << endl;
}

// void templet1()
// {
//      cout << "\n\n\n\n";
//      cout << "\t\t\t\t***********************************************************************\n";
//      cout << "\t\t\t\t********                                                       ********\n";
//      cout << "\t\t\t\t********                Welcome to Unit Converter              ********\n";
//      cout << "\t\t\t\t********                                                       ********\n";
//      cout << "\t\t\t\t***********************************************************************\n";
//      cout << "\t\t\t\t******** Developed by - Rajvardhan Desai                       ********\n";
//      cout << "\t\t\t\t******** INSTITUTE OF CIVIL AND RURAL ENGINEERING              ********\n";
//      cout << "\t\t\t\t***********************************************************************\n";
//      cout << endl;
// }

void templet_l()
{
     cout << "\n\n\n\n";
     cout << "\t\t\t\tkm m cm mm km m cm mm km m cm mm km m cm mm km m cm mm km m cm mm km m\n";
     cout << "\t\t\t\t|                                                                     |\n";
     cout << "\t\t\t\t|                           Length converter                          |\n";
     cout << "\t\t\t\t|                                                                     |\n";
     cout << "\t\t\t\tkm m cm mm km m cm mm km m cm mm km m cm mm km m cm mm km m cm mm km m\n";
     cout << endl;
}

void templet_c()
{
     cout << "\n\n\n\n";
     cout << "\t\t\t\t$ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ \n";
     cout << "\t\t\t\t$                                                                     $\n";
     cout << "\t\t\t\t$                           Currency Converter                        $\n";
     cout << "\t\t\t\t$                                                                     $\n";
     cout << "\t\t\t\t$ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $\n";
     cout << endl;
}

void templet_t()
{
     cout << "\n\n\n\n";
     cout << "\t\t\t\tms sec min ms sec min ms sec min ms sec min ms sec min ms sec min ms sec\n";
     cout << "\t\t\t\t|                                                                      |\n";
     cout << "\t\t\t\t|                             Time Converter                           |\n";
     cout << "\t\t\t\t|                                                                      |\n";
     cout << "\t\t\t\tms sec min ms sec min ms sec min ms sec min ms sec min ms sec min ms sec\n";
     cout << endl;
}

void templet_m()
{
     cout << "\n\n\n\n";
     cout << "\t\t\t\tmg gm kg mg gm kg mg gm kg mg gm kg mg gm kg mg gm kg mg gm kg mg gm kg\n";
     cout << "\t\t\t\t|                                                                      |\n";
     cout << "\t\t\t\t|                            Mass Converter                            |\n";
     cout << "\t\t\t\t|                                                                      |\n";
     cout << "\t\t\t\tmg gm kg mg gm kg mg gm kg mg gm kg mg gm kg mg gm kg mg gm kg mg gm kg\n";
     cout << endl;
}

void templet_s()
{
     cout << "\n\n\n\n";
     cout << "\t\t\t\tm/s kph mph m/s kph mph m/s kph mph m/s kph mph m/s kph mph m/s kph mph\n";
     cout << "\t\t\t\t|                                                                      |\n";
     cout << "\t\t\t\t|                              Speed Converter                         |\n";
     cout << "\t\t\t\t|                                                                      |\n";
     cout << "\t\t\t\tm/s kph mph m/s kph mph m/s kph mph m/s kph mph m/s kph mph m/s kph mph\n";
     cout << endl;
}

void templet_dtr()
{
     cout << "\n\n\n\n";
     cout << "\t\t\t\tKbps Mbps Gbps Kbps Mbps Gbps Kbps Mbps Gbps Kbps Mbps Gbps Kbps Mbps Gbps\n";
     cout << "\t\t\t\t|                                                                        |\n";
     cout << "\t\t\t\t|                        Data Transfer Rate Converter                    |\n";
     cout << "\t\t\t\t|                                                                        |\n";
     cout << "\t\t\t\tKbps Mbps Gbps Kbps Mbps Gbps Kbps Mbps Gbps Kbps Mbps Gbps Kbps Mbps Gbps\n";
     cout << endl;
}

void about_us()
{
     templet();

     cout << "\n\t\t\t\tOur primary objective in this project is build a software that can convert " << endl
          << "\t\t\t\tbetween several unit systems. When the user enters the data, this code will  " << endl
          << "\t\t\t\tconvert it to the unit that user specifies (unit conversion calculator). " << endl;
}

#endif