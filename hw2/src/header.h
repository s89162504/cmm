struct symtab{
	char lexeme[257];
	struct symtab *front;
	struct symtab *back;
	int line;
	int counter;
};

typedef struct symtab symtab;
symtab * lookup(char *name);
void insert(char *name);
