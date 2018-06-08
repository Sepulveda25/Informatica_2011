#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    string dato;
    
    int n=0,f,c,z=0,x=0,cantidad,veces=0;
    
    char B[10],A[][10]={'A','B','H','O','L','A','P','T','A','M',
                        'H','M','O','P','A','L','E','L','U','E',
                        'M','O','L','H','T','O','O','E','R','T',
                        'I','K','A','B','O','H','T','J','A','L',
                        'Y','H','D','H','I','L','E','H','J','V',
                        'B','A','O','I','O','U','O','A','I','E',
                        'L','O','T','L','M','L','F','G','H','J',
                        'U','H','U','L','A','M','O','A','V','X',
                        'Z','E','L','A','M','I','J','H','O','S',
                        'W','A','H','O','J','O','T','A','T','O'};
    
    do
        {getline(cin,dato,'.');}
    while (dato.size()>=20);
    
 
    for(n=0;n<dato.size();n=n+2)//paso cada caracter de dato al vector B (se eliminan los espacios)
    {
        B[n/2]=dato[n];
    }
    
    
     
     for(f=0;f<10;f++)//busqueda horizontal
    {
        for(c=0;c<10;c++)
        {
            if(A[f][c]==B[z])
            {
                z++;
                if(z==(dato.size()/2))
                {veces++;}
            }
            else 
            {z=0;}
        
        }
        z=0;
    }
    
    
    
    for(c=0;c<10;c++)//busqueda vertical
    {
        for(f=0;f<10;f++)
        {
            if(A[f][c]==B[z])
            {
                z++;
                if(z==(dato.size()/2))
                {veces++;}
            }
            else 
            {z=0;}
        
        }
        z=0;
    }
    
    
    for (x=0;x<10;x++) //busqueda oblicua "/" ascendente de izquierda a derecha primera parte
    {
        f=x;
        for (c=0;c<=x;c++)
        {
            if(A[f][c]==B[z])
            {
                z++;
                if(z==(dato.size()/2))
                {veces++;}
            }
            else 
            {z=0;}
            
            f--;
        }
        z=0;
    }
    
    
    cout<<veces;
    
     for (x=9;x>0;x--) //busqueda oblicua "/" ascendente de izquierda a derecha segunda parte
    {
        c=x;
        for (f=0;f>=x;f--)
        {
            if(A[f][c]==B[z])
            {
                z++;
                if(z==(dato.size()/2))
                {veces++;}
            }
            else 
            {z=0;}
            
            c++;
        }
        z=0;
    }
    
    for (x=9;x>=0;x--) //busqueda oblicua "\" descendente de izquierda a derecha primera parte
    {
        c=x;
        for (f=0;f<(9-x);f++)
        {
            if(A[f][c]==B[z])
            {
                z++;
                if(z==(dato.size()/2))
                {veces++;}
            }
            else 
            {z=0;}   
            c++;
        
        }
        z=0;
    }
    
    for (x=9;x>-1;x--) //busqueda oblicua "\" descendente de izquierda a derecha segunda parte
    {
        f=x;
        for (c=0;c<(9-x);c++)
        {
            if(A[f][c]==B[z])
            {
                z++;
                
                if(z==(dato.size()/2))
                {veces++;}
            }
            else 
            {   z=0;}
            f++;
        
        }
        z=0; 
    }

    system("PAUSE");
    return EXIT_SUCCESS;
}
