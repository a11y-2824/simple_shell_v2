#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int ac__attribute__((unused)), char **av__attribute__((unused))){
	char *buffer;
	size_t bufsize = 32;
	char *token;

	buffer=malloc(bufsize * sizeof(char));

	printf("$ ");
	getline(&buffer, &bufsize, stdin):
	printf("%s", buffer);

	token = strtok(buffer, " ");
	printf("%s\n", token);

	return (0);
}
