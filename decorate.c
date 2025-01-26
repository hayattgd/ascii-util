void Decorate(int type)
{
	if (type == 1)
	{
		printf("\033[0m"); //Reset
	}
	else if (type == 2)
	{
		printf("\033[1m"); //Bold
	}
	else if (type == 3)
	{
		printf("\033[4m"); //Underline
	}
	else if (type == 4)
	{
		printf("\033[7m"); //Reversed
	}
	printf("decorated?\n");
}