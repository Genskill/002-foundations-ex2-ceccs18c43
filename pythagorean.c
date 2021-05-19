#include<stdio.h>
#include<cs50.h>
int main(void)
{
  float l,m,n,x,y,z,a,r;
  l=get_float("side 1 ");
  n=get_float("side 2 ");
  m=get_float("side 3 ");
  if(l>n && l>m)
  {
     y=l;
     x=n;
     z=m;
  }
  else if(n>l && n>m)
  {
     y=n;
     x=l;
     z=m;
  }
  else
  {
     y=m;
     x=l;
     z=n;
  }
 r=(x*x)+(z*z);
 a=y*y;
 if(r==a)
 {
     printf("Yes\n");
 }
 else
 {
     printf("No\n");
 }
}
