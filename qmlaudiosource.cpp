#include "qmlaudiosource.h"

QmlAudioSource::QmlAudioSource(QObject *parent) :
    QObject(parent)
{
    setFlag(QGraphicsItem::ItemHasNoContents, true);
}

void QmlAudioSource::setFormat(const QAudioFormat format) {
    this->format = format;
}

QAudioFormat QmlAudioSource::format() const {

}

void QmlAudioSource::formatChanged() {

}
