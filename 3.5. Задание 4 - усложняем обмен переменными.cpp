#include <iostream>

int main() {
  std::cout << "\n";
  std::cout << "\n";
  std::cout << "Повышение градуса (сложности)\n";
  std::cout << "\n";
  std::cout << "\n";
  
  int a = 135;
  int b = 15;
  
  std::cout << "\n";
  std::cout << "\n";
  std::cout << "Значение  А до замены  = " << a << "\n";
  std::cout << "Значение  B до замены  = " << b << "\n";
  std::cout << "\n";
  std::cout << "\n";
  a=a+b;
  b=a-b;
  a=a-b;

  std::cout << "Значение  А после замены  = " << a << "\n";
  std::cout << "Значение  B после замены  = " << b << "\n";
  std::cout << "\n";
  std::cout << "\n";

  a=a*b;
  b=a/b;
  a=a/b;

  std::cout << "Значение  А после замены  = " << a << "\n";
  std::cout << "Значение  B после замены  = " << b << "\n";
  std::cout << "\n";
  std::cout << "\n";

  
  
}