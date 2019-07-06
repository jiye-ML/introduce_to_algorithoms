//#include <iostream>
//
//using namespace std;
//
//int gcd_naive(int a, int b) {
//  int current_gcd = 1;
//  for (int d = 2; d <= a && d <= b; d++) {
//    if (a % d == 0 && b % d == 0) {
//      if (d > current_gcd) {
//        current_gcd = d;
//      }
//    }
//  }
//  return current_gcd;
//}
//
//int gcd_fast(int a, int b)
//{
//	if (a < b)
//		swap(a, b);
//
//	int r = 0;
//	while (b)
//	{
//		r = a % b;
//		a = b;
//		b = r;
//	}
//	
//	return a;
//}
//
//int main() {
//  int a, b;
//
//  while (cin >> a >> b)
//  {
//	  std::cout << gcd_naive(a, b) << std::endl;
//  }
// 
//  return 0;
//}
