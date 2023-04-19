/**
*print_name - prints a name on the screen
*@name: Name to be printed
*@f: Pointer to function that takes a char* as arg
*/
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
