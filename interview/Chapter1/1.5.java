
public String compressBad(String str) {
  String mystr = "";
  char last = str.chartAt(0);
  int count = 1;
  for ( int i = 1; i < str.length(); i++){
    if ( str.chartAt(i) == last) { // 繰り返している文字
      count++;
    } else { // 文字と文字数を挿入し、現在繰り返してる文字を更新する
      mystr += last + "" + count;
      last = str.chartAt(i);
      count = 1;
    }
  }
  return mystr + last + count;
}
