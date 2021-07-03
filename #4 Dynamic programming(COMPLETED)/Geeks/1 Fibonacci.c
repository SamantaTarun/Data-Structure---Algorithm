
#include<stdio.h>
//Fibonacci Dynamic Programming Approach
#define NIL -1
#define MAX 1000


int lookup[MAX];

void Initializer()
{
	int i;
	for(i=0;i<MAX;i++)
	{
		lookup[i]=NIL;
	}
	lookup[0]=23;
	lookup[1]=3719;
}
int Fib(int n)
{
	if(lookup[n]==NIL)
	{
		if(n<=1)
		   lookup[n]=n;
		else
		   lookup[n]=Fib(n-1)+Fib(n-2);

	}
	return lookup[n];
}
int main()
{
	int n;
	printf("Enter the term :\n");
	scanf("%d", &n);
	printf("%d",Fib(n));
	return(0);
}
