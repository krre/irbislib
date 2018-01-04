#include "ShadelessMaterial.h"
#include <Qt3DRender>

namespace IrbisLib {

ShadelessMaterial::ShadelessMaterial() {
    parameter = new Qt3DRender::QParameter;
    parameter->setName("color");
    addParameter(parameter);

    Qt3DRender::QEffect* effect = new Qt3DRender::QEffect;

    Qt3DRender::QTechnique* technique = new Qt3DRender::QTechnique;
    technique->graphicsApiFilter()->setProfile(Qt3DRender::QGraphicsApiFilter::CoreProfile);
    technique->graphicsApiFilter()->setApi(Qt3DRender::QGraphicsApiFilter::OpenGL);
    technique->graphicsApiFilter()->setMajorVersion(3);
    technique->graphicsApiFilter()->setMinorVersion(1);

    Qt3DRender::QFilterKey* filterkey = new Qt3DRender::QFilterKey(this);
    filterkey->setName(QStringLiteral("renderingStyle"));
    filterkey->setValue(QStringLiteral("forward"));

    technique->addFilterKey(filterkey);

    Qt3DRender::QShaderProgram* shader = new Qt3DRender::QShaderProgram;
    shader->setVertexShaderCode(Qt3DRender::QShaderProgram::loadSource(QUrl(QStringLiteral("qrc:/IrbisLib/Graphics/Shaders/Shadeless.vert"))));
    shader->setFragmentShaderCode(Qt3DRender::QShaderProgram::loadSource(QUrl(QStringLiteral("qrc:/IrbisLib/Graphics/Shaders/Shadeless.frag"))));

    Qt3DRender::QRenderPass* renderPass = new Qt3DRender::QRenderPass;
    renderPass->setShaderProgram(shader);
    technique->addRenderPass(renderPass);

    effect->addTechnique(technique);

    setEffect(effect);
    setColor(Qt::yellow);
}

void ShadelessMaterial::setColor(const QColor& color) {
    QVector3D vec3(color.red(), color.green(), color.blue());
    parameter->setValue(vec3);
}

} // IrbisLib
