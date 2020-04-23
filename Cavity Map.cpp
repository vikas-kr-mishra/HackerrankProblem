#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==0||i==n-1||j==0||j==n-1)
            {
                cout<<arr[i][j];
            }
            else{
                if((arr[i][j]>arr[i-1][j])&&(arr[i][j]>arr[i+1][j])&&(arr[i][j]>arr[i][j-1])&&(arr[i][j]>arr[i][j+1])){
                    //arr[i][j]='X';
                    cout<<"X";
                }
                else{
                    arr[i][j]=arr[i][j];
                    cout<<arr[i][j];
                }
            }
        }
        cout<<"\n";
    }


    return 0;
}
