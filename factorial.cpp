#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int x = num;
    if (num > 0){
        for (int i = num - 1; i > 0; i--){
            x *= i;
        }
        cout << x << endl;
        return x;
    }
    else if (num == 0){
        cout << 1 << endl;
        return 1;
    }
    else if (num < 0){
        cout << num << endl;
        return num;
    }
}