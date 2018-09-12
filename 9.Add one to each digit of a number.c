#include <stdio.h>
/* Include other headers as needed */
int main()
{

  int t,n,c=0,ans,k;
  scanf("%d",&t);
  while(t--)
  {
    ans=0;
    c=0;
    scanf("%d",&n);
    k=n;
  	while(k>0)
    {
      c++;
      k/=10;
    }
    while(c--)
    {
      ans = ans*10+1;
    }
    printf("%d\n",(ans+n));
  }
  
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}