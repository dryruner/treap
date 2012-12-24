#include <iostream>
#include "treap.h"
#include <ctime>

int main(int argc, char* argv[])
{
	srand(time(NULL));
	treap* root = NULL;
//	int vector[] = {15,6,18,3,7,17,20,2,4,13,9};
//	const int length = sizeof(vector)/sizeof(int);
	for(int i = 0; i< 10;i++)
		root = Insert(i, root);
	
	printf("\nInOrder: \n");
	InOrder(root);

	int input;
	printf("\nplease input the value you want to delete: ");
	scanf("%d",&input);
	
	while(1)
	{
		Delete_Non_Recur(input, root);
		printf("\nAfter delete %u:\n",input);
		InOrder(root);
		printf("\nplease input another value you want to delete: ");
		scanf("%u",&input);
	}
	printf("\n");
	return 0;
}
