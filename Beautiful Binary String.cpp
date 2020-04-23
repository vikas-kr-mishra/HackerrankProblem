#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cs=0;
    for(int i=0;i<n-2;i++){
            string temp;
            for(int j=i;j<i+3;j++){
                //temp="";
                temp=temp+s[j];
            }

        if(temp=="010"){
            i=i+2;
            cs++;
        }
    }
    cout<<cs;
    return 0;
}
