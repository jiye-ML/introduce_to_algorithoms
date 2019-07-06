//#include <cstdio>
//#include <cstdlib>
//#include <vector>
//#include <algorithm>
//#include <iostream>
//#include<fstream>
//
//using namespace std;
//
//fstream file(".\\merging_tables\\tests\\116");
//fstream testFile(".\\merging_tables\\tests\\116.a");
//
//struct DisjointSetsElement {
//	int size, parent, rank;
//
//	DisjointSetsElement(int size = 0, int parent = -1, int rank = 0) :
//		size(size), parent(parent), rank(rank) {}
//};
//
//struct DisjointSets {
//	int size;
//	int max_table_size;
//	vector <DisjointSetsElement> sets;
//
//	DisjointSets(int size) : size(size), max_table_size(0), sets(size) {
//		for (int i = 0; i < size; i++)
//			sets[i].parent = i;
//	}
//
//	int getParent(int table) {
//		// find parent and compress path
//		while (sets[table].parent != table)
//		{
//			int parent = sets[table].parent;
//			sets[table].parent = sets[parent].parent;
//			table = parent;
//		}
//
//		return table;
//	}
//
//	void merge(int destination, int source) {
//		int realDestination = getParent(destination);
//		int realSource = getParent(source);
//		if (realDestination != realSource) {
//			// merge two components
//			sets[realSource].parent = realDestination;
//			sets[realDestination].size = sets[realDestination].size + sets[realSource].size;
//			sets[realSource].size = 0;
//
//			if (max_table_size < sets[realDestination].size)
//			{
//				max_table_size = sets[realDestination].size;
//			}
//			if (sets[realDestination].rank > sets[realSource].rank)
//				return;
//			else if (sets[realDestination].rank < sets[realSource].rank)
//				sets[realDestination].rank = sets[realSource].rank + 1;
//			else
//			{
//				sets[realDestination].rank += 1;
//			}
//
//		}
//	}
//};
//
//int main() {
//
//	// 输入
//	int n, m;
//	file >> n >> m;
//
//	// 准备 tables
//	DisjointSets tables(n);
//	for (auto &table : tables.sets) {
//		file >> table.size;
//		tables.max_table_size = max(tables.max_table_size, table.size);
//	}
//
//	// 处理
//	for (int i = 0; i < m; i++) {
//		int destination, source;
//		file >> destination >> source;
//		--destination;
//		--source;
//
//		// 实现连个table的互联
//		tables.merge(destination, source);
//
//		// 输出互联后的table 的大小
//		int test;
//		testFile >> test;
//		if (test != tables.max_table_size)
//		{
//			cout << "fail" << endl;
//			break;
//		}
//	}
//
//
//	cout << endl;
//
//	return 0;
//}
