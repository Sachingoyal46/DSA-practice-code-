#include<iostream>
#include<vector>
using namespace std;


int main()
{
 

// vector<int>v(5,1);

// for(int i=0;i<v.size();i++)
// {
//     cout<<v[i]<<" ";
// }

// v.push_back(3);
// v.push_back(4);
// v.push_back(4);

// cout<<v.size();


// vector<vector<int>>arr(5,vector<int>(10,2));

// for(int i=0;i<arr.size();i++)
// {
//     for(int j=0;j<arr[i].size();j++)
//     {
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
// }

// jagged array

vector<vector<int>>arr;

vector<int>v1(10,0);
vector<int>v2(4,5);
vector<int>v3(6,9);

arr.push_back(v1);
arr.push_back(v2);
arr.push_back(v3);
for(int i=0;i<arr.size();i++)
{
    for(int j=0;j<arr[i].size();j++)
    {
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}








}
    


