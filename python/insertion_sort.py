

def insertionsort_shift( aList ):
    for right in range( 1, len( aList ) ):
        key = aList[right]
        left = right
        while left > 0 and key < aList[left - 1]:
            aList[left] = aList[left - 1 ]
            left -= 1
        aList[left] = key
    return aList

# like
def insertionsort_swap( aList ):
    for right in range( 1, len( aList ) ):
        left = right
        while left > 0 and aList[left] < aList[left - 1]:
            aList[left - 1], aList[left] = aList[left], aList[left - 1]
            left -= 1
    return aList
#
# main
#

if __name__ == '__main__':
    from random import shuffle
    l = range(15)
    lcopy = l[:]
    shuffle(l)
    print ('Unsorted')
    print l
    assert l != lcopy
    print ('Sorted')
    print insertionsort_shift(l)
    assert l == lcopy
