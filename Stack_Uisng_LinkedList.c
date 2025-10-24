//Stack representation in LinkedList
#include<stdio.h>
#include<stdlib.h>
    struct Node{
        int data;
        struct Node* next;
    };

    struct Node* top = NULL;

    int isEmpty(){
        return top == NULL;
    }

    void push(int val){
        struct Node* myNode = (struct Node*)malloc(sizeof(struct Node));
        myNode->data = val;
        myNode->next = top;

        top = myNode;
    }

    void pop(){
        if(isEmpty()){
            printf("Stack Underflow...");
            return;
        }
        struct Node* currNode = top;
        top = top->next;
        free(currNode);
    }

    int peek(){
        if(isEmpty()){
            printf("The Stack is Empty...");
            return -1;
        }
        return top->data;
    }

    int main(){
        push(10);
        push(20);
        push(30);
        push(40);
        push(50);

        while(!isEmpty()){
            printf("%d \n",peek());
            pop();
        }
    }