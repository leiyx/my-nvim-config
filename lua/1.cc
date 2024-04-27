#include <functional>
#include <iostream>
#include <ostream>
using namespace std;
void func();
using funcType = std::function<void()>;
int main() {
  int var_a;
  cin >> var_a;
  cout << var_a << endl;
  cout << "hello, this is my first cpp program!" << endl;
  funcType ft = func;
  func();
  return 0;
}
void func() {
  cout << "enter func()" << endl;
  return;
}
