#solution number: 1134

alcool = 0
gasolina = 0
diesel = 0 

while(True):
    number = int(input())
    if(number==4):
        break
    elif(number==1):
        alcool+=1
    elif(number==2):
        gasolina+=1
    elif(number==3):
        diesel+=1

print("MUITO OBRIGADO")
print("Alcool:",alcool)
print("Gasolina:",gasolina)
print("Diesel:",diesel)