#include<stdio.h>
#include<conio.h>
#define size 4

int cir_queue[size];
int rear =-1,front = -1;

void insert(){
    int iteam;

    if ((rear +1) % size == front)
    {
        printf("Queue is full\n");
    }
    else{
        printf("Enter the elemnt u want to insert = ");
        scanf("%d",&iteam);
        if(front == -1){
            front = rear = 0;
        }
        else{
            rear = (rear +1) % size;
        }
        
        cir_queue[rear] = iteam;
        printf("You have entered an element\n");
    }
    
}

void delete(){
    if (front == -1){
        printf("Queue is empty\n");
    }
    else{
        printf("Deleted element is = %d\n",cir_queue[front]);
        front=(front+1) % size;
    }
}
void display(){
    if(front == -1){
        printf("Queue is empty\n");
    }
    else{
        int i = front;
        while(1){
            printf("%d ",cir_queue[i]);
            i = (i+1)%size;
            if(i == front)
            {
                break;
            }
        }
    }
}

// front == -1 is queue is empty
// (rear + 1) % size == front is queue is full
// insert  e amra check kori first e queue is full or na 
// tarpor display te check kori je queue is empty kina 
// delet e amra check kori je queue is empty kina

#include<stdio.h>
#include<conio.h>
#define size 10
int queue_cir[size];
int rear = -1;front = -1;

void insert(){
    int iteams;

    if((rear + 1) % size == front)
    {
        printf("Queue is full\n");
    }
    else{
        if(rear== front== -1){
            rear = front = 0;
        }
        printf("enter an element = ");
        scanf("%d",&iteams);
        queue_cir[rear] = iteams;
        printf("\nYou have entered an elements\n");
        rear = (rear + 1) % size;
    }
}
void delete(){
    if( front == -1){
        printf("Queue is empty");
    }
    else{
        printf("You have deleted an elements\n");
        front=(front+1) % size;
    }
}
void display(){

    if(front == -1){
        printf("Queue is empty\n");
    }
    else{
        int i = front;
        printf("All elements are = ");
    
        while(1){
            pritnf("%d",queue_cir[i]);
            i = (i + 1) % size;
            if ( i == front)
            {
                break;
            }
        }
    }
}

