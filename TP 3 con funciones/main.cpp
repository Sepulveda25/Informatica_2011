#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;
///////////////////////////////////////////
//
// PRACTICO: 3
// APELLIDO: Sepúlveda
// NOMBRES: Federico
// MATRICULA: 35037929
// DNI: 35037929
// COMISION: 1.3
//
//////////////////////////////////////////



void buscarpalabra(char[10],char[10][10],int);

int main(int argc, char *argv[])
{
     string dato,sopadeletras;
    
    int n=0,j=0,ref=0;
    
    char B[10],A[10][10];
    
    
    cout<<"Ingrese 100 letras para armar la sopa de letras:\n";
    
    getline(cin,sopadeletras);
    cin.ignore();
     
    
    cout<<sopadeletras.size();
    
    for(n=0;n<10;n++)//paso cada caracter de sopadeletras al vector A (se eliminan los espacios)
    {
        for (j=0;j<10;j++)
        {   
            A[n][j]=sopadeletras[ref];
            ref=ref+2;
        }
    }
    

    cout<<"\nIngrese la palabra que desea buscar en la sopa de letras:\n";
    
    do
    {
        getline(cin,dato,'.');
        cin.ignore();
        if (dato.size()>=20)
        {
            system ("CLS");
            cout<<"La palabra que acaba de ingresar supera el numero de caracteres (>10)\n"
            << "Ingrese nuevamente la palabra que desea buscar:\n";
        }
    }
    while (dato.size()>=20);
    
    for(n=0;n<dato.size();n=n+2)//paso cada caracter de dato al vector B (se eliminan los espacios)
    {
        B[n/2]=dato[n];
    }
    
    buscarpalabra (B,A,dato.size());
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

void buscarpalabra (char B[],char A[][10],int tam)
{
    int f,c,z=0,x=0,veces=0;
    
     for(f=0;f<10;f++)//busqueda horizontal
    {
        for(c=0;c<10;c++)
        {
            if(A[f][c]==B[z])
            {
                z++;
                if(z==(tam/2))
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
                if(z==(tam/2))
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
                if(z==(tam/2))
                {veces++;}
            }
            else 
            {z=0;}
            
            f--;
        }
        z=0;
    }
    
    
    
     for (x=9;x>0;x--) //busqueda oblicua "/" ascendente de izquierda a derecha segunda parte
    {
        c=x;
        for (f=0;f>=x;f--)
        {
            if(A[f][c]==B[z])
            {
                z++;
                if(z==(tam/2))
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
                if(z==(tam/2))
                {veces++;}
            }
            else 
            {z=0;}   
            c++;
        
        }
        z=0;
    }
    
    for (x=9;x>=-1;x--) //busqueda oblicua "\" descendente de izquierda a derecha segunda parte
    {
        f=x;
        
        for (c=0;c<(9-x);c++)
        {
            if(A[f][c]==B[z])
            {
                z++;
                if(z==(tam/2))
                {veces++;}
            }
            else 
            {   z=0;}
            f++;
        
        }
        z=0; 
    }
    
    cout<<"\nLa palabra que ingreso se encuentra "<<veces
    <<" veces repetida en la sopa de letras.\n\n\n";
    return;
}

