#include <stdio.h>
void main()
{
	int n,s,p,q;
	n=10;
	s=n*(n+1)/2;
	p=n*(n+1);
	q=n*n;
	
	printf("sum of first %d natural number is %d\n",n,s);
	printf("sum of first %d even natural number is %d\n",n,p);
	printf("sum of first %d odd natural number is %d",n,q);
	
}

