/**
 * tokenizer - transforms string into separate tokens
 * @buff: pointer to string to tokenize
 *
 * Return: pointer to pointers to each token or NULL
 */
char **tokenizer(char *buff)
{
    int token_count = 0;
	char **tokens;
	char *token;
	tokens = (char **)malloc(TOKEN_BUFFER_SIZE * sizeof(char *));
    if (tokens == NULL) {
        perror("Memory allocation error");
        exit(1);
    }

    token = strtok(buff, TOKEN_DELIMITERS);
    while (token != NULL) {
        tokens[token_count] = _strdup(token);
        if (tokens[token_count] == NULL) {
            perror("Memory allocation error");
            exit(1);
        }
        token_count++;

        if (token_count >= TOKEN_BUFFER_SIZE) {
            write(2, "Maximum number of tokens reached\n", 32);
            break;
        }

        token = strtok(NULL, TOKEN_DELIMITERS);
    }

    tokens[token_count] = NULL;
    return (tokens);
}
