//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: findinfiles_dlg.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#include "findinfiles_dlg.h"

// Declare the bitmap loading function
extern void wxCABC4InitBitmapResources();

static bool bBitmapLoaded = false;

FindInFilesDialogBase::FindInFilesDialogBase(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos,
                                             const wxSize& size, long style)
    : wxDialog(parent, id, title, pos, size, style)
{
    if(!bBitmapLoaded) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxCABC4InitBitmapResources();
        bBitmapLoaded = true;
    }

    wxBoxSizer* boxSizer7 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(boxSizer7);

    m_panelMainPanel =
        new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), wxTAB_TRAVERSAL);

    boxSizer7->Add(m_panelMainPanel, 1, wxALL | wxEXPAND, WXC_FROM_DIP(10));

    wxBoxSizer* boxSizer132 = new wxBoxSizer(wxHORIZONTAL);
    m_panelMainPanel->SetSizer(boxSizer132);

    wxBoxSizer* boxSizer95 = new wxBoxSizer(wxVERTICAL);

    boxSizer132->Add(boxSizer95, 1, wxEXPAND, WXC_FROM_DIP(5));

    wxFlexGridSizer* fgSizer41 = new wxFlexGridSizer(0, 2, 0, 0);
    fgSizer41->SetFlexibleDirection(wxBOTH);
    fgSizer41->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);
    fgSizer41->AddGrowableCol(1);
    fgSizer41->AddGrowableRow(3);

    boxSizer95->Add(fgSizer41, 1, wxALL | wxEXPAND, WXC_FROM_DIP(5));

    m_staticText1 = new wxStaticText(m_panelMainPanel, wxID_ANY, _("Find What :"), wxDefaultPosition,
                                     wxDLG_UNIT(m_panelMainPanel, wxSize(-1, -1)), 0);

    fgSizer41->Add(m_staticText1, 0, wxALL | wxALIGN_RIGHT | wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(5));

    wxArrayString m_findStringArr;
    m_findString = new clThemedComboBox(m_panelMainPanel, wxID_ANY, wxT(""), wxDefaultPosition,
                                        wxDLG_UNIT(m_panelMainPanel, wxSize(-1, -1)), m_findStringArr, 0);
    m_findString->SetToolTip(_("Find what"));
    m_findString->SetFocus();
#if wxVERSION_NUMBER >= 3000
    m_findString->SetHint(_("Find what"));
#endif

    fgSizer41->Add(m_findString, 0, wxALL | wxEXPAND | wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(5));

    m_staticText102 = new wxStaticText(m_panelMainPanel, wxID_ANY, _("Replace With:"), wxDefaultPosition,
                                       wxDLG_UNIT(m_panelMainPanel, wxSize(-1, -1)), 0);

    fgSizer41->Add(m_staticText102, 0, wxALL | wxALIGN_RIGHT | wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(5));

    wxArrayString m_replaceStringArr;
    m_replaceString = new clThemedComboBox(m_panelMainPanel, wxID_ANY, wxT(""), wxDefaultPosition,
                                           wxDLG_UNIT(m_panelMainPanel, wxSize(-1, -1)), m_replaceStringArr, 0);
#if wxVERSION_NUMBER >= 3000
    m_replaceString->SetHint(_("Replace with"));
#endif

    fgSizer41->Add(m_replaceString, 0, wxALL | wxEXPAND | wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(5));

    m_staticText3 = new wxStaticText(m_panelMainPanel, wxID_ANY, _("Files:"), wxDefaultPosition,
                                     wxDLG_UNIT(m_panelMainPanel, wxSize(-1, -1)), 0);
    m_staticText3->SetToolTip(_("File extensions to include in the search\nWildcards are supported"));

    fgSizer41->Add(m_staticText3, 0, wxALL | wxALIGN_RIGHT | wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(5));

    wxArrayString m_fileTypesArr;
    m_fileTypesArr.Add(wxT("*.c;*.cpp;*.cxx;*.cc;*.h;*.hpp;*.inc;*.mm;*.m;*.xrc"));
    m_fileTypes =
        new clThemedComboBox(m_panelMainPanel, wxID_ANY, wxT("*.c;*.cpp;*.cxx;*.cc;*.h;*.hpp;*.inc;*.mm;*.m;*.xrc"),
                             wxDefaultPosition, wxDLG_UNIT(m_panelMainPanel, wxSize(-1, -1)), m_fileTypesArr, 0);
    m_fileTypes->SetToolTip(_("Search these file types"));
#if wxVERSION_NUMBER >= 3000
    m_fileTypes->SetHint(wxT(""));
#endif
    m_fileTypes->SetSelection(0);

    fgSizer41->Add(m_fileTypes, 0, wxALL | wxEXPAND | wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(5));

    m_staticText2 = new wxStaticText(m_panelMainPanel, wxID_ANY, _("Search in:"), wxDefaultPosition,
                                     wxDLG_UNIT(m_panelMainPanel, wxSize(-1, -1)), 0);
    m_staticText2->SetToolTip(
        _("Search in these folders\nTo exclude a file from the search, use wildcard that starts with an hyphen "
          "(\"-\")\nFor example, to exclude all matches from the node_modules folder, one can use something "
          "like:\n\n/home/user/path/to/root/folder\n-*node_modules*"));

    fgSizer41->Add(m_staticText2, 0, wxALL | wxALIGN_RIGHT | wxALIGN_TOP, WXC_FROM_DIP(5));

    m_stcPaths = new wxStyledTextCtrl(m_panelMainPanel, wxID_ANY, wxDefaultPosition,
                                      wxDLG_UNIT(m_panelMainPanel, wxSize(-1, -1)), 0);
    // Configure the fold margin
    m_stcPaths->SetMarginType(4, wxSTC_MARGIN_SYMBOL);
    m_stcPaths->SetMarginMask(4, wxSTC_MASK_FOLDERS);
    m_stcPaths->SetMarginSensitive(4, true);
    m_stcPaths->SetMarginWidth(4, 0);

    // Configure the tracker margin
    m_stcPaths->SetMarginWidth(1, 0);

    // Configure the symbol margin
    m_stcPaths->SetMarginType(2, wxSTC_MARGIN_SYMBOL);
    m_stcPaths->SetMarginMask(2, ~(wxSTC_MASK_FOLDERS));
    m_stcPaths->SetMarginWidth(2, 0);
    m_stcPaths->SetMarginSensitive(2, true);

    // Configure the line numbers margin
    m_stcPaths->SetMarginType(0, wxSTC_MARGIN_NUMBER);
    m_stcPaths->SetMarginWidth(0, 0);

    // Configure the line symbol margin
    m_stcPaths->SetMarginType(3, wxSTC_MARGIN_FORE);
    m_stcPaths->SetMarginMask(3, 0);
    m_stcPaths->SetMarginWidth(3, 0);
    // Select the lexer
    m_stcPaths->SetLexer(wxSTC_LEX_NULL);
    // Set default font / styles
    m_stcPaths->StyleClearAll();
    m_stcPaths->SetWrapMode(0);
    m_stcPaths->SetIndentationGuides(0);
    m_stcPaths->SetEOLMode(2);
    m_stcPaths->SetKeyWords(0, wxT(""));
    m_stcPaths->SetKeyWords(1, wxT(""));
    m_stcPaths->SetKeyWords(2, wxT(""));
    m_stcPaths->SetKeyWords(3, wxT(""));
    m_stcPaths->SetKeyWords(4, wxT(""));

    fgSizer41->Add(m_stcPaths, 1, wxALL | wxEXPAND, WXC_FROM_DIP(5));

    m_staticText5 = new wxStaticText(m_panelMainPanel, wxID_ANY, _("Files Encoding:"), wxDefaultPosition,
                                     wxDLG_UNIT(m_panelMainPanel, wxSize(-1, -1)), 0);

    fgSizer41->Add(m_staticText5, 0, wxALL | wxALIGN_RIGHT | wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(5));

    wxArrayString m_choiceEncodingArr;
    m_choiceEncoding = new clThemedChoice(m_panelMainPanel, wxID_ANY, wxDefaultPosition,
                                          wxDLG_UNIT(m_panelMainPanel, wxSize(300, -1)), m_choiceEncodingArr, 0);
    m_choiceEncoding->SetToolTip(_("Use this file encoding when scanning files for matches"));

    fgSizer41->Add(m_choiceEncoding, 0, wxALL | wxEXPAND | wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(5));

    wxBoxSizer* boxSizer134 = new wxBoxSizer(wxVERTICAL);

    boxSizer132->Add(boxSizer134, 0, wxALL | wxEXPAND, WXC_FROM_DIP(5));

    m_find = new wxButton(m_panelMainPanel, wxID_OK, _("&Find"), wxDefaultPosition,
                          wxDLG_UNIT(m_panelMainPanel, wxSize(-1, -1)), 0);
    m_find->SetDefault();
    m_find->SetToolTip(_("Begin search"));

    boxSizer134->Add(m_find, 0, wxALL | wxEXPAND, WXC_FROM_DIP(5));

    m_replaceAll = new wxButton(m_panelMainPanel, wxID_REPLACE, _("&Replace"), wxDefaultPosition,
                                wxDLG_UNIT(m_panelMainPanel, wxSize(-1, -1)), 0);
    m_replaceAll->SetToolTip(
        _("Search for matches and place them in the 'Replace' window as candidates for possible replace operation"));

    boxSizer134->Add(m_replaceAll, 0, wxALL | wxEXPAND, WXC_FROM_DIP(5));

    m_cancel = new wxButton(m_panelMainPanel, wxID_CANCEL, _("Close"), wxDefaultPosition,
                            wxDLG_UNIT(m_panelMainPanel, wxSize(-1, -1)), 0);
    m_cancel->SetToolTip(_("Close this dialog"));

    boxSizer134->Add(m_cancel, 0, wxALL | wxEXPAND, WXC_FROM_DIP(5));

    m_btnAddPath = new wxButton(m_panelMainPanel, wxID_ANY, _("Add Path..."), wxDefaultPosition,
                                wxDLG_UNIT(m_panelMainPanel, wxSize(-1, -1)), 0);
    m_btnAddPath->SetToolTip(_("Add new search location"));

    boxSizer134->Add(m_btnAddPath, 0, wxALL | wxEXPAND, WXC_FROM_DIP(5));

    m_notebook150 = new wxNotebook(this, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), wxBK_DEFAULT);
    m_notebook150->SetName(wxT("m_notebook150"));

    boxSizer7->Add(m_notebook150, 0, wxALL | wxEXPAND, WXC_FROM_DIP(5));

    m_panel152 = new wxPanel(m_notebook150, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(m_notebook150, wxSize(-1, -1)),
                             wxTAB_TRAVERSAL);
    m_notebook150->AddPage(m_panel152, _("Options"), true);

    wxBoxSizer* boxSizer155 = new wxBoxSizer(wxVERTICAL);
    m_panel152->SetSizer(boxSizer155);

    wxBoxSizer* boxSizer148 = new wxBoxSizer(wxHORIZONTAL);

    boxSizer155->Add(boxSizer148, 0, wxALL | wxALIGN_CENTER_HORIZONTAL, WXC_FROM_DIP(5));

    m_matchCase =
        new wxCheckBox(m_panel152, wxID_ANY, _("Case"), wxDefaultPosition, wxDLG_UNIT(m_panel152, wxSize(-1, -1)), 0);
    m_matchCase->SetValue(false);
    m_matchCase->SetToolTip(_("Toggle case sensitive search"));

    boxSizer148->Add(m_matchCase, 0, wxALL | wxEXPAND, WXC_FROM_DIP(5));

    m_matchWholeWord =
        new wxCheckBox(m_panel152, wxID_ANY, _("Word"), wxDefaultPosition, wxDLG_UNIT(m_panel152, wxSize(-1, -1)), 0);
    m_matchWholeWord->SetValue(false);
    m_matchWholeWord->SetToolTip(_("Toggle whole word search"));

    boxSizer148->Add(m_matchWholeWord, 0, wxALL | wxEXPAND, WXC_FROM_DIP(5));

    m_regualrExpression =
        new wxCheckBox(m_panel152, wxID_ANY, _("Regex"), wxDefaultPosition, wxDLG_UNIT(m_panel152, wxSize(-1, -1)), 0);
    m_regualrExpression->SetValue(false);
    m_regualrExpression->SetToolTip(_("The 'Find What' field is a regular expression"));

    boxSizer148->Add(m_regualrExpression, 0, wxALL | wxEXPAND, WXC_FROM_DIP(5));

    m_checkBoxPipeForGrep = new wxCheckBox(m_panel152, wxID_ANY, _("Pipe filter"), wxDefaultPosition,
                                           wxDLG_UNIT(m_panel152, wxSize(-1, -1)), 0);
    m_checkBoxPipeForGrep->SetValue(false);
    m_checkBoxPipeForGrep->SetToolTip(
        _("Use the pipe character (\"|\") as a special separator for applying additional filters. This has the similar "
          "effect as using the \"grep\" command line tool"));

    boxSizer148->Add(m_checkBoxPipeForGrep, 0, wxALL, WXC_FROM_DIP(5));

    m_checkBoxSaveFilesBeforeSearching = new wxCheckBox(m_panel152, wxID_ANY, _("Save before"), wxDefaultPosition,
                                                        wxDLG_UNIT(m_panel152, wxSize(-1, -1)), 0);
    m_checkBoxSaveFilesBeforeSearching->SetValue(false);
    m_checkBoxSaveFilesBeforeSearching->SetToolTip(_("Save any modified files before search starts"));

    boxSizer148->Add(m_checkBoxSaveFilesBeforeSearching, 0, wxALL | wxEXPAND, WXC_FROM_DIP(5));

    m_panel154 = new wxPanel(m_notebook150, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(m_notebook150, wxSize(-1, -1)),
                             wxTAB_TRAVERSAL);
    m_notebook150->AddPage(m_panel154, _("Preset"), false);

    wxBoxSizer* boxSizer157 = new wxBoxSizer(wxVERTICAL);
    m_panel154->SetSizer(boxSizer157);

    wxBoxSizer* boxSizer159 = new wxBoxSizer(wxHORIZONTAL);

    boxSizer157->Add(boxSizer159, 1, wxALL | wxALIGN_CENTER_HORIZONTAL, WXC_FROM_DIP(5));

    m_checkBoxTODO =
        new wxCheckBox(m_panel154, wxID_ANY, _("TODO"), wxDefaultPosition, wxDLG_UNIT(m_panel154, wxSize(-1, -1)), 0);
    m_checkBoxTODO->SetValue(false);
    m_checkBoxTODO->SetToolTip(_("Search for TODO patterns in the code\nThis options enables regular expression"));

    boxSizer159->Add(m_checkBoxTODO, 0, wxALL, WXC_FROM_DIP(5));

    m_checkBoxATTN =
        new wxCheckBox(m_panel154, wxID_ANY, _("ATTN"), wxDefaultPosition, wxDLG_UNIT(m_panel154, wxSize(-1, -1)), 0);
    m_checkBoxATTN->SetValue(false);
    m_checkBoxATTN->SetToolTip(_("Search for ATTN patterns in the code\nThis options enables regular expression"));

    boxSizer159->Add(m_checkBoxATTN, 0, wxALL, WXC_FROM_DIP(5));

    m_checkBoxBUG =
        new wxCheckBox(m_panel154, wxID_ANY, _("BUG"), wxDefaultPosition, wxDLG_UNIT(m_panel154, wxSize(-1, -1)), 0);
    m_checkBoxBUG->SetValue(false);
    m_checkBoxBUG->SetToolTip(_("Search for BUG patterns in the code\nThis options enables regular expression"));

    boxSizer159->Add(m_checkBoxBUG, 0, wxALL, WXC_FROM_DIP(5));

    m_checkBoxFIXME =
        new wxCheckBox(m_panel154, wxID_ANY, _("FIXME"), wxDefaultPosition, wxDLG_UNIT(m_panel154, wxSize(-1, -1)), 0);
    m_checkBoxFIXME->SetValue(false);
    m_checkBoxFIXME->SetToolTip(_("Search for FIXME patterns in the code\nThis options enables regular expression"));

    boxSizer159->Add(m_checkBoxFIXME, 0, wxALL, WXC_FROM_DIP(5));

#if wxVERSION_NUMBER >= 2900
    if(!wxPersistenceManager::Get().Find(m_notebook150)) {
        wxPersistenceManager::Get().RegisterAndRestore(m_notebook150);
    } else {
        wxPersistenceManager::Get().Restore(m_notebook150);
    }
#endif

    SetName(wxT("FindInFilesDialogBase"));
    SetSize(wxDLG_UNIT(this, wxSize(-1, -1)));
    if(GetSizer()) {
        GetSizer()->Fit(this);
    }
    if(GetParent()) {
        CentreOnParent(wxBOTH);
    } else {
        CentreOnScreen(wxBOTH);
    }
#if wxVERSION_NUMBER >= 2900
    if(!wxPersistenceManager::Get().Find(this)) {
        wxPersistenceManager::Get().RegisterAndRestore(this);
    } else {
        wxPersistenceManager::Get().Restore(this);
    }
#endif
    // Connect events
    m_findString->Connect(wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler(FindInFilesDialogBase::OnFindEnter), NULL,
                          this);
    m_replaceString->Connect(wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler(FindInFilesDialogBase::OnReplaceEnter),
                             NULL, this);
    m_find->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(FindInFilesDialogBase::OnFind), NULL, this);
    m_find->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(FindInFilesDialogBase::OnFindWhatUI), NULL, this);
    m_replaceAll->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(FindInFilesDialogBase::OnReplace), NULL,
                          this);
    m_replaceAll->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(FindInFilesDialogBase::OnReplaceUI), NULL, this);
    m_cancel->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(FindInFilesDialogBase::OnButtonClose), NULL,
                      this);
    m_btnAddPath->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(FindInFilesDialogBase::OnAddPath), NULL,
                          this);
    m_regualrExpression->Connect(wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(FindInFilesDialogBase::OnRegex),
                                 NULL, this);
    m_checkBoxTODO->Connect(wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(FindInFilesDialogBase::OnTODO), NULL,
                            this);
    m_checkBoxATTN->Connect(wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(FindInFilesDialogBase::OnATTN), NULL,
                            this);
    m_checkBoxBUG->Connect(wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(FindInFilesDialogBase::OnBUG), NULL,
                           this);
    m_checkBoxFIXME->Connect(wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(FindInFilesDialogBase::OnFIXME),
                             NULL, this);
}

FindInFilesDialogBase::~FindInFilesDialogBase()
{
    m_findString->Disconnect(wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler(FindInFilesDialogBase::OnFindEnter), NULL,
                             this);
    m_replaceString->Disconnect(wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler(FindInFilesDialogBase::OnReplaceEnter),
                                NULL, this);
    m_find->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(FindInFilesDialogBase::OnFind), NULL, this);
    m_find->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(FindInFilesDialogBase::OnFindWhatUI), NULL, this);
    m_replaceAll->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(FindInFilesDialogBase::OnReplace),
                             NULL, this);
    m_replaceAll->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(FindInFilesDialogBase::OnReplaceUI), NULL, this);
    m_cancel->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(FindInFilesDialogBase::OnButtonClose),
                         NULL, this);
    m_btnAddPath->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(FindInFilesDialogBase::OnAddPath),
                             NULL, this);
    m_regualrExpression->Disconnect(wxEVT_COMMAND_CHECKBOX_CLICKED,
                                    wxCommandEventHandler(FindInFilesDialogBase::OnRegex), NULL, this);
    m_checkBoxTODO->Disconnect(wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(FindInFilesDialogBase::OnTODO),
                               NULL, this);
    m_checkBoxATTN->Disconnect(wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(FindInFilesDialogBase::OnATTN),
                               NULL, this);
    m_checkBoxBUG->Disconnect(wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(FindInFilesDialogBase::OnBUG), NULL,
                              this);
    m_checkBoxFIXME->Disconnect(wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(FindInFilesDialogBase::OnFIXME),
                                NULL, this);
}

FindInFilesLocationsDlgBase::FindInFilesLocationsDlgBase(wxWindow* parent, wxWindowID id, const wxString& title,
                                                         const wxPoint& pos, const wxSize& size, long style)
    : wxDialog(parent, id, title, pos, size, style)
{
    if(!bBitmapLoaded) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxCABC4InitBitmapResources();
        bBitmapLoaded = true;
    }

    wxBoxSizer* boxSizer111 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(boxSizer111);

    wxBoxSizer* boxSizer120 = new wxBoxSizer(wxHORIZONTAL);

    boxSizer111->Add(boxSizer120, 1, wxALL | wxEXPAND, WXC_FROM_DIP(5));

    wxArrayString m_checkListBoxLocationsArr;
    m_checkListBoxLocations = new wxCheckListBox(this, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)),
                                                 m_checkListBoxLocationsArr, wxLB_SINGLE);
    m_checkListBoxLocations->SetFocus();

    boxSizer120->Add(m_checkListBoxLocations, 1, wxALL | wxEXPAND, WXC_FROM_DIP(5));

    wxBoxSizer* boxSizer125 = new wxBoxSizer(wxVERTICAL);

    boxSizer120->Add(boxSizer125, 0, wxALIGN_CENTER_HORIZONTAL | wxALIGN_TOP, WXC_FROM_DIP(5));

    m_buttonAdd = new wxButton(this, wxID_ANY, _("Add..."), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);
    m_buttonAdd->SetToolTip(_("Add Folder..."));

    boxSizer125->Add(m_buttonAdd, 0, wxALL | wxALIGN_CENTER_HORIZONTAL | wxALIGN_TOP, WXC_FROM_DIP(5));

    m_buttonDelete = new wxButton(this, wxID_ANY, _("Remove"), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);
    m_buttonDelete->SetToolTip(_("Remove the selected path"));

    boxSizer125->Add(m_buttonDelete, 0, wxALL, WXC_FROM_DIP(5));

    m_stdBtnSizer113 = new wxStdDialogButtonSizer();

    boxSizer111->Add(m_stdBtnSizer113, 0, wxALL | wxALIGN_CENTER_HORIZONTAL, WXC_FROM_DIP(10));

    m_button115 = new wxButton(this, wxID_OK, wxT(""), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);
    m_button115->SetDefault();
    m_stdBtnSizer113->AddButton(m_button115);

    m_button117 = new wxButton(this, wxID_CANCEL, wxT(""), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);
    m_stdBtnSizer113->AddButton(m_button117);
    m_stdBtnSizer113->Realize();

    SetName(wxT("FindInFilesLocationsDlgBase"));
    SetSize(wxDLG_UNIT(this, wxSize(-1, -1)));
    if(GetSizer()) {
        GetSizer()->Fit(this);
    }
    if(GetParent()) {
        CentreOnParent(wxBOTH);
    } else {
        CentreOnScreen(wxBOTH);
    }
#if wxVERSION_NUMBER >= 2900
    if(!wxPersistenceManager::Get().Find(this)) {
        wxPersistenceManager::Get().RegisterAndRestore(this);
    } else {
        wxPersistenceManager::Get().Restore(this);
    }
#endif
    // Connect events
    m_buttonAdd->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(FindInFilesLocationsDlgBase::OnAddPath),
                         NULL, this);
    m_buttonDelete->Connect(wxEVT_COMMAND_BUTTON_CLICKED,
                            wxCommandEventHandler(FindInFilesLocationsDlgBase::OnDeletePath), NULL, this);
    m_buttonDelete->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(FindInFilesLocationsDlgBase::OnDeletePathUI), NULL,
                            this);
}

FindInFilesLocationsDlgBase::~FindInFilesLocationsDlgBase()
{
    m_buttonAdd->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(FindInFilesLocationsDlgBase::OnAddPath),
                            NULL, this);
    m_buttonDelete->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED,
                               wxCommandEventHandler(FindInFilesLocationsDlgBase::OnDeletePath), NULL, this);
    m_buttonDelete->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(FindInFilesLocationsDlgBase::OnDeletePathUI),
                               NULL, this);
}
