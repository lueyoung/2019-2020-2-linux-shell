#include "defs.h"
#include "buffer.h"
#include "display.h"

void display(){
  printf("display start: ----------\n");
  Buffer *b = (Buffer*)malloc(sizeof(Buffer));
  printf("buffer value: %d\n", b->value);
  printf("display end: ==========\n");
}
