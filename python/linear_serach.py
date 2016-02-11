
def linear_search(aList, val):
    for x in aList:
        if x == val:
            return True
    return False

if __name__ == '__main__':
    from random import shuffle
    l = range(15)
    v = raw_input('Find value? ')
    r = linear_search(l, int(v))
    if r:
        print('Found!')
    else:
        print('Not Found!')
