#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n;
    cin>>n;
    ll p=5;

    ll sum=0;

    while(p<=n){

       sum+=n/p;
       p*=5;
    }

    cout<<sum<<endl;

    return 0;
}
