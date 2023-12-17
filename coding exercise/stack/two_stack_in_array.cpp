#include<iostream>
#include<stack>

using namespace std;

class Stack{
    public:
    int *arr;
    int size;
    int top1;
    int top2;

    Stack(int size)
    {
        arr=new int[size];
        this->size=size;
        top1=-1;
        top2=size;
    }

    void push1(int data)
    {
        if(top2-top1==1)
        {
            cout<<"overflow"<<endl;
        }
        else{
                   top1++;
                     arr[top1]=data;
            }
     

    }

    void push2(int data)
    {   
        if(top2-top1==1)
        {
            cout<<"overflow"<<endl;
        }


        else
        {
             top2--;
             arr[top2]=data;

        }
        

    }

    void pop1()
    {
        if(top1==-1)
        {
            cout<<"underflow"<<endl;
        }
        else
        {
            arr[top1]=0;
            top1--;

        }
        
    }

     void pop2()
    {
        if(top2==size)
        {
            cout<<"underflow"<<endl;
        }
        else
        {
             arr[top2]=0;
             top2++;
        }
       
    }

    void print()
    {
        cout<<endl;
        cout<<"top1 -> " << top1<<endl;
        cout<<"top2 -> " << top2<<endl;
        for(int i=0;i<size ;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};


int main()
{
    Stack st(10);
    st.push1(10);
     st.push1(20);
      st.push1(30);
       st.push1(40);
       st.push2(100);
        st.push2(200);
         st.push2(300);
        st.push2(400);
        st.push2(500);
         st.push2(600);
         st.push1(2);
    st.print();
}




