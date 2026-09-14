#include <iostream>
using namespace std;

int main() {

    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    // Create row pointers
    int **arr = new int*[rows];

    // Store size of each row
    int *cols = new int[rows];

    // Allocate each row
    for(int i = 0; i < rows; i++) {

        cout << "Enter size of row " << i << ": ";
        cin >> cols[i];

        arr[i] = new int[cols[i]];
    }

    // Input elements
    for(int i = 0; i < rows; i++) {

        cout << "Enter elements of row " << i << ": ";

        for(int j = 0; j < cols[i]; j++) {
            cin >> arr[i][j];
        }
    }

    // Print Jagged Array
    cout << "\nJagged Array:\n";

    for(int i = 0; i < rows; i++) {

        for(int j = 0; j < cols[i]; j++) {
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }

    // Free memory
    for(int i = 0; i < rows; i++) {
        delete[] arr[i];
    }

    delete[] arr;
    delete[] cols;

    return 0;
}