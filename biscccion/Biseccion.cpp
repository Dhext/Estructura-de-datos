#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;
int flag;
int ex1, ex2,ex3,ex4,i=0;
int cof1,cof2,cof3,cof4;
double opera(double , double, double);
int main() {
    int opc;
    double x,y,c,pos=10000000,neg=-10000000,xr,yr,cr,valorf;
    cout<<"Metodo de bisecion"<<endl<<"1 x"<<endl<<"2 cuadratica"<<endl<<"3 cubica"<<endl;
    cin>>opc;
    switch(opc){
        //---------------------------------------------------------------------------------------------------------------------------
        case 1:
            flag=1;
            cout <<"exponente de x "<<endl;
            cin>>ex1;
            cout<<"valor de variable "<<endl;
            cin >>valorf;
            cout<<"intervalo superior"<<endl;
            cin>>x;
            cout<<"intervalo inferior"<<endl;
            cin>>y;
            xr= (pow(x,ex1)) + valorf;
            yr= (pow(y,ex1)) + valorf;
            cr= (pow(0,ex1)) + valorf;
            cout<<"---------------------------------------------------------------------------------------------------"<<endl;
            cout<<" Ecuacion evaluada "<<"x^"<<ex1<<" + "<<valorf<<endl;
            cout<<"---------------------------------------------------------------------------------------------------"<<endl;
            //---------------------------------------------------------------------------------------------------------------------------
           if(xr<yr&&xr>0 || xr<cr&&xr>0 || yr<0&&cr<0&&xr>0){
                pos=x;
             }
             if(xr>cr&&cr>0 || cr<yr&&cr>0 || yr<0&&cr>0&&xr<0){
                pos=0;
             }
             if(cr>yr&&yr>0 || xr>yr&&yr>0 || yr>0&&cr<0&&xr<0){
                pos=y;
             }

              if(xr>yr&&xr<0 || xr>cr&&xr<0 || xr<0&&cr>0&&yr>0){
                neg=x;
             }
             if(xr<cr&&cr<0 || cr>yr&&cr<0 || cr<0&&yr>0&&xr>0){
                neg=0;
             }
             if(cr<yr&&yr<0 || xr<yr&&yr<0 || yr<0&&cr>0&&xr>0){
                neg=y;
             }


            cout << " pos " <<pos<<" neg "<<neg<<" Resultado "<<endl;
            cout<<"---------------------------------------------------------------------------------------------------"<<endl;
            opera(pos,neg,valorf);
            break;
            //------------------------------
        case 2:
            flag=2;
            cout <<"exponente primera x "<<endl;
            cin>>ex1;
            cout<<"exponente segunda x "<<endl;
            cin>>ex2;
            cout<<"valor de variable "<<endl;
            cin >>valorf;
            cout<<"intervalo superior"<<endl;
            cin>>x;
            cout<<"intervalo inferior"<<endl;
            cin>>y;
            xr= (pow(x,ex1)) + (pow(x,ex2)) + valorf;
            yr= (pow(y,ex1)) + (pow(y,ex2)) + valorf;
            cr= (pow(0,ex1)) + (pow(0,ex2)) + valorf;
            cout <<xr<<" "<<yr<<" "<<cr<<endl;
            cout<<"---------------------------------------------------------------------------------------------------"<<endl;
            cout<<" Ecuacion evaluada "<<"x^"<<ex1<<" + "<<"x^"<<ex2<<" + "<<valorf<<endl;
            cout<<"---------------------------------------------------------------------------------------------------"<<endl;
            //---------------------------------------------------------------------------------------------------------------------------
             if(xr<yr&&xr>0 || xr<cr&&xr>0 || yr<0&&cr<0&&xr>0){
                pos=x;
             }
             if(xr>cr&&cr>0 || cr<yr&&cr>0 || yr<0&&cr>0&&xr<0){
                pos=0;
             }
             if(cr>yr&&yr>0 || xr>yr&&yr>0 || yr>0&&cr<0&&xr<0){
                pos=y;
             }

              if(xr>yr&&xr<0 || xr>cr&&xr<0 || xr<0&&cr>0&&yr>0){
                neg=x;
             }
             if(xr<cr&&cr<0 || cr>yr&&cr<0 || cr<0&&yr>0&&xr>0){
                neg=0;
             }
             if(cr<yr&&yr<0 || xr<yr&&yr<0 || yr<0&&cr>0&&xr>0){
                neg=y;
             }

            cout << " pos " <<pos<<" neg "<<neg<<" Resultado "<<endl;
            cout<<"---------------------------------------------------------------------------------------------------"<<endl;
            opera(pos,neg,valorf);
            break;
            //---------------------------------------------------------------------------------------------------------------------------
        case 3:
            flag=3;
            cout <<"coeficiente primera x"<<endl;
            cin>>cof1;
            cout <<"exponente primera x "<<endl;
            cin>>ex1;
            cout <<"coeficiente segundo x"<<endl;
            cin>>cof2;
            cout<<"exponente segunda x "<<endl;
            cin>>ex2;
            cout <<"coeficiente tercera x"<<endl;
            cin>>cof3;
            cout<<"exponente tercera x "<<endl;
            cin>>ex3;
            cout<<"valor de variable "<<endl;
            cin >>valorf;
            cout<<"intervalo superior"<<endl;
            cin>>x;
            cout<<"intervalo inferior"<<endl;
            cin>>y;
            xr= pow(x,ex1) + pow(x,ex2) + pow(x,ex3) + valorf;
            cr= pow(0,ex1) + pow(0,ex2) + pow(0,ex3) + valorf;
            yr= pow(y,ex1) + pow(y,ex2) + pow(y,ex3) + valorf;
            cout<<"---------------------------------------------------------------------------------------------------"<<endl;
            cout<<" Ecuacion evaluada "<<"x^"<<ex1<<" + "<<"x^"<<ex2<<" + "<<"x^"<<ex3<<" + "<<valorf<<endl;
            cout<<"---------------------------------------------------------------------------------------------------"<<endl;
            //---------------------------------------------------------------------------------------------------------------------------
           if(xr<yr&&xr>0 || xr<cr&&xr>0 || yr<0&&cr<0&&xr>0){
                pos=x;
             }
             if(xr>cr&&cr>0 || cr<yr&&cr>0 || yr<0&&cr>0&&xr<0){
                pos=0;
             }
             if(cr>yr&&yr>0 || xr>yr&&yr>0 || yr>0&&cr<0&&xr<0){
                pos=y;
             }

              if(xr>yr&&xr<0 || xr>cr&&xr<0 || xr<0&&cr>0&&yr>0){
                neg=x;
             }
             if(xr<cr&&cr<0 || cr>yr&&cr<0 || cr<0&&yr>0&&xr>0){
                neg=0;
             }
             if(cr<yr&&yr<0 || xr<yr&&yr<0 || yr<0&&cr>0&&xr>0){
                neg=y;
             }

            cout << " pos " <<pos<<" neg "<<neg<<" Resultado "<<endl;
            cout<<"---------------------------------------------------------------------------------------------------"<<endl;
            opera(pos,neg,valorf);
            break;
            //---------------------------------------------------------------------------------------------------------------------------
    }
    system("pause");
    return 0;
}

double opera(double poss, double negs, double v){
    double res,aux,aux2,aux3;
    //---------------------------------------------------------------------------------------------------------------------------
    if(flag==2){
        do{
            i++;
            res=(poss + negs)/2;
            aux= pow(res,ex1) + pow(res,ex2) + v;
            aux2= pow(poss,ex1) + pow(poss,ex2) + v;
            aux3= pow(negs,ex1) + pow(negs,ex2) + v;
            cout << " Positiva " <<poss<<" Negativa "<<negs<<" Nueva Raiz "<<res <<" Resultado "<<aux<<endl;
            if (aux>0&&aux<aux2){
                poss=res;
            }else if(aux<0&&aux>aux3){
                negs=res;
            }

            cout<<"---------------------------------------------------------------------------------------------------"<<endl;
           if (i==1000){
                cout<<"Operacion infinita";
                aux=0.0001;
            }
        }while(fabs(aux)>0.001);
    }
    //---------------------------------------------------------------------------------------------------------------------------
    if(flag==3){
        do{
            i++;
            res=(poss + negs)/2;
            aux= pow(res,ex1) + pow(res,ex2) + pow(res,ex3) + v;
            aux2= pow(poss,ex1) + pow(poss,ex2) + pow(poss,ex3) + v;
            aux3= pow(negs,ex1) + pow(negs,ex2) + pow(negs,ex3) + v;
            cout << " Positiva " <<poss<<" Negativa "<<negs<<" Nueva Raiz "<<res <<" Resultado "<<aux<<endl;
            if (aux>0&&aux<aux2){
                poss=res;
            }else if(aux<0&&aux>aux3){
                negs=res;
            }
            cout<<"---------------------------------------------------------------------------------------------------"<<endl;
            if (i==1000){
                cout<<"Operacion infinita";
                aux=0.0001;
            }
        }while(fabs(aux)>0.001);
    }
    if(flag==1){
        do{
            i++;
            res=(poss + negs)/2;
            aux= pow(res,ex1) + v;
            aux2= pow(poss,ex1) + v;
            aux3= pow(negs,ex1) +v;
            cout << " Positiva " <<poss<<" Negativa "<<negs<<" Nueva Raiz "<<res <<" Resultado "<<aux<<endl;
            if (aux>0&&aux<aux2){
                poss=res;
            }else if(aux<0&&aux>aux3){
                negs=res;
            }else{
                cout<<"error de raizes";
                return 0;
            }
            cout<<"---------------------------------------------------------------------------------------------------"<<endl;
            if (i==1000){
                cout<<"Operacion infinita"<<endl;
                aux=0.0001;
            }
        }while(fabs(aux)>0.001);
    }
    cout<<endl<<"Numero de iteraciones "<<i<<endl;

}
