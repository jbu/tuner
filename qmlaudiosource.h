#ifndef QMLAUDIOSOURCE_H
#define QMLAUDIOSOURCE_H

#include <QObject>
#include <QAudioDeviceInfo>

class QmlAudioSource : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QAudioFomat format READ format WRITE setFormat NOTIFY formatChanged)

public:
    explicit QmlAudioSource(QObject *parent = 0);
    void setFormat(const QAudioFormat format);
    QAudioFormat format() const;

signals:
    void formatChanged();

public slots:

private:
    QAudioFormat format;
};

#endif // QMLAUDIOSOURCE_H
