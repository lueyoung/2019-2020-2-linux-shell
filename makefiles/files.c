#include "defs.h"
#include "buffer.h"
#include "command.h"
#include "files.h"

void files(){
  printf("file start: ----------\n");
  Buffer *b = (Buffer*)malloc(sizeof(Buffer));
  printf("buffer value: %d\n", b->value);
  command();
  printf("file end: ==========\n");
}
