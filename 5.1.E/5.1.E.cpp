// 5.1.E.cpp 
#include <iostream>
#include <exception>
#include <stdexcept>
#include "LongLong.h"
#include <Windows.h> 

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
   
    try
    {
        LongLong A(3, 2);
        LongLong B(5, 2);
        LongLong s;
        cout << " Додавання = " << A + B << endl;
        cout << " Кількість елементів класу LongLong: " << Object::Count() << endl;
        cout << " Mноження = " << A * B << endl;
        cout << " Кількість елементів класу LongLong: " << Object::Count() << endl;
        cout << " Порівняння старших: " << endl;
        cout << " \n "; s.Compare(A, B);
        cout << " Кількість елементів класу LongLong: " << Object::Count() << endl;
        cout << "Порівняння молодших: " << endl;
        cout << " \n "; s.Compare1(A, B);
        cout << " Кількість елементів класу LongLong: " << Object::Count() << endl;

        cout << "A++" << endl; cout << A++ << endl;
        cout << " Кількість елементів класу LongLong: " << Object::Count() << endl;
        cout << "A--" << endl; cout << A-- << endl;
        cout << " Кількість елементів класу LongLong: " << Object::Count() << endl;
        cout << "++A" << endl; cout << ++A << endl;
        cout << " Кількість елементів класу LongLong: " << Object::Count() << endl;
        cout << "--A" << endl; cout << --A << endl;
        cout << " Кількість елементів класу LongLong: " << Object::Count() << endl;
    }
    catch (invalid_argument e)
    {
        cout << e.what() << endl;
    }
    catch (bad_exception e)
    {
        cout << e.what() << endl;
    }
    catch (Bad_exception& e)
    {
        cout << e.what() << endl;
    }
    catch (const char* e)
    {
        cerr << e << endl;
    }
  
}