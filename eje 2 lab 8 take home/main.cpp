#include <cstdlib>
#include <iostream>

using namespace std;
const int tam=100;

int main(int argc, char *argv[])
{
    int n, i,p=0,a[tam][tam],j;
    cout<<"Ingrese n: ";
    cin>>n;
    for (i=0;i<n;i++)
    for (j=0;j<=n;j++)
    a[i][j]=i;
    for (i=0;i<n;i=i+2)
    for (j=1;j<n;j=j+2)
    p+=a[i][j];
    cout<<p;
    cin.ignore(2);
    return EXIT_SUCCESS;
}
