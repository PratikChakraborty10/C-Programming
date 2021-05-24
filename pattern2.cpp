#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int i = 1; // Initialise i = 1
    int val = 1;  // Initialise a variable val = 1
    while(i <= n) {     // Checking wether i <= 1
        int j = 1;     // if true than initialize a variable j = 1
        while(j <= i) {  // checking wether j <= i
            cout << val;     //  if true then jumping into the while loop and print val i.e., 1 (as initialised)
            val = val + 1;  // increment val by 1
            j = j + 1;   // increment j by 1
        }                 // After this while loop end, j = 2, val = 2
                          // checking again i <= i ,it gives false so we enter the next line
        cout << endl;    // endl
        i = i + 1;    // increment i by 1
    }
}

// Now starting i = 2, val = 2
// i <= n , true -> j = 2,
// j <= i, true -> print val i.e., 2
// increment val by 1
// increment j by 1