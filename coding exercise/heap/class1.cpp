#include<iostream>
using namespace std;

class heap{
    public:
    int *arr;
    int size;
    int capacity;

    heap(int capacity)
    {
        this->arr= new int(capacity);
        this->capacity=capacity;
        this->size=0;
    }

    void insertion(int val)
    {
        if(size==capacity)
        {
            cout<<"heap over flow"<<endl;
            return;
        }
        size++;
        int index=size;
        arr[index]=val;

        // check this is for correct postion or not
        while(index>1)
        {
            int parentindex=index/2;
            if(arr[parentindex] < arr[index])
            {
                swap(arr[parentindex],arr[index]);
                index=parentindex;
            }
            else
            {
                break;
            }
            
        }
    }
    void printheap()
        {
            for(int i=1;i<=size;i++)
            {
                cout<<arr[i]<<" ";
            }
        }
    int deletionfromheap()
    {
        int answer=arr[1];
        arr[1]=arr[size];
        size--;

        // heapity
        int index=1;
        while(index<size)
        {
            int leftindex=2*index;
            int rightindex=2*index +1;
            int largerindex=index;
             // for left child
            if(leftindex <=size && arr[leftindex] > arr[largerindex])
            {
                largerindex=leftindex;  
            }
            // for right child
            if(rightindex <=size && arr[rightindex] > arr[largerindex])
            {
                largerindex=rightindex;
            }

            if(largerindex==index)
            {
                break;
            }
            else
            {
                swap(arr[index],arr[largerindex]);
                index=largerindex;
            }
        }
        return answer;
    }  
 
};

void heapify(int *arr,int n ,int index)
    {
        // recurrsively
        int leftindex=2*index;
        int rightindex=2*index+1;
        int largeindex=index;

        if(leftindex <=n && arr[leftindex] > arr[largeindex])
        {
            largeindex=leftindex;
        }

        // for right

        if(rightindex<=n && arr[rightindex] > arr[largeindex])
        {
            largeindex=rightindex;
        }

        if(largeindex!=index)
        {
            swap(arr[largeindex],arr[index]);
            index=largeindex;
            heapify(arr,n,index);

        }
        
    }  

    void buildheapifyy(int arr[],int n)
    {
        for(int i=n/2;i>0;i--)
        {
            heapify(arr,n,i);
        }
    }

    void heapsort(int arr[],int n)
{
    while(n!=1)
    {
        swap(arr[1],arr[n]);
        n--;
        heapify(arr,n,1);
    }
}




int main()
{
   int arr[]={-1,25,20,15,5,10,12};
   int size=6;
   buildheapifyy(arr,size);
   cout<<"printing"<<"  ";
   for(int i=1;i<=size;i++)
   {
    cout<<arr[i]<<"  ";
   }
   cout<<endl;

   heapsort(arr,size);

   cout<<"printing"<<"  ";
   for(int i=1;i<=size;i++)
   {
    cout<<arr[i]<<"  ";
   }
   cout<<endl;

//    heap h(5);
//    h.insertion(5);
//    h.insertion(10);
//    h.insertion(15);
//    h.insertion(6);
//    h.insertion(25);
    

  

//    h.printheap();
//    cout<<endl;
//   int t= h.deletionfromheap();
//   cout<<t<<"  "<<endl;
//   h.printheap();




}