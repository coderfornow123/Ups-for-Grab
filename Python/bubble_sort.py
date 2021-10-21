#Contributed by Pankaj Biradar @pankaj892
#Bubble Sort implementation in Python

n = int(input("Enter number of elements:"))
print("Enter elements:")
array = []
for i in range(n):
    array.append(int(input()))
for i in range(n-1):
    for j in range(n-1-i):
        if array[j] > array[j+1]:
            temp = array[j]
            array[j] = array[j + 1]
            array[j + 1] = temp
print("Sorted array is:")
print(array)
