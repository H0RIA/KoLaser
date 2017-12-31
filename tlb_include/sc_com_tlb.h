#pragma once

#include "sc_kernel_type_lib.h"
#include "sc_entity_groups_type_lib.h"
#include "sc_gui_type_lib.h"
#include "sc_optic_type_lib.h"
#include "sc_hpgl_io_type_lib.h"
#include "sc_pixel_io_type_lib.h"
#include "sc_lines2d_type_lib.h"
#include "sc_hatcher_type_lib.h"
#include "sc_points2d_type_lib.h"
#include "sc_control_ad_io_type_lib.h"
#include "sc_pixel2d_type_lib.h"
#include "sc_data_base_type_lib.h"
#include "sc_beam_komp_type_lib.h"
#include "sc_text2d_type_lib.h"
#include "sc_property_type_lib.h"
#include "sc_entity_prop_sheet_ctrl_type_lib.h"
#include "sc_view2d_ctrl_type_lib.h"
#include "sc_view3d_ctrl_type_lib.h"
#include "sc_optic_module_ctrl_type_lib.h"
#include "sc_macro_ctrl_type_lib.h"
#include "sc_tools_type_lib.h"
#include "sc_layer_file_2d_type_lib.h"
#include "sc_obj_list_ctrl_type_lib.h"
#include "sc_tria_mesh_type_lib.h"
#include "sc_stl_io_type_lib.h"
#include "sc_layer_solid_type_lib.h"
#include "sc_cli_io_type_lib.h"
#include "sc_tria_slicer_type_lib.h"
#include "sc_control_ad_io_type_lib.h"
#include "sc_optic_device_type_lib.h"
#include "sc_light_ctrls_type_lib_com_only.h"
#include "sc_render_archive_type_lib.h"

#ifdef _VECTOR_LIST


	#define		SC_VECTOR_COMMAND_JUMP_ABS			1
	#define		SC_VECTOR_COMMAND_JUMP_REL			2
	#define		SC_VECTOR_COMMAND_MARK_ABS			3
	#define		SC_VECTOR_COMMAND_MARK_REL			4
	#define		SC_VECTOR_COMMAND_SELECT_PEN		5
	#define		SC_VECTOR_COMMAND_END				6

	#define		SC_VECTOR_COMMAND_TYPE				unsigned char
	#define		SC_VECTOR_COMMAND_PAR_1				signed short
	#define		SC_VECTOR_COMMAND_PAR_2				signed short
	#define		SC_VECTOR_COMMAND_PAR_3
	#define		SC_VECTOR_COMMAND_PAR_4
	#define		SC_VECTOR_UPDATE_LOAD				FALSE
	#define		SC_VECTOR_UPDATE_STORE				TRUE


	struct sc_vector_command
	{
		SC_VECTOR_COMMAND_TYPE	m_command;
		SC_VECTOR_COMMAND_PAR_1	m_parameter_1;
		SC_VECTOR_COMMAND_PAR_2	m_parameter_2;
	};

	class ScEntity2D;
	bool ScUpdateVectorList( ScEntity2D &entity, bool Dir );
	bool ScLoadVectorList( ScEntity2D &entity );
	bool ScStoreVectorList( ScEntity2D &entity );

    double extern sc_offset_x;
    double extern sc_offset_y;
    double extern sc_gain_x;
    double extern sc_gain_y;

#endif

#include <assert.h>
#ifndef ASSERT
	#define ASSERT  assert
#endif
//if you want to disable that CREATE_ASSERT, compile with _SC_IGNORE_CREATE_ASSERT directive
#ifdef _SC_IGNORE_CREATE_ASSERT
	#define CREATE_ASSERT
#else
	#define CREATE_ASSERT  assert
#endif

template <class T>
class SC_ComInterface
{
public:
    SC_ComInterface( const IID &iid )
    {
        m_int = NULL; // the pointer to virtual table
        m_iid = iid;
    }

    SC_ComInterface( T* p, const IID &iid, bool addRef = false )
    {
        if( ( ( m_int = p ) != 0 ) && addRef )
        {
            m_int->AddRef();
        }

        m_iid = iid;
    }

    SC_ComInterface( const SC_ComInterface< T > &interf )
    {
        if( ( m_int = interf.m_int ) != 0 )
        {
            m_int->AddRef();
        }
    }

    ~SC_ComInterface()
    {
        Clear();
    }

    void Attach( T *p, bool addRef = false )
    {
        if( p && addRef )
        {
            p->AddRef();
        }

        Clear( p );
    }

    void Detach()
    {
        Clear();
    }

    operator T* () const
    {
        return m_int;
    }

    T &operator * ()
    {
        ASSERT( m_int != NULL );
        return *m_int;
    }

    T** operator & ()
    {
        return &m_int;
    }

    T* operator->() const
    {
        ASSERT( m_int != NULL );
        return m_int;
    }

    T* operator->()
    {
        ASSERT( m_int != NULL );
        return m_int;
    }

    void Clear( T *p = NULL )
    {
        if( m_int )
        {
            // If you get an runtime error on that location,
            // it is likely that the sc_object was already destroyed
            // but this interface object still points to it.
            //
            m_int->Release();
        }

        m_int = p;
    }

    SC_ComInterface< T > &operator = ( const SC_ComInterface< T > &interf )
    {
        if( m_int != interf.m_int )
        {
            if( interf.m_int != NULL )
            {
                interf.m_int->AddRef();
            }

            Clear( interf.m_int );
        }

        return *this;
    }

    SC_ComInterface< T > &operator = ( IDispatch *interf )
    {
        if( interf )
        {
            T *disp;

            // get the interface with IID of m_iid
            // reference count will be increased!!!
            //
            interf->QueryInterface( m_iid, ( void ** )&disp );
            Clear( disp );
            ASSERT( m_int );    //the interface is not available
        }
        else
        {
            Clear();
        }

        return *this;
    }

    BOOL HasInterface( IDispatch *interf )
    {
        if( interf )
        {
            T *disp;

            if( interf->QueryInterface( m_iid, ( void ** )&disp ) == S_OK )
            {
	            disp->Release();
	            return TRUE;
            }
        }

        return FALSE;
    }

    BOOL Validate()
    {
        if( m_int )
        {
            T *disp;

            if( m_int->QueryInterface( m_iid, ( void ** )&disp ) == S_OK )
            {
	            m_int = disp;
	            disp->Release();
	            return TRUE;
            }
        }

        return FALSE;
    }

    bool operator ! () const
    {
        return m_int == NULL;
    }


    BOOL IsValid() const
    {
        return m_int ? TRUE : FALSE;
    }

    protected:
        T   *m_int;     // the pointer to virtual table
        IID	 m_iid;     // the id of the interface
};

template <class T>
class SC_ScComInterface: public SC_ComInterface<T>
{
	public:
	SC_ScComInterface( const IID &iid ) : SC_ComInterface< T >( iid )
	{
	}

	SC_ScComInterface( T *p, const IID &iid, bool addRef = false ): SC_ComInterface<T>( p, iid, addRef )
	{
	}

	SC_ScComInterface( const SC_ScComInterface< T > &interf ) : SC_ComInterface< T >( interf )
	{
	}

	~SC_ScComInterface()
	{
	}

    SC_ScComInterface< T > &operator = ( const SC_ScComInterface< T > &interf )
    {
        return ( SC_ScComInterface< T > & )__super::operator = ( interf );
    }

    SC_ScComInterface< T > &operator = ( IDispatch *interf )
    {
        return ( SC_ScComInterface< T > & )__super::operator = ( interf );
    }

	bool IsTypeOf( long TypeId ) const
	{
        long is_type = 0;

        if( m_int )
        {
            m_int->ScIsTypeOf( TypeId, &is_type );
        }

        return is_type ? true : false;
	}
};

template <class T>
class SC_EntityComInterface: public SC_ScComInterface< T >
{
	public:
	SC_EntityComInterface( const IID &iid ) : SC_ScComInterface< T >( iid )
	{
		#ifdef _VECTOR_LIST
			m_p_vector_list=NULL;
			m_vector_list_size=0;
		#endif
	}

	SC_EntityComInterface( T *p, const IID &iid, bool addRef = false ) : SC_ScComInterface< T >( p, iid, addRef )
	{
		#ifdef _VECTOR_LIST
			m_p_vector_list=NULL;
			m_vector_list_size=0;
		#endif
	}

	SC_EntityComInterface( const SC_EntityComInterface< T > &interf ) : SC_ScComInterface< T >( interf )
	{
		#ifdef _VECTOR_LIST
			m_p_vector_list=NULL;
			m_vector_list_size=0;
		#endif
	}

	~SC_EntityComInterface()
	{
		#ifdef _VECTOR_LIST
			if (m_p_vector_list) free(m_p_vector_list);
		#endif
	}

    SC_EntityComInterface< T > &operator = ( const SC_EntityComInterface< T > &interf )
    {
        return ( SC_EntityComInterface< T > & )__super::operator = ( interf );
    }

    SC_EntityComInterface< T > &operator = ( IDispatch *interf )
    {
        return ( SC_EntityComInterface< T > & )__super::operator = ( interf );
    }

	#ifdef _VECTOR_LIST

		sc_vector_command* GetVectorList()
		{
			return m_p_vector_list;
		}

		bool UpdateVectorList(bool Dir = SC_VECTOR_UPDATE_LOAD)
		{
			return ScUpdateVectorList(*((ScEntity2D*)this),Dir);
		}

		UINT SetVectorListSize(UINT Size)
		{
			if (m_p_vector_list==NULL)
			{
				m_p_vector_list=(sc_vector_command*)malloc(Size*sizeof(sc_vector_command));
			}
			else
			{
				m_p_vector_list=(sc_vector_command*)realloc(m_p_vector_list,Size*sizeof(sc_vector_command));
			}
			m_vector_list_size=Size;
			return m_vector_list_size;
		}
		UINT	GetVectorListSize() const
		{
			return m_vector_list_size;
		}

		long AddVectorList(SC_EntityComInterface<T> &entity)
		{
			UINT size = entity.GetVectorListSize();
			if (size > 0)
			{
				UINT i,save_size =m_vector_list_size;
				SetVectorListSize(m_vector_list_size+size);
				sc_vector_command* commands = entity.GetVectorList();
				for (i=0;i<size;i++)
				{
					m_p_vector_list[save_size] = commands[i];
					save_size++;
				}
			}
			return (long)m_vector_list_size;
		}

	#endif

	protected:
    #ifdef _VECTOR_LIST
		sc_vector_command	*m_p_vector_list;
		UINT				m_vector_list_size;
	#endif

};

#define SC_DECLARE_COM_CLASS(class_name,inter_face,iid,cls_id)\
class class_name : public SC_ComInterface<inter_face>\
{\
	public:\
	class_name(IDispatch *interf) : SC_ComInterface<inter_face>(iid) {*this=interf;}\
	class_name(void) : SC_ComInterface<inter_face>(iid) {}\
	class_name&operator=(IDispatch *interf)\
	{\
		__super::operator=(interf);\
		return *this;\
	}\
    class_name&operator=(const class_name &interf)\
    {\
        return (class_name &)__super::operator=(interf);\
    }\
	bool Create(void)\
	{\
		CREATE_ASSERT(m_int==NULL);\
		Clear(0);\
		if (m_int==NULL && (cls_id !=IID_NULL))\
		{\
			HRESULT res = CoCreateInstance(cls_id,NULL,CLSCTX_INPROC_SERVER,iid,(void**)&m_int);\
			if ((res == S_OK) && m_int) return TRUE;\
		}\
		return FALSE;\
	}\
};\

#define SC_DECLARE_SC_COM_CLASS(class_name,inter_face,iid,cls_id)\
class class_name : public SC_ScComInterface<inter_face>\
{\
	public:\
	class_name(IDispatch *interf) : SC_ScComInterface<inter_face>(iid) {*this=interf;}\
	class_name(void) : SC_ScComInterface<inter_face>(iid) {}\
	class_name& operator=(IDispatch *interf)\
	{\
		__super::operator=(interf);\
		return *this;\
	}\
    class_name&operator=(const class_name &interf)\
    {\
        return (class_name &)__super::operator=(interf);\
    }\
	bool Create(void)\
	{\
		CREATE_ASSERT(m_int==NULL);\
		Clear(0);\
		if (m_int==NULL && (cls_id !=IID_NULL))\
		{\
            HRESULT res = CoCreateInstance(cls_id,NULL,CLSCTX_INPROC_SERVER,iid,(void**)&m_int);\
            if ((res == S_OK) && m_int) return TRUE;\
		}\
		return FALSE;\
	}\
};\

#define SC_DECLARE_ENTITY_COM_CLASS(class_name,inter_face,iid,cls_id)\
class class_name : public SC_EntityComInterface<inter_face>\
{\
	public:\
	class_name(IDispatch *interf) : SC_EntityComInterface<inter_face>(iid) {*this=interf;}\
	class_name(void) : SC_EntityComInterface<inter_face>(iid) {}\
	class_name& operator=(IDispatch *interf)\
	{\
		__super::operator=(interf);\
		return *this;\
	}\
    class_name&operator=(const class_name &interf)\
    {\
        return (class_name &)__super::operator=(interf);\
    }\
	bool Create(void)\
	{\
		CREATE_ASSERT(m_int==NULL);\
		Clear(0);\
		if (m_int==NULL && (cls_id !=IID_NULL))\
		{\
            HRESULT res = CoCreateInstance(cls_id,NULL,CLSCTX_INPROC_SERVER,iid,(void**)&m_int);\
            if ((res == S_OK) && m_int) return TRUE;\
		}\
		return FALSE;\
	}\
};\

//cls_id==IID_NULL  -> no instance of this class can be generated
SC_DECLARE_COM_CLASS(ScKernel,SC_IKernel,IID_SC_IKernel,IID_NULL)
SC_DECLARE_SC_COM_CLASS(ScObject,SC_IObject,IID_SC_IObject,IID_NULL)
SC_DECLARE_COM_CLASS(ScArchive,SC_IDocArchive,IID_SC_IDocArchive,CLSID_ScDocArchive)
SC_DECLARE_COM_CLASS(ScStorage,SC_IDocStorage,IID_SC_IDocStorage,CLSID_ScDocStorage)
SC_DECLARE_COM_CLASS(ScStream,SC_IDocStream,IID_SC_IDocStream,CLSID_ScDocStream)
SC_DECLARE_COM_CLASS(ScDocArchive,SC_IDocArchive,IID_SC_IDocArchive,CLSID_ScDocArchive)
SC_DECLARE_COM_CLASS(ScDocStorage,SC_IDocStorage,IID_SC_IDocStorage,CLSID_ScDocStorage)
SC_DECLARE_COM_CLASS(ScDocStream,SC_IDocStream,IID_SC_IDocStream,CLSID_ScDocStream)
SC_DECLARE_ENTITY_COM_CLASS(ScEntity,SC_IEntity,IID_SC_IEntity,IID_NULL)
SC_DECLARE_ENTITY_COM_CLASS(ScEntity2D,SC_IEntity2D,IID_SC_IEntity2D,IID_NULL)
SC_DECLARE_ENTITY_COM_CLASS(ScEntity3D,SC_IEntity3D,IID_SC_IEntity3D,IID_NULL)
SC_DECLARE_ENTITY_COM_CLASS(ScEntity2DContainer,SC_IEntity2DContainer,IID_SC_IEntity2DContainer,IID_NULL)
SC_DECLARE_ENTITY_COM_CLASS(ScEntity3DContainer,SC_IEntity3DContainer,IID_SC_IEntity3DContainer,IID_NULL)
SC_DECLARE_ENTITY_COM_CLASS(ScGroup2D,SC_IGroup2D,IID_SC_IGroup2D,IID_NULL)
SC_DECLARE_ENTITY_COM_CLASS(ScGroup3D,SC_IGroup3D,IID_SC_IGroup3D,IID_NULL)
SC_DECLARE_ENTITY_COM_CLASS(ScElement2D,SC_IElement2D,IID_SC_IElement2D,IID_NULL)
SC_DECLARE_ENTITY_COM_CLASS(ScEntities2D,SC_IEntities2D,IID_SC_IEntities2D,CLSID_ScEntities2D)
SC_DECLARE_ENTITY_COM_CLASS(ScEntities3D,SC_IEntities3D,IID_SC_IEntities3D,CLSID_ScEntities3D)
SC_DECLARE_ENTITY_COM_CLASS(ScJobRoot,SC_IJobRoot,IID_SC_IJobRoot,CLSID_ScJobRoot)
SC_DECLARE_SC_COM_CLASS(ScView2D,SC_IView2D,IID_SC_IView2D,IID_NULL)
SC_DECLARE_SC_COM_CLASS(ScView3D,SC_IView3D,IID_SC_IView3D,IID_NULL)
SC_DECLARE_SC_COM_CLASS(ScView,SC_IView,IID_SC_IView,IID_NULL)
SC_DECLARE_COM_CLASS(ScView2DCtrlInt,SC_IView2DCtrl,IID_SC_IView2DCtrl,IID_NULL)
SC_DECLARE_SC_COM_CLASS(ScOpticModule2D,SC_IOpticModule2D,IID_SC_IOpticModule2D,CLSID_ScOpticModule2D)
SC_DECLARE_SC_COM_CLASS(ScControlGalvoModLaser2D,SC_IControlGalvoModLaser2D,IID_SC_IControlGalvoModLaser2D,IID_NULL)
SC_DECLARE_SC_COM_CLASS(ScUserControlGalvoModLaser2D,SC_IUserControlGalvoModLaser2D,IID_SC_IUserControlGalvoModLaser2D,CLSID_ScUserControlGalvoModLaser2D)
SC_DECLARE_SC_COM_CLASS(ScControlRTC2,SC_IControlRTC2,IID_SC_IControlRTC2,CLSID_ScControlRTC2)
SC_DECLARE_SC_COM_CLASS(ScControlRTC1000,SC_IControlRTC1000,IID_SC_IControlRTC1000,IID_NULL)
SC_DECLARE_COM_CLASS(ScLayerFileHpgl,SC_ILayerFileHpgl,IID_SC_ILayerFileHpgl,CLSID_ScLayerFileHpgl)
SC_DECLARE_ENTITY_COM_CLASS(ScLayer,SC_ILayer,IID_SC_ILayer,CLSID_ScLayer)
SC_DECLARE_ENTITY_COM_CLASS(ScPolyLine2D,SC_IPolyLine2D,IID_SC_IPolyLine2D,CLSID_ScPolyLine2D)
SC_DECLARE_ENTITY_COM_CLASS(ScPolyLine3D,SC_IPolyLine3D,IID_SC_IPolyLine3D,CLSID_ScPolyLine3D)
SC_DECLARE_ENTITY_COM_CLASS(ScPolyLines2D,SC_IPolyLines2D,IID_SC_IPolyLines2D,CLSID_ScPolyLines2D)
SC_DECLARE_COM_CLASS(ScHatcher,SC_IHatcher,IID_SC_IHatcher,CLSID_ScHatcher)
SC_DECLARE_ENTITY_COM_CLASS(ScRectangle2D,SC_IRectangle2D,IID_SC_IRectangle2D,CLSID_ScRectangle2D)
SC_DECLARE_ENTITY_COM_CLASS(ScPointCloud2D,SC_IPointCloud2D,IID_SC_IPointCloud2D,CLSID_ScPointCloud2D)
SC_DECLARE_ENTITY_COM_CLASS(ScPointClouds2D,SC_IPointClouds2D,IID_SC_IPointClouds2D,CLSID_ScPointClouds2D)
SC_DECLARE_ENTITY_COM_CLASS(ScLineArray2D,SC_ILineArray2D,IID_SC_ILineArray2D,CLSID_ScLineArray2D)
SC_DECLARE_ENTITY_COM_CLASS(ScLineArrays2D,SC_ILineArrays2D,IID_SC_ILineArrays2D,CLSID_ScLineArrays2D)
SC_DECLARE_ENTITY_COM_CLASS(ScHatch,SC_IHatch,IID_SC_IHatch,CLSID_ScHatch)
SC_DECLARE_ENTITY_COM_CLASS(ScPixelArray2D,SC_IPixelArray2D,IID_SC_IPixelArray2D,CLSID_ScPixelArray2D)
SC_DECLARE_ENTITY_COM_CLASS(ScPixelArrays2D,SC_IPixelArrays2D,IID_SC_IPixelArrays2D,CLSID_ScPixelArrays2D)
SC_DECLARE_COM_CLASS(ScLayerFilePixel,SC_ILayerFilePixel,IID_SC_ILayerFilePixel,CLSID_ScLayerFilePixel)
SC_DECLARE_COM_CLASS(ScBeamCompensator,SC_IBeamCompensator,IID_SC_IBeamCompensator,CLSID_ScBeamCompensator)
SC_DECLARE_COM_CLASS(ScBarCode12,SC_IBarCode12,IID_SC_IBarCode12,CLSID_ScBarCode12)
SC_DECLARE_ENTITY_COM_CLASS(ScBarCode12Chars2D,SC_IBarCode12Chars2D,IID_SC_IBarCode12Chars2D,CLSID_ScBarCode12Chars2D)
SC_DECLARE_ENTITY_COM_CLASS(ScBarCode39Chars2D,SC_IBarCode39Chars2D,IID_SC_IBarCode39Chars2D,CLSID_ScBarCode39Chars2D)
SC_DECLARE_ENTITY_COM_CLASS(ScWinTextChars2D,SC_IWinTextChars2D,IID_SC_IWinTextChars2D,CLSID_ScWinTextChars2D)
SC_DECLARE_ENTITY_COM_CLASS(ScWinText2D,SC_IWinText2D,IID_SC_IWinText2D,CLSID_ScWinText2D)
SC_DECLARE_COM_CLASS(ScEntityPropertySheet,SC_IEntityPropertySheet,IID_SC_IEntityPropertySheet,IID_NULL)
SC_DECLARE_COM_CLASS(ScPropertyPage,SC_IPropertyPage,IID_SC_IPropertyPage,IID_NULL)
SC_DECLARE_ENTITY_COM_CLASS(ScEllipse2D,SC_IEllipse2D,IID_SC_IEllipse2D,CLSID_ScEllipse2D)
SC_DECLARE_COM_CLASS(ScControlPropertyPage,SC_IControlPropertyPage,IID_SC_IControlPropertyPage,IID_NULL)
SC_DECLARE_ENTITY_COM_CLASS(ScSingleLine2D,SC_ISingleLine2D,IID_SC_ISingleLine2D,CLSID_ScSingleLine2D)
SC_DECLARE_COM_CLASS(ScTriggerControl,SC_ITrigger,IID_SC_ITrigger,IID_NULL)
SC_DECLARE_COM_CLASS(ScResourceManager,SC_IResourceManager,IID_SC_IResourceManager,CLSID_ScResourceManager)
SC_DECLARE_COM_CLASS(ScControlEntityExposure,SC_IControlEntityExposure,IID_SC_IControlEntityExposure,IID_NULL)
SC_DECLARE_COM_CLASS(ScControlEntityProperty,SC_IControlEntityProperty,IID_SC_IControlEntityProperty,IID_NULL)
SC_DECLARE_COM_CLASS(ScMacroCtrlInt,SC_IMacroCtrl,IID_SC_IMacroCtrl,IID_NULL)
SC_DECLARE_COM_CLASS(ScSortTool,SC_ISortTool,IID_SC_ISortTool,CLSID_ScSortTool)
SC_DECLARE_COM_CLASS(ScFilterTool,SC_IFilterTool,IID_SC_IFilterTool,CLSID_ScFilterTool)
SC_DECLARE_COM_CLASS(ScStandardDeviceInt,SC_IStandardDevice,IID_SC_IStandardDevice,__uuidof(ScStandardDevice))
SC_DECLARE_COM_CLASS(ScOpticModuleCtrlStdDev,SC_IOpticModuleCtrlStdDev,IID_SC_IOpticModuleCtrlStdDev,IID_NULL)
SC_DECLARE_COM_CLASS(ScMultiHeadTool,SC_IMultiHeadTool,IID_SC_IMultiHeadTool,CLSID_ScMultiHeadTool)
SC_DECLARE_COM_CLASS(ScMultiHeadSimDev,SC_IMultiHeadSimDev,IID_SC_IMultiHeadSimDev,IID_NULL)
SC_DECLARE_COM_CLASS(ScLayerFile2D,SC_ILayerFile2D,IID_SC_ILayerFile2D,CLSID_ScLayerFile2D)
SC_DECLARE_COM_CLASS(ScBasicTool,SC_IBasicTool,IID_SC_IBasicTool,CLSID_ScBasicTool)
SC_DECLARE_ENTITY_COM_CLASS(ScScannerPixelArray2D,SC_IScannerPixelArray2D,IID_SC_IScannerPixelArray2D,CLSID_ScScannerPixelArray2D)
SC_DECLARE_ENTITY_COM_CLASS(ScSerialNumber2D,SC_ISerialNumber2D,IID_SC_ISerialNumber2D,CLSID_ScSerialNumber2D)
SC_DECLARE_COM_CLASS(ScStandardEntityProperty,SC_IControlEntityProperty,IID_SC_IControlEntityProperty,IID_NULL)
SC_DECLARE_COM_CLASS(ScStandardEntityExposure,SC_IControlEntityExposure,IID_SC_IControlEntityExposure,IID_NULL)
//SC_DECLARE_COM_CLASS(ScCorrTable,SC_ICorrTable,IID_SC_ICorrTable,IID_NULL)
SC_DECLARE_SC_COM_CLASS(ScCorrTable,SC_ICorrTable,IID_SC_ICorrTable,CLSID_ScCorrTable)
SC_DECLARE_COM_CLASS(ScStandardEntityCtrl,SC_IStandardEntityCtrl,IID_SC_IStandardEntityCtrl,IID_NULL)
SC_DECLARE_COM_CLASS(ScVectorTool,SC_IVectorTool,IID_SC_IVectorTool,CLSID_ScVectorTool)
SC_DECLARE_ENTITY_COM_CLASS(ScEvent,SC_IEvent,IID_SC_IEvent,CLSID_ScEvent)
SC_DECLARE_COM_CLASS(ScOpticModule2DCtrlInt,SC_IOpticModule2DCtrl,IID_SC_IOpticModule2DCtrl,IID_NULL)
SC_DECLARE_COM_CLASS(ScConvertTool,SC_IConvertTool,IID_SC_IConvertTool,CLSID_ScConvertTool)
SC_DECLARE_ENTITY_COM_CLASS(ScLineArray3D,SC_ILineArray3D,IID_SC_ILineArray3D,CLSID_ScLineArray3D)
SC_DECLARE_ENTITY_COM_CLASS(ScTriaMesh3D,SC_ITriaMesh3D,IID_SC_ITriaMesh3D,CLSID_ScTriaMesh3D)
SC_DECLARE_COM_CLASS(ScTriaFileStl,SC_ITriaFileStl,IID_SC_ITriaFileStl,CLSID_ScTriaFileStl)
SC_DECLARE_COM_CLASS(ScEntityListCtrl,SC_IEntityListCtrl,IID_SC_IEntityListCtrl,IID_NULL)
SC_DECLARE_COM_CLASS(ScLayerSolid,SC_ILayerSolid,IID_SC_ILayerSolid,CLSID_ScLayerSolid)
SC_DECLARE_COM_CLASS(ScLayerFileCli,SC_ILayerFileCli,IID_SC_ILayerFileCli,CLSID_ScLayerFileCli)
SC_DECLARE_COM_CLASS(ScTriaSlicer,SC_ITriaSlicer,IID_SC_ITriaSlicer,CLSID_ScTriaSlicer)
SC_DECLARE_COM_CLASS(ScPointCloud3D,SC_IPointCloud3D,IID_SC_IPointCloud3D,CLSID_ScPointCloud3D)
SC_DECLARE_COM_CLASS(ScControlMotion,SC_IControlMotion,IID_SC_IControlMotion,CLSID_ScControlMotion)
SC_DECLARE_COM_CLASS(ScAlignTool,SC_IAlignTool,IID_SC_IAlignTool,CLSID_ScAlignTool)
SC_DECLARE_ENTITY_COM_CLASS(ScChain2D,SC_IChain2D,IID_SC_IChain2D,CLSID_ScChain2D)
SC_DECLARE_ENTITY_COM_CLASS(ScControl,SC_IControl,IID_SC_IControl,CLSID_ScControl)
SC_DECLARE_COM_CLASS(ScView3DCtrlInt,SC_IView3DCtrl,IID_SC_IView3DCtrl,IID_NULL)
SC_DECLARE_ENTITY_COM_CLASS(ScSpiral2D,SC_ISpiral2D,IID_SC_ISpiral2D,CLSID_ScSpiral2D)
SC_DECLARE_COM_CLASS(ScRTCTriggerControl,SC_IRTCTrigger,IID_SC_IRTCTrigger,IID_NULL)
SC_DECLARE_COM_CLASS(ScLightExposureCtrlComOnly,_LightExposureCtrlComOnly,IID__LightExposureCtrlComOnly,CLSID_ScLightExposureCtrlComOnly)
SC_DECLARE_COM_CLASS(ScRenderArchive,SC_IRenderArchive,IID_SC_IRenderArchive,CLSID_ScRenderArchive)
SC_DECLARE_COM_CLASS(ScDigitizerTool,SC_IDigitizerTool,IID_SC_IDigitizerTool,CLSID_ScDigitizerTool)

