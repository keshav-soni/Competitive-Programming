#include <iostream>
using namespace std;
class tree;
class node;
class stack
{
    long int  arr[50];
	int top;
	public:
	stack()
	{
		top=-1;
	}
	long int pop();
	void push(long int );
	int isEmpty(); 	
};

void stack::push(long int temp)
{
	if(top==50)
	 return;
	else
	{
		top++;
		arr[top]=temp;
	 } 
}

;
long int stack::pop()
{
	long temp;
	if(top=-1)
	  return NULL;
	else
	{
	   temp=arr[top];
	   top--;
    }
	return temp;  
}

int stack::isEmpty()
{
	if(top==-1)
	  return 1;
	 else
	 return 0; 
 } 

class node
{
	node *right;
	node *left;
	int data;
    friend class tree;	
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
	void recc_preorder(node *);
	void recc_inorder(node *);
	void recc_postorder(node *);
    friend class stack;	
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
	inorder(root);
	cout<<"\n";
	postorder(root);
	cout<<"\n";
	recc_preorder(root);
	cout<<"\n";
//	recc_inorder(root);
	cout<<"\n";
//	recc_postorder(root);
	cout<<"\n";
}

void tree::preorder(node *root)
{
	if(root)
	{
		cout<<root->data;
		preorder(root->left);
		preorder(root->right);
	}
}

void tree::inorder(node *root)
{
	if(root)
	{
		inorder(root->left);
		cout<<root->data;
		inorder(root->right);
	}
}
void tree::postorder(node *root)
{
	if(root)
	{
		postorder(root->left);
		postorder(root->right);
		cout<<root->data;
	}
}

void tree::recc_preorder(node *t)
{
   stack s;
   while(t!=NULL || !s.isEmpty())
   {
   if(t!=NULL)
   {
   	 cout<<t->data;
   	 s.push(*t);
   	 t=t->left;
	}	
	else
	{
		t=s.pop();
		t=t->right;
	}
   }
}

int main() 
{
	tree t;
	node *n;
	n=t.insert();
	t.create_tree(n);
	t.display();
     	
 	
	return 0;
}
