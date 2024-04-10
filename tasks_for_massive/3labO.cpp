#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Сортировка массива
    sort(arr.begin(), arr.end());

    // Переворачиваем массив в обратном порядке
    reverse(arr.begin(), arr.end());

    // Вывод отсортированного и перевернутого массива
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}

