#include <cstdlib>
#include <iostream>

using namespace std;

double calculo_coeficiente(double[2][2],int,int);


double calculo_coeficiente(double elem[2][2],int f,int c)
{
    double coef;
     int j;
    int k;

  for (j=0;j<2;j++)
    { 
       for (k=0;k<2;k++)
       { cout<<elem[j][k]<<"\n";}
    
    }

return coef;
}


int main(int argc, char *argv[])
{   
    int fila;
    int columna;
    int n;
    int i;
    double coef;
    
    double datos [2][2];
    
    for (n=0;n<2;n++)
    { 
       for (i=0;i<2;i++)
       { cin>>datos[n][i];}
    
    }
    
    for (n=0;n<2;n++)
    { 
       for (i=0;i<2;i++)
       { cout<<datos[i][n]<<"\n";}
    
    }
    
    coef = calculo_coeficiente(datos,2,1);
    
    
    system("PAUSE>null");
    return EXIT_SUCCESS;
}
