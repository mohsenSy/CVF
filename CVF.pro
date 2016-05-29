TEMPLATE = subdirs

SUBDIRS =   lib \
            src

CONFIG += ordered

src.depends = lib
