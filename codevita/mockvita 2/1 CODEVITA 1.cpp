#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
ll fact[1000010];
ll powr(ll n,ll r)
{
    if(r==0)
        return 1;
    else if(r==1)
    {
        return n;
    }
    else
    {
        ll num=powr(n,r/2);
        if(r%2==0)
            return (num*num)%mod;
        else
            return (((num*num)%mod)*n)%mod;
    }
}
ll coeffi(ll n,ll r)
{
    ll value=(fact[r]*fact[n-r])%mod;
    return (fact[n]*powr(value,mod-2))%mod;
}
int main() {
    fact[0]=1;
    for(ll i=1;i<=1000005;i++)
    {
        fact[i]=(i*fact[i-1])%mod;
    }
ll l,r,e,o,k;
cin>>l>>r;
cin>>k;
ll nm=(r-l+1);
if(nm%2==0)
{
    e=nm/2;
}
else
{
    if(l%2==0)
        e=(nm/2)+1;
    else
        e=(nm/2);
}
o=nm-e;
ll ans=0;
for(ll i=k;i>=0;i-=2)
{
    ans+=(((powr(e,i)*powr(o,k-i))%mod)*coeffi(k,i))%mod;
    ans%=mod;
}
cout<<ans<<"\n";
return 0;
}
