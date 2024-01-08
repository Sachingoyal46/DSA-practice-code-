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

void preorder(node * root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(node * root)
{
    if(root==NULL)
    {
        return;
    }
   
    inorder(root->left);
     cout<<root->data<<" ";
    inorder(root->right);
}

void postorder(node * root)
{
    if(root==NULL)
    {
        return;
    }
   
    inorder(root->left);
    inorder(root->right);
    cout<<root->data<<" ";
}

node * maximum(node * root)
{
    if(root==NULL)
    {   
        cout<<"no maximum value"<<endl;
        return NULL;
    }
    node * temp=root;
    while(temp->right!=NULL)
    {
        temp=temp->right;
    }
    return temp;
}
 
node * minimum(node * root)
{
    if(root==NULL)
    {
        cout<<"no minimum value"<<endl;
        return NULL;
    }
    node * temp=root;
    while(temp->left!=NULL)
    {
        temp=temp->left;
    }
    return temp;
}

bool targetsearch(node * root,int target)
{
    // base case
    if(root==NULL)
    {
        return false;
    }

    // aik case
    if(root->data == target)
    {
        return true;
    }

    // baki ka recursion 
    bool leftans=false;
    bool rightans=false;
    if(target > root->data)
    {
        rightans=targetsearch(root->right,target);

    }
    else
    {
        leftans=targetsearch(root->left,target);
    }

    return rightans || leftans;


}
  
node * deletion(node * root,int target)
{
    if(root==NULL)
    {
        return NULL;
    }
    if(root->data==target)
    {
        // 4 case

        // case 1 left and right both have null
        if(root->left==NULL && root->right==NULL)
        {
            delete root;
            return NULL;
        }

        // case 2 left null and right nahi hai
        else if(root->left!=NULL && root->right==NULL)
        {
            node * temp=root->left;
            delete root;
            return temp;
        }
        else if(root->right!=NULL && root->left==NULL)
        {
            node * temp=root->right;
            delete root;
            return temp;
        }
        else
        {
            node * temp=maximum(root->left);
            root->data=temp->data;
            root->left=deletion(root->left,temp->data);
            return root;


        }
    }
    else if(root->data> target)
    {
        root->left=deletion(root->left,target);

    }
    else
    {
        root->right=deletion(root->right,target);
    }
    return root;
}

node * bst_to_inorder(int inorder[],int s,int e)
{
    // bas case
    if(s>e)
    {
        return NULL;
    }

    // aaik case
    int mid=(s+e)/2;
    int element=inorder[mid];
    node * root=new node(element);

    // baki resursion ko do
    root->left=bst_to_inorder(inorder,s,mid-1);

    root->right=bst_to_inorder(inorder,mid+1,e);


    return root;
}

void bst_to_doubly(node * root,node * &head)
{
    if(root==NULL)
    {
        return;
    }
    //RNL//
    //R
    bst_to_doubly(root->right,head);
    // N
    root->right=head;
    if(head!=NULL)
    {
        head->left=root;
    }
    head=root;

    // L
     bst_to_doubly(root->left,head);
}
void printddlinkedlist(node * head)
{
    node * temp=head;
    cout<<"doubly linked list is"<<endl;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->right;
    }
}


node* DDL_to_bst(node * &head,int n)
{
    if(head==NULL || n<=0)
    {
        return NULL;
    }
    // LNR

    // left
    node * left=DDL_to_bst(head,n/2);
    // n
    node * root=head;
    root->left=left;
    head=head->right;

    // R
    node* right=DDL_to_bst(head,n-n/2-1);
    root->right=right;

    return root;



}


int main()
{
    node * first=new node(10);
    node * second=new node (20);
    node * third=new node( 30);

    first->right=second;
    second->left=first;
    second->right=third;
    third->left=second;

    node * head=first;
    int n=3;
    node* root=DDL_to_bst(head,3);
    levelorder_traversal(root);

    // int inorder[]={10,20,30,40,50,60,70};
    // int size=7;
    // int start=0;
    // int last=size-1;
    // node * root=bst_to_inorder(inorder,start,last);
    // levelorder_traversal(root);


    // node * head=NULL;
    // bst_to_doubly(root,head);
    // printddlinkedlist(head);


    // node * root=NULL;
    // createbst(root);
//     levelorder_traversal(root);
//     cout<<"preorder"<<" ";
//     preorder(root);
//     cout<<endl;

//     cout<<"inorder"<<" ";
//     inorder(root);
//     cout<<endl;

//     cout<<"postorder"<<" ";
//     postorder(root);
//     cout<<endl;

//     node * max=maximum(root);

//     if(max==NULL)
//     {
//         cout<<"no maximum element"<<endl;
//     }
//     else
//     {
//         cout<<"maximum value is "<<max->data<<endl;
        
//     }

//     node * min=minimum(root);

//     if(min==NULL)
//     {
//         cout<<"no minimum element"<<endl;
//     }
//     else
//     {
//         cout<<"minimum value is "<<min->data<<endl;
        
//     }

//    cout<<"enter the target value"<<endl;
//    int t;
//    cin>>t;
//    while(t!=-1)
//    {
//         bool ans=targetsearch(root,t);
//         if(ans==true)
//         {
//             cout<<"found"<<endl;
//         }
//         else
//         {
//             cout<<"not found"<<endl;
//         }
//         cout<<"enter the value"<<endl;
//         cin>>t;
//    }

// int temp;
// cout<<"enter the target"<<endl;
// cin>>temp;
// while(temp!=-1)
// {
//        root= deletion(root,temp);
//        levelorder_traversal(root);
//        cout<<"enter the target"<<endl;
//        cin>>temp;
// }



}
// 50 30 40 20 60 55 70 80 25 -1