#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int data;
    node *left,*right;
    node(int value){
    data=value;
    left=right=NULL;
    }
};
void preorder(node *root){
if(root==NULL)return;
cout<<root->data<<" ";
preorder(root->left);
preorder(root->right);
}

void inorder(node *root){
if(root==NULL)return;
inorder(root->left);
cout<<root->data<<" ";
inorder(root->right);
}

void postorder(node *root){
if(root==NULL)return;

postorder(root->left);
postorder(root->right);
cout<<root->data<<" ";
}

node *binary_tree(){
 int x;
 cin>>x;
 if(x==-1){
    return NULL;
 }
 node *temp=new node(x);
 cout<<"Enter the left child value of "<<x<<" : ";
 temp-> left=binary_tree();
 cout<<"Enter the right child value of "<<x<<" : ";
 temp->right=binary_tree();
 return temp;
}
int main(){
    cout<<"Enter the root : ";
node *root;
int choice;
root =binary_tree();
for(int i=0;i<3;i++){
cout<<"enter the number for traversal :"<<endl;
cout<<"1. preorder "<<endl<<"2.inorder "<<endl<<"3.postorder "<<endl;
cin>>choice;
if(choice==1)preorder(root);
if(choice==2)inorder(root);
if(choice==3)postorder(root);
cout<<endl;}

return 0;
}
