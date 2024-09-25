#include <iostream>
using namespace std;
int main(){
    int w, h, price;
    cout << "Width with no units: ";
    cin >> w;
    cout << "Height with no units: ";
    cin >> h;
    cout << "Enter price per square unit (don't type units): ";
    cin >> price;
    cout << (price * (w * h)) << endl;
    return 0;
}