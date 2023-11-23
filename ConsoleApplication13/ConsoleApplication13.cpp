#include <iostream>

using namespace std;

void drawTriangle(int height) {
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j <= i; ++j) {
            cout << "^";
        }
        cout << endl;
    }
}

void drawSquare(int sideLength) {
    for (int i = 0; i < sideLength; ++i) {
        for (int j = 0; j < sideLength; ++j) {
            cout << "^";
        }
        cout << endl;
    }
}

int main() {
    int choice;
    int width, height;
    int sideLength;

    do {
        cout << "ur choise:\n";
        cout << "1. triangle\n";
        cout << "2. Square\n";
        cout << "0. quite\n";
        cout << "ur num: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "height: ";
            cin >> height;
            drawTriangle(height);
            break;
        case 2:
            cout << "length: ";
            cin >> sideLength;
            drawSquare(sideLength);
            break;
        case 0:
            cout << "exit.\n";
            break;
        default:
            cout << "error\n";
            break;
        }
    } while (choice != 0);

    return 0;
}
