#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int main()
{
    int k;
    cin>>k;
    int arr[k];
    arr[0]=1;
    arr[1]=k;
    int x=k/2, i;
    if(k%2!=0){
        for(i=2;i<(k+1)/2;i++){
            arr[i]=k*x;
            x+=2;
        }
        x=1;
        for(;i<=k;i++){
            arr[i]=arr[i-x];
            x+=2;
        }
    }
    for(int i=0;i<=k;i++)
        cout<<arr[i]<<" ";
}
