#include <iostream>

using namespace std;

int main(){
    int n, ch, sp, s;
    cout << "Enter number: ";
    cin >> n;
    cout << endl;
    for(int i = 0; i < n; i++){
        ch = 1+2*i;
        sp = n - i;
        for(s = 0; s < sp;s++){
            cout << " ";
        }
        for(int o = 0; o < ch; o++){
            cout << "#";
        }
        cout << endl;
    }
    for(s = 0; s < n;s++){
            cout << " ";
    }
    cout << "#" << endl;
}