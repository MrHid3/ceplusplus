/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

#define powiedz cout
#define wprowadz cin
#define nowaLinia endl

#define calkowity int
#define sznurek string
#define glowny main
#define zwrot return

#define jezeli if
#define wPrzeciwnymRazie else
#define idzDo goto


using namespace std;

calkowity dodawanie(calkowity a, calkowity b)
{
    zwrot a + b;   
}

calkowity glowny()
{   
    poczatek:
    
    calkowity a = 0;
    calkowity b = 0;
    calkowity wynikFunkcji = 0;
    
    powiedz << "Wprowadz A, a potem B!" << nowaLinia;
    wprowadz >> a;
    wprowadz >> b;
    
    wynikFunkcji = dodawanie(a, b);
    powiedz << "Wynik funkcji to " << wynikFunkcji << nowaLinia;
    
    
    
    sznurek kontynuacja;
    powiedz << "Czy chcesz kontynuowac? (T/N) - ";
    wprowadz >> kontynuacja;
    
    jezeli (kontynuacja == "T" || kontynuacja == "t")
        idzDo poczatek;
    
    wPrzeciwnymRazie jezeli (kontynuacja == "N" || kontynuacja == "n")
        system("pause");
}