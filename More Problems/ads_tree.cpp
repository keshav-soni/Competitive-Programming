#include <iostream>
using namespace std;

class node
{
	char data;
	int time;
	node * below;
	node * next;
public:
	node(){
	below=NULL;
	next=NULL;
	time=0;
	}
	friend class graph;
};

class graph
{
	int no_vertices;
	node * head;
	int count=0;
public:
	graph(){ head=NULL;	}
	node * create_node(node *);
	void add_vertex();
	void delete_vertex(char );
	void display_vertices();
	void add_edge();
	void add_edge1(node * , char );
	void display_edges();
	void delete_edge(char , char);
	void outdegree(char );
	void indegree(char );

};

node * graph::create_node(node * t)
{
    node *q=new node;
	cout<<"enter destination : ";
	cin>>q->data;
	cout<<"enter time taken from "<<t->data<<" to "<<q->data<<" : ";
	cin>>q->time;
	return q;
}


void graph::add_vertex()
{
	int no_flights=0;
   node *t= new node;
   cout<<"enter the origin of flight :";
   cin>>t->data;
   count ++;
   if(head==NULL)
   {
	   head=t;
	   cout<<"how many flights are there from "<<t->data<<" : ";
	   cin>>no_flights;
	   node *p=new node;
	   for(int i=0;i<no_flights;i++)
	   {
		  if(i==0)
		  {
		    node *q=new node;
			q=create_node(t);
	    	 t->next=q;
			 p=t->next;
		  }
		  else
		  {
 		    p->next=create_node(t);
 		   p=p->next;
		  }
	    }
     }
	   else
	   {
		   node *temp=new node;
	       temp = head;
	       while(temp->below)
	    	   temp=temp->below;
	      temp->below=t;
	       cout<<"how many flights are there from "<<t->data<<" : ";
	      	   cin>>no_flights;
	      	  node *r=new node;
	      		   for(int i=0;i<no_flights;i++)
	      		   {
	      			  if(i==0)
	      			  {
	      			    node *s=new node;
	      				s=create_node(t);
	      		    	 t->next=s;
	      				 r=t->next;
	      			  }
	      			  else
	      			  {
	      				  r->next=create_node(t);
	      				  r=r->next;
	      			  }
      		      }
	   }
}

void graph::delete_vertex(char x)
{
	node * t=head;
	int cnt=1;
	node *q=new node;
	if(x==t->data)
	{
		head=t->below;
		delete t;
		return ;
	}
	while(x!=t->data && cnt < count)
	{
		q=t;
		t=t->below;
		cnt++;
	}
	if(x==t->data)	
	{
		delete t;
		q->below=NULL;
	}
	else
	{
	  cout<<"\nno such vertex";
	  return;
	}
//	node *q=new node;
//	q=t;
//	while(q->next != NULL  || t->next!=NULL)
//	{
//		q=t->next;
//		delete t;
//		if(q->next!=NULL)
//		   t=q->next;
//		delete q;
//	}
cout<<"\ndeleted";
}

void graph::display_vertices()
{
	node *t=new node;
	t=head;
	cout<<"\n";
	while(t->below)
	{
		cout<<t->data<<"\t";
		t=t->below;
	}
	cout<<t->data;
}


void graph::add_edge()
{
	char x,y;
	int cnt=0;
	cout<<" enter the origin :";
	cin>>x;
	cout<<"enter destination :";
	cin>>y;
	node * t=head;
	if(x==t->data)
	{
		 add_edge1(t,y);
		 goto down;
	}
	else if(x!=t->data)
	while(cnt < count)
	{
		t=t->below;
		 add_edge1(t,y);
		 cnt++;
	}
	else 
	{
		cout<<"\nfirst add vertex "<<x;
		return ;
	}
down:
	cout<<"added!!";
}


void graph::add_edge1(node * t, char y)
{
	while(t->next!=NULL)
		t=t->next;
    node *p=new node;
    p->data=y;
    t->next=p;
}

void graph::display_edges()
{
	node *t=new node;
	t=head;
	while(t->next!=NULL)
	{
		cout<<t->data;
		t=t->next;
	}
}

void graph::delete_edge(char x, char y)
{
	node *t=new node;
	node * p=new node;
	t=head;
	while(t->data!=x)
		t=t->below;
	if(t->next->next==NULL && t->next->data==y)
		delete_vertex(x);
	else
	{
		while(t->next->data!=y)
		{
			p=t;
			t=t->next;
		}
		p->next=t->next;
		delete t;

	}
}

void graph::outdegree(char x)
{
	int cnt=0;
	node *t=new node;
	t=head;
	while(t->below!=NULL)
		t=t->below;
	while(t->next)
	{
		t=t->next;
		cnt++;
	}
	cout<<cnt;
}

void graph::indegree(char x)
{
	int cnt=0;
	node * t=new node;
	node * q=new node;
	t=head;
	while(t->below)
	{
	    q=t;
		while(q->next)
		{
		if(q->data==x)
		  cnt++;
		q=q->next;
		}
		t=t->below;
	}
	cout<<cnt;
}

int main()
{
    graph g;
    g.add_vertex();
    g.add_vertex();
    g.display_vertices();
//  g.delete_vertex('b');
 // g.display_vertices();
  //  g.add_edge();
  	g.outdegree('a');
  	g.indegree('b');

	return 0;
}

