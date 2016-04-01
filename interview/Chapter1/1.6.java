public void rotate(int[][] matrix, int n) {
  for(int layer = 0; layer < n / 2; ++layer) {
    int first = layer;
    int last = n - 1 - layer;
    for ( int i = first; i < last; ++i ) {
      int offset = i - first;
      // 上端の値を保存
      int top = matrix[first][i];

      // 左端 -> 右端
      matrix[first][i] = matrix[last-offset][first];

      // 下端 -> 右端
      matrix[last-offset][first] = matrix[last][last - offset];

      // 右端 -> 下端
      matrix[last][last - offset] = matrix[i][last];

      // 上端 -> 右端
      matrix[i][last] = top;
    }
  }
}
