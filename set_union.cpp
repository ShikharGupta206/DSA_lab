#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Enter size of set 1: ";
    cin >> n;
    int* set1 = new int[n];

    cout << "Enter elements of set 1: ";
    for (int i = 0; i < n; i++) {
        cin >> set1[i];
    }

    cout << "Enter size of set 2: ";
    cin >> m;
    int* set2 = new int[m];

    cout << "Enter elements of set 2: ";
    for (int i = 0; i < m; i++) {
        cin >> set2[i];
    }

    int* result = new int[m + n];
    int k = 0;

    
    for (int i = 0; i < n; i++) {
        result[k++] = set1[i];
    }

    for (int i = 0; i < m; i++) {
        bool found = false;
        for (int j = 0; j < k; j++) {
            if (set2[i] == result[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            result[k++] = set2[i];
        }
    }

    cout << "Union of sets: ";
    for (int i = 0; i < k; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
