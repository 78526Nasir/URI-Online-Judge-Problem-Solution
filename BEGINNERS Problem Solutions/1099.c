/// solution no: #1099

#include<stdio.h>

int main()
{
    int n,first, second,i, total=0;
    scanf("%d",&n);
    while(n!=0){
        scanf("%d%d", &first, &second);

        if(first<second){
            for(i=first+1;i<second;i++){
                if(i%2!=0){
                    total+=i;
                }
            }
        }else{
            for(i=second+1;i<first;i++){
                if(i%2!=0){
                    total+=i;
                }
            }
        }

        printf("%d\n",total);
        total=0;
        n--;
    }


    return 0;
}


