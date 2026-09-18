#include <iostream>
#include <iomanip>
#include <math.h>

int main(){
    int result;
    using namespace std;
    int a;
    cout << "Enter the number ";
    cin >> a;

    a == 0 ? result = 0 : a > 0 ? result = 1: result = -1;
    cout << "Resul is " << result;
    return 0;
}