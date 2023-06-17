// stl lecture

#include<iostream>
#include<array>
#include<vector>
#include<deque>
#include<list>
#include<stack>

using namespace std;

int main()
{

    // ****************************array*******************************
    // int basic[3]={1,2,3};

    // array<int,4>a ={1,2,3,4};
    // int size=a.size();


    // for(int i=0;i<size;i++)
    // {
    //     cout<<a[i]<<endl;

    // }

    // cout<<"elements at 2nd place"<<a.at(2)<<endl;
    // cout<<"empty or not"<<a.empty()<<endl;

    // cout<<"first element"<<a.front()<<endl;
    // cout<<"second element"<<a.back()<<endl;


    //*********************vector******************************

//     vector<int>v;
//     cout<<"size of vector"<<v.capacity()<<endl;

//     v.push_back(1);
//      cout<<"size of vector"<<v.capacity()<<endl;

//      v.push_back(2);
//       cout<<"size of vector"<<v.capacity()<<endl;

//         v.push_back(3);
//       cout<<"size of vector"<<v.capacity()<<endl;
//       cout<<"size"<<v.size()<<endl;

//       cout<<"elements at 2nd index"<<v.at(2)<<endl;

//       cout<<"front"<<v.front()<<endl;
//       cout<<"back element"<<v.back()<<endl;

//       cout<<"before pop"<<endl;
//       for(int i:v)
//       {
//         cout<<i<<" ";
//       }cout<<endl;

//     v.pop_back();
// cout<<"after pop"<<endl;
// for(int i:v)
// {
//     cout<<i<<" ";
// }cout<<endl;

// v.clear();
// cout<<"size"<<" " <<v.size()<<endl;
// cout<<"capacity after clear"<<" "<<v.capacity()<<endl;

// vector<int> b(5,1);
// for(int i=0;i<b.size();i++)
// {
//     cout<<b[i]<<" ";
// }
// cout<<endl;

// vector<int> last(b);
// cout<<"last vector hai yai"<<endl;
// for(int i:last)
// {
//     cout<<i<<" ";
// }
// cout<<endl;

//***************************dequeue*******************************

// deque<int>d;
// d.push_back(1);
// d.push_front(2);
// for(int i:d)
// {
//     cout<<i<<" ";
// }cout<<endl;

// d.pop_back();
// for(int i:d)
// {
//     cout<<i<<" ";
// }cout<<endl;

// d.pop_front();
// for(int i:d)
// {
//     cout<<i<<" ";
// }cout<<endl;
// cout<<"size"<<" "<<d.size()<<endl;

// cout<<"print first index"<<d.at(1)<<endl;

// cout<<"front elements"<<d.front()<<endl;
// cout<<"back elements"<<d.back()<<endl;

// cout<<"is empty hai ya nahi"<<" "<<d.empty()<<endl;

// d.erase(d.begin(),d.begin()+1);
// cout<<"after erase"<<" "<<d.size()<<endl;


//*************************list******************************

// list<int>l;

// l.push_back(1);
// l.push_front(2);

// for(int i: l)
// {
//     cout<<i<<" ";
// }cout<<endl;

// l.erase(l.begin());
// cout<<"after erase "<<endl;
// for(int i:l)
// {
//     cout<<i<<" ";
// }cout<<endl;

// cout<<"size of the list"<<l.size()<<endl;

// list<int> n(l);
// for(int i:l)
// {
//     cout<<i<<" ";
// }cout<<endl;

// list<int> n(5,100);
// cout<<"printing list"<<endl;
// for(int i:n)
// {
//     cout<<i<<" ";
// }cout<<endl;



// ******************stack************************************


}