
/*Open the file /usr/share/dictionary in process P1 which is a parent.
Create two child process using fork.
Child 1 searches for a word from the top of the file and child 2 search from bottom of the file.
The word is provided by parent Process.
Whichever child finds it prints the message "Found" */

#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
    pid_t id1;
    pid_t id2;
    char key = "E" ;

    id1 = fork();
    id2 = fork();

    if (id1 > 0)
    {
        printf("Parent Process\n");
        
        char str[] = { "A", "B", "C", "D", "E", "F", "G", "H", "I", "J" };
        int n = 10;
        int flag;
        int i;

        for(i=0; i<n; i++)
        {
            if (a[i] != key)
            {
                flag = 0;
            }

            else
            {
                flag = 1;
            }

            if (flag == 0)
            {
                printf("Key is not present in the string\n");
            }

            else
            {
                printf("Key is present in the string\n");
            }
        }

    else
    {
        printf("Child Process");
    }

    }
    
    if (id2 > 0)
    {
        printf("Parent Process\n");
        
        char str[] = { "A", "B", "C", "D", "E", "F", "G", "H", "I", "J" };
        int n = 0;
        int flag;
        int i;

        for(i=9; i>=n; i--)
        {
            if (a[i] != key)
            {
                flag = 0;
            }

            else
            {
                flag = 1;
            }

            if (flag == 0)
            {
                printf("Key is not present in the string\n");
            }

            else
            {
                printf("Key is present in the string\n");
            }
        }

    else
    {
        printf("Child Process");
    }

    }

    return 0;

}