//#include <iostream>
//#include <cassert>
//#include <string>
//#include <vector>
//#include <map>
//
//using namespace std;
//
//
//// 计算
//long long eval(long long a, long long b, char op) {
//  if (op == '*') {
//    return a * b;
//  } else if (op == '+') {
//    return a + b;
//  } else if (op == '-') {
//    return a - b;
//  } else {
//    assert(0);
//  }
//}
//
//long long m[200][200];
//long long M[200][200];
//vector<long long> num;
//vector<char> op;
//
//int min_three(int a, int b, int c)
//{
//	return a < b ? (a < c ? a : c) : (b < c ? b : c);
//}
//
//int max_three(int a, int b, int c)
//{
//	return a < b ? (a < c ? c : b) : (a < c ? c : a);
//}
//
//pair<long long, long long> MinAndMax(int i, int j)
//{
//	long long min = INT_MAX;
//	long long max = INT_MIN;
//
//	for (int k = i; k < j; ++k)
//	{
//		long long a = eval(M[i][k], M[k + 1][j], op[k]);
//		long long b = eval(M[i][k], m[k + 1][j], op[k]);
//		long long c = eval(m[i][k], M[k + 1][j], op[k]);
//		long long d = eval(m[i][k], m[k + 1][j], op[k]);
//
//		min = min_three(min, a, min_three(b, c, d));
//		max = max_three(max, a, max_three(b, c, d));
//	}
//
//	return pair<long long, long long>(min, max);
//}
//
//// 总函数 得到最大值
//long long get_maximum_value(const string &exp) {
//  //write your code here
//	int n = exp.size();
//
//	for (int i = 0; i < n; i = i+ 2)
//	{
//		num.push_back(exp[i] - '0');
//		op.push_back(exp[i + 1]);
//	}
//
//	n = num.size();
//	for (int i = 0; i < n; ++i)
//	{
//		m[i][i] = num[i];
//		M[i][i] = num[i];
//	}
//
//	for (int s = 1; s < n; ++s)
//	{
//		for (int i = 0; i < n - s; ++i)
//		{
//			int j = i + s;
//			pair<long long, long long> temp = MinAndMax(i, j);
//			m[i][j] = temp.first;
//			M[i][j] = temp.second;
//		}
//	}
//
//  return M[0][n - 1];
//}
//
//int main() {
//  string s;
//  std::cin >> s;
//  std::cout << get_maximum_value(s) << '\n';
//
//  cout << endl;
//
//  return 0;
//}
