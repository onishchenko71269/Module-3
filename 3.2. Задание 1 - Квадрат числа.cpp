#include <iostream>

int main() {
  int a;
  std::cout << "Программа для вычисления квадрата числа \n";  
  std::cout << "Введите любое целое число: \n";
  std::cin >> a;
  int square = a * a;
  std::cout << "Квадрат числа равен:  " << square << "\n";
}