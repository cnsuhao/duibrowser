/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

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

#include "config.h"

#include "JSDocumentType.h"

#include <wtf/GetPtr.h>

#include "DocumentType.h"
#include "JSNamedNodeMap.h"
#include "KURL.h"
#include "NamedAttrMap.h"
#include "NamedNodeMap.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashTableValue JSDocumentTypeTableValues[8] =
{
    { "name", (intptr_t)JSDocumentType::NameAttrNum, DontDelete|ReadOnly, 0 },
    { "entities", (intptr_t)JSDocumentType::EntitiesAttrNum, DontDelete|ReadOnly, 0 },
    { "notations", (intptr_t)JSDocumentType::NotationsAttrNum, DontDelete|ReadOnly, 0 },
    { "publicId", (intptr_t)JSDocumentType::PublicIdAttrNum, DontDelete|ReadOnly, 0 },
    { "systemId", (intptr_t)JSDocumentType::SystemIdAttrNum, DontDelete|ReadOnly, 0 },
    { "internalSubset", (intptr_t)JSDocumentType::InternalSubsetAttrNum, DontDelete|ReadOnly, 0 },
    { "constructor", (intptr_t)JSDocumentType::ConstructorAttrNum, DontEnum, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSDocumentTypeTable = { 127, JSDocumentTypeTableValues, 0 };

/* Hash table for constructor */

static const HashTableValue JSDocumentTypeConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSDocumentTypeConstructorTable = { 0, JSDocumentTypeConstructorTableValues, 0 };

class JSDocumentTypeConstructor : public DOMObject {
public:
    JSDocumentTypeConstructor(ExecState* exec)
        : DOMObject(exec->lexicalGlobalObject()->objectPrototype())
    {
        putDirect(exec->propertyNames().prototype, JSDocumentTypePrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSDocumentTypeConstructor::s_info = { "DocumentTypeConstructor", 0, &JSDocumentTypeConstructorTable, 0 };

bool JSDocumentTypeConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSDocumentTypeConstructor, DOMObject>(exec, &JSDocumentTypeConstructorTable, this, propertyName, slot);
}

JSValue* JSDocumentTypeConstructor::getValueProperty(ExecState* exec, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(exec, token);
}

/* Hash table for prototype */

static const HashTableValue JSDocumentTypePrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSDocumentTypePrototypeTable = { 0, JSDocumentTypePrototypeTableValues, 0 };

const ClassInfo JSDocumentTypePrototype::s_info = { "DocumentTypePrototype", 0, &JSDocumentTypePrototypeTable, 0 };

JSObject* JSDocumentTypePrototype::self(ExecState* exec)
{
    // Changed by Paul Pedriana (1/2009), as the static new was creating a memory leak. If this gets called a lot then we can consider making it a static pointer that's freed on shutdown.
    const Identifier prototypeIdentifier(exec, "[[JSDocumentType.prototype]]");
    return KJS::cacheGlobalObject<JSDocumentTypePrototype>(exec, prototypeIdentifier);
}

const ClassInfo JSDocumentType::s_info = { "DocumentType", &JSNode::s_info, &JSDocumentTypeTable , 0 };

JSDocumentType::JSDocumentType(JSObject* prototype, DocumentType* impl)
    : JSNode(prototype, impl)
{
}

bool JSDocumentType::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSDocumentType, Base>(exec, &JSDocumentTypeTable, this, propertyName, slot);
}

JSValue* JSDocumentType::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case NameAttrNum: {
        DocumentType* imp = static_cast<DocumentType*>(impl());
        return jsString(exec, imp->name());
    }
    case EntitiesAttrNum: {
        DocumentType* imp = static_cast<DocumentType*>(impl());
        return toJS(exec, WTF::getPtr(imp->entities()));
    }
    case NotationsAttrNum: {
        DocumentType* imp = static_cast<DocumentType*>(impl());
        return toJS(exec, WTF::getPtr(imp->notations()));
    }
    case PublicIdAttrNum: {
        DocumentType* imp = static_cast<DocumentType*>(impl());
        return jsStringOrNull(exec, imp->publicId());
    }
    case SystemIdAttrNum: {
        DocumentType* imp = static_cast<DocumentType*>(impl());
        return jsStringOrNull(exec, imp->systemId());
    }
    case InternalSubsetAttrNum: {
        DocumentType* imp = static_cast<DocumentType*>(impl());
        return jsStringOrNull(exec, imp->internalSubset());
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

JSValue* JSDocumentType::getConstructor(ExecState* exec)
{
    // Changed by Paul Pedriana (1/2009), as the static new was creating a memory leak. If this gets called a lot then we can consider making it a static pointer that's freed on shutdown.
    const Identifier constructorIdentifier(exec, "[[DocumentType.constructor]]");
    return KJS::cacheGlobalObject<JSDocumentTypeConstructor>(exec, constructorIdentifier);
}

DocumentType* toDocumentType(KJS::JSValue* val)
{
    return val->isObject(&JSDocumentType::s_info) ? static_cast<JSDocumentType*>(val)->impl() : 0;
}

}
