
def showArr(arr):
    for q in arr:
        print q

## quick sort implementation
# elegant
def qsort(L):
    if L == []:
        return L
    return qsort([x for x in L[1:] if x < L[0]]) + L[0:1] + qsort([x for x in L[1:] if x >= L[0]])


arr = [10,9,8,7,6,5,4,3,2,1]
print "Start"
showArr(arr)
arr = qsort(arr)
print "End"
showArr(arr)

def quicksort(seq):
    if len(seq) < 1:
        return seq
    pivot = seq[0]
    left = []
    right = []
    for x in range(1, len(seq)):
        if seq[x] <= pivot:
            left.append(seq[x])
        else:
            right.append(seq[x])
    left = quicksort(left)
    right = quicksort(right)
    foo = [pivot]
    # merge
    return left + foo + right


arr = [10,9,8,7,6,5,4,3,2,1]
print "Start"
showArr(arr)
arr = quicksort(arr)
print "End"
showArr(arr)
