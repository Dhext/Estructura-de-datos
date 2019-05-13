#include <stdio.h>
#include <iostram>
using namespace std;
#define MAX 10
typedef int tipodato;

struct cola{
    int frente;
    int final;
    tipodato cola[MAX];
}

typedef struct cola tipocola;

void inicializar(tipocola &c){
    c.final=-1;
    c.frente=-1;
}

bool vacio(tipocola c){
    return(c.final==-1&&c.frente==-1);
}

bool lleno(tipocola c)}{
    return(c.final==MAX-1);
}

void insertar(tipocola &c, tipodato a){
    if(lleno(c)==true){
        cout<<"cola llena"<<endl;
    }else{
        c.final=c.final+1;
        c.cola[c.final]=a;
        if(c.final==0)c.frente=0;
    }
}

tipodato eliminar(tipocola &c){
    tipodato x;
    x= NULL;
    if(vacio(c)==true){
        cout<<"Cola Vacia"<<endl;
    }else{
        x=c.cola[c.frente];
        if(c.frente==c.final){
            inicializar(c);
        }else{
            c.frente=c.frente+1
        }
    }
    return x;
}
int main(){
    return 0;
}




if(A.frente==B.frente&&A.frente==C.frente){
                m=m+sal.str()+ "Formado en Fila A";
                insertar(A,m);
                cout<<"Fila A"<<endl;
            }else if(B.frente==C.frente){
                 arng2= rand()%2 + 1;
                if(arng2==1){
                    m=m+sal.str()+ "Formado en Fila B";
                    insertar(B,m);
                    cout<<"Fila B"<<endl;
                }else{
                    m=m+sal.str()+ "Formado en Fila C";
                    insertar(C,m);
                    cout<<"Fila C"<<endl;
                }
            }else if(A.frente==B.frente){
                 arng2= rand()%2 + 1;
                if(arng2==1){
                    m=m+sal.str()+ "Formado en Fila B";
                    insertar(B,m);
                    cout<<"Fila B"<<endl;
                }else{
                    m=m+sal.str()+ "Formado en Fila A";
                    insertar(A,m);
                    cout<<"Fila A"<<endl;
                }
            }else if(A.frente==C.frente){
                 arng2= rand()%2 + 1;
                if(arng2==1){
                    m=m+sal.str()+ "Formado en Fila C";
                    insertar(C,m);
                    cout<<"Fila C"<<endl;
                }else{
                    m=m+sal.str()+ "Formado en Fila A";
                    insertar(A,m);
                    cout<<"Fila A"<<endl;
                }
