#include<bits/stdc++.h>
#define N 4
using namespace std;
void tsp(int gd[N][N],int start){
 bool v[N]={false};
int city=start,cost=0;
cout<<"Path : "<<city<<" ";
v[start]=true;
for(int i=1;i<N;i++){
        int next=-1,mini=1e9;
    for(int j=0;j<N;j++){
            if(!v[j]&&gd[city][j]<mini&&gd[city][j]>0){
            mini=gd[city][j]; next=j;
        }
    }
v[next]=true;
cost+=mini;
city=next;
cout<<city<<" ";
}
cost+=gd[city][start];
cout<<start<<endl;
cout<<"cost "<<cost<<endl;
}

int main(){
int gd[N][N]={
    {0,10,15,20},
    {10,0,35,25},
    {15,35,0,30},
    {20,25,30,0}
    };
    tsp(gd,0);
}
