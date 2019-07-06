//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <stack>
//#include <list>
//#include <fstream>
//#if defined(__unix__) || defined(__APPLE__)
//#include <sys/resource.h>
//#endif
//
//using namespace std;
//
//ifstream file(".\\tree_orders\\tests\\21");
//ifstream testFile(".\\tree_orders\\tests\\21.a");
//
//class TreeOrders {
//  int n;
//  vector <int> key;
//  vector <int> left;
//  vector <int> right;
//
//public:
//  void read() {
//    file >> n;
//    key.resize(n);
//    left.resize(n);
//    right.resize(n);
//
//    for (int i = 0; i < n; i++) {
//		file >> key[i] >> left[i] >> right[i];
//    }
//  }
//
//  /*list<int> in_order(int root)
//  {
//	  list<int> leftResult;
//	  list<int> rightResult;
//	  if (left[root] != -1)
//		  leftResult = in_order(left[root]);
//	  if (right[root] != -1)
//		 rightResult = in_order(right[root]);
//	  
//	  leftResult.push_back(key[root]);
//	  for (list<int>::iterator iter = rightResult.begin(); iter != rightResult.end(); ++iter)
//	  {
//		  leftResult.push_back(*iter);
//	  }
//
//	  return leftResult;
//  }*/
//
//  vector <int> in_order() {
//	  vector<int> result;
//    // Finish the implementation
//    // You may need to add a new recursive method to do that
//	// 递归深度 容易造成溢出异常
//	  stack<int> s;
//	  int root;
//	  root = 0;
//	  while (root != -1 || !s.empty())
//	  {
//		  while (root != -1)
//		  {
//			  s.push(root);
//			  root = left[root];
//		  }
//		  if (!s.empty())
//		  {
//			  root = s.top(); s.pop();
//			  result.push_back(key[root]);
//			  root = right[root];
//		  }
//	  }
//
//	  return result;
//  }
//
//  list<int> pre_order(int root)
//  {
//	  list<int> leftResult;
//	  list<int> rightResult;
//	  if (left[root] != -1)
//		  leftResult = pre_order(left[root]);
//	  if (right[root] != -1)
//		  rightResult = pre_order(right[root]);
//
//	  leftResult.insert(leftResult.begin(), key[root]);
//	  for (list<int>::iterator iter = rightResult.begin(); iter != rightResult.end(); ++iter)
//	  {
//		  leftResult.push_back(*iter);
//	  }
//
//	  return leftResult;
//  }
//
//  vector <int> pre_order() {
//	  list<int> result;
//	  // Finish the implementation
//	  // You may need to add a new recursive method to do that
//	  result = pre_order(0);
//
//	  return vector<int>(result.begin(), result.end());
//  }
//
//  list<int> post_order(int root)
//  {
//	  list<int> leftResult;
//	  list<int> rightResult;
//	  if (left[root] != -1)
//		  leftResult = post_order(left[root]);
//	  if (right[root] != -1)
//		  rightResult = post_order(right[root]);
//
//	  for (list<int>::iterator iter = rightResult.begin(); iter != rightResult.end(); ++iter)
//	  {
//		  leftResult.push_back(*iter);
//	  }
//	  leftResult.push_back(key[root]);
//
//	  return leftResult;
//  }
//
//  vector <int> post_order() {
//    list<int> result;
//    // Finish the implementation
//    // You may need to add a new recursive method to do that
//	result = post_order(0);
//
//    return vector<int>(result.begin(), result.end());
//  }
//};
//
//// test file 
//void printFile(vector <int> a) {
//	int next;
//	for (size_t i = 0; i < a.size(); i++) {
//		testFile >> next;
//		if (next != a[i])
//		{
//			cout << "fail" << endl;
//			return;
//		}
//	}
//}
//
//// test cout
//void print(vector <int> a) {
//	int next;
//	for (size_t i = 0; i < a.size(); i++) {
//		cout << a[i] << " ";
//	}
//	cout << endl;
//}
//
//int main_with_large_stack_space() {
//  ios_base::sync_with_stdio(0);
//
//  TreeOrders t;
//  t.read();
//
//  printFile(t.in_order());
//  //print(t.pre_order());
//  //print(t.post_order());
//
//  cout << endl;
//
//  return 0;
//}
//
//int main (int argc, char **argv)
//{
//#if defined(__unix__) || defined(__APPLE__)
//  // Allow larger stack space
//  const rlim_t kStackSize = 16 * 1024 * 1024;   // min stack size = 16 MB
//  struct rlimit rl;
//  int result;
//
//  result = getrlimit(RLIMIT_STACK, &rl);
//  if (result == 0)
//  {
//      if (rl.rlim_cur < kStackSize)
//      {
//          rl.rlim_cur = kStackSize;
//          result = setrlimit(RLIMIT_STACK, &rl);
//          if (result != 0)
//          {
//              std::cerr << "setrlimit returned result = " << result << std::endl;
//          }
//      }
//  }
//#endif
//
//  return main_with_large_stack_space();
//}
//
