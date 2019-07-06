//#include <algorithm>
//#include <cassert>
//#include <cstdio>
//#include <iostream>
//#include <string>
//#include <map>
//#include <vector>
//
//using namespace std;
//
//
//// 每条边形式
//// (A, 1), (T, 2), (G, 3)
//typedef map<char, int> edges;
//// 结构
//// 0:(A, 1), 1:(T, 2), 2:(G, 3)
//typedef vector<edges> trie;
//
//const char ENDING = '$';
//
//trie build_trie(const vector<string> & patterns) {
//	trie root;
//	root.resize(1);
//	// write your code here
//	edges* currentNode;
//	// 记录新插入节点的时间
//	int newNode = 0;
//	for (string pattern : patterns)
//	{
//		currentNode = &root[0];
//		for (size_t i = 0; i < pattern.size(); ++i)
//		{
//			char currentSymbol = pattern[i];
//			// 在当前节点查找 字符
//			if ((*currentNode)[currentSymbol] != 0) // 找到, 访问下一个顶点
//			{
//				currentNode = &root[(*currentNode)[currentSymbol]];
//			}
//			else // 没有找到， 在当前节点插入新节点
//			{
//				(*currentNode)[currentSymbol] = ++newNode;
//				root.resize(root.size() + 1);
//				currentNode = &root[newNode];
//			}
//			if (root[0].size() == 0)
//				root.erase(root.begin());
//		}
//		(*currentNode)[ENDING] = ++newNode;
//		root.resize(root.size() + 1);
//		currentNode = &root[newNode];
//	}
//
//	return root;
//}
//
//// 前缀匹配
//bool prefix_trie_matching(string& text, trie root)
//{
//	char symbol = text[0];
//
//	edges v = root[0];
//
//	int _next = 0;
//	while (true)
//	{
//		if (v[ENDING] != 0)
//			return true;
//		else if (v[symbol] != 0)
//		{
//			v = root[v[symbol]];
//			symbol = text[++_next];
//
//			if (_next == text.size())
//			{
//				return v[ENDING] != 0;
//			}
//		}
//		else
//		{
//			return false;
//		}
//	}
//}
//
//// 从头开始查找， 多少位置
//vector<int> trie_matching(string& text, trie root)
//{
//	vector<int> result;
//	int index = 0;
//	while (text.empty() == false && index < text.size())
//	{
//		bool _match = prefix_trie_matching(text.substr(index), root);
//		if (_match == true)
//			result.push_back(index);
//		index++;
//	}
//
//	return result;
//}
//
//vector <int> solve(string& text, int n, const vector <string>& patterns)
//{
//	vector <int> result;
//
//	// write your code here
//	// 建立树
//	trie root = build_trie(patterns);
//	result = trie_matching(text, root);
//
//	return result;
//}
//
//int main(void)
//{
//	string text;
//	cin >> text;
//
//	int n;
//	cin >> n;
//
//	vector <string> patterns(n);
//	for (int i = 0; i < n; i++)
//	{
//		cin >> patterns[i];
//	}
//
//	vector <int> ans;
//	ans = solve(text, n, patterns);
//
//	for (int i = 0; i < (int)ans.size(); i++)
//	{
//		cout << ans[i];
//		if (i + 1 < (int)ans.size())
//		{
//			cout << " ";
//		}
//		else
//		{
//			cout << endl;
//		}
//	}
//
//	cout << endl;
//
//	return 0;
//}
