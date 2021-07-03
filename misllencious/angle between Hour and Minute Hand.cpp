#include<bits/stdc++.h>
using namespace std;


int CalCAnale(double h,double m)
{
	//Validate the input
	if(h<0||m<0||h>12||m>60)
	   cout<<"Wrong Output"<<endl;
	   
	if(h==12) h=0;
	if(m==60)
	{
		m=0;
		h+=1;
		if(h>12)
		  h-=12;
	}
	
	//Calculate the angle
	float hour_angle=0.5*(h*60+m);
	float minute_angle=6*m;
	
	//Find the difference
	float angle = abs(hour_angle - minute_angle);
	
	angle=min(360-angle,angle);
	
	return angle;
}
int main()
{
	double H,M;
	cin>>H>>M;
	
	cout<<CalCAnale(H,M)<<endl;
	
	return 0;
}
