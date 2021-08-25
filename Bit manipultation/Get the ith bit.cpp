#include<bits/stdc++.h>
using namespace std;


int get(int n,int i){

    int mask=(1<<i);

    return (mask & n)>0? 1 : 0;


}



int main()
{
    int n=5;
    int i;
    cin>>i;

    cout<<get(n,i)<<endl;



    return 0;
}
