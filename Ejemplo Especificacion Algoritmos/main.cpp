/*
...
# REA221000C.cpp
# ************************************************************
# MATERIA   : INFORMATICA 
# EXAMEN    : 3er EXAMEN PARCIAL - PROMOCION
# NOMBRE    : Sepulveda Federico
# MATRICULA : 35037929
# CARRERA   : ICOMP
# COMISION  : 1.3
# ************************************************************
# 
#  Estimado alumno no modifique nada del codigo que le proveemos, use la
#  funcion que esta definida y no agregue/cambie los argumentos o
#  funciones para la solucion.
 
 Realice un programa en C++ con las siguientes caracteristicas:
 * Cree una funcion "MultiplicaSuma" (ver prototipo mas abajo) que recibe
 una matriz y sus dimensiones y retorna el resultado de la sumatoria de
 los productos elemento a elemento entre la primer y última columna.
 
 * La cantidad de filas y columnas del arreglo, como así también sus
 elementos, se ingresan por teclado.
 
 * Los elementos de la Matriz deben ser TODOS diferentes de cero, en
 caso de no cumplirse, muestre el mensaje 'Hay datos nulos en la matriz'
 y finalice el programa. 
 
 * Muestre en la consola el resultado generado por la función mediante
 el texto 'Resultado = XXX', siendo XXX el valor (respetar espacios en
 blanco entre el símbolo igual).

 Ejemplo
 Arreglo ingresado:
  | 4 1 2 3 | 
  | 1 2 3 4 | 
  | 2 3 4 5 |     

 Cálculo: (4 * 3 + 1 * 4 + 2 * 5)
  
 Salida por consola:
 Resultado = 26

 
'''
*/


/////
//Cuerpo Principal del programa
/////
#include<iostream>
#include<cstdlib>
using namespace std;
const int MAX=50;

int MultiplicaSuma(int matriz[MAX][MAX], int filas, int columnas);

int main()
{
	int f,c,fmax,cmax,matriz[MAX][MAX];
    
    
    cout<<"Ingrese la cantidad de filas de la matriz: ";
    cin>>fmax;

    cout<<"Ingrese la cantidad de columnas de la matriz: ";
    cin>>cmax;
    
    cout<<"Ingrese los elementos de la matriz por fila:\n";
    for (f=0;f<fmax;f++)//ingreso los elementos de la matriz
    {
        for (c=0;c<cmax;c++)
        {
            cin>>matriz[f][c];
            if (matriz[f][c]==0)
            {
                cout<<"Hay datos nulos en la matriz";
                cin.ignore(2);
                exit(1);           
            }
            
        }
    }
    
    cout<<"Resultado = "<<MultiplicaSuma(matriz,fmax,cmax);
    
    cin.ignore(2);
    return 0;
}


/////
//Funcion solicitada
/////
int MultiplicaSuma(int matriz[MAX][MAX], int filas, int columnas)
{
    int resultado=0,n;
	

    for(n=0;n<filas;n++)
	{
        resultado=resultado+matriz[n][0]*matriz[n][columnas-1];
    }

    return resultado;
}
