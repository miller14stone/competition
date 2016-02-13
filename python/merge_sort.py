def merge_sort(aList):
    if len(aList) <= 1:
        return aList

    mid = len(aList) // 2
    left = aList[:mid]
    right = aList[:mid]

    left = merge_sort(left)
    right = merge_sort(right)

    return list(merge(left, right))

def merge(left, right):
    sorted_list = []
    left_index = 0
    right_index = 0

    while left_index < len(left) and right_index < len(right):
        if left[left_index] <= right[right_index]:
            sorted_list.append(left[left_index])
            left_index += 1
        else:
            sorted_list.append(right[right_index])
            right_index += 1

    if left:
        sorted_list.extend(left[left_index:])
    if right:
        sorted_list.extend(right[right_index:])

    return sorted_list

if __name__ == '__main__':
    from random import shuffle
    l = range(15)
    lcopy = l[:]
    shuffle(l)
    print('Unsorted')
    print l
    assert l != lcopy
    print ('Sorted')
    l = merge_sort(l)
    print l
    assert l == lcopy
