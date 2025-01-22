
<img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/c/c-original.svg" width="200" >

# 0x16. C - Simple Shell

A shell is a command-line interface that executes commands and manages processes. This is our own POSIX compliant shell that's capable of interpreting shell commands, running external programs and builtin commands like cd, pwd, echo and more.


## More Info

### Output

-   Unless specified otherwise, your program  **must have the exact same output**  as  `sh`  (`/bin/sh`) as well as the exact same error output.
-   The only difference is when you print an error, the name of the program must be equivalent to your  `argv[0]`  (See below)

Example of error with  `sh`:

```
$ echo "qwerty" | /bin/sh
/bin/sh: 1: qwerty: not found
$ echo "qwerty" | /bin/../bin/sh
/bin/../bin/sh: 1: qwerty: not found
$
```

Same error with your program  `hsh`:

```
$ echo "qwerty" | ./hsh
./hsh: 1: qwerty: not found
$ echo "qwerty" | ./././hsh
./././hsh: 1: qwerty: not found
$
```

### List of allowed functions and system calls

-   `access`  (man 2 access)
-   `chdir`  (man 2 chdir)
-   `close`  (man 2 close)
-   `closedir`  (man 3 closedir)
-   `execve`  (man 2 execve)
-   `exit`  (man 3 exit)
-   `_exit`  (man 2 _exit)
-   `fflush`  (man 3 fflush)
-   `fork`  (man 2 fork)
-   `free`  (man 3 free)
-   `getcwd`  (man 3 getcwd)
-   `getline`  (man 3 getline)
-   `getpid`  (man 2 getpid)
-   `isatty`  (man 3 isatty)
-   `kill`  (man 2 kill)
-   `malloc`  (man 3 malloc)
-   `open`  (man 2 open)
-   `opendir`  (man 3 opendir)
-   `perror`  (man 3 perror)
-   `read`  (man 2 read)
-   `readdir`  (man 3 readdir)
-   `signal`  (man 2 signal)
-   `stat`  (__xstat) (man 2 stat)
-   `lstat`  (__lxstat) (man 2 lstat)
-   `fstat`  (__fxstat) (man 2 fstat)
-   `strtok`  (man 3 strtok)
-   `wait`  (man 2 wait)
-   `waitpid`  (man 2 waitpid)
-   `wait3`  (man 2 wait3)
-   `wait4`  (man 2 wait4)
-   `write`  (man 2 write)

### Compilation

Our shell is compiled this way:

```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
```

### Testing

Our shell work like this in interactive mode:

```
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
```

But also in non-interactive mode:

```
$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
$
$ cat test_ls_2
/bin/ls
/bin/ls
$
$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
$
```

### Concepts

-   [Everything you need to know to start coding your own shell](https://github.com/0ussamaBernou/simple_shell/blob/master/MD/exercices.md)
-   [Approaching a Project](https://github.com/0ussamaBernou/simple_shell/blob/master/MD/project.md)


## Resources


-   [Unix shell](https://en.wikipedia.org/wiki/Unix_shell "Unix shell")
-   [Thompson shell](https://en.wikipedia.org/wiki/Thompson_shell "Thompson shell")
-   [Ken Thompson](https://en.wikipedia.org/wiki/Ken_Thompson "Ken Thompson")
-   **Everything you need to know to start coding your own shell**  concept page
