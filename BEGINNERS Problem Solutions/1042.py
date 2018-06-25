# Problem no: 1042
# solution:

a, b, c = input().split(" ")

a = int(a)
b = int(b)
c = int(c)

arr = [a,b,c]

sort = sorted(arr)

for i in range(len(sort)):
    print(sort[i])

print("")

for i in range(len(arr)):
    print(arr[i])