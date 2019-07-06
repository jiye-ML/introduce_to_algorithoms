//#include <iostream>
//#include <stack>
//#include <string>
//
//using namespace std;
//
//struct Bracket {
//    Bracket(char type, int position):
//        type(type),
//        position(position)
//    {}
//
//    bool Matchc(char c) {
//        if (type == '[' && c == ']')
//            return true;
//        if (type == '{' && c == '}')
//            return true;
//        if (type == '(' && c == ')')
//            return true;
//        return false;
//    }
//
//    char type;
//    int position;
//};
//
//int main() {
//    std::string text;
//    getline(std::cin, text);
//
//    std::stack <Bracket> opening_brackets_stack;
//    for (int position = 0; position < text.length(); ++position) {
//        char next = text[position];
//
//        if (next == '(' || next == '[' || next == '{') {
//            // Process opening bracket, write your code here
//			Bracket temp(next, position);
//			opening_brackets_stack.push(temp);
//        }
//
//        if (next == ')' || next == ']' || next == '}') {
//            // Process closing bracket, write your code here
//			Bracket temp = opening_brackets_stack.top(); opening_brackets_stack.pop();
//			bool flag = temp.Matchc(next);
//			if (!flag)
//			{
//				temp.position = position;
//				opening_brackets_stack.push(temp);
//				break;
//			}
//        }
//    }
//
//    // Printing answer, write your code here
//	if (opening_brackets_stack.empty()) cout << "Success" << endl;
//	else
//	{
//		Bracket temp = opening_brackets_stack.top();
//		cout << temp.position + 1 << endl;
//	}
//
//	getchar();
//
//    return 0;
//}
