void Help()
{
	printf("╭box [width] [height] (type)\n");
	printf("│ width: The width of the box.\n");
	printf("│ height: The height of the box.\n");
	printf("╰ type: The type of the box. (sharp, rounded, double, default sharp)\n");
	printf("\n");
	printf("╭color [code]\n");
	printf("│ \\u001b[3Nm or \\u001b[3N;1m\n");
	printf("╰ code: The color to be rendered (0 ~ 15 or rainbow)\n");
	printf("\n");
	printf("╭reset\n");
	printf("╰ \\u001b[0m\n");
	printf("\n");
	printf("╭bold\n");
	printf("╰ \\u001b[1m\n");
	printf("\n");
	printf("╭underline\n");
	printf("╰ \\u001b[4m\n");
	printf("\n");
	printf("╭reverse\n");
	printf("╰ \\u001b[7m\n");
	printf("\n");
	printf("╭clear\n");
	printf("╰ \\u001b[2J\n");
}