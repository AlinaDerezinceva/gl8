# include <stdio.h>

void encrypt(char* message)
{
	while (*message) {
		*message = *message ^ 31;
		message++;
	}
}

int main()
{
	char str[] = "hello";
	encrypt(str);
	printf("зашифровано в; %s\n", str);
	encrypt(str);
	printf("расшифровано в: %s\n", str);
	
	return 0;
}
