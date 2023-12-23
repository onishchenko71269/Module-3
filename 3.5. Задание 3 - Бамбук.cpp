#include <iostream>

int main() {
  std::cout << "\n";
  std::cout << "\n";
  std::cout << "========================================\n";
  std::cout << "==========     Вредители       =========\n";
  std::cout << "========================================\n";
  std::cout << "\n";
  std::cout << "\n";
   
  int growthDay; // рост бамбука в день (см) - ввод
  int eatDay;    // сколько бамбука съедают за ночь гусеницы  (см)
  int height;    // начальная высота бамбука (см)
  
  std::cout << "\n";
  std::cout << "Введите параметр роста бамбука за день (см): \n";
  std::cin >> growthDay;
  std::cout << "\n";
  std::cout << "Введите параметр съеденного вредителями бамбука за ночь (см): \n";
  std::cin >> eatDay;
  std::cout << "\n";
  std::cout << "Введите начальную высоту бамбука (см): \n";
  std::cin >> height;
  std::cout << "\n";
  std::cout << "\n";
  int heightThirdDay = height + (growthDay - eatDay)*2 + (growthDay/2);

  std::cout << "Высота бамбука к середине 3 дня: " << heightThirdDay << " (cм)\n";
  
  
}