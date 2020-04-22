#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    int temp=arr[n-1];
    arr[n-1]=arr[n-2];
    int chk=0;
    int k=n-2;
    int l=n-3;
    while(chk==0){
            for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
            }
            if((temp<arr[k]) && temp>arr[l]){
                arr[k]=temp;
                break;
            }
            else{
                    arr[k]=arr[l];
                k--;
                l--;
            }
            cout<<"\n";

    }
    cout<<"\n";
    for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
            }
    return 0;
}
