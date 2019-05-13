
#include <stdio.h>
#include <stdlib.h>

void menu();
int busca_secuencial_ordenado(int);
void inserta_ordenado(int);
void elimina_ordenado(int);
void modifica_ordenado(int,int);
void mostrar_arreglo();
int vectore[100],n=0,num=0,num2=0,res=0;

int main()
{
   do{
   menu();   scanf("%d",&res);
   system("clear");
   switch(res)
   {
        case 1:
            printf("\n\n\tIngrese el valor que desea ingresar al arreglo: ");
            scanf("%d",&num);

            inserta_ordenado(num);
            system("cls");
            break;
        case 2:
            printf("\n\n\tIngresa el valor a eliminar: ");
            scanf("%d",&num);

            elimina_ordenado(num);
            break;
        case 3:
            printf("Ingresa un valor a remplazar: ");
            scanf("%d",&num);

            printf("Ingresa el nuevo elemento: ");
            scanf("%d",&num2);

            modifica_ordenado(num,num2);
            break;
        case 4:
            mostrar_arreglo();
            system("clear");
            break;
        case 5:
            exit(0);
            break;
        default:
        printf("Insertaste un valor incorrecto\n");
        exit(0);
   }
   }while(res!=5);


 return 0;
}

void menu(){

    printf("        \t\n\nARREGLOS UNIDIMENCIONALES ORDENADOS    \n");
    printf("\n|1.-Inserción.                                   |");
    printf("\n|2.-Eliminación                                  |");
    printf("\n|3.-Modifición                                   |");
    printf("\n|4.-Visualizar                                   |");
    printf("\n|5.-Salir                                        |");
    printf("\n\n\nIngrese una opcion: ");
}

int busca_secuencial_ordenado(int x){

    int i=0;

    while(i<=n && vectore[i]<x){
        i++;
    }

    if((i>=n) || (vectore[i]>x))
        return -i;
        else
         return  i;
}

void inserta_ordenado(int y){

    int pos=0,i=0;

    if(n==0){
        vectore[n]=num;
        //vectore[n]=y;
        n++;
    }else{
        if(n<100){
        pos = busca_secuencial_ordenado(y);

        if(pos>0){
            printf("El elemento ya existe.");
        }else {
            n++;
            pos=pos*(-1);
            for(i=n; i>=pos+1; i--){
                vectore[i]=vectore[i-1];
            }
                    vectore[pos]=y;
        }
    }else{
        printf("No hay espacio en el arreglo.");
        }
    }
}

void mostrar_arreglo(){

    int i=0;
    printf("Vector: ");
    if(n==0){
        printf("El arreglo esta vacio..."); system("clear");}
        else
            for(i=0; i<n; i++){
                printf(" [%d] ",vectore[i]);
    }

}

void elimina_ordenado(int x){
    int pos=0,i=0;

    if(n>0){
        pos=busca_secuencial_ordenado(x);

        if(pos<0){
            printf("El elemento no existe.");
        }else{
            n--;
        for(i=pos; i<n; i++)
            {
            vectore[i]=vectore[i+1];
            }
        }
    }else{
        printf("El arreglo esta vacio.");
    }

}

void modifica_ordenado(int x, int y){

    int i=0,pos=0;

    if(n>0){
        pos=busca_secuencial_ordenado(x);

        if(pos<0){
            printf("El elemento no existe.");
        }else{
            elimina_ordenado(x);

            inserta_ordenado(y);
        }
    }else{
        printf("El arreglo esta vacio...");
    }
}

