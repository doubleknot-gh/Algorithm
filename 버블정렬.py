def bubble_sort(arr):
    n=len(arr)
    for i in range(n-1):
        for j in range(n-1-i):
            if arr[j]>arr[j+1]:
                arr[j],arr[j+1]=arr[j+1],arr[j]
    return arr

# Example
arr=[64,34,25,12,22,11,90]
print("Before Sort:",arr)
sorted_arr=bubble_sort(arr)
print("After Sort: ",sorted_arr)

# Defintion : 서로 인접한 두 원소를 비교하면서 자리 바꾸기
