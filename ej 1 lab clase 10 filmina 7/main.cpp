#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{   int n_usuario[2][3],f,c,suma[2][3];
    
    for (f=0;f<2;f++)
    {
        for (c=0;c<3;c++)
        {
            cin>>n_usuario[f][c];
        }
    }
    int n_fijo[2][3]={{24,52,77},
                      {16,19,59}};
    
    for (f=0;f<2;f++)
    {
        cout<<"\n";
        for (c=0;c<3;c++)
        {
            cout<<n_fijo[f][c]<<"    ";
        }
    }
    cout<<"\n\n";
    for (f=0;f<2;f++)
    {
        cout<<"\n";
        for (c=0;c<3;c++)
        {
            suma[f][c]=n_usuario[f][c]+n_fijo[f][c];
            cout<<n_usuario[f][c]<<"    ";
        }
    }
    cout<<"\n\n";
    for (f=0;f<2;f++)
    {
        cout<<"\n";
        for (c=0;c<3;c++)
        {
            cout<<suma[f][c]<<"    ";
        }
    }
    cout<<"\n\n";
    cin.ignore(2);
    //system("PAUSE");
    return EXIT_SUCCESS;
}
