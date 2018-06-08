#include <cstdlib>
#include <iostream>

using namespace std;
void encontrarMax (int, int);

int main()
{ 
    int primernum, segundonum;
    cout<< "\nIngrese un numero: ";
    cin>> primernum;
    cout<< " Ahora ingrese el segundo numero: ";
    cin>> segundonum;
    
    encontrarMax (primernum,segundonum); //aca se llama a la funcion
    
    system("PAUSE>null");
    return EXIT_SUCCESS;
}

void encontrarMax(int x,int y)
{
    int numMax;

    if (x>=y)
    {numMax=x;}
    else
    {numMax=y;}
    
    cout<< "El el munero mas grande es el: "<< numMax;
    
    return;
        
    
}
