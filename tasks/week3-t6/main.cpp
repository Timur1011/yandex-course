/*
Author: vpetrigo
Task:
���������� ����� ���� ��������� ������������������, ������������� ������ 0.

������ ������� ������
�������� ������������������ ����� �����,
�������������� ������ 0 (���� ����� 0 � ������������������ �� ������, � ������ ��� ������� �� ���������.

������ �������� ������
�������� ����� �� ������.

Sample Input:
3
6
8
0
Sample Output:
17

*/

#include <iostream>

using namespace std;

int main() {
    int sum = 0;
    int n;

    while (cin >> n && n != 0) {
        sum += n;
    }

    cout << sum;

    return 0;
}
