def selectionsort(l):
    n = len(l)
    for index in xrange(n-1):
        least = index
        for x in xrange(index + 1, n):
            if l[x] < l[least]:
                least = x
        tmp = l[index]
        l[index] = l[least]
        l[least] = tmp
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
    print selectionsort(l)
    assert l == lcopy
