#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

void displayPathtoPrincess(int n, vector <string> grid){
    //your logic here
    int mi,mj,pi,pj;
    for(int i=0;i<n;i++)
    {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]=='m')
                {
                    mi=i+1;
                    mj=j+1;
                }
                if(grid[i][j]=='p')
                {
                    pi=i+1;
                    pj=j+1;
                }
            }
    }

    int u,w;
    u=abs(mi-pi);
    w=abs(mj-pj);

    if(mi>pi)
    {
        for(int k=0;k<u;k++)
        {
            cout<<"UP"<<'\n';
        }
    }
    if(mi<pi)
    {
        for(int k=0;k<u;k++)
        {
            cout<<"DOWN"<<'\n';
        }
    }
    if(mj>pj)
    {
        for(int k=0;k<w;k++)
        {
            cout<<"LEFT"<<'\n';
        }
    }
    if(mj<pj)
    {
        for(int k=0;k<u;k++)
        {
            cout<<"RIGHT"<<'\n';
        }
    }




    //cout<<mi<<mj;
}

int main()
{
    int m;
    vector <string> grid;

    cin >> m;
    string s;
    for(int i=0; i<m; i++) {
         cin >> s;
        grid.push_back(s);

    }
    displayPathtoPrincess(m,grid);

    return 0;
}
