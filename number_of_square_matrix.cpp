#include <iostream>
using namespace std;

int countSquareSubmatrices(int m, int n) {
    int count = 0;
    for (int size = 1; size <= min(m, n); size++) {
        count += (m - size + 1) * (n - size + 1);
    }
    return count;
}

int main() {
    int m, n;
    cout << "Enter the number of rows (m): ";
    cin >> m;
    cout << "Enter the number of columns (n): ";
    cin >> n;

    int result = countSquareSubmatrices(m, n);
    cout << "The number of square submatrices in a " << m << "x" << n << " matrix is: " << result << endl;

    return 0;
}
