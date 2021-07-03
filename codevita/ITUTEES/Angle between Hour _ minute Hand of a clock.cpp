//Angle between minute & Hour Hand

#include<bits/stdc++.h>

using namespace std;
// Function to compute angle between Hour & minute Hand

int findAngle(int hour,int min)
{
	//Find Position of Hour Hand
	
	int h=(hour*360)/12+(min*360)/(12*60);
	
	//Find POsition of Minute Hand
	int m=(min*360)/60;
	
	//Calculate the angle difference
	int angle=abs(h-m);
	
	//Consider Shorter angle and return it
	
	if(angle>1800)
	   angle=360-angle;
	   
	return angle;
}

int main()
{
	int hour,min;
	
	cin>>hour>>min;
	
	printf("%.2f",(double)findAngle(hour,min));
	return 0;
}
