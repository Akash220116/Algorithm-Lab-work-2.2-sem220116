#include<bits/stdc++.h>
using namespace std;
void dijkst(int sre,int des,int g[5][5],int n)
{
    vector<int>dist(n,9999);
    dist[sre]=0;
    priority_queue<pair<int,int>,vector<pair <int,int>>,greater<pair<int,int>>>pq;
    pq.push({0,sre});
    while(!pq.empty())
        {
            int u=pq.top().second;
            pq.pop();
            for(int v=0;v<n;v++)
            {
             if(g[u][v]!=0)
             {
                int weight=g[u][v];
                if(dist[u]+weight<dist[v])
                  {
                     dist[v]=dist[u]+weight;
                     pq.push({dist[v],v});
                  }
             }
            }
        }
        cout<<"Sortest distance from "<<sre<<"to "<<des<<" : "<<dist[des]<<endl;

}
int main()
{
    int n=5;
    int g[5][5]= {
        {0, 5, 3, 0, 0}, // A -> B (5), A -> C (3)
        {5, 0, 1, 3, 0}, // B -> C (1), B -> D (3)
        {3, 1, 0, 2, 6}, // C -> D (2), C -> E (6)
        {0, 3, 2, 0, 4}, // D -> E (4)
        {0, 0, 6, 4, 0}  // E -> (6 to C, 4 to D)
    };
int sre=0;
int des=4;
dijkst(sre,des,g,n);
return 0;
}
