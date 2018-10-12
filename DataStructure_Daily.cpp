 #include<iostream>
 #include<conio.h>
 #include<ctime>
 #include<stdlib.h>
 using namespace std;

class DoDataStructureDaily{
    int select;
public:
    void topic()
    {
        cout<<"\n\t\t*****Data Structure*****";
        cout<<"\n 1. Linked List"
            <<"\n 2. Stack using Array"
            <<"\n 3. Stack using Linked List"
            <<"\n 4. Queue using Array"
            <<"\n 5. Queue using Linked List";

    }
    void  generateTopic();

};
void DoDataStructureDaily:: generateTopic()
    {
        int i;
        cout<<"\n\n\tGenerate today program or topic (Type 1) : ";
        cin>>i;

        if(i)
        {
            srand(time(0));
 			select = ( rand() %5 ) +1;

 			switch(select)
 			{
            case 1:
                cout<<"\n\t 1. Linked List";
                break;
            case 2:
                cout<<"\n\t 2. Stack using Array";
                break;
            case 3:
                cout<<"\n\t 3. Stack using Linked List";
                break;
            case 4:
                cout<<"\n\t 4. Queue using Array";
                break;
            case 5:
                cout<<"\n\t 5. Queue using Linked List";
                break;
 			}
        }
        else
        {
            cout<<"\n\tOkay";
            getch();
            exit(0);
        }

        cout<<"\n\t Good Luck";
        getch();
        exit(0);
    }


int main()
{
        DoDataStructureDaily obj;
        obj.topic();
        obj.generateTopic();
}



