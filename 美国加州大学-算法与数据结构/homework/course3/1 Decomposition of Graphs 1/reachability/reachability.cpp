//#include <iostream>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//
//int reach(vector<vector<int> > &adj, int x, int y) {
//  //write your code here
//
//	enum COLOR
//	{
//		WHITE,
//		GREY,
//		BLACK
//	};
//
//	// 利用队列辅助 广度优先搜索定义 可达
//	vector<COLOR> color(adj.size(), WHITE);
//	queue<int> cur;
//	queue<int> next;
//	cur.push(x);
//	color[x] = GREY;
//	int count = -1;
//	int ans;
//	while (!cur.empty())
//	{
//		++ count;
//		while (!cur.empty())
//		{
//			ans = cur.front(); cur.pop();
//			for (int i = 0; i < adj[ans].size(); ++i)
//			{
//				if (color[adj[ans][i]] == WHITE)
//				{
//					next.push(adj[ans][i]);
//					color[adj[ans][i]] = GREY;
//				}
//			}
//		}
//		color[ans] = BLACK;
//
//		if (ans == y) break;
//		swap(cur, next);
//	}
//
//	if (ans == y) return count;
//
//  return 0;
//}
//
//int main() {
//	// input
//  size_t n, m;
//  std::cin >> n >> m;
//
//  // structure
//  vector<vector<int> > adj(n, vector<int>());
//  for (size_t i = 0; i < m; i++) {
//    int x, y;
//    std::cin >> x >> y;
//    adj[x - 1].push_back(y - 1);
//    adj[y - 1].push_back(x - 1);
//  }
//
//  // problem
//  int x, y;
//  std::cin >> x >> y;
//
//  // solve and  output
//  std::cout << reach(adj, x - 1, y - 1);
//
//  cout << endl;
//
//  return 0;
//}
