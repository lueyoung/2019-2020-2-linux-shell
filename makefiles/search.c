#include "defs.h"
#include "buffer.h"
#include "search.h"

void search(){
  printf("search start: ----------\n");
  Buffer *b = (Buffer*)malloc(sizeof(Buffer));
  printf("buffer value: %d\n", b->value);
  printf("search end: ==========\n");
}
