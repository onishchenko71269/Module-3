#include <iostream>

int main() {
  std::cout << "Введите имя персонажа: \n";
  std::string orcsName;
  std::cout << "==============================\n";
  std::cin >> orcsName;
  std::cout << "Введите имя рассы: \n";
  std::string raceName;
  std::cout << "==============================\n";
  std::cin >> raceName;
  std::cout << "==============================\n";
  std::cout << "Родился новый " << raceName << ",\n";
  std::cout << "его зовут " << orcsName << ".\n";
  std::cout << "Добро пожаловать в этот суровый мир!\n";
    
}