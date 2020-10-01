#include <iostream>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

struct node
{	
	int data;
	node *left;
	node * right;
};

node * create(int data){
	node *temp = new node;
	temp->data = data;
	temp->left = nullptr;
	temp->right = nullptr;
	return temp;
}


void preorder(node *root){
	if(root == nullptr){
		return;
	}

	cout << root->data << " ";
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
