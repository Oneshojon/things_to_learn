#ifndef SHELL_H
#define SHELL_H


/*Struct for linked list*/
typedef struct linkeddict
{
	char *dir;
	struct linkeddict *next;
} linkedd1;

/* tokenizer*/


extern char **environ;
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <stddef.h>
#include <errno.h>
#include <sys/stat.h>
#include <stdarg.h>
/*......Prompt........*/
void displayPrompt(void);
/**tokenize*/
char **str_tokenize(const char *input);

void print_env(char **env);
int _printf(const char *format, ...);
int _putchar(char c);
int mainfile(void);
void argumentFunc(int argc, char *argv[]);
void createFunc(void);
int exec5times(void);
int forkExample(void);
int get_PID(void);
int look4file(int argc, char *argv[]);
int Print_arg(int argc, char **argv);
int file_exists(int ac, char **av);
void read_and_print_input(void);
void readAndPrintInput(void);
int is_exit_command(const char *command);
char *getEnv(const char *name);
void execute_command(const char *command);
int compareEnv(int argc, char *argv[], char *env[]);
void pathDirectories(void);
int mainenv(void);
char *getEnv(const char *name);
int main2(void);
/*.......Execute function........*/
void free_memory(char **args, char *input);
void excutefunc(char *input, char *argv[]);
int main(int argc, char *argv[]);
/*Getline*/
 char *read_user_input(void);
/*Printf function*/
void printer_dec_int_rec(int num);
void printer_dec_int(int num);
int count_digits(int num);
int _printf(const char *format, ...);
void _printf2(const char *ptr);

/* buitins */
int (*get_builtin(char *command))(char **args, char **front);
int shellby_exit(char **args, char **front);
int shellby_cd(char **args, char __attribute__((__unused__)) **front);
int shellby_help(char **args, char __attribute__((__unused__)) **front);


#endif
