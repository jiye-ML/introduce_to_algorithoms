//#include <iostream>
//#include <vector>
//#include <queue>
//#include <map>
//
//using namespace std;
//
//class Edge
//{
//public:
//	int source;
//	int destination;
//	int weigh;
//};
//
//class Vertex
//{
//public:
//	int value;
//	int dist;
//
//	friend bool operator< (const Vertex& lhs, const Vertex& rhs)
//	{
//		return rhs.dist < lhs.dist;
//	}
//};
//
//class Graph
//{
//public:
//	vector<Vertex> vertexs;
//	multimap<int, Edge> edges;
//};
//
//// 找到 u 到 v  的一条图中的最短路径 
//// 最短路径定义为 从 u 到 V 的一条权值最小的路
//int distance(Graph& graph, int u,  int v) {
//
//	// 使用优先队列管理当然最有的路
//	priority_queue<Vertex> q;
//	// 设置源节点距离为0
//	graph.vertexs[u].dist = 0;
//	q.push(graph.vertexs[u]);
//
//	Vertex next;
//	while (!q.empty())
//	{
//		next = q.top(); q.pop();
//		// 找到了直接返回， 因为节点本身存储了源节点到该节点的路径权的最小值
//		if (next.value == v)
//		{
//			return next.dist;
//		}
//		for (multimap<int, Edge>::iterator iter = graph.edges.lower_bound(next.value); iter != graph.edges.upper_bound(next.value); ++iter)
//		{
//			int destination = iter->second.destination;
//			if (graph.vertexs[destination].dist > next.dist + iter->second.weigh)
//			{
//				graph.vertexs[destination].dist = next.dist + iter->second.weigh;
//				q.push(graph.vertexs[destination]);
//			}
//		}
//	}
//
//  return -1;
//}
//
//int main() {
//	// 输入
//  int n, m;
//  std::cin >> n >> m;
//
//  // 构建数据结构
//  Graph graph;
//
//  // 填充数据
//  Vertex vertex;
//  Edge edge;
//
//  // 构建点
//  vertex.dist = INT_MAX;
//  for (int v = 0; v < n; ++v)
//  {
//	  vertex.value = v;
//	  graph.vertexs.push_back(vertex);
//  }
//
//  // 构建边
//  for (int i = 0; i < m; i++) {
//
//	  // 得到输入
//    int x, y, w;
//    std::cin >> x >> y >> w;
//
//	edge.source = x - 1;
//	edge.destination = y - 1;
//	edge.weigh = w;
//	graph.edges.insert(pair<int, Edge>(edge.source, edge));
//  }
//
//  // 源节点和目标节点
//  int s, t;
//  std::cin >> s >> t;
//  s--, t--;
//
//  // 输出
//  std::cout << distance(graph, s, t);
//
//  cout << endl;
//
//  return 0;
//}
