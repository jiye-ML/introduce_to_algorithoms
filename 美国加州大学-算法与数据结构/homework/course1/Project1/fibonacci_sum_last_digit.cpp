//#include <iostream>
//
//using namespace std;
//
//int fibonacci_sum_naive(long long n) {
//    if (n <= 1)
//        return n;
//
//    long long previous = 0;
//    long long current  = 1;
//    long long sum      = 1;
//
//    for (long long i = 0; i < n - 1; ++i) {
//        long long tmp_previous = previous;
//        previous = current;
//        current = tmp_previous + current;
//		current = current % 10;
//        sum += current;
//		sum = sum % 10;
//    }
//
//    return sum % 10;
//}
//
//int main() {
//    long long n = 0;
//    
//	while (cin >> n)
//	{
//		cout << fibonacci_sum_naive(n) << endl;
//	}
//}
