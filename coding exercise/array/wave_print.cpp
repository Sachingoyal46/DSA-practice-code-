#include<iostream>
#include<vector>

using namespace std;


void wave_print(vector<vector<int>>v)
{
    int n=v.size(); // for no of rows
    int m=v[0].size(); // no of colums

    for(int i=0;i<m;i++)
    {
        if((i & 1)==0)
        {
            for(int j=0;j<n;j++)
            {
                cout<<v[j][i]<<" ";
            }
        }

        else
        {
            for(int k=n-1;k>=0;k--)
            {
                cout<<v[k][i]<<" ";
            }
        }
    }
}

int main()
{
    vector<vector<int>>v{
        {1,2,3},
        {4,5,6},
        {7,8,9}

    };

    wave_print(v);

    return 0;

}