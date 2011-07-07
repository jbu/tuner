#ifndef QMLAUDIODEVICEINFO_H
#define QMLAUDIODEVICEINFO_H

#include <QObject>

class QmlAudioDeviceInfo : public QObject
{
    Q_OBJECT
public:
    explicit QmlAudioDeviceInfo(QObject *parent = 0);

signals:

public slots:

};

#endif // QMLAUDIODEVICEINFO_H

bool isNull() const;

QString deviceName() const;

bool isFormatSupported(const QAudioFormat &format) const;
QAudioFormat preferredFormat() const;
QAudioFormat nearestFormat(const QAudioFormat &format) const;

QStringList supportedCodecs() const;
QList<int> supportedFrequencies() const;
QList<int> supportedSampleRates() const;
QList<int> supportedChannels() const;
QList<int> supportedChannelCounts() const;
QList<int> supportedSampleSizes() const;
QList<QAudioFormat::Endian> supportedByteOrders() const;
QList<QAudioFormat::SampleType> supportedSampleTypes() const;

static QAudioDeviceInfo defaultInputDevice();
static QAudioDeviceInfo defaultOutputDevice();

static QList<QAudioDeviceInfo> availableDevices(QAudio::Mode mode);
