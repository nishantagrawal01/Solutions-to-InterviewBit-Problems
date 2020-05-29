#include<bits/stdc++.h>
#define pb push_back
using namespace std;
int main()
{
    vector<int> v;
    int x;
    for(int i=0;i<5;i++){
        cin>>x;
        v.pb(x);
    }
    while(v[0]==0 && v.size()>1)
        v.erase(v.begin());
    reverse(v.begin(),v.end());
    v[0]+=1;
    int i=0;
    while(v[i]==10 && i<5-1){
        v[i]=0;
        v[i+1]+=1;
        i++;
    }
    for(int i=0;i<5;i++)
        cout<<v[i]<<" ";
    if(v[5-1]==10){
        v[5-1]=0;
        v.pb(1);
    }
    reverse(v.begin(),v.end());
    cout<<"\n";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

















/*if(A[A.size()-1]<=8)
        A[A.size()-1]++;
    else
    {
        A[A.size()-1]++;
        int i,carry=0;
        for(i=A.size()-1;i>0;i--)
        {
            A[i]+=carry;
            carry=A[i]/10;
            A[i]=A[i]%10;
        }
        A[0]+=carry;
        if(A[0]==10)
        {
            //for(i=A.size()-1;i>0;i--)
                //A[i+1]=A[i];
            A[1]=A[0]%10;
            A[0]=A[0]/10;
            A.push_back(0);
        }
    }
    int i=0;
    while(1)
    {
        if(A[0]==0)
            A.erase(A.begin());
        else
            break;
    }*/
