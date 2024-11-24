#include <stdio.h>

int main()
{
int x ,i, c ,d ,e ;
c=0;d=0;e=0;
for(i=0;i<7;i++)
    {
        printf("Enter The Age: ");
        scanf("%d",&x);


        if(x<=12)
        {
            c=c+1;
        }
        if(x>=13 && x<=19)
        {
            d=d+1;
        }
        if(x>=65)
        {
            e=e+1;
        }

    }
    printf("%d persons are child \n",c);
    printf("%d persons are Teenager \n",d);
    printf("%d persons are Senior Citizen ",e);


    return 0;

}


