#include <stdio.h>

main()
{

int result[] = {1000,400,20,50,60,70,550,1000,100,1200,5,2,1};
int Temp;
for (int i=0;i<13;i++)
{
    for (int j=i+1;j<13;j++)
    {
        if (result[i]>result[j])
        {
        Temp=result[i];
        result[i]=result[j];
        result[j]=Temp;
        }
    }

   
}

for (int i=0;i<13;++i)
{
    printf("%d\n",result[i]);
}

 
}
