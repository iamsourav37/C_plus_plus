 #include<stdio.h>
 #include<conio.h>
 #include<stdlib.h>
 
 struct node {
 	int info;
 	struct node *next;
 };
 struct node *START = NULL;
 
 struct node* createNode()
 {
 	 struct node *temp =  (struct node*) malloc(sizeof(struct node));
 	 
 	 return(temp);
 }
 
 	
  void insertNodeAtEnd(int data) 
  {
  	struct node *temp = createNode();
  	struct node *t;
  	
  	temp->info = data;
  	temp->next = NULL;
  	
  	if(START==NULL)
  		START=temp;
  	else
  	{
  		t=START;		
  		while(t->next!=NULL)
  			t=t->next;
  			
  		t->next=temp;
	}
  	
  }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
