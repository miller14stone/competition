class MergeSort
  def initialize(n)
    @target = Array.new(n)
  end

  def main
    puts "準備中"

    @target.each_index do |i|
      @target[i] = rand(1000)
    end

    p @target

    puts "並び替え開始"
    mergeSort(@target.size, @target, 0)
    puts "終了"

    p @target
  end

  private
  # ---- ソートアルゴリズム
  def mergeSort(n, x, offset)
    return if n <= 1
    m = n/2

    # ブロックを2分割する
    mergeSort(m, x, offset)
    mergeSort(n - m, x, offset + m)

    # 併合操作
    buffer = Array.new(m)
    i = 0
    while i < m do
      buffer[i] = x[offset + 1]
      i += 1
    end

    j = m
    i = 0
    k = 0

    while (i < m && j < n) do
      if buffer[i] <= x[offset + j]
        x[offset + k] = buffer[i]
        i += 1
      else
        x[offset + k] = x[offset + j]
        j += 1
      end
      k += 1
    end

    while (i < m) do
      x[offset + k] = buffer[i]
      k += 1
      i += 1
    end
    p x
  end
end

N = 10
merge = MergeSort.new(N)
merge.main
