#ifndef BDEC_H
#define BDEC_H

#ifdef __cplusplus
extern "C" {
#endif

void bdec (const char *b, ssize_t blen, char *json, ssize_t size);

#ifdef __cplusplus
}
#endif

#endif // BDEC_H
