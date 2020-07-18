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
    sort(both.begin(),both.end(),greater<ll>());
    sort(alice.begin(),alice.end(),greater<ll>());
    sort(bob.begin(),bob.end(),greater<ll>());

    x=both.size();
    y=alice.size();
    z=bob.size();

    if(x+y<k || x+z<k)
        ans=-1;
    else
    {
        while(1)
        {
            if(k==0)
                break;

            if(both.empty())
            {
                ans+=alice.back()+bob.back();
                k--;
                alice.pop_back();
                bob.pop_back();
            }
            else if(alice.empty() || bob.empty())
            {
                ans+=both.back();
                k--;
                both.pop_back();
            }
            else
            {
                if(both.back()<=alice.back()+bob.back())
                {
                    ans+=both.back();
                    k--;
                    both.pop_back();
                }
                else
                {
                    ans+=alice.back()+bob.back();
                    k--;
                    alice.pop_back();
                    bob.pop_back();

                }
            }
        }
    }

    cout<<ans;
    cout<<"\n";
    return 0;   //:D
}


