#include <iostream>
using namespace std;

class node
{
	node *right;
	node *left;
	int data;
    friend class tree;
public:
    node(){
    	right=NULL;
    	left=NULL;
       }
};

class tree
{
    node *root;
  public:
    tree(){root=NULL;}
	node *insert();
	void create_tree(node *t);
	void display();
	void preorder(node *);
	void inorder(node *);
	void postorder(node *);
	void operator =(tree &);
	node * assign(node * , node *);
	void delete_tree(node *);
	void reqdelete();
	void displayleaf();
	void preorder_leaf(node *);
	void preorder_internal(node *);
};

node* tree::insert()
{
	node *t;
	t=new node;
	t->left=t->right=NULL;
	cout<<"enter data :";
	cin>>t->data;
	return t;
}

void tree::create_tree(node *t)
{
	node *p,*q;
	char choice1,choice2;
	if(root==NULL)
	   root=t;
	cout<<"do u want left child of "<<t->data<<" (y/n)";
	cin>>choice1;
	 if(choice1=='y')
	 {
	     p=insert();
	     t->left=p;
	     create_tree(p);
     }
    else if(choice1=='n')
      	t->left=NULL;
    else
      cout<<"wrong input !!";


	cout<<"do u want right child of "<<t->data<<" (y/n)";
	cin>>choice2;
	if(choice2=='y')
	{
		q=insert();
		t->right=q;
		create_tree(q);
	}
	else if(choice2=='n')
	   t->right=NULL;
	else
	 cout<<"Wrong input!!";

}

void tree::display()
{
	preorder(root);
	cout<<"\n";
	//inorder(root);
	cout<<"\n";
	//postorder(root);
	cout<<"\n";
}

void tree::preorder(node *t)
{
	if(t)
	{
		cout<<t->data;
		preorder(t->left);
		preorder(t->right);
	}
}

void tree::inorder(node *t)
{
	if(t)
	{
		inorder(t->left);
		cout<<t->data;
		inorder(t->right);
	}
}
void tree::postorder(node *t)
{
	if(t)
	{
		postorder(t->left);
		postorder(t->right);
		cout<<t->data;
	}
}

void tree::operator = (tree &temp)
{
   root->data=temp.root->data;
   assign(temp.root,root);
}

node * tree::assign(node *from,node *to)
{
	if(from)
	{   to=new node;
		to->left=assign(from->left,to->left);
		to->right=assign(from->right,to->right);
		to->data=from->data;
		return to;
	}
	else
		return NULL;
}
void tree::reqdelete()
{
	delete_tree(root);
}
void tree::delete_tree(node *t)
{
	if(t)
		{
			delete_tree(t->left);
			t->left=NULL;
			delete_tree(t->right);
			t->right=NULL;
			delete t;
			t=NULL;
		}
}

void tree::displayleaf()
{
	preorder_leaf(root);
	preorder_internal(root);
}

void tree::preorder_leaf(node *t)
{
	if(t->left==NULL && t->right==NULL)
	{
		cout<<t->data;
		preorder_leaf(t->left);
		preorder_leaf(t->right);
	}
}

void tree::preorder_internal(node *t)
{
	if(t->left || t->right)
	{
		cout<<t->data;
		preorder_internal(t->left);
		preorder_internal(t->right);
	}
}

int main()
{
	tree t,t2;
	node *n;
	n=t.insert(); 
	t.create_tree(n);
	t.display();
//	t.reqdelete();
//	t.display();
	//t.displayleaf();
    t2=t;
	cout<<"fgb";
    t2.display();
	//cout<<"1fgb";
	return 0;
}

