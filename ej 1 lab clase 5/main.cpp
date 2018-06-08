#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int edad,suma_edad=0,contador=0;
    
    cout<<"Ingrese las edades:\n";
    do
    {
    cin>>edad;
    
    if (edad!=0)
     {   
        if ((15<=edad)&&(edad<=90))
            {
            contador++;
            suma_edad=suma_edad + edad;
            }
        else
            {
            cout<<"\nLa edad que ingreso no se encuentra entre 15 y 90\n";
            }
     
     }  
     
    }
    while(edad!=0);
    
    cout<<"\nPromedio de las edades: "<<suma_edad/contador;
    cout<<"\nTotal de afiliados: "<<contador<<"\n";
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
