#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,c,m;
        cin>>n>>c>>m;
        int tc=n/c;
        int temp=tc;
        while(temp>0&&temp-m>=0)
        {
            temp=temp-m+1;
            tc++;
        }
        cout<<tc<<"\n";


    }
    //cout << "Hello world!" << endl;
    return 0;
}
