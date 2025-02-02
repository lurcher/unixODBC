
cc_library(
    name = 'libloglc',
    visibility = ['//visibility:public'],
    srcs = [
        '_logFreeMsg.c',
        'logClear.c',
        'logClose.c',
        'logOn.c',
        'logOpen.c',
        'logPeekMsg.c',
        'logPopMsg.c',
        'logPushMsg.c',
    ],
    copts = [
        '-DHAVE_CONFIG_H',
    ],
    deps = [
        '//:headers',
    ],
)
