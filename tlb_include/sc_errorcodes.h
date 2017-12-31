#ifndef SC_ERRORCODES_H
#define SC_ERRORCODES_H

#define     SC_OK                                        1
#define		SC_ERROR									-1

// SCI related error codes

// the scanner card dll interface wasn't initialized or the initialization wasn't successful
#define		SC_ERROR_NOT_INITIALIZED                    (SC_ERROR - 0x301)

// end of SCI related error codes



// The following error codes are used internally, please contact SCAPS in case
// a SCI function call returns such an error code outside of a reasonable context
#define		SC_ERROR_FILE_NOT_FOUND						(SC_ERROR - 0x101)
#define		SC_ERROR_FILE_PATH_NOT_FOUND				(SC_ERROR - 0x102)
#define		SC_ERROR_FILE_NO_PERMISSION					(SC_ERROR - 0x103)
#define		SC_ERROR_FILE_TRUNCATED						(SC_ERROR - 0x104)
#define		SC_ERROR_FILE_FORMAT						(SC_ERROR - 0x105)
#define		SC_ERROR_FILE_NO_SPACE						(SC_ERROR - 0x106)
#define		SC_ERROR_FILE_NOT_OPEN						(SC_ERROR - 0x107)
#define		SC_ERROR_FILE_ALREADY_OPEN					(SC_ERROR - 0x108)
#define		SC_ERROR_FUNCTION_INVALID_PARAMETER			(SC_ERROR - 0x120)
#define		SC_ERROR_INVALID_POINTER					(SC_ERROR - 0x121)
#define		SC_ERROR_NO_VALID_INDEX						(SC_ERROR - 0x122)
#define		SC_ERROR_USER_ALREADY_EXISTS				(SC_ERROR - 0x123)
#define		SC_ERROR_USER_NOT_FOUND						(SC_ERROR - 0x124)
#define		SC_ERROR_STACK_NOT_EMPTY					(SC_ERROR - 0x125)
#define		SC_ERROR_OBJECT_NOT_DELETED					(SC_ERROR - 0x126)
#define		SC_ERROR_INVALID_DATA_POINTER				(SC_ERROR - 0x127)
#define		SC_ERROR_INVALID_CLASS						(SC_ERROR - 0x128)
#define		SC_ERROR_FUNCTION_NOT_DERIVED				(SC_ERROR - 0x129)
#define     SC_ERROR_USC_ERROR                          (SC_ERROR - 0x12A)
#define     SC_ERROR_LICENSE_NOT_AVAILABLE              (SC_ERROR - 0x12B)
#define     SC_ERROR_WRONG_LASER_SETTINGS               (SC_ERROR - 0x12C)

#endif
