#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
   int hola[12],i;
   
   cout<<"ingrese 10 numeros \n";
    for (i=0;i<13;i++)
    {
    cin>>hola[i];
    }
     for(i=0;i<13;i++)
     {
        cout<<hola[i]<<"  ";
     }
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
