void PrintBox(int width, int height, int type)
{
	int x, y;
	for (x = 0; x < width; x++)
	{
		for (y = 0; y < height; y++)
		{
			int side = 0;
			side = x == width - 1 ? 1 : x == 0 ? -1 : 0;

			if (y == 0) // bottom
			{
				if (side == 1)
				{
					if (type == 1)
					{
						printf("└");
					}
					else if (type == 2)
					{
						printf("╰");
					}
					else if (type == 3)
					{
						printf("╚");
					}
				}
				else if (side == -1)
				{
					if (type == 1)
					{
						printf("┌");
					}
					else if (type == 2)
					{
						printf("╭");
					}
					else if (type == 3)
					{
						printf("╔");
					}
				}
				else
				{
					if (type == 1)
				{
					printf("│");
				}
				else if (type == 2)
				{
					printf("│");
				}
				else if (type == 3)
				{
					printf("║");
				}
				}
			}
			else if (y == height - 1) // top
			{
				if (side == 1)
				{
					if (type == 1)
					{
						printf("┘");
					}
					else if (type == 2)
					{
						printf("╯");
					}
					else if (type == 3)
					{
						printf("╝");
					}
				}
				else if (side == -1)
				{
					if (type == 1)
					{
						printf("┐");
					}
					else if (type == 2)
					{
						printf("╮");
					}
					else if (type == 3)
					{
						printf("╗");
					}
				}
				else
				{
					if (type == 1)
					{
						printf("│");
					}
					else if (type == 2)
					{
						printf("│");
					}
					else if (type == 3)
					{
						printf("║");
					}
				}
			}
			else if (side != 0)
			{
				if (type == 1)
				{
					printf("─");
				}
				else if (type == 2)
				{
					printf("─");
				}
				else if (type == 3)
				{
					printf("═");
				}
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}