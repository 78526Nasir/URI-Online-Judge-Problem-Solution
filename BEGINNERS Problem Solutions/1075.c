/// solution no: #1075

#include<stdio.h>
int main()
{
    int divider, i;

    scanf("%d", &divider);

    for(i=0;i<=10000; i++){
        if(i%divider == 2)
            printf("%d\n", i);
    }

    return 0;
}
