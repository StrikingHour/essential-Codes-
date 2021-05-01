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

int n;

int vis[30];

string str;

vector < string > vec;

void backtrack(int rem)
{
    if(rem == 0){
        vec.push_back(str); /// n!
        return ;
    }
    for(int i = 0 ; i<n ; i++){
        if(vis[i] == 0){
            vis[i] = 1;
            str += ('a' + i);
            backtrack(rem-1); /// pos = n - rem;
            vis[i] = 0;
            str.pop_back();
        }
    }
} /// n! * n

int main()
{
    /// given n , print all the permutations of the 1st n characters
    cin>>n;
    backtrack(n);
    for(auto a:vec) cout<<a<<endl;
    return 0;
}
