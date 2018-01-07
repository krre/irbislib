#include "Utils.h"

namespace IrbisLib {

Utils::Utils() {

}

int Utils::versionToApi(const QString& version) {
    QStringList list = version.split('.');
    int major = list.at(0).toInt();
    int minor = list.at(1).toInt();
    int patch = list.at(2).toInt();
    return (major << 22) | (minor << 12) | patch;
}

QString Utils::apiToVersion(int api) {
    int major = (api >> 22) & 0x3FF;
    int minor = (api >> 12) & 0x3FF;
    int patch = api & 0xFFF;
    return QString("%1.%2.%3").arg(QString::number(major)).arg(QString::number(minor)).arg(QString::number(patch));
}

} // IrbisLib
