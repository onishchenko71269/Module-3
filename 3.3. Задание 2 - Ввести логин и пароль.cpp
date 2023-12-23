#include <iostream>

int main() {
  std::cout << "Введите логин:  \n";
  std::string login;
  std::cin >> login;
  std::cout << "==============================\n";
  std::cout << "Введите пароль:  \n";
  std::string password;
  std::cin >> password;
  std::cout << "==============================\n";
  std::cout << "Введенный логин: "  << login  << "\n";
  std::cout << "Введенный пароль: " << password << "\n";
  std::cout << "==============================\n";
  std::cout << login << " поздравляем,теперь вы с нами.\n";
  std::cout << "Добро пожаловать на наш сайт!\n";
  
}