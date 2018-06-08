#include <cstdlib>
#include <iostream>

using namespace std;

struct cliente 
{char nom[20];                    
char apel[20];
int edad;                    
char sexo;};

int main(int argc, char *argv[])
 {   
    cliente dat;
    
    cout<<"ingrese nombre:\n";
    cin>>dat.nom;
    cout<<"ingrese apellido:\n";
    cin>>dat.apel;
    cout<<"ingrese edad:\n";
    cin>>dat.edad;    
    cout<<"ingrese sexo:\n";
    cin>>dat.sexo;   
    
    cout<<"\n"<<dat.sexo<<"\n";
    cout<<dat.edad<<"\n";
    cout<<dat.apel<<"\n";
    cout<<dat.nom<<"\n";
    
    
    system("PAUSE>null");
    return EXIT_SUCCESS;
}
