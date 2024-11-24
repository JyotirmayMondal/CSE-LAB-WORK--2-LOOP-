#include <stdio.h>

int main()
{
float i,c,temp,sum;
c=0;
sum=0.0;
for(i=0;i<5;i++)
    {
        printf("Enter The Temp: ");
        scanf("%f",&temp);

        if(temp>=30)
        {
            sum+=temp;
            c=c+1;
        }

    }
    if(c>0){printf("%f is the average of the days temp above 30 degree",sum/c);}
    else{printf("There is no temp above 30 degree");}


}


