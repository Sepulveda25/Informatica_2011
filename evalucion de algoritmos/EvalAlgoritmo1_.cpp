// exjun2011-1.cpp
// ************************************************************
// MATERIA : INFORMATICA
// EXAMEN : Evaluacion Algoritmo Jun 2011
// NOMBRE : Sepulveda Federico
// MATRICULA : 35037929
// CARRERA : ICOMP
// COMISION : 3.4
// ************************************************************
//
// Estimado alumno no modifique nada del código que le proveemos, 
// use los procedimientos o funciones que estan definidos y no 
// agregue más a la solucion.
//
// Realice un programa en C++ con las siguientes caracteristicas:
//
// La cantidad de filas y columnas de un arreglo  bidimensional
// se ingresan por teclado (maximo 100).
//
// Debe ingresar los valores del arreglo desde el teclado.
//
// Validar que todos los valores del arreglo sean distintos de cero,
// sino emitir mensaje en la consola "Hay valores nulos" y terminar.
//
// Generar un arreglo de una fila como resultado del producto de los
// elementos IMPARES UNICAMENTE de las columnas del arreglo anterior.
// Si en alguna columna NO HAY NINGUN ELEMENTO IMPAR el resultado para
// esa columna en el arreglo unidimensional debe ser 0.
//
// Mostrar el resultado en la consola, en la primer linea muestre el
// texto 'Resultados' y en las siguientes los resultado de la
// operacion.
//
// Si la matriz es cuadrada, mostrar por consola la cantidad de elementos
// PARES y el resultado de la suma de los mismos. Con el siguiente texto:
// 'La Cantidad de Elementos PARES es' xx 'y su sumatoria es igual a' xx. 
// Si la matriz NO es cuadrada, mostrar por consola la cantidad de
// elementos IMPARES y el resultado de la suma de los mismos. Con el siguiente
// texto:
// 'La Cantidad de Elementos IMPARES es' xx 'y su sumatoria es igual a' xx. 
//
// Cree una funcion "int verificarValores (int[][],int,int)"
// para verificar que los valores del arreglo son todos positivos. Si
// se cumple la condicion devolver un 1 (uno) y en caso contrario
// devolver un 0 (cero).
//
// Cree otra funcion "void mostrarElementos (int[][],int,int)"
// para mostrar por consola la cantidad y sumatoria de los  valores 
// PARES/IMPARES segun corresponda.
//
// Ej. de caso particular. Cumple con la condicion de ser distintos de
// cero.
//
// Ingrese la cantidad de filas y columnas: 3 3
//
// Valor[0][0]=3
//
// Valor[0][1]=6
//
// Valor[0][2]=9
//
// Valor[1][0]=12
//
// Valor[1][1]=15
//
// Valor[1][2]=18
//
// Valor[2][0]=1
//
// Valor[2][1]=1
//
// Valor[2][2]=1
//
//
// Resultados
// 3
// 15
// 9
//
// La cantidad de elementos PARES es 3 Y su sumatoria es igual a 36.
//
/* TABLA DE CALIFICACION:
  /20 Principal  
  /15 Implementacion correcta Funcion 1
  /15 Implmentacion correcta Funcion 2
  /15 Ingreso de datos / validacion
  /10 Impresion.
  /15 Comentarios, semantica y presentacion
  /10 Compilacion
-----------------------
  Tot /100
*/
//
#include<iostream>
#include<iomanip>
using namespace std;

const int MAX=100;

int verificarValores (int[MAX][MAX],int,int);
  


void mostrarElementos (int[MAX][MAX],int,int);
  

int main()
{
    int f,c,fmax,cmax,bandera=0,impar=1, B[MAX], A[MAX][MAX];
    
    cout<<"Ingrese la cantidad de filas: ";
    cin>>fmax;
    
    cout<<"Ingrese la cantidad de columnas: ";
    cin>>cmax;
    
    cout<<"Ingrese los elementos de la matriz por fila:\n";
    for (f=0;f<fmax;f++)//ingreso valores a la matriz A
    {
        for (c=0;c<cmax;c++)
        {
            cin>>A[f][c];
            if (A[f][c]==0)// se verifica que no se ingresan valores igual a 0 en el caso que esto ocurra se sale del programa
            {
                   cout<<"Hay valores nulos"; 
                   cin.ignore(2);
                   exit(1);            
            }
        }
    }
   
    for (c=0;c<cmax;c++)//busco elementos impares en cada columna y hago el producto
    {
        for (f=0;f<fmax;f++)
        {
            if ((A[f][c]%2)!=0)
            {
                  impar=impar*A[f][c];
                  bandera=1;           
            }
            
        }
    if (bandera==0)/*si la bandera es igual a 0 significa que no hay elementos 
                        impares en esa columna e igualo a impar a 0 para que sea almacenado en el vector B*/
    {impar=0;}
    B[c]=impar;
    impar=1;
    bandera=0;
    }
   
   cout<<"Resultados:\n";
   for (c=0;c<cmax;c++)
   {
       cout<<B[c]<<"\n";
   }
   mostrarElementos (A,fmax,cmax);
   cout<<"\nEl valor devuelto por la funcion verificarValores es: "<<verificarValores (A,fmax,cmax);
   cout<<"\nSi el valor devueto es 1 todos los elementos son positivos y si es 0 es que por lo menos hay un elemento negativo";
   cin.ignore(2);
   return 0;
}

void mostrarElementos (int A[MAX][MAX],int fila,int columna)
{
     int sumpar=0,sumimpar=0,f,c,cantpar=0,cantimpar=0;
     
     if (fila==columna)//verifico que la matriz sea cuadrada es cuadrada si se cumple que "fila" es igual a "columna"
     {
           for (c=0;c<columna;c++)
           {
               for (f=0;f<fila;f++)
               {
                      if ((A[f][c]%2)==0)
                      {
                      sumpar=sumpar+A[f][c];
                      cantpar++;           
                      }
            
              }
        
                 
          }
     
     cout<<"\nLa Cantidad de Elementos PARES es "<<cantpar<<" y su sumatoria es igual a "<<sumpar;
     }     
     else
     {
         for (c=0;c<columna;c++)
           {
               for (f=0;f<fila;f++)
               {
                      if ((A[f][c]%2)!=0)
                      {
                      sumimpar=sumimpar+A[f][c];
                      cantimpar++;           
                      }
            
              }
        
                 
          }
      cout<<"\nLa Cantidad de Elementos IMPARES es "<<cantimpar<<" y su sumatoria es igual a "<<sumimpar;   
     }
     
     return;    
}

int verificarValores (int A[MAX][MAX],int fila,int columna)
{
    int f,c,conta=0,res;
    
    for (f=0;f<fila;f++)
    {
        for (c=0;c<columna;c++)
        {
            if (A[f][c]>=0)
            {
                   conta++;//cuento los elementos positivos          
            }
        }
    }
    
    if (conta==(fila*columna))/*si la catidad de elementos es igual a la cantidad de 
                              elementos positivos significa que todos los elementos son positivos*/
    {
          res=1;
    }
    else
    {
        res=0;
    }
    
    return res;
}
