//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//
//// used 三种状态  0 未发现 1: 发现未访问  2: 已访问
//void dfs(vector<vector<int> > &adj, vector<int> &used, vector<int> &order, int x) {
//  //write your code here
//	used[x] = 1;
//	for (int v = 0; v < adj[x].size(); ++v)
//	{
//		if (used[adj[x][v]] == 0)
//			dfs(adj, used, order, adj[x][v]);
//	}
//	used[x] = 2;
//	order.push_back(x);
//}     
//
//vector<int> toposort(vector<vector<int> > adj) {
//	vector<int> used(adj.size(), false);
//  vector<int> order;
//  //write your code here
//  for (int u = 0; u < adj.size(); ++u)
//  {
//	  if (used[u] == 0)
//		  dfs(adj, used, order, u);
//  }
//  reverse(order.begin(), order.end());
//
//  return order;
//}
//
//int main() {
//  size_t n, m;
//  std::cin >> n >> m;
//
//  vector<vector<int> > adj(n, vector<int>());
//  for (size_t i = 0; i < m; i++) {
//    int x, y;
//    std::cin >> x >> y;
//    adj[x - 1].push_back(y - 1);
//  }
//
//  vector<int> order = toposort(adj);
//  for (size_t i = 0; i < order.size(); i++) {
//    std::cout << order[i] + 1 << " ";
//  }
//
//  cout << endl;
//
//  return 0;
//}
