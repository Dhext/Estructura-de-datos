#include <ctime>
#include <cstdlib>
#include <iostream>
void rellenar(int []);
int main()
{
    int Array[21];
    int Arrayb[21];
    int Array2[3][3];
    int Array3[3][3];
    int Arrayr[3][3];
    int i=0,aux=0,res=0,may=0,menor=100,num=0,rest;
    srand(time(0));
    std::cout<<"promedio, menor y mayor  1"<<std::endl<<"suma, resta y multiplicacion 3"<<std::endl<<"reubicacion  4"<<std::endl<<"% de comparacion 5"<<std::endl<<"menor a 25 y mayor igual  6"<<std::endl;
    std::cin>> i;
    switch(i)
    {
    case 1:
        rellenar(Array);
        for(int a=1; a<=21; a++)
        {
            if (a==1)
            {
                aux = Array[a];
            }
            aux = Array[a]+aux;
            if(may <= Array[a])
            {
                may =Array[a];
            }
            if(menor >= Array[a])
            {
                menor=Array[a];
            }
        }
        res=aux/20;
        std::cout<<"el promedio es "<<res<<std::endl<<"El numero mayor es "<<may<<std::endl<<"El numero menor es "<<menor<<std::endl;
        break;
    case 3:
        //-----------------------------------------------------------llenado---------------------------------------------------------------
        for (int x = 1; x <= 3; x++)
        {
            for (int t = 1; t <= 3; t++ )
            {
                Array3[x][t] = rand()%99;
                Array2[x][t] = rand()%99;
            }
        }

        for (int x = 1; x <= 3; x++)
        {
            for (int t = 1; t <= 3; t++ )
            {
                std::cout<<Array2[x][t]<<" ";
            }
            std::cout<<std::endl;
        }
        std::cout<<std::endl;

        for (int x = 1; x <= 3; x++)
        {
            for (int t = 1; t <= 3; t++ )
            {
                std::cout<<Array3[x][t]<<" ";
            }
            std::cout<<std::endl;
        }
        std::cout<<std::endl;
        //-----------------------------------------------------------------------------------------------------------------------------
        int m;
        std::cout<<"1 suma"<<std::endl<<"2 resta"<<std::endl<<"3 multiplicacion"<<std::endl;
        std::cin>>m;
        switch (m)
        {

        case 1:
            for (int z = 1; z <= 3 ; ++z)
            {
                for (int l = 1; l <=3 ; ++l)
                {

                    Arrayr[z][l]=Array2[z][l] + Array3[z][l];
                    std::cout<<Arrayr[z][l]<<"  ";
                }
                std::cout<<std::endl;
            }
            break;
        case 2:
            for (int z = 1; z <= 3 ; ++z)
            {
                for (int l = 1; l <=3 ; ++l)
                {

                    Arrayr[z][l]=unsigned(Array2[z][l]-Array3[z][l]);
                    std::cout<<Arrayr[z][l]<<"  ";
                }
                std::cout<<std::endl;
            }
            break;
        case 3:
            for (int z = 1; z <= 3 ; ++z)
            {
                for (int l = 1; l <=3 ; ++l)
                {
                    Arrayr[z][l]=Array2[z][l]*Array3[z][l];
                    std::cout<<Arrayr[z][l]<<"  ";
                }
                std::cout<<std::endl;
            }
            break;
        }
        break;
    case 4:
        rellenar(Array);
        int aux1;
        for(int x=1; x<=21; x++)
        {
            aux1=Array[x];
            Array[x]=Array[x+1];
            Array[x+1]=aux1;
            std::cout<<Array[x]<<" ";
        }
        std::cout<<std::endl;
        break;
    case 5:
        rellenar(Array);
        rellenar(Arrayb);
        for (int y=1; y<=21; y++)
        {
            for(int x=1; x<=21; x++)
            {
                if(Array[x]==Arrayb[y])
                {
                    num++;
                }
            }
        }
        rest=(num*100)/40;
        std::cout<<"el % de comparacion es: "<<rest<<"%"<<std::endl;
        break;
    case 6:
        for(int x=1; x<=20; x++)
        {
            std::cout<<"numero "<<x<<" ";
            std::cin>>Array[x];
            if(Array[x]<=50)
            {
                std::cout<<std::endl;
            }
            else
            {
                do
                {
                    std::cout<<"intente de nuevo "<<" ";
                    std::cin>>Array[x];
                }
                while(Array[x]>51);
            }
        }
        std::cout<<"Mayores o iguales a 25"<<std::endl;
        for(int x=1; x<=20; x++)
        {
            if(Array[x]>=25)
            {
                std::cout<<Array[x]<<" ";
            }
        }
        std::cout<<std::endl;
        std::cout<<"menores a 25 "<<std::endl;
        for(int x=1; x<=20; x++)
        {
            if(Array[x]<=25)
            {
                std::cout<<Array[x]<<" ";
            }
        }
        std::cout<<std::endl;
        break;
    }
    return 0;
}

void rellenar(int as[])
{

    for(int x=1; x<=21; x++)
    {
        as[x]=rand()%100;
        std::cout<<as[x]<<" ";
    }
    std::cout<<std::endl;
}
