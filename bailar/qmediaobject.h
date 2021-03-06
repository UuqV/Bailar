/****************************************************************************
**
** Copyright (C) 2013 Digia Plc and/or its subsidiary(-ies).
** Contact: http://www.qt-project.org/legal
**
** This file is part of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Digia.  For licensing terms and
** conditions see http://qt.digia.com/licensing.  For further information
** use the contact form at http://qt.digia.com/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Digia gives you certain additional
** rights.  These rights are described in the Digia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#ifndef QABSTRACTMEDIAOBJECT_H
#define QABSTRACTMEDIAOBJECT_H

#include <QtCore/qobject.h>
#include <QtCore/qstringlist.h>

#include <QtMultimedia/qtmultimediadefs.h>
#include <QtMultimedia/qmultimedia.h>

QT_BEGIN_NAMESPACE


class QMediaService;
class QMediaBindableInterface;

class QMediaObjectPrivate;
class Q_MULTIMEDIA_EXPORT QMediaObject : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int notifyInterval READ notifyInterval WRITE setNotifyInterval NOTIFY notifyIntervalChanged)
public:
    ~QMediaObject();

    virtual bool isAvailable() const;
    virtual QMultimedia::AvailabilityStatus availability() const;

    virtual QMediaService* service() const;

    int notifyInterval() const;
    void setNotifyInterval(int milliSeconds);

    virtual bool bind(QObject *);
    virtual void unbind(QObject *);

    bool isMetaDataAvailable() const;

    QVariant metaData(const QString &key) const;
    QStringList availableMetaData() const;

Q_SIGNALS:
    void notifyIntervalChanged(int milliSeconds);

    void metaDataAvailableChanged(bool available);
    void metaDataChanged();
    void metaDataChanged(const QString &key, const QVariant &value);

    void availabilityChanged(bool available);
    void availabilityChanged(QMultimedia::AvailabilityStatus availability);

protected:
    QMediaObject(QObject *parent, QMediaService *service);
    QMediaObject(QMediaObjectPrivate &dd, QObject *parent, QMediaService *service);

    void addPropertyWatch(QByteArray const &name);
    void removePropertyWatch(QByteArray const &name);

    QMediaObjectPrivate *d_ptr;

private:
    void setupControls();

    Q_DECLARE_PRIVATE(QMediaObject)
    Q_PRIVATE_SLOT(d_func(), void _q_notify())
    Q_PRIVATE_SLOT(d_func(), void _q_availabilityChanged())
};


QT_END_NAMESPACE


#endif  // QABSTRACTMEDIAOBJECT_H
