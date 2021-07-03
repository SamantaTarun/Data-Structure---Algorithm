#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i;
	cin>>n;
	if(n==1)printf("1");
	else if(n>=2 && n<=3) printf("NO SOLUTION");
	else
	{
	    for(i=2;i<=n;i+=2)
		{
			printf("%d ",i);
		}
		/*if(i==n-1)
		  printf("%d",i+2);
		*/
		if(n%2==0)
		{
		   for(i=1;i<n;i+=2)
		   {
			printf("%d ",i);
		   }
		}
		else
		{
			for(i=1;i<=n;i+=2)
		    {
			 printf("%d ",i);
		    }
		}
		
	}
	
	return(0);
}
