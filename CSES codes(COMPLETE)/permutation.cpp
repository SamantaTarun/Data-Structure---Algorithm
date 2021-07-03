#include<bits/stdc++.h>
using namespace std;
vector<int> permutation;
vector<int>vect2;
// Function to display the array 
void process(vector<int>vect,int n) 
{ 
    int i,count=1;
    for(i=0;i<n-1;i++)
    {
       if(abs(vect[i+1]-vect[i])>1)	
       {
       	 count++;
	   }
	   
	}
	if(count==n)
	{
		for(i=0;i<n;i++)
		{
			vect2.push_back(vect[i]);
		}
		
	}
} 
void Search(int n)
{
	int i;
   for (i = 1; i <= n; i++) 
	{
     permutation.push_back(i);
    }
   do{
   // process permutation
   process(permutation,n);
   /*
   for(int i=0;i<n;i++)
	{
		printf("%d ",permutation[i]);
	}
	printf("\n");
	*/
     }while (next_permutation(permutation.begin(),
   permutation.end()));
}
int main()
{
	int n,i;
	cin>>n;
	if(n<=10)
	{
	  Search(n);
	  if(vect2.empty())cout<<"NO SOLUTION";
	  else
	  {
		for(i=0;i<n;i++)
		{
			cout<<vect2[i]<<" ";
		}
	  }	
	}
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
