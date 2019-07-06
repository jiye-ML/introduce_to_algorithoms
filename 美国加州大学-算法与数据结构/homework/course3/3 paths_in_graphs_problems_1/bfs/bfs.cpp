//#include <iostream>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//
//int distance(vector<vector<int> > &adj, int s, int t) {
//  //write your code here
//	queue<int> cur, next;
//	vector<int> dist(adj.size(), INT_MAX);
//
//	dist[s] = 0;
//	cur.push(s);
//	int count = 0;
//	while (!cur.empty())
//	{
//		count++;
//		while (!cur.empty())
//		{
//			int u = cur.front(); cur.pop();
//			if (u == t) return count - 1;
//			for (int v = 0; v < adj[u].size(); ++v)
//			{
//				if (dist[adj[u][v]] == INT_MAX)
//				{
//					next.push(adj[u][v]);
//					dist[adj[u][v]] = count;
//				}
//			}
//		}
//		swap(cur, next);
//	}
//
//  return -1;
//}
//
//int main() {
//	// ����
//  int n, m;
//  std::cin >> n >> m;
//
//  // �ڽӾ��� ��ʾͼ
//  vector<vector<int> > adj(n, vector<int>());
//  for (int i = 0; i < m; i++) {
//    int x, y;
//    std::cin >> x >> y;
//    adj[x - 1].push_back(y - 1);
//    adj[y - 1].push_back(x - 1);
//  }
//
//  // Դ�ڵ��Ŀ��ڵ�
//  int s, t;
//  std::cin >> s >> t;
//  s--, t--;
//
//  // ����
//  std::cout << distance(adj, s, t);
//
//  cout << endl;
// 
//  return 0;
//}
