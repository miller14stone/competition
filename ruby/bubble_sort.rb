class BubbleSort
  def initialize(n)
    @target = Array.new(n)
  end

  def main
    puts "準備中"

    @target.each_index do |i| # ---- 配列にランダムな値を格納
      @target[i] = rand(1000)
  end

  p @target

  puts "並び替え開始"
  bubbleSort()
  puts "終了"

  p @target
end

private

# ---- ソートアルゴリズム
def bubbleSort()
  flag = nil
  begin
    i = 0
    flag = false
    while i < @target.size - 1
      if @target[i] > @target[i+1]
        flag = true
        j = @target[i]
        @target[i] = @target[i+1]
        @target[i+1] = j
        p @target
      end
      i = i + 1
    end
  end while(flag)
end

end
N = 10 #データの件数
bubbleSort = BubbleSort.new(N)
bubbleSort.main
