#include <iostream>
#include <cstdlib>
using namespace std;
void insert(int []);
void delt(int[],int );
void mostrar(int[]);
void modifica(int[],int,int);
int N=0;

int main() {

    int opc,x,y;
    int V[9];
    for(int i=0;i<=10;i++){
        V[i]=0;
    }
    do {

        cout<<"1 insertar: "<<endl<<"2 eliminar "<<endl<< "3 mostrar"<<endl<<"4 modificar"<<endl;
        cin >> opc;
        switch (opc) {
            case 1:
                insert( V);
                system("cls");
                break;
            case 2:
                cout << "valor a eliminar"<<endl;
                cin >> x;
                delt(V, x);

                break;
            case 3:
                cout<<"Mostrar"<<endl;
                mostrar(V);
                break;
            case 4:
                cout<<"Valor a modificar"<<endl;
                cin>>x;
                cout<<"Valor de modificacion"<<endl;
                cin>>y;
                modifica(V,x,y);
                break;
            case 0:
                return 0;
                break;
        }
        cout<<endl;
    }while (true);
}

void insert(int H[]){
    int s;
    if (N<10){
        cout<<"ingrese valor"<<endl;
        cin>>s;
        H[N]=s;
        N=N+1;

    } else{
        cout<<"no hay espacio"<<endl;
        system("pause");
    }
}
void mostrar(int H[10]){
    for(int i=0;i<=N;i++){
        cout<<H[i]<<" ";
    }
}
void delt(int H[10], int x){
    int s=0,k;
    while (s<=N && x != H[s]){
        s=s+1;
    }
    if(s>N){
        cout<<"valor no encontrado";
        system("pause");
    } else {
        for (k=s;k<=N-1;k++){
            H[k]=H[k+1];
        }
        N=N-1;
    }
}
void modifica(int H[10], int x,int y){
    int i=0;
    while (i<=N && x !=H[i]){
        i++;
    }
    if(i>N){
        cout<<"No se encotro el valor a cambiar"<<endl;
    }else{
        H[i]=y;
    }
}
