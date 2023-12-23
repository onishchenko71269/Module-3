#include <iostream>

int main() {
  std::cout << "========================================\n";
  std::cout << "========== Симулятор маршрутки =========\n";
  std::cout << "========================================\n";
  std::cout << "\n";
  std::cout << "\n";

  int input = 0; // сколько вошло человек
  int exit = 0; // сколько человек вышло
  int price = 20; // цена билета
  int totalgone; // сколько вошло - ввести значение
  int totalout;  // сколько вышло - ввести значение
  int money;     // общая сумма денег в кассе за проезд
  int remained;  // сколько человек осталось в салоне
  std::cout << "=====   Остановка ул.Декабристов   =====\n";
  std::cout << "\n";
  std::cout << "Введите количество вошедших пассажиров: \n";
  std::cin >> totalgone;
  input += totalgone;
  std::cout << "Введите количество вышедших пассажиров: \n";
  std::cin >> totalout;
  exit += totalout;
  std::cout << "========================================\n";
  remained = input - exit;
  std::cout << "В салоне осталось: " << remained <<"\n";
  std::cout << "========================================\n";
  std::cout << "\n";
  std::cout << "Следующая остановка: ул. Строителей\n";
  std::cout << "\n";
  std::cout << "=====    Остановка ул.Строителей   =====\n";
  std::cout << "\n";
  std::cout << "Введите количество вошедших пассажиров: \n";
  std::cin >> totalgone;
  input += totalgone;
  std::cout << "Введите количество вышедших пассажиров: \n";
  std::cin >> totalout;
  exit += totalout;
  std::cout << "========================================\n";
  remained = input - exit;
  std::cout << "В салоне осталось: " << remained <<"\n";
  std::cout << "========================================\n";
  std::cout << "\n";
  std::cout << "Следующая остановка: ул. Химиков\n";
  std::cout << "\n";
  std::cout << "=====     Остановка ул.Химиков     =====\n";
  std::cout << "\n";
  std::cout << "Введите количество вошедших пассажиров: \n";
  std::cin >> totalgone;
  input += totalgone;
  std::cout << "Введите количество вышедших пассажиров: \n";
  std::cin >> totalout;
  exit += totalout;
  std::cout << "========================================\n";
  remained = input - exit;
  std::cout << "В салоне осталось: " << remained <<"\n";
  std::cout << "========================================\n";
  std::cout << "\n";
  std::cout << "Следующая остановка: ул. им. А.П.Чехова\n";
  std::cout << "\n";
  std::cout << "===    Остановка ул.им. А.П.Чехова  ===\n";
  std::cout << "\n";
  std::cout << "Введите количество вошедших пассажиров: \n";
  std::cin >> totalgone;
  input += totalgone;
  std::cout << "Введите количество вышедших пассажиров: \n";
  std::cin >> totalout;
  exit += totalout;
  std::cout << "========================================\n";
  remained = input - exit;
  std::cout << "В салоне осталось: " << remained <<"\n";
  std::cout << "========================================\n";
  std::cout << "\n";
   
  money = input*price;
  std::cout << "Общая сумма денег за рейс: " << money << " руб.\n";
  std::cout << "Зарплата водителя:         " << money /5 << "  руб.\n";
  std::cout << "Расходы на топливо:        " << money /4  << "  руб.\n";
  std::cout << "Налоги:                    " << money /4  << "  руб.\n";
  std::cout << "Расходы на ремонт :        " << money /4  << "  руб.\n";
  std::cout << "Чистый доход:              " << money * 0.15 << "  руб.\n";
    
}