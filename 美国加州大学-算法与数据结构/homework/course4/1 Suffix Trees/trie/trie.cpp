//#include <string>
//#include <iostream>
//#include <vector>
//#include <map>
//#include <fstream>
//
//using namespace std;
//
//ifstream file("\\trie\\sample_tests\\sample1");
//ifstream testFile("\\trie\\sample_tests\\sample1.a");
//
//// 每条边形式
//// (A, 1), (T, 2), (G, 3)
//typedef map<char, int> edges;
//// 结构
//// 0:(A, 1), 1:(T, 2), 2:(G, 3)
//typedef vector<edges> trie;
//
//trie build_trie(vector<string> & patterns) {
//  trie root;
//  root.resize(1);
//  // write your code here
//  edges* currentNode;
//  // 记录新插入节点的时间
//  int newNode = 0;
//  for (string pattern : patterns)
//  {
//	  currentNode = &root[0];
//	  for (size_t i = 0; i < pattern.size(); ++i)
//	  {
//		  char currentSymbol = pattern[i];
//		  // 在当前节点查找 字符
//		  if ((*currentNode)[currentSymbol] != 0) // 找到, 访问下一个顶点
//		  {
//			  currentNode = &root[(*currentNode)[currentSymbol]];
//		  }
//		  else // 没有找到， 在当前节点插入新节点
//		  {
//			  (*currentNode)[currentSymbol] = ++newNode;
//			  root.resize(root.size() + 1);
//			  currentNode = &root[newNode];
//		  }
//		  if (root[0].size() == 0)
//			  root.erase(root.begin());
//	  }
//  }
//
//  return root;
//}
//
//int main() {
//	//　输入
//  size_t n;
//  std::cin >> n;
//	// 构建模式字符串
//  vector<string> patterns;
//  for (size_t i = 0; i < n; i++) {
//    string s;
//    std::cin >> s;
//    patterns.push_back(s);
//  }
//
//  // 处理
//  // 构建后缀树
//  trie t = build_trie(patterns);
//
//  // 输出
//  for (size_t i = 0; i < t.size(); ++i) {
//    for (const auto & j : t[i]) {
//      std::cout << i << "->" << j.second << ":" << j.first << "\n";
//    }
//  }
//
//  cout << endl;
//
//  return 0;
//}