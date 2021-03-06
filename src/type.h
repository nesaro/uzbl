/*
 * Uzbl Types
 */

enum ptr_type {
    TYPE_INT = 1,
    TYPE_STR,
    TYPE_FLOAT,
    TYPE_NAME,
    TYPE_FORMATTEDSTR // used by send_event
};

typedef struct {
    enum ptr_type type;
    union {
        int   *i;
        float *f;
        gchar **s;
    } ptr;
    int dump;
    int writeable;
    /*@null@*/ void (*func)(void);
} uzbl_cmdprop;

