# Problem no: 1045
# solution:

x, y, z = input().split(" ")

x = float(x)
y = float(y)
z = float(z)

arr = [x,y,z]
arr.sort(reverse=True)

x = arr[0]
y = arr[1]
z = arr[2]


if(x>=y+z):
    print("NAO FORMA TRIANGULO")
else:
    if((x*x) == ((y*y) + (z*z))):
        print("TRIANGULO RETANGULO")
    if((x*x) > ((y*y) + (z*z))):
        print("TRIANGULO OBTUSANGULO")
    if((x*x) < ((y*y) + (z*z))):
        print("TRIANGULO ACUTANGULO")
    if(x==y and y==z and z==x):
        print("TRIANGULO EQUILATERO")
    if((x==y and (x!=z or y!=z)) or ((y==z) and (y!=x or z!=x)) or ((z==x) and (z!=y or x!=y))):
        print("TRIANGULO ISOSCELES")