#include "../include/mhash.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    // Create the hasher object
    MHash* mh = CreateMHasherObj();

    // Hash the string "Hello"
    char* hashed = GetHash(mh, "Hello");

    // Print the hash
    puts(hashed);

    // Free the memory allocated by GetHash
    free(hashed);
    
    // Delete the hasher object
    DeleteMHasherObj(mh);
    return 0;
}