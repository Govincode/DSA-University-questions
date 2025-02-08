#include <stdio.h>

int stack[100],i,choice = 0,n,top=-1;
void push();
void pop();
void display();

void main(){
    printf("Enter the size of stack : ");
    scanf("%d",&n);
    printf("\n**********Stack Operation Using Array**********");

    while (choice != 4)
    {
        printf("Enter Your Choice of Operation on Stack \n");
        printf(" 1 for PUSH() , 2 for POP() , 3 for DISPLAY() , 4 for exit\n");
        printf(" Enter Your Choice : ");
        scanf("%d",&choice);
        printf("\n");

        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("existing...");
            break;
        default:
        printf("Enter Valid Input. \n");
        printf("\n");
            break;
        }
   
    }
    

}
void push()
    {
        if(top == n-1){
            printf("⚠⚠⚠⚠⚠⚠ Stack is in Overflow condition ⚠⚠⚠⚠⚠⚠\n");
            printf("\n");
        }else{
            int val;
            printf("Enter the value you want to push into the stack : ");
            scanf("%d",&val);
            top += 1;
            stack[top] = val;
        }
    }

void pop(){
    if(top == -1){
        printf("⚠⚠⚠⚠⚠⚠ Stack currently into under-flow condition ⚠⚠⚠⚠⚠⚠\n");
        printf("\n");
    }else{
        top -= 1;
        printf("Your Last element is POPED from the array\n");
        printf("\n");

    }
}

void display(){
    if(top == -1){
        printf(" ⚠⚠⚠⚠⚠⚠ Array is Empty ⚠⚠⚠⚠⚠⚠ \n");
        printf("\n");
    }else{
        for(i = top;i>=0;i--){
            printf("%d" , stack[i]);
            printf("\n");
        }
    }
}

