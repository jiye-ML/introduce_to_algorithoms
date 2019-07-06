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
//// ÿ������ʽ
//// (A, 1), (T, 2), (G, 3)
//typedef map<char, int> edges;
//// �ṹ
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
//	// ��¼�²���ڵ��ʱ��
//	int newNode = 0;
//	for (string pattern : patterns)
//	{
//		currentNode = &root[0];
//		for (size_t i = 0; i < pattern.size(); ++i)
//		{
//			char currentSymbol = pattern[i];
//			// �ڵ�ǰ�ڵ���� �ַ�
//			if ((*currentNode)[currentSymbol] != 0) // �ҵ�, ������һ������
//			{
//				currentNode = &root[(*currentNode)[currentSymbol]];
//			}
//			else // û���ҵ��� �ڵ�ǰ�ڵ�����½ڵ�
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
//// ǰ׺ƥ��
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
//// ��ͷ��ʼ���ң� ����λ��
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
//	// ������
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
