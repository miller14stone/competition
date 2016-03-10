

// 2つの文字列の並びをsortして同じかどうか判定する
public class Main {

  public String sort(String s){
    char[] content = s.toCharArray();
    java.util.Arrays.sort(content);
    return new String(content);
  }

  public boolean permutation(String s, String t){
    // 文字数が違うならfalse
    if (s.length() != t.length()){
      return false;
    }
    // .equalsは文字列判定
    return sort(s).equals(sort(t));
  }
}
