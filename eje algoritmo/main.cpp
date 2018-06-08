#include <cstdlib>
#include <iostream>

using namespace std;
const int MAX=50;

int main(int argc, char *argv[])
{
    int f,c,fmax,cmax,matriz[MAX][MAX];
    
    
    cout<<"Ingrese la cantidad de filas de la matriz: ";
    cin>>fmax;

    cout<<"Ingrese la cantidad de columnas de la matriz: ";
    cin>>cmax;
    
    cout<<fmax<<cmax; 
    for (f=0;ffmax;f++)
    {
        for (c=0;c<cmax;c++)
        {
            //cin>>matriz[f][c];
            cout<<"paso";
        }
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}
