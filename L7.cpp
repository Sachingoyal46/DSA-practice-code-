 #include<iostream>
 using namespace std;



//  int max(int num[],int n)
//  {
//     int max=INT16_MIN;
//     for(int i=0;i<=n;i++)

//     {
//         if(num[i]>max)
//         {
//             max=num[i];
//         }
//     }
//     return max;
//  }

//  int min(int num[],int n)
//  {
//     int min=INT16_MAX;
//     for(int i=0;i<=n;i++)

//     {
//         if(num[i]<min)
//         {
//             min=num[i];
//         }
//     }
//     return min;
//  }
 

//  int main()
//  {
//     int n;
//     int num[1000];
//     cout<<"entre the size of aary"<<endl;
//     cin>>n;
//     cout<<"enter the leemmts of array"<<endl;
//     for(int i=0;i<=n;i++)
//     {
//         cin>>num[i];
//     }

//     int ans=max(num,n);
//     int an=min(num,n);
//     cout<<ans<<endl<<an;
//  }


// int sum(int arr[],int n)
// {
//     int sum=0;
//     for(int i=0;i<n;i++)
//     {
//         sum=sum+arr[i];
//     }
//     return sum;
// }

// int main()
// {
//     cout<<"enter the size of the arry"<<endl;
//     int n;
//     int arr[100];
//     cin>>n;
//     cout<<"enter the elements"<<endl;
//     for(int i=0;i<n;i++)
//     {

//     cin>>arr[i];
//     }
//     int ans=sum(arr,n);
//     cout<<ans;
void reverse(int arr[],int n)
{
    int j=n-1;
    int i=0;
    while(i<j)
    {   
        int t=arr[i];
        arr[i]=arr[j];
        arr[j]=t;
        i++;
        j--;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }

}

int main()
{
    cout<<"enter the size of the arry"<<endl;
    int n;
    int arr[100];
    cin>>n;
    cout<<"enter the elements"<<endl;
    for(int i=0;i<n;i++)
    {

    cin>>arr[i];
    }
    cout<<"original array"<<endl;
     for(int i=0;i<n;i++)
    {

    cout<<arr[i];
    }
    cout<<endl;

    reverse(arr,n);





}