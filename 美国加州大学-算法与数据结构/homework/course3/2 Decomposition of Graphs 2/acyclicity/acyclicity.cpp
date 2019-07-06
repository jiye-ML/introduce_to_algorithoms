//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//enum COLOR
//{
//	WHITE,
//	GREY,
//	BLACK
//};
//
//void dfs(vector<vector<int> > &adj, vector<COLOR>& color, int u, int& circle)
//{
//	color[u] = GREY;
//	for (int v = 0; v < adj[u].size(); ++v)
//	{
//		if (color[adj[u][v]] == GREY)
//			circle++;
//		if (color[adj[u][v]] == WHITE)
//			dfs(adj, color, adj[u][v], circle);
//	}
//	color[u] = BLACK;
//
//}
//
//int acyclic(vector<vector<int> > &adj) {
//  //write your code here
//	vector<COLOR> color(adj.size(), WHITE);
//	int circle = 0;
//	for (int u = 0; u < adj.size(); ++u)
//	{
//		if (color[u] == WHITE)
//			dfs(adj, color, u, circle);
//	}
//
//  return circle;
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
//  std::cout << acyclic(adj);
//
//  cout << endl;
//
//  return 0;
//}
