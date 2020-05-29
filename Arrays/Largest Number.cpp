#include<bits/stdc++.h>
#define pb push_back
using namespace std;

bool comp(string s1, string s2)
{
    if(s1+s2>s2+s1)
        return true;
    return false;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    vector<string> v;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++){
        string str="";
        while(arr[i]){
            str+=arr[i]%10+'0';
            arr[i]/=10;
        }
        reverse(str.begin(),str.end());
        v.pb(str);
        cout<<str;
    }
    cout<<v[0]<< "\n";
    sort(v.begin(),v.end(),comp);
    for(int i=0;i<v.size();i++)
        cout<<v[i];
}

