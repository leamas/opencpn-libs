//////////////////////////////////////////////////////////////////////////////
// Name:        SVGDefsElement.h
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by generate.py
//////////////////////////////////////////////////////////////////////////////

#ifndef WX_SVG_DEFS_ELEMENT_H
#define WX_SVG_DEFS_ELEMENT_H

#include "SVGElement.h"
#include "SVGTests.h"
#include "SVGLangSpace.h"
#include "SVGExternalResourcesRequired.h"
#include "SVGStylable.h"
#include "SVGTransformable.h"
#include "EventTarget.h"
#include "String_wxsvg.h"
#include "Element.h"
#include "SVGAnimatedType.h"

class wxSVGDefsElement : public wxSVGElement,
                         public wxSVGTests,
                         public wxSVGLangSpace,
                         public wxSVGExternalResourcesRequired,
                         public wxSVGStylable,
                         public wxSVGTransformable,
                         public wxEventTarget {
public:
  wxSVGDefsElement(wxString tagName = wxT("defs")) : wxSVGElement(tagName) {}
  virtual ~wxSVGDefsElement() {}
  wxSvgXmlNode* CloneNode(bool deep = true) {
    return new wxSVGDefsElement(*this);
  }
  wxSVGRect GetBBox(wxSVG_COORDINATES coordinates = wxSVG_COORDINATES_USER) {
    return wxSVGLocatable::GetChildrenBBox(this, coordinates);
  }
  wxSVGRect GetResultBBox(
      wxSVG_COORDINATES coordinates = wxSVG_COORDINATES_USER) {
    return wxSVGLocatable::GetChildrenResultBBox(this, coordinates);
  }
  wxSVGMatrix GetCTM() { return wxSVGLocatable::GetCTM(this); }
  wxSVGMatrix GetScreenCTM() { return wxSVGLocatable::GetScreenCTM(this); }
  bool HasAttribute(const wxString& name) const;
  wxString GetAttribute(const wxString& name) const;
  bool SetAttribute(const wxString& name, const wxString& value);
  wxSvgXmlAttrHash GetAttributes() const;
  bool SetAnimatedValue(const wxString& name, const wxSVGAnimatedType& value);
  virtual wxSVGDTD GetDtd() const { return wxSVG_DEFS_ELEMENT; }
};

#endif  // WX_SVG_DEFS_ELEMENT_H
