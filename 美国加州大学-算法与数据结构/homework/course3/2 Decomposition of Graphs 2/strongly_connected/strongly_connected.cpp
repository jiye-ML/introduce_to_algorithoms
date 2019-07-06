#include <algorithm>
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

enum COLOR
{
	WHITE,
	GREY,
	BLACK
};

class Vertex
{
public:
	Vertex* father;
	int lastTime;
	int value;
	COLOR color;

	friend bool operator< (const Vertex& lhs, const Vertex& rhs)
	{
		return rhs.lastTime < lhs.lastTime;
	}
};

// used 三种状态  0 未发现 1: 发现未访问  2: 已访问
void dfs(vector<vector<Vertex> > &adj, Vertex& u, int time, priority_queue<Vertex>& q) {
  //write your code here
	time++;
	u.color = GREY;
	for (vector<Vertex>::iterator v = adj[u.value].begin(); v != adj[u.value].end(); ++v)
	{
		if (v->color == WHITE)
		{
			v->father = &u;
			v->color = GREY;
			dfs(adj, *v, time, q);
		}
	}
	u.color = BLACK;
	u.lastTime = time;
	q.push(u);
}     

int number_of_strongly_connected_components(vector<vector<Vertex> > adj) {
  int result = 0;
  int time = 0;
  //write your code here
  priority_queue<Vertex> q;

  for (int u = 0; u < adj.size(); ++u)
  {
	  if (adj[u].size() <= 0) continue;
	  if ( adj[u][0].color == WHITE)
		  dfs(adj, adj[u][0], time, q);
  }

  Vertex u;
  while (!q.empty())
  {
	  u = q.top(); q.pop();
	  while (u.father != NULL && !q.empty())
	  {
		  u = q.top(); q.pop();
	  }
	  result++;
  }

  return result;
}

int main() {
  size_t n, m;
  std::cin >> n >> m;
  vector<vector<Vertex> > adj(n, vector<Vertex>());

  Vertex x, y;
  for (size_t i = 0; i < m; i++) {
    std::cin >> x.value >> y.value;
	x.father = NULL;
	y.father = NULL;
	x.color = WHITE;
	y.color = WHITE;
	x.lastTime = 0;
	y.lastTime = 0;
	x.value--;
	y.value--;
    adj[x.value].push_back(y);
  }
  std::cout << number_of_strongly_connected_components(adj);

  cout << endl;
  return 0;
}
