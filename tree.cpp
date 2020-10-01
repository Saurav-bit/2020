#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

struct node
{	
	int value;
	node *left;
	node * right;
};

node * create(int value){
	node *temp = new node;
	temp->value = value;
	temp->left = nullptr;
	temp->right = nullptr;
	return temp;
}


void preorder(node *root){
	if(root == nullptr){
		return;
	}

	cout << root->value << " ";
	preorder(root->left);
	preorder(root->right);
}

int main(int argc, char const *argv[])q
{
	fastio;
	node *root = create(0);


	/* code */
	return 0;
}
