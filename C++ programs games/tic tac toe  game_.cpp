// Tic Tac Toe Game by Sourav
 
 #include<iostream>
 #include<stdlib.h>
 #include<stdio.h>
 #include<conio.h>
 using namespace std;
 
 
 // global variable
 char a[][3]={ {'1','2','3'},{'4','5','6'}, {'7','8','9'} };
 char turn='X';
 int row,col,draw=0;
 char p1_name[30];
 char p2_name[30];



 
 
 void board()
 {
 	system("cls");
 	
 	
 	cout<<"\n\t\t  TIC TAC TOE GAME ";
 	cout<<"\n\n\t\t Player 1 [X] \n\t\t Player 2 [O]  \n ";
 	cout<<"\n\n\t\t   "<<a[0][0]<<"     "<<a[0][1]<<"     "<<a[0][2];
 	cout<<"\n\n\t\t   "<<a[1][0]<<"     "<<a[1][1]<<"     "<<a[1][2];
 	cout<<"\n\n\t\t   "<<a[2][0]<<"     "<<a[2][1]<<"     "<<a[2][2];
 	
 	
 	
 }
 void player_turn()
 {
 	int choice;
 	if(turn=='X')
 	  cout<<"\n\n\t\t "<<p1_name<<" [X] turn : ";
 	else
 	  cout<<"\n\n\t\t "<<p2_name<<" [O] turn : ";
	
	while(1)
	{
		cin>>choice;
		switch(choice)
		{
			case 1: row=0; col=0; break;
			case 2: row=0; col=1; break;
			case 3: row=0; col=2; break;
			case 4: row=1; col=0; break;
			case 5: row=1; col=1; break;
			case 6: row=1; col=2; break;
			case 7: row=2; col=0; break;
			case 8: row=2; col=1; break;
			case 9: row=2; col=2; break;
			default: 
			  cout<<"\n\n\t Invalid Choice | Re enter : ";
			  continue;
	
		}
		break;
	}
	
	if(turn=='X' && a[row][col]!='X' && a[row][col]!='O')
	{
		turn='O';
		a[row][col]='X';
	}
	else if(turn=='O' && a[row][col]!='X' && a[row][col]!='O')
	{
		turn='X';
		a[row][col]='O';
	}
	else
	{
		cout<<"\n\n\t "<<choice<<" is filled | Try another";
		getch();
	}
}
 
int game_over()
{
	for(int i=0;i<3;i++)//for rows
	  if(a[i][0]==a[i][1]&&a[i][0]==a[i][2])
	      return 0;
	      
	for(int i=0;i<3;i++)// for column
	  if(a[0][i]==a[1][i]&&a[0][i]==a[2][i])
	      return 0;

//for diagonal	
if(a[0][0]==a[1][1] && a[0][0]==a[2][2] ||  a[0][2]==a[1][1] && a[0][2]==a[2][0])
	   return 0;  

	for(int i=0;i<3;i++)
	  for(int j=0;j<3;j++)
	     if(  (a[i][j] != 'X' && a[i][j] != 'O')  )
	        return 1;
	        
 draw=1;	   
 return 0;
} 
 
 
 
 
 
 
 
 main()
 {
 		
 	cout<<"\n\tEnter player 1 name ";
 	gets(p1_name);
 	
	fflush(stdin);
	
	cout<<"\n\tEnter player 2 name ";
 	gets(p2_name); 
	  	
 	while(game_over())
 	{
 			board();
			player_turn();	
	}
	board();
	if(turn=='O' && draw==0)
	  {
	  	cout<<"\n\n\n\t\t\a "<<p1_name<<" [X] win the game -- Congratulation--\n";
	  	getch();
		  exit(1);
	  }
	if(turn=='X' & draw==0)
	{
		cout<<"\n\n\n\t\t\a "<<p2_name<<"  [O] win the game -- Congratulation--\n";
		getch();
		exit(1);
	}
	else
	{
		cout<<"\n\n\n\t\t\a GAME DRAW \n\n";
		getch();
		exit(1);	
	}
	 
 
 }
 
