class InsertSort

  # ほとんど整列が完了しているデータに対して効率がいい、単純挿入ソートでは、リニアサーチを使い、2分挿入ソートでは、バイナリサーチを使う

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
    insertSort()
    puts "終了"

    p @target
  end

  private
  # ---- ソートアルゴリズム
  def insertSort()
    sorted = 0
    while sorted < @target.size - 1 do
      insert = @target[sorted+1]
      i = 0
      while i <= sorted do
        break if @target[i] > insert
        i += 1
      end

      while i <= sorted + 1 do
        temp = @target[i]
        @target[i] = insert
        insert = temp
        i += 1
      end
      sorted += 1
    end
  end

end

N = 10
insert = InsertSort.new(N)
insert.main
