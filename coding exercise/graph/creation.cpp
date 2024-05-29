#include<iostream>
#include<list>
#include<unordered_map>
#include<queue>
using namespace std;


// with out weight
class graph
{
    public:
    unordered_map<int ,list<int>>adjlist;
    void add(int u,int v, bool direction)
    {
        if(direction==1)// directed graph
        {
            adjlist[u].push_back(v);
        }
        else
        {
            adjlist[u].push_back(v);
            adjlist[v].push_back(u);
        }

    }

     bool iscycle(int src)
    {
        unordered_map<int,bool>visited;
        unordered_map<int,int>parents;

        queue<int>q;

        q.push(src);
        visited[src]=true;
        parents[src]=-1;

        while(!q.empty())
        {
            int frontnode=q.front();
            q.pop();

            for(auto nbr : adjlist[frontnode])
            {
                if(!visited[nbr])
                {
                    
                    q.push(nbr);
                    visited[nbr]=true;
                    parents[nbr]=frontnode;
                }
                if(visited[nbr]==true && frontnode !=parents[nbr])
                {
                    //cycle is presents
                    return true;
                }
            }
        }
        return false;
        // cycle not present

    }

    // void printadj()
    // {
        

    //     for(auto i : adjlist)
    //     {
    //         cout<<i.first<<"->"<<"{";

    //         for(auto j : i.second)
    //         {
    //             cout<<j<<",";
    //         }
    //         cout<<"}"<<endl;
    //     }

    // }
};

// with wright
// template<typename T>
// class graph
// {
//     public:
//     unordered_map<T,list<pair<T,int>>>adjlist;
//     void addadj(T u,T v,int wt,bool direction)
//     {
//         if(direction==1)
//         {
//             adjlist[u].push_back({v,wt});
//         }
//         else
//         {
//             adjlist[u].push_back({v,wt});
//             adjlist[v].push_back({u,wt});

//         }
//         printlist();
//         cout<<endl;
//     }

//     void printlist()
//     {
//         for(auto i: adjlist)
//         {
//             cout<< i.first<<"->";
//             for(pair<T,int>p : i.second)
//             {
//                 cout<<"{"<<p.first<<","<<p.second<<"}"<<",";
//             }
//             cout<<endl<<endl;
//         }

//     }


    // void bfstraversal(T src)
    // {
    //     unordered_map<T,bool>visit;
    //     queue<T>q;
    //     q.push(src);
    //     visit[src]=true;

    //     while(!q.empty())
    //     {
    //         T node=q.front();
    //         cout<< node <<" ";
    //         q.pop();
    //         for(auto i:adjlist[node])
    //         {   
    //             T ele=i.first;
    //             if(!visit[ele])
    //             {
    //                 q.push(ele);
    //                 visit[ele]=true;
    //             }
    //         }
    //     }
    // }

    // void dfs(T src, unordered_map<T,bool>& visited)
    // {
    //     visited[src]=true;
    //     cout<<src<<" ";

    //     for(auto data : adjlist[src])
    //     {
    //         T ele=data.first;

    //         if(!visited[ele])
    //         {
    //             dfs(ele,visited);
    //         }
    //     }
    // }

    // bool iscycle(int src)
    // {
    //     unordered_map<int,bool>visited;
    //     unordered_map<int,int>parents;

    //     queue<int>q;

    //     q.push(src);
    //     visited[src]=true;
    //     parents[src]=-1;

    //     while(!q.empty())
    //     {
    //         int frontnode=q.front();
    //         q.pop();

    //         for(auto nbr : adjlist[frontnode])
    //         {
    //             if(!visited[nbr])
    //             {
                    
    //                 q.push(nbr);
    //                 visited[nbr]=true;
    //                 parents[nbr]=frontnode;
    //             }
    //             if(visited[nbr]==true && frontnode !=parents[nbr])
    //             {
    //                 //cycle is presents
    //                 return true;
    //             }
    //         }
    //     }
    //     return false;
    //     // cycle not present

    // }
// };




int main()
{
    // graph g;
    // g.add(0,1,1);
    // g.add(1,2,1);
    // g.add(1,3,1);
    // g.add(2,3,1);
    // g.add(3,4,1);
    // g.add(4,5,1);
    // g.add(5,3,1);

    // graph<int> g;
    // g.addadj(0,1,10,1);
    // g.addadj(1,2,20,1);
    // g.addadj(1,3,78,1);
    // g.addadj(3,5,90,1);
    // // g.bfstraversal(0);

    // unordered_map<int,bool>visited;
    // g.dfs(0,visited);

    graph  g;
    g.add(0,1,0);
    g.add(1,2,0);
    g.add(2,4,0);
    g.add(1,3,0);
    g.add(3,4,0);
    g.add(4,5,0);


    bool check=g.iscycle(0);
    if(check)
    {
        cout<<"cycle is present"<<endl;
    }
    else
    {
        cout<<"cycle is not present"<<endl;
    }

    return 0;

}
