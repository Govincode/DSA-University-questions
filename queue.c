#include <stdio.h>
#include <stdbool.h>
#define max 100
int queues[max];
int rear = -1,size;
int i;
int choice;


bool isFull(){
    return rear == size -1;
 }
 bool isEmpty(){
    return rear == -1;

 }
 void enque(){
    if(isFull()){
        printf("queue is in overflow condition\n");
    }else{
        int val;
        printf("Enter the value you wanted to enque : \n");
        scanf("%d",&val);
        rear++;
        queues[rear] =  val;
    }

 }

 void deuque(){
        if (isEmpty())
        {
           printf("Queue currently in underflow condition\n");
        }else{
            
            int front = queues[0];
            
            for (int i = 0; i <= rear; i++)
            {
                queues[i] = queues[i+1];
                rear--;                          
            }
            
        }
        
    }

    void peek(){
        if (isEmpty())
        {
           printf("Queue currently in underflow condition\n");
        }else{
            
            int front = queues[0];
            printf("Front element is %d\n" , front);
           
        }
    }

    int display(){
        for (i = 0; i <= rear; i++)
        {
            printf("%d\n",queues[i]);
        }
        
    }

int main(){
    printf("Enter the size of an array: ");
    scanf("%d",&size);
   

    while (choice != 6)
    {
         printf("Enter the following number to do an operations \n");
        printf("1 for enque , 2 for deque ,3 for peek ,4 for display and 5 for exit\n");
        scanf("%d",&choice);
        switch(choice){
        case 1:
        enque();
        break;
        case 2:
        deuque();
        break;
        case 3:
        peek();
        break;
        case 4:
        display();
        break;
        case 6:
        printf("Exiting....");
        break;
        default:
        printf("Enter the valid input");
        break;
        }
     
    }

    


}

 