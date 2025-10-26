#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
    int sz, pos = 0;
    char buf[100];

    // change only the Name present in file from 'Rohan' to 'Mohan' hint make use of lseek()
    int fd = open("author.txt", O_RDWR);

    if (fd < 0) {
        perror("Error occured during open()");
        exit(1);
    }

    pos = lseek(fd, -6, SEEK_END);
    printf("seek position: %d\n", pos);
    strcpy(buf, "Mohan");
    write(fd, buf, strlen(buf));

    return 0;
}
