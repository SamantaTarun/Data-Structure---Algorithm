#include<iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int a[26]={0};  // we put the value to all 0;

    int l=(int)s.length();

    for(int i=0;i<l;i++)
    {
        char x=a[i];
        int p=int(x);

        p=p-97;  //index of ith character

        a[p]=1;
    }
    int n;

    cin>>n;

    while(n--)
    {
        string k;

        cin>>k;
        
        int count=0; //no. of character that not present in string s
        for(int i=0;i<(int)k.length();i++)
        {
            char z=k[i];

            int h=int(z);

            h=h-97;

            if(a[h]==0)
              count++;
            else
            count=count;

        }

        if(count>0)
          cout<<"No"<<endl;
        else
          cout<<"Yes"<<endl;
    }



    return 0;
}
