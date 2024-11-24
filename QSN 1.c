#include <stdio.h>

int main()
{
int x ,i, c ;
c=0;
for(i=0;i<7;i++)
    {
        printf("Enter The Age: ");
        scanf("%d",&x);


        if(x>=13 && x<=19)
        {
            c=c+1;
        }

    }
    printf("%d persons are teenagers",c);

}
