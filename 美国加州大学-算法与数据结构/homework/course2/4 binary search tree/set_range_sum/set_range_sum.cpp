//#include <string>
//#include <iostream>
//#include <fstream>
//
//using namespace std;
//
//// Splay tree implementation
//
//// Vertex of a splay tree
//struct Vertex {
//  int key;
//  // Sum of all the keys in the subtree - remember to update
//  // it after each operation that changes the tree.
//  long long sum;
//  Vertex* left;
//  Vertex* right;
//  Vertex* parent;
//
//  Vertex(int key, long long sum, Vertex* left, Vertex* right, Vertex* parent) 
//  : key(key), sum(sum), left(left), right(right), parent(parent) {}
//};
//
//void update(Vertex* v) {
//  if (v == NULL) return;
//  v->sum = v->key + (v->left != NULL ? v->left->sum : 0ll) + (v->right != NULL ? v->right->sum : 0ll);
//  if (v->left != NULL) {
//    v->left->parent = v;
//  }
//  if (v->right != NULL) {
//    v->right->parent = v;
//  }
//}
//
//// ֻ�����ϵ���һ��
//void small_rotation(Vertex* v) {
//  Vertex* parent = v->parent;
//  if (parent == NULL) {
//    return;
//  }
//  Vertex* grandparent = v->parent->parent;
//
//  // ���ϵ���һ��
//  if (parent->left == v) {
//    Vertex* m = v->right;
//    v->right = parent;
//    parent->left = m;
//  } else {
//    Vertex* m = v->left;
//    v->left = parent;
//    parent->right = m;
//  }
//  // ���¸ղŵ����Ľڵ�
//  update(parent);
//  update(v);
//
//  // ȡ��֮ǰ ���ڵ� ��λ��
//  v->parent = grandparent;
//  if (grandparent != NULL) {
//    if (grandparent->left == parent) {
//      grandparent->left = v;
//    } else {
//      grandparent->right = v;
//    }
//  }
//}
//
//// ���ϵ�������
//void big_rotation(Vertex* v) {
//  if (v->parent->left == v && v->parent->parent->left == v->parent) {
//    // Zig-zig
//    small_rotation(v->parent);
//    small_rotation(v);
//  } else if (v->parent->right == v && v->parent->parent->right == v->parent) {
//    // Zig-zig
//    small_rotation(v->parent);
//    small_rotation(v);
//  } else {
//    // Zig-zag
//    small_rotation(v);
//    small_rotation(v);
//  }  
//}
//
//// Makes splay of the given vertex and makes
//// it the new root.
//void splay(Vertex*& root, Vertex* v) {
//  if (v == NULL) return;
//  while (v->parent != NULL) {
//	  // ֻ������Ԫ�� ���ϵ���һ��
//    if (v->parent->parent == NULL) {
//      small_rotation(v);
//      break;
//    }
//	// �������, �ղ�ʹ���� v ����һֱ����������
//    big_rotation(v);
//  }
//  root = v;
//}
//
//// Searches for the given key in the tree with the given root
//// and calls splay for the deepest visited node after that.
//// If found, returns a pointer to the node with the given key.
//// Otherwise, returns a pointer to the node with the smallest
//// bigger key (next value in the order).
//// If the key is bigger than all keys in the tree, 
//// returns NULL.
//Vertex* find(Vertex*& root, int key) {
//	// �Ӹ��ڵ㿪ʼ ʵ�ֲ���
//  Vertex* v = root;
//  Vertex* last = root;
//  Vertex* next = NULL;
//  while (v != NULL) {
//	  //  ��һ���ڵ��¼�����ʵĲ��ҽ��
//    if (v->key >= key && (next == NULL || v->key < next->key)) {
//      next = v;
//    }
//	// ��¼��һ���ڵ�
//    last = v;
//	// �ҵ�
//    if (v->key == key) {
//      break;      
//    }
//	// ���²���
//    if (v->key < key) {
//      v = v->right;
//    } else {
//      v = v->left;
//    }
//  }
//  // ���� last Ϊ��һ��һ�����ʹ��Ľڵ�
//  splay(root, last);
//  return next;
//}
//
//// ���� key �� root �ֳ�������
//void split(Vertex* root, int key, Vertex*& left, Vertex*& right) {
//  right = find(root, key);
//  splay(root, right);
//  if (right == NULL) {
//    left = root;
//    return;
//  }
//  left = right->left;
//  right->left = NULL;
//  if (left != NULL) {
//    left->parent = NULL;
//  }
//  update(left);
//  update(right);
//}
//
//Vertex* merge(Vertex* left, Vertex* right) {
//  if (left == NULL) return right;
//  if (right == NULL) return left;
//  Vertex* min_right = right;
//  while (min_right->left != NULL) {
//    min_right = min_right->left;
//  }
//  splay(right, min_right);
//  right->left = left;
//  update(right);
//  return right;
//}
//
//// Code that uses splay tree to solve the problem
//
//Vertex* root = NULL;
//
//void insert(int x) {
//  Vertex* left = NULL;
//  Vertex* right = NULL;
//  Vertex* new_vertex = NULL;  
//  split(root, x, left, right);
//  if (right == NULL || right->key != x) {
//    new_vertex = new Vertex(x, x, NULL, NULL, NULL);
//  }
//  root = merge(merge(left, new_vertex), right);
//}
//
//void erase(int x) {                   
//  // Implement erase yourself
//	if (root == NULL) return;
//
//	Vertex* next = find(root, x);
//	if (root->key != x) return;
//
//	// next(x)
//	Vertex* eraseElement = root;
//	splay(root, next);
//	splay(root, eraseElement);
//	root = merge(root->left, root->right);
//	if (root != NULL)
//		root->parent = NULL;
//
//	delete(eraseElement);
//}
//
//bool find(int x) {  
//  // Implement find yourself
//	Vertex* v = find(root, x);
//
//  return (v != NULL);
//}
//
//long long sum(int from, int to) {
//  Vertex* left = NULL;
//  Vertex* middle = NULL;
//  Vertex* right = NULL;
//  split(root, from, left, middle);
//  split(middle, to + 1, middle, right);
//  long long ans = 0;
//  // Complete the implementation of sum
//  if (middle != NULL)
//	 ans = middle->sum;
//  root = merge(merge(left, middle), right);
//
//  return ans;  
//}
//
//const int MODULO = 1000000001;
//
//fstream file("\\set_range_sum\\tests\\83");
//fstream testFile("\\set_range_sum\\tests\\83.a");
//
//void printf(bool flag, bool found, long long res)
//{
//	if (flag == true)
//	{
//		string s;
//		testFile >> s;
//		if ((found && s == "Not found") || (!found && s == "found"))
//		{
//			cout << "fail" << endl;
//			return;
//		}
//	}
//	else
//	{
//		long long ans;
//		testFile >> ans;
//		if (ans != res)
//		{
//			cout << "fail" << endl;
//			return;
//		}
//	}
//}
//
//int main(){
//	// input
//  int n;
//  file >> n;
//
//  int last_sum_result = 0;
//  // ����
//  for (int i = 0; i < n; i++) {
//	  char type;
//	  file >> type;
//    switch (type) {
//      case '+' : {
//        int x;
//		file >> x;
//        insert((x + last_sum_result) % MODULO);
//      } break;
//      case '-' : {
//        int x;
//		file >> x;
//        erase((x + last_sum_result) % MODULO);
//      } break;            
//      case '?' : {
//        int x;
//		file >> x;
//        //printf(find((x + last_sum_result) % MODULO) ? "Found\n" : "Not found\n");
//		printf(true, find((x + last_sum_result) % MODULO), 0);
//      } break;
//      case 's' : {
//        int l, r;
//		file >> l >> r;
//        long long res = sum((l + last_sum_result) % MODULO, (r + last_sum_result) % MODULO);
//		//cout << res << endl;
//		printf(false, false, res);
//        last_sum_result = int(res % MODULO);
//      }
//    }
//  }
//
//  cout << endl;
//
//  return 0;
//}
