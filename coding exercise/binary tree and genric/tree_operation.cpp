#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node * left;
    node * right;


    node(int val)
    {
        this->data=val;
        this->left=NULL;
        this->right=NULL;
    }
};


node *createnode()
{
    cout<<"enter the value of node"<<endl;
    int data;
    cin>>data;

    if(data==-1)
    {
        return NULL;
    }

    node * root=new node(data);
    // left 
    cout<<"enter the left value of node"<<root->data<<endl;
    root->left=createnode();

    // right
    cout<<"enter the value of right node"<<root->data<<endl;
    root->right=createnode();


    return root;

}


// traversing 
// NLR
void preorder_traversal(node * root)
{
    if(root==NULL)
    {
        return ;
    }
    cout<<root->data<<" ";
    preorder_traversal(root->left);
    preorder_traversal(root->right);
}
//LRN
void postorder_traversal(node * root)
{
    if(root==NULL)
    {
        return ;
    }
    
    postorder_traversal(root->left);
    postorder_traversal(root->right);
    cout<<root->data<<" ";
}
// LNR
void inorder_traversal(node * root)
{
    if(root==NULL)
    {
        return ;
    }
   
    inorder_traversal(root->left);
     cout<<root->data<<" ";
    inorder_traversal(root->right);
}

int main()
{
    node * root=createnode();
    cout<<"preorder"<<" ";
    preorder_traversal(root);
    cout<<endl;

    cout<<"postorder"<<" ";
    postorder_traversal(root);
    cout<<endl;

    cout<<"inorder"<<" ";
    inorder_traversal(root);
    cout<<endl;
}