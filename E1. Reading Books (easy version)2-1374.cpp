 /******************************************************************************

                         بسم الله الرحمن الرحيم
                     Author: Mst: Mhamuda Khatun
                               RUCSE27

*******************************************************************************/

#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define ll long long
#define pi 2*acos(0.0)
#define f first
#define s second
#define pb push_back
#define gap ' '
#define fastio {ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define mod 1000000007
#define MAX 1000000000000
#define N 305

int main()
{
    fastio;
    ll i,n,k,x,y,z,t,a,b,ans=0;
    vector<ll>both,alice,bob;

    cin>>n>>k;

    while(n--)
    {
        cin>>t>>a>>b;

        if(a==b && a==1)
            both.push_back(t);
        else if(a==1 && b==0)
            alice.push_back(t);
        else if(a==0 && b==1)
            bob.push_back(t);
    }
    sort(alice.begin(),alice.end());
    sort(bob.begin(),bob.end());

    y=alice.size();
    z=bob.size();

    for(i=0;i<min(y,z);i++)
        both.push_back(alice[i]+bob[i]);

    sort(both.begin(),both.end());

    x=both.size();

    if(x<k)
        ans=-1;
    else
    {
        for(i=0;i<k;i++)
            ans+=both[i];
    }

    cout<<ans;
    cout<<"\n";
    return 0;   //:D
}


