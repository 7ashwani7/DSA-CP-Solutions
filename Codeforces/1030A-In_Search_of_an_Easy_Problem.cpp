#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    bool check = false;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if(a == 1){
            check = true;
        }
    }
    if(check){
        cout << "HARD";
    } else {
        cout << "EASY";
    }
    return 0;
}
