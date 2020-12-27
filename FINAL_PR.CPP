#include<stdio.h>
//#include<conio.h>
#include<ctype.h>       //for tolower() function
#include<stdlib.h>      //for itoa()
#include<GRAPHICS.H>    //to  load graphics driver
#include<dos.h>
#include<string.h>
int col=60 , row = 417 ,n ,x=60 , y=417  ,size=10;
int arr[20]={12,56,23,46,32,89,11,99,12,66,4,2,1,0,94,56,22,87,45,47} ;
int count =0, top = 0;
//Global Variables
char string[45];
void greet();
void end();
void push( );
void pop( );
void stack();
/*________*//*_*///These Functions prototypes are, for queue Function
int qcol=60 , qrow = 417 ,qn=10, qx=60 , qy=417  ,qsize=10;
int qarr[20]={12,56,23,46,32,89,11,99,12,66,4,2,1,0,94,56,22,87,45,47};
int countp=0 ,counto = 0;
 //Global Variables
int front = -1 , rear = -1 , hito=0 , hitu=0;
int gdriver=DETECT,gmode,errorcode;
char qstring[45];
void qpush( );                                 //Prototypes
void qpop( );
void queue();
void loadgraph();
void main_menu();
void link_list_menu();
void introductory_menu();
void link_list_theory();
void stack_theory();
void queue_theory();
void binary_tree_theory();
void singly_link_list_menu();
void create_single_link_list();
void insert_at_begin_sll(int);
void insert_at_end_sll(int);
void insert_at_specific_sll(int,int);
int display_sll();
void gr_display_sll();
void delete_at_begin_sll();
void delete_at_end_sll();
void delete_at_specific_sll(int);

void doubly_link_list_menu();
 void create_double_link_list();
 void insert_at_begin_dll(int);
void insert_at_end_dll(int);
 void insert_at_specific_dll(int,int);
int display_dll();
void gr_display_dll();
void delete_at_begin_dll();
//void delete_at_end_dll();
//void delete_at_specific_dll();

void circular_link_list_menu();
void create_circular_link_list();
void insert_at_begin_cll(int);
void insert_at_end_cll(int);
void insert_at_specific_cll(int,int);
int display_cll();
void delete_at_begin_cll();
void delete_at_end_cll();
void delete_at_specific_cll(int);
void gr_display_cll();
void stack_queue_menu();
void binary_tree_menu();
void load();
void ll();
void rr();
void delete1(struct btnode *t);
void insert();
void delete2();
void inorder(struct btnode *t);
void create();
void search(struct btnode *t);
void preorder(struct btnode *t);
void postorder(struct btnode *t);
void search1(struct btnode *t,int data);
int smallest(struct btnode *t);
int largest(struct btnode *t);
 void rootg();
 void left();
 void right();
// void rr2();
struct node
{
int info;
struct node*next;
};
struct node2
{
int info;
struct node2*prev;
struct node2*next;
};
struct node3
{
int info;
struct node3*next;
};
struct btnode
{
    int value;
    struct btnode *l;
    struct btnode *r;
}*root = NULL, *temp3 = NULL, *t2, *t1;
node*p,*start=NULL,*last=NULL,*temp=NULL;
node2*p1,*start1=NULL,*last1=NULL,*temp1=NULL;
node3*p2,*start2=NULL,*last2=NULL,*temp2=NULL;
int ctr=0,item,loc,loc1,k,k1,k2,count1=0;
int p0=400;
int q1=50;
int r1=450;
int s1=100;
int x2=425;
int y2=100;
int flag = 1;
char choice;
void main_menu()
{
int opt;
printf("\t\t\t\tMENU\n\n");
printf("1.INTRODUCTION  THEORY\n");
printf("2.LINK LIST\n");
printf("3.STACK AND QUEUE\n");
printf("4.BINARY TREE\n");
printf("5.EXIT\n");
printf("Enter your option");
scanf("%d",&opt);
switch(opt)
{
case 1:
introductory_menu();
break;
case 2:
link_list_menu();
break;
case 3:
stack_queue_menu();
break;
case 4:
binary_tree_menu();
break;
case 5:
loadgraph();
end();
break;
default:
printf("Oops! wrong choice entered. please enter again\n\n");
main_menu();
}
}											//end of main_menu()
void introductory_menu()
{
int opt6;
printf("\t\t\t\t THEORY\n");
printf("1.LINK LIST THEORY\n");
printf("2.STACK THEORY\n");
printf("3.QUEUE THEORY\n");
printf("4.BINARY TREE THEORY\n");
printf("5.GO BACK TO MAIN MENU\n");
printf("6.EXIT\n");
printf("Enter your option:\n");
scanf("%d",&opt6);
switch(opt6)
{
case 1:
link_list_theory();
break;
case 2:
stack_theory();
break;
case 3:
queue_theory();
break;
case 4:
binary_tree_theory();
break;
case 5:
main_menu();
break;
case 6:
loadgraph();
end();
break;
default:
printf("oops!! wrong choice entered,enter again");
introductory_menu();
}
}
void link_list_menu()
{
int opt1;
printf("\t\t\t\t LINK LIST\n ");
printf("1.SINGLY LINKED LIST\n");
printf("2.DOUBLY LINKED LIST\n");
printf("3.CIRCULAR LINKED LIST\n");
printf("4.GO BACK TO MAIN MENU\n");
printf("5.EXIT\n");
printf("Enter your option\n");
scanf("%d",&opt1);
switch(opt1)
{
case 1:
singly_link_list_menu();
break;
case 2:
doubly_link_list_menu();
break;
case 3:
circular_link_list_menu();
break;
case 4:
main_menu();
break;
case 5:
loadgraph();
end();
break;
default:
printf("Oops! wrong choice entered. please enter again\n\n");
link_list_menu();
}
} 												// end of link_list_menu()
void singly_link_list_menu()
{
int opt2;
printf("\t\t\t\t SINGLY LINK LIST\n");
printf("1.Create\n");
printf("2.Insert at the begining\n");
printf("3.Insert at the end\n");
printf("4.Insert at the specific position\n");
printf("5.Delete at the begining\n");
printf("6.Delete at the end\n");
printf("7.Delete at specific position\n");
printf("8.Display\n");
printf("9.Go back to link list menu\n");
printf("10.Graphical display\n");
printf("11.Exit\n");
printf("Enter your option\n");
scanf("%d",&opt2);
switch(opt2)
{
case 1:
create_single_link_list();
display_sll();
singly_link_list_menu();
break;
case 2:
printf("enter the data you want to insert\n");
scanf("%d",&item);
insert_at_begin_sll(item);
display_sll();
singly_link_list_menu();
break;
case 3:
printf("enter the item you want to insert\n");
scanf("%d",&item);
insert_at_end_sll(item);
display_sll();
singly_link_list_menu();
break;
case 4:
printf("enter the item you want to insert\n");
scanf("%d",&item);
printf("after which node you want to insert\n");
scanf("%d",&loc);
insert_at_specific_sll(item,loc);
display_sll();
singly_link_list_menu();
break;
case 5:
delete_at_begin_sll();
display_sll();
singly_link_list_menu();
break;
case 6:
delete_at_end_sll();
display_sll();
singly_link_list_menu();
break;
case 7:
printf("enter the node you want to delete\n");
scanf("%d",&loc);
delete_at_specific_sll(loc);
display_sll();
singly_link_list_menu();
break;
case 8:
display_sll();
singly_link_list_menu();
break;
case 9:
free(start);
link_list_menu();
break;
case 10:
loadgraph();
gr_display_sll();
case 11:
loadgraph();
end();
default:
printf("Oops! wrong choice entered. please enter again\n\n");
singly_link_list_menu();
}
}					// end of singly_link_list_menu()
void link_list_theory()
{
char c[101][30];
FILE  *fptr;
int i;
clrscr();
fptr=fopen("Linklist.txt","r");
printf("\t\t\t\tLINK LIST:\n");
for(i=0;i<101;i++)
{
fscanf(fptr,"%s",&c[i]);
printf(" %s",c[i]);
}
fclose(fptr);
getch();
introductory_menu();
}
void stack_theory()
{
char c[132][30];
FILE  *fptr;
int i;
clrscr();
fptr=fopen("Stack.txt","r");
printf("\t\t\t\tSTACK:\n");
for(i=0;i<132;i++)
{
fscanf(fptr,"%s",&c[i]);
printf(" %s",c[i]);
}
fclose(fptr);
getch();
introductory_menu();
}
void queue_theory()
{
char c[80][30];
FILE  *fptr;
int i;
clrscr();
fptr=fopen("Queue.txt","r");
printf("\t\t\t\tQUEUE:\n");
for(i=0;i<80;i++)
{
fscanf(fptr,"%s",&c[i]);
printf(" %s",c[i]);
}
fclose(fptr);
getch();
introductory_menu();
}
void binary_tree_theory()
{
char c[81][30];
FILE  *fptr;
int i;
clrscr();
fptr=fopen("Btree.txt","r");
printf("\t\t\t\tBINARY TREE:\n");
for(i=0;i<81;i++)
{
fscanf(fptr,"%s",&c[i]);
printf(" %s",c[i]);
}
fclose(fptr);
getch();
introductory_menu();
}
void  create_single_link_list()
{
  do
  {
   p=(node*)malloc(sizeof(node));
   printf("enter the data item:\n");
   scanf("%d",&p->info);
   if(start==NULL)
    {
     start=p;
     last=p;
     temp=p;
     }
      else
      {
       last->next=p;
       last=p;
       }
  printf("do u want to continue type(Y or N):\n");
  scanf("%s", &choice);
     }
  while(choice=='y'||choice=='Y');
  last->next=NULL;
  }				// end of create_singly_link_list()
void insert_at_begin_sll(int item)
{
   p=(node*)malloc(sizeof(node));
   p->info=item;
   if(start==NULL)
      {
       start=p;
       }
   else
    p->next=start;
    start=p;
   }				// end of insert_at_begin_sll()
void insert_at_end_sll(int item)
{
    node*p;
    p=(node*)malloc(sizeof(node));
    p->info=item;
    if(start==NULL)
       {
	start=p;
       }
     else
       {
       while(last->next!=NULL)
	 {
	  last=last->next;
	  }
       last->next=p;
       p->next=NULL;
       last=p;
	   }
	 }						// end of insert_at_end_sll()
void insert_at_specific_sll(int item,int loc)
{
    node*p;
    temp=start;
    p=(node*)malloc(sizeof(node));
    p->info=item;
    if(temp==NULL)
       {
	printf("the list is empty\n");
	}
    else if (temp->next==NULL)
    printf("only one node is present\n");
    else
    for(int i=1;i<loc;i++)
       {
	temp=temp->next;
	}
    p->next=temp->next;
    temp->next=p;
  }						// end of insert_at_specific_sll()
void delete_at_begin_sll()
{
    node*p;
    if(start==NULL)
       {
	printf("The list is empty\n");
	}
    p=start;
    start=start->next;
    printf("deleted element is =%d",p->info);
    free(p);
  }								// end of delete_at_begin_sll()
void delete_at_end_sll()
{
   last=start;
   if(start==NULL)
      {
      printf("The list is empty\n");
	}
   else
    {
    while(last->next->next!=NULL)
	{
	 last=last->next;
	}
     p=last->next;
     last->next=NULL;
     free(p);
	 }
  } 									// end of delete_at_end_sll()
void delete_at_specific_sll(int loc)
{
     if(start==NULL)
	{
	 printf("the list is empty\n");
	}
     else
     p=start;
     for(int i=1;i<loc;i++)
	{
	 temp=p;
	 p=p->next;
	}
     printf("deleted item is =%d",p->info);
     temp->next=p->next;
     free(p);
   }							// end of delete_at_specific_sll()
int display_sll()
{
    int ctr=0;
    temp=start;
    printf("status of linked list\n");
    while(temp!=NULL)
	 {
	  printf("%d\n",temp->info);
	  ctr++;
	  temp=temp->next;
	 }
    printf(" number of nodes in the list=%d",ctr);
    k=ctr;
    return k;
  }
void gr_display_sll()
{
     loadgraph();
     int i,n=5,p,q,r,s,t,j;
     temp=start;
     p=50;q=200;r=100;s=250;t=150;
     setcolor(4);
     setfillstyle(3,3);
     gotoxy(30,2);
     printf("SINGLY LINK LIST");
     gotoxy(5,4);
     printf("Starting node address:%u%d",temp);
     gotoxy(5,8);
     printf("Total number of nodes:%d",k);
     gotoxy(60,4);
     printf("Address of nodes");
     gotoxy(60,6);
     printf("%u%d",temp);
     if(k==1)
       {
	rectangle(p,q,r,s);
	rectangle(r,q,t,s);
	itoa(temp->info,string,10);
	outtextxy(p+20,q+20,string);
	}
     else
       {
	while(temp!=NULL)
	     {
	     j=temp->info;
	     rectangle(p,q,r,s);
	     rectangle(r,q,t,s);
	     itoa(j,string,10);
	     outtextxy(p+20,q+20,string);
	     line(t,(q+s)/2,t+25,(q+s)/2);
	     moveto(t+10,((q+s-5)/2));
	     outtext(">>");
	     gotoxy(60,n);
	     printf("%u%d",temp);
	     n++;
	     k++;
	     p=p+125;
	     r=r+125;
	     t=t+125;
	     temp=temp->next;
	     gotoxy(5,6);
	     printf("Last node address:%u%d",last);
	     }
	 }
	 getch();
	 char ch;
	 gotoxy(20,20);
	 printf("press b for singly link list menu");
	 ch=getche();
	 if(ch=='b'||ch=='B')
	 singly_link_list_menu();
	 closegraph();

      }
						// end of display_sll()

void doubly_link_list_menu()
{
int opt3;
printf("\t\t\t\t DOUBLY LINK LIST\n");
printf("1.Create\n");
printf("2.Insert at the begining\n");
printf("3.Insert at the end\n");
printf("4.Insert at the specific position\n");
printf("5.Delete at the begining\n");
printf("6.Delete at the end\n");
printf("7.Delete at specific position\n");
printf("8.Display\n");
printf("9.Go back to link list menu\n");
printf("10.Graphical display\n");
printf("11.Exit\n");
printf("Enter your option\n");
scanf("%d",&opt3);
switch(opt3)
{
case 1:
 create_double_link_list();
 display_dll();
doubly_link_list_menu();
break;
case 2:
printf("enter the data you want to insert\n");
scanf("%d",&item);
insert_at_begin_dll(item);
 display_dll();
doubly_link_list_menu();
break;
case 3:
printf("enter the item you want to insert\n");
scanf("%d",&item);
insert_at_end_dll(item);
 display_dll();
doubly_link_list_menu();
break;
case 4:
printf("enter the item you want to insert\n");
scanf("%d",&item);
printf("after which node you want to insert\n");
scanf("%d",&loc);
 insert_at_specific_dll(item,loc1);
 display_dll();
doubly_link_list_menu();
break;
case 5:
delete_at_begin_dll();
display_dll();
doubly_link_list_menu();
break;
case 6:
//delete_at_end_dll();
display_dll();
doubly_link_list_menu();
break;
case 7:
//delete_at_specific_dll();
display_dll();
doubly_link_list_menu();
break;
case 8:
 display_dll();
doubly_link_list_menu();
break;
case 9:
free(start1);
link_list_menu();
break;
case 10:
loadgraph();
gr_display_dll();
break;
case 11:
loadgraph();
end();
getch();
default:
printf("Oops! wrong choice entered. please enter again\n\n");
doubly_link_list_menu();
}
}					// end of doubly_link_list_menu()

void create_double_link_list()
{
do
{
p1=(node2*)malloc(sizeof(node));
printf("enter the data item:\n");
scanf("%d",&p1->info);
if(start1==NULL)
{
start1=p1;
last1=p1;
p1->prev= NULL;
p1->next= NULL;
}
else
{
last1->next=p1;
p1->prev=last1;
last1=p1;
}
printf("do u want to continue type(Y or N):\n");
scanf("%s", &choice);
}
while(choice=='y'||choice=='Y');
last1->next=NULL;
}							// end of create_double_link_list()

void insert_at_begin_dll(int item)
{
p1=(node2*)malloc(sizeof(node));
p1->info=item;
if(start1==NULL)
{
start1=p1;
p1->prev=NULL;
p1->next=NULL;
}
else
{
p1->prev=NULL;
p1->next=start1;
start1=p1;
}
}							// end of insert_at_begin_dll

void insert_at_end_dll(int item)
{
p1=(node2*)malloc(sizeof(node));
p1->info=item;
if(start1==NULL)
{
start1=p1;
}
else
{
while(last1->next!=NULL)
{
last1=last1->next;
}
p1->prev=last1;
last1->next=p1;
p1->next=NULL;
}
}								// end of insert_at_end_dll()

void insert_at_specific_dll(int item,int loc1)
{
temp1=start1;
p1=(node2*)malloc(sizeof(node));
p1->info=item;
if(temp1==NULL)
{
printf("the list is empty\n");
	}
else if (temp1->next==NULL)
printf("only one node is present\n");
else
for(int i=1;i<loc1;i++)
{
temp1=temp1->next;
}
p1->next=temp1->next;
temp1->next=p1;
p1->prev=temp1;
}								// end of insert_at_specific_dll()

void delete_at_begin_dll()
{
if(start1==NULL)
{
printf("The list is empty\n");
	}
p1=start1;
start1=start1->next;
start1->prev=NULL;
printf("deleted element is =%d\n",p1->info);
free(p1);
}								// end of delete_at_begin_dll()

int display_dll()
{
int ctr=0;
temp1=start1;
printf("status of the doubly linked list:\n");
while(temp1!=NULL)
{
printf("%d\n",temp1->info);
ctr++;
temp1=temp1->next;
}
printf("number of nodes in the list=%d",ctr);
k2=ctr;
return k2;
}
	// end of display_dll()

void gr_display_dll()
{
loadgraph();
int i,n=5,p,q,r,s,t,j,u;
temp1=start1;
p=50;q=200;r=100;s=250;t=150;u=200;
setcolor(4);
setfillstyle(3,3);
gotoxy(30,2);
printf("DOUBLY LINK LIST");
gotoxy(5,4);
printf("Starting/Last node address:%u%d",temp1);
gotoxy(5,8);
printf("Total number of nodes:%d",k);
gotoxy(60,4);
printf("Address of nodes");
gotoxy(60,6);
printf("%u%d",temp1);
if(k==1)
{
rectangle(p,q,r,s);
rectangle(r,q,t,s);
rectangle(t,q,u,s);
itoa(temp1->info,string,10);
outtextxy(r+20,q+20,string);
}
else
{
while(temp1->next!=NULL)
{
j=temp1->info;
rectangle(p,q,r,s);
rectangle(r,q,t,s);
rectangle(t,q,u,s);
itoa(j,string,10);
outtextxy(r+20,q+20,string);
line(u,(q+s)/2,u+25,(q+s)/2);
moveto(u+5,((q+s-5)/2));
outtext("<>");
gotoxy(60,n);
printf("%u%d",temp1);
n++;
k++;
p=p+175;
r=r+175;
t=t+175;
u=u+175;
temp1=temp1->next;
gotoxy(5,6);
printf("Last/Starting node address:%u%d",last1);

}
}
getch();
char ch;
gotoxy(20,20);
printf("press b for singly link list menu");
ch=getche();
if(ch=='b'||ch=='B')
doubly_link_list_menu();
closegraph();

}


	void circular_link_list_menu()
{
int opt4;
printf("\t\t\t\t CIRCULAR LINK LIST\n");
printf("1.Create\n");
printf("2.Insert at the begining\n");
printf("3.Insert at the end\n");
printf("4.Insert at the specific position\n");
printf("5.Delete at the begining\n");
printf("6.Delete at the end\n");
printf("7.Delete at specific position\n");
printf("8.Display\n");
printf("9.Go back to link list menu\n");
printf("10.Graphical display\n");
printf("11.Exit\n");
printf("enter ur option");
scanf("%d",&opt4);
switch(opt4)
{
case 1:
create_circular_link_list();
display_cll();
circular_link_list_menu();
break;
case 2:
printf("enter the data you want to insert\n");
scanf("%d",&item);
insert_at_begin_cll(item);
display_cll();
circular_link_list_menu();
break;
case 3:
printf("enter the item you want to insert\n");
scanf("%d",&item);
insert_at_end_cll(item);
display_cll();
circular_link_list_menu();
break;
case 4:
printf("enter the item you want to insert\n");
scanf("%d",&item);
printf("after which node you want to insert\n");
scanf("%d",&loc);
insert_at_specific_cll(item,loc);
display_cll();
circular_link_list_menu();
break;
case 5:
delete_at_begin_cll();
display_cll();
circular_link_list_menu();
break;
case 6:
delete_at_end_cll();
display_cll();
circular_link_list_menu();
break;
case 7:
printf("enter the node you want to delete\n");
scanf("%d",&loc);
delete_at_specific_cll(loc);
display_cll();
circular_link_list_menu();
break;
case 8:
display_cll();
circular_link_list_menu();
break;
case 9:
free(start2);
link_list_menu();
break;
case 10:
loadgraph();
gr_display_cll();
break;
case 11:
loadgraph();
end();
getch();

}
}					// end of singly_link_list_menu()
void  create_circular_link_list()
{
do
{
p2=(node3*)malloc(sizeof(node));
printf("enter the data item:\n");
scanf("%d",&p2->info);
if(start2==NULL)
{
start2=p2;
last2=p2;
temp2=p2;
}
else
{
last2->next=p2;
last2=p2;
}
printf("do u want to continue type(Y or N):\n");
scanf("%s", &choice);
}
while(choice=='y'||choice=='Y');
last2->next=NULL;
}				// end of create_singly_link_list()
void insert_at_begin_cll(int item)
{
p2=(node3*)malloc(sizeof(node));
p2->info=item;
if(start2==NULL)
{
start2=p2;
}
else
p2->next=start2;
start2=p2;
}				// end of insert_at_begin_sll()
void insert_at_end_cll(int item)
{
p2=(node3*)malloc(sizeof(node));
p2->info=item;
if(start2==NULL)
{
start2=p2;
}
else
{
while(last2->next!=NULL)
{
last2=last2->next;
}
last2->next=p2;
p2->next=NULL;
last2=p2;
}
}						// end of insert_at_end_sll()
void insert_at_specific_cll(int item,int loc)
{
temp2=start2;
p2=(node3*)malloc(sizeof(node3));
p2->info=item;
if(temp2==NULL)
{
printf("the list is empty\n");
	}
else if (temp2->next==NULL)
printf("only one node is present\n");
else
for(int i=1;i<loc;i++)
{
temp2=temp2->next;
	}
p2->next=temp2->next;
temp2->next=p2;
}						// end of insert_at_specific_sll()
void delete_at_begin_cll()
{
if(start2==NULL)
{
printf("The list is empty\n");
	}
p2=start2;
start2=start2->next;
printf("deleted element is =%d",p2->info);
free(p2);
}								// end of delete_at_begin_sll()
void delete_at_end_cll()
{
last2=start2;
if(start2==NULL)
{
printf("The list is empty\n");
	}
else
{
while(last2->next->next!=NULL)
{
last2=last2->next;
}
p2=last2->next;
last2->next=NULL;
free(p2);
}
} 									// end of delete_at_end_sll()
void delete_at_specific_cll(int loc)
{
if(start2==NULL)
{
printf("the list is empty\n");
	}
else
p2=start2;
for(int i=1;i<loc;i++)
{
temp2=p2;
p2=p2->next;
	}
printf("deleted item is =%d",p2->info);
temp2->next=p2->next;
free(p2);
}							// end of delete_at_specific_sll()
int display_cll()
{
int ctr=0;
temp2=start2;
printf("status of linked list\n");
while(temp2!=NULL)
{
printf("%d\n",temp2->info);
ctr++;
temp2=temp2->next;
}
printf(" number of nodes in the list=%d",ctr);
k1=ctr;
return k1;
}
void gr_display_cll()
{
loadgraph();
int i,n=5,p,q,r,s,t,j;
temp2=start2;
p=50;q=200;r=100;s=250;t=150;
setcolor(4);
setfillstyle(3,3);
gotoxy(30,2);
printf("CIRCULAR LINK LIST");
gotoxy(5,4);
printf("Starting node address:%u%d",temp2);
gotoxy(5,8);
printf("Total number of nodes:%d",k1);
gotoxy(60,4);
printf("Address of nodes");
gotoxy(60,6);
printf("%u%d",temp2);
if(k1==1)
{
j=temp2->info;
rectangle(p,q,r,s);
rectangle(r,q,t,s);
itoa(j,string,10);
outtextxy(p+20,q+20,string);
line(t,(q+s)/2,t+25,(q+s)/2);
moveto(t+10,((q+s-5)/2));
outtext(">>");
int x1=t+25,y1=(q+s)/2;
line(x1,y1,x1,(y1+50));
line(x1,(y1+50),30,(y1+50));
moveto((x1-60)/2,(y1+47));
outtext("<<    <<   <<");
line(30,(y1+50),30,y1);
line(30,y1,50,y1);
moveto(35,(y1-3));
outtext(">>");
}
else
{
while(temp2!=NULL)
{
j=temp2->info;
rectangle(p,q,r,s);
rectangle(r,q,t,s);
itoa(j,string,10);
outtextxy(p+20,q+20,string);
line(t,(q+s)/2,t+25,(q+s)/2);
moveto(t+10,((q+s-5)/2));
outtext(">>");
gotoxy(60,n);
printf("%u%d",temp2);
n++;
k++;
p=p+125;
r=r+125;
t=t+125;
temp2=temp2->next;
gotoxy(5,6);
printf("Last node address:%u%d",last2);

}
p=p-125;
r=r-125;
t=t-125;
int x1=t+25,y1=(q+s)/2;
line(x1,y1,x1,(y1+50));
line(x1,(y1+50),30,(y1+50));
moveto((x1-60)/2,(y1+47));
outtext("<<    <<   <<");
line(30,(y1+50),30,y1);
line(30,y1,50,y1);
moveto(35,(y1-3));
outtext(">>");
}
getch();
char ch;
gotoxy(20,20);
printf("press b for circular link list menu");
ch=getche();
if(ch=='b'||ch=='B')
circular_link_list_menu();
closegraph();

}


						// end of gr_display_cll()



void stack_queue_menu()
{
char ch;

loadgraph();

setbkcolor(0);
setcolor(2);



//This do while; loop will execute untill character 'x' is not Entered do
do

{
 gotoxy(37,5);
 printf("Menu");
 gotoxy(30,6);
 printf("Stack               [s]");
 gotoxy(30,7);
 printf("Queue               [Q]");
 gotoxy(30,8);
 printf("Exit                [x]");
 gotoxy(25,9);
 printf("\t\t\t\t");
 gotoxy(30,10);
 printf("Enter Option        [ ]\b\b");
 ch=getche();
 //Converts, Entered char into lower one
 ch = tolower(ch);
 gotoxy(30,15);
 if(ch=='s')

 // call to stack function
 {  cleardevice();
 stack();
 }

 else if(ch=='q')
 {  cleardevice();
 //call to queue function
 queue();
 }



}while(ch!='x');
 cleardevice();
 closegraph();
 main_menu();
}// end of stack_queue_menu
 void loadgraph()
 {
 clrscr();

initgraph(&gdriver,&gmode,"c:\\turboc3\\bgi");
errorcode=graphresult();
if(errorcode!=grOk)
{
printf("graphics error:%s\n",grapherrormsg(errorcode));
printf("press any key to halt:");
getch();
exit(1);
}

}// end of loadgraph()
   void stack()
   {

   int r,i;
   char ch[2];
  moveto(400,60);
  outtext("STACK'S OPERATIONS");
  moveto(400,80);
  outtext("PUSH           [p]");
  moveto(400,100);
  outtext("POP            [o]");
  moveto(400,120);
  outtext("EXIT           [x]");
  //End of stack Menu---*/// displays value of top in start of program
  moveto(300,425);
  outtext("Top");
  itoa(top,string,10);
  outtextxy(308,450,string);
  /*--------------------*///Dislplays stack figure
  setbkcolor(0);
  setcolor(14);
  outtextxy(55,26,"STACK");
  line(30,40,30,440);
   r=40;
  for(i = 1 ;i<12 ;i++)
   {
     line(30,r,110,r);
     r+=40;
   }
  line(110,40,110,440);
  r = 55;
  // This loop Displays stack's boxes Number
  for( i = 10 ;i>=1 ;i--) {
     moveto(10,r);
     itoa(i,string,10);
     outtext(string)  ;
     r+=40;
   }
   //These four statements makes a box
   line(165,440,210,440);
   line(165,440,165,460);
   line(210,440,210,460);
   line(165,460,210,460);
   setfillstyle(0, getmaxcolor());
   // This do while loop , reads coorect option (push, pop, Exit) // And Makes calls to push, pop functions char ch[2];
   do
    {
     moveto(400,140);
     outtext("ENTER OPTION   ");
     ch[0]=getche();
     //convert entered option in lower character
     ch[0] = tolower(ch[0]);
     if(ch[0]=='p')
    {  // start of outer if // displays p
       outtext("p");
       // make a delay
       delay(500);
       // draw a bar to remove p
       bar(getx()-30,gety(),getx()+2,gety()+20);
       /*--*/// if size of stack's remaining boxese less than one
       // than stack is overflow if(size<1)
       if(size<1)
	{ //start of nested if
	 for(i = 0 ;i<4 ; i++){
	  moveto(420,170);
	  outtext("Stack Overflow");
	  delay(1000);
	  setfillstyle(0, getmaxcolor());
	  bar(420 ,165 ,630 ,180);
	  delay(500);}
	 }//end of nested if-----------*/// if there are stack's boxes remains (if size>1) else
	else {
	  //start of nested else part // decrease stack remaining boxes
	  size--;
	  // increase top position , where last item is Inserted
	  top++;
	  // call to push function
	 push();
	  // bar removes last displayes value
	  bar(290,440,350,479);
	  // convert integer value to assci value /* becuse outtext/outtextxy function require string as third argument */
	  itoa(top,string,10);
	  outtextxy(308,447,string);
	  }//End of Nested else Part
    }//end  of Nested if elseif(ch[0]=='o')
    else
    {  // start of outer if's elseif part // Displays o , and remove it after a delay
       outtext("o");
       delay(500);
       bar(getx()-30,gety(),getx()+10,gety()+20);
       /*---------*//* if all boxes of stack are empty than display message of overflow */
       if(size==10)
	 {
	  for(i = 0 ;i<4 ; i++){
	  moveto(410,170);
	  outtext("Stack, Underflow ");
	  delay(1000);
	  setfillstyle(0, getmaxcolor());
	  bar(330 ,165 ,630 ,180);   // (left, top)     � upper left corner
	  delay(500);  }                //        (right, bottom) � lower right corner*/
	 }
       /*-----------------------------------*//*if there are some boxes of stack filled than cal pop function */
       else
	  {
	  // update top's value
	  top--;
	  pop();
	  //display value of updated top
	  bar(290,440,350,479);
	  itoa(top,string,10);
	  outtextxy(308,447,string);}
	  }
	 /*------------------------------------------------------*/
}while(ch[0]!='x');
}// end of stack()
void push()
{
   int a=178 ,  b=425,i,j;
   /*----*///displays the value that is to be pushed in stack
   moveto(178,447);
   itoa(arr[count],string,10);
   outtext(string);
   /*---*//*after a delay remove the value , and display the      value in box that is to pushed next */
   delay(10);
   bar(170,446,208,455);
   itoa(arr[count+1],string,10);
   moveto(178,447);
   outtext(string);
   /*--------------------------------------------------------------*/
   moveto(a,b);
   /*this loop displays and moves the value untill top row position is not found */
   while(gety()!=y)
     {
      setfillstyle(0, getmaxcolor());
      circle(a+6,b+3,12);
      itoa(arr[count],string,10);
      outtext(string);
      delay(10);
      setfillstyle(0, getmaxcolor());
      bar(170 ,gety()-20 ,200 ,gety()+14);
      moveto(a,b);
      b--;
     }
   setfillstyle(0, getmaxcolor());
   circle(a+6,b+3,9);
   outtext(string);
   moveto(125,b);
   /*-----*///This loop displays the animated arrow toward top box os stack

   for( j   =0 ;j<6 ; j++)
      {
    outtext("�");
    delay(100);
    setfillstyle(0, getmaxcolor());
    bar(getx()-3 ,gety() ,getx() ,gety()+8);
    delay(100);
      } delay(100);

   /*--------------------------------------------------------------*/
   //Remove last displayed value
   setfillstyle(0, getmaxcolor());
   bar(getx()-48 ,gety() ,getx() ,gety()+8);
   delay(100);    delay(200); /*---------------------------------------*/
   /*while required coloumn of top box is not found , Display and move value to required colimn */
    while(getx()!=x+60) {
      setfillstyle(0, getmaxcolor());
      circle(a+6,b+3,9);
      itoa(arr[count],string,10);
      outtext(string);
      delay(10);
      setfillstyle(0, getmaxcolor());
      bar(getx()-20 ,gety()-10 ,getx()+70 ,gety()+20);
      moveto(a,b);
      a--;
     }
   /*--------------------------------------------------------------*/          delay(100);//display the value in required box
   moveto(60,gety());
   outtext(string);
   count++;
   // to have cursor position in top box of stack
   y = y-40;
}// end of push()
void pop(){
 int a=120,b,j;
   //Update row , from where next value is to be poped
   y = y + 40   ;
   b = y        ;
   moveto(120,y);
   /*-----*//* This loop displayes the arrows towards the stack's box from where , value is to be poped */
   for( j=0 ;j<6 ; j++)
    {
     outtext("�");
     delay(100);
     setfillstyle(0, getmaxcolor());
     bar(getx()-3 ,gety() ,getx() ,gety()+8);
     delay(100);
    }
   /*----------*/// Remove last displayed arrow
   delay(100);
   setfillstyle(0, getmaxcolor());
   bar(getx()-48 ,gety() ,getx() ,gety()+8);
   delay(200);
   moveto(60,gety());
   setfillstyle(0, getmaxcolor());
   bar(getx()-10 ,gety()-3 ,getx()+20 ,gety()+8);
   /*-----*//*This loop will display the value untill poped value is not      positioned in values box column  */
   delay(500);
   while(getx()!=178)
     {
      setfillstyle(0, getmaxcolor());
      circle(a+6,b+3,12);
      moveto(a,gety());
      itoa(arr[count-1],string,10);
      outtext(string);
      delay(10);
      setfillstyle(0, getmaxcolor());
      bar(getx()-25 ,gety()-10 ,getx()+30 ,gety()+20);
      a++;
     }
   /*------*//*This loop will display the value untill poped value is not positioned in values box Row */
   delay(500);
   while(gety()!=430)
     {
      setfillstyle(0, getmaxcolor());
      circle(a+21,b+3,7);
      moveto(178,b);
      itoa(arr[count-1],string,10);
      outtext(string);
      delay(10);
      setfillstyle(0, getmaxcolor());
      bar(getx()-30 ,gety()-10 ,getx()+20 ,gety()+9);
      b++;
     }
   /*----------*/// These statements displyes poped values in vlaue box
     delay(10);
     moveto(178,447);
     bar(170,446,208,455);
     count--;
     moveto(178,447);
     itoa(arr[count],string,10);
     outtext(string);
     size++;
   /*-------------------------------------------------------------*/
}

ccleardevice(); // end of pop function
void queue()
 {

 int r,i;
 char ch[2];
 char fr[80];

  moveto(400,60);
  outtext("Queue'S OPERATIONS");
  moveto(400,80);
  outtext("PUSH           [p]");
  moveto(400,100);
  outtext("POP            [o]");
  moveto(400,120);
  outtext("EXIT           [x]");
  /*-------------------------*/
  setbkcolor(0);
  setcolor(14);
  /*-----------------*//*this portion will create queue's figure*/
  outtextxy(55,26,"Queue");
  line(30,40,30,440);
  r=40;
  for(i=1;i<12;i++)
     {
     line(30,r,110,r);
     r+=40;
    }
  line(110,40,110,440);
  /*--*//*------*//*this loop is used, to write stacks numbers*/
 r=55;
  for( i = 9 ;i>=0 ;i--)
   {
     moveto(10,r);
     itoa(i,string,10);
     outtext(string)  ;
     r+=40;
   }
  /*---------------------------------------------------------------------*//* these four lines , used to create a box*/
  line(165,440,210,440);
  line(165,440,165,460);
  line(210,440,210,460);
  line(165,460,210,460);
  /*--------------------------------------------------------------------*//* This do while loop , reads coorect option (push, pop, Exit)      And Makes calls to qpush, qpop functions */
  setfillstyle(0, getmaxcolor());

  do
   {
    moveto(400,140);
    outtext("ENTER OPTION   ");
    ch[0]=getche();
    ch[0] = tolower(ch[0]);
    if(ch[0]=='p')
      {
       // start of outer if /*---*//*display p than after 5 seconds remove*/
       outtext("p");
       delay(500);
       bar(getx()-30,gety(),getx()+2,gety()+20);
       /*-----*/// if no value is inserted or all values have been poped then
	if((front==0 && rear == qn-1) || (front==rear+1) )
	{ //start of nested if
	  for( i = 0 ;i<4 ; i++)
	  {
	   moveto(420,170);
	   outtext("Overflow Queue");
	   delay(1000);
	   setfillstyle(0, getmaxcolor());
	   bar(420 ,165 ,630 ,180);
	   delay(500);
	  }
	   hito = 1 ;
	 } //end of nested if // if queue is not empty
	else if(hito==0 )
	{//tart of nested else part /*---*///update position of front and rear whenever front = -1
	if(front == -1)
	 {
	  front = 0   ;
	  rear  = 0   ;
	  qrow  = 417 ;
	 }
	   /*----------*//*whenever rear has value equal to queue size rear must be equal to 0 ,to have circular queue */
	else if(rear == qn-1 )
	{
	  rear = 0  ;
	  qrow  = 417;
	 }
	   /*-----*/
	else
	  rear += 1;
	   /*----------------------------------------------------*/
	   hitu = 0;
	   qsize++;
	   qpush();
	   /*------*//* These statements displays updated values of front nd rear Positions, after each call to qpush()*/
	   moveto(265,390);
	   bar(265,415,375,550);
	   outtextxy(270,400,"Front");
	   outtextxy(350,400,"Rear");

	   itoa(front,fr,10);
	   outtextxy(277,420,fr);
	   itoa(rear,fr,10);
	   outtextxy(357,420,fr);
	  }
	  } /*----------------------------------------------------*/
	//End of Nested else Part
  //end  of Nested if
   else if(ch[0]=='o')//start of outer if's elseif part
     {
       outtext("o");
       delay(500);
       bar(getx()-30,gety(),getx()+10,gety()+20);
       /*------*///if all values have been poped then diplay message
	 if(rear==-1)
	 {
	  for( i = 0 ;i<4 ; i++)
	  {
	  moveto(415,170);
	  outtext("UnderFlow Queue ");
	  delay(1000);
	  setfillstyle(0, getmaxcolor());
	  bar(330 ,165 ,630 ,180);
	  delay(500);
	  hitu = 1 ;
	  }
       /*--------------------------------------------------------*/
	}
      // if queue has some values than call to pop function
     else if(hitu!=1)
     {
      /* if front and rear have same position than to display value in ist box of queue front and rear is updated to -1*/
     if(front == rear )
	{
	 front = -1  ;
	 rear  = -1  ;
	}
	else if(front == qn-1 );
       {
	  front =  0  ;
	  qy    = 417 ;
	     /*else simply change position of front*/
	 }
	 }
       /*----*//*These statements displays , updated values of front and rear variables */
      else

      front+=1;

      hito=0;
      qsize--;
      qpop();
      moveto(265,390);
      bar(265,415,375,550);
      outtextxy(270,400,"Front");
      outtextxy(350,400,"Rear");

      itoa(front,fr,10);
      outtextxy(277,420,fr);
      itoa(rear,fr,10);
      outtextxy(357,420,fr);


      /*if front has value equal to size of queue than front must have value equal to 0 , To make a Circular list*/

     } /*--------------------------------------------------------*/
     }while(ch[0]!='x');
      /*else simply change position of front*/

} // end of queue function
void qpush(){
int a=178 ,  b=425 ,j ;
     /*---*//*These statements displayes values in box , that is to pushed*/
     moveto(178,447);
     itoa(qarr[countp],qstring,10);
     outtext(qstring);
     delay(10);
     bar(170,446,208,455);
     itoa(qarr[countp+1],qstring,10);
     moveto(178,447);
     outtext(qstring);
     /*-------------*//*---------*//*This portion of statements displays and move value from values box untill required rear box's row is not found*/
     moveto(a,b);
     while(gety()!=qrow)
     {
	 setfillstyle(0, getmaxcolor());
	 circle(a+6,b+3,12);
	 itoa(qarr[countp],qstring,10);
	 outtext(qstring);
	 delay(10);
	 setfillstyle(0, getmaxcolor());
	 bar(170 ,gety()-20 ,200 ,gety()+14);
	 moveto(a,b);
	 b--;
     }
     setfillstyle(0, getmaxcolor());
     circle(a+6,b+3,9);
     outtext(qstring);
     moveto(125,b);
     /*--*//*--*/// display arrow towards to rear box
    for( j=0; j<6; j++) {
      outtext("�");
      delay(100);
      setfillstyle(0, getmaxcolor());
      bar(getx()-3 ,gety() ,getx() ,gety()+8);
      delay(100);
     }
     /*---*///remove last displyed arrow
     delay(100);
     setfillstyle(0, getmaxcolor());
     bar(getx()-48 ,gety() ,getx() ,gety()+8);
     delay(200);
     /*----*//*This portion of statements displays and move value from valuesbox untill required rear box's row is not found */
    while(getx()!=qx+60) {
	 setfillstyle(0, getmaxcolor());
	 circle(a+6,b+3,9);
	 itoa(qarr[countp],qstring,10);
	 outtext(qstring);
	 delay(10);
	 setfillstyle(0, getmaxcolor());
	 bar(getx()-20 ,gety()-10 ,getx()+70 ,gety()+20);
	 moveto(a,b);
	 a--;
     }
    moveto(60,gety());
    outtext(qstring);
      /*------*/// to have cursor position in Last part of stack
      countp++;
      qrow = qrow-40;
      if(front==-1 && rear==-1)
      qrow =417;
} // end of qpush()
void qpop(){
   int a=120,b=qy,j;
   //update no. of values that is poped
   countp++;
   /*--------*///display arrow towards front box in queue
   moveto(120,qy);
   for(j =0 ;j<6 ; j++)
    {
	   outtext("�");
	   delay(100);
	   setfillstyle(0, getmaxcolor());
	   bar(getx()-3 ,gety() ,getx() ,gety()+8);
	   delay(100);
    }
   /*-----*///remove last displayed arrow
   delay(100);
   setfillstyle(0, getmaxcolor());
   bar(getx()-48 ,gety() ,getx() ,gety()+8);
   delay(200);
   moveto(60,gety());
   setfillstyle(0, getmaxcolor());
   bar(getx()-10 ,gety()-3 ,getx()+20 ,gety()+8);
   /*----*//*this loop displays and moves value that is to poped from front box of queue and take it to values box's column */
   delay(500);
    while(getx()!=178)
     {
	 setfillstyle(0, getmaxcolor());
	 circle(a+6,b+3,12);
	 moveto(a,gety());
	 itoa(qarr[counto],qstring,10);
	 outtext(qstring);
	 delay(10);
	 setfillstyle(0, getmaxcolor());
	 bar(getx()-25 ,gety()-10 ,getx()+30 ,gety()+20);
	 a++;
     }
   //* this loop displays and moves value that is to poped from front box of queue and take it to values box's row */
   delay(1000);
    while(gety()!=430)
     {
	 setfillstyle(0, getmaxcolor());
	 circle(a+21,b+3,9);
	 moveto(178,b);
	 itoa(qarr[counto],qstring,10);
	 outtext(qstring);
	 delay(10);
	 setfillstyle(0, getmaxcolor());
	 bar(getx()-30 ,gety()-10 ,getx()+20 ,gety()+9);
	 b++;
     }
   /*-----------*/// update value in box (that is poped value)
     delay(10);
     moveto(178,447);
     bar(170,446,208,455);

     moveto(178,447);
     itoa(qarr[counto],qstring,10);
     outtext(qstring);
     counto++;

     qy = qy - 40;
     if(front==-1 && rear==-1  )
    {
     qrow=qy=417;
     counto=countp=0;
    }
   /*---------------------------------------------------------------*/
} // end of qpop()
void binary_tree_menu()
{
    int ch;
     clrscr();
     loadgraph();

    printf("\n1 Insert New Node\n");
    printf("2 Delete a Node\n");
    printf("3 Inorder Traversal\n");
    printf("4 Preorder Traversal\n");
    printf("5 Postorder Traversal\n");
    printf("6 Go back to main menu\n");
    printf("7 Exit\n");
    while(1)
    {
	printf("\nEnter your choice : ");
	scanf("%d", &ch);
	switch (ch)
	{
	case 1:
	    insert();
	    break;
	case 2:
	    delete2();
	    break;
	case 3:
	    inorder(root);
	    break;
	case 4:
	    preorder(root);
	    break;
	case 5:
	    postorder(root);
	    break;
	case 6:
	main_menu();
	break;
	case 7:
	    loadgraph();
	    end();
	    break;
	default :
	    printf("Wrong choice, Please enter correct choice  ");
	    break;
	}
    }
    //getch();
}
/* To insert a node in the tree */
void insert()
{
    create();
    if (root == NULL)
    {
	root = temp3;

	rootg();
	getch();
    }
    else
	search(root);
}
/* To create a node */
void create()
{
    int data;

    printf("Enter data of node to be inserted : ");
    scanf("%d", &data);
    temp3 = (struct btnode *)malloc(1*sizeof(struct btnode));
    temp3->value = data;
    temp3->l = temp3->r = NULL;
}
/* Function to search the appropriate position to insert the new node */
void search(struct btnode *t)
{
    if ((temp3->value > t->value) && (t->r != NULL))      /* value more than root node value insert at right */
	{
	++count;
	rr();
	search(t->r);

	}
    else if ((temp3->value > t->value) && (t->r == NULL))
    {
	t->r = temp3;
       right();
     }
    else if ((temp3->value < t->value) && (t->l != NULL))
	/* value less than root node value insert at left */
	{
       ++count;
	ll();
	search(t->l);

	}
    else if ((temp3->value < t->value) && (t->l == NULL))
	{
	t->l = temp3;
       //	if(count==0)
       //	{
	left();
       //	}
       /*	if(count>=1)
	{
	rr2();
	}*/
	}
}
/* recursive function to perform inorder traversal of tree */
void inorder(struct btnode *t)
{
    if (root == NULL)
    {
	printf("No elements in a tree to display");
	return;
    }
    if (t->l != NULL)
	inorder(t->l);
    printf("%d -> ", t->value);
    if (t->r != NULL)
	inorder(t->r);
}
/* To check for the deleted node */
void delete2()
{
    int data;

    if (root == NULL)
    {
	printf("No elements in a tree to delete");
	return;
    }
    printf("Enter the data to be deleted : ");
    scanf("%d", &data);
    t1 = root;
    t2 = root;
    search1(root, data);
}
/* To find the preorder traversal */
void preorder(struct btnode *t)
{
    if (root == NULL)
    {
	printf("No elements in a tree to display");
	return;
    }
    printf("%d -> ", t->value);
    if (t->l != NULL)
	preorder(t->l);
    if (t->r != NULL)
	preorder(t->r);
}
/* To find the postorder traversal */
void postorder(struct btnode *t)
{
    if (root == NULL)
    {
	printf("No elements in a tree to display ");
	return;
    }
    if (t->l != NULL)
	postorder(t->l);
    if (t->r != NULL)
	postorder(t->r);
    printf("%d -> ", t->value);
}
/* Search for the appropriate position to insert the new node */
void search1(struct btnode *t, int data)
{
    if ((data>t->value))
    {
	t1 = t;
	search1(t->r, data);
    }
    else if ((data < t->value))
    {
	t1 = t;
	search1(t->l, data);
    }
    else if ((data==t->value))
    {
	delete1(t);
    }
}
/* To delete a node */
void delete1(struct btnode *t)
{
    int k;

    /* To delete leaf node */
    if ((t->l == NULL) && (t->r == NULL))
    {
	if (t1->l == t)
	{
	    t1->l = NULL;
	}
	else
	{
	    t1->r = NULL;
	}
	t = NULL;
	free(t);
	printf("\n Your node is deleted");
	return;
    }
 /* To delete node having one left hand child */
    else if ((t->r == NULL))
    {
	if (t1 == t)
	{
	    root = t->l;
	    t1 = root;
	}
	else if (t1->l == t)
	{
	    t1->l = t->l;

	}
	else
	{
	    t1->r = t->l;
	}
	t = NULL;
	free(t);
	printf("\n Your node is deleted");
	return;
    }
 /* To delete node having right hand child */
    else if (t->l == NULL)
    {
	if (t1 == t)
	{
	    root = t->r;
	    t1 = root;
	}
	else if (t1->r == t)
	    t1->r = t->r;
	else
	    t1->l = t->r;
	t = NULL;
	free(t);
	printf("\n Your node is deleted");
	return;
    }
 /* To delete node having two child */
    else if ((t->l != NULL) && (t->r != NULL))
    {
	t2 = root;
	if (t->r != NULL)
	{
	    k = smallest(t->r);
	    flag = 1;
	}
	else
	{
	    k =largest(t->l);
	    flag = 2;
	}
	search1(root, k);
	t->value = k;
    }

}
/* To find the smallest element in the right sub tree */
int smallest(struct btnode *t)
{
    t2 = t;
    if (t->l != NULL)
    {
	t2 = t;
	return(smallest(t->l));
    }
    else
	return (t->value);
}
/* To find the largest element in the left sub tree */
int largest(struct btnode *t)
{
    if (t->r != NULL)
    {
	t2 = t;
	return(largest(t->r));
    }
    else
	return(t->value);
}
void rootg()
{
delay(500);
rectangle(p0,q1,r1,s1);
getch();
}
void left()
{
int d50=50;
int d100=100;
line(x2,y2,x2-d50,y2+d50);
rectangle(p0-d50,q1+d100,r1-d50,s1+d100);
getch();
}
void right()
{
int d50=50;
int d100=100;
line(x2,y2,x2+d50,y2+d50);
rectangle(p0+d50,q1+d100,r1+d50,s1+d100);
getch();
}
void ll()
{
int d50=50;
int d100=100;
line((x2-d50)-((count1-1)*d50),(y2+d100)+((count1-1)*d50),(x2-d50)-(d50*count1),(y2+d100)+(d50*count1));
rectangle((p0-50)-(d50*count1),(q1+100)+(d100*count1),(r1-50)-(d50*count1),(s1+100)+(d100*count1));
--count1;
}

void rr()
{
int d50=50;
int d100=100;
line((x2+d50)+((count1-1)*d50),(y2+d100)+((count1-1)*d50),(x2+d50)+(d50*count1),(y2+d100)+(d50*count1));
rectangle((p0+50)+(d50*count1),(q1+100)+(d100*count1),(r1+50)+(d50*count1),(s1+100)+(d100*count1));
--count1;
}
void main()
{
loadgraph();
greet();
cleardevice();
main_menu();
getch();
}
void end()
{
cleardevice();
settextstyle(1,HORIZ_DIR,5);
outtextxy(200,200,"THANK YOU ");
}
void greet()
{
settextstyle(0,HORIZ_DIR,3);
setcolor(WHITE);
outtextxy(70,80,"ELUCIDATORY LEARNING");
delay(1000);
outtextxy(300,150,"A ");
delay(1000);
outtextxy(100,220,"TOOL TO UNDERSTAND");
 delay(1000);
outtextxy(180,290,"CONCEPTS OF");
delay(1000);
outtextxy(150,360,"DATA STRUCTURE");
delay(1000);
}