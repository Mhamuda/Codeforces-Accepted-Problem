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
#define f first
#define s second
#define pb push_back
#define gap ' '
#define yes cout<<"YES"
#define no cout<<"NO"
#define all(v) v.begin(),v.end()
#define fastio {ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define mod 1000000007
#define MAX 1004
#define N 305

int main()
{
    fastio;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //OrderSetTree ost;

    ll i,j,n,p,t;
    cin>>t;

    while(t--)
    {    
        vector<ll>v,y,z;
        cin>>n;

        for(i=0;i<n;i++)
        {
            cin>>p;
            v.pb(p);
        }        
        
        for(i=0;i<n;i++)
        {
            cin>>p;
            
            if(p>v[i])
            {
                for(j=0;j<p-v[i];j++)
                    y.pb(i+1);
            }
            else if(p<v[i])
            {
                for(j=0;j<v[i]-p;j++)
                    z.pb(i+1);
            }
        }

        if(y.size()!=z.size())
            cout<<-1<<"\n";
        else
        {
            cout<<y.size()<<"\n";

            for(i=0;i<y.size();i++)
                cout<<z[i]<<gap<<y[i]<<"\n";
        }
        
       
    }
    
    return 0;   //:D
}
