#include<bits/stdc++.h>
#define pb push_back
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n][n];
    vector<vector<int> > ans;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>arr[i][j];
    for(int i=0;i<n;i++){
        int st=0, en=i;
        vector<int> v;
        for(int j=0;j<=i;j++){
            //cout<<arr[st][en]<<" ";
            v.pb(arr[st][en]);
            st++;
            en--;
        }
        ans.pb(v);
        //cout<<"\n";
    }
    for(int i=1;i<n;i++){
        int st=i, en=n-1;
        vector<int> v;
        for(int j=0;j<n-i;j++){
            //cout<<arr[st][en]<<" ";
            v.pb(arr[st][en]);
            st++;
            en--;
        }
        ans.pb(v);
        //cout<<"\n";
    }
}
