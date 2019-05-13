#include <cstdio>
#include <iostream>
#include <cstdlib>
using namespace std;
typedef int tipo;
struct nodo
{
    tipo info;
    struct nodo *sig;
};
typedef struct nodo *Lista;

void Inicializar(Lista &P)
{
    P = NULL;
}
bool listavacia(Lista P)
{
    return (P==NULL);
}
void crearinicio(Lista &p)
{
    int res;
    Lista q;
    cout<<"valor de nodo"<<endl;
    cin>>p->info;
    p -> sig=NULL;
    cout<<"deseas agregar mas nodos? 1/0 ";
    cin>>res;
    while(res==1)
    {
        q=new nodo;
        cout<<"valor de nodo"<<endl;
        cin>>q->info;
        q->sig=p;
        p=q;
        cout<<"deseas agregar mas nodos? 1/0 ";
        cin>>res;
    }
}
void mostrar(Lista P)
{
    Lista q;
    q=P;
    while(q!=NULL)
    {
        cout<<endl<<q->info<<endl;
        q=q->sig;
    }
}
void insertarinicio(Lista &P, tipo dato)
{
    Lista q;
    q=new nodo;
    q->info=dato;
    q->sig=P;
    P=q;
}
void insertarfinal(Lista &P, tipo dato)
{
    Lista q,t;
    if(listavacia(P)==false)
    {
        t=P;
        while(t->sig!=NULL)
        {
            t=t->sig;
        }
    }
    q=new nodo;
    q->info=dato;
    q->sig=NULL;
    if(listavacia(P)==false)
    {
        t->sig=q;
    }else{
        cout<<"error"<<endl;
        system("pause");

    }

}
void insertarantesde(Lista &P, tipo dato, tipo refe){
    Lista q,t,x;
    bool band =false;
    if(listavacia(P)==true){
        cout<<"error"<<endl;
    }else{
        q=P;
        while(band==true&&q->info!=refe){

        }
    }
}
int main()
{
    int opc,bn=1;
    tipo dato;
    Lista A;
    Inicializar(A);
    do
    {
        cout<<"1 insertar 2 mostrar 3 insertar inicio"<<endl;
        cin >>opc;
        switch(opc)
        {
        case 1:
            if(bn==1)
            {
                A=new nodo;
                bn=2;
            }
            crearinicio(A);
            break;
        case 2:
            mostrar(A);
            break;
        case 3:
            cout<<"dato"<<endl;
            cin>>dato;
            insertarinicio(A, dato);
            bn=2;
            break;
        case 4:
            cout<<"dato"<<endl;
            cin>>dato;
            insertarfinal(A, dato);
            bn=2;
            break;
        }

    }

while(true);
return 0;
}
