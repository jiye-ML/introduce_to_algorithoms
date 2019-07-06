//#include <iostream>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//
//int bipartite(vector<vector<int> > &adj) {
//  //write your code here
//
//	queue<int> cur, next;
//
//	vector<int> color(adj.size(), 2);
//	color[0] = 0;
//	cur.push(0);
//	int  WHITE = 0;
//	while (!cur.empty())
//	{
//		WHITE = WHITE == 0 ? 1 : 0;
//		while (!cur.empty())
//		{
//			int u = cur.front(); cur.pop();
//			for (int v = 0; v < adj[u].size(); ++v)
//			{
//				if (color[adj[u][v]] == 2)
//				{
//					next.push(adj[u][v]);
//					color[adj[u][v]] = WHITE;
//				}
//				else if (color[adj[u][v]] == color[u])
//				{
//					return 0;
//				}
//			}
//		}
//		swap(cur, next);
//	}
//
//  return 1;
//}
//
//int main() {
//  int n, m;
//  std::cin >> n >> m;
//  vector<vector<int> > adj(n, vector<int>());
//  for (int i = 0; i < m; i++) {
//    int x, y;
//    std::cin >> x >> y;
//    adj[x - 1].push_back(y - 1);
//    adj[y - 1].push_back(x - 1);
//  }
//  std::cout << bipartite(adj);
//
//  cout << endl;
//
//  return 0;
//}
