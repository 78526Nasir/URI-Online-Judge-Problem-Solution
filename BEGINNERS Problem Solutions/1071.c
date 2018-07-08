/// solution URI problem : #1071

#include<stdio.h>

int main()
{
    int first, second, i, total=0;
    scanf("%d%d", &first, &second);

    if(first<second){
        for(i= first+1; i<second; i++)
        {
            if(i%2!=0)
                total+=i;
        }
    }else{
        for(i=second+1; i<first; i++){
            if(i%2!=0)
                total+=i;
        }
    }

    printf("%d\n", total);

    return 0;

}
