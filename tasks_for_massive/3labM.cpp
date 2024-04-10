#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> arr; // Создаем динамический массив (vector)
    int element;

    while (cin >> element) {
        arr.push_back(element); // Добавляем элементы в динамический массив
    }

    int sum = 0;
    for (int i = 0; i < arr.size(); ++i) {
        sum += arr[i];
    }

    cout << sum;

    return 0;
}




