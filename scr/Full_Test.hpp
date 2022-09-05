#ifndef C_TEST_H
#define C_TEST_H

#include <sstream>
#include <cstdlib>
#include <cstdio>

#include "AVL.hpp"

#define MIN(x, y) ((x < y) ? (x) : (y))
#define MAX(x, y) ((x > y) ? (x) : (y))
#define MUL(x, y) (x * y)

#define TEST_LEN_OP 	(100)	//10
#define N_TEST 			(10000)	//1000000
#define N_TEST_POINT 	MIN((1000), 	MUL(TEST_LEN_OP, N_TEST))
#define RANGE_VAL 		 (2000000000)	//1000000000
#define OFFSET_VAL 		(-1000000000)

bool test(class AVL &tree);
bool full_test();

#endif