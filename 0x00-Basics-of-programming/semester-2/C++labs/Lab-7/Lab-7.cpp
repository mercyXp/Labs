#include <iostream>
#include <cmath>

using namespace std;

void Fun() {
	int N = 10;  //number of spaced points
	double xStart = 1, xEnd = 4, step = (xEnd - xStart) / (N - 1), f;

	cout << "x"<<"\t"<<" f(x)=sin(x)/x\n";
	for (double x = xStart; x <= xEnd; x += step) {
		if (x == 0) { //to avoid division by 0
			continue;	//skip the case when x = 0
		}
		f = sin(x) / x;
		cout << x << "\t " <<  f << "\n";
	}
}

void Fib() {
    double MAX;
    cout << "\nEnter the maximum value for the sum of Fibonacci numbers (MAX): ";
    cin >> MAX;

    long long a = 0, b = 1, sum = 0, S = 0;
    int N = 0;

    while (S <= MAX) {
        S += a;
        N++;
        // Print the current Fibonacci number and the current sum
        cout << "Fibonacci number " << N << ": " << a << ", Sum: " << S << endl;
        // Next Fibonacci number
        long long temp = a;
        a = b;
        b = temp + b;
    }
    cout << "\nResult: After " << N << " Fibonacci numbers, the sum S = " << S << " exceeds MAX = " << MAX << endl;

}
int main() {
    cout << "\nTask 1: Calculate values of the function f(x) = sin(x) / x\n";
	Fun();
    cout << "\nTask 2: Sum of the first Fibonacci numbers\n";
    Fib();

	return 0;
}
