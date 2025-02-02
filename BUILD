
load('@bazel_skylib//rules:expand_template.bzl', 'expand_template')
load('//bazel:autotools-linux-subs.bzl', 'AUTOTOOLS_SUBS')

# get the library version from the module declaration in MODULE.bazel
# and use that to substitute in for the version in the input header
# files
load('@module_versions//:versions.bzl', 'UNIXODBC_VERSION')
version_subs = {
    '#undef VERSION\n': '#define VERSION "' + UNIXODBC_VERSION + '"\n',
    '#undef PACKAGE_STRING\n': '#define PACKAGE_STRING "unixODBC ' + UNIXODBC_VERSION + '"\n',
    '#undef PACKAGE_VERSION\n': '#define PACKAGE_VERSION "' + UNIXODBC_VERSION + '"\n',
}

expand_template(
    name = 'unixodbc_h',
    template = 'unixodbc.h.in',
    out = 'include/unixodbc.h',
    substitutions = AUTOTOOLS_SUBS,
)

expand_template(
    name = 'config_h_partial',
    template = 'config.h.in',
    out = 'include/config.h.partial',
    substitutions = AUTOTOOLS_SUBS,
)

expand_template(
    name = 'config_h',
    template = ':config_h_partial',
    out = 'include/config.h',
    substitutions = version_subs,
)

expand_template(
    name = 'unixodbc_conf_h',
    template = 'unixodbc_conf.h.in',
    out = 'include/unixodbc_conf.h',
    substitutions = AUTOTOOLS_SUBS,
)

cc_library(
    name = 'headers',
    visibility = ['//visibility:public'],
    hdrs = [
        'include/odbcinst.h',
        'include/odbcinstext.h',
        'include/sql.h',
        'include/sqlext.h',
        'include/sqltypes.h',
        'include/sqlucode.h',
        'include/sqlspi.h',
        'include/autotest.h',
        'include/uodbc_stats.h',
        'include/uodbc_extras.h',
        'include/ini.h',
        'include/log.h',
        'include/lst.h',
        'include/sqp.h',
        'include/odbctrace.h',
        'include/odbctrac.h',
        ':unixodbc_h',
        ':config_h',
        ':unixodbc_conf_h',
    ],
    strip_include_prefix = 'include',
    copts = [
        '-DHAVE_CONFIG_H',
    ],
)
