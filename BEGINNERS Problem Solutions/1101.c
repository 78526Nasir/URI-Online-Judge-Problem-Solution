/// solution no: #1101

#include<stdio.h>

int main()
{
    int first, second,i, total=0;

    while(1){
        scanf("%d%d", &first, &second);
        if(first<=0 || second <=0)
            break;

        if(first<second){
            for(i=first;i<=second;i++){
                printf("%d ", i);
                total += i;
            }
            printf("Sum=%d\n",total);
            total=0;
        }else{
            for(i=second;i<=first;i++){
                printf("%d ", i);
                total += i;
            }
            printf("Sum=%d\n",total);
            total=0;
        }
    }


    return 0;
}


