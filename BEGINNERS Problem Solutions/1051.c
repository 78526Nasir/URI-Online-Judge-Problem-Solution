/// solution URI problem : #1051

#include<stdio.h>

int main()
{
    float salary, tax = 0, rate, f_extra, s_extra, l_extra;
    scanf("%f", &salary);

    if(salary>=0 && salary<=2000)
        printf("Isento\n");
    else if(salary>2000 && salary <=3000){
        rate = 0.08;
        f_extra = salary - 2000;
        tax = f_extra * 0.08;
        printf("R$ %.2f\n", tax);
    }
    else if(salary>3000 && salary<=4500){
        rate = 0.18;
        tax = 1000 * 0.08;

        s_extra = salary - 3000;
        tax+= s_extra * rate;

        printf("R$ %.2f\n", tax);
    }
    else if(salary>4500)
    {
        rate = 0.28;
        tax = 1000 * 0.08;
        tax+= 1500 * 0.18;

        l_extra = salary-4500;
        tax += l_extra * rate;

        printf("R$ %.2f\n", tax);
    }

    return 0;
}
