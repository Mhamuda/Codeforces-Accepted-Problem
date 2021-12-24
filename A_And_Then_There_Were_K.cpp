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
#define MAX 500
#define N 305


int main()
{
    fastio;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //OrderSetTree ost;

    ll i,j,t,n,ans;
    cin>>t;
    
    while(t--)
    {   
        cin>>n;
        ans=1;

        for(i=1; ;i++)
        {
            ans*=2;

            if(ans>n)
                break;
        }
        
        cout<<(ans/2)-1;
        cout<<"\n";
    }

    return 0;   //:D
}


