/// solution no : #1176

#include<stdio.h>

int main()
{
    int n, i;
    long long int no, first, second, third;
    scanf("%d", &n);

    while(n!=0){
        scanf("%lld", &no);
        first=0; second=1; third=0;

        if(no==0 || no==1)
        {
            first = no;
        }else{
            for(i=1; i<=no; i++)
            {
                third = first+second;
                first = second;
                second = third;
            }
        }

        printf("Fib(%lld) = %lld\n", no, first);

        n--;
    }

    return 0;
}







