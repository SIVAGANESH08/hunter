#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j,a,k=0,l=0;
    scanf("%d",&n);
    a=n;
  //  for(i=1;i<=2*n-1;i++)
    //{
      //  printf("%d",n);
    //}
    printf("\n");
    for(i=1;i<=2*a-3;i++,k++)
    {
        for(j=1;j<=2*a-1;j++,l++)
        {
            if((j==1)||(j==2*a-1))
            printf("%d",n);
            else
            if(j==2||j==2*a-2)
            {
                /* code */printf("%d",n-k);
            }
            
            else
            if(i==1||i==2*a-3)
            {
                printf("%d",n-k); 
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    //for(i=1;i<=2*n-1;i++)
   // {
     //   printf("%d",n);
    //}
}