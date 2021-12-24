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

    ll i,j,n,m,p,q,t,sum=0,maxVal=0,minVal=101,maxPeople,minPeople;
    string s;
    
    cin>>n>>m;
    sum+=m;

    for(i=0;i<n;i++)
    {
        cin>>p;
        sum+=p;

        maxVal=max(maxVal,p);
        //minVal=min(minVal,p);
    }

    maxPeople=maxVal+m;
    minPeople=sum/n;

    if(sum%n)
        minPeople++;
    
    minPeople=max(maxVal,minPeople);

    cout<<minPeople<<gap<<maxPeople;
    cout<<"\n";
    return 0;   //:D
}