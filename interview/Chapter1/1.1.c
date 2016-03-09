
// ASCII なのか Unicodeなのかを確認する　
// 細部への洞察力とコンピュータサイエンスへの理解を示すことになる
//　256以上でfalseを返すのは文字の限界が256だから

public boolean isUniqueChars2(String str) {
  if (str.length() > 256) return false;

  boolean[] char_set = new boolean[256];
  for ( int i = 0; i < str.length(); i++) {
    int val = str.charAt(i);
    if (char_set[val]) {
      return false;
    }
    char_set[val] = true;
  }
  return true;
}
