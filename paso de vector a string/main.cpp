#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{ 
    
    string dato;
    int n=0;
    char caracteres[10],comp;
    
    getline(cin,dato,'.');
    
    cout<<dato.size()<<"\n"<<dato[10]<<"\n";
 
    for(n=0;n<dato.size();n=n+2)
    {
        caracteres[n/2]=dato[n];
    }
 
    for(n=0;n<(dato.size()/2);n++)
    {
        cout<<caracteres[n];
    }
 
                                        //VER
 /*   while ('.'!=comp)
    {
        n++;
        if (n>=10)
        {   cout<<"Se supero el limite de caracteres"<<"\n";
            break;
        }
        caracteres[n];
        cin.get(comp);
        cin.ignore();//evita la entrada "fantasma" de \n
    }
    cout<<n<<"\n";
    dato=caracteres;
    cout<<dato;
    */system("PAUSE");
    return EXIT_SUCCESS;
}
