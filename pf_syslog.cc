#include <syslog.h>
#include "pf_syslog.hh"

pf_syslog::pf_syslog(void) {

};

void pf_syslog::info(const char *msg) {
  syslog(LOG_INFO, msg);
};

void pf_syslog::warn(const char *msg) {
  syslog(LOG_WARNING, msg);
};

void pf_syslog::error(const char *msg) {
  syslog(LOG_ERR, msg);
};

pf_syslog::~pf_syslog(void) {
  closelog();
};
