#include <cstdio>
#include <iostream>
#include <time.h>
#include <cstdlib>
void ordena(int [],int,int);

using namespace std;

int main(){
    srand(time(NULL));
    int n;
    cout<<"Tamaño del arreglo"<<endl;
    cin>>n;
    int v[n];
    for(int i=0;i<n;i++){
        v[i] = rand()%1000;
        cout<<v[i]<<" ";
    }
    cout<<endl;
    ordena(v,0,n-1);
    cout<<"arreglo ordenando"<<endl;
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}


void ordena( int vect[], int izq, int der ){
            int i = 0, j = 0;
            int x = 0, aux = 0;
            i = izq;
            j = der;
            x = vect [ (izq + der) /2 ];
            do{
                while( (vect[i] < x) && (j <= der) ){
                       i++;}
                while( (x < vect[j]) && (j > izq) ){
                       j--;}
                if( i <= j ){
                    aux = vect[i];
                    vect[i] = vect[j];
                    vect[j] = aux;
                    i++;  j--;
                }
            }while( i <= j );
            if( izq < j )
                ordena( vect, izq, j );
            if( i < der )
                ordena( vect, i, der );
        }
