#include<iostream>
#include<stack>
#include<map>
#include<list>
#include<unordered_map>
#include<stack>
#include<algorithm>
#include<vector>
#include<queue>
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


         void shortestpath(int src,int des)
         {
            unordered_map<int ,int>parents;
            unordered_map<int,bool>visi;
            queue<int>q;
            q.push(src);
            visi[src]=true;
            parents[src]=-1;

            while(!q.empty())
            {
                int frontnode=q.front();
                q.pop();
                for(auto nbr:adjlist[frontnode])
                {
                    if(!visi[nbr])
                    {
                        q.push(nbr);
                        visi[nbr]=true;
                        parents[nbr]=frontnode;
                    }
                }
            }
            vector<int>ans;

            while(des!=-1)
            {
                ans.push_back(des);
                des=parents[des];
            }

            reverse(ans.begin(),ans.end());
            for(auto i:ans)
            {
                cout<<i<<" ";
            }

         }


};

int main()
{
    graph g;
    // g.addlist(0,1,1);
    // g.addlist(1,2,1);
    // g.addlist(2,3,1);
    // g.addlist(3,5,1);
    // g.addlist(3,4,1);
    // g.addlist(4,6,1);
    // g.addlist(5,6,1);
    // g.addlist(6,7,1);
//    g.printlist();
//    stack<int>st;
//    map<int,bool>vis;
//    int n=8;
//    for(int node =0;node<n;node++)
//    {
//     if(!vis[node])
//     {
//         g.topological(node,vis,st);
//     }
//    }

//    while(!st.empty())
//    {
//     cout<<st.top()<<" ";
//     st.pop();
//    }


g.addlist(0,1,0);
g.addlist(1,2,0);
g.addlist(2,5,0);
g.addlist(0,3,0);
g.addlist(3,5,0);
g.addlist(0,4,0);
g.addlist(4,6,0);
g.addlist(6,5,0);
int src=0;
int des=5;
g.shortestpath(src,des);




}