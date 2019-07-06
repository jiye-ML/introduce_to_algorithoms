//#include <iostream>
//#include <algorithm>
//#include<map>
//#include <vector>
//
//using namespace std;
//
//bool less_than(int num1, int num2, int let1, int let2)
//{
//	return num1 < num2 ||
//		(num1 == num2 && let1 < let2);
//}
//
//bool equal(int num1, int num2, int let1, int let2)
//{
//	return num2 == num1 &&  let2 == let1;
//}
//
//bool less_than_equal(int num1, int num2, int let1, int let2)
//{
//	return less_than(num1, num2, let1, let2) ||
//		equal(num1, num2, let1, let2);
//}
//
//pair<int, int> partition(vector<int>& a, vector<int>& b, int left, int right)
//{
//	int x = a[left];
//	int letx = b[left];
//	int begin = left + 1;
//	int end = left;
//
//	for (int i = left + 1; i < right + 1; ++i)
//	{
//		if (less_than_equal(a[i], x, b[i], letx))
//		{
//			end++;
//			swap(a[end], a[i]);
//			swap(b[end], b[i]);
//			if (less_than(a[end], x, b[end], letx))
//			{
//				swap(a[begin], a[end]);
//				swap(b[begin], b[end]);
//				begin++;
//			}
//		}
//	}
//
//	swap(a[begin - 1], a[left]);
//	swap(b[left], b[begin - 1]);
//
//	return pair<int, int>(begin, end);
//}
//
//void randomized_quick_sort(vector<int>& a, vector<int>& b, int left, int right)
//{
//	if (left >= right) return;
//	int k = rand() * (right - left);
//	k = k + left;
//
//	swap(a[left], a[k]);
//	swap(b[left], b[k]);
//	pair<int, int> m = partition(a, b, left, right);
//	randomized_quick_sort(a, b, left, m.first - 1);
//	randomized_quick_sort(a, b, m.second + 1, right);
//}
//
//
//vector<int> fast_count_segments(vector<int> starts, vector<int> ends, vector<int> points)
//{
//	vector<int> cnt(0, points.size());
//	const int LEFT = 1;
//	const int POINT = 2;
//	const int RIGHT = 3;
//
//	vector<int> starts_l(LEFT, starts.size());
//	vector<int> ends_r(RIGHT, ends.size());
//	vector<int> points_p(POINT, points.size());
//
//	vector<int> pairs_number(starts.begin(), starts.end());
//	pairs_number.insert(ends.begin(), ends.end());
//	pairs_number.insert(points.begin(), points.end());
//
//	vector<int> pairs_letter(starts_l.begin(), starts_l.end());
//	pairs_letter.insert(ends_r.begin(), ends_r.end());
//	pairs_letter.insert(points_p.begin(), points_p.end());
//
//	randomized_quick_sort(pairs_number, pairs_letter, 0, len(pairs_number) - 1);
//
//	int count_left = 0;
//
//	vector<int> point_counts;
//	for (int p : points)
//		point_counts[p] = 0;
//
//	for (int i = 0; i < pairs_number.size())
//	{
//		if (pairs_letter[i] == LEFT)
//			count_left++;
//		else if (pairs_letter[i] == RIGHT)
//			count_left--;
//		else if (pairs_letter[i] == POINT)
//			if (point_counts[pairs_number[i]] == 0)
//				point_counts[pairs_number[i]] += count_left;
//	}
//
//	for (int i = 0; i < points.size(); ++i)
//	{
//		cnt[i] = point_counts[points[i]];
//	}
//
//	return cnt;
//}
//
//vector<int> naive_count_segments(vector<int> starts, vector<int> ends, vector<int> points) {
//  vector<int> cnt(points.size());
//  for (size_t i = 0; i < points.size(); i++) {
//    for (size_t j = 0; j < starts.size(); j++) {
//      cnt[i] += starts[j] <= points[i] && points[i] <= ends[j];
//    }
//  }
//  return cnt;
//}
//
//int main() {
//
//	// 输入
//  int n, m;
//  std::cin >> n >> m;
//  vector<int> starts(n), ends(n);
//  for (size_t i = 0; i < starts.size(); i++) {
//    std::cin >> starts[i] >> ends[i];
//  }
//  vector<int> points(m);
//  for (size_t i = 0; i < points.size(); i++) {
//    std::cin >> points[i];
//  }
//
//  // 处理
//  //use fast_count_segments
//  vector<int> cnt = fast_count_segments(starts, ends, points);
//
//  // 输出
//  for (size_t i = 0; i < cnt.size(); i++) {
//    std::cout << cnt[i] << ' ';
//  }
//}
