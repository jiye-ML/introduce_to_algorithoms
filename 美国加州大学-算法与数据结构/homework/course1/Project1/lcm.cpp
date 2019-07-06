//#include <iostream>
//
//using namespace std;
//
//long long lcm_naive(int a, int b) {
//  for (long l = 1; l <= (long long) a * b; ++l)
//    if (l % a == 0 && l % b == 0)
//      return l;
//
//  return (long long) a * b;
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
//long long lcm_fast(int a, int b)
//{
//	int ans = 1;
//
//	int gcd = gcd_fast(a, b);
//
//	a = a / gcd;
//	b = b / gcd;
//
//	ans = gcd * a * b;
//
//	return ans;
//}
//
//int main() {
//  int a, b;
//  
//  while (cin >> a >> b)
//  {
//	  cout << lcm_fast(a, b) << endl;
//  }
//
//  return 0;
//}
