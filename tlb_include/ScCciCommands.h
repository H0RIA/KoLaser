#pragma once

/** the prefix for all Client Control Interface functions */
#define SC_CCI_PREFIX     _T( "ScCci" )

/** The maximum length a command line may have including line feed and string-termination */
#define SC_CCI_MAX_COMMANDLENGTH 500

// the command defines ==================================================================

// test the connection, SAMLight will answer with a message box containing the string
// sent with this call
#define SC_CCI_CMD_TEST                          _T( "ScCciTest(\"%s\")\n" )

// returns the version number of the interface
#define SC_CCI_CMD_GET_INTERFACE_VERSION         _T( "ScCciGetInterfaceVersion()\n" )

// shuts down SAMLight, afterwards the network connection is closed
#define SC_CCI_CMD_SHUTDOWN                      _T( "ScCciShutdown()\n" )

// loads a new job
#define SC_CCI_CMD_LOAD_JOB                      _T( "ScCciLoadJob(\"%s\", %d, %d, %d)\n" )

// saves the current job
#define SC_CCI_CMD_SAVE_JOB                      _T( "ScCciSaveJob(\"%s\", %d)\n" )

// clear the current job
#define SC_CCI_CMD_NEW_JOB                       _T( "ScCciNewJob()\n" )

// reset the current sequence
#define SC_CCI_CMD_RESET_SEQUENCE                _T( "ScCciResetSequence()\n" )

// let the view fit to the working area
#define SC_CCI_CMD_FIT_VIEW_TO_WORKING_AREA      _T( "ScCciFitViewToWorkingArea()\n" )

// let the view fit to all entities
#define SC_CCI_CMD_FIT_VIEW_TO_ENTITIES          _T( "ScCciFitViewToEntities()\n" )

// let the view fit to all selected entities
#define SC_CCI_CMD_FIT_VIEW_TO_SELECTED_ENTITIES _T( "ScCciFitViewToSelectedEntities()\n" )

// reset the quantity counter
#define SC_CCI_CMD_RESET_COUNTER                 _T( "ScCciResetCounter()\n" )

// resplit a splitted job
#define SC_CCI_CMD_RESPLIT_JOB                   _T( "ScCciResplitJob()\n" )

// reset the serial numbers
#define SC_CCI_CMD_RESET_SERIAL_NUMBERS          _T( "ScCciResetSerialNumbers()\n" )

// increment the serial numbers
#define SC_CCI_CMD_INC_SERIAL_NUMBERS            _T( "ScCciIncSerialNumbers()\n" )

// decrement the serial numbers
#define SC_CCI_CMD_DEC_SERIAL_NUMBERS            _T( "ScCciDecSerialNumbers()\n" )

// update the position of the scanner
#define SC_CCI_CMD_UPDATE_SCANNER_POS            _T( "ScCciUpdateScannerPos()\n" )

// imports a vector graphic / 3d mesh
#define SC_CCI_CMD_IMPORT                        _T( "ScCciImport(\"%s\", \"%s\", \"%s\", %f, %d)\n" )

// change the displayed text of a text entity
#define SC_CCI_CMD_CHANGE_TEXT_BY_NAME           _T( "ScCciChangeTextByName(\"%s\", \"%s\")\n" )

// get one single outline value of an entity
#define SC_CCI_CMD_GET_ENTITY_OUTLINE            _T( "ScCciGetEntityOutline(\"%s\", %d)\n" )

// get one complete 2D outline value of an entity
#define SC_CCI_CMD_GET_ENTITY_OUTLINE_2D         _T( "ScCciGetEntityOutline2D(\"%s\")\n" )

// get one complete 3D outline value of an entity
#define SC_CCI_CMD_GET_ENTITY_OUTLINE_3D         _T( "ScCciGetEntityOutline3D(\"%s\")\n" )

// scale an entity
#define SC_CCI_CMD_SCALE_ENTITY                  _T( "ScCciScaleEntity(\"%s\", %f, %f, %f)\n" )

// translate an entity
#define SC_CCI_CMD_TRANSLATE_ENTITY              _T( "ScCciTranslateEntity(\"%s\", %f, %f, %f)\n" )

// rotate an entity
#define SC_CCI_CMD_ROTATE_ENTITY                 _T( "ScCciRotateEntity(\"%s\", %f, %f, %f)\n" )

// 3d rotate an entity
#define SC_CCI_CMD_ROTATE_ENTITY_3D              _T( "ScCciRotateEntity3D(\"%s\", %f, %f, %f, %f, %f, %f, %f)\n" )

// set a specific long data value for an entity
#define SC_CCI_CMD_SET_ENTITY_LONG_DATA          _T( "ScCciSetEntityLongData(\"%s\", %d, %d)\n" )

// get a long data alue that is set for an entity
#define SC_CCI_CMD_GET_ENTITY_LONG_DATA          _T( "ScCciGetEntityLongData(\"%s\", %d)\n" )

// delete an entity out of the job
#define SC_CCI_CMD_DELETE_ENTITY                 _T( "ScCciDeleteEntity(\"%s\")\n" )

// get the current mark flags
#define SC_CCI_CMD_GET_MARK_FLAGS                _T( "ScCciGetMarkFlags()\n" )

// set mark flags
#define SC_CCI_CMD_SET_MARK_FLAGS                _T( "ScCciSetMarkFlags(%d)\n" )

// translate the complete optical matrix
#define SC_CCI_CMD_OPTIC_MATRIX_TRANSLATE        _T( "ScCciOpticMatrixTranslate(%f, %f, %f)\n" )

// translate the complete optical matrix
#define SC_CCI_CMD_OPTIC_MATRIX_ROTATE           _T( "ScCciOpticMatrixRotate(%f, %f, %f)\n" )

// reset the complete optical matrix to its default values
#define SC_CCI_CMD_OPTIC_MATRIX_RESET            _T( "ScCciOpticMatrixReset()\n" )

// get a value of the optical matrix
#define SC_CCI_CMD_GET_OPTIC_MATRIX              _T( "ScCciGetOpticMatrix(%d)\n" )

// get a value of the optical matrix
#define SC_CCI_CMD_GET_WORKING_AREA              _T( "ScCciGetWorkingArea(%d)\n" )

// get a value of the optical matrix
#define SC_CCI_CMD_SHOW_APP                      _T( "ScCciShowApp(%d)\n" )

// set the number of the head to be used
#define SC_CCI_CMD_SET_HEAD                      _T( "ScCciSetHead(%d)\n" )

// get the number of the currently used head
#define SC_CCI_CMD_GET_HEAD                      _T( "ScCciGetHead()\n" )

// mark a specific entity only
#define SC_CCI_CMD_MARK_ENTITY_BY_NAME           _T( "ScCciMarkEntityByName(\"%s\", %d)\n" )

// stop the running marking process
#define SC_CCI_CMD_STOP_MARKING                  _T( "ScCciStopMarking()\n" )

// check if there is marking in process
#define SC_CCI_CMD_IS_MARKING                    _T( "ScCciIsMarking()\n" )

// turn the laser on or off
#define SC_CCI_CMD_SWITCH_LASER                  _T( "ScCciSwitchLaser(%d)\n" )

// move to an absolute position
#define SC_CCI_CMD_MOVE_ABS                      _T( "ScCciMoveAbs(%f, %f, %f)\n" )

// set a pen
#define SC_CCI_CMD_SET_PEN                       _T( "ScCciSetPen(%d)\n" )

// get the current pen
#define SC_CCI_CMD_GET_PEN                       _T( "ScCciGetPen()\n" )

// set an double data value for an entity
#define SC_CCI_CMD_SET_ENTITY_DOUBLE_DATA        _T( "ScCciSetEntityDoubleData(\"%s\", %d, %f)\n" )

// get an double data value for an entity
#define SC_CCI_CMD_GET_ENTITY_DOUBLE_DATA        _T( "ScCciGetEntityDoubleData(\"%s\", %d)\n" )

// set a string data value for an entity
#define SC_CCI_CMD_SET_ENTITY_STRING_DATA        _T( "ScCciSetEntityStringData(\"%s\", %d, \"%s\")\n" )

// get a string data value for an entity
#define SC_CCI_CMD_GET_ENTITY_STRING_DATA        _T( "ScCciGetEntityStringData(\"%s\", %d)\n" )

// set a specific double value
#define SC_CCI_CMD_SET_DOUBLE_VALUE              _T( "ScCciSetDoubleValue(%d, %f)\n" )

// get a specific double value
#define SC_CCI_CMD_GET_DOUBLE_VALUE              _T( "ScCciGetDoubleValue(%d)\n" )

// set a specific long value
#define SC_CCI_CMD_SET_LONG_VALUE                _T( "ScCciSetLongValue(%d, %d)\n" )

// get a specific long value
#define SC_CCI_CMD_GET_LONG_VALUE                _T( "ScCciGetLongValue(%d)\n" )

// set a specific string value
#define SC_CCI_CMD_SET_STRING_VALUE              _T( "ScCciSetStringValue(%d, \"%s\")\n" )

// get a specific string value
#define SC_CCI_CMD_GET_STRING_VALUE              _T( "ScCciGetStringValue(%d)\n" )

// set a specific string and a corresponding long value
#define SC_CCI_CMD_SET_STRING_LONG_VALUE         _T( "ScCciSetStringLongValue(%d, \"%s\", %d)\n" )

// set a specific string and a corresponding double value
#define SC_CCI_CMD_SET_STRING_DOUBLE_VALUE       _T( "ScCciSetStringDoubleValue(%d, \"%s\", %f)\n" )

// get a specific string from a corresponding double value
#define SC_CCI_CMD_GET_STRING_DOUBLE_VALUE       _T( "ScCciGetStringDoubleValue(%d, \"%s\")\n" )

// get a specific string value for a specific purpose using an additional attribute
#define SC_CCI_CMD_GET_ID_STRING_DATA            _T( "ScCciGetIDStringData(%d, %d)\n" )

// get a specific string value for a specific purpose using an additional attribute
#define SC_CCI_CMD_SET_ID_STRING_DATA            _T( "ScCciSetIDStringData(%d, %d, \"%s\")\n" )

//Scanner auto-calibration functionality, turn auto calibration mode off
#define SC_CCI_CMD_AUTO_COMPENSATE_OFF           _T( "ScCciAutoCompensateOff()\n" )

//Scanner auto-calibration functionality, turn auto calibration mode on
#define SC_CCI_CMD_AUTO_COMPENSATE_REF           _T( "ScCciAutoCompensateRef()\n" )

//Scanner auto-calibration functionality, recalibrate scanner
#define SC_CCI_CMD_AUTO_COMPENSATE_CAL           _T( "ScCciAutoCompensateCal()\n" )

// scale the complete optical matrix
#define SC_CCI_CMD_OPTIC_MATRIX_SCALE            _T( "ScCciOpticMatrixScale(%f, %f)\n" )

// stop motion 
#define SC_CCI_CMD_MOTION_STOP_MOVE              _T( "ScCciMotionStopMove()\n" )

// motion home command 
#define SC_CCI_CMD_MOTION_HOME                   _T( "ScCciMotionHome()\n" )

// motion go command 
#define SC_CCI_CMD_MOTION_GO					  _T( "ScCciMotionGo()\n" )

// motion send string 
#define SC_CCI_CMD_MOTION_SEND_STRING			  _T( "ScCciMotionSendString()\n" )

// update motion pos 
#define SC_CCI_CMD_MOTION_UPDATE_POS			  _T( "ScCciMotionUpdatePos()\n" )

// update View2D 
#define SC_CCI_CMD_UPDATE_VIEW_NOW			      _T( "ScCciUpdateViewNow()\n" )

// resplit a splitted job
#define SC_CCI_CMD_SAVE_SPLITS_AS_ENTITIES		  _T( "ScCciSaveSplitsAsEntities(\"%s\")\n" )

// set pixel map for pen
#define SC_CCI_CMD_SET_PIXEL_MAP_FOR_PEN         _T( "ScCciSetPixelMapForPen(%d, %d, %d, %d, %d, %d, %d)\n" )

// set mode
#define SC_CCI_CMD_SET_MODE                      _T( "ScCciSetMode(%d)\n" )

// get mode
#define SC_CCI_CMD_GET_MODE                      _T( "ScCciGetMode()\n" )

// process a flash job
#define SC_CCI_CMD_PROCESS_FLASH_JOB             _T( "ScCciProcessFlashJob(\"%s\", %d, %d, %d)\n" )

// exec command
#define SC_CCI_CMD_EXEC_COMMAND                  _T( "ScCciExecCommand(%d)\n" )

// end of command defines ===============================================================
