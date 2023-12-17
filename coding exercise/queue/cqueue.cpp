#include<iostream>
using namespace std;

class cqueue
{

    public:
    int *arr;
    int front;
    int rear;
    int size;

    cqueue(int size)
    {
        arr=new int[size];
        this->size=size;
        front=-1;
        rear=-1;
    }

    void push(int val)
    {
        if(rear==size-1 && front==0  || rear==front-1)  // full ka case
        {
            cout<<"cqueue is overflow"<<endl;
            return ;
        }
        else if(rear==-1 && front==-1)
        {
            front++;
            rear++;
            arr[front]=val;
        } 
        else if(rear==size-1)
        {
            rear=0;
            arr[rear]=val;
        }
        else
        {
            rear++;
            arr[rear]=val;
        }
        
    }

    void pop()
    {
        if(rear==-1 && front==-1)
        {
            cout<<"cqueue underflow"<<endl;
            return;
        }
        else if(front==rear)
        {
            arr[front]=-1;
            front=-1;
            rear=-1;
        }
        else if(front==size-1)
        {
            
            arr[front]=-1;
            front=0;

        }
        else
        {
            arr[front]=-1;
            front++;
        }
    }

      void printcqueue()
    {   
        cout<<"cqueue is  ";
        for(int i=0;i<size;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }


};

int main()
{
    cqueue q(4);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    
 
    q.printcqueue();
    q.push(50);
  


    return 0;

}



