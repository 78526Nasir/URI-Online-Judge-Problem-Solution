/// solution URI problem : #1048


#include<stdio.h>

int main()
{
    float salary, in_percent, calculate, earned;
    scanf("%f", &salary);

    if(salary>=0 && salary<=400)
    {
        earned = salary*0.15;
        calculate = salary + earned;

        printf("Novo salario: %.2f\n", calculate);
        printf("Reajuste ganho: %.2f\n", earned);
        printf("Em percentual: %d %%\n",15);
    }else if(salary>400 && salary <=800){
        earned = salary*0.12;
        calculate = salary + earned;

        printf("Novo salario: %.2f\n", calculate);
        printf("Reajuste ganho: %.2f\n", earned);
        printf("Em percentual: %d %%\n",12);
    }else if(salary>800 && salary <=1200){
        earned = salary*0.10;
        calculate = salary + earned;

        printf("Novo salario: %.2f\n", calculate);
        printf("Reajuste ganho: %.2f\n", earned);
        printf("Em percentual: %d %%\n",10);
    }else if(salary>1200 && salary <=2000){
        earned = salary*0.07;
        calculate = salary + earned;

        printf("Novo salario: %.2f\n", calculate);
        printf("Reajuste ganho: %.2f\n", earned);
        printf("Em percentual: %d %%\n",7);
    }else{
        earned = salary*0.04;
        calculate = salary + earned;

        printf("Novo salario: %.2f\n", calculate);
        printf("Reajuste ganho: %.2f\n", earned);
        printf("Em percentual: %d %%\n",4);
    }


    return 0;
}




