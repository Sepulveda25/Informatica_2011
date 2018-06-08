#include <cstdlib>
#include <iostream>

using namespace std;

void busqueda (int[10][10],int [3][3]);

int main(int argc, char *argv[])
{
    int B[3][3]={152,4,97,161,17,176,98,141,164}, A[][10]={1,256,1,188,170,67,209,1,231,231,
                                                            256, 256, 256, 104, 107, 242, 22, 1, 231, 1,
                                                                1, 256, 1, 227, 243, 220, 68, 1, 231, 1,
                                                                40, 240, 33, 211, 7, 112, 5, 150, 249, 74,
                                                            227, 152, 4, 97, 231, 231, 231, 27, 88, 191,
                                                            130, 161, 17, 176, 1, 231, 1, 235, 113, 101,
                                                            253, 98, 141, 164, 1, 231, 1, 255, 192, 67,
                                                            209, 30, 244, 103, 71, 87, 193, 66, 27, 31,
                                                            53, 161, 189, 170, 102, 36, 167, 170, 235, 176,
                                                            69, 195, 129, 155, 95, 76, 178, 40, 26, 106};
    
    
    busqueda(A,B);
    
    cin.ignore(2);
    return EXIT_SUCCESS;
}

void busqueda(int A[10][10],int B[3][3])
{
    int f, c,fmax,cmax,veces=0,bandera=0;
    
    for(fmax=0;fmax<=7;fmax++)
    {    
        for(cmax=0;cmax<=7;cmax++)
       {     
            for (f=fmax;f<fmax+3;f++)
            {
                for (c=cmax;c<cmax+3;c++)
                {
                    if(A[f][c]==B[f-fmax][c-cmax])
                    {
                        veces++;
                        if (veces==9)
                        {bandera++;}
                    }
                    else
                    {
                        veces=0;
                    }
                }
            }
       veces=0;
       }    
    }
    cout<<bandera;
    return;
}
