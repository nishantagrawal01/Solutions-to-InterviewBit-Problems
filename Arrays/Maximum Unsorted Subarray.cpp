#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> A{10, 12, 20, 30, 25, 40, 32, 31, 35, 50, 60};
    int n=A.size(), si, mi;
    for(int i=0;i<n-1;i++){
        if(A[i]>A[i+1])
            si=i;
    }
    for(int i=n-1;i>0;i--){
        if(A[i]<A[i+1])
            mi=i;
    }
    int min_elem=100000, max_elem=0;
    for(int i=si;i<=mi;i++){
        min_elem=min(min_elem,A[i]);
        max_elem=max(max_elem,A[i]);
    }
    cout<<si<<" "<<mi<<"\n";
    cout<<min_elem<<" "<<max_elem<<"\n";
    int start=si, end=mi;
    for(int i=0;i<si;i++){
        if(A[i]>min_elem){
            start=i;
            break;
        }
    }
    for(int i=n-1;i>mi;i--){
        if(A[i]<max_elem){
            end=i;
            break;
        }
    }
    cout<<start<<" "<<end;
}
