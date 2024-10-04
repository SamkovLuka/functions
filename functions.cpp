



#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// ������ �������� 1

// �������� 1
double power(double base, int exponent) {
    double result = 1;
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }
    return result;
}

// �������� 2
int sumRange(int a, int b) {
    int sum = 0;
    for (int i = a; i <= b; ++i) {
        sum += i;
    }
    return sum;
}

// �������� 3
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
            cout << i << " � ���������� ������.\n";
        }
    }
}

// �������� 4
void printCard(string card) {
    cout << "���� �����: " << card << endl;
}

// �������� 5
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

// ������ �������� 2

// �������� 1
int linearSearch(const vector<int>& arr, int key) {
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

// �������� 2
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

// �������� 3
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
    // ������ �������� 1

    // �������� 1
    
    double base;
    int exponent;
    cout << "������ ������ �������: ";
    cin >> base;
    cout << "������ �������� �������: ";
    cin >> exponent;
    cout << base << "^" << exponent << " = " << power(base, exponent) << endl;

    // �������� 2
    
    int a, b;
    cout << "������ ��� ����� (a � b): ";
    cin >> a >> b;
    cout << "���� ����� �� " << a << " � " << b << " = " << sumRange(a, b) << endl;

    // �������� 3
    
    int start, end;
    cout << "������ ������� � ����� ��������: ";
    cin >> start >> end;
    findPerfectNumbers(start, end);

    // �������� 4
    
    string card;
    cout << "������ ����� ����� (���������, '��� ϳ�'): ";
    cin.ignore();
    getline(cin, card);
    printCard(card);

    // �������� 5
    
    int number;
    cout << "������ ����������� �����: ";
    cin >> number;
    if (isLucky(number)) {
        cout << number << " � �������� ������\n";
    }
    else {
        cout << number << " �� � �������� ������\n";
    }



    // ������ �������� 2

    // �������� 1
 
    vector<int> arr = { 10, 20, 30, 40, 50, 60, 70, 80 };
    int key;
    cout << "������ ������� ��� ������: ";
    cin >> key;
    int result = linearSearch(arr, key);
    if (result != -1) {
        cout << "������� ��������� �� �������: " << result << endl;
    }
    else {
        cout << "������� �� ���������\n";
    }

    // �������� 2
    
    cout << "������ ������� ��� ������: ";
    cin >> key;
    result = binarySearch(arr, key);
    if (result != -1) {
        cout << "������� ��������� �� �������: " << result << endl;
    }
    else {
        cout << "������� �� ���������\n";
    }

    // �������� 3
    cout << "\n�������� 3: ������������ ��������� ����� � ���������\n";
    int binary;
    cout << "������ ������� �����: ";
    cin >> binary;
    cout << "��������� ��������: " << binaryToDecimal(binary) << endl;

    return 0;
}
