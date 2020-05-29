#include<bits/stdc++.h>
#define pb push_back
using namespace std;
int main()
{
    int n,k=1;
    cin>>n;
    vector<vector<int>> mat;
    for(int i=0;i<n;i++){
        vector<int> v;
        for(int j=0;j<n;j++){
            v.pb(k++);
        }
        mat.pb(v);
    }

    for(int i=0;i<n/2;i++){
        for(int j=i;j<n-i-1;j++){
            int temp=mat[i][j];
            mat[i][j]=mat[n-1-j][i];
            mat[n-1-j][i]=mat[n-1-i][n-1-j];
            mat[n-1-i][n-1-j]=mat[j][n-1-i];
            mat[j][n-1-i]=temp;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cout<<mat[i][j]<<" ";
        cout<<"\n";
    }


    /*vector<int> top_diagonal, bottom_diagonal;
    for(int i=0;i<n;i++)
        left_diagonal.pb(mat[i][i]);
    for(int i=0;i<n;i++)
        right_diagonal.pb(mat[i][n-i-1]);*/
}
