//printing all arthmetic operations
#include <stdio.h>
void main()
{
	int a, b, c, s, m,p,q;
	a=22;
	b=10;
	
	c=a+b;
	s=a-b;
	m=a*b;
	p=a%b;
	q=a/b;
	printf("sum of %d and %d is %d\n ",a , b, c );
	printf("difference of %d and is %d\n",a ,b, s);
	printf("product of %d and %d is %d\n" ,a,b,m);
	printf("percentage of %d and %d is %d\n",a,b,p);
	printf("division of %d and %d is %d",a,b,q);
}
