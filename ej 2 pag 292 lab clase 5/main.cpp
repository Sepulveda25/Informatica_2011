#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[])
{   int calif,conta=0;
    double prom,acumula=0;
    
    cout<<"Ingrese la calificacion: ";
    cin>>calif;
    
    while (calif!=999)
        {   
            system ("cls");
            cout<<"Ingrese la calificacion: ";
            
            if ((0<=calif)&&(calif<=100))
                {   
                    conta++;
                    acumula=acumula+calif;
                }
            else
                {
                    system ("cls");
                    cout<<"La calificacion que ingreso es invalida"
                    << "\nIngrese la calificacion nuevamente: ";
                }
            
            cin>>calif;
            
        
        }
    prom=acumula/conta;
    system ("cls");
    cout<<"Promedio de las calificaciones: "<<prom;
    cin.ignore(2);
    
    return EXIT_SUCCESS;
}
