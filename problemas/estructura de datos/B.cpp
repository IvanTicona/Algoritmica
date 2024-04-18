#include <iostream>
using namespace std;

int main() {
    while (true) {
        int s, b;
        cin >> s >> b;

        if (s == 0 && b == 0) {
            break;
        }

        int left[100005], right[100005];

        for (int i = 1; i <= s; i++) {
            left[i] = i - 1;
            right[i] = i + 1;
        }

        for (int i = 0; i < b; i++) {
            int l, r;
            cin >> l >> r;

            if (left[l] > 0) {
                cout << left[l] << " ";
            } else {
                cout << "* ";
            }

            if (right[r] <= s) {
                cout << right[r] << endl;
            } else {
                cout << "*" << endl;
            }

            left[right[r]] = left[l];
            right[left[l]] = right[r];
        }

        cout << "-" << endl;
    }

    return 0;
}