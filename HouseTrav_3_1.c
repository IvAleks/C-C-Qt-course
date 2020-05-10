#include <stdio.h>  
int main()
{
int i=1;   //  цыклов for
int s=0;   // число цыклов while
int k=0;   // число цыклов while do
    do
    {k++;
    printf("one cycle DO\n");
    printf("number cycle WHILE DO: %d\n",k);
      while (k==2 && s<=1)
       {
        s++;
        printf("  duos cycle WHILE: \n");
        printf("  number cycle WHILE: %d\n",s);
           
           for (i=1;i<3;i++)
           {
           int  ii=i;
            printf("    three cycle FOR %d\n",ii);
            printf("    number cycle FOR: %d\n",ii);
            }
        }
     }
     while (k<=3);
return 0;
}

