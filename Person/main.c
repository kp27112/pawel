#include <stdio.h>
#include "person.h"

int main(int argc, char **argv)
{
    struct person *p=create();
    p->set_name(p, "Pawel");
    printf("%s/n", p->get_name(p));

    return 0;
}
