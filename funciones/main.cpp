#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    void max(int,int);
    
    int n1,n2;
    
    cout<<"ingrese 2 numeros\n";
    cin>>n1;
    cout<<"ok el segundo...\n";
    cin>>n2;
    max (n1,n2);
    
    system("PAUSE>null");
    return EXIT_SUCCESS;
}


void max(int pri,int seg)
{
    if (pri>seg)
    {cout<<"El numero mayor es el: "<<pri;}
    else
    {cout<<"El numero mayor es el: "<<seg;}
    
    return;

} 
