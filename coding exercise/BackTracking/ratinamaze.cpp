#include<iostream>
#include<vector>
using namespace std;


bool issafe(int maze[][4], int newx, int newy , int row , int col,vector<vector<bool>>&visited)
{
    if(newx>=0 && newx<row && newy >=0 && newy <col && maze[newx][newy]==1 && visited[newx][newy]==false)
    {
        return true;
    }
    return false;
}

void printallpath(int maze[][4] , int row, int col , int srcx , int srcy ,vector<vector<bool>>&visited, string &output)
{
    // base case
    if(srcx==row-1 && srcy==col-1)
    {
        cout<<output<<endl;
        return;
    }

    // up
    int newx=srcx-1;
    int newy=srcy;

    if(issafe(maze,newx,newy,row,col,visited))
    {
        visited[newx][newy]=true;
        output.push_back('U');
        printallpath(maze,row, col,newx,newy,visited,output);
        output.pop_back();
        visited[newx][newy]=false;
    }


    //down
    newx=srcx+1;
    newy=srcy;

    if(issafe(maze,newx,newy,row,col,visited))
    {
        visited[newx][newy]=true;
        output.push_back('D');
        printallpath(maze,row, col,newx,newy,visited,output);
        output.pop_back();
        visited[newx][newy]=false;
    }


    // left
    newx=srcx;
    newy=srcy-1;

    if(issafe(maze,newx,newy,row,col,visited))
    {
        visited[newx][newy]=true;
        output.push_back('L');
        printallpath(maze,row, col,newx,newy,visited,output);
        output.pop_back();
        visited[newx][newy]=false;
    }

    // right
    newx=srcx;
    newy=srcy+1;

    if(issafe(maze,newx,newy,row,col,visited))
    {
        visited[newx][newy]=true;
        output.push_back('R');
        printallpath(maze,row, col,newx,newy,visited,output);
        output.pop_back();
        visited[newx][newy]=false;
    }

}

int main()
{
    int maze[4][4]={
        {1,0,0,0},
        {1,1,0,0},
        {1,1,1,0},
        {1,1,1,1}
    };

    int row=4;
    int col=4;

    int srcx=0;
    int srcy=0;

    // visisted arry
    vector<vector<bool>>visited(row,vector<bool>(col,false));
    string output="";

    if(maze[0][0]==0)
    {
        cout<<"invalid"<<endl;
    }
    else
    {
        printallpath(maze,row,col,srcx,srcy,visited,output);
    }
    
    


}