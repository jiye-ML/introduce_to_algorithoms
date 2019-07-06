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
//// �ҵ� u �� v  ��һ��ͼ�е����·�� 
//// ���·������Ϊ �� u �� V ��һ��Ȩֵ��С��·
//int distance(Graph& graph, int u,  int v) {
//
//	// ʹ�����ȶ��й���Ȼ���е�·
//	priority_queue<Vertex> q;
//	// ����Դ�ڵ����Ϊ0
//	graph.vertexs[u].dist = 0;
//	q.push(graph.vertexs[u]);
//
//	Vertex next;
//	while (!q.empty())
//	{
//		next = q.top(); q.pop();
//		// �ҵ���ֱ�ӷ��أ� ��Ϊ�ڵ㱾��洢��Դ�ڵ㵽�ýڵ��·��Ȩ����Сֵ
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
//	// ����
//  int n, m;
//  std::cin >> n >> m;
//
//  // �������ݽṹ
//  Graph graph;
//
//  // �������
//  Vertex vertex;
//  Edge edge;
//
//  // ������
//  vertex.dist = INT_MAX;
//  for (int v = 0; v < n; ++v)
//  {
//	  vertex.value = v;
//	  graph.vertexs.push_back(vertex);
//  }
//
//  // ������
//  for (int i = 0; i < m; i++) {
//
//	  // �õ�����
//    int x, y, w;
//    std::cin >> x >> y >> w;
//
//	edge.source = x - 1;
//	edge.destination = y - 1;
//	edge.weigh = w;
//	graph.edges.insert(pair<int, Edge>(edge.source, edge));
//  }
//
//  // Դ�ڵ��Ŀ��ڵ�
//  int s, t;
//  std::cin >> s >> t;
//  s--, t--;
//
//  // ���
//  std::cout << distance(graph, s, t);
//
//  cout << endl;
//
//  return 0;
//}
