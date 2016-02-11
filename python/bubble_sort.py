def bubblesort(l):
    for index in xrange(len(l)-1, 0, -1):
        for low in xrange(index):
            if l[low] > l[low+1]:
                tmp = l[low+1]
                l[low+1] = l[low]
                l[low] = tmp
    return l

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
    print bubblesort(l)
    assert l == lcopy
