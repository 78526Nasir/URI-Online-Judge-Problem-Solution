
/// solution no: #1132

#include<stdio.h>

int main()
{
    int first, second, sum=0, i;

    scanf("%d%d", &first, &second);

    if(first<second){
        for(i=first; i<=second; i++)
        {
            if(i%13!=0)
                sum+=i;
        }
    }else{
        for(i=second; i<=first; i++)
        {
            if(i%13!=0)
                sum+=i;
        }
    }

    printf("%d\n", sum);
    return 0;
}


