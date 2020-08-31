//apparently this program works in both C and C++? :o
#include <stdio.h>
char* days[]{ "Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday" };

main(argc, argv)
int argc;
char* argv[];
{
	int jdate;
	char* day;

	if (argc == 1) {
		printf("format: list1 <julian date>\n");
		exit(1);
	}
	jdate = atoi(argv[1]);
	day = days[(jdate % 7)];
	printf("day = %s\n, day");
}
