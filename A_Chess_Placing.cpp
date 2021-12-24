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
#define MAX 1000000000000
#define N 305

int main()
{
    fastio;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //OrderSetTree ost;

    ll i,j,n,p,t,oddposition=0,evenposition=0;
    string s;
    
    cin>>n;
    vector<bool>v(n+1,false);
    vector<ll>odd,even;

    for(i=0;i<n/2;i++)
    {   
        cin>>p;
        v[p]=true;
        
        if(p&1)
            odd.pb(p);
        else
            even.pb(p);
    }
    sort(all(odd));
    sort(all(even));

    i=0;
    j=2;
    while(j<=n)
    {
        if(v[j])
            j+=2;
        else
        {   
            evenposition+=abs(j-odd[i]);
            j+=2;
            i++;
        }
    }
    
    j=1;
    i=0;
    while(j<=n-1)
    {
        
        if(v[j])
            j+=2;
        else
        {   
            oddposition+=abs(j-even[i]);
            j+=2;
            i++;
        }
    }

    //cerr<<oddposition<<gap<<evenposition<<"\n";
    cout<<min(oddposition,evenposition);
    return 0;   //:D
}