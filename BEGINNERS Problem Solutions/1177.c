/// solution no : #1177

#include<stdio.h>

int main()
{
    int arr[1000], i, n, j;

    scanf("%d", &n);

    for(i=0, j=0; i<1000; i++){
        if(j!=n)
            arr[i] = j++;
        else
        {
            j=0;
            arr[i] = j++;
        }
    }

    for(i=0; i<1000; i++)
        printf("N[%d] = %d\n", i, arr[i]);

    return 0;
}








