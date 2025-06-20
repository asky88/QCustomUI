﻿/*********************************************************************************
**                                                                              **
**  Copyright (C) 2019-2025 LiLong                                              **
**  This file is part of QCustomUi.                                             **
**                                                                              **
**  QCustomUi is free software: you can redistribute it and/or modify           **
**  it under the terms of the GNU Lesser General Public License as published by **
**  the Free Software Foundation, either version 3 of the License, or           **
**  (at your option) any later version.                                         **
**                                                                              **
**  QCustomUi is distributed in the hope that it will be useful,                **
**  but WITHOUT ANY WARRANTY; without even the implied warranty of              **
**  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the               **
**  GNU Lesser General Public License for more details.                         **
**                                                                              **
**  You should have received a copy of the GNU Lesser General Public License    **
**  along with QCustomUi.  If not, see <https://www.gnu.org/licenses/>.         **
**********************************************************************************/

#pragma once

#include "qcustomui_global.h"

#include <QTableView>

class QCtmTableItemDelegate;

class QCUSTOMUI_EXPORT QCtmTableView : public QTableView
{
    Q_OBJECT

public:
    explicit QCtmTableView(QWidget* parent = nullptr);
    ~QCtmTableView();

protected:
    bool viewportEvent(QEvent* event) override;
    virtual void setHoverIndex(const QModelIndex& index);

private:
    QCtmTableItemDelegate* m_delegate;
    QModelIndex m_hover;
    friend class QCtmTableViewButtonsDelegate;
};
