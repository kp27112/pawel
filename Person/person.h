struct person_ctx;

struct person
{
struct person_ctx *ctx;
void (* set_name)(struct person* self, const char* name);
const char* (* get_name)(struct person* self);
};

struct person* create();

void delete(struct person* self);
