//#include <iostream>
//#include <vector>
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
//double get_optimal_value(int capacity, vector<int> weights, vector<int> values) {
//  double value = 0.0;
//
//  multimap<double, int, greater<double> >  per;
//  int size = weights.size();
//
//  for (int i = 0; i < size; ++i)
//  {
//	  per.insert(pair<double, int>(values[i] / (weights[i] * 1.0), i));
//  }
//
//  multimap<double, int>::iterator iter = per.begin();
//  while (capacity > 0 && iter != per.end())
//  {
//	  int index = iter->second;
//	  if (capacity >= weights[index])
//	  {
//		  value += values[index];
//		  capacity = capacity - weights[index];
//	  }
//	  else
//	  {
//		  value += capacity * iter->first;
//		  capacity = 0;
//	  }
//	  iter++;
//  }
//
//  return value;
//}
//
//int main() {
//  int n;
//  int capacity;
//
//  std::cin >> n >> capacity;
//
//  vector<int> values(n);
//  vector<int> weights(n);
//
//  for (int i = 0; i < n; i++) {
//    std::cin >> values[i] >> weights[i];
//  }
//
//  double optimal_value = get_optimal_value(capacity, weights, values);
//
//  std::cout.precision(10);
//  cout.fill(3);
//  std::cout  << optimal_value << std::endl;
//
//  cin >> n;
//
//  return 0;
//}
