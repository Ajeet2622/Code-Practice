#include <iostream>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" ,stdin);
	freopen("output.txt" , "w" ,stdout);
	#endif
    int a, b, c;
    cin >> a >> b >> c;

    if (a > b) {
        if (a > c) {
            cout << "Greatest number is: " << a;
        } else {
            cout << "Greatest number is: " << c;
        }
    } else {
        if (b > c) {
            cout << "Greatest number is: " << b;
        } else {
            cout << "Greatest number is: " << c;
        }
    }

    return 0;
}
