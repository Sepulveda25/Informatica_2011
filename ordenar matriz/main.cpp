#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int ma[4][4],f,c,vaux[16],n=0,aux,aux2;
    
    for (f=0;f<4;f++)
    {
        for(c=0;c<4;c++)
        {
        cin>>ma[f][c];
        //cout<<f<<"  "<<c<<"\n";
        }
    }
    
    for (f=0;f<4;f++)
    {
        for (c=0;c<4;c++)
        {
            vaux[n]=ma[f][c];
            n++;
        }
        
    }        
    
    for(f=0;f<16;f++)
    {
        aux=vaux[f];
        for (c=f+1;c<16;c++)
            {
                if (aux>vaux[c])
                {
                aux=vaux[c];
                n=c;
                aux2=vaux[f];
                vaux[f]=aux;
                //n1=f;
                //max[f]=vaux[c];
                }
                //else
                //{max[f]=aux;}
             }
        vaux[n]=vaux[f];
        
    }
    
    
    for(c=0;c<16;c++)
    {   
        cout<<"\n"<<vaux[c]<<"\n";
    }
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
