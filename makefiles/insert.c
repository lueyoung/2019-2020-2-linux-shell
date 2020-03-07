#include "defs.h"
#include "buffer.h"
#include "insert.h"

void insert(){
  printf("insert start: ----------\n");
  Buffer *b = (Buffer*)malloc(sizeof(Buffer));
  printf("buffer value: %d\n", b->value);
  printf("insert end: ==========\n");
}
