////////////////////////////////////////////////////////////////////////////////////////
// SampleMarkerUserData.h

#pragma once

class CSampleMarkerUserData : public ON_UserData
{
	ON_OBJECT_DECLARE(CSampleMarkerUserData);

public:
	CSampleMarkerUserData();
  ~CSampleMarkerUserData();
	CSampleMarkerUserData(const CSampleMarkerUserData& src);
	CSampleMarkerUserData& operator=(const CSampleMarkerUserData& src);

  static ON_UUID Id();
  static ON_UUID PlugInId();

  // Virtual ON_UserData::GetDescription() override
  bool GetDescription(ON_wString& description);

  // Virtual virtual ON_UserData::Archive() override
  bool Archive() const;

  // Virtual virtual ON_UserData::Read() override
  bool Read(ON_BinaryArchive& archive);

  // Virtual virtual ON_UserData::Write() override
  bool Write(ON_BinaryArchive& archive) const;

public:
  // Helper functions
  static bool HasMarkerUserData(const CRhinoObject* object);
  static bool AddMarkerUserData(const CRhinoObject* object);

public:
  bool m_bEnabled;
};