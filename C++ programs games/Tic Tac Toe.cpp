#include<iostream>
#include<conio.h>
#include<cstdio>
using namespace std;

char board[3][3]={ {'1','2','3'}, {'4','5','6'}, {'7','8','9'}     };

char turn='X';
int row,col,draw=0;

void board_display()
{
	system("cls");
	cout<<"\n\t\t\t Tic Tac Toe Game By Sourav\n ";
	cout<<"\t\t\t __________________________\n ";
	cout<<"\n\t\t Player 1 [X]";
	cout<<"\n\t\t Player 2 [Q]\n";
	
	cout<<"\n\t\t\t      |     |       ";
	cout<<"\n\t\t\t   "<<board[0][0]<<"  |  "<<board[0][1]<<"  |  "<<board[0][2]<<"    ";
	cout<<"\n\t\t\t _____|_____|_____ ";
	cout<<"\n\t\t\t      |     |       ";
	cout<<"\n\t\t\t   "<<board[1][0]<<"  |  "<<board[1][1]<<"  |  "<<board[1][2]<<"    ";
	cout<<"\n\t\t\t _____|_____|_____ ";
	cout<<"\n\t\t\t      |     |       ";
	cout<<"\n\t\t\t   "<<board[2][0]<<"  |  "<<board[2][1]<<"  |  "<<board[2][2]<<"    ";
	cout<<"\n\t\t\t      |     |       ";
	
}



void player_turn()
{
		
	int choice;
	
	if(turn=='X')
	 cout<<"\n\n\t\t Player 1 [X] turn : ";
	 
	if(turn=='Q')
	 cout<<"\n\n\t\t Player 2 [Q] turn : ";
	 
	 while(1){
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
		     cout<<"\n\t Invalid Choice | Please try again !!! \n";
		     cout<<"\n\t Re enter : ";
		     continue;
		}
		break;
	 }
		
	
	if(turn=='X' && board[row][col]!='X' && board[row][col]!='Q')
	{
	  board[row][col]='X';
	  turn='Q';
	}
	else if(turn == 'Q' && board[row][col]!='X' && board[row][col]!='Q')
	{
	  board[row][col]='Q';  
	  turn='X';
	}
	else
	{
		cout<<"\n\n\t"<<choice<<" is alreday filled | Try another ";
		getch();
	}
	
	
}
int game_over()
{
	// check win
	for(int i=0;i<3;i++) // for rows
	   if(board[i][0]==board[i][1] && board[i][1]==board[i][2])
	       return 0;
	       
	for(int i=0;i<3;i++) // for columns
	if(board[0][i]==board[1][i]  && board[0][i]==board[2][i])
	   return 0;
	  
	  
	 // for diagonal 
	if( (board[0][0]==board[1][1] && board[1][1]==board[2][2] )  ||  (board[0][2]==board[1][1] && board[0][2]==board[2][0]))
	   return 0;
	
	
	// if there is any box not filled
	for(int i=0;i<3;i++)
	  for(int j=0;j<3;j++)
	     if(board[i][j] != 'X' && board[i][j] != 'Q' )
	        return 1;
	
	draw=1;
	return 0;
}

main()
{
	while(game_over())
	{
		board_display();
		player_turn();
	}
	board_display();
	if(turn=='Q' && draw == 0)
	  cout<<"\n\n\t\a | Congratulation Player 1 [X] Win the game |\n";
	else if(turn=='X' && draw == 0)
	  cout<<"\n\n\t\a | Congratulation Player 2 [Q] Win the game |\n";
	else
	  cout<<"\n\n\t\a | Game is Draw  | \n";
	
  getch();
}
