vector<int> nextsmallerelements(int * arr,int size,vector<int> &ans)
{
    stack<int> s;
    s.push(-1);

    for(int i=0;i<size;i++)
    {

        int current=arr[i];
        while(s.top()>=current)
        {
            s.pop();
        }

        ans[i]=s.top();
        s.push(current);

    }
    return ans;

    

}
