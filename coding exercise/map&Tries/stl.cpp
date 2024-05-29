#include<iostream>
#include<unordered_map>
using namespace std;


int main()
{
//     unordered_map<string,int>mapping;  // creation of unordered map

//     // map kai andar pair insert hotai hai
//     // so make pair
//     pair<string,int>p;
//     p.first="sachin";
//     p.second=23;

//     pair<string,int>q=make_pair("sachi",23);
//     pair<string,int>r("sach",23);

// // insertion
//     mapping.insert(p);
//     mapping.insert(q);
//     mapping.insert(r);

//     // insertion
//     mapping["goyal"]=23;


//     // search
//     // count
//     cout<<mapping.count("goyal")<<endl;// it return 0(not present) ans 1 (present)
//     // find  it basically a iterable agar iterate karkai katai end pai aa gaya ishka matlab nahi mila

//     if(mapping.find("goyal")!=mapping.end())
//     {
//         cout<<"found"<<endl;
//     }
//     else
//     {
//         cout<<"not found"<<endl;
//     }


//     cout<<mapping["prateek"]<<endl;

//     // size
//     cout<<mapping.size()<<endl;

string s="lovebabbar";
unordered_map<char,int>map;

for(int i=0;i<s.length();i++)
{
    map[s[i]]++;
}
for(auto i:map)
{
    cout<<i.first<<" "<<i.second<<endl;
}
return 0;



}