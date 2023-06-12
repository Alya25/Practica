#include <iostream>
#include <vector>
using namespace std;
vector<int> DoorState(int n) {
    vector<int> doors(n, 0); // двери сначала закрыты
    for (int i = 1; i <= n; i++) {
        for (int j = i - 1; j < n; j += i) { // переключается каждая i-ая дверь
            doors[j] = !doors[j];
            
        }
    }
    vector<int> result;
    for (int i = 0; i < n; i++) {
        if (doors[i] == 1) { // если дверь открыта, добавляем ее номер в результат
            result.push_back(i + 1);
        }
    }
    return result;
}

int main() {
    int n = 100;
   vector<int> result = DoorState(n);
    for (int door : result) {
        cout << door << " ";
    }
    cout << endl;

    return 0;
}
