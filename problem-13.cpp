#include<bits/stdc++.h>
using namespace std;
void linear(vector<int>&v,int t){
int op=0,tr=0,i=0;
for(i=0;i<v.size();i++){
    op++;
    if(v[i]==t){
            tr++;
    break;}

}
if(tr==1){
  cout<<"position"<<i<<" operation "<<op<<endl;
}
 else{
    cout<<"not found"<<endl;
 }

}


pair<int,int> binary(vector<int>&v,int t){
    sort(v.begin(),v.end());
int op=0;
int left=0, right=v.size()-1;

while(left<=right){
        op++;
    int mid=(left+right)/2;
    if(v[mid]==t){return make_pair(mid,op);}
    else if(v[mid]<t){left=mid+1;}
    else{right=mid-1;}
}
return make_pair(-1,op);
}
int main() {
    int n;
    cin>>n;
   vector<int> v(n);
   cout<<"the array is: "<<endl;
   for(int i=0;i<n;i++){
    cin>>v[i];
   }
   int t;
   cout<<"the target value"<<endl;
   cin>>t;

   linear(v,t);

//cout<< "linear operation need "<<l<<endl;}








   pair<int,int>b=binary(v,t);
   if(b.first!=-1){
   cout<<"target find in position "<<b.first<<" and binary operation need "<<b.second<<endl;}
   else{
    cout<<"target not found"<<endl;
   }
}
