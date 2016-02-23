class LinearSerch

  # 基本的な考え方
  # 兎にも角にも、先頭から順番に調べて、探しているものが見つかれば、それを返す。
  #

  def initialize(n)
    @array = Array.new(20)
    @array.each_index |i|
      @array[i] = rand(10)
    end
    p @array
  end

  def main
    puts "何を探しますか?"
    x = intReader
    r = linearSerach(x)

    if r == -1
      puts "#{x}は見つからなかった。"
    else
      puts "#{x}を#{r + 1}番目に発見した。"
    end
  end

  private

  def intReader
    gets().to_i
  end

  # サーチアルゴリズム
  def linearSerach(x)
    n = 0
    while n < @array.size && @array[n] != x do
      n += 1
    end

    return n if n < @array.size

    return -1
  end
end
search = LinearSerch.new
serach.main
