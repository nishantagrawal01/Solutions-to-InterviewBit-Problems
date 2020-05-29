#include<bits/stdc++.h>
#define pb push_back
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<vector<int> > ans;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(j==0 || j==i)
                arr[i][j]=1;
            else{
                arr[i][j]=arr[i-1][j]+arr[i-1][j-1];
            }
        }
    }
    for(int i=0;i<n;i++){
        vector<int> v;
        for(int j=0;j<=i;j++)
            v.pb(arr[i][j]);
        ans.pb(v);
    }
}
