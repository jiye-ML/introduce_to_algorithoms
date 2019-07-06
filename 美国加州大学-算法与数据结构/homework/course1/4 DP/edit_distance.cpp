//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//int min_tree(int a, int b, int c)
//{
//	return a < b ? (a < c ? a : c) : (b < c? b : c);
//}
//
//int edit_distance(const string &str1, const string &str2) {
//  //write your code here
//	const int n = str1.size();
//	const int m = str2.size();
//	vector<vector<int> > dis(n +1, vector<int>(m + 1, 0));
//
//	for (int i = 0; i <= m; ++i)
//		dis[0][i] = i;
//	for (int i = 0; i <= n; ++i)
//		dis[i][0] = i;
//
//	for (int j = 1; j <= m; ++j)
//	{
//		for (int i = 1; i <= n; ++i)
//		{
//			int insertion = dis[i][j - 1] + 1;
//			int deleteion = dis[i - 1][j] + 1;
//			int match = dis[i - 1][j - 1];
//			int mismatch = dis[i - 1][j - 1] + 1;
//
//			if (str1[i - 1] == str2[j - 1])
//				dis[i][j] = min_tree(insertion, deleteion, match);
//			else
//				dis[i][j] = min_tree(insertion, deleteion, mismatch);
//		}
//	}
//			
//  return dis[n][m];
//}
//
//int main() {
//
//	// 输入
//  string str1;
//  string str2;
//  std::cin >> str1 >> str2;
//
//  // 处理并输出
//  std::cout << edit_distance(str1, str2) << std::endl;
//
//  getchar();
//
//  return 0;
//}
