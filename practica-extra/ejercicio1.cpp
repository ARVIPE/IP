#include <iostream>
#include <cmath>
 
using namespace std;
 
// Prototipo
float fx( float x );
float fx2( float x2 );
float fx3( float x3 );
float fx4( float x4 );
float ancho( float a, float b, int n );
void menu( int &funcion, int &metodo, int &n );
 
const float pi = 3.1416;
 
// Funcion para evaluar f(x)
float fx( float x )
{
    float f;
 
    f = 2 * pi * tan(x) * sqrt( 1 + pow( (1 / cos(x)), 4) );
 
    return f;
}
 
// Funcion para evaluar f(x2)
float fx2( float x2 )
{
    float f2;
 
    f2 = 2 * pi * ( pow( x2, 3 ) ) / 9 * sqrt( 1 + ( pow(x2, 4) / 9 ));
 
    return f2;
}
 
// Funcion para evaluar f(x3)
float fx3( float x3 )
{
    float f3;
 
    f3 = sin( x3 ) / x3;
 
    return f3;
}
 
// Funcion para evaluar f(x)4
float fx4 (float x)
{
    float f4;
 
    f4 = 1 / exp(x);
 
    return f4;
}
 
// Funcion para calcular el ancho
float ancho( float a, float b, int n )
{
    float h;
 
    h = ( b - a) / n;
    cout << "\nh = " << h << endl;
 
    return h;
}
 
void menu( int &funcion, int &metodo, int &n )
{
    cout << "\n    Programa para resolver integrales definidas"
         << "\n===================================================="
         << "\n1.- 2 * pi * tan(x)* sqrt(1 + pow((1/cos(x)), 4))"
         << "\n2.- 2 * pi *x^3 / 9 * sqrt(1+(x)^4 / 9)"
         << "\n3.- sen(x) / x"
         << "\n4.- e^-(x)^2\n"
         << "\n===================================================="
         << "\nIntegral (1 - 4): ";
 
    cin >> funcion;
 
    cout << "\n Elija el metodo con el que desea realizar la integral definida"
         << "\n==============================================================="
         << "\n1.- Regla de Simpson"
         << "\n2.- Regla de trapecio"
         << "\n==============================================================="
         << "\nMetodo (1 - 2): ";
 
    cin >> metodo;
 
    cout << "\nIngrese el número de particiones: ";
    cin >> n;
}
 
int main()
{
    int funcion, metodo, n;
    double sum, lInf, lSup, vInt, h;
 
    menu( funcion, metodo, n );
 
 
    //Casos a evaluar
    switch( funcion ){
 
        case 1:
 
            //Definir limites
            lInf = 0;
            lSup = pi / 4;
 
            // Definir ancho
            h = ancho( lInf, lSup, n );
 
            // Evaluar en el limite inferior f(x0)
            sum = fx( lInf );
 
            // Evaluar f(xi)
            for( int i = 1; i <= n - 1; i++ )
                sum = sum + 2 * fx( h * i );
 
 
            // Evaluarf(x1)
            sum = sum + fx( lSup );
 
            // Calular integral
            vInt = h * sum / 2;
 
            cout << "\nEl resultado de la integral es: ";
            cout << "\nI = "<< vInt << endl;
 
            break;
 
        case 2:
 
            //Definir limites
            lInf = 2;
            lSup = 0;
 
            // Definir ancho
            h = ancho( lInf, lSup, n );
 
            // Evaluar en el limite inferior f(x0)
            sum = fx2( lInf );
 
            // Evaluar f(xi)
            for(int i = 1; i <= n - 1; i++ )
                sum = sum + 2 * fx2( h * i );
 
 
            // Evaluar f(x1)
            sum = sum + fx2( lSup );
 
            // Calular integral
            vInt = h * sum / 2;
 
            cout << "\nEl resultado de la integral es: ";
            cout << "\nI = " << vInt << endl;
 
            break;
 
        case 3:
 
            //Definir limites
            lInf = pi / 2;
            lSup = 0;
 
            // Definir ancho
            h = ancho( lInf, lSup, n );
 
            // Evaluar en el limite inferior f(x0)
            sum = fx3( lInf );
 
            // Evaluar f(xi)
            for( int i = 1; i<= n - 1; i++ )
                sum = sum + 2 * fx3( h * i );
 
 
            // Evaluar f(x1)
            sum = sum + fx3( lSup );
 
            // Calular integral
            vInt = h * sum / 2;
 
            cout << "\nEl resultado de la integral es: ";
            cout << "\nI = "<< vInt << endl;
            break;
 
        case 4:
 
            //Definir limites
            lInf = pi / 2;
            lSup = 0;
 
            // Definir ancho
            h = ancho( lInf, lSup, n );
 
            // Evaluar en el limite inferior f(x0)
            sum = fx4( lInf );
 
            // Evaluar f(xi)
            for( int i = 1; i<= n - 1; i++ )
                sum = sum + 2 * fx4( h * i );
 
 
            // Evaluar f(x1)
            sum = sum + fx4( lSup );
 
            // Calular integral
            vInt = h * sum / 2;
 
            cout << "\nEl resultado de la integral es: ";
            cout << "\nI = " << vInt << endl;
 
            break;
 
    }
 
    return 0;
}