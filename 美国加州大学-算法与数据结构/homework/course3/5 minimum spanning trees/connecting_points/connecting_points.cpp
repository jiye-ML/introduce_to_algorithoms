//#include <algorithm>
//#include <iostream>
//#include <iomanip>
//#include <vector>
//#include <cmath>
//#include <map>
//#include <queue>
//
//using std::vector;
//using std::priority_queue;
//using std::multimap;
//
//class Point
//{
//public:
//	int x; 
//	int y;
//};
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
//	Point value;
//	double dist;
//
//	friend bool operator== (const Vertex& lhs, const Vertex& rhs)
//	{
//		return rhs.value.x == lhs.value.x && lhs.value.y == rhs.value.y;
//	}
//
//	friend bool operator< (const Vertex& lhs, const Vertex& rhs)
//	{
//		return lhs.dist > rhs.dist;
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
//// 计算两点之间的距离
//double distance(const Point& p, const Point& p2)
//{
//	double x = (p.x - p2.x) * (p.x - p2.x);
//	double y = (p.y - p2.y) * (p.y - p2.y);
//	double result = sqrt(x + y);
//	return result < 0 ? -result : result;
//}
//
//double minimum_distance(Graph& graph) {
//  double result = 0.;
//  //write your code here
//  graph.vertexs[0].dist = 0;
//
//  priority_queue<Vertex> q;
//  vector<Vertex> MST;
//
//  q.push(graph.vertexs[0]);
//  Vertex u;
//  while (!q.empty() && MST.size() < graph.vertexs.size())
//  {
//	  u = q.top(); q.pop();
//	  MST.push_back(u);
//	  for (Vertex v : graph.vertexs)
//	  {
//		  if (find(MST.begin(), MST.end(), v) == MST.end())
//		  {
//			  double w = distance(u.value, v.value);
//			  if (w < v.dist)
//			  {
//				  v.dist = w;
//				  q.push(v);
//			  }
//		  }
//	  }
//	  result += u.dist;
//  }
//
//  return result;
//} 
//
//int main() {
//  size_t n;
//  std::cin >> n;
//  vector<int> x(n), y(n);
//  for (size_t i = 0; i < n; i++) {
//    std::cin >> x[i] >> y[i];
//  }
//
//  // 构建数据结构
//  Graph graph;
//  Vertex vertex;
//  Edge edge;
//  // 构建点
//  vertex.dist = INT_MAX;
//  for (int i = 0; i < n; ++i)
//  {
//	  vertex.value.x = x[i];
//	  vertex.value.y = y[i];
//	  graph.vertexs.push_back(vertex);
//  }
//
//  std::cout << std::setprecision(10) << minimum_distance(graph) << std::endl;
//
//  std::cout << std::endl;
//
//  return 0;
//}
