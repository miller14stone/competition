
#
# Rubyのソートメソッドは、クイックソートを使っている
#

class QuickSort

  def initialize(n)
    @target = Array(n)
  end

  def main
    puts "準備中"
    @target.each_index do |i|
      @target[i] = rand(1000)
    end
    p @target

    puts "並び替え開始"
    quickSort(0, N-1,@target)
    puts "終了"

    p @target
  end

  private

  # ---- ソートアルゴリズム
  def quickSort(bottom, top, data)
    lower = bottom
    upper = top

    return if ( bottom >= top)

    div = data[bottom]
    while lower < upper
      while (lower <= upper && data[lower] <= div )
        lower += 1
      end

      while (lower <= upper && data[upper] > div )
        upper -= 1
      end

      if (lower < upper)
        temp = data[lower]
        data[lower] = data[lower]
        data[lower] = data[upper]
        data[upper] = temp
      end
      p data
    end
    temp = data[bottom]
    data[bottom] = data[upper]
    data[upper] = temp

    quickSort(bottom,upper - 1, data)
    quickSort(upper + 1, top,data)
    end
  end

N = 10
quick = QuickSort.new(N)
quick.main
