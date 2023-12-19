#include<iostream>
#include<queue>
using namespace std;


int sumof_min_max(vector<int>& nums, int k) {

        int ans=0;
        deque<int>dq,dq2;


        // first window processing
        for(int i=0;i<k;i++)
        {
            int element=nums[i];
            while(!dq.empty() && element > nums[dq.back()] )
            {
                dq.pop_back();
            }
            dq.push_back(i);

            // badahi element kai liyia

             while(!dq2.empty() && element < nums[dq2.back()] )
            {
                dq2.pop_back();
            }
            dq2.push_back(i);
        }
         ans +=nums[dq.front()] + nums[dq2.front()];
        

        // remaining window

        // removing
        // ans store karna
        for(int i=k;i<nums.size();i++)
        {
           
            // 1 out off range

            if(!dq.empty() && i-dq.front()>=k)
            {
                dq.pop_front();
            }

            
            if(!dq2.empty() && i-dq.front()>=k)
            {
                dq2.pop_front();
            }
        // 2 chotai wali
            int element=nums[i];
            while(!dq.empty() && element >nums[dq.back()])
            {
                dq.pop_back();
            }

             while(!dq2.empty() && element <nums[dq2.back()])
            {
                dq2.pop_back();
            }

             // adding
             dq.push_back(i);
             dq2.push_back(i);
             ans +=nums[dq.front()] +nums[dq2.front()];
        }
        // last window
       
        return ans;
 
    }
    int main()
    {
        vector<int>arr={2,5,-1,7,-3,-1,-2};
        int k=4;
       int t= sumof_min_max(arr,k);
       cout<<t;


    }