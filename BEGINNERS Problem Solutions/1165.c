/// solution no : #1165

#include<stdio.h>

int main()
{
    int n, no, i, flag;
    scanf("%d", &n);

    while(n!=0){
        scanf("%d", &no);
        flag=0;
        for(i=2; i<=no/2; i++)
        {
            if(no%i==0)
            {
                flag=1;
                break;
            }
        }

        if(flag==1){
            printf("%d nao eh primo\n", no);
        }else
            printf("%d eh primo\n", no);

        n--;
    }

    return 0;
}


