
/*Open the file /usr/share/dictionary in process P1 which is a parent.
Create two child process using fork.
Child 1 searches for a word from the top of the file and child 2 search from bottom of the file.
The word is provided by parent Process.
Whichever child finds it prints the message "Found" */

#include<stdio.h>
#include<string.h>
#include<sys/types.h>
#include<unistd.h>

int main(int argc, char const *argv[])
{
    pid_t id1;
    pid_t id2;
    char key;

    id1 = fork();

    if (id1 == 0)
    {
        printf("Child Process 1 \n");
        
        char str[100];
        int i;
        int n;

        printf("Enter the string:");
        gets(str);
        printf("Enter character to be searched:");
        key=getchar();

        for(i=0; i<str[n]; i++)
        {
            if (str[i] == key)
            {
                printf("Key '%c' is present in the string and found at location: %d\n", key, i);
            }

            else
            {
                printf("Key is not present in the string\n");
            }

        }
    }

    else
    {
        printf("Parent Process");
    }
    
    id2 = fork();

    if (id2 == 0)
    {
        printf("Child Process 2 \n");
        
        char str[100];
        int i;
        int n;

        printf("Enter the string:");
        gets(str);
        printf("Enter character to be searched:");
        key=getchar();

        for(i=999; i>str[n]; i--)
        {
            if (str[i] == key)
            {
                printf("Key '%c' is present in the string and found at location: %d\n", key, i);
            }

            else
            {
                printf("Key is not present in the string\n");
            }

        }
    }

    else
    {
        printf("Parent Process");
    }

    return 0;

}