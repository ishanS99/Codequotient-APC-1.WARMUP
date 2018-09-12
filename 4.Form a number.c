
int formNumber()
{
  int n;
  scanf("%d",&n);
  int a,ans=0;
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a);
    ans = ans*10 + a;
  }
  return ans;
  
}

