#include <iostream>

using namespace std;

int main () {

    int a, b, c;
    cin >> a >> b >> c;
    float average = float(a + b + c)/3;
    int product = a * b * c;

    cout << "The result of average is equal to " << average << endl << "The result of product is equal to " << product << endl;

  return 0;
}
