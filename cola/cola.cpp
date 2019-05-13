#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <sstream>
#include <time.h>
using namespace std;
#define MAX 100

typedef string tipodato;

struct cola
{
    int frente;
    int final1;
    tipodato cola[MAX];
};

typedef struct cola tipocola;

void inicializar(tipocola &c);

bool vacio(tipocola c);

bool lleno(tipocola c);

void insertar(tipocola &c, tipodato a);

tipodato eliminar(tipocola &c);

int main()
{
    srand (time(NULL));
    stringstream ss, sal;
    sal << endl;
    tipodato m;
    char opc2;
    int opc,a=0,arng,arng2;
    tipocola A;
    inicializar(A);
    tipocola B;
    inicializar(B);
    tipocola C;
    inicializar(C);
    tipocola D;
    inicializar(D);
    do
    {
        cout<<"1 Cliente"<<endl<<"2 Pagar"<<endl<<"3 Cobrar Fila"<<endl;
        cin>>opc;
        switch(opc)
        {
        case 1:
            a++;
            cout<< "cliente n° "<< a <<endl;
            m= "Cliente ";
            ss << a <<endl;
            m= m + ss.str();
            arng= rand()%2 + 1;
            if(arng==1)
            {
                m=m +sal.str()+ "Tomo carrito";
            }
            else if(arng==2)
            {
                m=m+ sal.str()+ "No Tomo carrito";
            }
            arng= rand()%3 + 1;
            if(arng==1)
            {
                m=m+sal.str()+ "Encontro lo que buscaba";
                m=m + sal.str()+ "Tomo Dulces";
                arng2 = rand()%2 + 1;
                if(arng2==1)
                {
                    m=m+sal.str()+ "Descuento 10%";
                }
                else
                {
                    m=m+sal.str()+ "Sin Descuento";
                }
            }
            else if(arng==2)
            {
                m=m+sal.str()+ "No encontro lo que buscaba";
                m=m+sal.str()+ "Pero Tomo Bebida";
                arng2= rand()%2 + 1;
                if(arng2==1)
                {
                    m=m+sal.str()+ "Descuento 10%";
                }
                else
                {
                    m=m+sal.str()+ "Sin Descuento";
                }
            }
            else
            {
                m=m+sal.str()+ "No encontro lo que buscaba";
            }
            arng2= rand()%4 + 1;
            if(arng2==1)
            {
                m=m+sal.str()+ "Formado en Fila A";
                insertar(A,m);
                cout<<"Fila A"<<endl;
            }
            else if(arng==2)
            {
                m=m+sal.str()+ "Formado en Fila B";
                insertar(B,m);
                cout<<"Fila B"<<endl;
            }
            else if(arng==3)
            {
                m=m+sal.str()+ "Formado en Fila C";
                insertar(C,m);
                cout<<"Fila C"<<endl;
            }
            else
            {
                m=m+sal.str()+ "Formado en Fila D";
                insertar(D,m);
                cout<<"Fila D"<<endl;
            }
            ss.str("");
            system("pause");
            system("cls");
            break;
        case 2:
            system("cls");
            cout<<"Fila a Cobrar"<<endl;
            cin>>opc2;
            switch(opc2)
            {
            case 'A':
                cout<<endl;
                cout<<eliminar(A)<<endl<<endl;
                system("pause");
                system("cls");
                break;
            case 'B':
                cout<<endl;
                cout<<eliminar(B)<<endl<<endl;
                system("pause");
                system("cls");
                break;
            case 'C':
                cout<<endl;
                cout<<eliminar(C)<<endl<<endl;
                system("pause");
                system("cls");
                break;
            case 'D':
                cout<<endl;
                cout<<eliminar(D)<<endl<<endl;
                system("pause");
                system("cls");
                break;
            }

            break;
        case 3:
            cout<<"Fila a Cobrar"<<endl;
            cin>>opc2;
            switch(opc2)
            {
            case 'A':
                for(int i=A.frente; i<=A.final1; i++)
                {
                    cout<<endl;
                    cout<<eliminar(A)<<endl<<endl;
                }
                system("pause");
                system("cls");
                break;
            case 'B':
                for(int i=B.frente; i<=B.final1; i++)
                {
                    cout<<endl;
                    cout<<eliminar(B)<<endl<<endl;
                }
                system("pause");
                system("cls");
                break;
            case 'C':
                for(int i=C.frente; i<=C.final1; i++)
                {
                    cout<<endl;
                    cout<<eliminar(C)<<endl<<endl;
                }
                system("pause");
                system("cls");
                break;
            case 'D':
                for(int i=D.frente; i<=D.final1; i++)
                {
                    cout<<endl;
                    cout<<eliminar(D)<<endl<<endl;
                }
                system("pause");
                system("cls");
                break;
            }
            break;
        }

    }while(true);
    return 0;
}

tipodato eliminar(tipocola &c)
{
    tipodato x;
    if(vacio(c)==true)
    {
        cout<<"Cola Vacia"<<endl;
    }
    else
    {
        x=c.cola[c.frente];
        if(c.frente==c.final1)
        {
            inicializar(c);
        }
        else
        {
            c.frente=c.frente+1;
        }
    }
    return x;
}

void inicializar(tipocola &c)
{
    c.final1=-1;
    c.frente=-1;
}

bool vacio(tipocola c)
{
    return(c.final1==-1&& c.frente==-1 );
}

bool lleno(tipocola c)
{
    return(c.final1==MAX-1);
}

void insertar(tipocola &c, tipodato a)
{
    if(lleno(c)==true)
    {
        cout<<"cola llena"<<endl;
    }
    else
    {
        c.final1=c.final1+1;
        c.cola[c.final1]=a;
        if(c.final1==0)c.frente=0;
    }
}
