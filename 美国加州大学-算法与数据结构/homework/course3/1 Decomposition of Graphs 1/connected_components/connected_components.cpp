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
//void dfs(vector<vector<int> > &adj, int u, vector<COLOR>& color)
//{
//	color[u] = GREY;
//	for (int v = 0; v < adj[u].size(); ++v)
//	{
//		if (color[adj[u][v]] == WHITE)
//		{
//			dfs(adj, adj[u][v], color);
//		}
//	}
//	color[u] = BLACK;
//}
//
//int number_of_components(vector<vector<int> > &adj) {
//  int res = 0;
//  //write your code here
//  
//  	vector<COLOR> color(adj.size(), WHITE);
//
//	for (int u = 0; u < adj.size(); ++u)
//	{
//		if (color[u] == WHITE)
//		{
//			dfs(adj, u, color);
//			res++;
//		}
//	}
//
//  return res;
//}
//
//int main() {
//  size_t n, m;
//  std::cin >> n >> m;
//  vector<vector<int> > adj(n, vector<int>());
//  for (size_t i = 0; i < m; i++) {
//    int x, y;
//    std::cin >> x >> y;
//    adj[x - 1].push_back(y - 1);
//    adj[y - 1].push_back(x - 1);
//  }
//  std::cout << number_of_components(adj);
//
//  cout << endl;
//
//  return 0;
//}
