//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <queue>
//#include <fstream>
//
//using namespace std;
//
//class JobQueue {
// private:
//  int num_workers_;
//  vector<int> jobs_;
//
//  vector<int> assigned_workers_;
//  vector<long long> start_times_;
//
//  // 输出
//  void WriteResponse() const {
//	
//		   //测试大量输入输出
//	 ifstream test(".\\job_queue\\tests\\08.a", ios::in);
//
//	 int index = 0;
//	 pair<int, long long> testPair;
//	 int fail = 0;
//	 while (!test.eof())
//	 {
//		 test >> testPair.first >> testPair.second;
//
//		 if (testPair.first != assigned_workers_[index] || testPair.second != start_times_[index])
//		 {
//			 fail++;
//		 }
//		 ++index;
//		 if (index % 100 == 0) cout << index << endl;
//	 }
//
//	 cout << "success!" << endl;
//	 return;
//  }
//
//  // 读入数据
//  void ReadData() {
//    int m;
//	ifstream f(".\\job_queue\\tests\\08", ios::in);
//    f >> num_workers_ >> m;
//    jobs_.resize(m);
//
//	int index = 0;
//	while (!f.eof())
//	{
//		f >> this->jobs_[index++];
//	}
//
//	cout << index << endl;
//  }
//
//  struct Obj
//  {
//	  int worker;
//	  long long duration;
//	  friend bool operator < (const Obj& ls, const Obj& rs)
//	  {
//		  return rs.duration < ls.duration ||
//			  (rs.duration == ls.duration && rs.worker < ls.worker);
//	  }
//  };
//
//  // 处理
//  void AssignJobs() {
//    // TODO: replace this code with a faster algorithm.
//    assigned_workers_.resize(jobs_.size());
//    start_times_.resize(jobs_.size());
//	priority_queue<Obj> q;
//
//	Obj next;
//	int index = 0;
//	for (index = 0; index < this->num_workers_; ++index)
//	{
//		next.worker = index;
//		next.duration = jobs_[index];
//		q.push(next);
//		assigned_workers_[index] = index;
//		start_times_[index] = 0;
//	}
//
//    for (; index < jobs_.size(); ++index) {
//		int duration = jobs_[index];
//      int next_worker = 0;
//	 // for (int j = 0; j < num_workers_; ++j) {
//		//if (next_free_time[j] < next_free_time[next_worker])
//		//next_worker = j;
//		//}
//	  next = q.top(); q.pop();
//	  assigned_workers_[index] = next.worker;
//	  start_times_[index] = next.duration;
//	  next.duration += duration;
//	  q.push(next);
//    }
//  }
//
// public:
//  void Solve() {
//    ReadData();
//    AssignJobs();
//    WriteResponse();
//  }
//};
//
//int main() {
//  std::ios_base::sync_with_stdio(false);
//
//  // 处理
//  JobQueue job_queue;
//  job_queue.Solve();
//  return 0;
//}
