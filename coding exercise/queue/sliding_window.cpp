#include<iostream>
#include<queue>
using namespace std;

void slidingwindow(int *arr,int n,int k)
{
        deque<int>dq;
        // first window
        for(int index=0;index<k;index++)
        {
            int element=arr[index];
            if(element<0)
            {
                dq.push_back(index);
            }
        }

        for(int index=k;index<n;index++)
        {
            

            if(dq.empty())
            {
                cout<<"0"<<endl;
            }
            else
            {
                cout<<arr[dq.front()]<<" ";
            }
            
            // add
            if(arr[index]<0)
            {
                dq.push_back(index);
            }

            // remove
            if((index - dq.front())>=k)
            {
                dq.pop_front();
            }

        }
         if(dq.empty())
            {
                cout<<"0"<<endl;
            }
            else
            {
                cout<<arr[dq.front()]<<" ";
            }

}

int main()
{

    int arr[]={-2,0,4,-1,-5,6};
    int n=6;
    int k=3;
    slidingwindow(arr,n,k);

}