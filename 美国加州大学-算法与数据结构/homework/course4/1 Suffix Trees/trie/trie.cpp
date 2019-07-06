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
//// ÿ������ʽ
//// (A, 1), (T, 2), (G, 3)
//typedef map<char, int> edges;
//// �ṹ
//// 0:(A, 1), 1:(T, 2), 2:(G, 3)
//typedef vector<edges> trie;
//
//trie build_trie(vector<string> & patterns) {
//  trie root;
//  root.resize(1);
//  // write your code here
//  edges* currentNode;
//  // ��¼�²���ڵ��ʱ��
//  int newNode = 0;
//  for (string pattern : patterns)
//  {
//	  currentNode = &root[0];
//	  for (size_t i = 0; i < pattern.size(); ++i)
//	  {
//		  char currentSymbol = pattern[i];
//		  // �ڵ�ǰ�ڵ���� �ַ�
//		  if ((*currentNode)[currentSymbol] != 0) // �ҵ�, ������һ������
//		  {
//			  currentNode = &root[(*currentNode)[currentSymbol]];
//		  }
//		  else // û���ҵ��� �ڵ�ǰ�ڵ�����½ڵ�
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
//	//������
//  size_t n;
//  std::cin >> n;
//	// ����ģʽ�ַ���
//  vector<string> patterns;
//  for (size_t i = 0; i < n; i++) {
//    string s;
//    std::cin >> s;
//    patterns.push_back(s);
//  }
//
//  // ����
//  // ������׺��
//  trie t = build_trie(patterns);
//
//  // ���
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