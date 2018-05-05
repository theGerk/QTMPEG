#ifndef QTMPEG_GLOBAL_H
#define QTMPEG_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(QTMPEG_LIBRARY)
#  define QTMPEGSHARED_EXPORT Q_DECL_EXPORT
#else
#  define QTMPEGSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // QTMPEG_GLOBAL_H
