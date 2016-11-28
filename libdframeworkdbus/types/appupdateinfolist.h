/**
 * Copyright (C) 2015 Deepin Technology Co., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 **/

#ifndef APPUPDATEINFO_H
#define APPUPDATEINFO_H

#include <QObject>
#include <QList>
#include <QDBusArgument>
#include <QtDBus>

class AppUpdateInfo
{
public:
    AppUpdateInfo();

    friend QDebug operator<<(QDebug argument, const AppUpdateInfo &info);
    friend QDBusArgument &operator<<(QDBusArgument &argument, const AppUpdateInfo &info);
    friend const QDBusArgument &operator>>(const QDBusArgument &argument, AppUpdateInfo &info);

public:
    QString m_packageId;
    QString m_name;
    QString m_icon;
    QString m_currentVersion;
    QString m_avilableVersion;
    QString m_changelog;
};

typedef QList<AppUpdateInfo> AppUpdateInfoList;
Q_DECLARE_METATYPE(AppUpdateInfo)
Q_DECLARE_METATYPE(AppUpdateInfoList)

void registerAppUpdateInfoListMetaType();

#endif // APPUPDATEINFO_H