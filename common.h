#ifndef clox_common_h
#define clox_common_h

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

typedef enum {
  OP_RETURN,
} OpCode;

typedef struct {
  int count;
  int capacity;
  uint8_t code;
} Chunk;

#endif
