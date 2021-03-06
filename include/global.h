#ifndef GLOBAL_H
#define GLOBAL_H

#include "gba_video.h"
#include "gba_systemcalls.h"
#include "gba_input.h"
#include "gba_interrupt.h"
#include "gba_sprites.h"
#include "gba_dma.h"
#include "gba_console.h"
#include "math.h"
#include <stdlib.h>

#include "const.h"

typedef struct {
    s16 x, y;
} Pos;

#define ARRAY_COUNT(array) (sizeof(array) / sizeof((array)[0]))

#endif