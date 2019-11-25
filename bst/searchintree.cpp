#include<bits/stdc++.h>
using namespace std;
struct node{
  int data;
  node*left;
  node*right;
};
node* getnewnode(int data)
{
  node* newnode=new node();
  newnode->data=data;
  newnode->left=newnode->right=NULL;
  return newnode;
}
node*insert(node*root,int data)
{
  if(root==NULL)
  root=getnewnode(data);
  else if(root->data>=data)
  root->left=insert(root->left,data);
  else
  root->right=insert(root->right,data);
return root;
}
void inorder(node*root)
{
  if(root==NULL)
  return;
  inorder(root->left);
  cout<<root->data<<" ";
  inorder(root->right);
}

bool recsearch(node*root,int key)
{
  if(root==NULL)
  return false;
  else if(root->data==key)
  return true;
  else if(root->data>key)
  return recsearch(root->left,key);
  else
  return recsearch(root->right,key);
}
bool search(node*root,int key) //iterative
{
  node*curr=root;
  if(curr==NULL)
  return false;
  while(curr!=NULL)
  {
    if(curr->data>key)
    curr=curr->left;
    else if(curr->data<key)
    curr=curr->right;
    else
    return true;
  }
   return false;
}
int main()
{node*root=NULL;
  int arr[]={15,20,17,12,25,10};
  for(int i=0;i<6;i++)
  {
    root=insert(root,arr[i]);
  }
  inorder(root);
cout<<endl;
int number;
cin>>number;
if(search(root,number)==true)cout<<"found";
else cout<<"not found";}
