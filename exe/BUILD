
# simple test case specific to bazel
cc_test(
    name = 'test_cfg',
    srcs = ['test_cfg.c'],
    linkstatic = True,
    deps = ['//:headers'],
    size = 'small',
)

# generic test case that existed before bazel
cc_binary(
    name = 'dltest',
    visibility = ['//visibility:public'],
    srcs = ['dltest.c'],
    linkopts = [
        '-lltdl',
        '-ldl',
    ],
    deps = [
        '//:headers',
    ],
)

# binaries

cc_binary(
    name = 'odbcinst',
    visibility = ['//visibility:public'],
    srcs = ['odbcinst.c'],
    linkopts = [
        '-lltdl',
        '-ldl',
    ],
    deps = [
        '//odbcinst:libodbcinst',
        '//ini:libinilc',
    ],
)

cc_binary(
    name = 'isql',
    visibility = ['//visibility:public'],
    srcs = [
        'isql.c',
        'isql.h',
    ],
    linkstatic = True,
    deps = [
        '//:libodbc',
        '//extras:libodbcextraslc',
        # READLINE
    ],
)

cc_binary(
    name = 'iusql',
    visibility = ['//visibility:public'],
    srcs = [
        'iusql.c',
        'isql.h',
    ],
    linkopts = [
        '-lltdl',
        '-ldl',
    ],
    deps = [
        '//:libodbc',
        '//odbcinst:libodbcinst',
        '//ini:libinilc',
        # READLINE
    ],
)

cc_binary(
    name = 'odbc_config',
    visibility = ['//visibility:public'],
    srcs = ['odbc-config.c'],
    linkstatic = True,
    deps = ['//:headers'],
)

cc_binary(
    name = 'slencheck',
    visibility = ['//visibility:public'],
    srcs = ['slencheck.c'],
    linkstatic = True,
    deps = [
        '//:libodbc',
    ],
)
