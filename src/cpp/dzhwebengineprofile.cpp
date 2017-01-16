﻿/**************************************************************************
**
** Copyright (C) 2016 The DZH Company Ltd.
** Contact: http://www.gw.com.cn
**
** This file is part of the DZH Open Source Client.
**
** $DZH_BEGIN_LICENSE:LGPL21$
**
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser
** General Public License version 2.1 or version 3 as published by the Free
** Software Foundation and appearing in the file LICENSE.LGPLv21 and
** LICENSE.LGPLv3 included in the packaging of this file. Please review the
** following information to ensure the GNU Lesser General Public License
** requirements will be met: https://www.gnu.org/licenses/lgpl.html and
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
**
** $DZH_END_LICENSE$
**
**************************************************************************/

#include "dzhwebengineprofile.h"
#include <QtWebEngineCore/qwebengineurlrequestjob.h>
#include <QtWebEngineCore/qwebengineurlschemehandler.h>
#include <QDebug>
#include <QtCore/qbuffer.h>
#include "dzhurlschemehandler.h"



DZHWebEngineProfile::DZHWebEngineProfile(QObject *parent):QQuickWebEngineProfile(parent)
{
    DZHUrlSchemeHandler *urlSchemeHandler = new DZHUrlSchemeHandler(this);
    this->installUrlSchemeHandler("dzh", urlSchemeHandler);
}

//DZHWebEngineProfile::~DZHWebEngineProfile()
//{

//}





