/// solution no: #1098

#include<stdio.h>

int main()
{
    float i,j=1;

    for(i= 0; ;){

        if(i>2)
        {
            printf("I=%.f J=%.f\n", i, j);
            printf("I=%.f J=%.f\n", i, j+1);
            printf("I=%.f J=%.f\n", i, j+2);
            break;
        }

        if((int)i != i){
            printf("I=%.1f J=%.1f\n", i, j);
            printf("I=%.1f J=%.1f\n", i, j+1);
            printf("I=%.1f J=%.1f\n", i, j+2);
        }else{

            printf("I=%.f J=%.f\n", i, j);
            printf("I=%.f J=%.f\n", i, j+1);
            printf("I=%.f J=%.f\n", i, j+2);
        }
        i+=0.2;
        j+=0.2;

    }

    return 0;
}



