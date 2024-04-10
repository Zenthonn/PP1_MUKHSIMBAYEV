#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        arr[i] = arr[i] * arr[i]; // Вычисляем квадрат элемента и сохраняем обратно в массив
    }

    // Вывод измененного массива
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}





