#include <iostream>
#include "Window.h"
#include <cstring>
using namespace std;

int main()
{
    Window win;
    win.print();
    Window dow;
    cout << "\nwin==dow:\n" << (win == dow);
    cout << "\nwin!=dow:\n" << (win != dow) << "\n\nAfter change dow:\n";
    dow = "Admin Game Black";
    cout << "dow: ";
    dow.print();
    cout << "\nwin==dow:\n" << (win == dow);
    cout << "\nwin!=dow:\n" << (win != dow) << endl;
    win = "User Program Gray";
    cout << "win: ";
    win.print();
    cout << "\nwin<dow (for title):\n" << (win < dow) << endl;
    cout << "\nwin>dow (for title):\n" << (win > dow) << endl;
    cout << "\nwin<=dow (for title):\n" << (win <= dow) << endl;
    cout << "\nwin>=dow (for title):\n" << (win >= dow) << endl;
    cout << "\nOperator <<:\n" << win << endl;
    cout << "\nOperator >>:" << endl;
    cin >> win;
    cout << win;
    return 0;
}
