#include<iostream>
#include<queue>
using namespace std;

class node
{
    public:
    int data;
    node * left;
    node * right;

    node (int data)
    {
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }

    
};

node * insertbst(node * root,int data)
{
    if(root==NULL)
    {
        root=new node(data);
        return root;
    }
    if(data > root->data)
    {
        root->right=insertbst(root->right,data);
    }
    else
    {
        root->left=insertbst(root->left,data);
    }
    return root;
}


void createbst(node * &root)
{
    cout<<"enter the data"<<endl;
    int data;
    cin>>data;

    while(data!=-1)
    {
       root= insertbst(root,data);
        cout<<"enter  the data"<<endl;
        cin>>data;
    }
}

void levelorder_traversal(node * root)
{
    queue<node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        node * temp=q.front();
        q.pop();
        if(temp==NULL)
        {
            cout<<endl;
            if(!q.empty())
            {
                q.push(NULL);
            }

        }
        else
        {
            cout<<temp->data<<" ";
            if(temp->left!=NULL)
            {
                q.push(temp->left);
            }
            if(temp->right!=NULL)
            {
                q.push(temp->right);
            }

        }
    }
}


//****************************************************************************************

void storeinorder(node * root,vector<int>&in)
{
    if(root==NULL)
    {
        return ;

    }
    // //lnr
    storeinorder(root->left,in);
    in.push_back(root->data);
    storeinorder(root->right,in);

}

void createmaxheap(node * &root,vector<int>inorder,int &index)
{
    if(root==NULL)
    {
        return ;
    }
    // post order
    createmaxheap(root->left,inorder,index);
    createmaxheap(root->right,inorder,index);
    root->data=inorder[index];
    index++;


}


node * converting_bst_to_maxheap(node * root)
{
    vector<int>inorder;
    storeinorder(root,inorder);

    // createating max heap by arry inorder
    int index=0;
    createmaxheap(root,inorder,index);
    return root;
}

int main()
{
    node * root=NULL;
    createbst(root);
    cout<<"printing bst"<<endl;
    levelorder_traversal(root);

    converting_bst_to_maxheap(root);
    cout<<endl;
    cout<<"printing max heap"<<endl;
    levelorder_traversal(root);
}