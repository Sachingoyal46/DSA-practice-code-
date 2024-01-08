#include<iostream>
#include<queue>
#include<vector>
using namespace std;

class info{
    public:
    int data;
    int inforow;
    int infocol;

    info(int val,int r,int c)
    {
        this->data=val;
        this->inforow=r;
        this->infocol=c;
    }
};

class compare
{
    public:
    bool operator()(info *a,info *b)
    {
        return a->data > b->data; // if is true give the datat of b otherwise 
        // if is is false give the datat of a
    }
};

void  Merge_kth_Sortedarray(int arr[][4],int row,int col,vector<int>&ans)
{
    priority_queue<info* ,vector<info*>,compare>pq;  

    for(int i=0;i<row;i++)
    {
        int element=arr[i][0];
        info * newinfo=new info(element,i,0);
        pq.push(newinfo);
    }

    while(!pq.empty())
    {
        info * temp=pq.top();
        pq.pop();
        int tempdata=temp->data;
        int temprow=temp->inforow;
        int tempcol=temp->infocol;

        // push the data into the ans 
        ans.push_back(tempdata);

        // aab jo push kiys hai ushka data (info) pq mai dalo
        if(tempcol+1 <col)
        {
            // abhi row mai data  hai ishka matlab 
            info * newinfo=new info(arr[temprow][tempcol+1],temprow,tempcol+1);
            pq.push(newinfo);
        }
    }
}

int main()
{
    int arr[3][4]={
        {1,5,10,15},
        {4,2,8,7},
        {9,12,11,3}
    };
    int row=3;
    int col=4;
    vector<int>ans;
    Merge_kth_Sortedarray(arr,row,col,ans);

    cout<<"printing sorted array"<<endl;
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<"  ";
    }

    return 0;

}