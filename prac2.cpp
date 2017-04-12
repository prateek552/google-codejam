#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;int j=0;int k=0;
        int arr[n][n]={0};
        vector<int> a(((2*n)-1)*n);
        for(int i=0;i<(((2*n)-1)*n);i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        for(int i=0;i<(((2*n)-1)*n);i++)
        {
            if(a[i]==2501)
                continue;
            arr[k][j]=a[i%];

            arr[j][k]=a[i+1];
            int m=i;
            while(a[m]==a[i])
                a[m]=2501;
            j++;
            if((i-1)%n==0)
                k++;

        }
        for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cout<<arr[i][j];
    }}
