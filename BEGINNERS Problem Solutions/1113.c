/// solution no: #1113

#include<stdio.h>

int main()
{
    int first, second;

    while(1){
        scanf("%d%d", &first, &second);
        if(first == second)
            break;

        if(first>second){
            printf("Decrescente\n");
        }else{
            printf("Crescente\n");
        }
    }

    return 0;
}

