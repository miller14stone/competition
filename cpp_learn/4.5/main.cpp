#include "TestClass.h"

int main(){
  TestClass test(10);
  test.print(); //10と表示される

  TestClass* pTest = new TestClass(20);
  pTest->print(); // 20と表示される
  delete pTest;
}
