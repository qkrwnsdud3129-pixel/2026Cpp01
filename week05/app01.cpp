// heap memory : dynamic memory allocation
#include <iostream>
using namespace std;

int main()
{
    //int humans = 100;
    //int ages[humans];

    int age;
    //int* a = &age;  // 포인터 변수는 메모리 번지 주소만을 받는다.

    int age, totalPrice = 0;
    int humans = 0;
    cout << "몇 명? ";
    cin >> humans;

    int* ages = new int[humans];

    for (int i = 0; i < humans; i++) {
        cin >> age;
        *(ages + i) = age;
    }

    int kid = 5000, adult = 10000, senior = 7000;

    for (int i = 0; i < humans; i++) {
        cout << *(ages + i) << '\n';
        //cout << *(ages + i) << '\n';
        age = *(ages + i);
        if (age >= 65)
            totalPrice = totalPrice + senior;
        else if (age >= 19)
            totalPrice = totalPrice + adult;
        else
            totalPrice = totalPrice + kid;
    }

    //cout << ages << '\n';
    //cout << &humans << '\n';
    //cout << &age << '\n';

    cout << "총 요금 : " << totalPrice << '\n';
    delete[] ages;  // free memory

    return 0;
}