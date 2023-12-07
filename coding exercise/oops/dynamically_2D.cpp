#include<iostream>
#include<vector>
using namespace std;
// dynamically 2 d
int main()
{
    int row=5, col=5;
    int **arr= new int *[5];
    for (int i=0;i<row;i++)
    {
        arr[i]=new int[col];
    }
   

    // for (int i=0;i<row;i++)
    // {
    //     for(int j=0;j<col;j++)
    //     {
    //         cout<<arr[i][j]<<"  ";
    //     }
    //     cout<<endl;
    // }

// for delloaction of 2D array

for (int i=0;i<row;i++)
{
    delete [] arr[i];
}

delete  []arr; // for 1 d

// vector<vector<int>>arr(row,vector<int>(col,0)); // for vector


//     for (int i=0;i<row;i++)
//     {
//         for(int j=0;j<col;j++)
//         {
//             cout<<arr[i][j]<<"  ";
//         }
//         cout<<endl;
//     }
// }




// for vector
}
