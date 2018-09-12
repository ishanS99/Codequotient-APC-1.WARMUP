#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int n,i,j,f;
  scanf("%d",&n);
  if(n<3)
  	printf("2\n");  
  else
  {
    printf("2\n3");
  for(i=5;i<=n;i+=2)
  {
    f=2;
    for(j=3;j<i;j+=2)
    {
      if(i%j==0)
      {
        f=1; 
        break;
      }
    }
    if(f==2)
      printf("\n%d",i);
  }
  }
   return 0;
}