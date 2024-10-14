#include <iostream>

using namespace std;

int power(int a, int e){
    int o = 1;
    for (int i = 0; i < e; i++)
    {
        o = o * a;
    }
    return o;
}

double my_sqrt(float a, float acc){
    double left = 0;
    double right = a;
    double middle = right/2;
    double tries = 0;
    while (not(middle*middle==a) and tries < acc)
    {
        middle = left+(right-left)/2;
        if (middle*middle<a){
            right = middle+1;
        }
        else{
            left = middle-1;
        }
        tries += 1;
    }
    return middle;
        
}

int main(){
    float a, b, ans;
    char c;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter function: ";
    cin >> c;
    cout << "Enter b: ";
    cin >> b;
    switch (c)
    {
    case '+':
        ans = a + b;
        break;
    case '-':
        ans = a - b;
        break;
    case '/':
        ans = a / b;
        break;
    case '*':
        ans = a * b;
        break;
    case '^':
        ans = power(a, b);
        break;
    case '#':
        ans = my_sqrt(a, a);
        break;
    default:
        break;
    }
    cout << endl << a << c << b << '=' << ans << endl; 
}