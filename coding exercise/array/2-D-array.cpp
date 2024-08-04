#include<iostream>
using namespace std;


// col wise sum
void col_sum(int arr[][4],int row,int col)
{
    for(int i=0;i<col;i++)
    {
        int sum=0;
        for(int j=0;j<row;j++)
        {
            sum +=arr[j][i];
        }
        cout<<sum<<endl;
    }
}

// diagonal sum

void diagonal_sum(int arr[][4] , int row,int col)
{   
    int sum=0;
    for(int i=0;i<row;i++)
    {
        sum += arr[i][i];
    }
    cout<<"the diagonal sum is"<<sum<<endl;
}
// second diagonal sum

void second_diagonal_sum(int arr[][4],int row,int col)
{
    int sum=0;
    for(int i=0;i<row;i++)
    {
        sum += arr[i][row-i-1];
    }
    cout<<sum<<endl;
}

void transpose_matrix(int arr[][4],int row,int col)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}
void print(int arr[][4],int row,int col)
{
    for(int i=0;i<row; i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;

    }
}


void swap_transpose(int arr[][4],int row,int col)
{
    for(int i=0;i<row;i++)
    {
        for(int j=i;j<col;j++)
        {
            swap(arr[i,j],arr[j,i]);
            
        }
       

    }
    print(arr,4,4);
    cout<<endl;
}



int main()
{
    int arr[][4] ={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {2,2,2,2}
    };

    int row=4;
    int col=4;

    col_sum(arr,row,col);

    diagonal_sum(arr,row,col);
    second_diagonal_sum(arr,row,col);
    transpose_matrix(arr,row,col);
    cout<<endl;
    swap_transpose(arr,row,col);



}