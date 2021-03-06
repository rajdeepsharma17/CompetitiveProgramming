#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll p[1000005]={0};
unordered_set<ll> primeFactors(ll n)
{
    unordered_set<ll> primes;
   while(n!=1)
   {
       /// n pe dekho kya pda hai
       primes.insert(p[n]);
       /// next dekho n/jo mila
       n=n/p[n];
   }
   return primes;
}
void preCompute()
{
    for(ll i=2;i<1000005;i++)
    {
        if(p[i]==0) /// 0 means unmarked
        {
            p[i]=i;
            for(ll j=i*i;j<1000005;j=j+i)
            {
                if(p[j]==0)  /// Not marked ex 12
                {
                    p[j]=i;
                }
            }
        }
    }
}
int main()
{
    preCompute();
    ll n;
    cin>>n;
    unordered_set<ll> primes=primeFactors(n);
    for(auto it=primes.begin();it!=primes.end();it++)
    {
        cout<<(*it)<<" ";
    }
}
