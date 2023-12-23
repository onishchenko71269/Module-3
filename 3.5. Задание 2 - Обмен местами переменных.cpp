#include <iostream>

int main() {
  std::cout << "\n";
  std::cout << "\n";
  std::cout << "Замена оператора\n";
  std::cout << "\n";
  std::cout << "\n";
  
  int a = 135;
  int b = 15;
  
  std::cout << "Способ №1\n";
  std::cout << "\n";
  std::cout << "\n";
  std::cout << "Значение  А до замены  = " << a << "\n";
  std::cout << "Значение  B до замены  = " << b << "\n";
  std::cout << "\n";
  std::cout << "\n";
  std::swap(a, b);
  std::cout << "Значение  А после замены  = " << a << "\n";
  std::cout << "Значение  B после замены  = " << b << "\n";
  std::cout << "\n";
  std::cout << "\n";
  std::cout << "Способ №2\n";
  std::cout << "\n";
  std::cout << "\n";
  int barn = a;
  a = b;
  b = barn;
  std::cout << "Значение  А после замены  = " << a << "\n";
  std::cout << "Значение  B после замены  = " << b << "\n";
  std::cout << "\n";
  std::cout << "\n";
  
}