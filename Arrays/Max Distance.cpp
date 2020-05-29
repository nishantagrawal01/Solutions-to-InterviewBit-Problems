/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> A{3,5,4,2};
    int n=A.size(), index=n-1, max_elem=A[n-1], ans=0;
    for(int i=n-2;i>=0;i--){
        if(A[i]<max_elem)
            ans=max(ans,index-i);
        max_elem=A[i];
    }
    cout<<ans;
}*/







#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> A{3,5,4,2};
    int n=A.size();
    int left_min[n], right_max[n], ans=-1;
    left_min[0]=A[0];
    right_max[n-1]=A[n-1];
    for(int i=1;i<n;i++)
        left_min[i]=min(A[i],left_min[i-1]);

    for(int i=n-2;i>=0;i--)
        right_max[i]=max(A[i],right_max[i+1]);


    int i=0, j=0;
    while(i<n && j<n){
        if(left_min[i]<=right_max[j]){
            ans=max(ans,j-i);
            j++;
        }
        else
            i++;
    }
    cout<<ans;
}
