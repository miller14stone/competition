
def binary_search(l, value):
    low = 0
    high = len(l) - 1
    while low <= high:
        mid = (low + high) // 2
        if l[mid] == value:
            print('Found')
            return True
        elif l[mid] < value:
            low = mid + 1
        else:
            high = mid - 1
    print('Not Found')
    return False

#
# main
#

if __name__ == '__main__':
    import sys
    l = xrange(20)
    for num in l:
        assert binary_search(l, num)
    assert binary_search(l, -50) == False
    assert binary_search(l, -50) == False
    assert binary_search(l, 20) == False
    assert binary_search(l, 19) == True
    assert binary_search(l, 0) == True
    assert binary_search([1,2,4,12,67,90], 3) == False

# assert アサーション文　期待値が返ってきているかをテストする
