//#include <algorithm>
//#include <iostream>
//#include <vector>
//#include<stack>
//
//using namespace std;
//
//struct Node {
//  int key;
//  int left;
//  int right;
//
//  Node() : key(0), left(-1), right(-1) {}
//  Node(int key_, int left_, int right_) : key(key_), left(left_), right(right_) {}
//};
//
//bool IsBinarySearchTree(const vector<Node>& tree) {
//	//Implement correct algorithm here
//	if (tree.size() < 1) return true;
//
//	stack<int> s;
//	s.push(0);
//	int root;
//	while (!s.empty())
//	{
//		root = s.top(); s.pop();
//		if (tree[root].left != -1)
//		{
//			if (tree[tree[root].left].key >= tree[root].key) return false;
//			s.push(tree[root].left);
//		}
//		if (tree[root].right != -1)
//		{
//			if (tree[tree[root].right].key < tree[root].key) return false;
//			s.push(tree[root].right);
//		}
//	}
//  return true;
//}
//
//int main() {
//  int nodes;
//  cin >> nodes;
//  vector<Node> tree;
//  for (int i = 0; i < nodes; ++i) {
//    int key, left, right;
//    cin >> key >> left >> right;
//    tree.push_back(Node(key, left, right));
//  }
//  if (IsBinarySearchTree(tree)) {
//    cout << "CORRECT" << endl;
//  } else {
//    cout << "INCORRECT" << endl;
//  }
//
//  cout << endl;
//
//  return 0;
//}
