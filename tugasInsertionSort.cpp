#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string str;

    cout << "Input kata: ";
    getline(cin, str);

    // untuk menghapus spasi di kalimat
    str.erase(remove(str.begin(), str.end(), ' '), str.end());

    int n = str.size();

    cout << endl;
    // insertion sort
    for (int i = 1; i < n; i++){
        cout << "Hasil looping ke-" << i << ": ";
        char key = str[i];
        int j = i - 1;

        while(j >= 0 && str[j] > key){
            str[j+1] = str[j];
            j--;
        }

        str[j+1] = key;

        for (char x : str) cout << x;
        cout << endl;
    }

    return 0;
}