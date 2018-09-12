#include <stdio.h>
/* Include other headers as needed */
int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int t,n,r,k;
  scanf("%d",&t);
  while(t--)
  {
    r=0;
    scanf("%d",&n);
    k=n;
    while(k>0)
    {
      r=(r*10)+(k%10);
      k/=10;
    }
    if(n==r)
      printf("Equal\n");
    else
      printf("Not Equal\n");
  }
  return 0;
}