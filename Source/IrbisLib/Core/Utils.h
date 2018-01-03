#pragma once
#include <QDebug>

namespace IrbisLib {

QTextStream& qStdOut() {
    static QTextStream ts(stdout);
    return ts;
}

class Utils {
    Utils();
};

} // IrbisLib
