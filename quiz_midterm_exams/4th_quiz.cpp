// #include <iostream>
// using namespace std;
// int main() {
//     int l, r;
//     cin >> l >> r;
//     for (int i = l; i <= r; ++i) {
//         if (i % 7 == 1 || i % 7 == 2 || i % 7 == 5) {
//             cout << i << " ";
//         }
//     }
//     return 0;
// }

// #include <iostream>
// #include <unordered_map>
// #include <string>

// using namespace std;

// int main() {
//     int n, m;
//     cin >> n >> m;

//     unordered_map<string, string> credentials;

//     // Заполнение базы данных логинов и паролей
//     for (int i = 0; i < n; ++i) {
//         string login, password;
//         cin >> login >> password;
//         credentials[login] = password;
//     }

//     // Проверка запросов
//     for (int i = 0; i < m; ++i) {
//         string login, password;
//         cin >> login >> password;

//         if (credentials.find(login) == credentials.end()) {
//             cout << "ошибка входа" << endl;
//         } else if (credentials[login] != password) {
//             cout << "ошибка пароля" << endl;
//         } else {
//             cout << "правильный пароль" << endl;
//         }
//     }

//     return 0;
// }

#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    unordered_map<string, string> credentials;

    // Filling the database with logins and passwords
    for (int i = 0; i < n; ++i) {
        string login, password;
        cin >> login >> password;
        credentials[login] = password;
    }

    // Checking the requests
    for (int i = 0; i < m; ++i) {
        string login, password;
        cin >> login >> password;

        if (credentials.find(login) == credentials.end()) {
            cout << "login error" << endl;
        } else if (credentials[login] != password) {
            cout << "password error" << endl;
        } else {
            cout << "correct password" << endl;
        }
    }

    return 0;
}