//#include <algorithm>
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
///* Function to find the candidate for Majority */
//int findCandidate(vector<int> &a, int size)
//{
//	int maj_index = 0, count = 1;
//	int i;
//	for (i = 1; i < size; i++)
//	{
//		if (a[maj_index] == a[i])
//			count++;
//		else
//			count--;
//		if (count == 0)
//		{
//			maj_index = i;
//			count = 1;
//		}
//	}
//	return a[maj_index];
//}
//
//int get_majority_element(vector<int> &a, int left, int right) 
//{  
//	if (left == right) return -1;
//	if (left + 1 == right) return a[left];
//	//write your code here
//	int cand = findCandidate(a, a.size());
//	int count = 0;
//	for (int i = left; i < right; ++i)
//	{
//		if (a[i] == cand)
//			count++;
//	}
//
//	if (count > a.size() / 2) return cand;
//
//  return -1;
//}
//
//int main() {
//  int n;
//  std::cin >> n;
//  vector<int> a(n);
//  for (size_t i = 0; i < a.size(); ++i) {
//    std::cin >> a[i];
//  }
//  std::cout << (get_majority_element(a, 0, a.size()) != -1) << '\n';
//
//  int temp;
//  cin >> temp;
//  return 0;
//}
//
//
//
//
//
//
//
//
