#pragma once

#include <QObject>
#include <QString>

class QSettings;

namespace Sourcetrail {

class SourceTrailPluginSettings
{
public:
    void toSettings(QSettings *s) const;
    void fromSettings(QSettings *s);

    void debugOutput() const;

    bool equals(const SourceTrailPluginSettings &bs) const;

    QString m_hostAddress = "localhost";
    int m_sourceTrailPort = 6666;
    int m_pluginPort = 6667;
};

inline bool operator==(const SourceTrailPluginSettings &t1, const SourceTrailPluginSettings &t2) { return t1.equals(t2); }
inline bool operator!=(const SourceTrailPluginSettings &t1, const SourceTrailPluginSettings &t2) { return !t1.equals(t2); }


} // namespace Sourcetrail
