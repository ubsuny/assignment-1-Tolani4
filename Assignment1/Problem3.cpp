#include <iostream>
#include <limits>

using namespace std;

void compute_series() {
    int f_int = 2;
    long int f_long = 2;
    unsigned long int f_ulong = 2;
    
    cout << "n\tint\t\tlong int\tunsigned long int" << endl;
    
    for (int n = 0; n < 70; n++) {
        cout << n << "\t";
        
        if (f_int > 0)
            cout << f_int << "\t\t";
        else
            cout << "Overflow\t";

        if (f_long > 0)
            cout << f_long << "\t";
        else
            cout << "Overflow\t";

        if (f_ulong > 0)
            cout << f_ulong << "\t";
        else
            cout << "Overflow\t";

        cout << endl;

        // Stop before overflow
        if (f_int > 0) f_int *= 2;
        if (f_long > 0) f_long *= 2;
        if (f_ulong > 0) f_ulong *= 2;
    }
}

int main() {
    compute_series();
    return 0;
}
