# solution URI problem : 1048

first = input()
second = input()
third = input()

if(first == "vertebrado"):    
    if(second == "ave"):
        if(third == "carnivoro"):
            print("aguia")
        else:
            print("pomba")
    elif(second == "mamifero"):
        if(third == "onivoro"):
            print("homem")
        else:
            print("vaca")
else:
    if(second == "inseto"):
        if(third == "hematofago"):
            print("pulga")
        else:
            print("lagarta")
    else:
        if(third == "hematofago"):
            print("sanguessuga")
        elif(third == "onivoro"):
            print("minhoca")
    