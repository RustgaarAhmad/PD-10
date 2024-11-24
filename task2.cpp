#include <iostream>
#include <cmath>

using namespace std;

int countRotations(string instructions[], int arraySize);

int main() {
    int arraySize;
    cout << "Enter the number of instructions: ";
    cin >> arraySize;

    string instructions[arraySize];
    cout << "Enter the instructions (Left or Right):\n";
    for (int i = 0; i < arraySize; ++i) {
        cin >> instructions[i];
    }

    int rotations = countRotations(instructions, arraySize);
    cout << "Number of 360-degree rotations: " << rotations << endl;

    return 0;
}

int countRotations(string steps[], int length) {
    int totalRotation = 0;
    for (int i = 0; i < length; ++i) {
        if (steps[i] == "Right") {
            totalRotation += 90;
        } else if (steps[i] == "Left") {
            totalRotation -= 90;
        } else {
            cout << "Invalid input: " << steps[i] << endl;
            return -1;
        }
    }
    return abs(totalRotation / 360);
}