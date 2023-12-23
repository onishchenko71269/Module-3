#include <iostream>

int main() {
  std::cout <<"Программа для расчета общей стоимости товара. \n";
  
  std::cout << "=============================================\n";  
  int costGoods;
  std::cout << "Введите стоимость товара: ";
  std::cin >> costGoods;
  
  std::cout << "=================================\n";
  int costDelivery;
  std::cout << "Введите стоимость доставки: ";
  std::cin >> costDelivery; 
  
  std::cout << "=================================\n";
  int disCount;
  std::cout << "Введите сумму скидки: ";
  std::cin >> disCount;
  
  std::cout << "=================================\n";
  int fullCostProduct = costGoods + costDelivery - disCount;
  std::cout << "Полная стоимость товара: " << fullCostProduct << "\n";
  std::cout << "=================================\n";
}