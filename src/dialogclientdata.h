/***************************************************************************
 *   Copyright (C) 2012 by Miguel Chavez Gamboa                            *
 *   hiramvillarreal.ap@gmail.com                                          *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.         *
 ***************************************************************************/
#ifndef DIALOGCLIENTDATA_H
#define DIALOGCLIENTDATA_H

#include <KDialog>
#include <QtGui>
#include "ui_datoscliente.h"

class DialogClientDataUI : public QFrame, public Ui::datosCliente
{
  Q_OBJECT
  public:
    DialogClientDataUI( QWidget *parent=0 );
};

class DialogClientData : public KDialog
{
  Q_OBJECT
  public:
    DialogClientData( QWidget *parent=0 );
    ~DialogClientData();
    QString getNombre(){ return ui->editNombre->text();};
    QString getRFC(){ return ui->editRFC->text();};
    QString getDireccion();
    
  private slots:
    void validate();


  private:
    DialogClientDataUI *ui;
};

#endif
