#include<iostream>
#include<queue>
using namespace std;


class info
{
    public:
    int maxval;
    bool isheap;
    info(int a,bool b)
    {
        this->isheap=b;
        this->maxval=a;
    }
};

info validheap(node * root)
{
    // base case
    if(root==NULL)
    {
        info t1;
        t1.maxval=INT64_MIN;
        t1.isheap=true;
        return t1;


    }

    if(root->left==NULL && root->rigt==NULL)
    {
         info t1;
        t1.maxval=root->data;
        t2.isheap=true;
        return t1;
    }

    // left and right movement
    info left=validheap(root->left);
    info right=validheap(root->right);

    if(root->data > left.maxval && root->data > right.maxval && left.isheap && right.isheap)
    {
        info t1;
        t1.maxval=root->data;
        t1.isheap=true;
        return t1;
    }
    else
    {
        info t1;
        t1.maxval=max(root->data,max(left.maxval,right.maxval));
        t1.isheap=false;
        return t1;
    }

    
}


int main()
{

}