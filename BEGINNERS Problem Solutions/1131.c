
/// solution no: #1131

#include<stdio.h>

int main()
{
    int first, second, X, inter=0, gremio=0, draw=0 ;

    while(1)
    {
        scanf("%d%d", &first, &second);
        printf("Novo grenal (1-sim 2-nao)\n");

        if(first>second)
            inter++;
        else if(second>first)
            gremio++;
        else
            draw++;

        scanf("%d", &X);

        if(X==1)
            continue;
        else if(X==2)
        {
            printf("%d grenais\n", (inter+gremio+draw));
            printf("Inter:%d\n",inter);
            printf("Gremio:%d\n",gremio);
            printf("Empates:%d\n",draw);

            if(inter>gremio)
                printf("Inter venceu mais\n");
            else if(gremio>inter)
                printf("Gremio venceu mais\n");
            else
                printf("Não houve vencedor");
            break;
        }

    }

    return 0;
}

