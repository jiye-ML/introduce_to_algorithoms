//#include <iostream>
//#include <vector>
//#include <map>
//#include <algorithm>
//
//using namespace std;
//
//vector<int> optimal_sequence(int n) {
//  std::vector<int> sequence;
//  while (n >= 1) {
//    sequence.push_back(n);
//    if (n % 3 == 0) {
//      n /= 3;
//    } else if (n % 2 == 0) {
//      n /= 2;
//    } else {
//      n = n - 1;
//    }
//  }
//  reverse(sequence.begin(), sequence.end());
//  return sequence;
//}
//
//// dp
//vector<int>  optimal_sequence_dp(int n)
//{
//	std::vector<int> sequence(n, 0);
//	map<int, int> trace;
//
//	trace.insert(0, 0);
//
//	int i = 1;
//	while (i <= n)
//	{
//		int valueDiv3 = (i % 3 == 0) ? trace[i / 3] : n;
//		int valueDiv2 = (i % 2 == 0) ? trace[i / 2] : n;
//		int valueMin = trace[i - 1];
//
//		int value = 0;
//		if (valueDiv3 <= valueDiv2 && valueDiv3 <= valueMin) value = i / 3;
//		else if (valueDiv2 <= valueDiv3 && valueDiv2 <= valueMin) value = i / 2;
//		else value = i - 1;
//
//		int min = trace[value] + 1;
//
//		trace.insert(i, min);
//		++i;
//	}
//
//	sequence.push_back(n);
//	while (n > 0)
//	{
//		int valueDiv3 = (n % 3 == 0) ? trace[n / 3] : n;
//		int valueDiv2 = (n % 2 == 0) ? trace[n / 2] : n;
//		int valueMin = trace[n - 1];
//
//		if (valueDiv3 <= valueDiv2 && valueDiv3 <= valueMin) n = n / 3;
//		else if (valueDiv2 <= valueDiv3 && valueDiv2 <= valueMin) n = n / 2;
//		else n = n - 1;
//
//		sequence.push_back(n);
//	}
//
//	reverse(sequence.begin(), sequence.end());
//
//	return sequence;
//}
//
//int main() {
//  int n;
//  std::cin >> n;
//  vector<int> sequence = optimal_sequence_dp(n);
//  std::cout << sequence.size() - 1 << std::endl;
//  for (size_t i = 0; i < sequence.size(); ++i) {
//    std::cout << sequence[i] << " ";
//  }
//}
