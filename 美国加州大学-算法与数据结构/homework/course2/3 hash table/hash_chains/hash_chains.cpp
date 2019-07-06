///************************************************************************/
///*	
//	2017��5��6��17:10:23
//	��������˵����ϣ������ ÿ����ͬ���ַ������˲�ͬ��hashֵ�� ����ֻ��Ҫ�Ƚ�hashֵ�Ϳ���֪�������ַ����ǲ������
//	���ñȽϾ�����ַ���
//*/
///************************************************************************/
//
//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//#include <fstream>
//#include<list>
//
//using namespace std;
//
//// ���ļ���������
//ifstream file(".\\hash_chains\\tests\\06");
//ifstream fileTest(".\\hash_chains\\tests\\06.a");
//
//struct Query {
//    string type, s;
//    size_t ind;
//};
//
//class QueryProcessor {
//    int bucket_count;
//    // store all strings in one vector
//    vector<list<string> > elems;
//
//	// hash���� hashÿ��string��һ��Ŀ�� slot
//    size_t hash_func(const string& s) const {
//        static const size_t multiplier = 263;
//        static const size_t prime = 1000000007;
//        unsigned long long hash = 0;
//        for (int i = static_cast<int> (s.size()) - 1; i >= 0; --i)
//            hash = (hash * multiplier + s[i]) % prime;
//        return ((hash % bucket_count) + bucket_count) % bucket_count;
//    }
//
//public:
//    explicit QueryProcessor(int bucket_count): bucket_count(bucket_count) {}
//
//    Query readQuery() const {
//        Query query;
//        file >> query.type;
//        if (query.type != "check")
//			file >> query.s;
//        else
//			file >> query.ind;
//        return query;
//    }
//
//    void writeSearchResult(bool was_found) const {
//        string out =  (was_found ? "yes" : "no");
//		string test;
//		fileTest >> test;
//		if (out != test)
//		{
//			cout << "fail" << endl;
//		}
//    }
//
//    void processQuery(const Query& query) {
//
//        if (query.type == "check") {
//			// �����ҵ�slot
//			for (list<string>::iterator iter = elems[query.ind].begin(); iter != elems[query.ind].end(); ++iter)
//			{
//				string test;
//				fileTest >> test;
//				if (*iter != test)
//				{
//					cout << "fail" << endl;
//					return;
//				}
//			}
//            std::cout << "\n";
//        } else {
//			// ������ �ַ����� hash ֵ
//			size_t queryHash = hash_func(query.s);
//			list<string>::iterator it = find(elems[queryHash].begin(), elems[queryHash].end(), query.s);
//			if (query.type == "find")
//			{
//				writeSearchResult(it != elems[queryHash].end());
//			}
//            else if (query.type == "add") {
//				if (it == elems[queryHash].end())
//					elems[queryHash].insert(elems[queryHash].begin(), query.s);
//            } else if (query.type == "del") {
//				if (it != elems[queryHash].end())
//					elems[queryHash].erase(it);
//            }
//        }
//    }
//
//    void processQueries() {
//        int n;
//		file >> n;
//
//		this->elems.resize(bucket_count);
//
//        for (int i = 0; i < n; ++i)
//            processQuery(readQuery());
//    }
//};
//
//int main() {
//    std::ios_base::sync_with_stdio(false);
//
//	// ����
//    int bucket_count;
//    file >> bucket_count;
//    QueryProcessor proc(bucket_count);
//
//	// ����
//    proc.processQueries();
//
//	cout << bucket_count << endl;
//
//
//    return 0;
//}
