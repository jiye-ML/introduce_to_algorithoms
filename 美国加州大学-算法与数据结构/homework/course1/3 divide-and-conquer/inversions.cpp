//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int merge(vector<int> &a, vector<int> &b, size_t left, size_t mid,  size_t right)
//{
//	int i, j, k;
//	int inv_count = 0;
//
//	i = left; /* i is index for left subarray*/
//	j = mid; /* j is index for right subarray*/
//	k = left; /* k is index for resultant merged subarray*/
//	while ((i < mid ) && (j < right))
//	{
//		if (a[i] <= a[j])
//		{
//			b[k++] = a[i++];
//		}
//		else
//		{
//			b[k++] = a[j++];
//
//			/*this is tricky -- see above explanation/diagram for merge()*/
//			inv_count = inv_count + (mid - i);
//		}
//	}
//
//	while (i < mid)
//	{
//		b[k++] = a[i++];
//	}
//	while (j < right)
//	{
//		b[k++] = a[j++];
//	}
//
//	for (int i = left; i < right; ++i)
//	{
//		a[i] = b[i];
//	}
//
//	return inv_count;
//}
//
//// 得到逆序数目
//long long get_number_of_inversions(vector<int> &a, vector<int> &b, size_t left, size_t right) 
//{
//	long long number_of_inversions = 0;
//
//	// 终止条件
//	if (right <= left + 1) return number_of_inversions;
//
//	// 递归步骤
//	size_t ave = left + (right - left) / 2;
//	number_of_inversions += get_number_of_inversions(a, b, left, ave);
//	number_of_inversions += get_number_of_inversions(a, b, ave, right);
//
//	//write your code here
//	// 处理步骤
//	number_of_inversions += merge(a, b, left, ave, right);
//
//	return number_of_inversions;
//}
//
//int main() {
//
//	// 输入
//  int n;
//  std::cin >> n;
//  vector<int> a(n);
//  for (size_t i = 0; i < a.size(); i++) {
//    std::cin >> a[i];
//  }
//  vector<int> b(a.size());
//
//  // 处理并输出
//  std::cout << get_number_of_inversions(a, b, 0, a.size()) << '\n';
//}