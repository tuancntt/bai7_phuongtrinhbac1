// bai7_phuongtrinhbac1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
using namespace std;
#include <iostream>

int main()
{
    cout << "CHUONG TRINH GIAI PHUON TRINH BAC 1: ax + b = 0\n";
    // dau vao la a, b
    // dau ra: x

    double a, b, x;
    cout << "Nhap a:"; cin >> a;
    cout << "Nhap b:"; cin >> b;
     
    if (a != 0) {
        // pt co nghiem la -b/a
        x = -b / a;
        cout << "pt co nghiem la: " << x;
    }
    else {
        if (b == 0)
        {
            cout << "PHUONG TRINH CO NGHIEM DUNG VOI MOI X";
        }
        else
        {
            cout << "PHUONG TRINH VO NGHIEM";
        }
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
