#include <cstdlib>
#include <iostream>
#include <cstdlib>
#include <math.h>
#define max 30

typedef int tipodato;

struct Pila{
    int tope;
    tipodato Elementos[max];
};
int b=0;
typedef struct Pila TipoPila;

void inicializar(TipoPila &P){
    P.tope=-1;
}

bool Vacio(TipoPila P){
   return(P.tope==-1);
}

bool pilallena(TipoPila P){
    if(P.tope==max-1){
        return true;
    }else{
        return false;
    }
}

void inseta(TipoPila &P, char dato){
    if(pilallena(P)==true){
        std::cout<<"pila llena";
    }else{
        P.tope++;
        P.Elementos[P.tope]=dato;
    }
}

tipodato quita(TipoPila &P){
    tipodato x;

    if(Vacio(P)==true){
        std::cout<<"desboradmiento de pila"<<std::endl;
    }else{
        x=P.Elementos[P.tope];
        P.tope=P.tope-1;
    }
    return x;
}



int main(){
    int opc=0,div,mod,cos,divisor=2,binario,bb=0,bs=0,s=0;
    tipodato e,x;
    TipoPila A;
    inicializar(A);
    do{
            std::cout<<"Valor a convertir"<<std::endl;
            std::cin>>div;
            while(div>=2){
                cos=div/divisor;
                mod=div%divisor;
                inseta(A,mod);
                div=cos;
            }
            if(div<2){
                inseta(A,1);
            }else
            inseta(A,mod);
            for(int i=A.tope+1;i>0;i--){
                    binario=quita(A);
                        if(binario==1){
                            std::cout<<std::endl<<"\t"<<binario;
                        }else{
                            std::cout<<std::endl<<"\t"<<binario;
                        }
                        s++;
                    }

            std::cout<<std::endl<<std::endl;
            system("pause");
            system("cls");
    }while(true);
    return 0;
}
