#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

// Build a suffix tree of the string text and return a vector
// with all of the labels of its edges (the corresponding 
// substrings of the text) in any order.
vector<string> ComputeSuffixTreeEdges(const string& text) {
  vector<string> result;

  // Implement this function yourself
  

  return result;
}

int main() {

	//　输入
  string text;
  cin >> text;

  // 构建
  vector<string> edges = ComputeSuffixTreeEdges(text);

  // 输出
  for (int i = 0; i < edges.size(); ++i) {
    cout << edges[i] << endl;
  }

  cout << endl;

  return 0;
}
