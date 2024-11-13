#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

template <typename T>
int binarySearch(const vector<T>& arr, const T& target) {// �G���j�M�禡
    int low = 0, high = arr.size() - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == target) {
            return mid;
        }
        else if (arr[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return -1; // �S�����
}

int main() {
    string type;
    int n, q;

    // Ū���C������
    while (cin >> type >> n >> q) { // Ū���w�ƧǪ����
        vector<string> data;

        if (type == "i") { // ��ƫ��A���
            vector<int> int_data(n);
            for (int i = 0; i < n; ++i) {
                cin >> int_data[i];
            }


            for (int i = 0; i < q; ++i) {// �B�z�C�Ӭd��
                int target;
                cin >> target;
                int result = binarySearch(int_data, target);// ����G���j�M
                cout << result << endl;
            }
        }
        else if (type == "s") {
            vector<string> str_data(n);
            for (int i = 0; i < n; ++i) {
                cin >> str_data[i];
            }// �r�ꫬ�A���

            for (int i = 0; i < q; ++i) {// �B�z�C�Ӭd��
                string target;
                cin >> target;
                int result = binarySearch(str_data, target);// ����G���j�M
                cout << result << endl;
            }
        }
    }

    return 0;
}