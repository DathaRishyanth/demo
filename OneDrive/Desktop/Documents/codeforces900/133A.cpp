#include <iostream>
#include <string>

using namespace std;

int main() {
    string p;
    cin >> p;

    bool outputProduced = false;

    for (char c : p) {
        if (c == 'H' || c == 'Q' || c == '9' ) {
            outputProduced = true;
            break;
        }
    }

    if (outputProduced) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
