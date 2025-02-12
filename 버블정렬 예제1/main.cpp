#include <iostream>

using namespace std;

int N, A[500000];

int main()
{
	cin >> N;
	for (int i = 1; i <= N; i++)
		cin >> A[i];

    bool changed = false;
    for (int i = 1; i <= N + 1; i++) {
        changed = false;
        for (int j = 1; j <= N - i; j++) {
            if (A[j] > A[j + 1]) {
                changed = true;
                swap(A[j], A[j + 1]);
            }
        }
        if (changed == false) {
            cout << i << '\n';
            break;
        }
    }
    return 0;
}