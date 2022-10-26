#include<stdio.h>
float func(float x);
int main()
{
  int n=10; //Taking n=10 sub intervals
  float a,b,integral; //integral is the integration result
  scanf("%f",&a); // initial limit taken from test case 
  scanf("%f",&b);
    float h,x,sum=0;
  int i;
  h=((b>a)?(b-a):(a-b))/n;
  for(i=1;i<n;i++)
  {
    x=a+i*h;
    sum=sum+func(x);
  }
  integral=(h/2)*(func(a)+func(b)+2*sum);
  printf("The integral is: %0.6f\n",integral);
  return 0;
}
float func(float x)
{
  return(x*x);
}

