/// solution no : #1173

#include<stdio.h>

int main()
{
    int arr[10], i, no;
    scanf("%d", &no);

    for(i=0; i<10; i++){
        if(i==0)
            arr[i]=no;
        else{
            arr[i] = arr[i-1] * 2;
        }

        printf("N[%d] = %d\n", i,arr[i]);
    }

    return 0;
}




