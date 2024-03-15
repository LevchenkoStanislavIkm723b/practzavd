/* Перша задача

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5}; // Заданий масив
    int sum = 0;                 // Початкова сума

    for(int i = 0; i < 5; i++) { // Цикл для обчислення суми
        sum += arr[i];
    }

    cout << "Сума: " << sum << endl; // Виведення суми

    return 0;
}
*/
/* Друга задача

#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int main() {
    vector<int> numbers;
    int number;

    cout << "Введіть числа через пробіл (для завершення введення натисніть Enter): ";

    while (cin >> number) {
        numbers.push_back(number);
    }

    if (numbers.empty()) {
        cout << "Масив пустий. Будь ласка, введіть хоча б одне число." << endl;
        return 1;
    }

    int min_element = numeric_limits<int>::max();
    int max_element = numeric_limits<int>::min();

    for (int num : numbers) {
        if (num < min_element) {
            min_element = num;
        }
        if (num > max_element) {
            max_element = num;
        }
    }

    cout << "Мінімальний елемент: " << min_element << endl;
    cout << "Максимальний елемент: " << max_element << endl;

    return 0;
}
*/
/* Третя задача

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numbers;
    int number;
    double sum = 0;

    cout << "Введіть числа через пробіл (для завершення введення натисніть Enter): ";

    while (cin >> number) {
        numbers.push_back(number);
        sum += number;  // Додаємо число до суми одразу після вводу
    }

    double average = sum / numbers.size();

    cout << "Середнє значення: " << average << endl;

    return 0;
}
*/
/* Четверта задача
  
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numbers;
    int number;
    int searchElement;

    cout << "Введіть числа через пробіл (для завершення введення натисніть Enter): ";
    while (cin >> number) {
        numbers.push_back(number);
    }

    cin.clear(); // Очищуємо будь-які помилки вводу
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ігноруємо залишки вводу до кінця рядка

    cout << "Введіть елемент для пошуку: ";
    cin >> searchElement;

    bool found = false;
    for (int elem : numbers) {
        if (elem == searchElement) {
            found = true;
            break;
        }
    }

    if (found) {
        cout << "Елемент знайдено в масиві." << endl;
    } else {
        cout << "Елемент не знайдено в масиві." << endl;
    }

    return 0;
}
*/
