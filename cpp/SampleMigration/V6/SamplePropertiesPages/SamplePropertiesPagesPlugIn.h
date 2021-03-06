/////////////////////////////////////////////////////////////////////////////
// SamplePropertiesPagesPlugIn.h : main header file for the SamplePropertiesPages plug-in
//

#pragma once

#include "PropertiesPage.h"

/////////////////////////////////////////////////////////////////////////////
// CSamplePropertiesPagesPlugIn
// See SamplePropertiesPagesPlugIn.cpp for the implementation of this class
//

class CSamplePropertiesPagesPlugIn : public CRhinoUtilityPlugIn
{
public:
  CSamplePropertiesPagesPlugIn();
  ~CSamplePropertiesPagesPlugIn();

  // Required overrides
  const wchar_t* PlugInName() const;
  const wchar_t* PlugInVersion() const;
  GUID PlugInID() const;
  BOOL OnLoadPlugIn();
  void OnUnloadPlugIn();

  // Online help overrides
  BOOL AddToPlugInHelpMenu() const;
  BOOL OnDisplayPlugInHelp( HWND hWnd ) const;

  /////////////////////////////////////////////////////////////////////////////
  // Extend object properties
  void AddPagesToObjectPropertiesDialog(CRhinoPropertiesPanelPageCollection& collection) override;
  CPropertiesPage m_properties_page;
  /////////////////////////////////////////////////////////////////////////////
  // Extend the Options dialog
  void AddPagesToOptionsDialog(CRhinoOptionsPageCollection& collection) override;
  /////////////////////////////////////////////////////////////////////////////
  // Extend the Document Properties dialog
  void AddPagesToDocumentPropertiesDialog(CRhinoOptionsPageCollection& collection) override;
  /////////////////////////////////////////////////////////////////////////////

private:
  ON_wString m_plugin_version;

  // TODO: Add additional class information here
};

CSamplePropertiesPagesPlugIn& SamplePropertiesPagesPlugIn();



