#include <iostream>
using namespace std;

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

// Main
int main()
{
    powiedz("Witaj swiecie!");  // Demonstracja działania funkcji `powiedz`
    cout << '\n' << zwrotTest(4, 9);    // Testuje funkcję zwrot na bazie zupełnie losowych liczb, 4 i 9. O dziwo działa.

    zwrot(0);   // Upośledzone `return 0;`
}

