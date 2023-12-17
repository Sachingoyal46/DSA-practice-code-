#include<iostream>

using namespace std;



class queue
{
    public:
    int *arr;
    int size;
    int front;
    int rear;


    queue(int size)
    {
        arr=new int[size];
        this->size=size;
        front=-1;
        rear=-1;

    }

    void push(int val)
    {
        // if quque is empty
        if(rear==-1 && front==-1)
        {
            rear++;
            front++;
            arr[rear]=val;
        }

        else if(rear==size-1)  // full case
        {
            cout<<"queue overflow"<<endl;
            return;
        }
        else{  // normal case
            rear++;
            arr[rear]=val;
        }
    }


    void pop()
    {
        // empty case
        if(rear==-1 && front==-1)  
        {
            cout<<"queue underflow"<<endl;
            return ;
        }
        else if(rear==1 && front==1)  // single elemnet ka case
        {
            arr[front]=-1;
            rear=-1;
            front=-1;
        }

        else
        {
            arr[front]=-1;
            front++;
        }
    }

    int getlength()
    {
        if(rear==-1 && front==-1)
        {
            return 0;
        }
        else
        {
            return rear-front+1;
        }
        
    }

    int getfront()
    {

        if(front==-1)
        {
            cout<<"no element in queue"<<endl;
            return -1;
        }
        else
        {
              return arr[front];
        }
      
    }

    int getback()
    {
        if(rear==-1)
        {
            cout<<"no element in queue"<<endl;
            return -1;
        }
        else
        {
             return arr[rear];
        }
       
    }

    bool isempty()
    {
        if(rear==-1 && front==-1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }


    void printqueue()
    {   
        cout<<"queue is  ";
        for(int i=0;i<size;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};

int main()
{
    queue q(5);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    // q.printqueue();

    // q.pop();
    // q.pop();
    // q.printqueue();
    // q.push(10);
    // q.printqueue();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.printqueue();

  cout<<  q.getlength();


  return 0;

}




// int main()
// {

    // stl
    // queue<int>q;

    // q.push(10); // push
    // q.push(20);
    // q.push(30);
    // cout<<" the size of the queue is "<<q.size()<<endl;


    // if(q.empty())
    // {
    //     cout<<"empty hai"<<endl;
    // }
    // else
    // {
    //     cout<<"empty nahi hai"<<endl;
    // }

    // q.pop();
    // cout<<q.size()<<endl;


    // cout<<endl;
    // cout<<"first elemnet is "<<q.front()<<endl;
    // cout<<"last elemnts is "<<q.back()<<endl;   // last or rear

//     return 0;


// }