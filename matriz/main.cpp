#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int ma[4][4];
    int f,c;
    cout<<"ingrese 16 numeros \n";
    
    for(f=0;f<4;f++)
    {
    for (c=0;c<4;c++)
    {
      cin>>ma[f][c];
      //cout<<c<<a;
    }
    }   
    
    for (f=0;f<4;f++)
    {
        for (c=0;c<4;c++)
        {
        cout<<ma[f][c]<<"  ";
        }
    cout<<"\n";
    }
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
