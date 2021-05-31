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

int main()
{
    ll n,k;
    cin>>n>>k;

    vector<int> a(n);

    for(int i=0;i<n;i++) cin>>a[i];

    for(int i=0;i<k;i++){
        ll x;
        cin>>x;
        ll l=0,r=n-1,m;

        bool ok=false;

        while(r>=l){
            m=(l+r)/2;
            if(a[m]==x){
                ok=true;
                break;

            }
            else if(a[m]>x){
                r=m-1;
            }
            else{
                l=m+1;
            }
        }
        if(ok) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }


    return 0;
}
