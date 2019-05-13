#include <iostream>
#include <cstdio>
using namespace std;

int factorial(int);
int fibona(int);
void impar(int[],int);
int euclides(int,int);
int akerm(int,int);
int hanoi(int,int,int,int);
int ars(int [],int);
void pali(char [],int,int);
int main(){
    char* c;
    int s;
    int* a;
    int opc,aux;
    int eu1,eu2,d;
    cout<< "recursividad"<<endl;
    cout<<" 1 factorial  "<<endl<<" 2 fibonacci "<<endl<<" 3 invertir  "<<endl<<" 4 euclides "<<endl<<" 5 akerman "<<endl<<" 6 hanoi"<<endl<<" 7 suma de arreglos "<<endl;
    cin>>opc;
    switch(opc){
        case 1:
            cout<<"limite del factor"<<endl;
            cin>>aux;
            cout<<factorial(aux);
            break;
        case 2:
            cout<<"Fibonacci"<<endl;
            cin>>aux;
            cout<<fibona(aux);
            break;
        case 3:
            cout<<"Tamaño del arreglo"<<endl;
            cin>>s;
            a = new int[s];
            cout<<"ingresa un arreglo"<<endl;
            for(int i=1;i<=s;i++){
                cout<<"Valor "<<i<<" : ";
                cin>>a[i];
            }
            impar(a,s);
            delete [] a;
            break;
        case 4:
            cout<<"Ingresa M:"<<endl;
            cin>>eu1;
            cout<<"Ingresa N:"<<endl;
            cin>>eu2;
            cout<<"Euclides : "<<euclides(eu1,eu2)<<endl;
            break;
        case 5:
            cout<<"Ingresa M:"<<endl;
            cin>>eu1;
            cout<<"Ingresa N:"<<endl;
            cin>>eu2;
            cout<<"akerman: "<<akerm(eu1,eu2);
            break;
        case 6:
            cout<<"Origen"<<endl;
            cin>>eu1;
            cout<<"Destino"<<endl;
            cin>>eu2;
            cout<<"Numero de discos"<<endl;
            cin>>aux;
            cout<<"torre auxiliar"<<endl;
            cin>>d;
            hanoi(aux,eu1,eu2,d);
            break;
        case 7:
            cout<<"Tamaño del arreglo"<<endl;
            cin>>s;
             a = new int[s];
            cout<<"ingresa un arreglo"<<endl;
            for(int i=1;i<=s;i++){
                cout<<"Valor "<<i<<" : ";
                cin>>a[i];
            }
            cout<<"el valor de la  suma es :"<<ars(a,s)<<endl;
            break;
        case 8:
            cout<<"Tamaño de la palabra"<<endl;
            cin>>s;
            c=new char[s];
            cout<<"ingrese la cadena"<<endl;
            cin>>c;
            cout<<"Ingrese el inicio"<<endl;
            cin>>eu1;
            pali(c,s-1,eu1);
            break;
        }

    return 0;
}

int factorial(int n){
    if(n==0){
        return 1;
    }else if(n>-1){
        n=n*factorial(n-1);
    }
    return n;
}

int fibona(int n){
    int fibo;
    if((n==0)||(n==1)){
        fibo=n;

    }else{
        fibo=fibona(n-1)+fibona(n-2);
    }
    return fibo;
}

void impar(int A[],int N){
    if(N!=0){
        cout<<A[N]<<" ";
        impar(A,N-1);
        cout<<endl;
    }
}

int euclides(int m,int n){
    int eu;
    if(n==0){
        eu = m;
    }else{
        eu=euclides(n,m%n);
    }
        return eu;
}

int akerm(int m,int n){
    int ak;
    if (m==0){
        ak=n+1;
    }else{
        if(n==0){
            ak=akerm(m-1,1);
        }else{
            ak=akerm(m-1,akerm(m,n-1));
        }
    }
    return ak;
}

int hanoi(int n,int o,int d,int aux){
    if (n==1){
        cout<<o<<" a "<< d<<endl;
    }else{
        hanoi(n-1,o,aux,d);
        cout<<o<<" a "<<d<<endl;
        hanoi(n-1,aux,d,o);
    }
}

int ars(int A[],int N){
    int sumar=0;
    if (N==0){
        return 0;
    }else{
        sumar=A[N]+ars(A,N-1);
    }
    return sumar;
}

void pali(char A[],int N,int C){
    if(A[N]!=A[C]){
        cout<< "0";
    }else if(N>=C){
        pali(A,N-1,C+1);
        cout<< "1";
    }

}
