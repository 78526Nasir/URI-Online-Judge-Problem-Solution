# solution  number: 1144

number = int(input())

for i in range(number):
    i+=1
    print("%d %d %d" % (i, i**2, i**3))
    print("%d %d %d" % (i, (i**2)+1, (i**3)+1))