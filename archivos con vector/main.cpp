#include <cstdlib>
#include <iostream>

using namespace std;

struct personas
{char nom[20];
char apel[20];
int edad;
char sex;
};

int main(int argc, char *argv[])
{
    int i;
    
    personas dat[4];
    
    for (i=1;i<5;i++)
    {    
        cin>>dat[i].nom;
        cin>>dat[i].apel;
        cin>>dat[i].edad;
        cin>>dat[i].sex;
    }   
    
    for (i=1;i<5;i++)
    { 
        cout<<dat[i].nom;
        cout<<dat[i].apel;
        cout<<dat[i].edad;
        cout<<dat[i].sex;
           
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}
