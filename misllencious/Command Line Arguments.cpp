#include<bits/stdc++.h>
int main(int argc,int *argv[])
{
	if(argc<2)
	{
		printf("Please Provide Arguments\n");
		return -1;
	}
	for(int i=1;i<argc;i++)
	{
		printf("argv[%2d]: %d\n",i,atoi(argv[i]));
	}
	return 0;
}
