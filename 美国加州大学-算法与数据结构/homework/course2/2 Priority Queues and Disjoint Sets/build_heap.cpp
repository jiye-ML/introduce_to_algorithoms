//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <fstream>
//
//using namespace std;
//
//class HeapBuilder {
// private:
//  vector<int> data_;
//  vector< pair<int, int> > swaps_;
//
//  // ���
//  void WriteResponse() const {
//	  // ���ڲ���ʱ���
//    //cout << swaps_.size() << "\n";
//    //for (int i = 0; i < swaps_.size(); ++i) {
//    //  cout << swaps_[i].first << " " << swaps_[i].second << "\n";
//    //}
//
//	  // ���Դ����������
//	  ifstream test(".\\make_heap\\tests\\04.a", ios::in);
//
//	  int temp;
//	  test >> temp;
//	  if (temp != this->swaps_.size())
//	  {
//		  cout << "fail" << endl;
//		  return;
//	  }
//
//
//	  int index = 0;
//	  pair<int, int> testPair;
//	  int fail = 0; 
//	  cout << endl;
//	  while (!test.eof())
//	  {
//		  test >> testPair.first >> testPair.second;
//		  
//		  if (testPair.first != swaps_[index].first || testPair.second != swaps_[index].second)
//		  {
//			  cout << "fail" << endl;
//			  return;
//		  }
//		 ++index;
//	  }
//
//	  cout << "success!" << endl;
//	  return;
//  }
//
//  // ��������
//  void ReadData() {
//    int n;
//
//	ifstream f(".\\make_heap\\tests\\04", ios::in);
//	f >> n;
//	this->data_.resize(n);
//
//	int index = 0;
//	int temp;
//	while (!f.eof())
//	{
//		f >> this->data_[index++];
//	}
//  }
//
//  void GenerateSwaps() {
//    swaps_.clear();
//
//	int n = data_.size();
//	for (int i = n / 2; i >= 0; --i)
//		SiftDown(i);
//  }
//
//  void SiftDown(int i)
//  {
//	  int minIndex = i;
//	  int left = 2 * i + 1;
//	  if (left < data_.size() && data_[left] < data_[minIndex])
//		  minIndex = left;
//
//	  int right = 2 * i + 2;
//	  if (right < data_.size() && data_[right] < data_[minIndex])
//		  minIndex = right;
//
//	  if (i != minIndex)
//	  {
//		  swap(data_[minIndex], data_[i]);
//		  this->swaps_.push_back(pair<int, int>(i, minIndex));
//		  SiftDown(minIndex);
//	  }
//  }
//
// public:
//	 // �ӿ�
//  void Solve() {
//    ReadData();
//    GenerateSwaps();
//    WriteResponse();
//  }
//};
//
//int main() {
//
//	// ��֪��ʲô��˼
//  std::ios_base::sync_with_stdio(false);
//
//  // ��ջ����
//  HeapBuilder heap_builder;
//  heap_builder.Solve();
//  return 0;
//}
