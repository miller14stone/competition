def heapsort(aList):
    list_size = len(aList) - 1
    for i in range((list_size / 2), -1, -1):
        shift_down(aList, i , list_size)

    for i in range(list_size, 0, -1):
        if aList[0] > aList[i]:
            temp = aList[0]
            aList[0] = aList[i]
            aList[i] = temp
            shift_down(aList, 0, i - 1)
    return aList

def shift_down(aList, root, bottom):
    while (root * 2) <= bottom:
        if (root * 2) == bottom:
            maxChild = root * 2
        elif aList[root * 2] > aList[(root * 2)+1]:
            maxChild = root * 2
        else:
            maxChild = root * 2 + 1

        if aList[root] < aList[maxChild]:
            temp = aList[root]
            aList[root] = aList[maxChild]
            aList[maxChild] = temp
            root = maxChild
        else:
            return
if __name__ == '__main__':
    from random import shuffle
    l = range(15)
    lcopy = l[:]
    shuffle(l)
    print('Unsorted')
    print l
    assert l != lcopy
    print('Sorted')
    print heapsort(l)
    assert l == lcopy
