#ifndef BUFFER_H
#define BUFFER_H
typedef struct _buffer {
  int value;
  struct _buffer *next;
}Buffer;
#endif
