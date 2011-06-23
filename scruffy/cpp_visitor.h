/*  Scruffy - C/C++ parser and source code analyzer
    Copyright (C) 2011 Dmitry Shatrov

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2.1 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this library; if not, write to the Free Software
    Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/


#ifndef __SCRUFFY__CPP_VISITOR_H__
#define __SCRUFFY__CPP_VISITOR_H__

#include <mycpp/mycpp.h>

namespace Scruffy {

using namespace MyCpp;

class CppVisitor : public virtual Object
{
public:
    virtual void declaration (Cpp::TypeDec *type_desc) {}

    virtual void beginNamespace () {}

    virtual void endNamespace () {}

    virtual void beginClass {}

    virtual void endClass {}

    virtual void beginFunction () {}

    virtual void endFunction () {}

    virtual void beginStatement () {}

    virtual void endStatement () {}

    virtual void expression () {}
};

}

#endif /* __SCRUFFY__CPP_VISITOR_H__ */

