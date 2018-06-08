#include <cstdlib>
#include <iostream>

using namespace std;

int encontrar(int,int);

int main(int argc, char *argv[])
{
    int valori=5,valorj=4;
    
    cout<<encontrar(valori,valorj);
    
    cin.ignore(2);
    return EXIT_SUCCESS;
}

int encontrar (int a,int n)
{
    int sale=0;
    if (a>=n){
        sale=0;
        for(int i=1;i<a;i++)
        sale+=i;
    }
    else{
        sale=1;
        for(int i=1;i<n;i++)
        sale*=i;
    }
    return sale;
}
