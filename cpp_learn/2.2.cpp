#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  cout << setw(5) << "dec"
      << setw(5) << "hex"
      << setw(5) << "oct"
      << endl;
  for ( int i = 0; i < 20; i++)
    cout << dec << setw(5) << i
      << hex << setw(5) << i
      << oct << setw(5) << i << endl;
}
