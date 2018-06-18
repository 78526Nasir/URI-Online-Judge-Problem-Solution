
// solution URI problem : #1024

#include <stdio.h>
#include <string.h>
#define MAX 1000

int main()
{
    int i, n, k=0, len;
    char plain[MAX], chiper[MAX];

    scanf("%d%*c",&n);

    while(n!=0){
        scanf("%[^\n]%*c",plain);

        for(i=0; plain[i]!='\0';i++){
            if(plain[i]>='a' && plain[i]<='z' || plain[i]>='A' && plain[i]<='Z'){
                plain[i]=plain[i] + 3;
            }
        }

        len = strlen(plain);

        for(i=len-1; i>=0; i--)
            chiper[k++] = plain[i];

        chiper[k] = '\0';

        for(i = len/2; chiper[i]!='\0';i++)
        {
            chiper[i]=chiper[i]-1;
        }

        printf("%s\n",chiper);
        n--;
        k=0;
    }

    return 0;
}
