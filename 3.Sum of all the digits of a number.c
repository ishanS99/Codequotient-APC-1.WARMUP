#include <stdio.h>
/* Include other headers as needed */
int main()
{
	int t,n,ans;
  scanf("%d",&t);
  while(t--)
  {
    scanf("%d",&n);
    ans=0;
    while(n>0)
    {
      ans+=(n%10);
      n/=10;
    }
    printf("%d\n",ans);
  }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}