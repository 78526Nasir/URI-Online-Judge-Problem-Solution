/// solution no : #1182

#include<stdio.h>

int main()
{
    int l, i, j;
    float arr[12][12], sum=0, avg;
    char ch;

    scanf("%d %c", &l, &ch);

    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++){
            scanf("%f", &arr[i][j]);
        }
    }

    if(ch == 'S')
    {
        for(i=l; i<12; i++){
            sum += arr[i][l];
        }
        printf("%.1f\n", sum);
    }else if(ch == 'M'){
        for(i=0; i<12; i++){
            sum += arr[i][l];
        }
        avg = sum/12;

        printf("%.1f\n", avg);
    }

    return 0;
}






