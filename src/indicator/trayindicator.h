#ifndef TRAYINDICATOR_H
#define TRAYINDICATOR_H

#include "trayindicator_global.h"

/*
 *  QCMA: Cross-platform content manager assistant for the PS Vita
 *
 *  Copyright (C) 2014  Codestation
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <QString>
#include <QWidget>

class TRAYINDICATORSHARED_EXPORT TrayIndicator : public QWidget
{
    Q_OBJECT
public:
    virtual ~TrayIndicator();
    virtual void init() = 0;
    virtual bool isVisible() = 0;
    virtual void setIcon(const QString &icon) = 0;
    virtual void showMessage(const QString &title, const QString &message);
    virtual void show() = 0;
    virtual void hide() = 0;

protected:
    TrayIndicator(QWidget *parent = 0);

signals:
    void openConfig();
    void openManager();
    void refreshDatabase();
    void showAboutDialog();
    void showAboutQt();
    void stopServer();

};

#endif // TRAYINDICATOR_H
