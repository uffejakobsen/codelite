//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
//
// copyright            : (C) 2013 by Eran Ifrah
// file name            : editorsettingsdockingwidows.h
//
// -------------------------------------------------------------------------
// A
//              _____           _      _     _ _
//             /  __ \         | |    | |   (_) |
//             | /  \/ ___   __| | ___| |    _| |_ ___
//             | |    / _ \ / _  |/ _ \ |   | | __/ _ )
//             | \__/\ (_) | (_| |  __/ |___| | ||  __/
//              \____/\___/ \__,_|\___\_____/_|\__\___|
//
//                                                  F i l e
//
//    This program is free software; you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation; either version 2 of the License, or
//    (at your option) any later version.
//
//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////

#ifndef __editorsettingsdockingwidows__
#define __editorsettingsdockingwidows__

#include "editorsettingsdockingwindowsbase.h"
#include "treebooknodebase.h"
#include "optionsconfig.h"

class EditorSettingsDockingWindows : public EditorSettingsDockingWindowsBase,
                                     public TreeBookNode<EditorSettingsDockingWindows>
{
    void OnHideOutputPaneNotIfDebugUI(wxUpdateUIEvent& event);

public:
    /** Constructor */
    EditorSettingsDockingWindows(wxWindow* parent);
    virtual void Save(OptionsConfigPtr options);
    bool IsRestartRequired();

protected:
    virtual void OnUsingNativeBookUI(wxUpdateUIEvent& event);
    virtual void OnUseCustomCaptionColourUI(wxUpdateUIEvent& event);
    virtual void OnEnsureCaptionsVisibleUI(wxUpdateUIEvent& event);
};

#endif // __editorsettingsdockingwidows__
