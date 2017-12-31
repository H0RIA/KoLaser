#pragma once

#include "afxtempl.h"

#define SC_ASSERT				ASSERT
#define	SC_File					CFile
#define SC_FileException		CFileException
#define SC_FileModeRead			CFile::modeRead
#define SC_FileModeWrite		CFile::modeWrite
#define SC_FileModeReadWrite	CFile::modeReadWrite
#define SC_FileModeCreate		CFile::modeCreate
#define SC_FileModeNoTruncate	CFile::modeNoTruncate
#define SC_FileTypeBinary		CFile::typeBinary
#define SC_FileBegin			CFile::begin
#define SC_FileCurrent			CFile::current
#define SC_FileEnd				CFile::end
#define SC_MessageBox			MessageBox
#define SC_MB_OK				MB_OK
#define SC_MB_ICONSTOP			MB_ICONSTOP
#define SC_MB_APPLMODAL			MB_APPLMODAL
#define SC_List					CList

template< class CLASSTYPE >
class SC_Array : public CArray< CLASSTYPE >
{
public:
    SC_Array()
    {
    }

	SC_Array( const SC_Array& objectSrc )
    {
        RemoveAll();
        Append( objectSrc );
    }

    SC_Array( UINT size )
    {
        SetSize( size );
    }

    SC_Array( UINT size, CLASSTYPE init )
    {
        SetSize( size );

        for( int i = 0; i < GetSize(); i++ )
        {
            SetAt( i, init );
        }
    }

    SC_Array & operator = ( const SC_Array &source )
    {
        Copy( source );
        return *this;
    }
};

#define SC_POSITION				POSITION
#define SC_IPoint				CPoint
