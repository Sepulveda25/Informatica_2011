#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int n,uno=0,dos=0,tres=0,cuatro=0,cinco=0;
    
    cout<<"Ingrese numeros entre 1 y 5: \n";
    
    do
    {    cin>>n;
        if ((1<=n)&&(n<=5))
        {    switch(n)
            {  case 1:uno++; break;
                case 2:dos++; break;
                case 3:tres++; break;   
                case 4:cuatro++; break;
                case 5:cinco++; break;
            }      
        }
    }
    while((1<=n)&&(n<=5));
    
    cout<<"\nFrecuencia con la que se ingreso el numero 1: "<<uno<<" veces";
    cout<<"\nFrecuencia con la que se ingreso el numero 2: "<<dos<<" veces";
    cout<<"\nFrecuencia con la que se ingreso el numero 3: "<<tres<<" veces";
    cout<<"\nFrecuencia con la que se ingreso el numero 4: "<<cuatro<<" veces";
    cout<<"\nFrecuencia con la que se ingreso el numero 5: "<<cinco<<" veces"
    <<"\n";
       
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
