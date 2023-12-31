#ifndef MAIN_H
#define MAIN_H


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/** MACROS ****/
#define DELIM " \n"

extern char **environ;
/** FUNCTIONS **/

char **_tokenizer(char *s, int argc);
int _token_count(char *s);
void _free_tokens(int argc, char **argv);
void _command_exe(char *input, char **env);
char *_command_path_checker(char *argv);
int is_emptyspace(const char *s);
char *_strdup(const char *s);
int _strlen(char *s);
int _print(char *s);
void trimer(char *s);
char *_strchr(char *s, char c);
char *_strcat(char *dest, char *src);
char *_strcpy(char *dest, const char *src);
int _strcmp(char *s1, char *s2);
void _print_env(void);
#endif
