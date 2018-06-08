#include <cstdlib>
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[])
{
    //escritura
    ofstream salida("Hola.txt");
    ofstream output;
    char c;
    output.open("Hello.txt");
    cin >> c;
    salida << c;
    salida.close();
    output.close();
    
    
    //lectura
    
    ifstream entrada("Hola.txt");
    ifstream input;
    input.open("Hello.txt");
    if (entrada.good())
    {cout << "El archivo Hola.txt fue abierto correctamente";}
    else
    {cout << "El archivo Hola.txt no pudo ser abierto correctamente";}
    cout << endl;
    entrada >> c;
    entrada.close();
    input.close();
    cout<<c;
    
    system("PAUSE>null");
    return EXIT_SUCCESS;
}
