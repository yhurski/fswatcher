class pf_syslog
{
public:
  pf_syslog();
  void info(const char *);
  void warn(const char *);
  void error(const char *);
  ~pf_syslog();
private:
  char *prefix;
};
