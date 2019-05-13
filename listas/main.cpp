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

void impares(Lista P){
    int N;
    Lista q;
    q=P;
    while(q!= NULL)
    {
        N=q->info;
        q=q->sig;

        if(N%2!=0){
            cout<<N<<" "<<endl;
        }
    }
}
void ordenar(Lista &P){
    Lista q,x;
    int t;
    q=P;
    while(q->sig!=NULL){
        x=q->sig;
        while(x!=NULL){
            if(q->info > x->info){
                t=x->info;
                x->info=q->info;
                q->info=t;
            }
            x=x->sig;
        }
        q=q->sig;
        x=q->sig;
    }
}
double nodost(Lista P){
    double N=0;
    Lista q;
    q=P;
    while(q!= NULL)
    {
        N++;
        q=q->sig;
    }
    return N;
}
void promedio(Lista P){
    Lista q;
    double N=0;
    q=P;
    double s = nodost(q);
    while(q!= NULL)
    {
        N=N+q->info;
        q=q->sig;
    }
    N=N/s;
    cout<<"Promedio "<<N<<endl;
}
void Inicializar(Lista &P)
{
    P = NULL;
}
bool listavacia(Lista P)
{
    return (P== NULL);
}
void crearinicio(Lista &p)
{
    int res;
    Lista q;
    cout<<"valor de nodo"<<endl;
    cin>>p->info;
    p -> sig= NULL;
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
void crearfinal(Lista &p)
{
    int res;
    Lista q,t;
    t=new nodo;
    cout<<"valor de nodo"<<endl;
    cin>>p->info;
    p -> sig= NULL;
    t = p;
    cout<<"deseas agregar mas nodos? 1/0 ";
    cin>>res;
    while(res==1)
    {
        q=new nodo;
        cout<<"valor de nodo"<<endl;
        cin>>q->info;
        q->sig=NULL;
        t->sig=q;
        t=q;

        cout<<"deseas agregar mas nodos? 1/0 ";
        cin>>res;
    }
}
void mostrar(Lista P)
{
    int N=0;
    Lista q;
    q=P;
    while(q!= NULL)
    {
        cout<<endl<<q->info<<endl;
        q=q->sig;
    }
}
void sawp(Lista &P){
    Lista q,x;
    int t;
    q=P;
    x=q;
    while(x->sig!=NULL){
            x=x->sig;
            t=x->info;
            x->info=q->info;
            q->info=t;
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

    if(listavacia(P)==true)
    {
        t=P;
        while(t->sig!= NULL)
        {
            t=t->sig;
        }
    }
    q=new nodo;
    q->info=dato;
    q->sig= NULL;
    if(!listavacia(P))
    {
        t->sig=q;
    }
    else
    {
        cout<<"error"<<endl;
        system("pause");

    }

}
void insertarantesde(Lista &P, tipo dato, Lista refe)
{
    Lista q,t,x;
    bool band =false;
    if(listavacia(P)==true)
    {
        cout<<"error"<<endl;
    }
    else
    {
        q=P;
        while(band==true&&q->info!=refe->info)
        {
            if(q->sig!=NULL)
            {
                t=q;
                q=q->sig;
            }
            else
            {
                band=true;
            }
        }
        if(band==false)
        {

            refe->info=dato;
            if(P==q)
            {
                refe->sig=P;
                P=refe;
            }
            else
            {
                t->sig=refe;
                refe->sig=q;
            }
        }
        else
        {
            cout<<"el nodo no existe";
        }
    }
}
void insertardes(Lista &P, tipo dato, Lista refe)
{
    Lista q,t,x;
    bool band =false;
    if(listavacia(P)==true)
    {
        cout<<"error"<<endl;
    }
    else
    {
        q=P;
        while(band==true&&q->info!=refe->info)
        {
            if(q->sig!=NULL)
            {
                q=q->sig;
            }
            else
            {
                band=true;
            }
        }
        if(band==false)
        {
            t=new nodo;
            t->info=dato;
            t->sig=q->sig;
            q->sig=t;
        }
        else
        {
            cout<<"el nodo no existe";
        }
    }
}
void eliminar_inicio(Lista &P)
{
    Lista q;
    q=P;
    P=q->sig;
    delete q;
}
void eliminar_ult(Lista &P)
{
    Lista t,q;
    q=P;
    if(P->sig==NULL)
    {
        P=NULL;
    }
    else
    {
        while(q->sig!=NULL)
        {
            t=q;
            q=q->sig;
        }
        t->sig=NULL;
    }
    delete q;
}
void eliminar_x(Lista &P, tipo x)
{
    Lista q,t;
    t=new nodo;
    q=P;
    bool band =false;
    while(q->info!=x&&band==false)
    {
        if(q->sig!=NULL)
        {
            t=q;
            q=q->sig;
        }
        else
        {
            band=true;
        }
    }
    if(band==true)
    {
        cout<<"error"<<endl;
    }
    else
    {
        if(P==q)
        {
            P=q->sig;
        }
        else
        {
            t->sig=q->sig;
        }
        delete q;
    }
}
void buscar(Lista P,tipo x)
{
    Lista q;
    int pos=0;
    q=P;
    while(q!=NULL&&q->info!=x)
    {
        q=q->sig;
        pos++;
    }
    if(q==NULL)
    {
        cout<<"elemento no encontrado";
    }
    else
    {
        cout<<"elemetno en la posicion "<<pos<<endl;
    }
}
int main()
{
    int opc;
    tipo dato,ref;
    Lista A,f;
    Inicializar(A);
    do
    {
        cout<<"*** 0 mostrar \n*** 1 crear inicio \n*** 2 crear final \n*** 3 insertar inicio \n*** 4 insertar Final \n*** 5 insertar antes de(bugs) \n*** 6 insertar despues de \n*** 7 eliminar inicio \n*** 8 eliminar final \n*** 9 eliminar x \n*** 10 Buscar \n*** 11 Numero de nodos \n*** 12 promedio \n*** 13 Impares \n*** 14 ordenar \n*** 15 sawp \n*** 16 salir   "<<endl;
        cin >>opc;

        system("cls");
        switch(opc)
        {
        case 1:
            crearinicio(A);
            break;
        case 2:
            crearfinal(A);
            break;
        case 0:
            mostrar(A);

            break;
        case 3:
            cout<<"dato"<<endl;
            cin>>dato;
            insertarinicio(A, dato);
            break;
        case 4:
            cout<<"dato"<<endl;
            cin>>dato;
            insertarfinal(A, dato);

            break;
        case 5:
            cout<<"dato"<<endl;
            cin>>dato;
            cout<<"referencia"<<endl;
            cin>>f->info;
            cout<<f->info;
            insertarantesde(A, dato, f);
            break;
        case 6:
            cout<<"dato"<<endl;
            cin>>dato;
            cout<<"referencia"<<endl;
            cin>>f->info;
            cout<<f->info;
            insertardes(A, dato, f);
            break;
        case 7:
            eliminar_inicio(A);
            break;
        case 8:
            eliminar_ult(A);
            break;
        case 9:
            cout<<"dato";
            cin>>dato;
            eliminar_x(A,dato);
            break;
        case 10:
            cout<<"dato";
            cin>>dato;
            buscar(A,dato);
            break;
        case 16:
            return 0;
            break;
        default:
            break;
        case 11:
            cout<<"total de nodos "<<nodost(A)<<endl;
            break;
        case 12:
            promedio(A);
            break;
        case 13:
            impares(A);
            break;
        case 14:
            ordenar(A);
            break;
        case 15:
            sawp(A);
            break;
        }
        system("pause");
        system("cls");
    }

    while(true);

}
