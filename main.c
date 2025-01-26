#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bool.h"

#include "box.c"
#include "help.c"
#include "color.c"
#include "decorate.c"
#include "clear.c"

bool strequ(const char *a, const char *b)
{
	return strcmp(a, b) == 0;
}

// This code just outputs args.
int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		Help();
		return 0;
	}
	
	if (argc > 3 && strequ(argv[1], "box"))
	{
		int type = 1;

		if (argc > 4)
		{
			if (strequ(argv[4], "rounded"))
			{
				type = 2;
			}
			
			if (strequ(argv[4], "double"))
			{
				type = 3;
			}
		}

		int width = atoi(argv[3]);
		int height = atoi(argv[2]);
		PrintBox(width, height, type);
	}
	else if (argc > 2 && strequ(argv[1], "color"))
	{
		int code = -1;
		if (!strequ(argv[2], "rainbow"))
		{
			code = atoi(argv[2]);
		}
		Color(code);
	}
	else if (argc > 1 && strequ(argv[1], "reset"))
	{
		Decorate(1);
	}
	else if (argc > 1 && strequ(argv[1], "bold"))
	{
		Decorate(2);
	}
	else if (argc > 1 && strequ(argv[1], "underline"))
	{
		Decorate(3);
	}
	else if (argc > 1 && strequ(argv[1], "reverse"))
	{
		Decorate(4);
	}
	else if (argc > 1 && strequ(argv[1], "clear"))
	{
		Clear();
	}
	else
	{
		Help();
	}

	return 0;
}