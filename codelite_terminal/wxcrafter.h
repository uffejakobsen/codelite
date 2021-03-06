//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: wxcrafter.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#ifndef _CODELITE_CODELITE_TERMINAL_WXCRAFTER_BASE_CLASSES_H
#define _CODELITE_CODELITE_TERMINAL_WXCRAFTER_BASE_CLASSES_H

#include <wx/settings.h>
#include <wx/xrc/xmlres.h>
#include <wx/xrc/xh_bmp.h>
#include <wx/frame.h>
#include <wx/iconbndl.h>
#include <wx/artprov.h>
#include <wx/sizer.h>
#include <wx/panel.h>
#include <wx/menu.h>
#include <wx/dialog.h>
#include <wx/stattext.h>
#include <wx/clrpicker.h>
#include <wx/fontpicker.h>
#include <wx/button.h>
#if wxVERSION_NUMBER >= 2900
#include <wx/persist.h>
#include <wx/persist/toplevel.h>
#include <wx/persist/bookctrl.h>
#include <wx/persist/treebook.h>
#endif

#ifdef WXC_FROM_DIP
#undef WXC_FROM_DIP
#endif
#if wxVERSION_NUMBER >= 3100
#define WXC_FROM_DIP(x) wxWindow::FromDIP(x, NULL)
#else
#define WXC_FROM_DIP(x) x
#endif

class MainFrameBaseClass : public wxFrame
{
protected:
    wxPanel* m_mainPanel;
    wxMenuBar* m_menuBar;
    wxMenu* m_File;
    wxMenuItem* m_menuItemClearScreen;
    wxMenuItem* m_menuItemSep2;
    wxMenuItem* m_menuItemPreferences;
    wxMenuItem* m_menuItemSep;
    wxMenuItem* m_menuItemExit;
    wxMenu* m_Help;
    wxMenuItem* m_menuItem9;

protected:
    virtual void OnClose(wxCloseEvent& event) { event.Skip(); }
    virtual void OnClearScreen(wxCommandEvent& event) { event.Skip(); }
    virtual void OnSettings(wxCommandEvent& event) { event.Skip(); }
    virtual void OnExit(wxCommandEvent& event) { event.Skip(); }
    virtual void OnAbout(wxCommandEvent& event) { event.Skip(); }

public:
    wxPanel* GetMainPanel() { return m_mainPanel; }
    wxMenuBar* GetMenuBar() { return m_menuBar; }
    MainFrameBaseClass(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("codelite-terminal"),
                       const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1, -1),
                       long style = wxDEFAULT_FRAME_STYLE);
    virtual ~MainFrameBaseClass();
};

class SettingsDlgBase : public wxDialog
{
protected:
    wxStaticText* m_staticText31;
    wxColourPickerCtrl* m_colourPickerFG;
    wxStaticText* m_staticText35;
    wxColourPickerCtrl* m_colourPickerBG;
    wxStaticText* m_staticText39;
    wxFontPickerCtrl* m_fontPicker;
    wxButton* m_button45;
    wxButton* m_button47;

protected:
public:
    wxStaticText* GetStaticText31() { return m_staticText31; }
    wxColourPickerCtrl* GetColourPickerFG() { return m_colourPickerFG; }
    wxStaticText* GetStaticText35() { return m_staticText35; }
    wxColourPickerCtrl* GetColourPickerBG() { return m_colourPickerBG; }
    wxStaticText* GetStaticText39() { return m_staticText39; }
    wxFontPickerCtrl* GetFontPicker() { return m_fontPicker; }
    wxButton* GetButton45() { return m_button45; }
    wxButton* GetButton47() { return m_button47; }
    SettingsDlgBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Settings"),
                    const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1, -1),
                    long style = wxDEFAULT_DIALOG_STYLE | wxRESIZE_BORDER);
    virtual ~SettingsDlgBase();
};

#endif
