#include <cstdlib>
#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;
    const int pi=3.1416;

int main(int argc, char *argv[])
{
    int f,c;
    double x;
    char imag[20][50];
    
    for(f=0;f<20;f++)
    {
        for(c=0;c<50;c++)
        {
            imag[f][c]='O';
            
        }
    }
    
    for(c=0;c<50;c++)
    {
        x=c;
        x=((x*pi)/180)*10;
        
        f=(-8)*sin(x)+10;
        
        imag[f][c]='F';
            
        
    }
    
    
    
    
    for(f=0;f<20;f++)//imprimo matriz imag
    {
        for(c=0;c<50;c++)
        {
        
            cout<<imag[f][c];
            
        }
    cout<<"\n";
    }
    cin.ignore(2);
    return EXIT_SUCCESS;
}
