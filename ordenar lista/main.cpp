#include <cstdlib>
#include <iostream>

using namespace std;



int main(int argc, char *argv[])
{
    int lista[5]={12,6,8,13,45}, numsup, pos,i,k;
    
    for(k=0;k<5;k++)
    {    
        numsup=lista[k];
        for (i=k;i<5;i++)
        {   
            if (numsup<lista[i])
            {   
                numsup=lista[i];
                pos=i;
            }
        }    
        lista[pos]=lista[k];
        lista[k]=numsup;
    }
    
    for (i=0;i<5;i++)
        {   
            cout<<"\n"<<lista[i]<<"\n";
        }   
    
    cin.ignore(2);
    return EXIT_SUCCESS;
}

