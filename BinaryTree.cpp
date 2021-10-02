#include<iostream>
#include<stdlib.h>
using namespace std;
struct node {
	int data;
	struct node *left,*right;
};
node* createNode(){

	node *newnode=new node();
	int x;
	newnode=(struct node*)malloc(sizeof(struct node));
	cout<<"Enter the data to be inserted in list."<<endl;
	cin>>x;
	if(x==-1){
		return NULL;
	}
	newnode->data=x;
	cout<<"Enter the data to be inserted in left child of(for null enter -1)"<<x<<"\n";
	newnode->left=createNode();
	cout<<"Entre the data to be inserted in right child of(for NULL enter -1)"<<x<<"\n";
	newnode->right=createNode();
		return newnode;
}
void print(node *root){
	if(root==NULL){
		return;
	}
	else{
		cout<<root->data<<" ";
		print(root->left);
		print(root->right);
	}
}
int main(){
		node *root;
		root=createNode();
		print(root);
}

