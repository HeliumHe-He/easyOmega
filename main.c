#include "VB.h"
#include "hook.h"


// TODO: add definitions for `subscribe` and `handleMedium`
// probably platform dependent



int main(int argc, const char *argv[]) {
    for(int i=0; i<25; ++i) printf("C___"); printf("\n");
    //___________________________________________________

    subscribe();

    //===================================================
    printf("\n");
    for(int i=0; i<25; ++i) printf("C==="); printf("\n");
    //getchar();
    return 0;
}

FUNCTION( myHandle OF (DECLARE(event AS Event*)) AS void ) {
    printk(KERN_INFO "typed: # %d # \n", event->value);
    // printf("typed: -%d- '%c'\n", event.typed_char, event.typed_char);
}

#if 0
#error no unix
int a;
#endif