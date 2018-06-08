#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{   double voltaje[5][3],prom[5],promtotal=0;
    int f,c;
    
    for (f=0;f<5;f++)
    {   switch (f)
            {
                case 0:
                cout<<"Ingrese los datos del primer generador: "<<"\n";
                break;
                case 1:
                cout<<"Ingrese los datos del segundo generador: "<<"\n";
                break;
                case 2:
                cout<<"Ingrese los datos del tercer generador: "<<"\n";
                break;
                case 3:
                cout<<"Ingrese los datos del cuarto generador: "<<"\n";
                break;
                case 4:
                cout<<"Ingrese los datos del quinto generador: "<<"\n";
                break;
                
            }
        for (c=0;c<3;c++)
        {   
            cin>>voltaje[f][c];  //se ingresan los datos  
        }
    }
    
    for (f=0;f<5;f++)//se pone a 0 todos los elementos del vector prom
    {
        prom[f]=0;
    }
    
    cout<<"\n"<<"Promedios:"<<"\n";
    for (f=0;f<5;f++)// se calcula el promedio de los datos de cada generador
    {   
        for (c=0;c<3;c++)
        {   
            prom[f]=prom[f]+voltaje[f][c];
            promtotal=promtotal+voltaje[f][c];
            if (c==2)
            {
                prom[f]=prom[f]/(c+1);
                
                switch (f)
                {
                    case 0:
                    cout<<"\n"<<"El promedio de los datos del primer generador es: "
                    <<prom[f]<<"\n";
                    break;
                    case 1:
                    cout<<"\n"<<"El promedio de los datos del segundo generador es: "
                    <<prom[f]<<"\n";
                    break;
                    case 2:
                    cout<<"\n"<<"El promedio de los datos del tercer generador es: "
                    <<prom[f]<<"\n";
                    break;
                    case 3:
                    cout<<"\n"<<"El promedio de los datos del cuarto generador es: "
                    <<prom[f]<<"\n";
                    break;
                    case 4:
                    cout<<"\n"<<"El promedio de los datos del quinto generador es: "
                    <<prom[f]<<"\n";
                    break;
                
                }
            }
                if ((c==2)&&(f==4))
                {
                    promtotal=promtotal/((c+1)*(f+1));
                    cout<<"\n"<<"El promedio total de los datos de los generadores es: "
                    <<promtotal<<"\n";   
                }
        
        }
          
    }   
    system("PAUSE");
    return EXIT_SUCCESS;
}
