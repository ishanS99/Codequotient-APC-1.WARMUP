#include <stdio.h>
/* Include other headers as needed */
int main()
{

  int n,k,ans=0;
  scanf("%d",&n);
  while(n--)
  {
    scanf("%d",&k);
    ans=ans+k;
  }
  printf("%d",ans);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}