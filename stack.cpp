 #include<stdio.h>
 #include<stdlib.h>
 #include<conio.h>
 
 #define MAX 10
 
 int stack[MAX];
 int top=-1;
 
 int menu();
 void push(int data);
 void pop();
 void display();
 int isFull();
 int isEmpty();
 
 
 
 int main()
 {
 	int data;
 	while(1)
 	{
 		system("cls");
 		switch(menu())
		 {
				case 1:
					printf("\n\n\tEnter data");
				//	fflush(stdiin);
					scanf("%d",&data);
					push(data);
					break;
				case 2:
					pop();
					break;
				case 3:
					display();
					break;
				case 4:
					exit(1);
				default:
					printf("\n\n\t^^^^Wrong Choice^^^^");
					getch();
					
		 }	
	}
 }
 
 int menu()
 {
 	int ch;
 	printf("\n\n\t ****Stack Using Array****");
 	printf("\n\t1. Push");
 	printf("\n\t2. Pop");
 	printf("\n\t3. Display");
 	printf("\n\t4. Exit");
 	
	 printf("\n\n\tEnter Your Choice : ");
	// fflush(stdiin);
 	 scanf("%d",&ch);
 	
	 return(ch);
 }
 
 int isFull()
 {
 	if(top==MAX-1)
 		return 1;
 	else
 	    return 0;
  } 
  
  int isEmpty()
  {
  	if(top==-1)
  		return 1;
  	else
  		return 0;
  }
  
  void push(int data)
  {
  	if(isFull())
  	{
  		printf("\n\n\t#### Stack Overflow ####");
  		getch();
  		return;
	}
	
		top++;
		stack[top] = data;
		printf("\n\n\t%d is pushed at %d position",data,top);
		getch();
  
  }
 
 	void pop()
	{
		if(isEmpty())
		{
			printf("\n\n\t#### Stack Underflow ####");
  			getch();
  			return;
		}
		
		printf("\n\n\tPop element is %d",stack[top]);
		top--;
		getch();
				
	 } 
	
	
	void display() 
	{
		if(isEmpty())
		{
			printf("\n\n\t#### Stack Underflow ####");
  			getch();
  			return;
		}
		
		printf("\n\n\n\t*** Stack Elements are \n\n");
		
		for(int i=top;i>=0;i--)
		{
			printf("Stack[%d] = %d\n",i,stack[i]);
		}
		getch();
		
		
	}
 
 
 
