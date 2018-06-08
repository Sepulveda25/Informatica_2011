#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int f,c,nummax,posc,posf, n[4][5]={16,22,99,4,18,
                                        -258,4,101,5,98,
                                        105,6,15,2,45,
                                        33,88,72,16,3};
    
    for(f=0;f<4;f++)
    {   for (c=0;c<5;c++)
        {
            if ((f==0)&&(c==0))
            {nummax=n[f][c];}
            
            if (nummax<n[f][c])
            {
                nummax=n[f][c];
                posc=c+1;
                posf=f+1;
            }
        }
    }
    
    cout<<"El valor maximo es: "<<nummax<<" y se encuentra en la fila "<<posf
    <<" y en la columna "<<posc<<"\n";
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
