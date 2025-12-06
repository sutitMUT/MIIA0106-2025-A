#include <iostream>
using namespace std;

int main() {
    int score = 85;

    if (score >= 90) {
        cout << "唷么 A" << endl;
    }
    else if (score >= 80) {
        cout << "唷么 B" << endl;
    }
    else if (score >= 70) {
        cout << "唷么 C" << endl;
    }
    else {
        cout << "唷么 F" << endl;
    }

    return 0;
}
