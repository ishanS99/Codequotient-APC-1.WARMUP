#include <stdio.h>
/* Include other headers as needed */
int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int a,b;
  scanf("%d%d",&a,&b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("%d\n%d",a,b);
  return 0;
}