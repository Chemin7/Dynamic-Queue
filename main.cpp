#include <iostream>
#include "queue.h"

using namespace std;
void menu() {
    Queue q;
    int opc,e;
    do {
        system("cls");
        q.showQueue();
        cout<<"-----MENU-----\n"
            <<"1) Encolar\n"
            <<"2) Desencolar\n"
            <<"3) Mostrar frente\n"
            <<"4) Mostrar ultimo\n"
            <<"5) Salir\n"
            <<"Seleccione una opcion: ";
        cin>>opc;

        switch(opc) {
            case 1:
                cout<<"Ingrese un numero: ";
                cin>>e;
                q.enqueue(e);
                break;
            case 2:
                if(q.isEmpty()){
                    cout<<"La cola esta vacia"<<endl;
                     system("pause");
                }
                else
                    q.dequeue();

                break;
            case 3:
                if(q.isEmpty())
                    cout<<"La cola esta vacia"<<endl;
                else
                    cout<<q.getFront()<<endl;
                system("pause");
                break;
            case 4:
                if(q.isEmpty())
                    cout<<"La cola esta vacia"<<endl;
                else
                    cout<<q.getLast()<<endl;;
                system("pause");
                break;
            }


        }
    while(opc != 5);


    }

int main() {
    menu();
    return 0;
    }
