#include<stdio.h>
#define NUMBER 100

int prime_nums[NUMBER];
int index=0,check=1;

int primeGenerator(int  n)
{
    if(check==1)
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
				prime_nums[k]=i;
				k++;
				count++;
			 }


			 if(count==n)
				 break;
		 }


		 check=0;
		 return(prime_nums[index]);


    }//end of if statement
    else{
        if(index==n-1)
        {
            check=1;
            return(0);
        }

        index++;
        return(prime_nums[index]);
    }

}

int main()
{
    int num,i;

         printf("Enter any number : ");
	     fflush(stdin);
         scanf("%d",&num);


	     for(i=0;i<=num;i++)
         {
             printf("\n%d",primeGenerator(num));
         }
}


