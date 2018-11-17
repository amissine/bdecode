#include <stdlib.h>
#include <string.h>
#include "bdecode.hpp"
#include "bdec.h"

using namespace libtorrent;

void bdec (const char *b, ssize_t blen, char *json, ssize_t size) {

  bdecode_node e;
  error_code ec;
  int rc = bdecode(b, b + blen, e, ec);
  if (rc != 0) { fprintf(stderr, "bdecode rc %d\n", rc); exit(1); }

  const char *s = print_entry(e).c_str();
  if (strlen(s) < size) sprintf(json, "%s", s);
  else fprintf(stderr, "bdec strlen(s) %zu, s:\n%s\n", strlen(s), s);
}
