#include <string>
#include <cstring>

#include "git2.h"
#include "git2/diff.h"

const git_error *git_error_dup(const git_error *arg) {
  git_error *result = (git_error *)malloc(sizeof(git_error));
  result->klass = arg->klass;
  result->message = strdup(arg->message);
  return result;
}

void git_time_dup(git_time **out, const git_time *arg) {
  *out = (git_time *)malloc(sizeof(git_time));
  memcpy(*out, arg, sizeof(git_time));
}

void git_transfer_progress_dup(git_transfer_progress **out, const git_transfer_progress *arg) {
  *out = (git_transfer_progress *)malloc(sizeof(git_transfer_progress));
  memcpy(*out, arg, sizeof(git_transfer_progress));
}
