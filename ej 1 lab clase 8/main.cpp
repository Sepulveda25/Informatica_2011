#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

void calculo (double,char);

int main(int argc, char *argv[])
{   double num;
    char caracter;
    
    cout<<"Ingrese el un numero: ";
    cin>>num;
    
    cout<<"Ahora ingrese la operacion matematica que desea hacerle a este numero"
    <<"\nr: Calcular raiz cuadrada"
    <<"\nc: Elevar al cuadrado"
    <<"\na: Hacer ambas operaciones\n";
    
    cin>>caracter;
    
    
    calculo(num,caracter);
    
    
    
    cin.ignore(2);
    return EXIT_SUCCESS;
}

void calculo (double n,char c)
{
    double resultado;
    switch (c)
        {
        case 'r':
                if (0<=n)
                    {resultado=sqrt(n);
                    cout<<"La raiz cuadrada de "<<n<<" es= "<<resultado;}
                else
                    {cout<<"El numero ingresado es negativo";}
                break;    
        case'c':
               
                resultado=pow(n,2);
                cout<<n<<" elevado al cuadrado es= "<<resultado;
                break;
        case'a':  
            
                resultado=pow(n,2);
                cout<<n<<" elevado al cuadrado es= "<<resultado;    
                if (0<=n)
                {   resultado=sqrt(n);
                    cout<<"\nLa raiz cuadrada de "<<n<<" es= "<<resultado;}
                else
                    {cout<<"\nEl numero ingresado es negativo";}
                break;    
        default:
            cout<<"El caracter ingresado es invalido";
        }

return;
}
