#include <cstdlib>
#include <iostream>
#include <cstdlib>
#define max 10

typedef char tipodato;

struct Pila{
    int tope;
    tipodato Elementos[max];
};

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
    x = NULL;
    if(Vacio(P)==true){
        std::cout<<"desboradmiento de pila"<<std::endl;
    }else{
        x=P.Elementos[P.tope];
        P.tope=P.tope-1;
    }
    return x;
}



int main(){
    char * cadena_dinamica = NULL;
    int cantidad = 0;
    int opc;
    tipodato e,x;
    TipoPila A;
    inicializar(A);
    do{
    std::cout<<"1 insertar"<<std::endl<<"2 imprimir"<<std::endl;
    std::cin>>opc;
    switch(opc){
        case 1:
            std::cout<< "Por favor digite el tamaño de la frase :"<<std::endl();
            std::cin>>cantidad;
            cadena_dinamica = new char[cantidad];
            std::cout<<"ingrese Frase"<<std::endl;
            std::cin>>cadena_dinamica;
            for(int n=0;n<cantidad;n++) inseta(A,cadena_dinamica[n]);
            break;
        case 2:
            for(int i=A.tope+1;i>0;i--){
                std::cout<<quita(A)<<" ";
            }
            std::cout<<std::endl;
            break;
        case 3:
            delete [] cadena_dinamica; // liberamos la memoria de la cadena
            cadena_dinamica = NULL;
            return 0;
            break;
    }
    }while(true);
    return 0;
}
