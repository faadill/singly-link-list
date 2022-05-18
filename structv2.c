#include<stdio.h>
#include<stdlib.h>

void main()
{
   struct node
   {
      int data;
      struct node *next;
   };
   struct node *head=NULL, *pos=NULL, *tail=NULL;
   int ch, entry,count=0,search,num,flag=0;
   while(1)
   {
       printf("\n1-insert\n2-display\n3-count\n4-search\n5-exit");
       printf("\nEnter you choice:");
       scanf("%d", &ch);

       switch(ch)
       {
           case 1:{
                     printf("\nEnter data:");
                     scanf("%d", &entry);
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
                     }
                     break;
                  }
         case 2:{
                     pos=head;
                     printf("\nElements are:");
                     while(pos!=NULL)
                     {
                        printf("\t%d", pos->data);
                        pos=pos->next;
                     }
                     break;
                }
        case 3:{
                  pos=head;
                  while(pos!=NULL) 
                  {
                     count=count+1;
                     pos= pos->next;
                  }
                  printf("\nThe count is %d", count);
                  break;   
               }
        case 4:{
                  printf("Enter the element to be searched:");
                  scanf("%d", &num);
                  pos=head;
                  count=0;
                  while(pos!=NULL)
                  {
                     count++;
                     if(pos->data==num)
                     {
                            printf("\nElement found at position %d", count);
                            flag=1;
                     }
                     pos=pos->next;
                  }
                  if(flag==0)
                  {
                       printf("\nElements not present\n");
                  }
                  break;
               }  
        case 5:{
                     printf("\nGood bye");
                     exit(0);
               }
     }
  }
}


