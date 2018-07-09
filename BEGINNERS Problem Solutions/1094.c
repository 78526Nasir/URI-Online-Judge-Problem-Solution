/// solution no: #1094

#include<stdio.h>

int main()
{
    float C=0.0, R=0.0, S=0.0, number;
    int n, total=0;
    char ch;

    scanf("%d", &n);

    while(n!=0){
        scanf("%f %c", &number,&ch);
        total+= number;

        if(ch == 'C')
            C+=number;
        else if(ch == 'R')
            R+=number;
        else if(ch == 'S')
            S+=number;

        n--;
    }

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %.f\n",C);
    printf("Total de ratos: %.f\n",R);
    printf("Total de sapos: %.f\n",S);
    printf("Percentual de coelhos: %.2f %%\n", (C/total)*100);
    printf("Percentual de ratos: %.2f %%\n",(R/total)*100);
    printf("Percentual de sapos: %.2f %%\n",(S/total)*100);

    return 0;
}



