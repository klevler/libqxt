/****************************************************************************
**
** Copyright (C) Qxt Foundation. Some rights reserved.
**
** This file is part of the QxtNetwork module of the Qt eXTension library
**
** This library is free software; you can redistribute it and/or modify it
** under the terms of th Common Public License, version 1.0, as published by
** IBM.
**
** This file is provided "AS IS", without WARRANTIES OR CONDITIONS OF ANY
** KIND, EITHER EXPRESS OR IMPLIED INCLUDING, WITHOUT LIMITATION, ANY
** WARRANTIES OR CONDITIONS OF TITLE, NON-INFRINGEMENT, MERCHANTABILITY OR
** FITNESS FOR A PARTICULAR PURPOSE.
**
** You should have received a copy of the CPL along with this file.
** See the LICENSE file and the cpl1.0.txt file included with the source
** distribution for more information. If you did not receive a copy of the
** license, contact the Qxt Foundation.
**
** <http://libqxt.sourceforge.net>  <foundation@libqxt.org>
**
****************************************************************************/
#ifndef QXTLINESOCKET_H_GUARD_ioadniaosd
#define QXTLINESOCKET_H_GUARD_ioadniaosd

#include <QObject>
#include <qxtpimpl.h>
#include <qxtglobal.h>

class QIODevice;
class QxtLineSocketPrivate;
class QXT_CORE_EXPORT QxtLineSocket: public QObject
{
Q_OBJECT
public:
    QxtLineSocket (QIODevice * socket,QObject * parent=0);
    QxtLineSocket (QObject * parent=0);

    void setSocket(QIODevice *);
    QIODevice * socket() const;

    void sendLine(QByteArray);
signals:
    void newLineReceived(QByteArray);
protected:
    virtual void newLine(QByteArray);
private:
    QXT_DECLARE_PRIVATE(QxtLineSocket);

};


#endif
