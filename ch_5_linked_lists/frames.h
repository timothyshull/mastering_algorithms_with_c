#ifndef CH_5_LINKED_LISTS_FRAMES_H
#define CH_5_LINKED_LISTS_FRAMES_H

#include <stdlib.h>
#include "list.h"

int alloc_frame(List *frames);

int free_frame(List *frames, int frame_number);

#endif //CH_5_LINKED_LISTS_FRAMES_H
