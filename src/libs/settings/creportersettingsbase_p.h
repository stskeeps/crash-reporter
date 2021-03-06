/*
 * This file is part of crash-reporter
 *
 * Copyright (C) 2010 Nokia Corporation and/or its subsidiary(-ies).
 *
 * Contact: Ville Ilvonen <ville.p.ilvonen@nokia.com>
 * Author: Riku Halonen <riku.halonen@nokia.com>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public License
 * version 2.1 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA
 * 02110-1301 USA
 *
 */

#ifndef CREPORTERSETTINGSBASE_P_H
#define CREPORTERSETTINGSBASE_P_H

// System includes.

#include <QObject>

// User includes.

#include "creportersettingsbase.h"

// Forward declarations.

class QSettings;

/*!
  * @class CReporterSettingsBasePrivate
  * @brief Private data class for CReporterSettingsBase.
  *
  * @sa CReporterSettingsBase
  */
class CReporterSettingsBasePrivate : public QObject
{
    Q_OBJECT

    public:
        /*!
         * @brief Class constructor.
         *
         */
        CReporterSettingsBasePrivate();

        /*!
         * @brief Class destructor.
         *
         */
        virtual ~CReporterSettingsBasePrivate();

    public:
        //! @arg Settings read from file.
        QSettings *m_settings;

    private:
        Q_DECLARE_PUBLIC(CReporterSettingsBase)
        //! @arg Pointer to public class.
        CReporterSettingsBase *q_ptr;
};

#endif // CREPORTERSETTINGSBASE_P_H

// End of file.
