#ifndef clox_value_h
#define clox_value_h

typedef double Value;

typedef struct {
  int count;
  int capacity;
  Value *values;
} ValueArray;

void initValueArray(ValueArray *chunk);
void writeValueArray(ValueArray *chunk, Value value);
void freeValueArray(ValueArray *chunk);
void printValue(Value value);

#endif
