/// solution no : #1175

#include<stdio.h>

int main()
{
    int arr[20], arr_m[20], i, no, j;

    for(i=0;i<20; i++)
        scanf("%d", &arr[i]);

    for(i=20-1, j=0; i>=0; i--, j++){
        arr_m[j] = arr[i];
    }

    for(i=0; i<20; i++){
        printf("N[%d] = %d\n", i,arr_m[i]);
    }

    return 0;
}






