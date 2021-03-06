/***************************************************************************
*   Copyright (C) 2005 by                                                 *
*   Pedro J. Fernandez Ruiz    pedroj@um.es                               *
*   Alejandro Perez Mendez     alex@um.es                                 *
*                                                                         *
*   This library is free software; you can redistribute it and/or         *
*   modify it under the terms of the GNU Lesser General Public            *
*   License as published by the Free Software Foundation; either          *
*   version 2.1 of the License, or (at your option) any later version.    *
*                                                                         *
*   This library is distributed in the hope that it will be useful,       *
*   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
*   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU     *
*   Lesser General Public License for more details.                       *
*                                                                         *
*   You should have received a copy of the GNU Lesser General Public      *
*   License along with this library; if not, write to the Free Software   *
*   Foundation, Inc., 51 Franklin St, Fifth Floor,                        *
*   Boston, MA  02110-1301  USA                                           *
***************************************************************************/
#include "buseventchildsa.h"

namespace openikev2 {

    BusEventChildSa::BusEventChildSa( CHILD_SA_EVENT_TYPE child_sa_event_type, IkeSa & ike_sa, ChildSa & child_sa )
            : ike_sa( ike_sa ), child_sa ( child_sa ) {
        this->type = BusEvent::CHILD_SA_EVENT;
        this->child_sa_event_type = child_sa_event_type;
        this->data = NULL;
    }

    BusEventChildSa::BusEventChildSa( CHILD_SA_EVENT_TYPE child_sa_event_type, IkeSa & ike_sa, ChildSa & child_sa, void* data )
            : ike_sa( ike_sa ), child_sa ( child_sa ) {
        this->type = BusEvent::CHILD_SA_EVENT;
        this->child_sa_event_type = child_sa_event_type;
        this->data = data;
    }

    BusEventChildSa::~BusEventChildSa() {}
}
