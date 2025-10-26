#include <unistd.h>

char str[] = "I'm fine.\n";

int main(){
    char str[] = "Hello Linux.\n";
    write(1, str, 13);
    
    return 0;
}
