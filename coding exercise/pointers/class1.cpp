 #include<iostream>
 using namespace std;


 void sum(int *arr,int n)
 {
 cout<<"inside sum"<<arr<<endl;
    cout<<"inside sum"<<&arr<<endl;

    // cout<<sizeof(arr);
 }

void solve(int *&p)// by referece 
{
    p=p+1;
}
 int main()
 {
    //  int a=10;
    //  cout<<&a<<endl;
    //  cout<<a<<endl;
    //  int *ptr=&a;
    //  cout<<*ptr<<endl;
    //  cout<<ptr<<endl;

    // int arr[]={1,2,3,4};
    // cout<<sizeof(arr)<<endl;
    // int n=4;
    // cout<<"inside main"<<arr<<endl;
    // cout<<"inside main"<<&arr<<endl;
    // sum(arr,n);

    // int a=5;
    // int const *p=&a;

    // cout<<p<<endl;
    // cout<<&p<<endl;
    // cout<<*p<<endl;

    // solve(p);
    // cout<<"  ";
    //  cout<<p<<endl;
    // cout<<&p<<endl;
    // cout<<*p<<endl;
int const p=5;
cout<<++p;






 } 