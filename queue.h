#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
#include "node.h"
#include <iostream>


class Queue {
    private:
        Node* head;
        Node* rear;
        int sizeQueue;


    public:
        Queue() {
            this->head =NULL;
            this->rear = NULL;
            sizeQueue=0;
            };

        void enqueue(int);
        void dequeue();
        int getFront();
        int getLast();

        bool isEmpty();

        void showQueue();
    };


void Queue::enqueue(int e) {
    Node* ptr = new Node();
    ptr->data=e;
    ptr->next = NULL;

    if(head == NULL) {
        head=ptr;
        rear=ptr;
        }
    else {
        rear->next=ptr;
        rear=ptr;
        }

    sizeQueue++;
    }

void Queue::dequeue() {
    if(isEmpty()) {
        std::cout<<"La cola esta vacia"<<std::endl;
        }
    else if(head==rear) {
        delete(head);
        head=NULL;
        rear=NULL;
        }
    else {
        Node* ptr=head;
        head=head->next;
        delete(ptr);
        }

    sizeQueue--;
    }

int Queue::getFront() {

    return head->data;

    }

int Queue::getLast() {

    return rear->data;
    }

bool Queue::isEmpty() {
    return head == NULL and rear == NULL;
    }

void Queue::showQueue()
{

    Node *aux=NULL;
	int i;

	if(!isEmpty()){
            aux=head;
            system("cls");


           printf("\n\n\t\t%c%c%c%c%c  \n",201,205,205,205,187);

            for(i=sizeQueue-1; i>=0; i--) {
            if(i==sizeQueue-1){
                printf("Frente->\t%c ",186,205);
            }
            else{
                printf("\t\t%c ",186,205);
            }
            std::cout<<aux->data<<" ";
            aux=aux->next;
            printf("%c\n",186);

            if(i==0)
                printf("Final->\t\t%c%c%c%c%c\n",200,205,205,205,188);
            else
                printf("\t\t%c%c%c%c%c\n",204,205,205,205,185);

        }
	}

}

#endif // QUEUE_H_INCLUDED
