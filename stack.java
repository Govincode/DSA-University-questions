import java.util.Scanner;  

public class stack {
    static int[] stack;
    static int n;
    static  int top = -1;
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){ 
        int choice = 0;
        
        System.out.print("Enter the size of stack : ");
        n = scan.nextInt();
        stack = new int[n];
        while(choice != 4){

            System.out.println("Enter the number:");
            System.out.println("1 for PUSH() , 2 for POP() , 3 for DISPLAY() , 4 for exit");
            System.out.print("Enter Your Choice : ");
            choice = scan.nextInt();
            switch (choice) {
                case 1:
                    push();
                    break;
                case 2:
                    pop();
                    break;
                case 3:
                    display();;
                    break;
                case 4:
                    System.out.println("Exiting...");
                    break;

                default:
                    System.out.println("Please Enter a valid number");
                    break;
            }

        }
        scan.close();    
    }
    static void push(){
        if(top==n-1){
            System.out.println("Stack is in Overflow Condition");
        }else{
            System.out.print("Enter the value : ");
            top += 1;
            int val = scan.nextInt();
            stack[top] = val;

        }
    }
    static void pop(){
        if(top == -1){
            System.out.println("Stack is in underflow condition");
        }else{
            System.out.println("Last Element "+ stack[top] +" Removed");
            top--;

        }
    }
    static void display(){
        if(top == -1){
            System.out.println("stack is empty");
        }else{
            System.out.println("Stack Elements  :  ");
            for(int i = top;i>=0;i--){
                System.out.println(stack[i]);
            }
        }
    }
}