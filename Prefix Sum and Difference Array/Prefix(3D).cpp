#include<bits/stdc++.h>

using namespace std;

const int N = 205;

int a[N][N][N],pref[N][N][N];

int main()
{
    int n,m,p;
    cin>>n>>m>>p;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            for(int k=1;k<=p;k++){
                cin>>a[i][j][k];
            }
        }
    }

    for(int x=1;x<=n;x++){
        for(int y=1;y<=m;y++){
            for(int z=1;z<=p;z++){
                pref[x][y][z]=a[x][y][z]+pref[x-1][y][z]+pref[x][y-1][z]+pref[x][y][z-1]-pref[x-1][y-1][z]-pref[x-1][y][z-1]-pref[x][y-1][z-1]+pref[x-1][y-1][z-1];
            }
        }
    }

    int q;
    cin>>q;

    while(q--){
        int x1,y1,z1,x2,y2,z2;
        cin>>x1>>y1>>z1>>x2>>y2>>z2;

        int sum=pref[x2][y2][z2]-pref[x1-1][y2][z2]-pref[x2][y1-1][z2]-pref[x2][y2][z1-1]+pref[x1-1][y1-1][z2]+pref[x1-1][y2][z1-1]+pref[x2][y1-1][z1-1]-pref[x1-1][y1-1][z1-1];

        cout<<sum<<endl;
    }

    return 0;
}
