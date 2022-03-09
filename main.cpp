#include <iostream>
#include "queue.h"
#include "validate.h"

using namespace std;
void menu() {
    Queue q;
    int opc,e;
    string str_opc,str_e;
    do {
        system("cls");
        q.showQueue();
        cout<<"-----MENU-----\n"
            <<"1) Encolar\n"
            <<"2) Desencolar\n"
            <<"3) Mostrar frente\n"
            <<"4) Mostrar ultimo\n"
            <<"5) Salir\n";
        do{
            cout<<"Seleccione una opcion: ";
            cin>>str_opc;
        }while( !(isInt(str_opc) and str_opc.length()==1) );

        opc=stoi(str_opc);

        switch(opc) {
            case 1:
                do{
                cout<<"Ingrese un numero: ";
                cin>>str_e;
                }while( !( isInt(str_e) and  str_e.length()==1 ) );

                e=stoi(str_e);

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
            default:
                cout<<"Opcion invalida"<<endl;
                system("pause");
            }


        }
    while(opc != 5);


    }

int main() {
    menu();
    return 0;
    }
