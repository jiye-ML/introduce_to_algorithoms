#include <cstdio>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

struct DisjointSetsElement {
	int size, parent, rank;
	
	DisjointSetsElement(int size = 0, int parent = -1, int rank = 0):
	    size(size), parent(parent), rank(rank) {}
};

struct DisjointSets {
	int size;
	int max_table_size;
	vector <DisjointSetsElement> sets;

	DisjointSets(int size): size(size), max_table_size(0), sets(size) {
		for (int i = 0; i < size; i++)
			sets[i].parent = i;
	}

	int getParent(int table) {
		// find parent and compress path
		while (sets[table].parent != -1)
		{
			int parent = sets[table].parent;
			sets[table].parent = sets[parent].parent;
			table = parent;
		}

		return table;
	}

	void merge(int destination, int source) {
		int realDestination = getParent(destination);
		int realSource = getParent(source);
		if (realDestination != realSource) {
			// merge two components
			if (realSource == realDestination)
				return;
			sets[realSource].parent = realDestination;
			sets[destination].size = sets[destination].size + sets[realSource].size;
			sets[realSource].size = 0;

			if (max_table_size < sets[destination].size )
			{
				max_table_size = sets[destination].size;
			}
			if (sets[realDestination].rank > sets[realSource].rank)
				return;
			else if (sets[realDestination].rank < sets[realSource].rank)
				sets[realDestination].rank = sets[realSource].rank + 1;
			else
			{
				sets[realDestination].rank += 1;
			}

		}		
	}
};

int main() {

	// ����
	int n, m;
	cin >> n >> m;

	// ׼�� tables
	DisjointSets tables(n);
	for (auto &table : tables.sets) {
		cin >> table.size;
		tables.max_table_size = max(tables.max_table_size, table.size);
	}

	// ����
	for (int i = 0; i < m; i++) {
		int destination, source;
		cin >> destination >> source;
                --destination;
                --source;
		
		// ʵ������table�Ļ���
		tables.merge(destination, source);

		// ����������table �Ĵ�С
	    cout << tables.max_table_size << endl;
	}

	return 0;
}
