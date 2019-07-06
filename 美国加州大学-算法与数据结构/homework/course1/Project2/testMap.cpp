//#include <iostream>
//#include <map>
//
//using namespace std;
//
//template <class T> struct greater : binary_function < T, T, bool > {
//	bool operator() (const T& x, const T& y) const
//	{
//		return x > y;
//	}
//};
//
//int main()
//{
//	multimap<double, int, greater<double>  > test;
//	test.insert(pair<double, int>(2.0, 2));
//	test.insert(pair<double, int>(3.0, 3));
//	test.insert(pair<double, int>(4.0, 4));
//	test.insert(pair<double, int>(4.0, 4));
//	test.insert(pair<double, int>(5.0, 5));
//	test.insert(pair<double, int>(1.0, 1));
//
//	for (multimap<double, int>::const_iterator iter = test.begin(); iter != test.end(); ++iter)
//	{
//		cout << iter->first << "  " << iter->second << endl;
//	}
//
//	int n;
//	cin >> n;
//
//	return 0;
//}