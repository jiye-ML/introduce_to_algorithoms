//#include <iostream>
//#include <map>
//
//using namespace std;
//
//int main()
//{
//	multimap<int, int> m;
//
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(1, 12));
//	m.insert(pair<int, int>(1, 13));
//	m.insert(pair<int, int>(1, 14));
//	m.insert(pair<int, int>(1, 15));
//	m.insert(pair<int, int>(1, 16));
//
//	for (multimap<int, int>::iterator iter = m.lower_bound(1); iter != m.upper_bound(1); ++iter)
//		cout << iter->second << endl;
//
//	cout << endl;
//
//	return 0;
//}