
/// solution no: #1117

#include<stdio.h>

int main()
{
    float temp1, temp2, number;
    int i=0;

    while(1)
    {
        scanf("%f", &number);

        if(number>=0 && number<=10){
            if(i==1){
                temp2 = number;
                break;
            }else{
                temp1 = number;
                i++;
            }
        }
        else
            printf("nota invalida\n");

    }

    printf("media = %.2f\n", (temp1+temp2)/2);

    return 0;
}

