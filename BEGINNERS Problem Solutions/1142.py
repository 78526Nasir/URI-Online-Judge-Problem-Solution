# solution number: 1142

number = int(input())
k=1

for i in range(number):
    print("%d %d %d PUM" % (k, k+1, k+2))
    k+=4