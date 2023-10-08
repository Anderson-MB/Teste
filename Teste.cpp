#include <iostream>
#include <locale>

using namespace std;

int main(){

    setlocale(LC_ALL,"portuguese");

    string n = " ";

    cout << "Digite qualquer coisa: ";
    getline(cin, n);
    cout << n << endl;

    return 0;

}