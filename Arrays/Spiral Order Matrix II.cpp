#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int k=1;
    int arr[a][a], first_row=0, first_col=0, last_row=a-1, last_col=a-1;
    while(k<=a*a){
        for(int i=first_col;i<=last_col;i++){
            arr[first_row][i]=k++;
        }
        first_row++;
        for(int i=first_row;i<=last_row;i++){
            arr[i][last_col]=k++;
        }
        last_col--;
        for(int i=last_col;i>=first_col;i--){
            arr[last_row][i]=k++;
        }
        last_row--;
        for(int i=last_row;i>=first_row;i--){
            arr[i][first_col]=k++;
        }
        first_col++;
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++)
            cout<<arr[i][j]<<" ";
        cout<<"\n";
    }
}
