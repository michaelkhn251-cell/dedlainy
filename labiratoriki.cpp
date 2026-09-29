/******************************
* Автор:   Хнкоян Михаил      *
* Задание: Линейные алгоритмы *
* Вариант: 9                  *
******************************/
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  // Блок 1: Объявление переменных
  double mu;
  double P;
  double Q1;
  double Q2;
  double Q3;
  double pi = 3.14159265358979324;
  double l = 15.4;
  double a = 0.0816;
  double R0 = 0.0816;
  double R1 = 0.0816;
  double R2 = 0.0264;

  // Блок 2: Вычисления
  mu = 2.4 * pow(10, -4);
  P = 0.721 * pow(10, 4);
  Q1 = (pi * pow(R0, 4) / 8.0) * (P / (mu * l));
  Q2 = (pi * P / (8.0 * mu * l)) * (pow(R1, 4) - pow(R2, 4) - pow(R1 * R1 - R2 * R2, 2) / log(R1 / R2));
  Q3 = (pow(a, 4) * sqrt(3) / 320.0) * (P / (mu * l));

  // Блок 3: Вывод результатов
  cout << "Q1 = " << Q1 << endl 
       << "Q2 = " << Q2 << endl 
       << "Q3 = " << Q3 << endl;
  
  return 0;
}
