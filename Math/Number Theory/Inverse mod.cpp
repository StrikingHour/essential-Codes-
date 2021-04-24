#include<bits/stdc++.h>
#define MAX ((int)2e9 + 5)
#define MAXL ((ll)1e16 + 5)
#define pi acos(-1)
#define MOD ((int)1e8 + 7)
#define N ((int)1e6 + 5)
#define eps (1e-8)
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL)
#define endl "\n"
#define ll long long

using namespace std;

int bigMod(int a,int p,int mod){
    if(p==0) return 1;
    int ans=bigMod(a,p/2,mod);
    ans=1LL*ans*ans%p;
    if(p&1) ans=1LL*ans*a%p;
    return ans;
}

int main()
{
    int a,b,p;
    cin>>a>>b>>p;

    ll ans= ((a%p)*bigMod(b,p-2,p))%p;




    return 0;
}
