#include<bits/stdc++.h>
using namespace std;
bool cmp(const pair<int,int>&a,const pair<int,int>&b){
    double d1=(double)a.second/a.first;
    double d2=(double)b.second/b.first;
    return d1>d2;

}
int main(){
int weight,n;
cout<<"size of vector"<<endl;
cin>>n;
vector<pair<int,int>>knapsack(n);
for(int i=0;i<n;i++){
        cout<<"weight : ";
    cin>>knapsack[i].first;
cout<<"value : ";
    cin>>knapsack[i].second;
}
cout<<"knapsack capacity: ";
cin>>weight;
sort(knapsack.begin(),knapsack.end(),cmp);

double sum=0;

for(int i=0;i<n;i++){
    if(weight>=knapsack[i].first){sum+=knapsack[i].second;
    weight-=knapsack[i].first;
    }
    else{
        double dv=(double)knapsack[i].second/knapsack[i].first;
        sum=sum+(double)weight*dv;break;
    }
}
cout<<sum<<endl;
}
