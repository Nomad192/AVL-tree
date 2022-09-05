#include <cstdio>
#include <iostream>
#include "scr/AVL.hpp"

#define TEST
#ifdef TEST
	#include "scr/Full_Test.hpp"
#endif

typedef unsigned long int hash_type;

static constexpr hash_type hash_str(const char str[])
{
    hash_type result=0;
	for(size_t i=0, m=1; str[i]!='\0'; i++, m*=131)
		result += (str[i]*m);
	return result;
}

constexpr hash_type insert_hash =  hash_str("insert");
constexpr hash_type delete_hash =  hash_str("delete");
constexpr hash_type exists_hash =  hash_str("exists");
constexpr hash_type next_hash   =  hash_str("next");
constexpr hash_type prev_hash   =  hash_str("prev");

int main()
{	
#ifdef TEST
	return !full_test();
#endif

	AVL tree;

	for(char op[7]; scanf("%6s", op) != EOF;)
	{
		switch(hash_str(op))
		{
			case insert_hash:
			{
				//printf("insert\n");
                TREE_TYPE x;
                scanf("%" TREE_TYPE_SP, &x);
                tree.insert(x);
				break;
			}
			case delete_hash:
			{
				//printf("delete\n");
                TREE_TYPE x;
                scanf("%" TREE_TYPE_SP, &x);
                tree.del(x);
				break;
			}
			case exists_hash:
			{
				//printf("exists\n");
                TREE_TYPE x;
                scanf("%" TREE_TYPE_SP, &x);
                printf("%s\n", tree.exists(x) ? "true" : "false");
				break;
			}
			case next_hash:
			{
				//printf("next\n")'
                TREE_TYPE x;
                scanf("%" TREE_TYPE_SP, &x);
                TREE_TYPE res;
                if(tree.next(x, &res))
                	printf("%" TREE_TYPE_SP "\n", res);
                else
                	printf("none\n");
				break;
			}
			case prev_hash:
			{
				//printf("prev\n")'
                TREE_TYPE x;
                scanf("%" TREE_TYPE_SP, &x);
                TREE_TYPE res;
                if(tree.prev(x, &res))
                	printf("%" TREE_TYPE_SP "\n", res);
                else
                	printf("none\n");
				break;
			}
			default:
			{
                if(op[0] == '^' && op[1] == 'Z')
                    return 0;
				printf("Error: unknown command - \"%s\"!\n", op);
				return -1;
			}
		}
		//tree.full_print();	
	}
	return 0;
}