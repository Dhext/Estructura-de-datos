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
    return(c.final1==MAX-1||c.final1+1==c.frente);
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
