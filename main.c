#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Queue.h"
//#include "Node.h"

//#include "Queue.h"


int main(int argc , char **argv) {
   int i,x,j=0,y,cash=0;
   Queue q;
   q.head=NULL;
   q.tail=NULL;
   q.size=0;
   
  menu();

 for(i=1;i<argc;i++)
 {
        if(strcmp(argv[i],"x")==0)
        {
            if (q.size!=0) {
              y = q.head->qty;
              x = dequeue_q(&q); // ผลคำนวน ราคา 
              if (x==1) {
               printf("Customer no.%d :\n1-Spicy Winged Chicken x%d\n",++j,y);
                printf("You have to pay %d bath\nCash: ",79*y);
                y=79*y;
              }
              else if (x==2) {
               printf("Customer no.%d :\n2-French fries x%d\n",++j,y);
               printf("You have to pay %d bath\nCash: ",49*y);
               y=49*y;
              }
              else if (x==3) {
                printf("Customer no.%d :\n3-Pepsi x%d\n",++j,y);
                printf("You have to pay %d bath\nCash: ",10*y);
                y=10*y;
             }
              else {
                printf("Your Order is %d >>> No menu...\n--------------\n",x);
             }
             if (x == 1|| x == 2 || x == 3){
              do{
              //fflush(stdin);
                scanf("%d",&cash);
              if (cash<y) {
                printf(":Cash: ");
                }
              else {
                if (cash==y) ;
                else printf("Change is %d bath\n",cash-y);
                printf("Thank you^^\n--------------\n");
                }
              } while (cash<y);
            }
          }
            else {
              if (x!=0||y!=0){
                printf("No Queue...\n--------------\n");
                x = 0;y=0;
              }
            }
        }
        else {
          //printf("%d %d\n",atoi(argv[i]), atoi(argv[i+1]));
          enqueue_q(&q, atoi(argv[i]), atoi(argv[i+1]));
          i++;
        }
 }
 if(q.size>0) {
   printf("There are %d people letf in the queue",q.size);
 }
  return 0;
}