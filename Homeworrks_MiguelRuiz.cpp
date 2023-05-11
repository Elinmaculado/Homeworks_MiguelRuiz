#include <iostream>
#include <windows.h>
#include <vector>
#include <algorithm>

using namespace std;

void tarea1();
void tarea2();
void tarea3();
void tarea3_5();

int main()
{
    int excercise;

    cout << "elija la tarea a ver: " << endl;
    cout << "1. Tarea 1: ejercicios" << endl;
    cout << "2. Tarea 2: piedra, papel o tijera" << endl;
    cout << "3. Juego de ahorcado" << endl;

    cin >> excercise;
    switch (excercise) {
    case 1:
        system("cls");
        tarea1();
        break;
    case 2:
        system("cls");
        tarea2();
        break;
    case 3:
        system("cls");
        tarea3_5();

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

void tarea2() {
     int playscore = 0;
    int playerscore = 0;
    int play;
    string jugar;
    do {
        int playscore = 0;
        int playerscore = 0;
        do{
            srand(time(NULL));
            int randnum = rand();
            int answer = (randnum % 3) + 1;
            do{
                cout << answer << endl;
                cout << "puntaje: " << playerscore << " a " << playscore << endl;
                cout << "introduzca su jugada:\n1. Piedra\n2. Papel\n3. Tijera\n";
                cin >> play;
                if (play < 1 or play >3) {
                    system("cls");
                }
            } while (play < 1 && play > 3);
    
            if (answer == play) {
                cout << "empate\n";
                system("pause");
                system("cls");
            }
            else if (play == 1 && answer == 2) {
                cout << "piedra vs papel\nperdiste\n";
                playscore++;
                cout << playerscore << " a " << playscore << endl;
                system("pause");
                system("cls");
            }
            else if (play == 1 && answer == 3) {
                cout << "piedra vs tijera\nganaste\n";
                playerscore++;
                cout << playerscore << " a " << playscore << endl;
                system("pause");
                system("cls");
            }
            else if (play == 2 && answer == 1) {
                cout << "papel vs piedra\nganaste\n";
                playerscore++;
                cout << playerscore << " a " << playscore << endl;
                system("pause");
                system("cls");
            }
            else if (play == 2 && answer == 3) {
                cout << "papel vs tijera\nperdiste\n";
                playscore++;
                cout << playerscore << " a " << playscore << endl;
                system("pause");
                system("cls");
            }
            else if (play == 3 && answer == 1) {
                cout << "tijera vs piedra\nperdiste\n";
                playscore++;
                cout << playerscore << " a " << playscore << endl;
                system("pause");
                system("cls");
            }
            else if (play == 3 && answer == 2) {
                cout << "tijera vs papel\nganaste\n";
                playerscore++;
                cout << playerscore << " a " << playscore << endl;
                system("pause");
                system("cls");
            } 
        } while (playscore < 2 && playerscore < 2);
        cout << "fin de la partida\npuntaje final: " << playerscore << " a " << playscore << endl;
        if (playerscore > playscore) {
            cout << "ganaste :)" << endl;
        }
        else {
            cout << "perdiste :(" << endl;
        }
        cout << "desea jugar otra vez? si/no\n";
        cin >> jugar;
        system("cls");
    } while (jugar == "si");
}

void tarea3() {
    int lifes = 5;
    char answer;
    string word = "ahorcado";
    char l1 = '_';  //a1 y 6
    char l2 = '_';  //h
    char l3 = '_';  //o3 y 8
    char l4 = '_';  //r
    char l5 = '_';  //c
    char l6 = '_';  //d
    vector<char> fails(5);
    cout << fails.size();
    

    do {
        cout << "juego del ahorcado" << endl;
        cout << "tienes " << lifes << " vidas" << endl;

        

        cout << l1 << l2 << l3 << l4 << l5 << l1 << l6 << l3 << endl;
        cout << "letras incorrectas: ";
        for (unsigned int i = 0; i < fails.size(); i++)
        {
            cout << fails[i];
        }
        if (lifes == 4) 
        {
            cout << "------"<<endl;
                cout << "|     |"<<endl;
        }
        else if (lifes == 3)
        {
            cout << "------" << endl;
            cout << "|     |" << endl;
            cout << "      0" << endl;
        }
        if (lifes == 2)
        {
            cout << "------" << endl;
            cout << "|     |" << endl;
            cout << "      0" << endl;
            cout << "      |" << endl;
        }
        else if (lifes == 1)
        {
            cout << "------" << endl;
            cout << "|     |" << endl;
            cout << "      0" << endl;
            cout << "     |||" << endl;
        }
        
        cout << endl << "ingresa una letra para adivinar la palabra" << endl;

        cin >> answer;

        if (answer == 'a')
        {
            l1 = answer;
            system("cls");
        }
        else if (answer == 'h')
        {
            l2 = answer;
            system("cls");
        }
        else if (answer == 'o')
        {
            l3 = answer;
            system("cls");
        }
        else if (answer == 'r') 
        {
            l4 = answer;
            system("cls");
        }
        else if (answer == 'c')
        {
            l5 = answer;
            system("cls");
        }
        else if (answer == 'd')
        {
            l6 = answer;
            system("cls");
        }
        else 
        {
            lifes--;
            fails.push_back(answer);

            system("cls");
        }
    } while (lifes > 0 && (l1 != 'a' || l2 != 'h' || l3 != 'o' || l4 != 'r' || l5 != 'c' || l6 != 'd'));
    if (lifes == 0) {
        cout << "perdiste :(" << endl;
        cout << "------" << endl
            <<"|     |" << endl
           << "      0" << endl
            <<"     |||" << endl
            <<"     | |";

    }
    else
    {
        cout << "ganaste! :)";
    }
}

void tarea3_5()
{
    const int MAX_ATTEMPTS = 6;
    int attempts = 0;
    vector<string> words;
    char guess;
    vector<char>::const_iterator iter;

    //palabras dentro del vector
    words.push_back("COMPUTADORA");
    words.push_back("JUEGO");
    words.push_back("CODIGO");
    words.push_back("REFRIGERADOR");

    //indice con numero aleatorio para elegir palabra aleatoria
    srand(time(NULL));
    int randNumber = rand();
    int wordRandomIndex = (randNumber % words.size());
    string wordSelected = words[wordRandomIndex];
    string failedLetters = " ";

    //vector del tamaño de la palabra elegia, pero lleno de _ y donde se iran reemplazando las letras
    int a = wordSelected.length();
    string soFar(a, '_');


    do {
        cout << "te quedan " << MAX_ATTEMPTS - attempts << " intentos" << endl;
        cout << "letras ya utilizadas: " << failedLetters << endl;
        cout << wordSelected << endl;
        cout << soFar << endl;

        switch (attempts)
        {
        case 0:
            cout << "------" << endl;
            cout << "|     |" << endl;
            break;
        case 1:
            cout << "------" << endl;
            cout << "|     |" << endl;
            cout << "      0" << endl;
            break;
        case 2:
            cout << "------" << endl
            << "|     |" << endl
            << "      0" << endl
            << "      |" << endl;
            break;
        case 3:
            cout << "------" << endl
                << "|     |" << endl
                << "      0" << endl
                << "      ||" << endl;
            break;
        case 4:
            cout << "------" << endl
                << "|     |" << endl
                << "      0" << endl
                << "     |||" << endl;
            break;
        case 5:
            cout << "------" << endl
                << "|     |" << endl
                << "      0" << endl
                << "     |||" << endl
                << "     |  " << endl;
        }

        //Recibe la letra y la hace mayusucula
        cin >> guess;
        while ( guess == '0' || guess == '1' || guess == '2' || guess == '3' || guess == '4' || guess == '5' || guess == '6' || guess == '7' || guess == '8' || guess == '9') 
        {
            cout << "no puede ingresar un numero, ingrese una letra: " << endl;
            cin >> guess;
        }
        guess = toupper(guess);
        
        //busca la letra en el vector, npos esta despues de la ultima posicion, si llega  a npos la letra no esta en el vector
        if (wordSelected.find(guess) != string::npos) 
        {
            for (int i = 0; i < wordSelected.length(); i++)
            {
                if (guess == wordSelected[i]) 
                {
                    soFar[i] = guess;
                }
            }
        }

        else if (failedLetters.find(guess) == string::npos)
        {
            attempts++;
            failedLetters.push_back(guess);
            guess = ' ';
        }
        
        system("cls");
    } while (attempts < MAX_ATTEMPTS && soFar != wordSelected);


    if (attempts != MAX_ATTEMPTS) {
        cout << "Felicidades crack, ganaste";
    }
    else
    {
        cout << "Perdiste, pongase vergas mijo" << endl;
        cout << "------" << endl
            << "|     |" << endl
            << "      0" << endl
            << "     |||" << endl
            << "     | |" << endl;
    }
}
