#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> A{1,10,5};
    int n=A.size(), ans=INT_MIN, prev=0;
    int arr[100005]={0};
    for(int i=0;i<n;i++)
        arr[A[i]]++;
    int i;
    for(i=0;i<100005;i++){
        if(arr[i]>0){
            prev=i;
            break;
        }
    }
    for(;i<100005;i++){
        if(arr[i]>0){
            ans=max(ans,i-prev);
            prev=i;
        }
    }
    cout<<ans;
}
