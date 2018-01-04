#pragma once
#include <Qt3DRender/QMaterial>
#include <QColor>

namespace Qt3DRender {
    class QParameter;
}

namespace IrbisLib {

class ShadelessMaterial : public Qt3DRender::QMaterial {

public:
    ShadelessMaterial();
    void setColor(const QColor& color);

private:
    Qt3DRender::QParameter* parameter;
};

} // IrbisLib
