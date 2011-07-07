#ifndef QMLAUDIOFORMAT_H
#define QMLAUDIOFORMAT_H

#include <QObject>
#include <QAudioFormat>

class QmlAudioFormat : public QObject
{
    Q_OBJECT
    Q_PROPERTY(bool valid READ valid)
    Q_PROPERTY(int frequency READ frequency WRITE setFrequency NOTIFY frequencyChanged)
    Q_PROPERTY(int sampleRate READ sampleRate WRITE setSampleRate NOTIFY sampleRateChanged)
    Q_PROPERTY(int channels READ channels WRITE setChannels NOTIFY channelsChanged)
    Q_PROPERTY(int channelCount READ channelCount WRITE setChannelCount NOTIFY channelCountChanged)
    Q_PROPERTY(int sampleSize READ sampleSize WRITE setSampleSize NOTIFY sampleSizeChanged)
    Q_PROPERTY(QString codec READ codec WRITE setCodec NOTIFY codecChanged)
    Q_PROPERTY(Endian byteOrder READ byteOrder WRITE setByteOrder NOTIFY byteOrderChanged)
    Q_PROPERTY(SampleType sampleType READ sampleType WRITE setSampleType NOTIFY sampleTypeChanged)
public:
    enum SampleType { Unknown, SignedInt, UnSignedInt, Float };
    enum Endian { BigEndian = QSysInfo::BigEndian, LittleEndian = QSysInfo::LittleEndian };
    explicit QmlAudioFormat(QObject *parent = 0);

signals:

public slots:

private:
    QAudioFormat format;
};

#endif // QMLAUDIOFORMAT_H
