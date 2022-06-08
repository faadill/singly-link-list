#include<stdio.h>
#include<stdlib.h>
void main()
{
  struct node
  {
  int data ;
  struct node*next;
  };
  struct node*head=NULL,*pos=NULL,*tail=NULL;
  int ch,entry,count=0,search,num,flag=0;
  while(1)
  {
  printf("\n1:insert \n2:display \n3:count \n4:search an element \n5:delete \n6:exit");
  printf("\nenter your choice:");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1:
        {
         printf("\n enter data:");
         scanf("%d",&entry);
         if(head==NULL)
          {
            head=(struct node*)malloc(sizeof(struct node));
            head->data=entry;
            pos=head;
            tail=head;
          }
          else
          {
             tail->next=(struct node*)malloc(sizeof(struct node));
             tail=tail->next;
             tail->data=entry;
             break;
          }
       } 
       case 2:
       {
          pos=head;
          printf("\nelements are:");
          while(pos!=NULL)
     {
       printf("\t%d",pos->data);
       pos=pos->next;
     }
      break;
      }
         case 3:
       {
          pos=head;
          count=0;
          while(pos!=NULL)
          {
             count=count+1;
             pos=pos->next;

          }
          printf("\nthe count is %d",count);
       break;
      }
      case 4:
      {
        printf("enter element to be searched");
        scanf("%d",&num);
         pos=head;
        count=0;
        while(pos!=NULL)
     {
        count++;
        if(pos->data==num)
     {
       printf("\nelement found at position %d",count);
       flag=1;
      }
       pos=pos->next;
     }
       if (flag==0)
        {
           printf("\n element not present\n");
        }
      break;
     }
      case 5:
     {
        struct node*temp = head;
        int i;
        printf("enter position of data");
        scanf("%d",&entry);
        if(entry==0)
        {
          head=head->next;
          temp->next=NULL;
          free(temp);
        }
        else
        {
        for(int i=0;i<entry-1;i++)
          temp=temp->next;
          struct node*del=temp->next;
          temp->next=temp->next->next;
          del->next=NULL;
          free(del);
        }
        break;
     }
      case 6:
      {
        printf("\n Good bye :)");
        exit(0);
      }
    }
  }
}

