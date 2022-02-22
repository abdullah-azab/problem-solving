#include <bits/stdc++.h>

using namespace std;

int main() {
    string in="";
    string available="";

    cin >> in;
    cin >> available;

    int dil = 0;
    int left = 0;
    int right = 0;

    for (int i = 0; i < in.length(); i++) {
        if (in[i] == '|') {
            dil = i;
            left = i;
            break;
        }
    }

    right = in.length() - (left + 1);
    int l = 0;
    int r = dil + 1;
    int av = 0;

    if ((available.length() + left + right) % 2 == 0
        && available.length() + left + right > 0
        && left <= (right + available.length())
        && right <= (left + available.length())) {

        int mid = (available.length() + left + right) / 2;

        for (int i = 0; i <= (available.length() + left + right); i++) {

            if (i == mid ) {
                cout << '|';
            } else if (i < mid ) {

                if (l < dil) {
                    cout << in[l++];
                } else {
                    cout << available[av++];
                }

            } else if (i > mid ) {

                if (r < in.length()) {
                    cout << in[r++];
                } else {
                    cout << available[av++];
                }

            }

        }

    } else {

        cout << "Impossible";
    }

    return 0;
}
