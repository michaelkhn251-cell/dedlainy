/*************************
 * Автор: Хнкоян Михаил  *
 * Вариант: 9            *
 *************************/
#include <iostream>
#include <cmath>
using namespace std;
int main() {
  double pi = 3.14159265358979324;
  double mu;
  mu = 2.4 * pow(10, -4);
  double P;
  P = 0.721 * pow(10, 4);
  double l;
  l = 15.4;

  double R0 = 0.0816;
  double R1 = 0.0816;
  double a = 0.0816;
  double R2 = 0.0264;

  double Q1;
  Q1 = (pi * pow(R0, 4) / 8) * (P / (mu * l));
  double Q2;
  Q2 = (pi * P / (8 * mu * l)) * (pow(R1, 4) - pow(R2, 4) - pow(R1 * R1 - R2 * R2, 2) / log(R1 / R2));
  double Q3;
  Q3 = (pow(a, 4) * sqrt(3) / 320) * (P / (mu * l));

  cout << "Q1 = " << Q1 << endl 
       << "Q2 = " << Q2 << endl 
       << "Q3 = " << Q3 << endl;
  
  return 0;
}
