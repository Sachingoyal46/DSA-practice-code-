
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