//#include <iostream>
//#include <string>
//#include <vector>
//#include <fstream>
//
//using namespace std;
//
//typedef unsigned long long ull;
//static const size_t multiplier = 263;
//static const size_t prime = 1000000007;
//
//fstream file(".\\hash_substring\\tests\\06");
//fstream testFile(".\\hash_substring\\tests\\06.a");
//
//struct Data {
//	string pattern, text;
//};
//
//ull hash_func(const string& s)  {
//	ull hash = 0;
//	for (int i = static_cast<int> (s.size()) - 1; i >= 0; --i)
//		hash = (hash * multiplier + s[i]) % prime;
//	return ((hash % prime) + prime) % prime;
//}
//
////‘§¥¶¿Ì
//void precomputeHashes(const string& text, size_t bucket_count, vector<ull>& hash)
//{
//	hash.resize(text.size() - bucket_count + 1);
//	string s = text.substr(text.size() - bucket_count);
//	hash[text.size() - bucket_count] = hash_func(s);		
//	ull test = hash_func(s);
//
//	ull y = 1;
//	for (int i = 0; i < bucket_count; ++i)
//	{
//		y = (y * multiplier) % prime;
//		y = ((y % prime) + prime) % prime;
//	}
//
//	for (int i = text.size() - bucket_count - 1; i >= 0; --i)
//	{
//		ull value = y * text[i + bucket_count];
//		value = value % prime;
//		hash[i] = (((multiplier * hash[i + 1] + text[i] - value) % prime) + prime) % prime; 
//	}
//}
//
//Data read_input() {
//	Data data;
//	std::cin >> data.pattern >> data.text;
//	return data;
//}
//
//Data read_input_file()
//{
//	Data data;
//	file >> data.pattern >> data.text;
//	return data;
//}
//
//void print_occurrences(const std::vector<int>& output) {
//	for (size_t i = 0; i < output.size(); ++i)
//		std::cout << output[i] << " ";
//	std::cout << "\n";
//}
//
//void test_occurences(const vector<int>& output)
//{
//	int test;
//	for (size_t i = 0; i < output.size(); ++i)
//	{
//		testFile >> test;
//		if (output[i] != test)
//		{
//			cout << "fail" << endl;
//			return;
//		}
//	}
//}
//
//std::vector<int> get_occurrences(const Data& input) {
//	const string& s = input.pattern, t = input.text;
//	std::vector<int> ans;
//	vector<ull> hash;
//
//	ull pHash = hash_func(s);
//	precomputeHashes(t, s.size(), hash);
//
//	for (int i = 0; i < t.size() - s.size() + 1; ++i)
//	{
//		if (pHash != hash[i]) continue;
//		if (t.substr(i, s.size()) == s)
//		{
//			ans.push_back(i);
//		}
//	}
//
//	return ans;
//}
//
//
//int main() {
//	std::ios_base::sync_with_stdio(false);
//	//print_occurrences(get_occurrences(read_input()));
//
//	test_occurences(get_occurrences(read_input_file()));
//
//	cout << endl;
//
//	return 0;
//}
