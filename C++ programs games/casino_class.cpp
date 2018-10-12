 #include<iostream>
 #include<stdlib.h>
 #include<conio.h>
 #include<string.h>
 #include<ctime>
 using namespace std;
 
 class rule{
 	public:
void rules()
 {
 	system("cls");
 	cout<<"\n\t\tWELCOME TO CASINO ";
 	cout<<"\n\n\t\t RULES :  ";
 	cout<<"\n\t\t\t 1. Choose Number Between 1 To 10";
 	cout<<"\n\t\t\t 2. Winning Amount Will Be 10 Times Of Bid Amount";
 	cout<<"\n\t\t\t 3. Loose Amount Will Be Biding Amount";
 }

};
 class casino{
 	protected:
 		int bid;
 		int dice,num;
	public:
 		void turn(int m)
 		{
		   do{
		   		
			cout<<"\n\t\tEnter Bid Amount : ";
 			cin>>bid; 					
		    
		  }while(bid>m);
		    
 			do{
			cout<<"\n\t\tEnter any Number <1 to 10> : ";
 			cin>>num;
 			}while(num<=0 || num >10);
 			
 			srand(time(0));
 			dice= ( rand() %10 ) +1;
 			
 			cout<<"\n\t\t\tWinning Number is  :  "<<dice<<"\n\n"; 	
		 }
 	
 	
 };
 class human:protected casino,private rule{
 	int money=193727; // default money
 	char name[30];
 	public:
 		human(char n[])
 		{
 			strcpy(name,n);
		}
		
		void leave()
		{
			if(money==0)
			{
				cout<<"\n\n\t\tThanks for comming ";
				cout<<"\n\t\tYou have no money ";
				getch();
				exit(1);
			}
			
			
			char ch;
			cout<<"\n\n\t Exit  (y/n)  :  ";
			cin>>ch;
			
			if(ch=='Y' || ch=='y')
			{
				cout<<"\n\n\t\tThanks for comming ";
				cout<<"\n\t\tYour final money :  "<<money;
				exit(1);
			}
		}
		
		void player()
		{
			cout<<"\n\n\n\t\t PLAYER NAME : "<<name;
			cout<<"\n\t\t YOUR TOTAL MONEY : 193727 ";
			cout<<"\n\n\t\t NOW YOUR MONEY IS : "<<money<<"\n\n";
			
		}
		
		void winOrLoss()
		{
			rules();
			
			player();
			
			turn(money);
			
			if(dice==num)
 			{
	  			money += bid*10;
 				cout<<"\n\t\t\tCongratulation you won";
 				cout<<"\n\t\t\tYour Present Money is : "<<money;
			}
			else
			{
				money= money - bid;
			
		cout<<"\n\t\t\tSORRY you loss  <"<<bid<<">  Better luck next time ";
 				cout<<"\n\t\t\tYour Present Money is : "<<money;	
			}	
			
			leave();
		}
 };
 
int main()
{
	
	char name[30];
	
	cout<<"Enter Name : ";
	cin.getline(name,30);
		
	human h1(name);
	
	while(1)
	{
		
		h1.winOrLoss();
		
		
	}
	
	getch();
	
	
	
	
	
	
	
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
