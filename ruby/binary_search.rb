class BinarySearch
  def initialize
    @array = Array.new(20)
    @array.each_index do |i|
      @array[i] = rand(10)
    end

    p @array
  end

  def main
    # 検索前にソートをしておく必要がある
    puts "並び替え中"
    array = @array.sort
    p array

    puts "何を探しますか？"
    x = intReader
    r = binarySearch(x, array)

    if r == -1
      puts "#{x}は見つからなかった"
    else
      puts "#{x}を#{r+1}番目に発見しました"
    end
  end

  private

  def intReader
    gets().to_i
  end

  # サーチアルゴリズム
  def binarySearch(x, array)
    left = 0
    right = array.size-1
    mid = nil

    while left <= right do
      mid = (left + right) / 2
      return mid if array[mid] == x

      if array[mid] < x
        left = mid+1
      else
        right = mid-1
      end
      return -1
    end
  end
end

search = BinarySearch.new
search.main
