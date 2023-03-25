#include "../include/mhash"

int main(int argc, char* argv[]) {
    // Create the hasher object
    MHash *mh = new MHash();

    // Hash the string and print it
    puts(mh->operator()("Hello").c_str());

    // Delete the hasher object
    delete mh;
    return 0;
}