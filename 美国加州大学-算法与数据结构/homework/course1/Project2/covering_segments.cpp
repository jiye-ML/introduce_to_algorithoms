//#include <algorithm>
//#include <iostream>
//#include <climits>
//#include <vector>
//
//using namespace std;
//
//
//struct Segment {
//  int start, end;
//  bool operator<(const Segment s)
//  {
//	  return this->end <= s.end;
//  }
//};
//
//vector<int> optimal_points(vector<Segment> &segments) {
//  vector<int> points;
//  //write your code here
//  sort(segments.begin(), segments.end());
//  vector<Segment>::iterator iter = segments.begin();
//  vector<Segment>::iterator next_iter = next(iter);
//  while (next_iter  != segments.end())
//  {
//	  if (iter->end >= next_iter->start)
//	  {
//		  iter->start = next_iter->start;
//		  iter->end = min(iter->end, next_iter->end);
//		  segments.erase(next_iter);
//		  next_iter = next(iter);
//	  }
//	  else
//	  {
//		  iter = next_iter;
//		  next_iter = next(iter);
//	  }
//  }
//
//  for (size_t i = 0; i < segments.size(); ++i) {
//    points.push_back(segments[i].end);
//  }
//
//  vector<int>::iterator pos = unique(points.begin(), points.end());
//  points.erase(pos, points.end());
//
//  return points;
//}
//
//int main() {
//  int n;
//  std::cin >> n;
//  vector<Segment> segments(n);
//  for (size_t i = 0; i < segments.size(); ++i) {
//    std::cin >> segments[i].start >> segments[i].end;
//  }
//  vector<int> points = optimal_points(segments);
//  std::cout << points.size() << "\n";
//  for (size_t i = 0; i < points.size(); ++i) {
//    std::cout << points[i] << " ";
//  }
//
//  cin >> n;
//}
