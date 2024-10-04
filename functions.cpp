



#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// Домашнє завдання 1

// Завдання 1
double power(double base, int exponent) {
    double result = 1;
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }
    return result;
}

// Завдання 2
int sumRange(int a, int b) {
    int sum = 0;
    for (int i = a; i <= b; ++i) {
        sum += i;
    }
    return sum;
}

// Завдання 3
bool isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; ++i) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num;
}

void findPerfectNumbers(int start, int end) {
    for (int i = start; i <= end; ++i) {
        if (isPerfect(i)) {
            cout << i << " є досконалим числом.\n";
        }
    }
}

// Завдання 4
void printCard(string card) {
    cout << "Ваша карта: " << card << endl;
}

// Завдання 5
bool isLucky(int number) {
    int firstHalf = 0, secondHalf = 0;
    for (int i = 0; i < 3; ++i) {
        firstHalf += number % 10;
        number /= 10;
    }
    for (int i = 0; i < 3; ++i) {
        secondHalf += number % 10;
        number /= 10;
    }
    return firstHalf == secondHalf;
}

// Домашнє завдання 2

// Завдання 1
int linearSearch(const vector<int>& arr, int key) {
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

// Завдання 2
int binarySearch(const vector<int>& arr, int key) {
    int left = 0, right = arr.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key) {
            return mid;
        }
        else if (arr[mid] < key) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return -1;
}

// Завдання 3
int binaryToDecimal(int binary) {
    int decimal = 0, base = 1;
    while (binary > 0) {
        int lastDigit = binary % 10;
        binary /= 10;
        decimal += lastDigit * base;
        base *= 2;
    }
    return decimal;
}

int main() {
    // Домашнє завдання 1

    // Завдання 1
    
    double base;
    int exponent;
    cout << "Введіть основу степеня: ";
    cin >> base;
    cout << "Введіть показник степеня: ";
    cin >> exponent;
    cout << base << "^" << exponent << " = " << power(base, exponent) << endl;

    // Завдання 2
    
    int a, b;
    cout << "Введіть два числа (a і b): ";
    cin >> a >> b;
    cout << "Сума чисел між " << a << " і " << b << " = " << sumRange(a, b) << endl;

    // Завдання 3
    
    int start, end;
    cout << "Введіть початок і кінець діапазону: ";
    cin >> start >> end;
    findPerfectNumbers(start, end);

    // Завдання 4
    
    string card;
    cout << "Введіть назву карти (наприклад, 'Туз Пік'): ";
    cin.ignore();
    getline(cin, card);
    printCard(card);

    // Завдання 5
    
    int number;
    cout << "Введіть шестизначне число: ";
    cin >> number;
    if (isLucky(number)) {
        cout << number << " є щасливим числом\n";
    }
    else {
        cout << number << " не є щасливим числом\n";
    }



    // Домашнє завдання 2

    // Завдання 1
 
    vector<int> arr = { 10, 20, 30, 40, 50, 60, 70, 80 };
    int key;
    cout << "Введіть елемент для пошуку: ";
    cin >> key;
    int result = linearSearch(arr, key);
    if (result != -1) {
        cout << "Елемент знайдений на позиції: " << result << endl;
    }
    else {
        cout << "Елемент не знайдений\n";
    }

    // Завдання 2
    
    cout << "Введіть елемент для пошуку: ";
    cin >> key;
    result = binarySearch(arr, key);
    if (result != -1) {
        cout << "Елемент знайдений на позиції: " << result << endl;
    }
    else {
        cout << "Елемент не знайдений\n";
    }

    // Завдання 3
    cout << "\nЗавдання 3: Перетворення двійкового числа в десяткове\n";
    int binary;
    cout << "Введіть двійкове число: ";
    cin >> binary;
    cout << "Десяткове значення: " << binaryToDecimal(binary) << endl;

    return 0;
}
