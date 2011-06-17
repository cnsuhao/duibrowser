/*
    Copyright (C) 2004, 2005, 2008 Nikolas Zimmermann <zimmermann@kde.org>
                  2004, 2005 Rob Buis <buis@kde.org>

    This file is part of the KDE project

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

/*
* This file was modified by Electronic Arts Inc Copyright � 2009-2010
*/

#ifndef SVGURIReference_h
#define SVGURIReference_h

#include <wtf/FastAllocBase.h>
#if ENABLE(SVG)
#include "SVGElement.h"

namespace WebCore {

    class MappedAttribute;

    class SVGURIReference/*: public WTF::FastAllocBase*/ {
    public:
        SVGURIReference();
        virtual ~SVGURIReference();

        bool parseMappedAttribute(MappedAttribute*);
        bool isKnownAttribute(const QualifiedName&);

        static String getTarget(const String& url);

    protected:
        virtual const SVGElement* contextElement() const = 0;

    private:
        ANIMATED_PROPERTY_DECLARATIONS_WITH_CONTEXT(SVGURIReference, String, String, Href, href)
    };

} // namespace WebCore

#endif // ENABLE(SVG)
#endif // SVGURIReference_h
