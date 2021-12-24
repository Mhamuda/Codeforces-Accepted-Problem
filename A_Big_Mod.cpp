/******************************************************************************

                         بسم الله الرحمن الرحيم
                     Author: Mst: Mhamuda Khatun
                               RUCSE27

*******************************************************************************/

#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ll long long
#define ull unsigned long long
#define OrderSetTree tree<ll,null_type/*mapped_type*/,less<ll>,rb_tree_tag,tree_order_statistics_node_update>
#define pi 2*acos(0.0)
#define pb push_back
#define gap ' '
#define yes cout<<"YES"
#define no cout<<"NO"
#define all(v) v.begin(),v.end()
#define fastio {ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define mod 1000000007
#define MAX 1004
#define N 305

ll bigMod(ll b,ll p,ll m)
{   ll ans=1;

    if(p==0)
        return ans*1;
    
    if(p&1)
    {
        ll x = b%m;
        ll y = bigMod(b,p-1,m)%m;

        return ans=(x*y)%m;
    }
    else
    {
        ll x=(bigMod(b,p/2,m))%m;
        
        return ans=(x*x)%m;
    }

    return ans;
}
int main()
{
    fastio;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //OrderSetTree ost;

    ll i,j,b,m,p;

    while(cin>>b>>p>>m)
    {   
        cout<<bigMod(b,p,m);
        cout<<"\n";
    }
    
    return 0;   //:D
}
