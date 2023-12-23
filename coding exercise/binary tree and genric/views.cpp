#include<iostream>
#include<vector>
#include<queue>
using namespace std;


class node{
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

node * createtree()
{
    cout<<"enter the value of node"<<endl;
    int data;
    cin>>data;

    if(data==-1)
    {
        return NULL;
    }

    node * root=new node(data);
    cout<<"enter the value for left node "<<data<<endl;
    root->left=createtree();
    cout<<"enter the value for right node "<<data<<endl;
    root->right=createtree();

    return root;


}

void  preorder(node * root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void  inorder(node * root)
{
    if(root==NULL)
    {
        return;
    }
   
    inorder(root->left);
     cout<<root->data<<" ";
    inorder(root->right);
}

void  postorder(node * root)
{
    if(root==NULL)
    {
        return;
    }
   
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

void level_order_traversal(node * root)

{
        queue<node *>q;
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

void print_left_view(node * root,int level,vector<int>&arr)
{
    if(root==NULL)
    {
        return;
    }
    if(level==arr.size())
    {
        arr.push_back(root->data);
    }
    print_left_view(root->left,level+1,arr);
    print_left_view(root->right,level+1,arr);

}

void print_right_view(node * root,int level,vector<int>&arr)
{
    if(root==NULL)
    {
        return;
    }
    if(level==arr.size())
    {
        arr.push_back(root->data);
    }
    print_right_view(root->right,level+1,arr);

    print_right_view(root->left,level+1,arr);
    
}

int main()
{
    node * root=createtree();
    level_order_traversal(root);

    vector<int>ans;

    // print_left_view(root,0,ans);
    // cout<<"the left view of tree is"<<endl;
    // for(int i=0;i<ans.size();i++)
    // {
    //     cout<<ans[i]<<" ";
    // }

    print_right_view(root,0,ans);
    cout<<"the right view of tree is"<<endl;
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
}


// 10 20 40 -1 -1 50 70 110 -1 -1 111 -1 -1 80 -1 -1 30 -1 60 -1 90 112 -1 -1 111 -1 -1






