
cc_binary(
    name = 'isql',
    visibility = ['//visibility:public'],
    srcs = [
        'isql.c',
    ],
    copts = [
        '-DHAVE_CONFIG_H',
    ],
    linkopts = [
        '-lltdl',
    ],
    deps = [
        '//DriverManager:libodbc',
        '//:headers',
        ':headers',
    ],
)

cc_binary(
    name = 'dltest',
    visibility = ['//visibility:public'],
    srcs = [
        'dltest.c',
    ],
    copts = [
        '-DHAVE_CONFIG_H',
    ],
    linkopts = [
        '-lltdl',
    ],
    deps = [
        '//:headers',
    ],
)

cc_binary(
    name = 'odbcinst',
    visibility = ['//visibility:public'],
    srcs = [
        'odbcinst.c',
    ],
    copts = [
        '-DHAVE_CONFIG_H',
    ],
    linkopts = [
        '-lltdl',
    ],
    deps = [
        '//odbcinst:libodbcinst',
        '//ini:libinilc',
        '//:headers',
    ],
)

cc_binary(
    name = 'iusql',
    visibility = ['//visibility:public'],
    srcs = [
        'iusql.c',
    ],
    copts = [
        '-DHAVE_CONFIG_H',
    ],
    linkopts = [
        '-lltdl',
    ],
    deps = [
        '//odbcinst:libodbcinst',
        '//DriverManager:libodbc',
        '//ini:libinilc',
        '//extras:libodbcextraslc',
        '//:headers',
        ':headers',
    ],
)

cc_binary(
    name = 'odbc_config',
    visibility = ['//visibility:public'],
    srcs = [
        'odbc-config.c',
    ],
    copts = [
        '-DHAVE_CONFIG_H',
    ],
    linkopts = [
        '-lltdl',
    ],
    deps = [
        '//:headers',
    ],
)

cc_binary(
    name = 'slencheck',
    visibility = ['//visibility:public'],
    srcs = [
        'slencheck.c',
    ],
    copts = [
        '-DHAVE_CONFIG_H',
    ],
    linkopts = [
        '-lltdl',
    ],
    deps = [
        '//DriverManager:libodbc',
        '//:headers',
    ],
)

cc_library(
    name = 'headers',
    visibility = ['//visibility:public'],
    hdrs = [
        'isql.h',
    ],
    includes = ['.'],
    copts = [
        '-DHAVE_CONFIG_H',
    ],
)
