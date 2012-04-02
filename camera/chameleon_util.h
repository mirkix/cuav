#ifndef CHAMELEON_UTIL_H_
#define CHAMELEON_UTIL_H_

#include "chameleon.h"

int capture_wait(struct chameleon_camera *c, float *shutter,
                  void* buf, size_t stride, size_t size,
                  struct timeval *tv);


struct chameleon_camera *open_camera(bool colour_chameleon, int depth);


#endif
