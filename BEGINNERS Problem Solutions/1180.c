
/// solution no : #1180

#include<stdio.h>

int main()
{
    int n, i, smallest, pos;

    scanf("%d", &n);
    int arr[n];

    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);

    smallest = arr[0];
    pos=0;

    for(i=0; i<n; i++)
    {
        if(smallest > arr[i]){
            smallest = arr[i];
            pos=i;
        }
    }

    printf("Menor valor: %d\n",smallest);
    printf("Posicao: %d\n", pos);
    return 0;
}




