#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int menu();
struct node* create_node();
struct node* insert_node_beg(struct node*,int);
struct node* insert_node_last(struct node*,int);
struct node* delete_node_beg(struct node*);
struct node* delete_node_last(struct node*);
void count_nodes(struct node*);
void searching(struct node*);
void view_List(struct node*);
struct node
{
    int info;
    struct node *link;
};
int menu()
{
    int choice;
    printf("\tLINKED-LIST\n\n");
    printf("1. Insert Node at Begining\n");
    printf("2. Insert Node at Last\n");
    printf("3. Delete Node at Begining\n");
    printf("4. Delete Node at Last\n");
    printf("5. Count Nodes\n");
    printf("6. Searching\n");
    printf("7. View List\n");
    printf("8. EXIT\n");
    printf("\nEnter your choice  ");
    fflush(stdin);
    scanf("%d",&choice);
    return(choice);
}
int main()
{
    int info;
    struct node *START=NULL;
    while(1)
    {
        system("cls");
        switch(menu())
        {
        case 1:
            printf("\nEnter info ");
            fflush(stdin);
            scanf("%d",&info);
            START=insert_node_beg(START,info);
            break;
        case 2:
            printf("\nEnter info ");
            fflush(stdin);
            scanf("%d",&info);
            START=insert_node_last(START,info);
            break;
        case 3:
            START=delete_node_beg(START);
            break;
        case 4:
            START=delete_node_last(START);
            break;
        case 5:
            count_nodes(START);
            break;
        case 6:
            searching(START);
            break;
        case 7:
            view_List(START);
            break;
        case 8:
            exit(1);
        default:
            printf("\n\tInvalid Entry | Try again");
        }
        getch();
    }
}
struct node* create_node()
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    return(temp);
}
struct node* insert_node_beg(struct node *start,int info)
{
    struct node *ptr;
    ptr=create_node();
    ptr->info=info;
    ptr->link=start;
    start=ptr;
    return(start);
}
struct node* insert_node_last(struct node* start,int info)
{
    struct node *ptr,*temp;
    ptr=create_node();
    ptr->info=info;
    ptr->link=NULL;
    if(start==NULL)
    {
        start=ptr;
        return(start);
    }
    temp=start;
    while(temp->link!=NULL)
        temp=temp->link;
    temp->link=ptr;
    return(start);
}
struct node* delete_node_beg(struct node *start)
{
    struct node *temp;
    if(start==NULL)
    {
        printf("\n\n\tList is already empty");
        return(NULL);
    }
    temp=start;
    start=start->link;
    printf("\n\n\tDelete item is :  %d\n\n",temp->info);
    free(temp);
    printf("\tDelete Successfull");
    return(start);
}
struct node* delete_node_last(struct node *start)
{
    struct node *last,*second_last;
    if(start==NULL)
    {
        printf("\n\n\tList Is Already Empty");
        return(NULL);
    }
    last=second_last=start;
    while(last->link!=NULL)
    {
        second_last=last;
        last=last->link;
    }
    if(last==start)
    {
        printf("\n\tDelete item is: %d\n",last->info);
        start=NULL;
    }
    else
    {
        second_last->link=NULL;
        printf("\n\tDelete item is: %d\n",last->info);
    }
    free(last);
    printf("\tDelete Successfull");
    return(start);
}
void count_nodes(struct node *start)
{
    int count=0;
    if(start==NULL)
    {
        printf("\nList is empty");
        return;
    }
    while(start!=NULL)
    {
        count++;
        start=start->link;
    }
    printf("\n\nTotal Number of Nodes : %d\n",count);
}
void searching(struct node *start)
{
    int pos=0;
    int data;
    if(start==NULL)
    {
        printf("\nList is empty");
        return;
    }
    printf("\nEnter data for searching  ");
    scanf("%d",&data);
    while(start!=NULL)
    {
        pos++;
        if(start->info==data)
        {
            printf("\n  Congratulation! ");
            printf("Data \'%d\' is found",start->info);
            printf(" at position no %d\n",pos);
            return;
        }
        start=start->link;
    }
    printf("\n\tSorry! Data \'%d\' is not found\n",data);
}
void view_List(struct node *start)
{
    if(start==NULL)
    {
        printf("\nList is Empty");
        return;
    }
    printf("\n  List of integer values : \n");
    while(start!=NULL)
    {
        printf("\t%d",start->info);
        start=start->link;
    }
}
