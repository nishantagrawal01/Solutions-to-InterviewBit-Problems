#include<bits/stdc++.h>
#define pb push_back
using namespace std;

vector<int> solve(vector<int> &v)
{
    for(int i=v.size()-1;i>0;i--){
        if(v[i]>v[i-1]){
            swap(v[i],v[i-1]);
            return v;
        }
    }
    sort(v.begin(),v.end());
    return v;
}

int main()
{
    vector<int> v{3,2,1};
    vector<int> ans=solve(v);
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
}
