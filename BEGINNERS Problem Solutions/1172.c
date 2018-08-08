/// solution no : #1172

#include<stdio.h>

int main()
{
    int arr[10], i, no;

    for(i=0; i<10; i++){
        scanf("%d", &no);
        if(no<=0)
            arr[i]=1;
        else
            arr[i]=no;
        printf("X[%d] = %d\n", i,arr[i]);
    }

    return 0;
}



