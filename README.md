THINGS TO COVER BEFORE RESUMPTION


# [List of allowed functions and system calls]

1. **access (man 2 access)**
   ### include <unistd.h>

       int access(const char *pathname, int mode);
checks whether the calling process can access the file
       pathname.  If pathname is a symbolic link, it is dereferenced.

 The mode specifies the accessibility check(s) to be performed,
       and is either the value F_OK, or a mask consisting of the bitwise
       OR of one or more of R_OK, W_OK, and X_OK.  F_OK tests for the
       existence of the file.  R_OK, W_OK, and X_OK test whether the
       file exists and grants read, write, and execute permissions,
       respectively.

      int file_exists = access(file, F_OK)

_if file exists returns '0', then the file exists_

2. **chdir (man 2 chdir)**
   
 chdir()  changes  the  current working directory of the calling process to the directory specified in path. 
 
 The current working directory is the
       starting point for interpreting relative pathnames (i.e., pathnames not starting with '/').

   #include <unistd.h>

       int chdir(const char *path);
        /* example */
       int result = chdir(path); 
- On success, zero is returned.  On error, -1 is returned, and errno is set appropriately.
3. **close (man 2 close)**

           include <unistd.h>
           int close(int fd);

  close() returns zero on success.  On error, -1 is returned, and
       errno is set to indicate the error.
4. closedir (man 3 closedir)
  
5. **execve (man 2 execve)**

  #include <unistd.h>

       int execve(const char *pathname, char *const _Nullable argv[],
                  char *const _Nullable envp[]);

const char *filename: This parameter specifies the path to the executable file of the new program you want to run.

char *const argv[]: This is an array of strings that represent the command-line arguments passed to the new program. The first element (argv[0]) conventionally contains the program's name.

char *const envp[]: This is an array of strings representing the environment variables to be passed to the new program.

6. **exit (man 3 exit)**

 #include <stdlib.h>

       [[noreturn]] void exit(int status);

The exit() function causes normal process termination and the
       least significant byte of status (i.e., status & 0xFF) is
       returned to the parent (see wait(2)).
   
6. **_exit (man 2 _exit)**

    #include <unistd.h>

       [[noreturn]] void _exit(int status);

   
7. **fflush (man 3 fflush)**

 #include <stdio.h>

       int fflush(FILE *stream);

 For output streams, fflush() forces a write of all user-space
       buffered data for the given output or update stream via the
       stream's underlying write function.

       For input streams associated with seekable files (e.g., disk
       files, but not pipes or terminals), fflush() discards any
       buffered data that has been fetched from the underlying file, but
       has not been consumed by the application.

       The open status of the stream is unaffected.

       If the stream argument is NULL, fflush() flushes all open output
       streams.

       Upon successful completion 0 is returned.  Otherwise, EOF is
       returned and errno is set to indicate the error.
  
- fork (man 2 fork)
- free (man 3 free)
- getcwd (man 3 getcwd)
- getline (man 3 getline)
- getpid (man 2 getpid)
- isatty (man 3 isatty)
- kill (man 2 kill)
- malloc (man 3 malloc)
- open (man 2 open)
- opendir (man 3 opendir)
- perror (man 3 perror)
- read (man 2 read)
- readdir (man 3 readdir)
- signal (man 2 signal)
- stat (__xstat) (man 2 stat)
- lstat (__lxstat) (man 2 lstat)
- fstat (__fxstat) (man 2 fstat)
- strtok (man 3 strtok)
- 
1. **wait (man 2 wait)**
   
- waitpid (man 2 waitpid)
- wait3 (man 2 wait3)
- wait4 (man 2 wait4)
- write (man 2 write)


## Types of commands in shell include:

1. System commands - these are commands that perform system-related tasks, such as listing files, creating directories, copying files, and so on. Examples of system commands include ls, cd, mkdir, cp, and rm.

2. Utility commands - these are commands that perform various utility tasks, such as displaying system information, managing processes, and manipulating files. Examples of utility commands include top, ps, awk, sed, and grep.

3. Shell commands - these are commands that are built into the shell itself and are used to customize the shell's behavior or execute scripts. Examples of shell commands include echo, export, alias, and source.

4. Programming commands - these are commands used to write and execute scripts or programs. Examples of programming commands include gcc, make, and python.

5. Administrative commands - these are commands that are used to manage system administration tasks, such as user and group management, system configuration, and network configuration. Examples of administrative commands include sudo, chown, ifconfig, and iptables.
