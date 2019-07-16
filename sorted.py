array=list()
num=int(input())
array=[int(x) for x in input().split()]
array=sorted(array)
print(*array, sep=" ")
