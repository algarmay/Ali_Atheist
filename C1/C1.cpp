#include <iostream>
using namespace std;

void getMin(int** tabl, int row, int col) {
    for (int i = 0; i < row; i++) {
        int min = *tabl[0];
        min = tabl[i][0];
        for (int j = 0; j < col; j++) {
            if (tabl[i][j] < min)
                min = tabl[i][j];
        }
        cout << "Min for row: " << i << " is: " << min << endl;
    }
}
void getMax(int** tabl, int row, int col) {
    for (int i = 0; i < row; i++) {
        int max = *tabl[0];
        max = tabl[i][0];
        for (int j = 0; j < col; j++) {
            if (tabl[i][j] > max)
                max = tabl[i][j];
        }
        cout << "Max for row: " << i << " is: " << max << endl;
    }
}
int main() {
    do {
        int rows, columns;
        cout << "rows: " << "columns: ";
        cin >> rows >> columns;
        int** table = new int* [rows];
        for (int i = 0; i < rows; i++) {
            table[i] = new int[columns];
        }
        //table[1][2] = 88;  
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                cout << "Columns values: ";
                cin >> table[i][j];
            }
            cout << "]" << endl;
        }
        for (int i = 0; i < rows; i++) {
            cout << "row" << i << "[";
            for (int j = 0; j < columns; j++) {
                cout << table[i][j] << "  ";
            }
            cout << "]" << endl;
        }
        //int min = *table[0];
        cout << endl;
        getMin(table, rows, columns);
        getMax(table, rows, columns);
    } while (true);
    system("pause>0");
}


