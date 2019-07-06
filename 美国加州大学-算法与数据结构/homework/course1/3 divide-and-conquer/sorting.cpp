//#include <iostream>
//#include <vector>
//#include <cstdlib>
//#include <map>
//
//using namespace std;
//
//pair<int, int> partition2(vector<int> &a, int l, int r) {
//	// ��¼�α�
//  int x = a[l];
//  int j = l;
//  int last = l;
//  for (int i = l + 1; i <= r; i++) {
//	  // l �� last ���ǵ��� x ��
//	  if (a[i] == x)
//	  {
//		  last++;
//		  swap(a[last], a[i]);
//	  }
//	  // j ֮ǰ�� last ֮��Ķ���С�� x ��
//	  else if (a[i] < x) 
//	  {
//		  j++;
//		  swap(a[i], a[j]);
//	  }
//  }
//
//  // ������ <x  =x >x
//  for (int i = last; i >= l; --i)
//  {
//	  if (j <= last) break;
//	  swap(a[i], a[j]);
//	  --j;
//  }
//
//  return pair<int, int>(j + 1, j + 1 + last - l);
//}
//
//
//void randomized_quick_sort(vector<int> &a, int l, int r) {
//
//	// ��ֹ����
//  if (l >= r) {
//    return;
//  }
//
//  int k = l + rand() % (r - l + 1);
//  swap(a[l], a[k]);
//  pair<int, int> m = partition2(a, l, r);
//
//  randomized_quick_sort(a, l, m.first - 1);
//  randomized_quick_sort(a, m.second + 1, r);
//}
//
//int main() {
//	
//	// ����
//  int n;
//  std::cin >> n;
//  vector<int> a(n);
//  for (size_t i = 0; i < a.size(); ++i) {
//    std::cin >> a[i];
//  }
//
//  // ����
//  randomized_quick_sort(a, 0, a.size() - 1);
//
//  // ���
//  for (size_t i = 0; i < a.size(); ++i) {
//    std::cout << a[i] << ' ';
//  }
//}
