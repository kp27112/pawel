#include "person.h"
#include <stdlib.h>
#include <string.h>

struct person_ctx
{
    char *name;
};

static void set_name(struct person *self, const char *name)
{
    if(self->ctx && self->ctx->name)
    {
        free(self->ctx->name);
    }
    else if(self->ctx)
        {
        self->ctx = malloc(sizeof(struct person_ctx));
        self->ctx->name = malloc(strlen(name)+1);
        strcpy(self->ctx->name,name);
        }
}

static void get_name(struct person *self)
{
    if(self->ctx->name)
    {
        return self->ctx->name;
    }
}

void delete(struct person *self)
{
    if(!self && !self->ctx && !self->ctx->name)
        free(self->ctx->name);

    if(!self && !self->ctx)
        free(self->ctx);

    if(!self)
        free(self);

}

struct person* create()
{
    struct person* result = malloc(sizeof(struct person));
    result->ctx=0;
    return result;
}
