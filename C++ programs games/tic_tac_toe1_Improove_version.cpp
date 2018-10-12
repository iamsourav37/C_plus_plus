 #include<iostream>
 #include<conio.h>
 #include<stdlib.h>
 using namespace std;


 char b[][3]={ {'1','2','3'}, {'4','5','6'}, {'7','8','9'}    };
 char turn='X';
 int row,col,draw=0;
 char p1_name[30],p2_name[30];


 void board()
 {
 	system("cls");

 	cout<<"\n\n\t\tTic Tac Toe Game ";
 	cout<<"\n\t\t\tby SOURAV GANGULY ";
	cout<<"\n\n\t\t"<<p1_name<<" symbol [X] ";
 	cout<<"\n\t\t"<<p2_name<<" symbol [O] ";

 	cout<<"\n\n\t\t\t   "<<b[0][0]<<"   "<<b[0][1]<<"   "<<b[0][2];
 	cout<<"\n\n\t\t\t   "<<b[1][0]<<"   "<<b[1][1]<<"   "<<b[1][2];
 	cout<<"\n\n\t\t\t   "<<b[2][0]<<"   "<<b[2][1]<<"   "<<b[2][2];

 }

void player_turn()
{
	if(turn=='X')
	   cout<<"\n\n\n\t\t "<<p1_name<<" turn  [X] \n\t\t\t  Enter a number  :  ";
	if(turn=='O')
	   cout<<"\n\n\n\t\t "<<p2_name<<" turn  [O] \n\t\t\t  Enter a number :  ";

	int choice;
while(1)
{
	cin>>choice;
	fflush(stdin);
	switch(choice)
	{
		case 1: row=0;col=0; break;
		case 2: row=0;col=1; break;
		case 3: row=0;col=2; break;
		case 4: row=1;col=0; break;
		case 5: row=1;col=1; break;
		case 6: row=1;col=2; break;
		case 7: row=2;col=0; break;
		case 8: row=2;col=1; break;
		case 9: row=2;col=2; break;
		default: cout<<"\n\n\t\t\t Invalid Choice\n\n\tRe enter : ";
		continue;
	}
  break;
}


	if(turn=='X' && b[row][col]!='X' && b[row][col]!='O')
	  {
	  	  turn='O';
	  	  b[row][col]='X';
	  }
	else if(turn=='O' && b[row][col]!='X' && b[row][col]!='O')
	  {
	  	  turn='X';
	  	  b[row][col]='O';
	  }
	else
	{
		cout<<"\n\n\t\t\t "<<choice<<" is already filled";
		cout<<"\n\n\t\t\t Try again ";
		getch();
	}


}
int game_over()
{
  
	for(int i=0;i<3;i++) // for row
	  if(b[i][0]==b[i][1] && b[i][1]==b[i][2])
	      return 0;


	for(int i=0;i<3;i++) // for column
	     if(b[0][i]==b[1][i] && b[0][i]==b[2][i])
	        return 0;

 // for diagonal
if( (b[0][0]==b[1][1] && b[1][1]==b[2][2] )  ||  (b[0][2]==b[1][1] && b[0][2]==b[2][0]))
	   return 0;

for(int i=0;i<3;i++)
	  for(int j=0;j<3;j++)
	     if(b[i][j] != 'X' && b[i][j] != 'O')
	        return 1;
	draw=1;
	return 0;       
}

void play_again()
{
  b[0][0]='1'; b[0][1]='2';
  b[0][2]='3'; b[1][0]='4';
  b[1][1]='5'; b[1][2]='6';
  b[2][0]='7'; b[2][1]='8';
  b[2][2]='9';
  turn='X';
  row,col,draw=0;
}

int main()
{
 			cout<<"\n\n\t Player 1 name :  ";
 			cin.getline(p1_name,30);
   
 			cout<<"\n\n\t Player 2 name :  ";
 			cin.getline(p2_name,30);
 	
	char ch;
	int count=0;
		do
		{

			if(count==1)
	 		  	play_again();
	   
 			while(game_over())
 			{
 				 board();
				 player_turn();
			}

			board();

			if(turn == 'O' && draw==0)
	  		{
	  			cout<<"\n\n\n\t\t\t\a "<<p1_name<<" [X]  win the game || Congratulation ";
	  			count=1;
	  		}


 			if(turn == 'X' && draw==0)
 		    {
 				cout<<"\n\n\n\t\t\t\a "<<p2_name<<" [O]  win the game || Congratulation ";
 				count=1;
			}
	  

 			if(draw==1)
 			{
 				cout<<"\n\n\n\t\a Game Draw  ";
				count=1;
			}
	
			cout<<"\n\n\n\tPlay again (y/n) : ";
			cin>>ch;
	
		}	while(ch=='Y' || ch== 'y');




 	return 0;
 }

















