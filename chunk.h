#ifndef clox_chunk_h
#define clox_chunk_h
#include "common.h"
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

typedef enum { OP_RETURN } OpCode;

typedef struct {
  int count;
  int capacity;
  uint8_t *code;
} Chunk;

void initChunck(Chunk *chunk);
void freeChunk(Chunk *chunk);
void writeChunk(Chunk *chunk, uint8_t byte);

#endif
