#include <iostream>
using namespace std;

class node 
{
	int data;
    int lbit,rbit;
	int child;
	node * right , * left;
public:
	node()
	{
		right=left=NULL;
		rbit=lbit=1;
	}
	node(int x)
	{
		data=x;
		right=left=NULL;
		rbit=lbit=1;
	}
friend class tbt;
};

class tbt
{
	node * root;
public:
	void BST();
	void create();		
    void  create_recc(node * , int );
	void preorder();
	node * pre_recc(node * );
	void inorder();
	node * in_recc(node * ); 	
};

void tbt::BST()
{
	int x;
	cin>>x;
	root=new node(x);
	root->right=root->left=root;
}

void tbt::create()
{
	create_recc(root,0);
}
	
void  tbt::create_recc(node *father, int child)
{
	int x;
	cin>>x;
	if(x==-1)
		return ;
	else
	{
		node * t=new node (x);
		if(child==0)
		{
			t->child=0;
			t->right=father;
			t->left=father->left;
			father->left=t;
			father->lbit=0;
		}
		else
		{
			t->child=1;
			t->left=father;
			t->right=father->right;
			father->right=t;
			father->rbit=0;
		}
		
		cout<<"enter left of "<<t->data;
		create_recc(t,0);
		cout<<"enter right of "<<t->data;
		create_recc(t,1);
	}
}

void tbt::preorder()
{
	node * t=root->left;
	while(t!=root)
	{
		cout<<t->data;
		t=pre_recc(t);
	}
}

node * tbt::pre_recc(node * t)
{
	if(t->lbit==0)
		return t->left;
	while(t->rbit==1 && t!=root)
	{
		t=t->right;
		return t->right;
	}
}

void tbt::inorder()
{
	node *t=root->left;
	while(t->lbit==0)
	{
		t=t->left;
		while(t!=NULL)
		{
			cout<<t->data;
			t=in_recc(t);
		}
	 } 
}

node * tbt::in_recc(node * t)
{
	if(t->rbit==1)
		return t->right;
	t=t->right;
	while(t->lbit==0)
		t=t->left;
	return t;	
}

int main()
{
	tbt n;
	n.BST();
	n.create();
	n.inorder();
   		
	return 0;
}
