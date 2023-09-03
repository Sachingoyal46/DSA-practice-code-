// stl lecture

#include<iostream>
#include<array>
#include<vector>
#include<deque>
#include<list>
#include<stack>
#include<queue>
#include<set>

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

// stack<string>s;
// s.push("sachin");
// s.push("goyal");

// cout<<"top elemnt"<<" "<<s.top()<<endl;
// cout<<"size of stack"<<s.size()<<endl;
// cout<<"empty"<<s.empty()<<endl;


// *******************queue**************************************

// queue<string>q;
// q.push("sachin");
// q.push("goyal");

// cout<<"first elements"<<q.front()<<endl;

// q.pop();

// cout<<"first elelemt "<<q.front()<<endl;

// cout<<"size "<<q.size()<<endl;


//****************priority queue************************************
// max heap
// priority_queue<int>maxi;


// // min heap
// priority_queue<int,vector<int>,greater<int>> mini;


// maxi.push(1);
// maxi.push(4);
// maxi.push(6);
// maxi.push(2);
// maxi.push(7);
// cout<<"size"<<maxi.size()<<endl;
// int n=maxi.size();
// for(int i=0;i<n;i++)
// {
//     cout<<maxi.top()<<" ";
//     maxi.pop();
// }

// mini.push(1);
// mini.push(4);
// mini.push(6);
// mini.push(2);
// mini.push(7);
// cout<<"size"<<maxi.size()<<endl;
// int nn=mini.size();
// for(int i=0;i<nn;i++)
// {
//     cout<<mini.top()<<" ";
//     mini.pop();
// }

//***********************set***********************************

set<int>s;

s.insert(5);
s.insert(6);
s.insert(7);
s.insert(5);
s.insert(5);
s.insert(2);
s.insert(3);
s.insert(1);

for(auto i:s)
{
    cout<<i<<" ";
}cout<<endl;

s.erase(s.begin());

for(auto i:s)
{
    cout<<i<<" ";
}cout<<endl;

set<int >::iterator it=s.begin() ;


s.erase(it++);
for(auto i:s)
{
    cout<<i<<" ";
}cout<<endl;

cout<<s.count(3)<<endl;

set<int>:: iterator itr=s.find(5);

for(auto it=itr;it!=s.end();it++)
{
    cout<<*it<<" ";
}cout<<endl;







}