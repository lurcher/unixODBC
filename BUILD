
load('@bazel_skylib//rules:expand_template.bzl', 'expand_template')

expand_template(
    name = 'config_header',
    out = 'include/config.h',
    substitutions = {
        '@INSTALL_PREFIX@': '/usr/local',
        # TODO(bd) find some way to access the current module version
        # for this substitution
        #'@MODULE_VERSION@': MODULE.version
    },
    template = 'bazel/config.h.linux',
)

expand_template(
    name = 'unixodbc_conf_header',
    out = 'include/unixODBC/unixodbc_conf.h',
    substitutions = {
        '@INSTALL_PREFIX@': '/usr/local',
    },
    template = 'bazel/unixodbc_conf.h.linux',
)

filegroup(
    name = 'unixodbc_header_in',
    srcs = ['bazel/unixodbc.h.linux'],
)

genrule(
    name = 'unixodbc_header',
    srcs = ['unixodbc_header_in'],
    outs = ['include/unixodbc.h'],
    cmd = 'cp $(SRCS) $(OUTS)'
)

cc_library(
    name = 'headers',
    visibility = ['//visibility:public'],
    hdrs = [
        'include/sqlspi.h',
        'include/sqlucode.h',
        'include/sqp.h',
        'include/lst.h',
        'include/odbcinst.h',
        'include/sql.h',
        'include/sqltypes.h',
        'include/sqlext.h',
        'include/odbctrace.h',
        'include/odbcinstext.h',
        'include/uodbc_stats.h',
        'include/ini.h',
        'include/uodbc_extras.h',
        'include/log.h',
        'include/odbctrac.h',
        'include/autotest.h',
        ':config_header',
        ':unixodbc_header',
    ],
    strip_include_prefix = 'include',
)
