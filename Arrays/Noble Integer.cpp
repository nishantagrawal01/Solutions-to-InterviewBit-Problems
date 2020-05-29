#include<bits/stdc++.h>
using namespace std;
int x=0;
int solve()
{
    x+=1;
    cout<<x;
}
int main()
{
    int n;
    cin>>n;
    int arr[n],fg=0;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1])
            continue;
        if(arr[i]==n-1-i){
            cout<<1;
            fg=1;
            break;
        }
    }
    if(fg==0)
        cout<<-1;
}
