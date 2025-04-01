#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    cin.ignore();

    unordered_set<string> visited;
    int bayan_count = 0;

    for (int i = 0; i < N; ++i) {
        string store;
        getline(cin, store);

        if (visited.count(store)) {
            bayan_count++;
        }
        else {
            visited.insert(store);
        }
    }

    cout << bayan_count << endl;
    return 0;
}
