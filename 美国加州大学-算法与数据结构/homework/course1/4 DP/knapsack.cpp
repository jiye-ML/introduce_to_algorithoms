//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//
//int optimal_weight(int W, const vector<int> &w) {
//  //write your code here
//	const int n = w.size();
//	vector<vector<int> > value(n + 1, vector<int>(W + 1, 0));
//
//	for (int i = 1; i <= n; ++i)
//	{
//		for (int j = 1; j <= W; ++j)
//		{
//			value[i][j] = value[i - 1][j];
//			if (w[i - 1] <= j)
//			{
//				int val = value[i - 1][j - w[i - 1]] + w[i - 1];
//				if (value[i][j] < val)
//					value[i][j] = val;
//			}
//		}
//	}
//
//	return value[n][W];
//}
//
//int main() {
//
//	// ����
//  int n, W;
//  std::cin >> W >> n;
//  vector<int> w(n);
//  for (int i = 0; i < n; i++) {
//    std::cin >> w[i];
//  }
//
//  // �������
//  std::cout << optimal_weight(W, w) << '\n';
//}
