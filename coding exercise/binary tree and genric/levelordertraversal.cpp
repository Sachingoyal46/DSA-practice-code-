#include<iostream>
#include<queue>
#include<map>
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

void level_order_traversal(node * root)
{
    queue<node *>q;
    q.push(root);
    q.push(NULL);
   
        while(q.size()>1)
        {
            node * front=q.front();
                q.pop();
            
        if(front==NULL)
        {
            cout<<endl;
            q.push(NULL);
        }
        else
        {
        cout<<front->data<<" "; 
        if(front->left!=NULL)
        {
            q.push(front->left);
        }
        if(front->right!=NULL)
        {
            q.push(front->right);
        }
        }
      

    }

       
    }

int height(node * root)
    {
        queue<node *>q;
        int count=1;
        q.push(root);
        q.push(NULL);


        if(root==NULL)
        {
            return 0;
        }
   
        while(q.size()>1)
        {
            node * front=q.front();
                q.pop();
            
        if(front==NULL)
        {
            cout<<endl;
            count++;
            q.push(NULL);
        }
        else
        {

        if(front->left!=NULL)
        {
            q.push(front->left);
        }
        if(front->right!=NULL)
        {
            q.push(front->right);
        }
        }
      

     }
     return count;
    }

int search(int inorder[],int element,int size)
    {
        for(int i=0;i<size;i++)
        {
            if(inorder[i]==element)
            {
                return i;
            }
        }
        return -1;
    }

void createmap(int inorder[],int size,map<int,int>&mapping)
{
    for(int i=0;i<size;i++)
    {
       int element=inorder[i];
       mapping[element]=i;
    }
}



node * postorder_toprein(map<int,int>&mapping ,  int preorder[],int inorder[],int &preindex,int instart,int inend,int size)
{
    if(instart >inend || preindex > size)
    {
        return NULL;
    }
    int element=preorder[preindex];
    preindex++;

    //  int position=search(inorder,element,size); 
     int position=mapping[element];  // constant time for search

    node * root=new node(element);
    root->left=postorder_toprein(mapping,preorder,inorder,preindex,instart,position-1,size);
    root->right=postorder_toprein(mapping,preorder,inorder,preindex,position+1,inend,size);


    return root;



}



int main()
{
    // node * root=createnode();
    // level_order_traversal(root);
    // cout<<height(root);
    // return 0;
    int preorder[]={2,8,10,6,4,12};
    int inorder[]={10,8,6,2,4,12};
    int preindex=0;
    int instart=0;
    int inend=5;
    int size=6;
    map<int,int>mapping;
    createmap(inorder,size,mapping);
   node * temp= postorder_toprein(mapping,preorder,inorder,preindex,instart,inend,size);
   level_order_traversal(temp);
    return 0;
}
