https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#include "lab4.h"

int main(int argc, char **argv)
{

	char *file_name;
	char *file_name2;
	Node *head = NULL;

	if (argc != 3){
		printf("Usage:  %s input_filename output_filename\n", argv[0]);
		return(1);
	}

	file_name = argv[1];
	file_name2 = argv[2];
	getDataAndBuildList(&head, file_name);
	getUserOption(&head, file_name2);
	return(0);
}

