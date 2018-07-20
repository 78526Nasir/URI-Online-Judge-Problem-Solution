/// solution number : #1146

#include<stdio.h>
int main()
{
    int number, i;
    while(1){
        scanf("%d", &number);

        if(number==0)
            break;

        for(i=1; i<=number; i++)
        {
            if(i==number)
                printf("%d", i);
            else
                printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}
