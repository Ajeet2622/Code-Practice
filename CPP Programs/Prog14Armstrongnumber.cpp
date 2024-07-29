#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int n = 153;
    int sum = 0;
    int num = n;
    while (num > 0) {
        int digit = num % 10;
        //cout<<sum<<endl;
        int p = pow(digit, 3);
        cout << p << endl;
        sum = sum + p; // pow(digit, 3);
        num = num / 10;
        //cout<<digit<<sum<<endl;
    }
    cout << sum;
    if (n == sum) {
        cout << " armstrong";
    } else {
        cout << " Not armstrong";
    }

    return 0;
}
