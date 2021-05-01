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

int cnt[30];

string str;

vector < string > vec;

void backtrack(int rem)
{
    if(rem == 0){
        vec.push_back(str); /// n!
        return ;
    }
    for(int i = 0 ; i<n ; i++){
        if(cnt[i] > 0){
            cnt[i]--;
            str += ('a' + i);
            backtrack(rem-1); /// pos = n - rem;
            cnt[i]++;
            str.pop_back();
        }
    }
} /// n! * n

int main()
{
    /// given a string, print all the permutation of that string
    n = 26;
    int rem = 0;
    string str;
    cin>>str;
    for(int i = 0 ; i<str.size() ; i++) cnt[str[i]-'a']++;
    for(int i = 0 ; i<n ; i++) rem += cnt[i];
//    cout<<rem<<endl;
    backtrack(rem);
    for(auto a:vec) cout<<a<<endl;
}
