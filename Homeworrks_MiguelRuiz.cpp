#include <iostream>
#include <windows.h>
using namespace std;

void tarea1();
int main()
{
    int excercise;

    cout << "elija la tarea a ver: " << endl;
    cout << "1. Tarea 1" << endl;
    cin >> excercise;
    switch (excercise) {
    case 1:
        system("cls");
        tarea1();
        break;
    }
}

void tarea1() {
    int seleccion;
    int n;
    int sum = 0;
    int max;
    int min;
    int a;
    int b;
    int c;

    cout << "elija el numero de ejercicio que quiere ver: " << endl;
    cout << "1. determinar si un numero es negativo o positivo" << endl;
    cout << "2. suma de digitos de un numero de dos digitos" << endl;
    cout << "3. pedir numero de dos digitos, determinar si uno es par e imprimirlo" << endl;
    cout << "4. ingresar 3 numeros y determinar el mas alto" << endl;
    cout << "5. ingresar minimo y maximo de in rango e imprimir los numeros pares del rango" << endl;
    cin >> seleccion;
    switch (seleccion) {
    case 1:
        //determinar si un numero es positivo o negativo
        cout << "ingrese un numero para ver si es positivo o negativo: ";
        cin >> n;
        if (n > 0) {
            cout << "el numero " << n << " es positivo" << endl;
        }
        else if (n < 0) {
            cout << "el numeor " << n << " es negativo" << endl;
        }
        else {
            cout << "el numero cero no es positivo ni negativo" << endl;
        }
        system("pause");
        system("cls");
        break;
    case 2:
        //suma de digitos de numero con dos digitos
        do {
        cout << "ingrese un numero de dos digitos: ";
        cin >> n;
        } while (n < 10);
        while (n > 0) {
            sum = sum + n % 10; //el modulo obtiene la unidad
            n = n / 10;         //al dividir entre 10 obtenemos la decena y como es entero se ignoran los decimales
        }
        cout << "la suma de los digitos es " << sum << endl;
        system("pause");
        system("cls");
        break;
    case 3:
        //Si un digito de numero de dos digitos es par
        do {
            cout << "ingrese un numero de dos digitos para ver si alguno es par: ";
            cin >> n;
        } while (n < 10);
        
        while (n > 0) {
            if (n % 2 == 0) {
                cout << n % 10 << " es par" << endl;
            }
            sum = sum + n % 10;
            n = n / 10;

        }
        system("pause");
        system("cls");
        break;
    case 4:
        //3 numeros y determinar el más alto
        cout << "ingrese tres numeros";
        cin >> a >> b >> c;
        if (a > b and a > c) {
            cout << "el numero mas grande es " << a << endl;
        }
        else if (b > a and b > c) {
            cout << "el numero mas grande es " << b << endl;
        }
        else if (c > a and c > b) {
            cout << "el numero mas grande es " << c << endl;
        }
        else {
            cout << "los numeros son iguales" << endl;
        }
        if (a < b and a < c) {
            cout << "el numero mas pequeno es " << a << endl;
        }
        else if (b < a and b < c) {
            cout << "el numero mas pequeno es " << b << endl;
        }
        else if (c < a and c < b) {
            cout << "el numero mas pequeno es " << c << endl;
        }   
        break;
    case 5:
        //numeros entre rango maximo y rango minimo
        do {
            cout << "asegurese de que el minimo sea menor que le maximo..." << endl;
            cout << "ingrese el numero minimo del rango: ";
            cin >> min;
            cout << "ingrese el maximo del rango: ";
            cin >> max;
        } while (min > max);

        for (int i = min; i <= max; i++) {
            if (i % 2 == 0) {
                cout << i << endl;
            }
        }
        break;
    }
}
