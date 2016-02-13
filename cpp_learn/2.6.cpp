#include <iostream>
#include <sstream>
using namespace std;

int main(){
  char str[] = "This is a pen.";
  char buf[20];
  istrstream is( str );
  while( is >> buf )
    cout << buf << endl;
}
