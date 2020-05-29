#include<bits/stdc++.h>
#define pb push_back
using namespace std;

void rev(vector<int> &v, int st, int en)
{
    while(st<en){
        swap(v[st],v[en]);
        st++;
        en--;
    }
}

int main()
{
    int tc=10,A,st,en,i=0;
    while(tc--){
        string B;
        cin>>A>>B;
        int n=B.size();
        vector<int> v;
        for(int i=0;i<=n;i++)
            v.pb(i+1);
        while(i<n){
            st=i;
            en=i;
            while(B[i]=='D'){
                en++;
                i++;
            }
            rev(v,st,en);
            i++;
        }
        for(int i=0;i<v.size();i++)
            cout<<v[i]<<" ";
        cout<"\n";
    }
}
