#include <cstdlib>
#include <iostream>

using namespace std;

int rango (int,int,int,int[]);
const int tam=100;

int main(int argc, char *argv[])
{
    
    int i,a,lista[tam];
    cout<<"Ingrese a: ";
    cin>>a;
    i=rango(a,a*2,2,lista)-2;
    while (i>0){
        lista[i]=i+1;
        i-=3;
    }
    cout<<lista[4];
    
    cin.ignore(2);
    return EXIT_SUCCESS;
}
int rango (int a,int b,int d,int arreglo[])
{
    int largo=0;
    for (int i=a;i<b;i=i+d){
    arreglo[largo]=i;
    largo++;
    }
    return largo;
}
