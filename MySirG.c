#includ<stdio.h>
#include<conio.h>


int prime_nums[100];

int primeGenerator(int  n)
    {
         int flag;
		 int count=0;

		 for(int i=2,k=0;;i++)
		 {
			 flag=1;
			 for(int j=2;j<=i/2;j++)
			 {
				 if(i%j==0)
				 {
					 flag=0;
					 break;
				 }

			 }
			 if(flag)
			 {
				System.out.println(i);
				prime_nums[k]=i;
				k++;
				count++;
			 }


			 if(count==n)
				 break;
		 }


		 return(prime_nums[]);

	 }

    void main(char args[])
	 {
		 primeGenerator(5);
	 }
 }
