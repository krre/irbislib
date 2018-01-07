#pragma once
#include <QDebug>

namespace IrbisLib {

QTextStream& qStdOut() {
    static QTextStream ts(stdout);
    return ts;
}

class Utils {

public:
    Utils();
    static int versionToApi(const QString& version);
    static QString apiToVersion(int api);
};

} // IrbisLib
