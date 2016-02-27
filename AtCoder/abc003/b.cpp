#include <iostream>
#include <string>

using std::string;

int main() {
  string s{},t{},a{"atcoder@"};
  std::cin >> s >> t;
  [&s, &t, &a] ()->void{
    for(std::size_t i = 0; i < s.size(); ++i) {
        if( s[i] == t[i] ? false
            : s[i] == '@' && a.find(t[i]) != string::npos ? false
            : t[i] == '@' && a.find(t[i]) != string::npos ? false
            : true ){
              std:cout << "You will lose" << std::endl;
              return ;
            }
    }
    std::cout << "You can win" << stdl;
  }();
  return 0;
}
