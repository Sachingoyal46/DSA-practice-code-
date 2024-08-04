#include<bits./stdc++.h>
using namespace std;




bool possible(vector<int>&v ,int roti ,int mid)
{
  int currp=0;
  for(int i=0;i<v.size();i++)
  {
    int R=  v[i];
    int j=1;
    int timetaken=0;

    while(true)
    {
        if(timetaken +j*R <=mid)
        {
            ++currp;
            timetaken +=j*R;
            j++;
        }
        else
        {
            break;
        }
    }
    if(currp >= roti)
    {
        return true;
    }
  }
  return false;
}
int main()
{
    int roti;
    cin>>roti;

    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {   
        int value;
        cin>>value;
        v.push_back(value);
    }
    // search space
    int maxi=*max_element(v.begin(),v.end());
    int start=0;
    int end=maxi*roti*(roti+1)/2;
    int ans=-1;
    while(start <=end)
    {   
        int mid=(start+end)>>1;
        if(possible(v,roti,mid))
        {
           ans=mid;
           end=mid-1; 
        }
        else{
            start=mid+1;
        }
    }
    cout<<ans;
}