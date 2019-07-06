//#include <algorithm>
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//long long max_dot_product(vector<int> a, vector<int> b) {
//  // write your code here
//  long long result = 0;
//
//  sort(a.begin(), a.end());
//  sort(b.begin(), b.end());
//
//  for (int i = a.size() - 1; i >= 0; i--) {
//    result += ((long long) a[i]) * b[i];
//  }
//  return result;
//}
//
//int main() {
//  size_t n;
//
//  while (cin >> n)
//  {
//	  vector<int> a(n), b(n);
//
//	  for (size_t i = 0; i < n; i++) {
//		  std::cin >> a[i];
//	  }
//	  for (size_t i = 0; i < n; i++) {
//		  std::cin >> b[i];
//	  }
//	  std::cout << max_dot_product(a, b) << std::endl;
//  }
//  
//}
