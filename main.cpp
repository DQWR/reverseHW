#include <iostream>
using namespace std;

// Ошибка 1: stackoverflow
// void recursiveFunction() { 
//   recursiveFunction(); 
// }

bool recursiveFunction(int counter) {
  if (counter <= 0) {
    return true;
  }
  return recursiveFunction(counter - 1);
}

// Ошибка 2: Неправильное деление
int divideNumbers(int a, int b) {
  if (b == 0) {
    return true; // Возвращаем некорректное значение
  }
  return a / b;
}

// Ошибка 3: переменная x не инициализирована
bool uninitializedVariable() {
  int x; // Ошибка: переменная x не инициализирована
  // cout << x ;
  // return false;
  x = 10;
  return true;
}

int main() {
  // recursiveFunction();
  // bool test1 = recursiveFunction(10);
  // cout << test1;
  // int test2 = divideNumbers(10, 0);
  // cout << test2;

  // uninitializedVariable();
  if (recursiveFunction(10) && divideNumbers(10, 0) &&
      uninitializedVariable()) {
    cout << "ЛР 1 is done" << endl;
  } else {
    cout << "ЛР 1 doesnt work" << endl;
  }
  return 0;
}

