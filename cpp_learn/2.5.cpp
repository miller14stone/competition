#include <iostream>
#include <fstream>

using namespace std;

// argc = argument count  (引数の個数)
// argv = argument vector (引数の配列)
// つまり、引数文字列の"配列へのポインタ"

int main(int argc, char** argv ){
  if ( argc == 2 ) {
    char buf[512];
    ifstream ifs( argv[1] );

    while ( ifs.getline( buf, sizeof(buf) ))
      cout << buf << endl;
  }
}
