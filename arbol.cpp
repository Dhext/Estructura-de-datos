#include <cstdio>
#include <iostream>
using namespace std;
typedef  int tipodato;
struct nodo{
    struct nodo *izq;
    tipodato info;
    struct nodo *der;
};
typedef struct nodo *arbol;
void inicializa(arbol &x){
    x=NULL;
}
void creararbol(arbol &Apnodo){
    int resp;
    arbol otro;
    cout<<"Valor del primer nodo ";
    cin>>Apnodo->info;
    cout<<"existe nodo en la parte izquierda de: "<<Apnodo->info<<" 1=si 2=no";
    cin>>resp;
    if(resp==1){
        otro =new nodo;
        Apnodo->izq=otro;
        creararbol(Apnodo->der);
    }else{
        Apnodo->der=NULL;
    }
}

void ir
int main(){
    arbol x;
    inicializa(x);
    x= new nodo;
    creararbol(x);
    return 0;
}

