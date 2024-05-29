#include<iostream>
#include<stack>
#include<map>
#include<list>
#include<unordered_map>
#include<stack>
using namespace std;

class graph 
{
    public:
         
         unordered_map<int ,list<int>>adjlist;

         void addlist(int u,int v,bool direction)
         {
            if(direction==1)
            {
                adjlist[u].push_back(v);
            }
            else
            {
                adjlist[u].push_back(v);
                adjlist[v].push_back(u);

            }
         }

         void printlist()
         {
            for(auto i:adjlist)
            {
                cout<<i.first<<"->"<<"{";
                for(auto j:i.second)
                {
                    cout<<j<<",";
                }
                cout<<"}"<<endl;
            }
         }

         void topological(int src,map<int,bool>&vis,stack<int>&st)
         {
            vis[src]=true;

            for(auto nbr:adjlist[src])
            {
                if(!vis[nbr])
                {
                    topological(nbr,vis,st);
                }
            }

            st.push(src);
            
         }


};

int main()
{
    graph g;
    g.addlist(0,1,1);
    g.addlist(1,2,1);
    g.addlist(2,3,1);
    g.addlist(3,5,1);
    g.addlist(3,4,1);
    g.addlist(4,6,1);
    g.addlist(5,6,1);
    g.addlist(6,7,1);
   g.printlist();
   stack<int>st;
   map<int,bool>vis;
   int n=8;
   for(int node =0;node<n;node++)
   {
    if(!vis[node])
    {
        g.topological(node,vis,st);
    }
   }

   while(!st.empty())
   {
    cout<<st.top()<<" ";
    st.pop();
   }
}