# solution number : 1133

first = input()
second = input()

first = int(first)
second = int(second)
third = []

if(first<second):
    for i in range(first+1, second):
        if(i%5==2 or i%5==3):
            third.append(i)
else:
    for i in range(second+1, first):
        if(i%5==2 or i%5==3):
            third.append(i)

sorted(third)
            
for i in range(len(third)):
    print (third[i])