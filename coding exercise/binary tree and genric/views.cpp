#include<iostream>
#include<vector>
#include<queue>
#include<map>
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

void topview(node * root)
{
    map<int,int>mapping;
    queue<pair<node *,int>>q;
    q.push(make_pair(root,0));

    while(!q.empty())
    {
        pair<node *,int> temp=q.front();
        q.pop();
        node * x=temp.first;
        int y=temp.second;

        if(mapping.find(y)==mapping.end())
        {
            // not found
            mapping[y]=x->data;
        }

        if(x->left!=NULL)
        {
            q.push(make_pair(x->left,y-1));
        }

        if(x->right!=NULL)
        {
            q.push(make_pair(x->right,y+1));
        }

    }

}

void bottomview(node * root)
{
    map<int,int>mapping;
    queue<pair<node *,int>>q;
    q.push(make_pair(root,0));

    while(!q.empty())
    {
        pair<node *,int> temp=q.front();
        q.pop();
        node * x=temp.first;
        int y=temp.second;

        // overraiding karwaoo
            mapping[y]=x->data;
        

        if(x->left!=NULL)
        {
            q.push(make_pair(x->left,y-1));
        }

        if(x->right!=NULL)
        {
            q.push(make_pair(x->right,y+1));
        }

    }

    cout<<"bottom elements are"<<endl;
    for(auto i : mapping)
    {
        cout<<i.second<<" ";
    }


}

void leftside_traversal(node * root)
{
    if(root==NULL)
    {
        return ;
    }
    if(root->left==NULL && root->right==NULL)
    {
        return ;
    }
    cout<<root->data<<" ";
    if(root->left!=NULL)
    {
        leftside_traversal(root->left);
    }
    else
    {
        leftside_traversal(root->right);

    }
}

void rightside_traversal(node * root)
{
    if(root==NULL)
    {
        return ;
    }
    if(root->left==NULL && root->right==NULL)
    {
        return ;
    }
   
    if(root->right!=NULL)
    {
    rightside_traversal(root->right);
    }
    else
    {
        rightside_traversal(root->left);

    }
    cout<<root->data<<" ";
}

void leafnode_traversal(node * root)
{
    if(root==NULL)
    {
        return;
    }
    if(root->left==NULL && root->right==NULL)
    {
        cout<<root->data<<" ";
    }
    leafnode_traversal(root->left);
    leafnode_traversal(root->right);
}

void boundary_traversal(node * root)
{
    if(root==NULL)
    {
        return;
    }
    leftside_traversal(root);
    leafnode_traversal(root);
    if(root->right!=NULL)
    {
        rightside_traversal(root->right);
    }
    else
    {
        rightside_traversal(root->left);
    }
}

int main()
{
    node * root=createtree();
    level_order_traversal(root);

    // vector<int>ans;

    // print_left_view(root,0,ans);
    // cout<<"the left view of tree is"<<endl;
    // for(int i=0;i<ans.size();i++)
    // {
    //     cout<<ans[i]<<" ";
    // }

    // print_right_view(root,0,ans);
    // cout<<"the right view of tree is"<<endl;
    // for(int i=0;i<ans.size();i++)
    // {
    //     cout<<ans[i]<<" ";
    // }

    // topview(root);
    // cout<<endl;
    // bottomview(root);

    boundary_traversal(root);
    

}




// 10 20 40 -1 -1 50 70 110 -1 -1 111 -1 -1 80 -1 -1 30 -1 60 -1 90 112 -1 -1 113 -1 -1






