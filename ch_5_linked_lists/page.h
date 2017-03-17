#ifndef CH_5_LINKED_LISTS_PAGE_H
#define CH_5_LINKED_LISTS_PAGE_H

#include "clist.h"

typedef struct Page_ {
    int number;
    int reference;
} Page;

int replace_page(CListElmt **current);

#endif //CH_5_LINKED_LISTS_PAGE_H
