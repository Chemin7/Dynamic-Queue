#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
#include "node.h"
#include <iostream>


class Queue {
    private:
        Node* head;
        Node* rear;


    public:
        Queue() {
            this->head =NULL;
            this->rear = NULL;
            };

        void enqueue(int);
        void dequeue();
        int getFront();
        int getLast();

        bool isEmpty();
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
    }

int Queue::getFront() {
    if(isEmpty())
        std::cout<<"La cola esta vacia"<<std::endl;

    return head->data;

    }

int Queue::getLast() {
    if(isEmpty())
        std::cout<<"La cola esta vacia"<<std::endl;

    return rear->data;
    }

bool Queue::isEmpty() {
    return head == NULL and rear == NULL;
    }

#endif // QUEUE_H_INCLUDED
