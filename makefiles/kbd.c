#include "defs.h"
#include "buffer.h"
#include "kbd.h"

void kbd(){
  printf("kbd start: ----------\n");
  Buffer *b = (Buffer*)malloc(sizeof(Buffer));
  printf("buffer value: %d\n", b->value);
  printf("kbd end: ==========\n");
}
