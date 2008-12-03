#ifndef __filechecklist__
#define __filechecklist__

/**
@file
Subclass of filechecklistbase, which is generated by wxFormBuilder.
*/

#include <vector>
#include <wx/filename.h>
#include "filechecklistbase.h"

/** Implementing filechecklistbase */
class FileCheckList : public FileCheckListBase
{
    std::vector<std::pair<wxFileName,bool> > m_files;
    wxFileName m_baseDir;
    
protected:
	// Handlers for filechecklistbase events.
	void OnCheckAll( wxCommandEvent& event );
	void OnClearAll( wxCommandEvent& event );
	void OnFileSelected( wxCommandEvent& event );
    void OnFileCheckChanged( wxCommandEvent& event );
	
    void ShowFilePath(size_t n);
    
public:
	/** Constructor */
	FileCheckList( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, 
                   const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize);
    
    void SetCancellable(bool can) { m_cancelButton->Show(can); }
    void SetCaption(const wxString &caption);
    void SetBaseDir(const wxFileName &dir);
    
    void SetFiles(const std::vector<std::pair<wxFileName, bool> > &files);
    const std::vector<std::pair<wxFileName,bool> >  &GetFiles() const { 
        return m_files; 
    }
};

#endif // __filechecklist__
