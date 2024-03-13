#include <iostream>
#include<stdlib.h>
#include<windows.h>
using namespace std;


struct Fila_struct{

    int Fila[50];

    void Fila_menu( ){
        int contador = 0;
        int opcao;
        Fila_struct itemMenu;

        do{
            cout << "===========================" << endl;
            cout << "          Menu Fila" << endl;
            cout << "===========================" << endl;
            cout << " 1 - Adicionar Elemento. " << endl;
            cout << " 2 - Remover Elemento. " << endl;
            cout << " 3 - Visualizar Elementos. " << endl;
            cout << " 0 - Sair " << endl;
            cin >> opcao;
            cin.ignore(80,'\n');
            Sleep(200);
            system("cls");
            if(opcao == 1){
                contador += 1;
            }
            if(opcao == 2)
            {
                contador--;
            }

            switch(opcao){

                case 1: itemMenu.Adicionar_Elementos_Fila(contador);
                break;
                case 2: itemMenu.Remover_Elemento_Fila(contador);
                break;
                case 3: itemMenu.Visualizar_Elementos_Fila(contador);
                break;

            }

        }while(opcao != 0);
    }

        void Adicionar_Elementos_Fila(int contador){
            cout<<"----------------------"<<endl;
            cout<<" Inserindo elementos:"<<endl;
            cout<<"----------------------"<<endl;
            for(int i = contador-1; i <= contador-1; ++i){
                    cout << i+1 << "* elemento:";
                    cin >> Fila[i] ;
            }
            Sleep(200);
            system("cls");
        }

         void Visualizar_Elementos_Fila(int contador){
             if(contador == -1 || contador == 0){
                cout << "Nao existe elementos na fila." << endl;
                cout << endl;
                cout << "Tecle <Enter> para voltar ao menu.";
                cin.get();
                system("cls");
                }
                else{
                    cout << "--------------------" << endl;
                    cout << "Elementos inseridos:" << endl;
                    cout << "--------------------" << endl;

                    for(int i = 0; i <= contador-1; ++i){
                        cout << i+1 << "* elemento:" << Fila[i] << endl;
                        }
                    cout << endl;
                    cout << "Tecle <Enter> para voltar ao menu.";
                    cin.get();
                    system("cls");
                }
                ;

         };

          void Remover_Elemento_Fila(int contador){
            if(contador == -1){
                cout << "Nao existe elementos na fila." << endl;
                Sleep(300);
                system("cls");}
            else
            {
                cout << "-------------------" << endl;
                cout << " Elemento Removido " << endl;
                cout << "-------------------" << endl;
            }
           for(int i = 0; i <= contador-1; ++i){
                    Fila[i] = Fila[i+1];
            }
            Sleep(500);
            system("cls");

        }

};



struct Pilha_struct{
    int Pilha[50];

        void Adicionar_Elementos_Pilha(int contador){
            cout<<"----------------------"<<endl;
            cout<<" Inserindo elementos:"<<endl;
            cout<<"----------------------"<<endl;
                for(int i = contador-1; i <= contador-1; ++i){
                        cout << i+1 << "* Elemento:";
                        cin >> Pilha[i] ;
                }
            Sleep(200);
            system("cls");
            }

         void Visualizar_Elementos_Pilha(int contador){

             if(contador == -1 || contador == 0){
                cout << "Nao existe elementos na pilha." << endl;
                cout << "Tecle <Enter> para voltar ao menu.";
                cin.get();
                system("cls");}

             else{
                    cout << "--------------------" << endl;
                    cout << "Elementos inseridos: " << endl;
                    cout << "--------------------" << endl;

                    for(int i = 0; i <= contador-1; ++i){

                        cout << i+1 << "* elementos:" << Pilha[i] << endl;
                    }
                cout << "Tecle <Enter> para voltar ao menu.";
                cin.get();
                system("cls");

             }


         }

          void Remover_Elemento_Pilha(int contador){

            if(contador == -1){
                cout << "Nao existe elementos na pilha." << endl;
                Sleep(300);
                system("cls");}
            else
            {
                cout << "-------------------" << endl;
                cout << " Elemento Removido " << endl;
                cout << "-------------------" << endl;
            }
            Sleep(500);
            system("cls");

        }

        void Pilha_menu( ){
            int contador = 0;
            int opcao;
            Pilha_struct itemMenu;

            do{
                cout << "===========================" << endl;
                cout << "         Menu Pilha" << endl;
                cout << "===========================" << endl;
                cout << " 1 - Adicionar Elemento. " << endl;
                cout << " 2 - Remover Elemento. " << endl;
                cout << " 3 - Visualizar Elementos. " << endl;
                cout << " 0 - Sair " << endl;
                cin >> opcao;
                cin.ignore(80,'\n');
                Sleep(200);
                system("cls");
                if(opcao == 1){
                    contador += 1;
                }
                if(opcao == 2)
                {
                    contador--;
                }

                switch(opcao){

                    case 1: itemMenu.Adicionar_Elementos_Pilha(contador);
                    break;
                    case 2: itemMenu.Remover_Elemento_Pilha(contador);
                    break;
                    case 3: itemMenu.Visualizar_Elementos_Pilha(contador);
                    break;

                }
            }while(opcao != 0);

    }
};

int main(void){
    int opcao;


do{

    Fila_struct escolha1;
    Pilha_struct escolha2;
    cout << "==============" << endl;
    cout << "     Menu" << endl;
    cout << "==============" << endl;
    cout << " 1 - FILA " << endl;
    cout << " 2 - PILHA " << endl;
    cout << " 0 - SAIR " << endl;
    cin >> opcao;
    cin.ignore(80,'\n');
    Sleep(200);
    system("cls");

    switch(opcao){

        case 1: escolha1.Fila_menu();
        break;
        case 2: escolha2.Pilha_menu();
        break;
        default:
            cout << "Opcao Invalida." <<endl; Sleep(500); system("cls");
        break;

    }
}while(opcao != 0);
}
