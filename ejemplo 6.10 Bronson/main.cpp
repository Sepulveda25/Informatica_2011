#include <cstdlib>
#include <iostream>

using namespace std;

void intercambio (double&,double&);


int main(int argc, char *argv[])
{
    double prinum=1.46, segnum=2.87;
    
     cout<<"El valor de prinum es: "<<prinum<<"\n";
     cout<<"El valor de segnum es: "<<segnum<<"\n";
     
     intercambio (prinum,segnum);
     
     cout<<"Ahora el nuevo valor de prinum es: "<<prinum<<"\n";
     cout<<"Ahora el nuevo valor de segnum es: "<<segnum<<"\n";
     
     
      cin.ignore(2);   
    //system("PAUSE");
    return EXIT_SUCCESS;
}

void intercambio (double& num1,double& num2)
{   double temp;
    
    temp=num1;
    num1=num2;
    num2=temp;
    
    return;

}
