#ifndef AVL_H
#define AVL_H

#include <cstdio>
class AVL
{
private:
	typedef TREE_TYPE T;
	struct Node
	{
		T x;
		signed char b = 0;
		size_t deep = 1;
		Node *p;
		Node *l = nullptr;
		Node *r = nullptr;

		Node(T &x) : x(x), p(nullptr) {}
		Node(T &x, Node *p) : x(x), p(p) {}
		~Node()
		{
			delete l;
			delete r;
		}
	};
	size_t n = 0;
	Node *root = nullptr;

public:
	~AVL() {delete root;}

	bool insert(T x);
	bool del(T x);
	bool exists(T x);
	bool next(T x, T *res);
	bool prev(T x, T *res);

	void full_print();
	void full_print_stream(std::ostream &out);

private:
    static Node *search(Node *cur, T &x);
    void del_node(Node *cur);
    bool next_below(Node *cur, T x, T *res);
    bool prev_below(Node *cur, T x, T *res);

    void fix_balance_top(Node *cur);
    void full_print_rq(Node *cur, size_t &ind);
    void full_print_stream_rq(Node *cur, size_t &ind, std::ostream &out);
    bool insert_rq(Node *cur, T &x);
    static void swap_val(Node *a, Node *b);
    static void swap_childs(Node *cur);
    static void restore_parent(Node *cur);
    static void balancing_node(Node *cur);
    static void small_left_rotation(Node *cur);
    static void large_left_rotation(Node *cur);
    static void small_right_rotation(Node *cur);
    static void large_right_rotation(Node *cur);
    static void balancing_tree(Node *cur);
};

#endif