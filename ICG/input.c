int fun(int x)
{
 x=x+1;
return x;
}
int main()
{
	int a;
	float b=6.5;
	for(int a=1;a<10;a=a+1)
	{
	  for(int b=10; b>0; b=b-1)
		a = a + 1;
	printf("%d", a);
	}
	// comment
	if(a>10)
	  printf("%d %f", a, b);
	else
	  {
	  a=a-1;
	  b=b+1;
	  printf("%d %f", a, b);
	  
	  }
	a=fun(10);
	printf("%d",a); 
}
