
def shellsort_shift( aList ):
    gap = len(aList) // 2

    while gap > 0:
        for right in range(gap, len(aList)):
            key = aList[right]
            left = right
            while left > 0 and key < aList[left - 1]:
                aList[left] = aList[left - 1]
                left -= 1
            aList[left] = key
        gap //= 2
    return aList

def shellsort_swap( aList ):
    gap = len(aList) // 2

    while gap > 0:
        for right in range(gap, len(aList)):
            left = right
            while left > 0 and aList[left] < aList[left - 1]:
                aList[left - 1], aList[left] = aList[left], aList[left - 1]
                left -= 1
        gap //= 2
    return aList

#
# main
#

if __name__ == '__main__':
    from random import shuffle
    l = range(15)
    lcopy = l[:]
    shuffle(l)
    print('Unsorted')
    print l
    assert l != lcopy
    print ('Sorted')
    print shellsort_shift(l)
    assert l == lcopy
