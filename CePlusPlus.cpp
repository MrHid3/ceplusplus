#include <iostream>
using namespace std;

////////////////////////////////////////////////
// Jakieś tam normalne funkcje

// Nietypowy print
void powiedz(string in)
{
    cout << in;
}

// Nietypowy return
int zwrot(int in)
{
    return in;
}

// Testuje, czy ten mój nietypowy return działa. Bierze dwie liczby, zwraca ich sumę
int zwrotTest(int x, int y)
{
    int z = x + y;
    zwrot(z);
}

////////////////////////////////////////////////
// Arytmetyka

// Dodaje x + y
float dodaj(float x, float y)
{
    return x + y;
}

// Odejmuje x - y
float odejmij(float x, float y)
{
    return x - y;
}

// Mnoży x * y
float pomnoz(float x, float y)
{
    return x * y;
}

// Dzieli x / y
float podziel(float x, float y)
{
    if (y == 0)
        return 0;
    else
        return x / y;
}


////////////////////////////////////////////////
// Main
int main()
{
    powiedz("Witaj swiecie!");  // Demonstracja działania funkcji `powiedz`
    cout << '\n' << zwrotTest(4, 9);    // Testuje funkcję zwrot na bazie zupełnie losowych liczb, 4 i 9. O dziwo działa.
    cout << '\n' << dodaj(5.5, 7.6);    // Dodaje losowe floaty
    cout << '\n' << odejmij(6.2, 4.7);  // Odejmuje losowe floaty
    cout << '\n' << pomnoz(2.1, 3.7);   // Mnoży losowe floaty
    cout << '\n' << podziel(21, 3);     // Dzieli jakieś liczby
    
    zwrot(0);   // Upośledzone `return 0;`
}

