void Color(int code)
{
	if (code > 7)
	{
		printf("\033[3%d;1m", code - 8);
		printf("brighter color\n");
	}
	else if(code > -1)
	{
		printf("\033[3%dm", code);
		printf("darker color\n");
	}
	else
	{
		//wow-rainbow-!!!!
		printf("\033[40m\033[37;1m");
		printf("w ");
		printf("\033[41m\033[36;1m");
		printf("o ");
		printf("\033[42m\033[35;1m");
		printf("w ");
		printf("\033[43m\033[34;1m");
		printf("- ");
		printf("\033[44m\033[33;1m");
		printf("r ");
		printf("\033[45m\033[32;1m");
		printf("a ");
		printf("\033[46m\033[31;1m");
		printf("i ");
		printf("\033[47m\033[30;1m");
		printf("n ");
		printf("\033[40;1m\033[37m");
		printf("b ");
		printf("\033[41;1m\033[36m");
		printf("o ");
		printf("\033[42;1m\033[35m");
		printf("w ");
		printf("\033[43;1m\033[34m");
		printf("- ");
		printf("\033[44;1m\033[33m");
		printf("! ");
		printf("\033[45;1m\033[32m");
		printf("! ");
		printf("\033[46;1m\033[31m");
		printf("! ");
		printf("\033[47;1m\033[30m");
		printf("! ");
	}

	
}