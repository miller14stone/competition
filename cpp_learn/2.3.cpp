#include <iostream>
using namespace std;

int main() {
  cout << "あなたの苗字は?:" << flush;
  char last_name[512];
  cin >> last_name;

  cout << "あなたの名前は?:" << flush;
  char first_name[512];
  cin >> first_name;

  cout << "あなたの年齢は?:" << flush;
  int age;
  cin >> age;

  cout << endl;

  cout << "氏名:" << last_name << " " << first_name << endl
    << "年齢:" << age << endl;
}
