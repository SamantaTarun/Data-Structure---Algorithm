 #include<bits/stdc++.h>
 
 using namespace std;
 int string_match(string s)
 {
 	sort(s.begin(),s.end());
 	int count=0;
 	int flag0=0,flag1=0,flag2=0,flag3=0,flag4=0,flag5=0,flag6=0,flag7=0,flag8=0,flag9=0;
 	
 	for(int i=0;i<=s.length();i++)
 	{
 		if(s[i]=='0')
 		{
 		   if(flag0==0)
			  count++;
			  flag0=1;	
		}
		else if(s[i]=='1')
		{
			if(flag1==0)
			   count++;
			   flag1=1;
		}
 		
 		else if(s[i]=='2')
 		{
 			if(flag2==0)
 			{
 				count++;
 				flag2=1;
			 }
		 }
		 
		else if(s[i]=='3')
 		{
 			if(flag3==0)
 			{
 				count++;
 				flag3=1;
			 }
		 }
		else if(s[i]=='4')
 		{
 			if(flag4==0)
 			{
 				count++;
 				flag4=1;
			 }
		 }
		else if(s[i]=='5')
 		{
 			if(flag5==0)
 			{
 				count++;
 				flag5=1;
			 }
		 }
		else if(s[i]=='6')
 		{
 			if(flag6==0)
 			{
 				count++;
 				flag6=1;
			 }
		 }
		else if(s[i]=='7')
 		{
 			if(flag7==0)
 			{
 				count++;
 				flag7=1;
			 }
		 }
		else if(s[i]=='8')
 		{
 			if(flag8==0)
 			{
 				count++;
 				flag8=1;
			 }
		 }
		else if(s[i]=='9')
 		{
 			if(flag9==0)
 			{
 				count++;
 				flag9=1;
			 }
		 }
	 }
	 
	return count;
	

 	
 }
 int main()
 {
 	int n;
 	
 	cin>>n;
 	
 	vector<string>vect;
 	string m;
 	
 	for(int i=0;i<n;i++)
 	{
 		cin>>m;
 		vect.push_back(m);
	}
	int count=0;
	for(int i=0;i<vect.size()-1;i++)
	{
		for(int j=0;j<vect.size();j++)
		{
			if(i==j)  
			
				continue;
			
			
			string s=vect[i]+vect[j];
			
			//cout<<s<<endl;
			if(string_match(s)==10)
			{
				count++;
			}
		}
	}
	cout<<count;
	
	return 0;
 }
