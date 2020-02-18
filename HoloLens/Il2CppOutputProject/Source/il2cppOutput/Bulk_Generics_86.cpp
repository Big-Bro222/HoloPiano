#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Exception
struct Exception_t;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2;
// System.String
struct String_t;
// System.TimeSpan[]
struct TimeSpanU5BU5D_tCF326C038BD306190A013AE3C9F9B1A525054DD5;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.UInt16[]
struct UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E;
// System.UInt32[]
struct UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB;
// System.UInt64[]
struct UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// Windows.Devices.Enumeration.DeviceClass[]
struct DeviceClassU5BU5D_t9253127C0B93148D277C01249FA613B2391A1175;
// Windows.Foundation.AsyncStatus[]
struct AsyncStatusU5BU5D_tF8E4B2AD53A393E5256AA8BA94B015A19F9348DA;
// Windows.Foundation.DateTime[]
struct DateTimeU5BU5D_tF99CEBC490438246063FF10220535B915FD29D57;
// Windows.Foundation.EventRegistrationToken[]
struct EventRegistrationTokenU5BU5D_tF25AB9D4BC1002982ED1C496304061610F1FDA95;
// Windows.Foundation.FoundationContract[]
struct FoundationContractU5BU5D_tEE9850C12D0EC6CEB499C6429CE62B4BFC1F41D9;
// Windows.Foundation.HResult[]
struct HResultU5BU5D_tC4635E1BE9508BB0BE0D32C0E5D98385A6056D59;
// Windows.Foundation.Metadata.AttributeTargets[]
struct AttributeTargetsU5BU5D_t43ADA39F08258A2862F2E29635B7D34629E256D9;
// Windows.Foundation.Metadata.CompositionType[]
struct CompositionTypeU5BU5D_t83C2DA060B9E5D3BB64AA654A7B096A5A3715822;
// Windows.Foundation.Metadata.DeprecationType[]
struct DeprecationTypeU5BU5D_t67021BA4FE5EB9288B9B7FC18AD855678A6C2A4C;
// Windows.Foundation.Metadata.GCPressureAmount[]
struct GCPressureAmountU5BU5D_t66F1B443ABEBE924547FF95AD7801A9B29D6B2B2;
// Windows.Foundation.Metadata.MarshalingType[]
struct MarshalingTypeU5BU5D_t8A314BCC76C5B93CC5C2B55D059D42081B966A4E;
// Windows.Foundation.Metadata.ThreadingModel[]
struct ThreadingModelU5BU5D_t26305514D7BAF6D9FD89034D7C2149C346567A18;
// Windows.Foundation.Point[]
struct PointU5BU5D_t87AC35D99B5520D1A23942325839CD3228778606;
// Windows.Foundation.Point[]
struct PointU5BU5D_tD91AB35E3284C9E9789C9BA78F4B2C58A2E4FF11;
// Windows.Foundation.PropertyType[]
struct PropertyTypeU5BU5D_tB7D44737771CD756341AB3D4255FA11E156C2EA5;
// Windows.Foundation.Rect[]
struct RectU5BU5D_t04A0BEA0B6C281BD9A695F537DC48BF7576C358F;
// Windows.Foundation.Rect[]
struct RectU5BU5D_tDAF406D13B5A5E854CE4CD12849F253B54D84AC7;
// Windows.Foundation.Size[]
struct SizeU5BU5D_t039A7BC3968859A1AC03A46860F6108D053B9D58;
// Windows.Foundation.Size[]
struct SizeU5BU5D_t9B66FD0DE66BE54A0260714C9F6BBD896A4FDD0B;
// Windows.Foundation.TimeSpan[]
struct TimeSpanU5BU5D_tACF30B716D863271CE7340AFE41B366570EF6A45;
// Windows.Foundation.TypedEventHandler`2<System.Object,System.Object>
struct TypedEventHandler_2_t92DE3BFDCE6B7440B94713B44A93FB9515C3550C;
// Windows.Foundation.UniversalApiContract[]
struct UniversalApiContractU5BU5D_t34EEF3C7CA08DBC70ACA767782DD83D7D711FF0F;
// Windows.Media.Capture.Frames.MediaFrameReaderStartStatus[]
struct MediaFrameReaderStartStatusU5BU5D_tAE64065940C158E2F5E8BF8AFCA4F3E090F0CCD9;
// Windows.Media.Capture.Frames.MediaFrameSourceKind[]
struct MediaFrameSourceKindU5BU5D_t9C80F73D6CC0709B210ED22BF4AA3EDB060DC03F;
// Windows.Media.Capture.MediaCaptureMemoryPreference[]
struct MediaCaptureMemoryPreferenceU5BU5D_t356DD145E42CA2316302B9A4D2A5D5B96A914519;
// Windows.Media.Capture.MediaCategory[]
struct MediaCategoryU5BU5D_tC20168641109D36955171EFEFB68CCCB6531D0B5;
// Windows.Media.Capture.MediaStreamType[]
struct MediaStreamTypeU5BU5D_t08A28F62413F3FA1FB4157CA30382F7C42F42B8B;
// Windows.Media.Capture.StreamingCaptureMode[]
struct StreamingCaptureModeU5BU5D_t5A76C953AECDF4D2F22E46371CB07EE3D37C07F7;
// Windows.Security.Cryptography.BinaryStringEncoding[]
struct BinaryStringEncodingU5BU5D_t30A95900A482A2FA531020698C985B80A37EAE62;
// Windows.Storage.CreationCollisionOption[]
struct CreationCollisionOptionU5BU5D_t0D1B5001E80C0B26F808CFE5B272BE51C1905BE1;
// Windows.Storage.FileAccessMode[]
struct FileAccessModeU5BU5D_tC5E82060AFA3700F7E68043B6139766320556543;
// Windows.Storage.Streams.InputStreamOptions[]
struct InputStreamOptionsU5BU5D_tF25121D9C712D26D027EEE9BB94F1AB90F419EFB;
// Windows.UI.Core.CoreDispatcherPriority[]
struct CoreDispatcherPriorityU5BU5D_tB8B23B5C47F24F734F9D134E0463D2E6DF7A64A1;
// Windows.UI.Xaml.Interop.NotifyCollectionChangedAction[]
struct NotifyCollectionChangedActionU5BU5D_t5F4C1744B10462A4B4FBCAB2CF3C4F239BF063C9;
// Windows.UI.Xaml.Interop.TypeKind[]
struct TypeKindU5BU5D_tAC43810CE90FB41E756A2FC391BB73927F74AD8C;
// Windows.UI.Xaml.Interop.TypeName
struct TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC;
// Windows.UI.Xaml.Interop.TypeName[]
struct TypeNameU5BU5D_t5639A6C63B43E5933AD3498000C56530312BF3D0;

extern RuntimeClass* ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var;
extern RuntimeClass* AsyncStatusU5BU5D_tF8E4B2AD53A393E5256AA8BA94B015A19F9348DA_il2cpp_TypeInfo_var;
extern RuntimeClass* AttributeTargetsU5BU5D_t43ADA39F08258A2862F2E29635B7D34629E256D9_il2cpp_TypeInfo_var;
extern RuntimeClass* BinaryStringEncodingU5BU5D_t30A95900A482A2FA531020698C985B80A37EAE62_il2cpp_TypeInfo_var;
extern RuntimeClass* CompositionTypeU5BU5D_t83C2DA060B9E5D3BB64AA654A7B096A5A3715822_il2cpp_TypeInfo_var;
extern RuntimeClass* CoreDispatcherPriorityU5BU5D_tB8B23B5C47F24F734F9D134E0463D2E6DF7A64A1_il2cpp_TypeInfo_var;
extern RuntimeClass* CreationCollisionOptionU5BU5D_t0D1B5001E80C0B26F808CFE5B272BE51C1905BE1_il2cpp_TypeInfo_var;
extern RuntimeClass* DateTimeU5BU5D_tF99CEBC490438246063FF10220535B915FD29D57_il2cpp_TypeInfo_var;
extern RuntimeClass* DeprecationTypeU5BU5D_t67021BA4FE5EB9288B9B7FC18AD855678A6C2A4C_il2cpp_TypeInfo_var;
extern RuntimeClass* DeviceClassU5BU5D_t9253127C0B93148D277C01249FA613B2391A1175_il2cpp_TypeInfo_var;
extern RuntimeClass* EventRegistrationTokenU5BU5D_tF25AB9D4BC1002982ED1C496304061610F1FDA95_il2cpp_TypeInfo_var;
extern RuntimeClass* FileAccessModeU5BU5D_tC5E82060AFA3700F7E68043B6139766320556543_il2cpp_TypeInfo_var;
extern RuntimeClass* FoundationContractU5BU5D_tEE9850C12D0EC6CEB499C6429CE62B4BFC1F41D9_il2cpp_TypeInfo_var;
extern RuntimeClass* GCPressureAmountU5BU5D_t66F1B443ABEBE924547FF95AD7801A9B29D6B2B2_il2cpp_TypeInfo_var;
extern RuntimeClass* HResultU5BU5D_tC4635E1BE9508BB0BE0D32C0E5D98385A6056D59_il2cpp_TypeInfo_var;
extern RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
extern RuntimeClass* InputStreamOptionsU5BU5D_tF25121D9C712D26D027EEE9BB94F1AB90F419EFB_il2cpp_TypeInfo_var;
extern RuntimeClass* MarshalingTypeU5BU5D_t8A314BCC76C5B93CC5C2B55D059D42081B966A4E_il2cpp_TypeInfo_var;
extern RuntimeClass* MediaCaptureMemoryPreferenceU5BU5D_t356DD145E42CA2316302B9A4D2A5D5B96A914519_il2cpp_TypeInfo_var;
extern RuntimeClass* MediaCategoryU5BU5D_tC20168641109D36955171EFEFB68CCCB6531D0B5_il2cpp_TypeInfo_var;
extern RuntimeClass* MediaFrameReaderStartStatusU5BU5D_tAE64065940C158E2F5E8BF8AFCA4F3E090F0CCD9_il2cpp_TypeInfo_var;
extern RuntimeClass* MediaFrameSourceKindU5BU5D_t9C80F73D6CC0709B210ED22BF4AA3EDB060DC03F_il2cpp_TypeInfo_var;
extern RuntimeClass* MediaStreamTypeU5BU5D_t08A28F62413F3FA1FB4157CA30382F7C42F42B8B_il2cpp_TypeInfo_var;
extern RuntimeClass* NotifyCollectionChangedActionU5BU5D_t5F4C1744B10462A4B4FBCAB2CF3C4F239BF063C9_il2cpp_TypeInfo_var;
extern RuntimeClass* PointU5BU5D_t87AC35D99B5520D1A23942325839CD3228778606_il2cpp_TypeInfo_var;
extern RuntimeClass* PointU5BU5D_tD91AB35E3284C9E9789C9BA78F4B2C58A2E4FF11_il2cpp_TypeInfo_var;
extern RuntimeClass* PropertyTypeU5BU5D_tB7D44737771CD756341AB3D4255FA11E156C2EA5_il2cpp_TypeInfo_var;
extern RuntimeClass* RectU5BU5D_t04A0BEA0B6C281BD9A695F537DC48BF7576C358F_il2cpp_TypeInfo_var;
extern RuntimeClass* RectU5BU5D_tDAF406D13B5A5E854CE4CD12849F253B54D84AC7_il2cpp_TypeInfo_var;
extern RuntimeClass* SizeU5BU5D_t039A7BC3968859A1AC03A46860F6108D053B9D58_il2cpp_TypeInfo_var;
extern RuntimeClass* SizeU5BU5D_t9B66FD0DE66BE54A0260714C9F6BBD896A4FDD0B_il2cpp_TypeInfo_var;
extern RuntimeClass* StreamingCaptureModeU5BU5D_t5A76C953AECDF4D2F22E46371CB07EE3D37C07F7_il2cpp_TypeInfo_var;
extern RuntimeClass* ThreadingModelU5BU5D_t26305514D7BAF6D9FD89034D7C2149C346567A18_il2cpp_TypeInfo_var;
extern RuntimeClass* TimeSpanU5BU5D_tACF30B716D863271CE7340AFE41B366570EF6A45_il2cpp_TypeInfo_var;
extern RuntimeClass* TimeSpanU5BU5D_tCF326C038BD306190A013AE3C9F9B1A525054DD5_il2cpp_TypeInfo_var;
extern RuntimeClass* TypeKindU5BU5D_tAC43810CE90FB41E756A2FC391BB73927F74AD8C_il2cpp_TypeInfo_var;
extern RuntimeClass* TypeNameU5BU5D_t5639A6C63B43E5933AD3498000C56530312BF3D0_il2cpp_TypeInfo_var;
extern RuntimeClass* TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4_il2cpp_TypeInfo_var;
extern RuntimeClass* UniversalApiContractU5BU5D_t34EEF3C7CA08DBC70ACA767782DD83D7D711FF0F_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral5F82205BEDF93F9FC5534E27F6D5798CA8E49C9A;
extern String_t* _stringLiteral7DA9F73A36ABE2E58D56D121E5A7E2C3CF329C27;
extern const uint32_t IReferenceArray_1_get_Value_m02AA6C3FD94B7ACACD859F421A11AE5E8B96CDD4_MetadataUsageId;
extern const uint32_t IReferenceArray_1_get_Value_m085ABBDED729E7C8E332FDD90292AAAFB1267309_MetadataUsageId;
extern const uint32_t IReferenceArray_1_get_Value_m0C6364B9DD37CA69E265912FCD834CC0140EEEA4_MetadataUsageId;
extern const uint32_t IReferenceArray_1_get_Value_m20C74F35C90FAA3D64BB4152FC059D5FE6F9E832_MetadataUsageId;
extern const uint32_t IReferenceArray_1_get_Value_m28C4AB47A0CDAF89B1595E405D9AC6B2B9F81704_MetadataUsageId;
extern const uint32_t IReferenceArray_1_get_Value_m2B97D289C69089CC6BF1273CADF4DE887218FD48_MetadataUsageId;
extern const uint32_t IReferenceArray_1_get_Value_m33213D71EB5CE3DF4125CE6648984CA1523836AD_MetadataUsageId;
extern const uint32_t IReferenceArray_1_get_Value_m4102D696F91F0359B7C9EDBD5FF81265760B5ADD_MetadataUsageId;
extern const uint32_t IReferenceArray_1_get_Value_m46001477E6E1E58EDE80E90D9AB5A2C8A2ECD913_MetadataUsageId;
extern const uint32_t IReferenceArray_1_get_Value_m47A13C852058E7F370C12C8AF23B9B1C79A73FB1_MetadataUsageId;
extern const uint32_t IReferenceArray_1_get_Value_m483946733B7CFF62C16F3D029B59E23BDD2D59B3_MetadataUsageId;
extern const uint32_t IReferenceArray_1_get_Value_m49B8372A76BA81B294037AC75941998664B4C508_MetadataUsageId;
extern const uint32_t IReferenceArray_1_get_Value_m528D0E9857D67C81F1E33246775EF4D62DE0FEF0_MetadataUsageId;
extern const uint32_t IReferenceArray_1_get_Value_m581DE5A9FC958F8FE701FCE4920AF9E59CA96880_MetadataUsageId;
extern const uint32_t IReferenceArray_1_get_Value_m65FCE22C1450C0D6919AF23A331230228CA911FE_MetadataUsageId;
extern const uint32_t IReferenceArray_1_get_Value_m6AC14C7482B37ED0370189E5C0997F9F96BE949E_MetadataUsageId;
extern const uint32_t IReferenceArray_1_get_Value_m6D0C76D9F2E8F95BBBEE8EF363C62EDB4C65E28C_MetadataUsageId;
extern const uint32_t IReferenceArray_1_get_Value_m6D753B0D48172CA0E571EB4D3DD03378F8FEC0F3_MetadataUsageId;
extern const uint32_t IReferenceArray_1_get_Value_m7093E45E08585F6C13E53C59A0B03291C6DC7777_MetadataUsageId;
extern const uint32_t IReferenceArray_1_get_Value_m730D2F016969548F25F67285C71CA603B91F8183_MetadataUsageId;
extern const uint32_t IReferenceArray_1_get_Value_m785BFF40CC13903E93CBBD6EC8095825E04F11CC_MetadataUsageId;
extern const uint32_t IReferenceArray_1_get_Value_m787B9BB10BFD8A74EA6D607A27E63A09DB61ACCD_MetadataUsageId;
extern const uint32_t IReferenceArray_1_get_Value_m7CC372AB83F644FD859EF303BBB532B57D1440FF_MetadataUsageId;
extern const uint32_t IReferenceArray_1_get_Value_m7F097E8E5439D317018F7A14B395A67546098351_MetadataUsageId;
extern const uint32_t IReferenceArray_1_get_Value_m867002E2F2405D31B22108F25AF10273E1D3FA78_MetadataUsageId;
extern const uint32_t IReferenceArray_1_get_Value_m8A49BEC2EE41C9052F85CC324EE2C43C57CC330D_MetadataUsageId;
extern const uint32_t IReferenceArray_1_get_Value_m9540024C04D2EB30B44D4409B483280C7CDF9028_MetadataUsageId;
extern const uint32_t IReferenceArray_1_get_Value_mA3C550341A5C707E83AFA975C9AE19D371D3D73A_MetadataUsageId;
extern const uint32_t IReferenceArray_1_get_Value_mBAC0B46ABEDF697A378429EB77E407807AB26F21_MetadataUsageId;
extern const uint32_t IReferenceArray_1_get_Value_mC0BA372A9F194A48CED751C529B0DE35CAD24266_MetadataUsageId;
extern const uint32_t IReferenceArray_1_get_Value_mD1151BCE712889E2BBCE8EA4B761BB5EE9F092E7_MetadataUsageId;
extern const uint32_t IReferenceArray_1_get_Value_mD1339B6B58E9DF684344F54CD65DC8B3849F828E_MetadataUsageId;
extern const uint32_t IReferenceArray_1_get_Value_mE475E3AE33CD3812F6114F69789421F76AFA3C24_MetadataUsageId;
extern const uint32_t IReferenceArray_1_get_Value_mE4FD605191B032F11696785B7633CBD930A088F9_MetadataUsageId;
extern const uint32_t IReferenceArray_1_get_Value_mE5D6C3BC759E9B142715D742BFE2F8CACE85C415_MetadataUsageId;
extern const uint32_t IReferenceArray_1_get_Value_mE7AD1A7FBC49F141EF82FA880579F4755AEBB226_MetadataUsageId;
extern const uint32_t IReferenceArray_1_get_Value_mEAB625C48576A1804F8F17F080600BCE1887C2F8_MetadataUsageId;
extern const uint32_t IReferenceArray_1_get_Value_mEB916F24F7D8E7399E2EDBBB95EC92F1E63E9AE2_MetadataUsageId;
extern const uint32_t IReferenceArray_1_get_Value_mEDA50A0061481D88E1CB0BDCEE694D6BB089D400_MetadataUsageId;
extern const uint32_t IReferenceArray_1_get_Value_mFE585564D928DA773C1830812FD3D3D57DB811C5_MetadataUsageId;
extern const uint32_t IReference_1_get_Value_m1515D39F46A1EC5D732E93F02C5C433B57AFC76B_MetadataUsageId;
extern const uint32_t IReference_1_get_Value_m91B4C7051DB8EDBBE97C702D1A10292EA36CD182_MetadataUsageId;
struct DateTime_t9D0F9E236B6200FF6413DD837230D25E285E7795 ;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct EventRegistrationToken_tB7331C6A2CA7A6A9AD497264E9E787B3B71126D4 ;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct FoundationContract_tA5129870FD2EAAE9518C2EA28B32757D4FD977E9 ;
struct HResult_tD2916D1ECD3A4E474B4A639B8D27E510FF8421DB ;
struct Il2CppWindowsRuntimeTypeName;
struct Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC ;
struct Point_tEC1815EC53B414E5281C817051DA4F985DB9C8C1 ;
struct Rect_tC430FB498F3B42BBCD93E88C03BA3CBB77B60ACA ;
struct Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 ;
struct Size_t4766FF009097CE547F699B69250246058DA664D9 ;
struct Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 ;
struct TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 ;
struct TimeSpan_tD18885B289077804D4E82931E68E84181C072755 ;
struct TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC;;
struct TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC_marshaled_windows_runtime;
struct TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC_marshaled_windows_runtime;;
struct UniversalApiContract_t2909295C70CE09107C85CD360BE6888A4D1078D9 ;

struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct TimeSpanU5BU5D_tCF326C038BD306190A013AE3C9F9B1A525054DD5;
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
struct UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E;
struct UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB;
struct UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4;
struct DeviceClassU5BU5D_t9253127C0B93148D277C01249FA613B2391A1175;
struct AsyncStatusU5BU5D_tF8E4B2AD53A393E5256AA8BA94B015A19F9348DA;
struct DateTimeU5BU5D_tF99CEBC490438246063FF10220535B915FD29D57;
struct EventRegistrationTokenU5BU5D_tF25AB9D4BC1002982ED1C496304061610F1FDA95;
struct FoundationContractU5BU5D_tEE9850C12D0EC6CEB499C6429CE62B4BFC1F41D9;
struct HResultU5BU5D_tC4635E1BE9508BB0BE0D32C0E5D98385A6056D59;
struct AttributeTargetsU5BU5D_t43ADA39F08258A2862F2E29635B7D34629E256D9;
struct CompositionTypeU5BU5D_t83C2DA060B9E5D3BB64AA654A7B096A5A3715822;
struct DeprecationTypeU5BU5D_t67021BA4FE5EB9288B9B7FC18AD855678A6C2A4C;
struct GCPressureAmountU5BU5D_t66F1B443ABEBE924547FF95AD7801A9B29D6B2B2;
struct MarshalingTypeU5BU5D_t8A314BCC76C5B93CC5C2B55D059D42081B966A4E;
struct ThreadingModelU5BU5D_t26305514D7BAF6D9FD89034D7C2149C346567A18;
struct PointU5BU5D_tD91AB35E3284C9E9789C9BA78F4B2C58A2E4FF11;
struct PointU5BU5D_t87AC35D99B5520D1A23942325839CD3228778606;
struct PropertyTypeU5BU5D_tB7D44737771CD756341AB3D4255FA11E156C2EA5;
struct RectU5BU5D_tDAF406D13B5A5E854CE4CD12849F253B54D84AC7;
struct RectU5BU5D_t04A0BEA0B6C281BD9A695F537DC48BF7576C358F;
struct SizeU5BU5D_t9B66FD0DE66BE54A0260714C9F6BBD896A4FDD0B;
struct SizeU5BU5D_t039A7BC3968859A1AC03A46860F6108D053B9D58;
struct TimeSpanU5BU5D_tACF30B716D863271CE7340AFE41B366570EF6A45;
struct UniversalApiContractU5BU5D_t34EEF3C7CA08DBC70ACA767782DD83D7D711FF0F;
struct MediaFrameReaderStartStatusU5BU5D_tAE64065940C158E2F5E8BF8AFCA4F3E090F0CCD9;
struct MediaFrameSourceKindU5BU5D_t9C80F73D6CC0709B210ED22BF4AA3EDB060DC03F;
struct MediaCaptureMemoryPreferenceU5BU5D_t356DD145E42CA2316302B9A4D2A5D5B96A914519;
struct MediaCategoryU5BU5D_tC20168641109D36955171EFEFB68CCCB6531D0B5;
struct MediaStreamTypeU5BU5D_t08A28F62413F3FA1FB4157CA30382F7C42F42B8B;
struct StreamingCaptureModeU5BU5D_t5A76C953AECDF4D2F22E46371CB07EE3D37C07F7;
struct BinaryStringEncodingU5BU5D_t30A95900A482A2FA531020698C985B80A37EAE62;
struct CreationCollisionOptionU5BU5D_t0D1B5001E80C0B26F808CFE5B272BE51C1905BE1;
struct FileAccessModeU5BU5D_tC5E82060AFA3700F7E68043B6139766320556543;
struct InputStreamOptionsU5BU5D_tF25121D9C712D26D027EEE9BB94F1AB90F419EFB;
struct CoreDispatcherPriorityU5BU5D_tB8B23B5C47F24F734F9D134E0463D2E6DF7A64A1;
struct NotifyCollectionChangedActionU5BU5D_t5F4C1744B10462A4B4FBCAB2CF3C4F239BF063C9;
struct TypeKindU5BU5D_tAC43810CE90FB41E756A2FC391BB73927F74AD8C;
struct TypeNameU5BU5D_t5639A6C63B43E5933AD3498000C56530312BF3D0;


#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
// Windows.Foundation.IReferenceArray`1<System.TimeSpan>
struct NOVTABLE IReferenceArray_1_t7EF54C3688E8531DF06C82B2436F99DA53DB5547 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReferenceArray_1_get_Value_m7093E45E08585F6C13E53C59A0B03291C6DC7777(uint32_t* comReturnValueArraySize, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 ** comReturnValue) = 0;
};
// Windows.Foundation.IReferenceArray`1<System.Type>
struct NOVTABLE IReferenceArray_1_tAF5C268A5AF981224627FF530FA49915B8755802 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReferenceArray_1_get_Value_m085ABBDED729E7C8E332FDD90292AAAFB1267309(uint32_t* comReturnValueArraySize, Il2CppWindowsRuntimeTypeName** comReturnValue) = 0;
};
// Windows.Foundation.IReferenceArray`1<System.UInt16>
struct NOVTABLE IReferenceArray_1_t725A45C78FCA946F89AE772534A7AAA55604FF9B : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReferenceArray_1_get_Value_mBAC0B46ABEDF697A378429EB77E407807AB26F21(uint32_t* comReturnValueArraySize, uint16_t** comReturnValue) = 0;
};
// Windows.Foundation.IReferenceArray`1<System.UInt32>
struct NOVTABLE IReferenceArray_1_tC012955D8CB2F9A64D5A2063A2B6A140A75903B9 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReferenceArray_1_get_Value_m785BFF40CC13903E93CBBD6EC8095825E04F11CC(uint32_t* comReturnValueArraySize, uint32_t** comReturnValue) = 0;
};
// Windows.Foundation.IReferenceArray`1<System.UInt64>
struct NOVTABLE IReferenceArray_1_tEF979DD6169FE33B2B75D509C8155ADD0074DCF0 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReferenceArray_1_get_Value_mE4FD605191B032F11696785B7633CBD930A088F9(uint32_t* comReturnValueArraySize, uint64_t** comReturnValue) = 0;
};
// Windows.Foundation.IReferenceArray`1<Windows.Devices.Enumeration.DeviceClass>
struct NOVTABLE IReferenceArray_1_tFC31A71B5BBA73DD7AA46F41F04D7605D31C29D2 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReferenceArray_1_get_Value_m7CC372AB83F644FD859EF303BBB532B57D1440FF(uint32_t* comReturnValueArraySize, int32_t** comReturnValue) = 0;
};
// Windows.Foundation.IReferenceArray`1<Windows.Foundation.AsyncStatus>
struct NOVTABLE IReferenceArray_1_tA8A1CBD5A1BDA38904A897B395B91B84BB502F40 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReferenceArray_1_get_Value_m33213D71EB5CE3DF4125CE6648984CA1523836AD(uint32_t* comReturnValueArraySize, int32_t** comReturnValue) = 0;
};
// Windows.Foundation.IReferenceArray`1<Windows.Foundation.DateTime>
struct NOVTABLE IReferenceArray_1_t41F8C6C05907479A735CFF21290F78470922A752 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReferenceArray_1_get_Value_mE5D6C3BC759E9B142715D742BFE2F8CACE85C415(uint32_t* comReturnValueArraySize, DateTime_t9D0F9E236B6200FF6413DD837230D25E285E7795 ** comReturnValue) = 0;
};
// Windows.Foundation.IReferenceArray`1<Windows.Foundation.EventRegistrationToken>
struct NOVTABLE IReferenceArray_1_t5C768D0366F9FA66E198DD456F8E09323A2C9643 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReferenceArray_1_get_Value_m20C74F35C90FAA3D64BB4152FC059D5FE6F9E832(uint32_t* comReturnValueArraySize, EventRegistrationToken_tB7331C6A2CA7A6A9AD497264E9E787B3B71126D4 ** comReturnValue) = 0;
};
// Windows.Foundation.IReferenceArray`1<Windows.Foundation.FoundationContract>
struct NOVTABLE IReferenceArray_1_tA033F5D0078A8586478BCEFB2835E551597E3F24 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReferenceArray_1_get_Value_m02AA6C3FD94B7ACACD859F421A11AE5E8B96CDD4(uint32_t* comReturnValueArraySize, FoundationContract_tA5129870FD2EAAE9518C2EA28B32757D4FD977E9 ** comReturnValue) = 0;
};
// Windows.Foundation.IReferenceArray`1<Windows.Foundation.HResult>
struct NOVTABLE IReferenceArray_1_t80F6D023450607FD02E9C8106C675D3006A8F0BD : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReferenceArray_1_get_Value_mEDA50A0061481D88E1CB0BDCEE694D6BB089D400(uint32_t* comReturnValueArraySize, HResult_tD2916D1ECD3A4E474B4A639B8D27E510FF8421DB ** comReturnValue) = 0;
};
// Windows.Foundation.IReferenceArray`1<Windows.Foundation.Metadata.AttributeTargets>
struct NOVTABLE IReferenceArray_1_t41F17E53DE5B27D4DBFA423FB67ABBEEAA32DE6C : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReferenceArray_1_get_Value_mEB916F24F7D8E7399E2EDBBB95EC92F1E63E9AE2(uint32_t* comReturnValueArraySize, uint32_t** comReturnValue) = 0;
};
// Windows.Foundation.IReferenceArray`1<Windows.Foundation.Metadata.CompositionType>
struct NOVTABLE IReferenceArray_1_tCC9DD9CBD034E47A24115FAA87BA883C6ED4B967 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReferenceArray_1_get_Value_m28C4AB47A0CDAF89B1595E405D9AC6B2B9F81704(uint32_t* comReturnValueArraySize, int32_t** comReturnValue) = 0;
};
// Windows.Foundation.IReferenceArray`1<Windows.Foundation.Metadata.DeprecationType>
struct NOVTABLE IReferenceArray_1_tD8A6E0024C6663CB878B1EBD3AF7C28F770030B8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReferenceArray_1_get_Value_m49B8372A76BA81B294037AC75941998664B4C508(uint32_t* comReturnValueArraySize, int32_t** comReturnValue) = 0;
};
// Windows.Foundation.IReferenceArray`1<Windows.Foundation.Metadata.GCPressureAmount>
struct NOVTABLE IReferenceArray_1_t7CFC7F4D3E0370BDD7AB617F73367332B56BAF92 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReferenceArray_1_get_Value_mE7AD1A7FBC49F141EF82FA880579F4755AEBB226(uint32_t* comReturnValueArraySize, int32_t** comReturnValue) = 0;
};
// Windows.Foundation.IReferenceArray`1<Windows.Foundation.Metadata.MarshalingType>
struct NOVTABLE IReferenceArray_1_t7264BA58EA5B306F69F8C4C0CEF451F9D14F8250 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReferenceArray_1_get_Value_m46001477E6E1E58EDE80E90D9AB5A2C8A2ECD913(uint32_t* comReturnValueArraySize, int32_t** comReturnValue) = 0;
};
// Windows.Foundation.IReferenceArray`1<Windows.Foundation.Metadata.ThreadingModel>
struct NOVTABLE IReferenceArray_1_t3FF147B5415D130E0ED488622E9B7F4DDEA07356 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReferenceArray_1_get_Value_m787B9BB10BFD8A74EA6D607A27E63A09DB61ACCD(uint32_t* comReturnValueArraySize, int32_t** comReturnValue) = 0;
};
// Windows.Foundation.IReferenceArray`1<Windows.Foundation.Point>
struct NOVTABLE IReferenceArray_1_t576A3D25E8FBF93726D60ACBFAD4920F9347F67D : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReferenceArray_1_get_Value_m4102D696F91F0359B7C9EDBD5FF81265760B5ADD(uint32_t* comReturnValueArraySize, Point_tEC1815EC53B414E5281C817051DA4F985DB9C8C1 ** comReturnValue) = 0;
};
// Windows.Foundation.IReferenceArray`1<Windows.Foundation.Point>
struct NOVTABLE IReferenceArray_1_t87171044C83C8EAA734BD71902C7F9B26BF33E9C : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReferenceArray_1_get_Value_m6AC14C7482B37ED0370189E5C0997F9F96BE949E(uint32_t* comReturnValueArraySize, Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC ** comReturnValue) = 0;
};
// Windows.Foundation.IReferenceArray`1<Windows.Foundation.PropertyType>
struct NOVTABLE IReferenceArray_1_t0F23DC397FF05663D41FEB21F0247B7DF7C07EDA : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReferenceArray_1_get_Value_mC0BA372A9F194A48CED751C529B0DE35CAD24266(uint32_t* comReturnValueArraySize, int32_t** comReturnValue) = 0;
};
// Windows.Foundation.IReferenceArray`1<Windows.Foundation.Rect>
struct NOVTABLE IReferenceArray_1_t4C138010C41BC36E7AEF66D2074AF41E1D8DF4B6 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReferenceArray_1_get_Value_mE475E3AE33CD3812F6114F69789421F76AFA3C24(uint32_t* comReturnValueArraySize, Rect_tC430FB498F3B42BBCD93E88C03BA3CBB77B60ACA ** comReturnValue) = 0;
};
// Windows.Foundation.IReferenceArray`1<Windows.Foundation.Rect>
struct NOVTABLE IReferenceArray_1_t100A0DBC5BDC953A0663CD612A7BC41D641A895A : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReferenceArray_1_get_Value_m9540024C04D2EB30B44D4409B483280C7CDF9028(uint32_t* comReturnValueArraySize, Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 ** comReturnValue) = 0;
};
// Windows.Foundation.IReferenceArray`1<Windows.Foundation.Size>
struct NOVTABLE IReferenceArray_1_t12589EAA8DE026A1833A6DF713F583481C5D224E : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReferenceArray_1_get_Value_m867002E2F2405D31B22108F25AF10273E1D3FA78(uint32_t* comReturnValueArraySize, Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 ** comReturnValue) = 0;
};
// Windows.Foundation.IReferenceArray`1<Windows.Foundation.Size>
struct NOVTABLE IReferenceArray_1_tD74E2E936AB7BDF0ACFB6341BE1109F1A2EEE665 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReferenceArray_1_get_Value_m2B97D289C69089CC6BF1273CADF4DE887218FD48(uint32_t* comReturnValueArraySize, Size_t4766FF009097CE547F699B69250246058DA664D9 ** comReturnValue) = 0;
};
// Windows.Foundation.IReferenceArray`1<Windows.Foundation.TimeSpan>
struct NOVTABLE IReferenceArray_1_tB25F643990D2B36B5464777E7E94763047EEE6E5 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReferenceArray_1_get_Value_m581DE5A9FC958F8FE701FCE4920AF9E59CA96880(uint32_t* comReturnValueArraySize, TimeSpan_tD18885B289077804D4E82931E68E84181C072755 ** comReturnValue) = 0;
};
// Windows.Foundation.IReferenceArray`1<Windows.Foundation.UniversalApiContract>
struct NOVTABLE IReferenceArray_1_tE504941DE81CB8573863162040D1A2E829451719 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReferenceArray_1_get_Value_mD1339B6B58E9DF684344F54CD65DC8B3849F828E(uint32_t* comReturnValueArraySize, UniversalApiContract_t2909295C70CE09107C85CD360BE6888A4D1078D9 ** comReturnValue) = 0;
};
// Windows.Foundation.IReferenceArray`1<Windows.Media.Capture.Frames.MediaFrameReaderStartStatus>
struct NOVTABLE IReferenceArray_1_tFF16CEE3F9BA4894A0DEA773AE9D8D470A44942D : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReferenceArray_1_get_Value_mD1151BCE712889E2BBCE8EA4B761BB5EE9F092E7(uint32_t* comReturnValueArraySize, int32_t** comReturnValue) = 0;
};
// Windows.Foundation.IReferenceArray`1<Windows.Media.Capture.Frames.MediaFrameSourceKind>
struct NOVTABLE IReferenceArray_1_t7178D28104ACCA1C2AB427E260D2F7777E37D6D0 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReferenceArray_1_get_Value_m65FCE22C1450C0D6919AF23A331230228CA911FE(uint32_t* comReturnValueArraySize, int32_t** comReturnValue) = 0;
};
// Windows.Foundation.IReferenceArray`1<Windows.Media.Capture.MediaCaptureMemoryPreference>
struct NOVTABLE IReferenceArray_1_tDF4F0F8B28ABEB9D862015174145D3D705430616 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReferenceArray_1_get_Value_m7F097E8E5439D317018F7A14B395A67546098351(uint32_t* comReturnValueArraySize, int32_t** comReturnValue) = 0;
};
// Windows.Foundation.IReferenceArray`1<Windows.Media.Capture.MediaCategory>
struct NOVTABLE IReferenceArray_1_t1B1FDAEE317DA6F55559B7E31F92625D270B19A3 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReferenceArray_1_get_Value_m483946733B7CFF62C16F3D029B59E23BDD2D59B3(uint32_t* comReturnValueArraySize, int32_t** comReturnValue) = 0;
};
// Windows.Foundation.IReferenceArray`1<Windows.Media.Capture.MediaStreamType>
struct NOVTABLE IReferenceArray_1_t294B8F556D58B904BD0F5024B18A59AB5975A9E9 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReferenceArray_1_get_Value_mEAB625C48576A1804F8F17F080600BCE1887C2F8(uint32_t* comReturnValueArraySize, int32_t** comReturnValue) = 0;
};
// Windows.Foundation.IReferenceArray`1<Windows.Media.Capture.StreamingCaptureMode>
struct NOVTABLE IReferenceArray_1_t4DE1F6AFD85772F7939358A784728EA3728B2BEA : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReferenceArray_1_get_Value_m6D0C76D9F2E8F95BBBEE8EF363C62EDB4C65E28C(uint32_t* comReturnValueArraySize, int32_t** comReturnValue) = 0;
};
// Windows.Foundation.IReferenceArray`1<Windows.Security.Cryptography.BinaryStringEncoding>
struct NOVTABLE IReferenceArray_1_t98EC6731CECDD001D441FE00A245DFE4EE02FE50 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReferenceArray_1_get_Value_m6D753B0D48172CA0E571EB4D3DD03378F8FEC0F3(uint32_t* comReturnValueArraySize, int32_t** comReturnValue) = 0;
};
// Windows.Foundation.IReferenceArray`1<Windows.Storage.CreationCollisionOption>
struct NOVTABLE IReferenceArray_1_tADC931797D6D8245FA6B848E09AA7854D722D977 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReferenceArray_1_get_Value_mFE585564D928DA773C1830812FD3D3D57DB811C5(uint32_t* comReturnValueArraySize, int32_t** comReturnValue) = 0;
};
// Windows.Foundation.IReferenceArray`1<Windows.Storage.FileAccessMode>
struct NOVTABLE IReferenceArray_1_tC8A527A6B0BCDE53EE1115988DB7D92BF863AEA7 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReferenceArray_1_get_Value_m0C6364B9DD37CA69E265912FCD834CC0140EEEA4(uint32_t* comReturnValueArraySize, int32_t** comReturnValue) = 0;
};
// Windows.Foundation.IReferenceArray`1<Windows.Storage.Streams.InputStreamOptions>
struct NOVTABLE IReferenceArray_1_t37CD81B399C5EB4A8F5C508201CC0E068671502A : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReferenceArray_1_get_Value_m528D0E9857D67C81F1E33246775EF4D62DE0FEF0(uint32_t* comReturnValueArraySize, uint32_t** comReturnValue) = 0;
};
// Windows.Foundation.IReferenceArray`1<Windows.UI.Core.CoreDispatcherPriority>
struct NOVTABLE IReferenceArray_1_tD26B173C5FAE91B2F2077DD62E3567CAF406E429 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReferenceArray_1_get_Value_m730D2F016969548F25F67285C71CA603B91F8183(uint32_t* comReturnValueArraySize, int32_t** comReturnValue) = 0;
};
// Windows.Foundation.IReferenceArray`1<Windows.UI.Xaml.Interop.NotifyCollectionChangedAction>
struct NOVTABLE IReferenceArray_1_t79F5802664DB7D71A9F7599852847D068301402C : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReferenceArray_1_get_Value_m47A13C852058E7F370C12C8AF23B9B1C79A73FB1(uint32_t* comReturnValueArraySize, int32_t** comReturnValue) = 0;
};
// Windows.Foundation.IReferenceArray`1<Windows.UI.Xaml.Interop.TypeKind>
struct NOVTABLE IReferenceArray_1_tACFCD2B93305466A783058BC8F511B897341F850 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReferenceArray_1_get_Value_mA3C550341A5C707E83AFA975C9AE19D371D3D73A(uint32_t* comReturnValueArraySize, int32_t** comReturnValue) = 0;
};
// Windows.Foundation.IReferenceArray`1<Windows.UI.Xaml.Interop.TypeName>
struct NOVTABLE IReferenceArray_1_t35220B46D85DD1C41787C21B57F120FC3B05A880 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReferenceArray_1_get_Value_m8A49BEC2EE41C9052F85CC324EE2C43C57CC330D(uint32_t* comReturnValueArraySize, TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC_marshaled_windows_runtime** comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.Boolean>
struct NOVTABLE IReference_1_t966ABCC072615F44746E24C73578513F6B040AD9 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m44F05338A24EDC3B4BCA8F89DC2AF9A12555D0CD(bool* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.Byte>
struct NOVTABLE IReference_1_t533195D0BAEB154D29F9A723937B28B45570CD70 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mE968C0499D42DBD26FF795C26C5257C760EC5710(uint8_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.Char>
struct NOVTABLE IReference_1_t4A80DBE86174EA4D9B8096A54E056A4DFE0660E1 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m93FCB63925A352CCEA338E6B13CFB9214A8ABB4C(Il2CppChar* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.Double>
struct NOVTABLE IReference_1_t4CD1C8EF43C33E86DB02F2351825BBACF490613A : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m646563AA7BD61F6EEE3EE0F4825B6EE8FD84C807(double* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.Exception>
struct NOVTABLE IReference_1_t67847A96B1438323AEC81CD945DFC5C035890AE1 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m327A9F068493A9DA6835C83433C65A0C858605A6(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.Int16>
struct NOVTABLE IReference_1_t419B8E8D14A6383889A141DA48BA10EF53636954 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m009A2D32288A345CECC6E0DA21C6194026F7666A(int16_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.Int32>
struct NOVTABLE IReference_1_t29C7708BA8286D396F6A505585E3D5D3140F38F4 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mE48C4EA35C8AD4467154020A633DD0CE76BAECA3(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.Int64>
struct NOVTABLE IReference_1_tF0A5EAE209B2A4326BA3EC8A7038A82A86A4DDEA : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mC1DCE564A165482AD25C6BD877FB304DFD83E468(int64_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.Object>
struct NOVTABLE IReference_1_t76CDB39CEDF6319F796E177E5DE8F647F5A5B5FC : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m91B4C7051DB8EDBBE97C702D1A10292EA36CD182(Il2CppIInspectable** comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.Single>
struct NOVTABLE IReference_1_tEB8F9D718A8787AFD2C98617833E4FC35E902482 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m4B38DAA5B9FADBB6A97FFD1A66E45532BD63E4D8(float* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.String>
struct NOVTABLE IReference_1_tA3B1E091D250AED9C946E9609CDAEC80264F5563 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m3FF840BC019723F645FC6EF8CC73606E9EE0D844(Il2CppHString* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.UInt16>
struct NOVTABLE IReference_1_tC7A6B390E90FA83DC2C998B75295538FF93643AB : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mA2A6F9C57F179D394456F66468EA0B46081C160A(uint16_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.UInt32>
struct NOVTABLE IReference_1_tB2F2E0CD43CAEB9F74262EDD01DA07CCEA9A2D00 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m7E579377BE9FD2F87748D6B54100D3127B0A8302(uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.UInt64>
struct NOVTABLE IReference_1_t76BE3B182DE2AFB7180314501BAD401974550371 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m7A2645A084F28DD4D69B4A065A420D2DC59A8C76(uint64_t* comReturnValue) = 0;
};
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_EDILock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#define VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};
#endif // VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifndef BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#define BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifndef BYTE_TF87C579059BD4633E6840EBBBEEF899C6E33EF07_H
#define BYTE_TF87C579059BD4633E6840EBBBEEF899C6E33EF07_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_TF87C579059BD4633E6840EBBBEEF899C6E33EF07_H
#ifndef CHAR_TBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_H
#define CHAR_TBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((&___categoryForLatin1_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_TBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_H
#ifndef DATETIME_T349B7449FBAAFF4192636E2B7A07694DA9236132_H
#define DATETIME_T349B7449FBAAFF4192636E2B7A07694DA9236132_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth365_29), value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth366_30), value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MinValue_31)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MaxValue_32)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MaxValue_32 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T349B7449FBAAFF4192636E2B7A07694DA9236132_H
#ifndef DOUBLE_T358B8F23BDC52A5DD700E727E204F9F7CDE12409_H
#define DOUBLE_T358B8F23BDC52A5DD700E727E204F9F7CDE12409_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T358B8F23BDC52A5DD700E727E204F9F7CDE12409_H
#ifndef ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#define ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};
#endif // ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifndef GUID_T_H
#define GUID_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * ____rng_13;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((&____rngAccess_12), value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((&____rng_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
#ifndef INT16_T823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_H
#define INT16_T823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int16
struct  Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT16_T823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_H
#ifndef INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#define INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifndef INT64_T7A386C2FF7B0280A0F516992401DDFCF0FF7B436_H
#define INT64_T7A386C2FF7B0280A0F516992401DDFCF0FF7B436_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T7A386C2FF7B0280A0F516992401DDFCF0FF7B436_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef EVENTREGISTRATIONTOKEN_TE1F3FD8339DB10082B4291DE47C45A352DCB08A7_H
#define EVENTREGISTRATIONTOKEN_TE1F3FD8339DB10082B4291DE47C45A352DCB08A7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken
struct  EventRegistrationToken_tE1F3FD8339DB10082B4291DE47C45A352DCB08A7 
{
public:
	// System.UInt64 System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(EventRegistrationToken_tE1F3FD8339DB10082B4291DE47C45A352DCB08A7, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTREGISTRATIONTOKEN_TE1F3FD8339DB10082B4291DE47C45A352DCB08A7_H
#ifndef SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#define SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifndef UINT16_TAE45CEF73BF720100519F6867F32145D075F928E_H
#define UINT16_TAE45CEF73BF720100519F6867F32145D075F928E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt16
struct  UInt16_tAE45CEF73BF720100519F6867F32145D075F928E 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_tAE45CEF73BF720100519F6867F32145D075F928E, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT16_TAE45CEF73BF720100519F6867F32145D075F928E_H
#ifndef UINT32_T4980FA09003AFAAB5A6E361BA2748EA9A005709B_H
#define UINT32_T4980FA09003AFAAB5A6E361BA2748EA9A005709B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T4980FA09003AFAAB5A6E361BA2748EA9A005709B_H
#ifndef UINT64_TA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_H
#define UINT64_TA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt64
struct  UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64_TA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_H
#ifndef VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#define VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifndef DATETIME_T9D0F9E236B6200FF6413DD837230D25E285E7795_H
#define DATETIME_T9D0F9E236B6200FF6413DD837230D25E285E7795_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.DateTime
struct  DateTime_t9D0F9E236B6200FF6413DD837230D25E285E7795 
{
public:
	// System.Int64 Windows.Foundation.DateTime::UniversalTime
	int64_t ___UniversalTime_0;

public:
	inline static int32_t get_offset_of_UniversalTime_0() { return static_cast<int32_t>(offsetof(DateTime_t9D0F9E236B6200FF6413DD837230D25E285E7795, ___UniversalTime_0)); }
	inline int64_t get_UniversalTime_0() const { return ___UniversalTime_0; }
	inline int64_t* get_address_of_UniversalTime_0() { return &___UniversalTime_0; }
	inline void set_UniversalTime_0(int64_t value)
	{
		___UniversalTime_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T9D0F9E236B6200FF6413DD837230D25E285E7795_H
#ifndef EVENTREGISTRATIONTOKEN_TB7331C6A2CA7A6A9AD497264E9E787B3B71126D4_H
#define EVENTREGISTRATIONTOKEN_TB7331C6A2CA7A6A9AD497264E9E787B3B71126D4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.EventRegistrationToken
struct  EventRegistrationToken_tB7331C6A2CA7A6A9AD497264E9E787B3B71126D4 
{
public:
	// System.Int64 Windows.Foundation.EventRegistrationToken::Value
	int64_t ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EventRegistrationToken_tB7331C6A2CA7A6A9AD497264E9E787B3B71126D4, ___Value_0)); }
	inline int64_t get_Value_0() const { return ___Value_0; }
	inline int64_t* get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(int64_t value)
	{
		___Value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTREGISTRATIONTOKEN_TB7331C6A2CA7A6A9AD497264E9E787B3B71126D4_H
#ifndef FOUNDATIONCONTRACT_TA5129870FD2EAAE9518C2EA28B32757D4FD977E9_H
#define FOUNDATIONCONTRACT_TA5129870FD2EAAE9518C2EA28B32757D4FD977E9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.FoundationContract
struct  FoundationContract_tA5129870FD2EAAE9518C2EA28B32757D4FD977E9 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FOUNDATIONCONTRACT_TA5129870FD2EAAE9518C2EA28B32757D4FD977E9_H
#ifndef HRESULT_TD2916D1ECD3A4E474B4A639B8D27E510FF8421DB_H
#define HRESULT_TD2916D1ECD3A4E474B4A639B8D27E510FF8421DB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.HResult
struct  HResult_tD2916D1ECD3A4E474B4A639B8D27E510FF8421DB 
{
public:
	// System.Int32 Windows.Foundation.HResult::Value
	int32_t ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(HResult_tD2916D1ECD3A4E474B4A639B8D27E510FF8421DB, ___Value_0)); }
	inline int32_t get_Value_0() const { return ___Value_0; }
	inline int32_t* get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(int32_t value)
	{
		___Value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HRESULT_TD2916D1ECD3A4E474B4A639B8D27E510FF8421DB_H
#ifndef POINT_TEC1815EC53B414E5281C817051DA4F985DB9C8C1_H
#define POINT_TEC1815EC53B414E5281C817051DA4F985DB9C8C1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Point
struct  Point_tEC1815EC53B414E5281C817051DA4F985DB9C8C1 
{
public:
	// System.Single Windows.Foundation.Point::X
	float ___X_0;
	// System.Single Windows.Foundation.Point::Y
	float ___Y_1;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Point_tEC1815EC53B414E5281C817051DA4F985DB9C8C1, ___X_0)); }
	inline float get_X_0() const { return ___X_0; }
	inline float* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(float value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(Point_tEC1815EC53B414E5281C817051DA4F985DB9C8C1, ___Y_1)); }
	inline float get_Y_1() const { return ___Y_1; }
	inline float* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(float value)
	{
		___Y_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POINT_TEC1815EC53B414E5281C817051DA4F985DB9C8C1_H
#ifndef POINT_T7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC_H
#define POINT_T7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Point
struct  Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC 
{
public:
	// System.Single Windows.Foundation.Point::_x
	float ____x_0;
	// System.Single Windows.Foundation.Point::_y
	float ____y_1;

public:
	inline static int32_t get_offset_of__x_0() { return static_cast<int32_t>(offsetof(Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC, ____x_0)); }
	inline float get__x_0() const { return ____x_0; }
	inline float* get_address_of__x_0() { return &____x_0; }
	inline void set__x_0(float value)
	{
		____x_0 = value;
	}

	inline static int32_t get_offset_of__y_1() { return static_cast<int32_t>(offsetof(Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC, ____y_1)); }
	inline float get__y_1() const { return ____y_1; }
	inline float* get_address_of__y_1() { return &____y_1; }
	inline void set__y_1(float value)
	{
		____y_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POINT_T7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC_H
#ifndef RECT_TC430FB498F3B42BBCD93E88C03BA3CBB77B60ACA_H
#define RECT_TC430FB498F3B42BBCD93E88C03BA3CBB77B60ACA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Rect
struct  Rect_tC430FB498F3B42BBCD93E88C03BA3CBB77B60ACA 
{
public:
	// System.Single Windows.Foundation.Rect::X
	float ___X_0;
	// System.Single Windows.Foundation.Rect::Y
	float ___Y_1;
	// System.Single Windows.Foundation.Rect::Width
	float ___Width_2;
	// System.Single Windows.Foundation.Rect::Height
	float ___Height_3;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Rect_tC430FB498F3B42BBCD93E88C03BA3CBB77B60ACA, ___X_0)); }
	inline float get_X_0() const { return ___X_0; }
	inline float* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(float value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(Rect_tC430FB498F3B42BBCD93E88C03BA3CBB77B60ACA, ___Y_1)); }
	inline float get_Y_1() const { return ___Y_1; }
	inline float* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(float value)
	{
		___Y_1 = value;
	}

	inline static int32_t get_offset_of_Width_2() { return static_cast<int32_t>(offsetof(Rect_tC430FB498F3B42BBCD93E88C03BA3CBB77B60ACA, ___Width_2)); }
	inline float get_Width_2() const { return ___Width_2; }
	inline float* get_address_of_Width_2() { return &___Width_2; }
	inline void set_Width_2(float value)
	{
		___Width_2 = value;
	}

	inline static int32_t get_offset_of_Height_3() { return static_cast<int32_t>(offsetof(Rect_tC430FB498F3B42BBCD93E88C03BA3CBB77B60ACA, ___Height_3)); }
	inline float get_Height_3() const { return ___Height_3; }
	inline float* get_address_of_Height_3() { return &___Height_3; }
	inline void set_Height_3(float value)
	{
		___Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_TC430FB498F3B42BBCD93E88C03BA3CBB77B60ACA_H
#ifndef RECT_TD277A11EF3F3CC633796B8FF0BC4822826E72BB0_H
#define RECT_TD277A11EF3F3CC633796B8FF0BC4822826E72BB0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Rect
struct  Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 
{
public:
	// System.Single Windows.Foundation.Rect::_x
	float ____x_0;
	// System.Single Windows.Foundation.Rect::_y
	float ____y_1;
	// System.Single Windows.Foundation.Rect::_width
	float ____width_2;
	// System.Single Windows.Foundation.Rect::_height
	float ____height_3;

public:
	inline static int32_t get_offset_of__x_0() { return static_cast<int32_t>(offsetof(Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0, ____x_0)); }
	inline float get__x_0() const { return ____x_0; }
	inline float* get_address_of__x_0() { return &____x_0; }
	inline void set__x_0(float value)
	{
		____x_0 = value;
	}

	inline static int32_t get_offset_of__y_1() { return static_cast<int32_t>(offsetof(Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0, ____y_1)); }
	inline float get__y_1() const { return ____y_1; }
	inline float* get_address_of__y_1() { return &____y_1; }
	inline void set__y_1(float value)
	{
		____y_1 = value;
	}

	inline static int32_t get_offset_of__width_2() { return static_cast<int32_t>(offsetof(Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0, ____width_2)); }
	inline float get__width_2() const { return ____width_2; }
	inline float* get_address_of__width_2() { return &____width_2; }
	inline void set__width_2(float value)
	{
		____width_2 = value;
	}

	inline static int32_t get_offset_of__height_3() { return static_cast<int32_t>(offsetof(Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0, ____height_3)); }
	inline float get__height_3() const { return ____height_3; }
	inline float* get_address_of__height_3() { return &____height_3; }
	inline void set__height_3(float value)
	{
		____height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_TD277A11EF3F3CC633796B8FF0BC4822826E72BB0_H
#ifndef SIZE_TBE9F75FCA10276DC3998237A8906733B64FB75A2_H
#define SIZE_TBE9F75FCA10276DC3998237A8906733B64FB75A2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Size
struct  Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 
{
public:
	// System.Single Windows.Foundation.Size::_width
	float ____width_0;
	// System.Single Windows.Foundation.Size::_height
	float ____height_1;

public:
	inline static int32_t get_offset_of__width_0() { return static_cast<int32_t>(offsetof(Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2, ____width_0)); }
	inline float get__width_0() const { return ____width_0; }
	inline float* get_address_of__width_0() { return &____width_0; }
	inline void set__width_0(float value)
	{
		____width_0 = value;
	}

	inline static int32_t get_offset_of__height_1() { return static_cast<int32_t>(offsetof(Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2, ____height_1)); }
	inline float get__height_1() const { return ____height_1; }
	inline float* get_address_of__height_1() { return &____height_1; }
	inline void set__height_1(float value)
	{
		____height_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIZE_TBE9F75FCA10276DC3998237A8906733B64FB75A2_H
#ifndef SIZE_T4766FF009097CE547F699B69250246058DA664D9_H
#define SIZE_T4766FF009097CE547F699B69250246058DA664D9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Size
struct  Size_t4766FF009097CE547F699B69250246058DA664D9 
{
public:
	// System.Single Windows.Foundation.Size::Width
	float ___Width_0;
	// System.Single Windows.Foundation.Size::Height
	float ___Height_1;

public:
	inline static int32_t get_offset_of_Width_0() { return static_cast<int32_t>(offsetof(Size_t4766FF009097CE547F699B69250246058DA664D9, ___Width_0)); }
	inline float get_Width_0() const { return ___Width_0; }
	inline float* get_address_of_Width_0() { return &___Width_0; }
	inline void set_Width_0(float value)
	{
		___Width_0 = value;
	}

	inline static int32_t get_offset_of_Height_1() { return static_cast<int32_t>(offsetof(Size_t4766FF009097CE547F699B69250246058DA664D9, ___Height_1)); }
	inline float get_Height_1() const { return ___Height_1; }
	inline float* get_address_of_Height_1() { return &___Height_1; }
	inline void set_Height_1(float value)
	{
		___Height_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIZE_T4766FF009097CE547F699B69250246058DA664D9_H
#ifndef TIMESPAN_TD18885B289077804D4E82931E68E84181C072755_H
#define TIMESPAN_TD18885B289077804D4E82931E68E84181C072755_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.TimeSpan
struct  TimeSpan_tD18885B289077804D4E82931E68E84181C072755 
{
public:
	// System.Int64 Windows.Foundation.TimeSpan::Duration
	int64_t ___Duration_0;

public:
	inline static int32_t get_offset_of_Duration_0() { return static_cast<int32_t>(offsetof(TimeSpan_tD18885B289077804D4E82931E68E84181C072755, ___Duration_0)); }
	inline int64_t get_Duration_0() const { return ___Duration_0; }
	inline int64_t* get_address_of_Duration_0() { return &___Duration_0; }
	inline void set_Duration_0(int64_t value)
	{
		___Duration_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_TD18885B289077804D4E82931E68E84181C072755_H
#ifndef UNIVERSALAPICONTRACT_T2909295C70CE09107C85CD360BE6888A4D1078D9_H
#define UNIVERSALAPICONTRACT_T2909295C70CE09107C85CD360BE6888A4D1078D9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.UniversalApiContract
struct  UniversalApiContract_t2909295C70CE09107C85CD360BE6888A4D1078D9 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIVERSALAPICONTRACT_T2909295C70CE09107C85CD360BE6888A4D1078D9_H
#ifndef ATTRIBUTETARGETS_T7CC0DE6D2B11C951E525EE69AD02313792932741_H
#define ATTRIBUTETARGETS_T7CC0DE6D2B11C951E525EE69AD02313792932741_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AttributeTargets
struct  AttributeTargets_t7CC0DE6D2B11C951E525EE69AD02313792932741 
{
public:
	// System.Int32 System.AttributeTargets::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AttributeTargets_t7CC0DE6D2B11C951E525EE69AD02313792932741, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTETARGETS_T7CC0DE6D2B11C951E525EE69AD02313792932741_H
#ifndef NOTIFYCOLLECTIONCHANGEDACTION_T0E2223A3626C6A1293B0BC3BEC92D59645EEFC96_H
#define NOTIFYCOLLECTIONCHANGEDACTION_T0E2223A3626C6A1293B0BC3BEC92D59645EEFC96_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NotifyCollectionChangedAction
struct  NotifyCollectionChangedAction_t0E2223A3626C6A1293B0BC3BEC92D59645EEFC96 
{
public:
	// System.Int32 System.Collections.Specialized.NotifyCollectionChangedAction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NotifyCollectionChangedAction_t0E2223A3626C6A1293B0BC3BEC92D59645EEFC96, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTIFYCOLLECTIONCHANGEDACTION_T0E2223A3626C6A1293B0BC3BEC92D59645EEFC96_H
#ifndef DATETIMEOFFSET_T6C333873402CAD576160B4F8E159EB6834F06B85_H
#define DATETIMEOFFSET_T6C333873402CAD576160B4F8E159EB6834F06B85_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeOffset
struct  DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 
{
public:
	// System.DateTime System.DateTimeOffset::m_dateTime
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___m_dateTime_2;
	// System.Int16 System.DateTimeOffset::m_offsetMinutes
	int16_t ___m_offsetMinutes_3;

public:
	inline static int32_t get_offset_of_m_dateTime_2() { return static_cast<int32_t>(offsetof(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85, ___m_dateTime_2)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_m_dateTime_2() const { return ___m_dateTime_2; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_m_dateTime_2() { return &___m_dateTime_2; }
	inline void set_m_dateTime_2(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___m_dateTime_2 = value;
	}

	inline static int32_t get_offset_of_m_offsetMinutes_3() { return static_cast<int32_t>(offsetof(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85, ___m_offsetMinutes_3)); }
	inline int16_t get_m_offsetMinutes_3() const { return ___m_offsetMinutes_3; }
	inline int16_t* get_address_of_m_offsetMinutes_3() { return &___m_offsetMinutes_3; }
	inline void set_m_offsetMinutes_3(int16_t value)
	{
		___m_offsetMinutes_3 = value;
	}
};

struct DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_StaticFields
{
public:
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  ___MinValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  ___MaxValue_1;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_StaticFields, ___MinValue_0)); }
	inline DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  get_MinValue_0() const { return ___MinValue_0; }
	inline DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_StaticFields, ___MaxValue_1)); }
	inline DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  get_MaxValue_1() const { return ___MaxValue_1; }
	inline DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  value)
	{
		___MaxValue_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEOFFSET_T6C333873402CAD576160B4F8E159EB6834F06B85_H
#ifndef DELEGATE_T_H
#define DELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T_H
#ifndef BINDINGFLAGS_TE35C91D046E63A1B92BB9AB909FCF9DA84379ED0_H
#define BINDINGFLAGS_TE35C91D046E63A1B92BB9AB909FCF9DA84379ED0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_TE35C91D046E63A1B92BB9AB909FCF9DA84379ED0_H
#ifndef RUNTIMETYPEHANDLE_T7B542280A22F0EC4EAC2061C29178845847A8B2D_H
#define RUNTIMETYPEHANDLE_T7B542280A22F0EC4EAC2061C29178845847A8B2D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T7B542280A22F0EC4EAC2061C29178845847A8B2D_H
#ifndef TIMESPAN_TA8069278ACE8A74D6DF7D514A9CD4432433F64C4_H
#define TIMESPAN_TA8069278ACE8A74D6DF7D514A9CD4432433F64C4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;

public:
	inline static int32_t get_offset_of__ticks_22() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4, ____ticks_22)); }
	inline int64_t get__ticks_22() const { return ____ticks_22; }
	inline int64_t* get_address_of__ticks_22() { return &____ticks_22; }
	inline void set__ticks_22(int64_t value)
	{
		____ticks_22 = value;
	}
};

struct TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MinValue_21;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_24;

public:
	inline static int32_t get_offset_of_Zero_19() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___Zero_19)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_Zero_19() const { return ___Zero_19; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_Zero_19() { return &___Zero_19; }
	inline void set_Zero_19(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___Zero_19 = value;
	}

	inline static int32_t get_offset_of_MaxValue_20() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MaxValue_20)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MaxValue_20() const { return ___MaxValue_20; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MaxValue_20() { return &___MaxValue_20; }
	inline void set_MaxValue_20(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MaxValue_20 = value;
	}

	inline static int32_t get_offset_of_MinValue_21() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MinValue_21)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MinValue_21() const { return ___MinValue_21; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MinValue_21() { return &___MinValue_21; }
	inline void set_MinValue_21(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MinValue_21 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_23() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyConfigChecked_23)); }
	inline bool get__legacyConfigChecked_23() const { return ____legacyConfigChecked_23; }
	inline bool* get_address_of__legacyConfigChecked_23() { return &____legacyConfigChecked_23; }
	inline void set__legacyConfigChecked_23(bool value)
	{
		____legacyConfigChecked_23 = value;
	}

	inline static int32_t get_offset_of__legacyMode_24() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyMode_24)); }
	inline bool get__legacyMode_24() const { return ____legacyMode_24; }
	inline bool* get_address_of__legacyMode_24() { return &____legacyMode_24; }
	inline void set__legacyMode_24(bool value)
	{
		____legacyMode_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_TA8069278ACE8A74D6DF7D514A9CD4432433F64C4_H
#ifndef DEVICECLASS_TBA52D90BE06CD476BF20B1D37B4EC39007907AF9_H
#define DEVICECLASS_TBA52D90BE06CD476BF20B1D37B4EC39007907AF9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Devices.Enumeration.DeviceClass
struct  DeviceClass_tBA52D90BE06CD476BF20B1D37B4EC39007907AF9 
{
public:
	// System.Int32 Windows.Devices.Enumeration.DeviceClass::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeviceClass_tBA52D90BE06CD476BF20B1D37B4EC39007907AF9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEVICECLASS_TBA52D90BE06CD476BF20B1D37B4EC39007907AF9_H
#ifndef ASYNCSTATUS_T53CF3803A027F92D24D41E6A852571005D186EEC_H
#define ASYNCSTATUS_T53CF3803A027F92D24D41E6A852571005D186EEC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.AsyncStatus
struct  AsyncStatus_t53CF3803A027F92D24D41E6A852571005D186EEC 
{
public:
	// System.Int32 Windows.Foundation.AsyncStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AsyncStatus_t53CF3803A027F92D24D41E6A852571005D186EEC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCSTATUS_T53CF3803A027F92D24D41E6A852571005D186EEC_H
// Windows.Foundation.IReference`1<System.DateTimeOffset>
struct NOVTABLE IReference_1_t6D631F5B662AFF640DF2B7742E7EC7CC11A3B3A0 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m1515D39F46A1EC5D732E93F02C5C433B57AFC76B(DateTime_t9D0F9E236B6200FF6413DD837230D25E285E7795 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.Guid>
struct NOVTABLE IReference_1_t9B1E4800A0C7FCF3F792739ED6F23DE204414B31 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m2092074B94AF8FDD23F6E49EEA36DB26B03F4D5B(Guid_t * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>
struct NOVTABLE IReference_1_t4AC807526F70CF6E9296724F26CD756605107A36 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m78D0A55EF00DD60A84EA917FE395A1CE38335D73(EventRegistrationToken_tE1F3FD8339DB10082B4291DE47C45A352DCB08A7 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.DateTime>
struct NOVTABLE IReference_1_tDB374689D094BEB200D3B354DC916CA5889930B4 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m8A2147DBABB963656671ACB6C0BC03A06A02DA4A(DateTime_t9D0F9E236B6200FF6413DD837230D25E285E7795 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.EventRegistrationToken>
struct NOVTABLE IReference_1_t2743E3BA6B940A699EE49615FBA484964C9B8B44 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m93D0577BA82B2418EB4B2DCF81F86934016908A7(EventRegistrationToken_tB7331C6A2CA7A6A9AD497264E9E787B3B71126D4 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.FoundationContract>
struct NOVTABLE IReference_1_t5A6F21153F46184B91D3803A669C812309053C2E : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m4F109C5DA2FF9F7BD3F605BB09430CA3F936807A(FoundationContract_tA5129870FD2EAAE9518C2EA28B32757D4FD977E9 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.HResult>
struct NOVTABLE IReference_1_t9BBCE4CCCD926DFB5670735553DCC34756C5BF9E : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m310ABD51534A3ABADF2474DAC870D26B1706D4A1(HResult_tD2916D1ECD3A4E474B4A639B8D27E510FF8421DB * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Point>
struct NOVTABLE IReference_1_t97388A71057076E3CF1C2138D18F067CB7AFF696 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m515BB78374A2BA73105E5E3DAED8030350AE1FA9(Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Point>
struct NOVTABLE IReference_1_t7773DF4951EE2956BB52F40107CA99EB3AC18121 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m12AEB76C9C84E98E8BEE7E909CE268F95A05E899(Point_tEC1815EC53B414E5281C817051DA4F985DB9C8C1 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Rect>
struct NOVTABLE IReference_1_t0383D46BD689BDB48118BCC40E516D48E99AC9C9 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mD70DC394007AE06DD463C810C4A6C833AE4F83CB(Rect_tC430FB498F3B42BBCD93E88C03BA3CBB77B60ACA * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Rect>
struct NOVTABLE IReference_1_t817291E0E32BE3C83987C618344F4830BA9C3A34 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m799E5FBDBDF133003671C206C7190A221D6BC40C(Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Size>
struct NOVTABLE IReference_1_t1C3EFAED54D294F78A828A79443DD579F84600A5 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mEEA056935DABABBA8E17B0CBDA7AF3596AF5E825(Size_t4766FF009097CE547F699B69250246058DA664D9 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Size>
struct NOVTABLE IReference_1_t2A8F8DFC7C3805C64001D19FB34B045D5B9C5D60 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m354841434B2661412713D5B4951615197C260B13(Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.TimeSpan>
struct NOVTABLE IReference_1_t3C2FDD60AAF84C14D98EE687F95A2FE316F1D921 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mC6234E02A201EAFB66846D1AA800201A51B2CDF7(TimeSpan_tD18885B289077804D4E82931E68E84181C072755 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.UniversalApiContract>
struct NOVTABLE IReference_1_tC752D5284F00B4397E95E715F07700B7C452DA32 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m2269DCAE519508A042AD9A68C026B7AA70901042(UniversalApiContract_t2909295C70CE09107C85CD360BE6888A4D1078D9 * comReturnValue) = 0;
};
#ifndef COMPOSITIONTYPE_T7B9CE8339998B57B071D1998F3D23E27AEFA0B66_H
#define COMPOSITIONTYPE_T7B9CE8339998B57B071D1998F3D23E27AEFA0B66_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Metadata.CompositionType
struct  CompositionType_t7B9CE8339998B57B071D1998F3D23E27AEFA0B66 
{
public:
	// System.Int32 Windows.Foundation.Metadata.CompositionType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CompositionType_t7B9CE8339998B57B071D1998F3D23E27AEFA0B66, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPOSITIONTYPE_T7B9CE8339998B57B071D1998F3D23E27AEFA0B66_H
#ifndef DEPRECATIONTYPE_T26103BCD18664DA1510A50C1C815AB31E715BDEB_H
#define DEPRECATIONTYPE_T26103BCD18664DA1510A50C1C815AB31E715BDEB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Metadata.DeprecationType
struct  DeprecationType_t26103BCD18664DA1510A50C1C815AB31E715BDEB 
{
public:
	// System.Int32 Windows.Foundation.Metadata.DeprecationType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeprecationType_t26103BCD18664DA1510A50C1C815AB31E715BDEB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEPRECATIONTYPE_T26103BCD18664DA1510A50C1C815AB31E715BDEB_H
#ifndef GCPRESSUREAMOUNT_TD6E6231B3C61E435B716CACD1F750FBF20794844_H
#define GCPRESSUREAMOUNT_TD6E6231B3C61E435B716CACD1F750FBF20794844_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Metadata.GCPressureAmount
struct  GCPressureAmount_tD6E6231B3C61E435B716CACD1F750FBF20794844 
{
public:
	// System.Int32 Windows.Foundation.Metadata.GCPressureAmount::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GCPressureAmount_tD6E6231B3C61E435B716CACD1F750FBF20794844, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GCPRESSUREAMOUNT_TD6E6231B3C61E435B716CACD1F750FBF20794844_H
#ifndef MARSHALINGTYPE_T9A5D090418F1AFA7DCD94B9E03E909E7A1B169B6_H
#define MARSHALINGTYPE_T9A5D090418F1AFA7DCD94B9E03E909E7A1B169B6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Metadata.MarshalingType
struct  MarshalingType_t9A5D090418F1AFA7DCD94B9E03E909E7A1B169B6 
{
public:
	// System.Int32 Windows.Foundation.Metadata.MarshalingType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MarshalingType_t9A5D090418F1AFA7DCD94B9E03E909E7A1B169B6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALINGTYPE_T9A5D090418F1AFA7DCD94B9E03E909E7A1B169B6_H
#ifndef THREADINGMODEL_TE658033D954DB5DFFE88703D1FA993679892B9DE_H
#define THREADINGMODEL_TE658033D954DB5DFFE88703D1FA993679892B9DE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Metadata.ThreadingModel
struct  ThreadingModel_tE658033D954DB5DFFE88703D1FA993679892B9DE 
{
public:
	// System.Int32 Windows.Foundation.Metadata.ThreadingModel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ThreadingModel_tE658033D954DB5DFFE88703D1FA993679892B9DE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADINGMODEL_TE658033D954DB5DFFE88703D1FA993679892B9DE_H
#ifndef PROPERTYTYPE_T57C754BCEE8B174F474AB6298CFD8E2B02AE3B2C_H
#define PROPERTYTYPE_T57C754BCEE8B174F474AB6298CFD8E2B02AE3B2C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.PropertyType
struct  PropertyType_t57C754BCEE8B174F474AB6298CFD8E2B02AE3B2C 
{
public:
	// System.Int32 Windows.Foundation.PropertyType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PropertyType_t57C754BCEE8B174F474AB6298CFD8E2B02AE3B2C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYTYPE_T57C754BCEE8B174F474AB6298CFD8E2B02AE3B2C_H
#ifndef MEDIAFRAMEREADERSTARTSTATUS_T25BC32FEBC7625500B86728E22F570F6FA8ACA41_H
#define MEDIAFRAMEREADERSTARTSTATUS_T25BC32FEBC7625500B86728E22F570F6FA8ACA41_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Media.Capture.Frames.MediaFrameReaderStartStatus
struct  MediaFrameReaderStartStatus_t25BC32FEBC7625500B86728E22F570F6FA8ACA41 
{
public:
	// System.Int32 Windows.Media.Capture.Frames.MediaFrameReaderStartStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MediaFrameReaderStartStatus_t25BC32FEBC7625500B86728E22F570F6FA8ACA41, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEDIAFRAMEREADERSTARTSTATUS_T25BC32FEBC7625500B86728E22F570F6FA8ACA41_H
#ifndef MEDIAFRAMESOURCEKIND_T8B06C82985C44DB2339F6DD61CFD817F26EBC79E_H
#define MEDIAFRAMESOURCEKIND_T8B06C82985C44DB2339F6DD61CFD817F26EBC79E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Media.Capture.Frames.MediaFrameSourceKind
struct  MediaFrameSourceKind_t8B06C82985C44DB2339F6DD61CFD817F26EBC79E 
{
public:
	// System.Int32 Windows.Media.Capture.Frames.MediaFrameSourceKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MediaFrameSourceKind_t8B06C82985C44DB2339F6DD61CFD817F26EBC79E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEDIAFRAMESOURCEKIND_T8B06C82985C44DB2339F6DD61CFD817F26EBC79E_H
#ifndef MEDIACAPTUREMEMORYPREFERENCE_TA054D938FC915F3D12266E27673C27B0F6B298E6_H
#define MEDIACAPTUREMEMORYPREFERENCE_TA054D938FC915F3D12266E27673C27B0F6B298E6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Media.Capture.MediaCaptureMemoryPreference
struct  MediaCaptureMemoryPreference_tA054D938FC915F3D12266E27673C27B0F6B298E6 
{
public:
	// System.Int32 Windows.Media.Capture.MediaCaptureMemoryPreference::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MediaCaptureMemoryPreference_tA054D938FC915F3D12266E27673C27B0F6B298E6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEDIACAPTUREMEMORYPREFERENCE_TA054D938FC915F3D12266E27673C27B0F6B298E6_H
#ifndef MEDIACATEGORY_T30261E1B04C33AB5BAEEB3860A44B5AD781EDA3A_H
#define MEDIACATEGORY_T30261E1B04C33AB5BAEEB3860A44B5AD781EDA3A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Media.Capture.MediaCategory
struct  MediaCategory_t30261E1B04C33AB5BAEEB3860A44B5AD781EDA3A 
{
public:
	// System.Int32 Windows.Media.Capture.MediaCategory::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MediaCategory_t30261E1B04C33AB5BAEEB3860A44B5AD781EDA3A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEDIACATEGORY_T30261E1B04C33AB5BAEEB3860A44B5AD781EDA3A_H
#ifndef MEDIASTREAMTYPE_T546C2A3EE080E2AC38DF1BB6161D4F79841951A2_H
#define MEDIASTREAMTYPE_T546C2A3EE080E2AC38DF1BB6161D4F79841951A2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Media.Capture.MediaStreamType
struct  MediaStreamType_t546C2A3EE080E2AC38DF1BB6161D4F79841951A2 
{
public:
	// System.Int32 Windows.Media.Capture.MediaStreamType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MediaStreamType_t546C2A3EE080E2AC38DF1BB6161D4F79841951A2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEDIASTREAMTYPE_T546C2A3EE080E2AC38DF1BB6161D4F79841951A2_H
#ifndef STREAMINGCAPTUREMODE_TC9866CDFB670BCDE0C1D600D65677FDFD67BFC00_H
#define STREAMINGCAPTUREMODE_TC9866CDFB670BCDE0C1D600D65677FDFD67BFC00_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Media.Capture.StreamingCaptureMode
struct  StreamingCaptureMode_tC9866CDFB670BCDE0C1D600D65677FDFD67BFC00 
{
public:
	// System.Int32 Windows.Media.Capture.StreamingCaptureMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StreamingCaptureMode_tC9866CDFB670BCDE0C1D600D65677FDFD67BFC00, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAMINGCAPTUREMODE_TC9866CDFB670BCDE0C1D600D65677FDFD67BFC00_H
#ifndef BINARYSTRINGENCODING_T549AF4A733D43370D1F503E41FEFA1AC72ED4C97_H
#define BINARYSTRINGENCODING_T549AF4A733D43370D1F503E41FEFA1AC72ED4C97_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Security.Cryptography.BinaryStringEncoding
struct  BinaryStringEncoding_t549AF4A733D43370D1F503E41FEFA1AC72ED4C97 
{
public:
	// System.Int32 Windows.Security.Cryptography.BinaryStringEncoding::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BinaryStringEncoding_t549AF4A733D43370D1F503E41FEFA1AC72ED4C97, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINARYSTRINGENCODING_T549AF4A733D43370D1F503E41FEFA1AC72ED4C97_H
#ifndef CREATIONCOLLISIONOPTION_T446166DBF156CCE4C7C7E16D78B3E9A2877E5538_H
#define CREATIONCOLLISIONOPTION_T446166DBF156CCE4C7C7E16D78B3E9A2877E5538_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Storage.CreationCollisionOption
struct  CreationCollisionOption_t446166DBF156CCE4C7C7E16D78B3E9A2877E5538 
{
public:
	// System.Int32 Windows.Storage.CreationCollisionOption::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CreationCollisionOption_t446166DBF156CCE4C7C7E16D78B3E9A2877E5538, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CREATIONCOLLISIONOPTION_T446166DBF156CCE4C7C7E16D78B3E9A2877E5538_H
#ifndef FILEACCESSMODE_T1ED436EF08D785F918FCA55CDD41424143F93C91_H
#define FILEACCESSMODE_T1ED436EF08D785F918FCA55CDD41424143F93C91_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Storage.FileAccessMode
struct  FileAccessMode_t1ED436EF08D785F918FCA55CDD41424143F93C91 
{
public:
	// System.Int32 Windows.Storage.FileAccessMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAccessMode_t1ED436EF08D785F918FCA55CDD41424143F93C91, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILEACCESSMODE_T1ED436EF08D785F918FCA55CDD41424143F93C91_H
#ifndef INPUTSTREAMOPTIONS_T30069DC0816A557D0697485558A4114A7C8634E3_H
#define INPUTSTREAMOPTIONS_T30069DC0816A557D0697485558A4114A7C8634E3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Storage.Streams.InputStreamOptions
struct  InputStreamOptions_t30069DC0816A557D0697485558A4114A7C8634E3 
{
public:
	// System.UInt32 Windows.Storage.Streams.InputStreamOptions::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputStreamOptions_t30069DC0816A557D0697485558A4114A7C8634E3, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTSTREAMOPTIONS_T30069DC0816A557D0697485558A4114A7C8634E3_H
#ifndef COREDISPATCHERPRIORITY_T7EEB5F08EB958B3FBCDE4ADB8FEA6D302EE55CC0_H
#define COREDISPATCHERPRIORITY_T7EEB5F08EB958B3FBCDE4ADB8FEA6D302EE55CC0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Core.CoreDispatcherPriority
struct  CoreDispatcherPriority_t7EEB5F08EB958B3FBCDE4ADB8FEA6D302EE55CC0 
{
public:
	// System.Int32 Windows.UI.Core.CoreDispatcherPriority::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CoreDispatcherPriority_t7EEB5F08EB958B3FBCDE4ADB8FEA6D302EE55CC0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COREDISPATCHERPRIORITY_T7EEB5F08EB958B3FBCDE4ADB8FEA6D302EE55CC0_H
#ifndef TYPEKIND_TFC0FD272ED78E70CA1173A99B89D31193D93239C_H
#define TYPEKIND_TFC0FD272ED78E70CA1173A99B89D31193D93239C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Xaml.Interop.TypeKind
struct  TypeKind_tFC0FD272ED78E70CA1173A99B89D31193D93239C 
{
public:
	// System.Int32 Windows.UI.Xaml.Interop.TypeKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeKind_tFC0FD272ED78E70CA1173A99B89D31193D93239C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEKIND_TFC0FD272ED78E70CA1173A99B89D31193D93239C_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};
#endif // MULTICASTDELEGATE_T_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_0), value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_1), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_2), value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_3), value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_5), value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((&___defaultBinder_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
// Windows.Foundation.IReference`1<System.AttributeTargets>
struct NOVTABLE IReference_1_tE8D8D6096A72E59835483A54048B867A56F15F91 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m5A426B082C501E100845973DB6826963A7594A05(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.Collections.Specialized.NotifyCollectionChangedAction>
struct NOVTABLE IReference_1_tB0469E269EDCA1DB6AF9166F954AB79B74F1969A : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m3F514B428E8E3EB88B0D44A93AC6F7DCBF778F73(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.TimeSpan>
struct NOVTABLE IReference_1_tFD875FBD21CADF906333AF0B909CD2B2CF85EFBA : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m2B782C3D5622F00647095637D317BE1495519FCD(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Devices.Enumeration.DeviceClass>
struct NOVTABLE IReference_1_t1F1A1A9E6FFA4657C4C5A28FE1D23519609C2BD6 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m41B541C03572B02B604DF140B6F3690E7B0C35E0(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.AsyncStatus>
struct NOVTABLE IReference_1_t83A931601F5195DB6FFF65AB9A309CBC26BCA614 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m6209CEAC51680E439AA6245571854BA1F7AE6304(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Metadata.CompositionType>
struct NOVTABLE IReference_1_tFE00D20A0573B56E7A9EB4C6B16F4C2086E230D0 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m8B774866E2B0A62E2594C87D306AF73E49ADC70E(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Metadata.DeprecationType>
struct NOVTABLE IReference_1_t5B7EDF4757BC18E604DDB1266B055D96C328AD71 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mDEE3FF8FD8F7F888E94CFF5074257AD3EEE14D74(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Metadata.GCPressureAmount>
struct NOVTABLE IReference_1_t3561B1C7CC988828D60EAD6CB1E3851C94F6A012 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mB1031EF026CC864A2E74CF2C53BAC3A9FD1F7746(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Metadata.MarshalingType>
struct NOVTABLE IReference_1_tAED774804E022955C705DD94598B4447B0142C06 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m1DF83BE7461C683CF165E03BC4915F4FFC2690C6(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Metadata.ThreadingModel>
struct NOVTABLE IReference_1_tA168AABD94AF22150BA9FF1C22BB9D589944D6FD : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m7AA4C5DD3527F1B19462C726F511D88FC12FBE6B(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.PropertyType>
struct NOVTABLE IReference_1_t13454E63971AE5A60B6BCF6FF56A963D17B7DFB1 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m03DA6CDF5117537DE41F422D686269BF50DA50C6(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Media.Capture.Frames.MediaFrameReaderStartStatus>
struct NOVTABLE IReference_1_tE5BD14F08B97F2C269780DBBA4DB762ACA65B27E : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m413463E6EF3718DC6314D45C75A765AEDEAEF962(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Media.Capture.Frames.MediaFrameSourceKind>
struct NOVTABLE IReference_1_t8F8824D1419F72A070E018458DA7472480DABBD6 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mA54DDA04BB838C67B0EDBCBEEAF9C91644941DC0(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Media.Capture.MediaCaptureMemoryPreference>
struct NOVTABLE IReference_1_tE21B253E6C5763096171C9D4ED5C801C4EF9D9D4 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m7763B3B236F58FDEA7756091EEA48871AE7280BA(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Media.Capture.MediaCategory>
struct NOVTABLE IReference_1_t51E27B1BB3E47D06635A002FB0E18320396332E6 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mEBE5CA523565F9E91B35A757183BB9059D822C22(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Media.Capture.MediaStreamType>
struct NOVTABLE IReference_1_tDF345447C0E2FF2E2B0D7EA5BD9B5F92E793AD10 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mC8972903AC24E6CFE2D0ABAFEA6FCA815E2828C7(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Media.Capture.StreamingCaptureMode>
struct NOVTABLE IReference_1_t64B3328BF6F77DE2CE9A0EE8B97A59A0B5291AC4 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mACE7B80857116354E05C8B3F24CF4D555A337DC1(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Security.Cryptography.BinaryStringEncoding>
struct NOVTABLE IReference_1_t267B03B31FDCEA065B31F3EA0D9723AF4A2FE743 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mCEFD7C8573F0EDB887FFE1C4E5892EAAAA0275D0(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Storage.CreationCollisionOption>
struct NOVTABLE IReference_1_tF7295EBC968A80454550BB2DFEBDE7FDA5F935F6 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mD022CF12AFA037E3A391C619D1DF5926221967A4(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Storage.FileAccessMode>
struct NOVTABLE IReference_1_tB37985294DE2468EB2EC7D40546C07FD1A71E934 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mC3AB7079E1F409743043896D95D63259268AE354(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Storage.Streams.InputStreamOptions>
struct NOVTABLE IReference_1_t4D805BBA32CE3FB48729C326E9DCD206E80E52DC : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m29DABAFAF45FE5B35150EB56DB1AC7608AC04108(uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.UI.Core.CoreDispatcherPriority>
struct NOVTABLE IReference_1_tE126FD34B55F1220FE2E89A99968D3A34361ED11 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m76D034B95E648EDCA29A3DD36B81AABCD432EBBF(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.UI.Xaml.Interop.TypeKind>
struct NOVTABLE IReference_1_tC5997DB9C48F0D04F8FD9B6E0E05E0D1AD700882 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m36783109B74EB29CB28AF73DD7E207957146F018(int32_t* comReturnValue) = 0;
};
#ifndef ATTRIBUTETARGETS_TA7256AD263010BF992D3949CE57A314716980FA7_H
#define ATTRIBUTETARGETS_TA7256AD263010BF992D3949CE57A314716980FA7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Metadata.AttributeTargets
struct  AttributeTargets_tA7256AD263010BF992D3949CE57A314716980FA7 
{
public:
	// System.UInt32 Windows.Foundation.Metadata.AttributeTargets::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AttributeTargets_tA7256AD263010BF992D3949CE57A314716980FA7, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTETARGETS_TA7256AD263010BF992D3949CE57A314716980FA7_H
#ifndef NOTIFYCOLLECTIONCHANGEDACTION_TB8FF1E0F6D9D1D23485E6B09988C291E3458BBC8_H
#define NOTIFYCOLLECTIONCHANGEDACTION_TB8FF1E0F6D9D1D23485E6B09988C291E3458BBC8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Xaml.Interop.NotifyCollectionChangedAction
struct  NotifyCollectionChangedAction_tB8FF1E0F6D9D1D23485E6B09988C291E3458BBC8 
{
public:
	// System.Int32 Windows.UI.Xaml.Interop.NotifyCollectionChangedAction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NotifyCollectionChangedAction_tB8FF1E0F6D9D1D23485E6B09988C291E3458BBC8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTIFYCOLLECTIONCHANGEDACTION_TB8FF1E0F6D9D1D23485E6B09988C291E3458BBC8_H
#ifndef TYPENAME_T17AF60463A5503D900B87745B0BF9C96F0F82EEC_H
#define TYPENAME_T17AF60463A5503D900B87745B0BF9C96F0F82EEC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Xaml.Interop.TypeName
struct  TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC 
{
public:
	// System.String Windows.UI.Xaml.Interop.TypeName::Name
	String_t* ___Name_0;
	// Windows.UI.Xaml.Interop.TypeKind Windows.UI.Xaml.Interop.TypeName::Kind
	int32_t ___Kind_1;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((&___Name_0), value);
	}

	inline static int32_t get_offset_of_Kind_1() { return static_cast<int32_t>(offsetof(TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC, ___Kind_1)); }
	inline int32_t get_Kind_1() const { return ___Kind_1; }
	inline int32_t* get_address_of_Kind_1() { return &___Kind_1; }
	inline void set_Kind_1(int32_t value)
	{
		___Kind_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Windows.UI.Xaml.Interop.TypeName
struct TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC_marshaled_pinvoke
{
	char* ___Name_0;
	int32_t ___Kind_1;
};
// Native definition for COM marshalling of Windows.UI.Xaml.Interop.TypeName
struct TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC_marshaled_com
{
	Il2CppChar* ___Name_0;
	int32_t ___Kind_1;
};
// Native definition for Windows Runtime marshalling of Windows.UI.Xaml.Interop.TypeName
struct TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC_marshaled_windows_runtime
{
	Il2CppHString ___Name_0;
	int32_t ___Kind_1;
};
#endif // TYPENAME_T17AF60463A5503D900B87745B0BF9C96F0F82EEC_H
// Windows.Foundation.IReference`1<System.Type>
struct NOVTABLE IReference_1_t9B1EA41F300EA5823D42EB8C305792D7F5261E97 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m437342D7C3C9C644A0628E947BD45979D2C6847C(Il2CppWindowsRuntimeTypeName* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Metadata.AttributeTargets>
struct NOVTABLE IReference_1_t14DAE467685CF0D26BDDDFEEF8C8793E49BE3256 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m0F953FE55F90100B2381188B132B5FAA7D5A4929(uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.UI.Xaml.Interop.NotifyCollectionChangedAction>
struct NOVTABLE IReference_1_tAA1B3E47098CC9B4C78CD90173CB5A066702EB6E : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m6D3C2F5C181F41C7DCBECB612D569254FF735264(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.UI.Xaml.Interop.TypeName>
struct NOVTABLE IReference_1_t05125DEBFACCF631533E1BB325E91CC8E587D7AD : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mAD21B0BAD0AA9FB92F7A686B1DEE50AB61A0B5A3(TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC_marshaled_windows_runtime* comReturnValue) = 0;
};
#ifndef TYPEDEVENTHANDLER_2_T92DE3BFDCE6B7440B94713B44A93FB9515C3550C_H
#define TYPEDEVENTHANDLER_2_T92DE3BFDCE6B7440B94713B44A93FB9515C3550C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.TypedEventHandler`2<System.Object,System.Object>
struct  TypedEventHandler_2_t92DE3BFDCE6B7440B94713B44A93FB9515C3550C  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// COM Callable Wrapper interface definition for Windows.Foundation.TypedEventHandler`2<System.Object,System.Object>
struct ITypedEventHandler_2_t92DE3BFDCE6B7440B94713B44A93FB9515C3550C_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(Il2CppIInspectable* ___sender0, Il2CppIInspectable* ___args1) = 0;
};

#endif // TYPEDEVENTHANDLER_2_T92DE3BFDCE6B7440B94713B44A93FB9515C3550C_H
// System.TimeSpan[]
struct TimeSpanU5BU5D_tCF326C038BD306190A013AE3C9F9B1A525054DD5  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  m_Items[1];

public:
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		m_Items[index] = value;
	}
};
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.UInt16[]
struct UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint16_t m_Items[1];

public:
	inline uint16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint16_t value)
	{
		m_Items[index] = value;
	}
};
// System.UInt32[]
struct UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint32_t m_Items[1];

public:
	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
// System.UInt64[]
struct UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint64_t m_Items[1];

public:
	inline uint64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint64_t value)
	{
		m_Items[index] = value;
	}
};
// Windows.Devices.Enumeration.DeviceClass[]
struct DeviceClassU5BU5D_t9253127C0B93148D277C01249FA613B2391A1175  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// Windows.Foundation.AsyncStatus[]
struct AsyncStatusU5BU5D_tF8E4B2AD53A393E5256AA8BA94B015A19F9348DA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// Windows.Foundation.DateTime[]
struct DateTimeU5BU5D_tF99CEBC490438246063FF10220535B915FD29D57  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) DateTime_t9D0F9E236B6200FF6413DD837230D25E285E7795  m_Items[1];

public:
	inline DateTime_t9D0F9E236B6200FF6413DD837230D25E285E7795  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DateTime_t9D0F9E236B6200FF6413DD837230D25E285E7795 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DateTime_t9D0F9E236B6200FF6413DD837230D25E285E7795  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline DateTime_t9D0F9E236B6200FF6413DD837230D25E285E7795  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DateTime_t9D0F9E236B6200FF6413DD837230D25E285E7795 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DateTime_t9D0F9E236B6200FF6413DD837230D25E285E7795  value)
	{
		m_Items[index] = value;
	}
};
// Windows.Foundation.EventRegistrationToken[]
struct EventRegistrationTokenU5BU5D_tF25AB9D4BC1002982ED1C496304061610F1FDA95  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) EventRegistrationToken_tB7331C6A2CA7A6A9AD497264E9E787B3B71126D4  m_Items[1];

public:
	inline EventRegistrationToken_tB7331C6A2CA7A6A9AD497264E9E787B3B71126D4  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline EventRegistrationToken_tB7331C6A2CA7A6A9AD497264E9E787B3B71126D4 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, EventRegistrationToken_tB7331C6A2CA7A6A9AD497264E9E787B3B71126D4  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline EventRegistrationToken_tB7331C6A2CA7A6A9AD497264E9E787B3B71126D4  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline EventRegistrationToken_tB7331C6A2CA7A6A9AD497264E9E787B3B71126D4 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, EventRegistrationToken_tB7331C6A2CA7A6A9AD497264E9E787B3B71126D4  value)
	{
		m_Items[index] = value;
	}
};
// Windows.Foundation.FoundationContract[]
struct FoundationContractU5BU5D_tEE9850C12D0EC6CEB499C6429CE62B4BFC1F41D9  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) FoundationContract_tA5129870FD2EAAE9518C2EA28B32757D4FD977E9  m_Items[1];

public:
	inline FoundationContract_tA5129870FD2EAAE9518C2EA28B32757D4FD977E9  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FoundationContract_tA5129870FD2EAAE9518C2EA28B32757D4FD977E9 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FoundationContract_tA5129870FD2EAAE9518C2EA28B32757D4FD977E9  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline FoundationContract_tA5129870FD2EAAE9518C2EA28B32757D4FD977E9  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FoundationContract_tA5129870FD2EAAE9518C2EA28B32757D4FD977E9 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FoundationContract_tA5129870FD2EAAE9518C2EA28B32757D4FD977E9  value)
	{
		m_Items[index] = value;
	}
};
// Windows.Foundation.HResult[]
struct HResultU5BU5D_tC4635E1BE9508BB0BE0D32C0E5D98385A6056D59  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) HResult_tD2916D1ECD3A4E474B4A639B8D27E510FF8421DB  m_Items[1];

public:
	inline HResult_tD2916D1ECD3A4E474B4A639B8D27E510FF8421DB  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline HResult_tD2916D1ECD3A4E474B4A639B8D27E510FF8421DB * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, HResult_tD2916D1ECD3A4E474B4A639B8D27E510FF8421DB  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline HResult_tD2916D1ECD3A4E474B4A639B8D27E510FF8421DB  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline HResult_tD2916D1ECD3A4E474B4A639B8D27E510FF8421DB * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, HResult_tD2916D1ECD3A4E474B4A639B8D27E510FF8421DB  value)
	{
		m_Items[index] = value;
	}
};
// Windows.Foundation.Metadata.AttributeTargets[]
struct AttributeTargetsU5BU5D_t43ADA39F08258A2862F2E29635B7D34629E256D9  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint32_t m_Items[1];

public:
	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
// Windows.Foundation.Metadata.CompositionType[]
struct CompositionTypeU5BU5D_t83C2DA060B9E5D3BB64AA654A7B096A5A3715822  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// Windows.Foundation.Metadata.DeprecationType[]
struct DeprecationTypeU5BU5D_t67021BA4FE5EB9288B9B7FC18AD855678A6C2A4C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// Windows.Foundation.Metadata.GCPressureAmount[]
struct GCPressureAmountU5BU5D_t66F1B443ABEBE924547FF95AD7801A9B29D6B2B2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// Windows.Foundation.Metadata.MarshalingType[]
struct MarshalingTypeU5BU5D_t8A314BCC76C5B93CC5C2B55D059D42081B966A4E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// Windows.Foundation.Metadata.ThreadingModel[]
struct ThreadingModelU5BU5D_t26305514D7BAF6D9FD89034D7C2149C346567A18  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// Windows.Foundation.Point[]
struct PointU5BU5D_tD91AB35E3284C9E9789C9BA78F4B2C58A2E4FF11  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC  m_Items[1];

public:
	inline Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC  value)
	{
		m_Items[index] = value;
	}
};
// Windows.Foundation.Point[]
struct PointU5BU5D_t87AC35D99B5520D1A23942325839CD3228778606  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Point_tEC1815EC53B414E5281C817051DA4F985DB9C8C1  m_Items[1];

public:
	inline Point_tEC1815EC53B414E5281C817051DA4F985DB9C8C1  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Point_tEC1815EC53B414E5281C817051DA4F985DB9C8C1 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Point_tEC1815EC53B414E5281C817051DA4F985DB9C8C1  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Point_tEC1815EC53B414E5281C817051DA4F985DB9C8C1  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Point_tEC1815EC53B414E5281C817051DA4F985DB9C8C1 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Point_tEC1815EC53B414E5281C817051DA4F985DB9C8C1  value)
	{
		m_Items[index] = value;
	}
};
// Windows.Foundation.PropertyType[]
struct PropertyTypeU5BU5D_tB7D44737771CD756341AB3D4255FA11E156C2EA5  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// Windows.Foundation.Rect[]
struct RectU5BU5D_tDAF406D13B5A5E854CE4CD12849F253B54D84AC7  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Rect_tC430FB498F3B42BBCD93E88C03BA3CBB77B60ACA  m_Items[1];

public:
	inline Rect_tC430FB498F3B42BBCD93E88C03BA3CBB77B60ACA  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Rect_tC430FB498F3B42BBCD93E88C03BA3CBB77B60ACA * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Rect_tC430FB498F3B42BBCD93E88C03BA3CBB77B60ACA  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Rect_tC430FB498F3B42BBCD93E88C03BA3CBB77B60ACA  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Rect_tC430FB498F3B42BBCD93E88C03BA3CBB77B60ACA * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Rect_tC430FB498F3B42BBCD93E88C03BA3CBB77B60ACA  value)
	{
		m_Items[index] = value;
	}
};
// Windows.Foundation.Rect[]
struct RectU5BU5D_t04A0BEA0B6C281BD9A695F537DC48BF7576C358F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0  m_Items[1];

public:
	inline Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0  value)
	{
		m_Items[index] = value;
	}
};
// Windows.Foundation.Size[]
struct SizeU5BU5D_t9B66FD0DE66BE54A0260714C9F6BBD896A4FDD0B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2  m_Items[1];

public:
	inline Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2  value)
	{
		m_Items[index] = value;
	}
};
// Windows.Foundation.Size[]
struct SizeU5BU5D_t039A7BC3968859A1AC03A46860F6108D053B9D58  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Size_t4766FF009097CE547F699B69250246058DA664D9  m_Items[1];

public:
	inline Size_t4766FF009097CE547F699B69250246058DA664D9  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Size_t4766FF009097CE547F699B69250246058DA664D9 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Size_t4766FF009097CE547F699B69250246058DA664D9  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Size_t4766FF009097CE547F699B69250246058DA664D9  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Size_t4766FF009097CE547F699B69250246058DA664D9 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Size_t4766FF009097CE547F699B69250246058DA664D9  value)
	{
		m_Items[index] = value;
	}
};
// Windows.Foundation.TimeSpan[]
struct TimeSpanU5BU5D_tACF30B716D863271CE7340AFE41B366570EF6A45  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TimeSpan_tD18885B289077804D4E82931E68E84181C072755  m_Items[1];

public:
	inline TimeSpan_tD18885B289077804D4E82931E68E84181C072755  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TimeSpan_tD18885B289077804D4E82931E68E84181C072755 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TimeSpan_tD18885B289077804D4E82931E68E84181C072755  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline TimeSpan_tD18885B289077804D4E82931E68E84181C072755  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TimeSpan_tD18885B289077804D4E82931E68E84181C072755 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TimeSpan_tD18885B289077804D4E82931E68E84181C072755  value)
	{
		m_Items[index] = value;
	}
};
// Windows.Foundation.UniversalApiContract[]
struct UniversalApiContractU5BU5D_t34EEF3C7CA08DBC70ACA767782DD83D7D711FF0F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) UniversalApiContract_t2909295C70CE09107C85CD360BE6888A4D1078D9  m_Items[1];

public:
	inline UniversalApiContract_t2909295C70CE09107C85CD360BE6888A4D1078D9  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UniversalApiContract_t2909295C70CE09107C85CD360BE6888A4D1078D9 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UniversalApiContract_t2909295C70CE09107C85CD360BE6888A4D1078D9  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UniversalApiContract_t2909295C70CE09107C85CD360BE6888A4D1078D9  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UniversalApiContract_t2909295C70CE09107C85CD360BE6888A4D1078D9 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UniversalApiContract_t2909295C70CE09107C85CD360BE6888A4D1078D9  value)
	{
		m_Items[index] = value;
	}
};
// Windows.Media.Capture.Frames.MediaFrameReaderStartStatus[]
struct MediaFrameReaderStartStatusU5BU5D_tAE64065940C158E2F5E8BF8AFCA4F3E090F0CCD9  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// Windows.Media.Capture.Frames.MediaFrameSourceKind[]
struct MediaFrameSourceKindU5BU5D_t9C80F73D6CC0709B210ED22BF4AA3EDB060DC03F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// Windows.Media.Capture.MediaCaptureMemoryPreference[]
struct MediaCaptureMemoryPreferenceU5BU5D_t356DD145E42CA2316302B9A4D2A5D5B96A914519  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// Windows.Media.Capture.MediaCategory[]
struct MediaCategoryU5BU5D_tC20168641109D36955171EFEFB68CCCB6531D0B5  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// Windows.Media.Capture.MediaStreamType[]
struct MediaStreamTypeU5BU5D_t08A28F62413F3FA1FB4157CA30382F7C42F42B8B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// Windows.Media.Capture.StreamingCaptureMode[]
struct StreamingCaptureModeU5BU5D_t5A76C953AECDF4D2F22E46371CB07EE3D37C07F7  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// Windows.Security.Cryptography.BinaryStringEncoding[]
struct BinaryStringEncodingU5BU5D_t30A95900A482A2FA531020698C985B80A37EAE62  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// Windows.Storage.CreationCollisionOption[]
struct CreationCollisionOptionU5BU5D_t0D1B5001E80C0B26F808CFE5B272BE51C1905BE1  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// Windows.Storage.FileAccessMode[]
struct FileAccessModeU5BU5D_tC5E82060AFA3700F7E68043B6139766320556543  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// Windows.Storage.Streams.InputStreamOptions[]
struct InputStreamOptionsU5BU5D_tF25121D9C712D26D027EEE9BB94F1AB90F419EFB  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint32_t m_Items[1];

public:
	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
// Windows.UI.Core.CoreDispatcherPriority[]
struct CoreDispatcherPriorityU5BU5D_tB8B23B5C47F24F734F9D134E0463D2E6DF7A64A1  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// Windows.UI.Xaml.Interop.NotifyCollectionChangedAction[]
struct NotifyCollectionChangedActionU5BU5D_t5F4C1744B10462A4B4FBCAB2CF3C4F239BF063C9  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// Windows.UI.Xaml.Interop.TypeKind[]
struct TypeKindU5BU5D_tAC43810CE90FB41E756A2FC391BB73927F74AD8C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// Windows.UI.Xaml.Interop.TypeName[]
struct TypeNameU5BU5D_t5639A6C63B43E5933AD3498000C56530312BF3D0  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC  m_Items[1];

public:
	inline TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC  value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};

extern "C" void TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC_marshal_windows_runtime(const TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC& unmarshaled, TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC_marshaled_windows_runtime& marshaled);
extern "C" void TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC_marshal_windows_runtime_back(const TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC_marshaled_windows_runtime& marshaled, TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC& unmarshaled);
extern "C" void TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC_marshal_windows_runtime_cleanup(TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC_marshaled_windows_runtime& marshaled);


// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m300CE4D04A068C209FD858101AC361C1B600B5AE (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method);
// System.DateTimeOffset System.DateTimeOffset::ToLocalTime(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  DateTimeOffset_ToLocalTime_m65354A4753A3DA468F1278591C9B07A85C36A1BE (DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 * __this, bool ___throwOnOverflow0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T[] Windows.Foundation.IReferenceArray`1<System.TimeSpan>::get_Value()
extern "C" IL2CPP_METHOD_ATTR TimeSpanU5BU5D_tCF326C038BD306190A013AE3C9F9B1A525054DD5* IReferenceArray_1_get_Value_m7093E45E08585F6C13E53C59A0B03291C6DC7777 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IReferenceArray_1_get_Value_m7093E45E08585F6C13E53C59A0B03291C6DC7777_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IReferenceArray_1_t7EF54C3688E8531DF06C82B2436F99DA53DB5547* ____ireferenceArray_1_t7EF54C3688E8531DF06C82B2436F99DA53DB5547 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReferenceArray_1_t7EF54C3688E8531DF06C82B2436F99DA53DB5547::IID, reinterpret_cast<void**>(&____ireferenceArray_1_t7EF54C3688E8531DF06C82B2436F99DA53DB5547));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValueArraySize = 0;
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * returnValue = NULL;
	hr = ____ireferenceArray_1_t7EF54C3688E8531DF06C82B2436F99DA53DB5547->IReferenceArray_1_get_Value_m7093E45E08585F6C13E53C59A0B03291C6DC7777(&returnValueArraySize, &returnValue);
	____ireferenceArray_1_t7EF54C3688E8531DF06C82B2436F99DA53DB5547->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	TimeSpanU5BU5D_tCF326C038BD306190A013AE3C9F9B1A525054DD5* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = reinterpret_cast<TimeSpanU5BU5D_tCF326C038BD306190A013AE3C9F9B1A525054DD5*>(SZArrayNew(TimeSpanU5BU5D_tCF326C038BD306190A013AE3C9F9B1A525054DD5_il2cpp_TypeInfo_var, static_cast<int32_t>(returnValueArraySize)));
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(returnValueArraySize)); i++)
		{
			(_returnValue_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (returnValue)[i]);
		}
	}

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T[] Windows.Foundation.IReferenceArray`1<System.Type>::get_Value()
extern "C" IL2CPP_METHOD_ATTR TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* IReferenceArray_1_get_Value_m085ABBDED729E7C8E332FDD90292AAAFB1267309 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IReferenceArray_1_get_Value_m085ABBDED729E7C8E332FDD90292AAAFB1267309_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IReferenceArray_1_tAF5C268A5AF981224627FF530FA49915B8755802* ____ireferenceArray_1_tAF5C268A5AF981224627FF530FA49915B8755802 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReferenceArray_1_tAF5C268A5AF981224627FF530FA49915B8755802::IID, reinterpret_cast<void**>(&____ireferenceArray_1_tAF5C268A5AF981224627FF530FA49915B8755802));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValueArraySize = 0;
	Il2CppWindowsRuntimeTypeName* returnValue = NULL;
	hr = ____ireferenceArray_1_tAF5C268A5AF981224627FF530FA49915B8755802->IReferenceArray_1_get_Value_m085ABBDED729E7C8E332FDD90292AAAFB1267309(&returnValueArraySize, &returnValue);
	____ireferenceArray_1_tAF5C268A5AF981224627FF530FA49915B8755802->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		if (_returnValue_unmarshaled == NULL)
		{
			_returnValue_unmarshaled = reinterpret_cast<TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*>(SZArrayNew(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var, static_cast<int32_t>(returnValueArraySize)));
		}
		il2cpp_array_size_t _arrayLength = (_returnValue_unmarshaled)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			Type_t * _returnValue_i__unmarshaled = NULL;
			_returnValue_i__unmarshaled = il2cpp_codegen_marshal_type_from_native((returnValue)[i]);
			(_returnValue_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _returnValue_i__unmarshaled);
		}
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		const il2cpp_array_size_t returnValue_CleanupLoopCount = static_cast<int32_t>(returnValueArraySize);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(returnValue_CleanupLoopCount); i++)
		{
			il2cpp_codegen_delete_native_type((returnValue)[i]);
		}
		il2cpp_codegen_marshal_free(returnValue);
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T[] Windows.Foundation.IReferenceArray`1<System.UInt16>::get_Value()
extern "C" IL2CPP_METHOD_ATTR UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* IReferenceArray_1_get_Value_mBAC0B46ABEDF697A378429EB77E407807AB26F21 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IReferenceArray_1_get_Value_mBAC0B46ABEDF697A378429EB77E407807AB26F21_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IReferenceArray_1_t725A45C78FCA946F89AE772534A7AAA55604FF9B* ____ireferenceArray_1_t725A45C78FCA946F89AE772534A7AAA55604FF9B = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReferenceArray_1_t725A45C78FCA946F89AE772534A7AAA55604FF9B::IID, reinterpret_cast<void**>(&____ireferenceArray_1_t725A45C78FCA946F89AE772534A7AAA55604FF9B));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValueArraySize = 0;
	uint16_t* returnValue = NULL;
	hr = ____ireferenceArray_1_t725A45C78FCA946F89AE772534A7AAA55604FF9B->IReferenceArray_1_get_Value_mBAC0B46ABEDF697A378429EB77E407807AB26F21(&returnValueArraySize, &returnValue);
	____ireferenceArray_1_t725A45C78FCA946F89AE772534A7AAA55604FF9B->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = reinterpret_cast<UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E*>(SZArrayNew(UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E_il2cpp_TypeInfo_var, static_cast<int32_t>(returnValueArraySize)));
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(returnValueArraySize)); i++)
		{
			(_returnValue_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (returnValue)[i]);
		}
	}

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T[] Windows.Foundation.IReferenceArray`1<System.UInt32>::get_Value()
extern "C" IL2CPP_METHOD_ATTR UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* IReferenceArray_1_get_Value_m785BFF40CC13903E93CBBD6EC8095825E04F11CC (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IReferenceArray_1_get_Value_m785BFF40CC13903E93CBBD6EC8095825E04F11CC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IReferenceArray_1_tC012955D8CB2F9A64D5A2063A2B6A140A75903B9* ____ireferenceArray_1_tC012955D8CB2F9A64D5A2063A2B6A140A75903B9 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReferenceArray_1_tC012955D8CB2F9A64D5A2063A2B6A140A75903B9::IID, reinterpret_cast<void**>(&____ireferenceArray_1_tC012955D8CB2F9A64D5A2063A2B6A140A75903B9));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValueArraySize = 0;
	uint32_t* returnValue = NULL;
	hr = ____ireferenceArray_1_tC012955D8CB2F9A64D5A2063A2B6A140A75903B9->IReferenceArray_1_get_Value_m785BFF40CC13903E93CBBD6EC8095825E04F11CC(&returnValueArraySize, &returnValue);
	____ireferenceArray_1_tC012955D8CB2F9A64D5A2063A2B6A140A75903B9->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = reinterpret_cast<UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB*>(SZArrayNew(UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB_il2cpp_TypeInfo_var, static_cast<int32_t>(returnValueArraySize)));
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(returnValueArraySize)); i++)
		{
			(_returnValue_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (returnValue)[i]);
		}
	}

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T[] Windows.Foundation.IReferenceArray`1<System.UInt64>::get_Value()
extern "C" IL2CPP_METHOD_ATTR UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4* IReferenceArray_1_get_Value_mE4FD605191B032F11696785B7633CBD930A088F9 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IReferenceArray_1_get_Value_mE4FD605191B032F11696785B7633CBD930A088F9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IReferenceArray_1_tEF979DD6169FE33B2B75D509C8155ADD0074DCF0* ____ireferenceArray_1_tEF979DD6169FE33B2B75D509C8155ADD0074DCF0 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReferenceArray_1_tEF979DD6169FE33B2B75D509C8155ADD0074DCF0::IID, reinterpret_cast<void**>(&____ireferenceArray_1_tEF979DD6169FE33B2B75D509C8155ADD0074DCF0));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValueArraySize = 0;
	uint64_t* returnValue = NULL;
	hr = ____ireferenceArray_1_tEF979DD6169FE33B2B75D509C8155ADD0074DCF0->IReferenceArray_1_get_Value_mE4FD605191B032F11696785B7633CBD930A088F9(&returnValueArraySize, &returnValue);
	____ireferenceArray_1_tEF979DD6169FE33B2B75D509C8155ADD0074DCF0->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = reinterpret_cast<UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4*>(SZArrayNew(UInt64U5BU5D_tA808FE881491284FF25AFDF5C4BC92A826031EF4_il2cpp_TypeInfo_var, static_cast<int32_t>(returnValueArraySize)));
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(returnValueArraySize)); i++)
		{
			(_returnValue_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (returnValue)[i]);
		}
	}

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T[] Windows.Foundation.IReferenceArray`1<Windows.Devices.Enumeration.DeviceClass>::get_Value()
extern "C" IL2CPP_METHOD_ATTR DeviceClassU5BU5D_t9253127C0B93148D277C01249FA613B2391A1175* IReferenceArray_1_get_Value_m7CC372AB83F644FD859EF303BBB532B57D1440FF (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IReferenceArray_1_get_Value_m7CC372AB83F644FD859EF303BBB532B57D1440FF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IReferenceArray_1_tFC31A71B5BBA73DD7AA46F41F04D7605D31C29D2* ____ireferenceArray_1_tFC31A71B5BBA73DD7AA46F41F04D7605D31C29D2 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReferenceArray_1_tFC31A71B5BBA73DD7AA46F41F04D7605D31C29D2::IID, reinterpret_cast<void**>(&____ireferenceArray_1_tFC31A71B5BBA73DD7AA46F41F04D7605D31C29D2));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValueArraySize = 0;
	int32_t* returnValue = NULL;
	hr = ____ireferenceArray_1_tFC31A71B5BBA73DD7AA46F41F04D7605D31C29D2->IReferenceArray_1_get_Value_m7CC372AB83F644FD859EF303BBB532B57D1440FF(&returnValueArraySize, &returnValue);
	____ireferenceArray_1_tFC31A71B5BBA73DD7AA46F41F04D7605D31C29D2->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	DeviceClassU5BU5D_t9253127C0B93148D277C01249FA613B2391A1175* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = reinterpret_cast<DeviceClassU5BU5D_t9253127C0B93148D277C01249FA613B2391A1175*>(SZArrayNew(DeviceClassU5BU5D_t9253127C0B93148D277C01249FA613B2391A1175_il2cpp_TypeInfo_var, static_cast<int32_t>(returnValueArraySize)));
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(returnValueArraySize)); i++)
		{
			(_returnValue_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (returnValue)[i]);
		}
	}

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T[] Windows.Foundation.IReferenceArray`1<Windows.Foundation.AsyncStatus>::get_Value()
extern "C" IL2CPP_METHOD_ATTR AsyncStatusU5BU5D_tF8E4B2AD53A393E5256AA8BA94B015A19F9348DA* IReferenceArray_1_get_Value_m33213D71EB5CE3DF4125CE6648984CA1523836AD (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IReferenceArray_1_get_Value_m33213D71EB5CE3DF4125CE6648984CA1523836AD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IReferenceArray_1_tA8A1CBD5A1BDA38904A897B395B91B84BB502F40* ____ireferenceArray_1_tA8A1CBD5A1BDA38904A897B395B91B84BB502F40 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReferenceArray_1_tA8A1CBD5A1BDA38904A897B395B91B84BB502F40::IID, reinterpret_cast<void**>(&____ireferenceArray_1_tA8A1CBD5A1BDA38904A897B395B91B84BB502F40));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValueArraySize = 0;
	int32_t* returnValue = NULL;
	hr = ____ireferenceArray_1_tA8A1CBD5A1BDA38904A897B395B91B84BB502F40->IReferenceArray_1_get_Value_m33213D71EB5CE3DF4125CE6648984CA1523836AD(&returnValueArraySize, &returnValue);
	____ireferenceArray_1_tA8A1CBD5A1BDA38904A897B395B91B84BB502F40->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	AsyncStatusU5BU5D_tF8E4B2AD53A393E5256AA8BA94B015A19F9348DA* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = reinterpret_cast<AsyncStatusU5BU5D_tF8E4B2AD53A393E5256AA8BA94B015A19F9348DA*>(SZArrayNew(AsyncStatusU5BU5D_tF8E4B2AD53A393E5256AA8BA94B015A19F9348DA_il2cpp_TypeInfo_var, static_cast<int32_t>(returnValueArraySize)));
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(returnValueArraySize)); i++)
		{
			(_returnValue_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (returnValue)[i]);
		}
	}

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T[] Windows.Foundation.IReferenceArray`1<Windows.Foundation.DateTime>::get_Value()
extern "C" IL2CPP_METHOD_ATTR DateTimeU5BU5D_tF99CEBC490438246063FF10220535B915FD29D57* IReferenceArray_1_get_Value_mE5D6C3BC759E9B142715D742BFE2F8CACE85C415 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IReferenceArray_1_get_Value_mE5D6C3BC759E9B142715D742BFE2F8CACE85C415_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IReferenceArray_1_t41F8C6C05907479A735CFF21290F78470922A752* ____ireferenceArray_1_t41F8C6C05907479A735CFF21290F78470922A752 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReferenceArray_1_t41F8C6C05907479A735CFF21290F78470922A752::IID, reinterpret_cast<void**>(&____ireferenceArray_1_t41F8C6C05907479A735CFF21290F78470922A752));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValueArraySize = 0;
	DateTime_t9D0F9E236B6200FF6413DD837230D25E285E7795 * returnValue = NULL;
	hr = ____ireferenceArray_1_t41F8C6C05907479A735CFF21290F78470922A752->IReferenceArray_1_get_Value_mE5D6C3BC759E9B142715D742BFE2F8CACE85C415(&returnValueArraySize, &returnValue);
	____ireferenceArray_1_t41F8C6C05907479A735CFF21290F78470922A752->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	DateTimeU5BU5D_tF99CEBC490438246063FF10220535B915FD29D57* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = reinterpret_cast<DateTimeU5BU5D_tF99CEBC490438246063FF10220535B915FD29D57*>(SZArrayNew(DateTimeU5BU5D_tF99CEBC490438246063FF10220535B915FD29D57_il2cpp_TypeInfo_var, static_cast<int32_t>(returnValueArraySize)));
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(returnValueArraySize)); i++)
		{
			(_returnValue_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (returnValue)[i]);
		}
	}

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T[] Windows.Foundation.IReferenceArray`1<Windows.Foundation.EventRegistrationToken>::get_Value()
extern "C" IL2CPP_METHOD_ATTR EventRegistrationTokenU5BU5D_tF25AB9D4BC1002982ED1C496304061610F1FDA95* IReferenceArray_1_get_Value_m20C74F35C90FAA3D64BB4152FC059D5FE6F9E832 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IReferenceArray_1_get_Value_m20C74F35C90FAA3D64BB4152FC059D5FE6F9E832_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IReferenceArray_1_t5C768D0366F9FA66E198DD456F8E09323A2C9643* ____ireferenceArray_1_t5C768D0366F9FA66E198DD456F8E09323A2C9643 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReferenceArray_1_t5C768D0366F9FA66E198DD456F8E09323A2C9643::IID, reinterpret_cast<void**>(&____ireferenceArray_1_t5C768D0366F9FA66E198DD456F8E09323A2C9643));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValueArraySize = 0;
	EventRegistrationToken_tB7331C6A2CA7A6A9AD497264E9E787B3B71126D4 * returnValue = NULL;
	hr = ____ireferenceArray_1_t5C768D0366F9FA66E198DD456F8E09323A2C9643->IReferenceArray_1_get_Value_m20C74F35C90FAA3D64BB4152FC059D5FE6F9E832(&returnValueArraySize, &returnValue);
	____ireferenceArray_1_t5C768D0366F9FA66E198DD456F8E09323A2C9643->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	EventRegistrationTokenU5BU5D_tF25AB9D4BC1002982ED1C496304061610F1FDA95* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = reinterpret_cast<EventRegistrationTokenU5BU5D_tF25AB9D4BC1002982ED1C496304061610F1FDA95*>(SZArrayNew(EventRegistrationTokenU5BU5D_tF25AB9D4BC1002982ED1C496304061610F1FDA95_il2cpp_TypeInfo_var, static_cast<int32_t>(returnValueArraySize)));
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(returnValueArraySize)); i++)
		{
			(_returnValue_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (returnValue)[i]);
		}
	}

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T[] Windows.Foundation.IReferenceArray`1<Windows.Foundation.FoundationContract>::get_Value()
extern "C" IL2CPP_METHOD_ATTR FoundationContractU5BU5D_tEE9850C12D0EC6CEB499C6429CE62B4BFC1F41D9* IReferenceArray_1_get_Value_m02AA6C3FD94B7ACACD859F421A11AE5E8B96CDD4 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IReferenceArray_1_get_Value_m02AA6C3FD94B7ACACD859F421A11AE5E8B96CDD4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IReferenceArray_1_tA033F5D0078A8586478BCEFB2835E551597E3F24* ____ireferenceArray_1_tA033F5D0078A8586478BCEFB2835E551597E3F24 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReferenceArray_1_tA033F5D0078A8586478BCEFB2835E551597E3F24::IID, reinterpret_cast<void**>(&____ireferenceArray_1_tA033F5D0078A8586478BCEFB2835E551597E3F24));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValueArraySize = 0;
	FoundationContract_tA5129870FD2EAAE9518C2EA28B32757D4FD977E9 * returnValue = NULL;
	hr = ____ireferenceArray_1_tA033F5D0078A8586478BCEFB2835E551597E3F24->IReferenceArray_1_get_Value_m02AA6C3FD94B7ACACD859F421A11AE5E8B96CDD4(&returnValueArraySize, &returnValue);
	____ireferenceArray_1_tA033F5D0078A8586478BCEFB2835E551597E3F24->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	FoundationContractU5BU5D_tEE9850C12D0EC6CEB499C6429CE62B4BFC1F41D9* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = reinterpret_cast<FoundationContractU5BU5D_tEE9850C12D0EC6CEB499C6429CE62B4BFC1F41D9*>(SZArrayNew(FoundationContractU5BU5D_tEE9850C12D0EC6CEB499C6429CE62B4BFC1F41D9_il2cpp_TypeInfo_var, static_cast<int32_t>(returnValueArraySize)));
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(returnValueArraySize)); i++)
		{
			(_returnValue_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (returnValue)[i]);
		}
	}

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T[] Windows.Foundation.IReferenceArray`1<Windows.Foundation.HResult>::get_Value()
extern "C" IL2CPP_METHOD_ATTR HResultU5BU5D_tC4635E1BE9508BB0BE0D32C0E5D98385A6056D59* IReferenceArray_1_get_Value_mEDA50A0061481D88E1CB0BDCEE694D6BB089D400 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IReferenceArray_1_get_Value_mEDA50A0061481D88E1CB0BDCEE694D6BB089D400_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IReferenceArray_1_t80F6D023450607FD02E9C8106C675D3006A8F0BD* ____ireferenceArray_1_t80F6D023450607FD02E9C8106C675D3006A8F0BD = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReferenceArray_1_t80F6D023450607FD02E9C8106C675D3006A8F0BD::IID, reinterpret_cast<void**>(&____ireferenceArray_1_t80F6D023450607FD02E9C8106C675D3006A8F0BD));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValueArraySize = 0;
	HResult_tD2916D1ECD3A4E474B4A639B8D27E510FF8421DB * returnValue = NULL;
	hr = ____ireferenceArray_1_t80F6D023450607FD02E9C8106C675D3006A8F0BD->IReferenceArray_1_get_Value_mEDA50A0061481D88E1CB0BDCEE694D6BB089D400(&returnValueArraySize, &returnValue);
	____ireferenceArray_1_t80F6D023450607FD02E9C8106C675D3006A8F0BD->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	HResultU5BU5D_tC4635E1BE9508BB0BE0D32C0E5D98385A6056D59* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = reinterpret_cast<HResultU5BU5D_tC4635E1BE9508BB0BE0D32C0E5D98385A6056D59*>(SZArrayNew(HResultU5BU5D_tC4635E1BE9508BB0BE0D32C0E5D98385A6056D59_il2cpp_TypeInfo_var, static_cast<int32_t>(returnValueArraySize)));
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(returnValueArraySize)); i++)
		{
			(_returnValue_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (returnValue)[i]);
		}
	}

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T[] Windows.Foundation.IReferenceArray`1<Windows.Foundation.Metadata.AttributeTargets>::get_Value()
extern "C" IL2CPP_METHOD_ATTR AttributeTargetsU5BU5D_t43ADA39F08258A2862F2E29635B7D34629E256D9* IReferenceArray_1_get_Value_mEB916F24F7D8E7399E2EDBBB95EC92F1E63E9AE2 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IReferenceArray_1_get_Value_mEB916F24F7D8E7399E2EDBBB95EC92F1E63E9AE2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IReferenceArray_1_t41F17E53DE5B27D4DBFA423FB67ABBEEAA32DE6C* ____ireferenceArray_1_t41F17E53DE5B27D4DBFA423FB67ABBEEAA32DE6C = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReferenceArray_1_t41F17E53DE5B27D4DBFA423FB67ABBEEAA32DE6C::IID, reinterpret_cast<void**>(&____ireferenceArray_1_t41F17E53DE5B27D4DBFA423FB67ABBEEAA32DE6C));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValueArraySize = 0;
	uint32_t* returnValue = NULL;
	hr = ____ireferenceArray_1_t41F17E53DE5B27D4DBFA423FB67ABBEEAA32DE6C->IReferenceArray_1_get_Value_mEB916F24F7D8E7399E2EDBBB95EC92F1E63E9AE2(&returnValueArraySize, &returnValue);
	____ireferenceArray_1_t41F17E53DE5B27D4DBFA423FB67ABBEEAA32DE6C->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	AttributeTargetsU5BU5D_t43ADA39F08258A2862F2E29635B7D34629E256D9* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = reinterpret_cast<AttributeTargetsU5BU5D_t43ADA39F08258A2862F2E29635B7D34629E256D9*>(SZArrayNew(AttributeTargetsU5BU5D_t43ADA39F08258A2862F2E29635B7D34629E256D9_il2cpp_TypeInfo_var, static_cast<int32_t>(returnValueArraySize)));
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(returnValueArraySize)); i++)
		{
			(_returnValue_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (returnValue)[i]);
		}
	}

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T[] Windows.Foundation.IReferenceArray`1<Windows.Foundation.Metadata.CompositionType>::get_Value()
extern "C" IL2CPP_METHOD_ATTR CompositionTypeU5BU5D_t83C2DA060B9E5D3BB64AA654A7B096A5A3715822* IReferenceArray_1_get_Value_m28C4AB47A0CDAF89B1595E405D9AC6B2B9F81704 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IReferenceArray_1_get_Value_m28C4AB47A0CDAF89B1595E405D9AC6B2B9F81704_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IReferenceArray_1_tCC9DD9CBD034E47A24115FAA87BA883C6ED4B967* ____ireferenceArray_1_tCC9DD9CBD034E47A24115FAA87BA883C6ED4B967 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReferenceArray_1_tCC9DD9CBD034E47A24115FAA87BA883C6ED4B967::IID, reinterpret_cast<void**>(&____ireferenceArray_1_tCC9DD9CBD034E47A24115FAA87BA883C6ED4B967));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValueArraySize = 0;
	int32_t* returnValue = NULL;
	hr = ____ireferenceArray_1_tCC9DD9CBD034E47A24115FAA87BA883C6ED4B967->IReferenceArray_1_get_Value_m28C4AB47A0CDAF89B1595E405D9AC6B2B9F81704(&returnValueArraySize, &returnValue);
	____ireferenceArray_1_tCC9DD9CBD034E47A24115FAA87BA883C6ED4B967->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	CompositionTypeU5BU5D_t83C2DA060B9E5D3BB64AA654A7B096A5A3715822* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = reinterpret_cast<CompositionTypeU5BU5D_t83C2DA060B9E5D3BB64AA654A7B096A5A3715822*>(SZArrayNew(CompositionTypeU5BU5D_t83C2DA060B9E5D3BB64AA654A7B096A5A3715822_il2cpp_TypeInfo_var, static_cast<int32_t>(returnValueArraySize)));
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(returnValueArraySize)); i++)
		{
			(_returnValue_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (returnValue)[i]);
		}
	}

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T[] Windows.Foundation.IReferenceArray`1<Windows.Foundation.Metadata.DeprecationType>::get_Value()
extern "C" IL2CPP_METHOD_ATTR DeprecationTypeU5BU5D_t67021BA4FE5EB9288B9B7FC18AD855678A6C2A4C* IReferenceArray_1_get_Value_m49B8372A76BA81B294037AC75941998664B4C508 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IReferenceArray_1_get_Value_m49B8372A76BA81B294037AC75941998664B4C508_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IReferenceArray_1_tD8A6E0024C6663CB878B1EBD3AF7C28F770030B8* ____ireferenceArray_1_tD8A6E0024C6663CB878B1EBD3AF7C28F770030B8 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReferenceArray_1_tD8A6E0024C6663CB878B1EBD3AF7C28F770030B8::IID, reinterpret_cast<void**>(&____ireferenceArray_1_tD8A6E0024C6663CB878B1EBD3AF7C28F770030B8));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValueArraySize = 0;
	int32_t* returnValue = NULL;
	hr = ____ireferenceArray_1_tD8A6E0024C6663CB878B1EBD3AF7C28F770030B8->IReferenceArray_1_get_Value_m49B8372A76BA81B294037AC75941998664B4C508(&returnValueArraySize, &returnValue);
	____ireferenceArray_1_tD8A6E0024C6663CB878B1EBD3AF7C28F770030B8->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	DeprecationTypeU5BU5D_t67021BA4FE5EB9288B9B7FC18AD855678A6C2A4C* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = reinterpret_cast<DeprecationTypeU5BU5D_t67021BA4FE5EB9288B9B7FC18AD855678A6C2A4C*>(SZArrayNew(DeprecationTypeU5BU5D_t67021BA4FE5EB9288B9B7FC18AD855678A6C2A4C_il2cpp_TypeInfo_var, static_cast<int32_t>(returnValueArraySize)));
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(returnValueArraySize)); i++)
		{
			(_returnValue_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (returnValue)[i]);
		}
	}

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T[] Windows.Foundation.IReferenceArray`1<Windows.Foundation.Metadata.GCPressureAmount>::get_Value()
extern "C" IL2CPP_METHOD_ATTR GCPressureAmountU5BU5D_t66F1B443ABEBE924547FF95AD7801A9B29D6B2B2* IReferenceArray_1_get_Value_mE7AD1A7FBC49F141EF82FA880579F4755AEBB226 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IReferenceArray_1_get_Value_mE7AD1A7FBC49F141EF82FA880579F4755AEBB226_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IReferenceArray_1_t7CFC7F4D3E0370BDD7AB617F73367332B56BAF92* ____ireferenceArray_1_t7CFC7F4D3E0370BDD7AB617F73367332B56BAF92 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReferenceArray_1_t7CFC7F4D3E0370BDD7AB617F73367332B56BAF92::IID, reinterpret_cast<void**>(&____ireferenceArray_1_t7CFC7F4D3E0370BDD7AB617F73367332B56BAF92));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValueArraySize = 0;
	int32_t* returnValue = NULL;
	hr = ____ireferenceArray_1_t7CFC7F4D3E0370BDD7AB617F73367332B56BAF92->IReferenceArray_1_get_Value_mE7AD1A7FBC49F141EF82FA880579F4755AEBB226(&returnValueArraySize, &returnValue);
	____ireferenceArray_1_t7CFC7F4D3E0370BDD7AB617F73367332B56BAF92->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	GCPressureAmountU5BU5D_t66F1B443ABEBE924547FF95AD7801A9B29D6B2B2* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = reinterpret_cast<GCPressureAmountU5BU5D_t66F1B443ABEBE924547FF95AD7801A9B29D6B2B2*>(SZArrayNew(GCPressureAmountU5BU5D_t66F1B443ABEBE924547FF95AD7801A9B29D6B2B2_il2cpp_TypeInfo_var, static_cast<int32_t>(returnValueArraySize)));
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(returnValueArraySize)); i++)
		{
			(_returnValue_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (returnValue)[i]);
		}
	}

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T[] Windows.Foundation.IReferenceArray`1<Windows.Foundation.Metadata.MarshalingType>::get_Value()
extern "C" IL2CPP_METHOD_ATTR MarshalingTypeU5BU5D_t8A314BCC76C5B93CC5C2B55D059D42081B966A4E* IReferenceArray_1_get_Value_m46001477E6E1E58EDE80E90D9AB5A2C8A2ECD913 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IReferenceArray_1_get_Value_m46001477E6E1E58EDE80E90D9AB5A2C8A2ECD913_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IReferenceArray_1_t7264BA58EA5B306F69F8C4C0CEF451F9D14F8250* ____ireferenceArray_1_t7264BA58EA5B306F69F8C4C0CEF451F9D14F8250 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReferenceArray_1_t7264BA58EA5B306F69F8C4C0CEF451F9D14F8250::IID, reinterpret_cast<void**>(&____ireferenceArray_1_t7264BA58EA5B306F69F8C4C0CEF451F9D14F8250));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValueArraySize = 0;
	int32_t* returnValue = NULL;
	hr = ____ireferenceArray_1_t7264BA58EA5B306F69F8C4C0CEF451F9D14F8250->IReferenceArray_1_get_Value_m46001477E6E1E58EDE80E90D9AB5A2C8A2ECD913(&returnValueArraySize, &returnValue);
	____ireferenceArray_1_t7264BA58EA5B306F69F8C4C0CEF451F9D14F8250->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	MarshalingTypeU5BU5D_t8A314BCC76C5B93CC5C2B55D059D42081B966A4E* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = reinterpret_cast<MarshalingTypeU5BU5D_t8A314BCC76C5B93CC5C2B55D059D42081B966A4E*>(SZArrayNew(MarshalingTypeU5BU5D_t8A314BCC76C5B93CC5C2B55D059D42081B966A4E_il2cpp_TypeInfo_var, static_cast<int32_t>(returnValueArraySize)));
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(returnValueArraySize)); i++)
		{
			(_returnValue_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (returnValue)[i]);
		}
	}

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T[] Windows.Foundation.IReferenceArray`1<Windows.Foundation.Metadata.ThreadingModel>::get_Value()
extern "C" IL2CPP_METHOD_ATTR ThreadingModelU5BU5D_t26305514D7BAF6D9FD89034D7C2149C346567A18* IReferenceArray_1_get_Value_m787B9BB10BFD8A74EA6D607A27E63A09DB61ACCD (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IReferenceArray_1_get_Value_m787B9BB10BFD8A74EA6D607A27E63A09DB61ACCD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IReferenceArray_1_t3FF147B5415D130E0ED488622E9B7F4DDEA07356* ____ireferenceArray_1_t3FF147B5415D130E0ED488622E9B7F4DDEA07356 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReferenceArray_1_t3FF147B5415D130E0ED488622E9B7F4DDEA07356::IID, reinterpret_cast<void**>(&____ireferenceArray_1_t3FF147B5415D130E0ED488622E9B7F4DDEA07356));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValueArraySize = 0;
	int32_t* returnValue = NULL;
	hr = ____ireferenceArray_1_t3FF147B5415D130E0ED488622E9B7F4DDEA07356->IReferenceArray_1_get_Value_m787B9BB10BFD8A74EA6D607A27E63A09DB61ACCD(&returnValueArraySize, &returnValue);
	____ireferenceArray_1_t3FF147B5415D130E0ED488622E9B7F4DDEA07356->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	ThreadingModelU5BU5D_t26305514D7BAF6D9FD89034D7C2149C346567A18* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = reinterpret_cast<ThreadingModelU5BU5D_t26305514D7BAF6D9FD89034D7C2149C346567A18*>(SZArrayNew(ThreadingModelU5BU5D_t26305514D7BAF6D9FD89034D7C2149C346567A18_il2cpp_TypeInfo_var, static_cast<int32_t>(returnValueArraySize)));
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(returnValueArraySize)); i++)
		{
			(_returnValue_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (returnValue)[i]);
		}
	}

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T[] Windows.Foundation.IReferenceArray`1<Windows.Foundation.Point>::get_Value()
extern "C" IL2CPP_METHOD_ATTR PointU5BU5D_tD91AB35E3284C9E9789C9BA78F4B2C58A2E4FF11* IReferenceArray_1_get_Value_m6AC14C7482B37ED0370189E5C0997F9F96BE949E (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IReferenceArray_1_get_Value_m6AC14C7482B37ED0370189E5C0997F9F96BE949E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IReferenceArray_1_t87171044C83C8EAA734BD71902C7F9B26BF33E9C* ____ireferenceArray_1_t87171044C83C8EAA734BD71902C7F9B26BF33E9C = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReferenceArray_1_t87171044C83C8EAA734BD71902C7F9B26BF33E9C::IID, reinterpret_cast<void**>(&____ireferenceArray_1_t87171044C83C8EAA734BD71902C7F9B26BF33E9C));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValueArraySize = 0;
	Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC * returnValue = NULL;
	hr = ____ireferenceArray_1_t87171044C83C8EAA734BD71902C7F9B26BF33E9C->IReferenceArray_1_get_Value_m6AC14C7482B37ED0370189E5C0997F9F96BE949E(&returnValueArraySize, &returnValue);
	____ireferenceArray_1_t87171044C83C8EAA734BD71902C7F9B26BF33E9C->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	PointU5BU5D_tD91AB35E3284C9E9789C9BA78F4B2C58A2E4FF11* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = reinterpret_cast<PointU5BU5D_tD91AB35E3284C9E9789C9BA78F4B2C58A2E4FF11*>(SZArrayNew(PointU5BU5D_tD91AB35E3284C9E9789C9BA78F4B2C58A2E4FF11_il2cpp_TypeInfo_var, static_cast<int32_t>(returnValueArraySize)));
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(returnValueArraySize)); i++)
		{
			(_returnValue_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (returnValue)[i]);
		}
	}

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T[] Windows.Foundation.IReferenceArray`1<Windows.Foundation.Point>::get_Value()
extern "C" IL2CPP_METHOD_ATTR PointU5BU5D_t87AC35D99B5520D1A23942325839CD3228778606* IReferenceArray_1_get_Value_m4102D696F91F0359B7C9EDBD5FF81265760B5ADD (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IReferenceArray_1_get_Value_m4102D696F91F0359B7C9EDBD5FF81265760B5ADD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IReferenceArray_1_t576A3D25E8FBF93726D60ACBFAD4920F9347F67D* ____ireferenceArray_1_t576A3D25E8FBF93726D60ACBFAD4920F9347F67D = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReferenceArray_1_t576A3D25E8FBF93726D60ACBFAD4920F9347F67D::IID, reinterpret_cast<void**>(&____ireferenceArray_1_t576A3D25E8FBF93726D60ACBFAD4920F9347F67D));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValueArraySize = 0;
	Point_tEC1815EC53B414E5281C817051DA4F985DB9C8C1 * returnValue = NULL;
	hr = ____ireferenceArray_1_t576A3D25E8FBF93726D60ACBFAD4920F9347F67D->IReferenceArray_1_get_Value_m4102D696F91F0359B7C9EDBD5FF81265760B5ADD(&returnValueArraySize, &returnValue);
	____ireferenceArray_1_t576A3D25E8FBF93726D60ACBFAD4920F9347F67D->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	PointU5BU5D_t87AC35D99B5520D1A23942325839CD3228778606* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = reinterpret_cast<PointU5BU5D_t87AC35D99B5520D1A23942325839CD3228778606*>(SZArrayNew(PointU5BU5D_t87AC35D99B5520D1A23942325839CD3228778606_il2cpp_TypeInfo_var, static_cast<int32_t>(returnValueArraySize)));
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(returnValueArraySize)); i++)
		{
			(_returnValue_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (returnValue)[i]);
		}
	}

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T[] Windows.Foundation.IReferenceArray`1<Windows.Foundation.PropertyType>::get_Value()
extern "C" IL2CPP_METHOD_ATTR PropertyTypeU5BU5D_tB7D44737771CD756341AB3D4255FA11E156C2EA5* IReferenceArray_1_get_Value_mC0BA372A9F194A48CED751C529B0DE35CAD24266 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IReferenceArray_1_get_Value_mC0BA372A9F194A48CED751C529B0DE35CAD24266_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IReferenceArray_1_t0F23DC397FF05663D41FEB21F0247B7DF7C07EDA* ____ireferenceArray_1_t0F23DC397FF05663D41FEB21F0247B7DF7C07EDA = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReferenceArray_1_t0F23DC397FF05663D41FEB21F0247B7DF7C07EDA::IID, reinterpret_cast<void**>(&____ireferenceArray_1_t0F23DC397FF05663D41FEB21F0247B7DF7C07EDA));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValueArraySize = 0;
	int32_t* returnValue = NULL;
	hr = ____ireferenceArray_1_t0F23DC397FF05663D41FEB21F0247B7DF7C07EDA->IReferenceArray_1_get_Value_mC0BA372A9F194A48CED751C529B0DE35CAD24266(&returnValueArraySize, &returnValue);
	____ireferenceArray_1_t0F23DC397FF05663D41FEB21F0247B7DF7C07EDA->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	PropertyTypeU5BU5D_tB7D44737771CD756341AB3D4255FA11E156C2EA5* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = reinterpret_cast<PropertyTypeU5BU5D_tB7D44737771CD756341AB3D4255FA11E156C2EA5*>(SZArrayNew(PropertyTypeU5BU5D_tB7D44737771CD756341AB3D4255FA11E156C2EA5_il2cpp_TypeInfo_var, static_cast<int32_t>(returnValueArraySize)));
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(returnValueArraySize)); i++)
		{
			(_returnValue_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (returnValue)[i]);
		}
	}

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T[] Windows.Foundation.IReferenceArray`1<Windows.Foundation.Rect>::get_Value()
extern "C" IL2CPP_METHOD_ATTR RectU5BU5D_tDAF406D13B5A5E854CE4CD12849F253B54D84AC7* IReferenceArray_1_get_Value_mE475E3AE33CD3812F6114F69789421F76AFA3C24 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IReferenceArray_1_get_Value_mE475E3AE33CD3812F6114F69789421F76AFA3C24_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IReferenceArray_1_t4C138010C41BC36E7AEF66D2074AF41E1D8DF4B6* ____ireferenceArray_1_t4C138010C41BC36E7AEF66D2074AF41E1D8DF4B6 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReferenceArray_1_t4C138010C41BC36E7AEF66D2074AF41E1D8DF4B6::IID, reinterpret_cast<void**>(&____ireferenceArray_1_t4C138010C41BC36E7AEF66D2074AF41E1D8DF4B6));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValueArraySize = 0;
	Rect_tC430FB498F3B42BBCD93E88C03BA3CBB77B60ACA * returnValue = NULL;
	hr = ____ireferenceArray_1_t4C138010C41BC36E7AEF66D2074AF41E1D8DF4B6->IReferenceArray_1_get_Value_mE475E3AE33CD3812F6114F69789421F76AFA3C24(&returnValueArraySize, &returnValue);
	____ireferenceArray_1_t4C138010C41BC36E7AEF66D2074AF41E1D8DF4B6->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RectU5BU5D_tDAF406D13B5A5E854CE4CD12849F253B54D84AC7* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = reinterpret_cast<RectU5BU5D_tDAF406D13B5A5E854CE4CD12849F253B54D84AC7*>(SZArrayNew(RectU5BU5D_tDAF406D13B5A5E854CE4CD12849F253B54D84AC7_il2cpp_TypeInfo_var, static_cast<int32_t>(returnValueArraySize)));
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(returnValueArraySize)); i++)
		{
			(_returnValue_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (returnValue)[i]);
		}
	}

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T[] Windows.Foundation.IReferenceArray`1<Windows.Foundation.Rect>::get_Value()
extern "C" IL2CPP_METHOD_ATTR RectU5BU5D_t04A0BEA0B6C281BD9A695F537DC48BF7576C358F* IReferenceArray_1_get_Value_m9540024C04D2EB30B44D4409B483280C7CDF9028 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IReferenceArray_1_get_Value_m9540024C04D2EB30B44D4409B483280C7CDF9028_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IReferenceArray_1_t100A0DBC5BDC953A0663CD612A7BC41D641A895A* ____ireferenceArray_1_t100A0DBC5BDC953A0663CD612A7BC41D641A895A = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReferenceArray_1_t100A0DBC5BDC953A0663CD612A7BC41D641A895A::IID, reinterpret_cast<void**>(&____ireferenceArray_1_t100A0DBC5BDC953A0663CD612A7BC41D641A895A));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValueArraySize = 0;
	Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * returnValue = NULL;
	hr = ____ireferenceArray_1_t100A0DBC5BDC953A0663CD612A7BC41D641A895A->IReferenceArray_1_get_Value_m9540024C04D2EB30B44D4409B483280C7CDF9028(&returnValueArraySize, &returnValue);
	____ireferenceArray_1_t100A0DBC5BDC953A0663CD612A7BC41D641A895A->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RectU5BU5D_t04A0BEA0B6C281BD9A695F537DC48BF7576C358F* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = reinterpret_cast<RectU5BU5D_t04A0BEA0B6C281BD9A695F537DC48BF7576C358F*>(SZArrayNew(RectU5BU5D_t04A0BEA0B6C281BD9A695F537DC48BF7576C358F_il2cpp_TypeInfo_var, static_cast<int32_t>(returnValueArraySize)));
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(returnValueArraySize)); i++)
		{
			(_returnValue_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (returnValue)[i]);
		}
	}

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T[] Windows.Foundation.IReferenceArray`1<Windows.Foundation.Size>::get_Value()
extern "C" IL2CPP_METHOD_ATTR SizeU5BU5D_t9B66FD0DE66BE54A0260714C9F6BBD896A4FDD0B* IReferenceArray_1_get_Value_m867002E2F2405D31B22108F25AF10273E1D3FA78 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IReferenceArray_1_get_Value_m867002E2F2405D31B22108F25AF10273E1D3FA78_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IReferenceArray_1_t12589EAA8DE026A1833A6DF713F583481C5D224E* ____ireferenceArray_1_t12589EAA8DE026A1833A6DF713F583481C5D224E = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReferenceArray_1_t12589EAA8DE026A1833A6DF713F583481C5D224E::IID, reinterpret_cast<void**>(&____ireferenceArray_1_t12589EAA8DE026A1833A6DF713F583481C5D224E));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValueArraySize = 0;
	Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 * returnValue = NULL;
	hr = ____ireferenceArray_1_t12589EAA8DE026A1833A6DF713F583481C5D224E->IReferenceArray_1_get_Value_m867002E2F2405D31B22108F25AF10273E1D3FA78(&returnValueArraySize, &returnValue);
	____ireferenceArray_1_t12589EAA8DE026A1833A6DF713F583481C5D224E->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	SizeU5BU5D_t9B66FD0DE66BE54A0260714C9F6BBD896A4FDD0B* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = reinterpret_cast<SizeU5BU5D_t9B66FD0DE66BE54A0260714C9F6BBD896A4FDD0B*>(SZArrayNew(SizeU5BU5D_t9B66FD0DE66BE54A0260714C9F6BBD896A4FDD0B_il2cpp_TypeInfo_var, static_cast<int32_t>(returnValueArraySize)));
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(returnValueArraySize)); i++)
		{
			(_returnValue_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (returnValue)[i]);
		}
	}

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T[] Windows.Foundation.IReferenceArray`1<Windows.Foundation.Size>::get_Value()
extern "C" IL2CPP_METHOD_ATTR SizeU5BU5D_t039A7BC3968859A1AC03A46860F6108D053B9D58* IReferenceArray_1_get_Value_m2B97D289C69089CC6BF1273CADF4DE887218FD48 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IReferenceArray_1_get_Value_m2B97D289C69089CC6BF1273CADF4DE887218FD48_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IReferenceArray_1_tD74E2E936AB7BDF0ACFB6341BE1109F1A2EEE665* ____ireferenceArray_1_tD74E2E936AB7BDF0ACFB6341BE1109F1A2EEE665 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReferenceArray_1_tD74E2E936AB7BDF0ACFB6341BE1109F1A2EEE665::IID, reinterpret_cast<void**>(&____ireferenceArray_1_tD74E2E936AB7BDF0ACFB6341BE1109F1A2EEE665));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValueArraySize = 0;
	Size_t4766FF009097CE547F699B69250246058DA664D9 * returnValue = NULL;
	hr = ____ireferenceArray_1_tD74E2E936AB7BDF0ACFB6341BE1109F1A2EEE665->IReferenceArray_1_get_Value_m2B97D289C69089CC6BF1273CADF4DE887218FD48(&returnValueArraySize, &returnValue);
	____ireferenceArray_1_tD74E2E936AB7BDF0ACFB6341BE1109F1A2EEE665->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	SizeU5BU5D_t039A7BC3968859A1AC03A46860F6108D053B9D58* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = reinterpret_cast<SizeU5BU5D_t039A7BC3968859A1AC03A46860F6108D053B9D58*>(SZArrayNew(SizeU5BU5D_t039A7BC3968859A1AC03A46860F6108D053B9D58_il2cpp_TypeInfo_var, static_cast<int32_t>(returnValueArraySize)));
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(returnValueArraySize)); i++)
		{
			(_returnValue_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (returnValue)[i]);
		}
	}

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T[] Windows.Foundation.IReferenceArray`1<Windows.Foundation.TimeSpan>::get_Value()
extern "C" IL2CPP_METHOD_ATTR TimeSpanU5BU5D_tACF30B716D863271CE7340AFE41B366570EF6A45* IReferenceArray_1_get_Value_m581DE5A9FC958F8FE701FCE4920AF9E59CA96880 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IReferenceArray_1_get_Value_m581DE5A9FC958F8FE701FCE4920AF9E59CA96880_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IReferenceArray_1_tB25F643990D2B36B5464777E7E94763047EEE6E5* ____ireferenceArray_1_tB25F643990D2B36B5464777E7E94763047EEE6E5 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReferenceArray_1_tB25F643990D2B36B5464777E7E94763047EEE6E5::IID, reinterpret_cast<void**>(&____ireferenceArray_1_tB25F643990D2B36B5464777E7E94763047EEE6E5));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValueArraySize = 0;
	TimeSpan_tD18885B289077804D4E82931E68E84181C072755 * returnValue = NULL;
	hr = ____ireferenceArray_1_tB25F643990D2B36B5464777E7E94763047EEE6E5->IReferenceArray_1_get_Value_m581DE5A9FC958F8FE701FCE4920AF9E59CA96880(&returnValueArraySize, &returnValue);
	____ireferenceArray_1_tB25F643990D2B36B5464777E7E94763047EEE6E5->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	TimeSpanU5BU5D_tACF30B716D863271CE7340AFE41B366570EF6A45* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = reinterpret_cast<TimeSpanU5BU5D_tACF30B716D863271CE7340AFE41B366570EF6A45*>(SZArrayNew(TimeSpanU5BU5D_tACF30B716D863271CE7340AFE41B366570EF6A45_il2cpp_TypeInfo_var, static_cast<int32_t>(returnValueArraySize)));
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(returnValueArraySize)); i++)
		{
			(_returnValue_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (returnValue)[i]);
		}
	}

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T[] Windows.Foundation.IReferenceArray`1<Windows.Foundation.UniversalApiContract>::get_Value()
extern "C" IL2CPP_METHOD_ATTR UniversalApiContractU5BU5D_t34EEF3C7CA08DBC70ACA767782DD83D7D711FF0F* IReferenceArray_1_get_Value_mD1339B6B58E9DF684344F54CD65DC8B3849F828E (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IReferenceArray_1_get_Value_mD1339B6B58E9DF684344F54CD65DC8B3849F828E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IReferenceArray_1_tE504941DE81CB8573863162040D1A2E829451719* ____ireferenceArray_1_tE504941DE81CB8573863162040D1A2E829451719 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReferenceArray_1_tE504941DE81CB8573863162040D1A2E829451719::IID, reinterpret_cast<void**>(&____ireferenceArray_1_tE504941DE81CB8573863162040D1A2E829451719));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValueArraySize = 0;
	UniversalApiContract_t2909295C70CE09107C85CD360BE6888A4D1078D9 * returnValue = NULL;
	hr = ____ireferenceArray_1_tE504941DE81CB8573863162040D1A2E829451719->IReferenceArray_1_get_Value_mD1339B6B58E9DF684344F54CD65DC8B3849F828E(&returnValueArraySize, &returnValue);
	____ireferenceArray_1_tE504941DE81CB8573863162040D1A2E829451719->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	UniversalApiContractU5BU5D_t34EEF3C7CA08DBC70ACA767782DD83D7D711FF0F* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = reinterpret_cast<UniversalApiContractU5BU5D_t34EEF3C7CA08DBC70ACA767782DD83D7D711FF0F*>(SZArrayNew(UniversalApiContractU5BU5D_t34EEF3C7CA08DBC70ACA767782DD83D7D711FF0F_il2cpp_TypeInfo_var, static_cast<int32_t>(returnValueArraySize)));
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(returnValueArraySize)); i++)
		{
			(_returnValue_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (returnValue)[i]);
		}
	}

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T[] Windows.Foundation.IReferenceArray`1<Windows.Media.Capture.Frames.MediaFrameReaderStartStatus>::get_Value()
extern "C" IL2CPP_METHOD_ATTR MediaFrameReaderStartStatusU5BU5D_tAE64065940C158E2F5E8BF8AFCA4F3E090F0CCD9* IReferenceArray_1_get_Value_mD1151BCE712889E2BBCE8EA4B761BB5EE9F092E7 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IReferenceArray_1_get_Value_mD1151BCE712889E2BBCE8EA4B761BB5EE9F092E7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IReferenceArray_1_tFF16CEE3F9BA4894A0DEA773AE9D8D470A44942D* ____ireferenceArray_1_tFF16CEE3F9BA4894A0DEA773AE9D8D470A44942D = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReferenceArray_1_tFF16CEE3F9BA4894A0DEA773AE9D8D470A44942D::IID, reinterpret_cast<void**>(&____ireferenceArray_1_tFF16CEE3F9BA4894A0DEA773AE9D8D470A44942D));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValueArraySize = 0;
	int32_t* returnValue = NULL;
	hr = ____ireferenceArray_1_tFF16CEE3F9BA4894A0DEA773AE9D8D470A44942D->IReferenceArray_1_get_Value_mD1151BCE712889E2BBCE8EA4B761BB5EE9F092E7(&returnValueArraySize, &returnValue);
	____ireferenceArray_1_tFF16CEE3F9BA4894A0DEA773AE9D8D470A44942D->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	MediaFrameReaderStartStatusU5BU5D_tAE64065940C158E2F5E8BF8AFCA4F3E090F0CCD9* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = reinterpret_cast<MediaFrameReaderStartStatusU5BU5D_tAE64065940C158E2F5E8BF8AFCA4F3E090F0CCD9*>(SZArrayNew(MediaFrameReaderStartStatusU5BU5D_tAE64065940C158E2F5E8BF8AFCA4F3E090F0CCD9_il2cpp_TypeInfo_var, static_cast<int32_t>(returnValueArraySize)));
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(returnValueArraySize)); i++)
		{
			(_returnValue_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (returnValue)[i]);
		}
	}

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T[] Windows.Foundation.IReferenceArray`1<Windows.Media.Capture.Frames.MediaFrameSourceKind>::get_Value()
extern "C" IL2CPP_METHOD_ATTR MediaFrameSourceKindU5BU5D_t9C80F73D6CC0709B210ED22BF4AA3EDB060DC03F* IReferenceArray_1_get_Value_m65FCE22C1450C0D6919AF23A331230228CA911FE (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IReferenceArray_1_get_Value_m65FCE22C1450C0D6919AF23A331230228CA911FE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IReferenceArray_1_t7178D28104ACCA1C2AB427E260D2F7777E37D6D0* ____ireferenceArray_1_t7178D28104ACCA1C2AB427E260D2F7777E37D6D0 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReferenceArray_1_t7178D28104ACCA1C2AB427E260D2F7777E37D6D0::IID, reinterpret_cast<void**>(&____ireferenceArray_1_t7178D28104ACCA1C2AB427E260D2F7777E37D6D0));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValueArraySize = 0;
	int32_t* returnValue = NULL;
	hr = ____ireferenceArray_1_t7178D28104ACCA1C2AB427E260D2F7777E37D6D0->IReferenceArray_1_get_Value_m65FCE22C1450C0D6919AF23A331230228CA911FE(&returnValueArraySize, &returnValue);
	____ireferenceArray_1_t7178D28104ACCA1C2AB427E260D2F7777E37D6D0->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	MediaFrameSourceKindU5BU5D_t9C80F73D6CC0709B210ED22BF4AA3EDB060DC03F* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = reinterpret_cast<MediaFrameSourceKindU5BU5D_t9C80F73D6CC0709B210ED22BF4AA3EDB060DC03F*>(SZArrayNew(MediaFrameSourceKindU5BU5D_t9C80F73D6CC0709B210ED22BF4AA3EDB060DC03F_il2cpp_TypeInfo_var, static_cast<int32_t>(returnValueArraySize)));
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(returnValueArraySize)); i++)
		{
			(_returnValue_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (returnValue)[i]);
		}
	}

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T[] Windows.Foundation.IReferenceArray`1<Windows.Media.Capture.MediaCaptureMemoryPreference>::get_Value()
extern "C" IL2CPP_METHOD_ATTR MediaCaptureMemoryPreferenceU5BU5D_t356DD145E42CA2316302B9A4D2A5D5B96A914519* IReferenceArray_1_get_Value_m7F097E8E5439D317018F7A14B395A67546098351 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IReferenceArray_1_get_Value_m7F097E8E5439D317018F7A14B395A67546098351_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IReferenceArray_1_tDF4F0F8B28ABEB9D862015174145D3D705430616* ____ireferenceArray_1_tDF4F0F8B28ABEB9D862015174145D3D705430616 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReferenceArray_1_tDF4F0F8B28ABEB9D862015174145D3D705430616::IID, reinterpret_cast<void**>(&____ireferenceArray_1_tDF4F0F8B28ABEB9D862015174145D3D705430616));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValueArraySize = 0;
	int32_t* returnValue = NULL;
	hr = ____ireferenceArray_1_tDF4F0F8B28ABEB9D862015174145D3D705430616->IReferenceArray_1_get_Value_m7F097E8E5439D317018F7A14B395A67546098351(&returnValueArraySize, &returnValue);
	____ireferenceArray_1_tDF4F0F8B28ABEB9D862015174145D3D705430616->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	MediaCaptureMemoryPreferenceU5BU5D_t356DD145E42CA2316302B9A4D2A5D5B96A914519* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = reinterpret_cast<MediaCaptureMemoryPreferenceU5BU5D_t356DD145E42CA2316302B9A4D2A5D5B96A914519*>(SZArrayNew(MediaCaptureMemoryPreferenceU5BU5D_t356DD145E42CA2316302B9A4D2A5D5B96A914519_il2cpp_TypeInfo_var, static_cast<int32_t>(returnValueArraySize)));
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(returnValueArraySize)); i++)
		{
			(_returnValue_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (returnValue)[i]);
		}
	}

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T[] Windows.Foundation.IReferenceArray`1<Windows.Media.Capture.MediaCategory>::get_Value()
extern "C" IL2CPP_METHOD_ATTR MediaCategoryU5BU5D_tC20168641109D36955171EFEFB68CCCB6531D0B5* IReferenceArray_1_get_Value_m483946733B7CFF62C16F3D029B59E23BDD2D59B3 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IReferenceArray_1_get_Value_m483946733B7CFF62C16F3D029B59E23BDD2D59B3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IReferenceArray_1_t1B1FDAEE317DA6F55559B7E31F92625D270B19A3* ____ireferenceArray_1_t1B1FDAEE317DA6F55559B7E31F92625D270B19A3 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReferenceArray_1_t1B1FDAEE317DA6F55559B7E31F92625D270B19A3::IID, reinterpret_cast<void**>(&____ireferenceArray_1_t1B1FDAEE317DA6F55559B7E31F92625D270B19A3));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValueArraySize = 0;
	int32_t* returnValue = NULL;
	hr = ____ireferenceArray_1_t1B1FDAEE317DA6F55559B7E31F92625D270B19A3->IReferenceArray_1_get_Value_m483946733B7CFF62C16F3D029B59E23BDD2D59B3(&returnValueArraySize, &returnValue);
	____ireferenceArray_1_t1B1FDAEE317DA6F55559B7E31F92625D270B19A3->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	MediaCategoryU5BU5D_tC20168641109D36955171EFEFB68CCCB6531D0B5* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = reinterpret_cast<MediaCategoryU5BU5D_tC20168641109D36955171EFEFB68CCCB6531D0B5*>(SZArrayNew(MediaCategoryU5BU5D_tC20168641109D36955171EFEFB68CCCB6531D0B5_il2cpp_TypeInfo_var, static_cast<int32_t>(returnValueArraySize)));
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(returnValueArraySize)); i++)
		{
			(_returnValue_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (returnValue)[i]);
		}
	}

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T[] Windows.Foundation.IReferenceArray`1<Windows.Media.Capture.MediaStreamType>::get_Value()
extern "C" IL2CPP_METHOD_ATTR MediaStreamTypeU5BU5D_t08A28F62413F3FA1FB4157CA30382F7C42F42B8B* IReferenceArray_1_get_Value_mEAB625C48576A1804F8F17F080600BCE1887C2F8 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IReferenceArray_1_get_Value_mEAB625C48576A1804F8F17F080600BCE1887C2F8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IReferenceArray_1_t294B8F556D58B904BD0F5024B18A59AB5975A9E9* ____ireferenceArray_1_t294B8F556D58B904BD0F5024B18A59AB5975A9E9 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReferenceArray_1_t294B8F556D58B904BD0F5024B18A59AB5975A9E9::IID, reinterpret_cast<void**>(&____ireferenceArray_1_t294B8F556D58B904BD0F5024B18A59AB5975A9E9));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValueArraySize = 0;
	int32_t* returnValue = NULL;
	hr = ____ireferenceArray_1_t294B8F556D58B904BD0F5024B18A59AB5975A9E9->IReferenceArray_1_get_Value_mEAB625C48576A1804F8F17F080600BCE1887C2F8(&returnValueArraySize, &returnValue);
	____ireferenceArray_1_t294B8F556D58B904BD0F5024B18A59AB5975A9E9->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	MediaStreamTypeU5BU5D_t08A28F62413F3FA1FB4157CA30382F7C42F42B8B* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = reinterpret_cast<MediaStreamTypeU5BU5D_t08A28F62413F3FA1FB4157CA30382F7C42F42B8B*>(SZArrayNew(MediaStreamTypeU5BU5D_t08A28F62413F3FA1FB4157CA30382F7C42F42B8B_il2cpp_TypeInfo_var, static_cast<int32_t>(returnValueArraySize)));
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(returnValueArraySize)); i++)
		{
			(_returnValue_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (returnValue)[i]);
		}
	}

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T[] Windows.Foundation.IReferenceArray`1<Windows.Media.Capture.StreamingCaptureMode>::get_Value()
extern "C" IL2CPP_METHOD_ATTR StreamingCaptureModeU5BU5D_t5A76C953AECDF4D2F22E46371CB07EE3D37C07F7* IReferenceArray_1_get_Value_m6D0C76D9F2E8F95BBBEE8EF363C62EDB4C65E28C (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IReferenceArray_1_get_Value_m6D0C76D9F2E8F95BBBEE8EF363C62EDB4C65E28C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IReferenceArray_1_t4DE1F6AFD85772F7939358A784728EA3728B2BEA* ____ireferenceArray_1_t4DE1F6AFD85772F7939358A784728EA3728B2BEA = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReferenceArray_1_t4DE1F6AFD85772F7939358A784728EA3728B2BEA::IID, reinterpret_cast<void**>(&____ireferenceArray_1_t4DE1F6AFD85772F7939358A784728EA3728B2BEA));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValueArraySize = 0;
	int32_t* returnValue = NULL;
	hr = ____ireferenceArray_1_t4DE1F6AFD85772F7939358A784728EA3728B2BEA->IReferenceArray_1_get_Value_m6D0C76D9F2E8F95BBBEE8EF363C62EDB4C65E28C(&returnValueArraySize, &returnValue);
	____ireferenceArray_1_t4DE1F6AFD85772F7939358A784728EA3728B2BEA->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	StreamingCaptureModeU5BU5D_t5A76C953AECDF4D2F22E46371CB07EE3D37C07F7* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = reinterpret_cast<StreamingCaptureModeU5BU5D_t5A76C953AECDF4D2F22E46371CB07EE3D37C07F7*>(SZArrayNew(StreamingCaptureModeU5BU5D_t5A76C953AECDF4D2F22E46371CB07EE3D37C07F7_il2cpp_TypeInfo_var, static_cast<int32_t>(returnValueArraySize)));
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(returnValueArraySize)); i++)
		{
			(_returnValue_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (returnValue)[i]);
		}
	}

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T[] Windows.Foundation.IReferenceArray`1<Windows.Security.Cryptography.BinaryStringEncoding>::get_Value()
extern "C" IL2CPP_METHOD_ATTR BinaryStringEncodingU5BU5D_t30A95900A482A2FA531020698C985B80A37EAE62* IReferenceArray_1_get_Value_m6D753B0D48172CA0E571EB4D3DD03378F8FEC0F3 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IReferenceArray_1_get_Value_m6D753B0D48172CA0E571EB4D3DD03378F8FEC0F3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IReferenceArray_1_t98EC6731CECDD001D441FE00A245DFE4EE02FE50* ____ireferenceArray_1_t98EC6731CECDD001D441FE00A245DFE4EE02FE50 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReferenceArray_1_t98EC6731CECDD001D441FE00A245DFE4EE02FE50::IID, reinterpret_cast<void**>(&____ireferenceArray_1_t98EC6731CECDD001D441FE00A245DFE4EE02FE50));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValueArraySize = 0;
	int32_t* returnValue = NULL;
	hr = ____ireferenceArray_1_t98EC6731CECDD001D441FE00A245DFE4EE02FE50->IReferenceArray_1_get_Value_m6D753B0D48172CA0E571EB4D3DD03378F8FEC0F3(&returnValueArraySize, &returnValue);
	____ireferenceArray_1_t98EC6731CECDD001D441FE00A245DFE4EE02FE50->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	BinaryStringEncodingU5BU5D_t30A95900A482A2FA531020698C985B80A37EAE62* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = reinterpret_cast<BinaryStringEncodingU5BU5D_t30A95900A482A2FA531020698C985B80A37EAE62*>(SZArrayNew(BinaryStringEncodingU5BU5D_t30A95900A482A2FA531020698C985B80A37EAE62_il2cpp_TypeInfo_var, static_cast<int32_t>(returnValueArraySize)));
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(returnValueArraySize)); i++)
		{
			(_returnValue_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (returnValue)[i]);
		}
	}

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T[] Windows.Foundation.IReferenceArray`1<Windows.Storage.CreationCollisionOption>::get_Value()
extern "C" IL2CPP_METHOD_ATTR CreationCollisionOptionU5BU5D_t0D1B5001E80C0B26F808CFE5B272BE51C1905BE1* IReferenceArray_1_get_Value_mFE585564D928DA773C1830812FD3D3D57DB811C5 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IReferenceArray_1_get_Value_mFE585564D928DA773C1830812FD3D3D57DB811C5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IReferenceArray_1_tADC931797D6D8245FA6B848E09AA7854D722D977* ____ireferenceArray_1_tADC931797D6D8245FA6B848E09AA7854D722D977 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReferenceArray_1_tADC931797D6D8245FA6B848E09AA7854D722D977::IID, reinterpret_cast<void**>(&____ireferenceArray_1_tADC931797D6D8245FA6B848E09AA7854D722D977));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValueArraySize = 0;
	int32_t* returnValue = NULL;
	hr = ____ireferenceArray_1_tADC931797D6D8245FA6B848E09AA7854D722D977->IReferenceArray_1_get_Value_mFE585564D928DA773C1830812FD3D3D57DB811C5(&returnValueArraySize, &returnValue);
	____ireferenceArray_1_tADC931797D6D8245FA6B848E09AA7854D722D977->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	CreationCollisionOptionU5BU5D_t0D1B5001E80C0B26F808CFE5B272BE51C1905BE1* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = reinterpret_cast<CreationCollisionOptionU5BU5D_t0D1B5001E80C0B26F808CFE5B272BE51C1905BE1*>(SZArrayNew(CreationCollisionOptionU5BU5D_t0D1B5001E80C0B26F808CFE5B272BE51C1905BE1_il2cpp_TypeInfo_var, static_cast<int32_t>(returnValueArraySize)));
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(returnValueArraySize)); i++)
		{
			(_returnValue_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (returnValue)[i]);
		}
	}

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T[] Windows.Foundation.IReferenceArray`1<Windows.Storage.FileAccessMode>::get_Value()
extern "C" IL2CPP_METHOD_ATTR FileAccessModeU5BU5D_tC5E82060AFA3700F7E68043B6139766320556543* IReferenceArray_1_get_Value_m0C6364B9DD37CA69E265912FCD834CC0140EEEA4 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IReferenceArray_1_get_Value_m0C6364B9DD37CA69E265912FCD834CC0140EEEA4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IReferenceArray_1_tC8A527A6B0BCDE53EE1115988DB7D92BF863AEA7* ____ireferenceArray_1_tC8A527A6B0BCDE53EE1115988DB7D92BF863AEA7 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReferenceArray_1_tC8A527A6B0BCDE53EE1115988DB7D92BF863AEA7::IID, reinterpret_cast<void**>(&____ireferenceArray_1_tC8A527A6B0BCDE53EE1115988DB7D92BF863AEA7));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValueArraySize = 0;
	int32_t* returnValue = NULL;
	hr = ____ireferenceArray_1_tC8A527A6B0BCDE53EE1115988DB7D92BF863AEA7->IReferenceArray_1_get_Value_m0C6364B9DD37CA69E265912FCD834CC0140EEEA4(&returnValueArraySize, &returnValue);
	____ireferenceArray_1_tC8A527A6B0BCDE53EE1115988DB7D92BF863AEA7->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	FileAccessModeU5BU5D_tC5E82060AFA3700F7E68043B6139766320556543* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = reinterpret_cast<FileAccessModeU5BU5D_tC5E82060AFA3700F7E68043B6139766320556543*>(SZArrayNew(FileAccessModeU5BU5D_tC5E82060AFA3700F7E68043B6139766320556543_il2cpp_TypeInfo_var, static_cast<int32_t>(returnValueArraySize)));
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(returnValueArraySize)); i++)
		{
			(_returnValue_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (returnValue)[i]);
		}
	}

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T[] Windows.Foundation.IReferenceArray`1<Windows.Storage.Streams.InputStreamOptions>::get_Value()
extern "C" IL2CPP_METHOD_ATTR InputStreamOptionsU5BU5D_tF25121D9C712D26D027EEE9BB94F1AB90F419EFB* IReferenceArray_1_get_Value_m528D0E9857D67C81F1E33246775EF4D62DE0FEF0 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IReferenceArray_1_get_Value_m528D0E9857D67C81F1E33246775EF4D62DE0FEF0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IReferenceArray_1_t37CD81B399C5EB4A8F5C508201CC0E068671502A* ____ireferenceArray_1_t37CD81B399C5EB4A8F5C508201CC0E068671502A = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReferenceArray_1_t37CD81B399C5EB4A8F5C508201CC0E068671502A::IID, reinterpret_cast<void**>(&____ireferenceArray_1_t37CD81B399C5EB4A8F5C508201CC0E068671502A));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValueArraySize = 0;
	uint32_t* returnValue = NULL;
	hr = ____ireferenceArray_1_t37CD81B399C5EB4A8F5C508201CC0E068671502A->IReferenceArray_1_get_Value_m528D0E9857D67C81F1E33246775EF4D62DE0FEF0(&returnValueArraySize, &returnValue);
	____ireferenceArray_1_t37CD81B399C5EB4A8F5C508201CC0E068671502A->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	InputStreamOptionsU5BU5D_tF25121D9C712D26D027EEE9BB94F1AB90F419EFB* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = reinterpret_cast<InputStreamOptionsU5BU5D_tF25121D9C712D26D027EEE9BB94F1AB90F419EFB*>(SZArrayNew(InputStreamOptionsU5BU5D_tF25121D9C712D26D027EEE9BB94F1AB90F419EFB_il2cpp_TypeInfo_var, static_cast<int32_t>(returnValueArraySize)));
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(returnValueArraySize)); i++)
		{
			(_returnValue_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (returnValue)[i]);
		}
	}

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T[] Windows.Foundation.IReferenceArray`1<Windows.UI.Core.CoreDispatcherPriority>::get_Value()
extern "C" IL2CPP_METHOD_ATTR CoreDispatcherPriorityU5BU5D_tB8B23B5C47F24F734F9D134E0463D2E6DF7A64A1* IReferenceArray_1_get_Value_m730D2F016969548F25F67285C71CA603B91F8183 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IReferenceArray_1_get_Value_m730D2F016969548F25F67285C71CA603B91F8183_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IReferenceArray_1_tD26B173C5FAE91B2F2077DD62E3567CAF406E429* ____ireferenceArray_1_tD26B173C5FAE91B2F2077DD62E3567CAF406E429 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReferenceArray_1_tD26B173C5FAE91B2F2077DD62E3567CAF406E429::IID, reinterpret_cast<void**>(&____ireferenceArray_1_tD26B173C5FAE91B2F2077DD62E3567CAF406E429));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValueArraySize = 0;
	int32_t* returnValue = NULL;
	hr = ____ireferenceArray_1_tD26B173C5FAE91B2F2077DD62E3567CAF406E429->IReferenceArray_1_get_Value_m730D2F016969548F25F67285C71CA603B91F8183(&returnValueArraySize, &returnValue);
	____ireferenceArray_1_tD26B173C5FAE91B2F2077DD62E3567CAF406E429->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	CoreDispatcherPriorityU5BU5D_tB8B23B5C47F24F734F9D134E0463D2E6DF7A64A1* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = reinterpret_cast<CoreDispatcherPriorityU5BU5D_tB8B23B5C47F24F734F9D134E0463D2E6DF7A64A1*>(SZArrayNew(CoreDispatcherPriorityU5BU5D_tB8B23B5C47F24F734F9D134E0463D2E6DF7A64A1_il2cpp_TypeInfo_var, static_cast<int32_t>(returnValueArraySize)));
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(returnValueArraySize)); i++)
		{
			(_returnValue_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (returnValue)[i]);
		}
	}

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T[] Windows.Foundation.IReferenceArray`1<Windows.UI.Xaml.Interop.NotifyCollectionChangedAction>::get_Value()
extern "C" IL2CPP_METHOD_ATTR NotifyCollectionChangedActionU5BU5D_t5F4C1744B10462A4B4FBCAB2CF3C4F239BF063C9* IReferenceArray_1_get_Value_m47A13C852058E7F370C12C8AF23B9B1C79A73FB1 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IReferenceArray_1_get_Value_m47A13C852058E7F370C12C8AF23B9B1C79A73FB1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IReferenceArray_1_t79F5802664DB7D71A9F7599852847D068301402C* ____ireferenceArray_1_t79F5802664DB7D71A9F7599852847D068301402C = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReferenceArray_1_t79F5802664DB7D71A9F7599852847D068301402C::IID, reinterpret_cast<void**>(&____ireferenceArray_1_t79F5802664DB7D71A9F7599852847D068301402C));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValueArraySize = 0;
	int32_t* returnValue = NULL;
	hr = ____ireferenceArray_1_t79F5802664DB7D71A9F7599852847D068301402C->IReferenceArray_1_get_Value_m47A13C852058E7F370C12C8AF23B9B1C79A73FB1(&returnValueArraySize, &returnValue);
	____ireferenceArray_1_t79F5802664DB7D71A9F7599852847D068301402C->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	NotifyCollectionChangedActionU5BU5D_t5F4C1744B10462A4B4FBCAB2CF3C4F239BF063C9* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = reinterpret_cast<NotifyCollectionChangedActionU5BU5D_t5F4C1744B10462A4B4FBCAB2CF3C4F239BF063C9*>(SZArrayNew(NotifyCollectionChangedActionU5BU5D_t5F4C1744B10462A4B4FBCAB2CF3C4F239BF063C9_il2cpp_TypeInfo_var, static_cast<int32_t>(returnValueArraySize)));
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(returnValueArraySize)); i++)
		{
			(_returnValue_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (returnValue)[i]);
		}
	}

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T[] Windows.Foundation.IReferenceArray`1<Windows.UI.Xaml.Interop.TypeKind>::get_Value()
extern "C" IL2CPP_METHOD_ATTR TypeKindU5BU5D_tAC43810CE90FB41E756A2FC391BB73927F74AD8C* IReferenceArray_1_get_Value_mA3C550341A5C707E83AFA975C9AE19D371D3D73A (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IReferenceArray_1_get_Value_mA3C550341A5C707E83AFA975C9AE19D371D3D73A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IReferenceArray_1_tACFCD2B93305466A783058BC8F511B897341F850* ____ireferenceArray_1_tACFCD2B93305466A783058BC8F511B897341F850 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReferenceArray_1_tACFCD2B93305466A783058BC8F511B897341F850::IID, reinterpret_cast<void**>(&____ireferenceArray_1_tACFCD2B93305466A783058BC8F511B897341F850));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValueArraySize = 0;
	int32_t* returnValue = NULL;
	hr = ____ireferenceArray_1_tACFCD2B93305466A783058BC8F511B897341F850->IReferenceArray_1_get_Value_mA3C550341A5C707E83AFA975C9AE19D371D3D73A(&returnValueArraySize, &returnValue);
	____ireferenceArray_1_tACFCD2B93305466A783058BC8F511B897341F850->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	TypeKindU5BU5D_tAC43810CE90FB41E756A2FC391BB73927F74AD8C* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = reinterpret_cast<TypeKindU5BU5D_tAC43810CE90FB41E756A2FC391BB73927F74AD8C*>(SZArrayNew(TypeKindU5BU5D_tAC43810CE90FB41E756A2FC391BB73927F74AD8C_il2cpp_TypeInfo_var, static_cast<int32_t>(returnValueArraySize)));
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(returnValueArraySize)); i++)
		{
			(_returnValue_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (returnValue)[i]);
		}
	}

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T[] Windows.Foundation.IReferenceArray`1<Windows.UI.Xaml.Interop.TypeName>::get_Value()
extern "C" IL2CPP_METHOD_ATTR TypeNameU5BU5D_t5639A6C63B43E5933AD3498000C56530312BF3D0* IReferenceArray_1_get_Value_m8A49BEC2EE41C9052F85CC324EE2C43C57CC330D (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IReferenceArray_1_get_Value_m8A49BEC2EE41C9052F85CC324EE2C43C57CC330D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}


	IReferenceArray_1_t35220B46D85DD1C41787C21B57F120FC3B05A880* ____ireferenceArray_1_t35220B46D85DD1C41787C21B57F120FC3B05A880 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReferenceArray_1_t35220B46D85DD1C41787C21B57F120FC3B05A880::IID, reinterpret_cast<void**>(&____ireferenceArray_1_t35220B46D85DD1C41787C21B57F120FC3B05A880));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValueArraySize = 0;
	TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC_marshaled_windows_runtime* returnValue = NULL;
	hr = ____ireferenceArray_1_t35220B46D85DD1C41787C21B57F120FC3B05A880->IReferenceArray_1_get_Value_m8A49BEC2EE41C9052F85CC324EE2C43C57CC330D(&returnValueArraySize, &returnValue);
	____ireferenceArray_1_t35220B46D85DD1C41787C21B57F120FC3B05A880->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	TypeNameU5BU5D_t5639A6C63B43E5933AD3498000C56530312BF3D0* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		if (_returnValue_unmarshaled == NULL)
		{
			_returnValue_unmarshaled = reinterpret_cast<TypeNameU5BU5D_t5639A6C63B43E5933AD3498000C56530312BF3D0*>(SZArrayNew(TypeNameU5BU5D_t5639A6C63B43E5933AD3498000C56530312BF3D0_il2cpp_TypeInfo_var, static_cast<int32_t>(returnValueArraySize)));
		}
		il2cpp_array_size_t _arrayLength = (_returnValue_unmarshaled)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC  _returnValue_i__unmarshaled;
			memset(&_returnValue_i__unmarshaled, 0, sizeof(_returnValue_i__unmarshaled));
			TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC_marshal_windows_runtime_back((returnValue)[i], _returnValue_i__unmarshaled);
			(_returnValue_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _returnValue_i__unmarshaled);
		}
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		const il2cpp_array_size_t returnValue_CleanupLoopCount = static_cast<int32_t>(returnValueArraySize);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(returnValue_CleanupLoopCount); i++)
		{
			TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC_marshal_windows_runtime_cleanup((returnValue)[i]);
		}
		il2cpp_codegen_marshal_free(returnValue);
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.AttributeTargets>::get_Value()
extern "C" IL2CPP_METHOD_ATTR int32_t IReference_1_get_Value_m5A426B082C501E100845973DB6826963A7594A05 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_tE8D8D6096A72E59835483A54048B867A56F15F91* ____ireference_1_tE8D8D6096A72E59835483A54048B867A56F15F91 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_tE8D8D6096A72E59835483A54048B867A56F15F91::IID, reinterpret_cast<void**>(&____ireference_1_tE8D8D6096A72E59835483A54048B867A56F15F91));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int32_t returnValue = 0;
	hr = ____ireference_1_tE8D8D6096A72E59835483A54048B867A56F15F91->IReference_1_get_Value_m5A426B082C501E100845973DB6826963A7594A05(&returnValue);
	____ireference_1_tE8D8D6096A72E59835483A54048B867A56F15F91->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.Boolean>::get_Value()
extern "C" IL2CPP_METHOD_ATTR bool IReference_1_get_Value_m44F05338A24EDC3B4BCA8F89DC2AF9A12555D0CD (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t966ABCC072615F44746E24C73578513F6B040AD9* ____ireference_1_t966ABCC072615F44746E24C73578513F6B040AD9 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t966ABCC072615F44746E24C73578513F6B040AD9::IID, reinterpret_cast<void**>(&____ireference_1_t966ABCC072615F44746E24C73578513F6B040AD9));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	bool returnValue = 0;
	hr = ____ireference_1_t966ABCC072615F44746E24C73578513F6B040AD9->IReference_1_get_Value_m44F05338A24EDC3B4BCA8F89DC2AF9A12555D0CD(&returnValue);
	____ireference_1_t966ABCC072615F44746E24C73578513F6B040AD9->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.Byte>::get_Value()
extern "C" IL2CPP_METHOD_ATTR uint8_t IReference_1_get_Value_mE968C0499D42DBD26FF795C26C5257C760EC5710 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t533195D0BAEB154D29F9A723937B28B45570CD70* ____ireference_1_t533195D0BAEB154D29F9A723937B28B45570CD70 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t533195D0BAEB154D29F9A723937B28B45570CD70::IID, reinterpret_cast<void**>(&____ireference_1_t533195D0BAEB154D29F9A723937B28B45570CD70));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint8_t returnValue = 0;
	hr = ____ireference_1_t533195D0BAEB154D29F9A723937B28B45570CD70->IReference_1_get_Value_mE968C0499D42DBD26FF795C26C5257C760EC5710(&returnValue);
	____ireference_1_t533195D0BAEB154D29F9A723937B28B45570CD70->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.Char>::get_Value()
extern "C" IL2CPP_METHOD_ATTR Il2CppChar IReference_1_get_Value_m93FCB63925A352CCEA338E6B13CFB9214A8ABB4C (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t4A80DBE86174EA4D9B8096A54E056A4DFE0660E1* ____ireference_1_t4A80DBE86174EA4D9B8096A54E056A4DFE0660E1 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t4A80DBE86174EA4D9B8096A54E056A4DFE0660E1::IID, reinterpret_cast<void**>(&____ireference_1_t4A80DBE86174EA4D9B8096A54E056A4DFE0660E1));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Il2CppChar returnValue = 0;
	hr = ____ireference_1_t4A80DBE86174EA4D9B8096A54E056A4DFE0660E1->IReference_1_get_Value_m93FCB63925A352CCEA338E6B13CFB9214A8ABB4C(&returnValue);
	____ireference_1_t4A80DBE86174EA4D9B8096A54E056A4DFE0660E1->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.Collections.Specialized.NotifyCollectionChangedAction>::get_Value()
extern "C" IL2CPP_METHOD_ATTR int32_t IReference_1_get_Value_m3F514B428E8E3EB88B0D44A93AC6F7DCBF778F73 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_tB0469E269EDCA1DB6AF9166F954AB79B74F1969A* ____ireference_1_tB0469E269EDCA1DB6AF9166F954AB79B74F1969A = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_tB0469E269EDCA1DB6AF9166F954AB79B74F1969A::IID, reinterpret_cast<void**>(&____ireference_1_tB0469E269EDCA1DB6AF9166F954AB79B74F1969A));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int32_t returnValue = 0;
	hr = ____ireference_1_tB0469E269EDCA1DB6AF9166F954AB79B74F1969A->IReference_1_get_Value_m3F514B428E8E3EB88B0D44A93AC6F7DCBF778F73(&returnValue);
	____ireference_1_tB0469E269EDCA1DB6AF9166F954AB79B74F1969A->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.DateTimeOffset>::get_Value()
extern "C" IL2CPP_METHOD_ATTR DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  IReference_1_get_Value_m1515D39F46A1EC5D732E93F02C5C433B57AFC76B (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IReference_1_get_Value_m1515D39F46A1EC5D732E93F02C5C433B57AFC76B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IReference_1_t6D631F5B662AFF640DF2B7742E7EC7CC11A3B3A0* ____ireference_1_t6D631F5B662AFF640DF2B7742E7EC7CC11A3B3A0 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t6D631F5B662AFF640DF2B7742E7EC7CC11A3B3A0::IID, reinterpret_cast<void**>(&____ireference_1_t6D631F5B662AFF640DF2B7742E7EC7CC11A3B3A0));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	DateTime_t9D0F9E236B6200FF6413DD837230D25E285E7795  returnValue = {};
	hr = ____ireference_1_t6D631F5B662AFF640DF2B7742E7EC7CC11A3B3A0->IReference_1_get_Value_m1515D39F46A1EC5D732E93F02C5C433B57AFC76B(&returnValue);
	____ireference_1_t6D631F5B662AFF640DF2B7742E7EC7CC11A3B3A0->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  _returnValue_unmarshaled;
	memset(&_returnValue_unmarshaled, 0, sizeof(_returnValue_unmarshaled));
	if ((returnValue).get_UniversalTime_0() < -504911232000000000 || (returnValue).get_UniversalTime_0() > 2650467743999999999)
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * exception = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA*)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m300CE4D04A068C209FD858101AC361C1B600B5AE(exception, _stringLiteral5F82205BEDF93F9FC5534E27F6D5798CA8E49C9A, _stringLiteral7DA9F73A36ABE2E58D56D121E5A7E2C3CF329C27, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(exception, NULL, NULL);
	}

	DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  _returnValue_unmarshaledStaging;
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  _returnValue_unmarshaledDateTime;
	_returnValue_unmarshaledDateTime.set_dateData_44((returnValue).get_UniversalTime_0() + 504911232000000000);
	_returnValue_unmarshaledStaging.set_m_dateTime_2(_returnValue_unmarshaledDateTime);
	_returnValue_unmarshaledStaging.set_m_offsetMinutes_3(0);
	_returnValue_unmarshaled = DateTimeOffset_ToLocalTime_m65354A4753A3DA468F1278591C9B07A85C36A1BE((&_returnValue_unmarshaledStaging), true, NULL);;

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.Double>::get_Value()
extern "C" IL2CPP_METHOD_ATTR double IReference_1_get_Value_m646563AA7BD61F6EEE3EE0F4825B6EE8FD84C807 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t4CD1C8EF43C33E86DB02F2351825BBACF490613A* ____ireference_1_t4CD1C8EF43C33E86DB02F2351825BBACF490613A = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t4CD1C8EF43C33E86DB02F2351825BBACF490613A::IID, reinterpret_cast<void**>(&____ireference_1_t4CD1C8EF43C33E86DB02F2351825BBACF490613A));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	double returnValue = 0.0;
	hr = ____ireference_1_t4CD1C8EF43C33E86DB02F2351825BBACF490613A->IReference_1_get_Value_m646563AA7BD61F6EEE3EE0F4825B6EE8FD84C807(&returnValue);
	____ireference_1_t4CD1C8EF43C33E86DB02F2351825BBACF490613A->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.Exception>::get_Value()
extern "C" IL2CPP_METHOD_ATTR Exception_t * IReference_1_get_Value_m327A9F068493A9DA6835C83433C65A0C858605A6 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t67847A96B1438323AEC81CD945DFC5C035890AE1* ____ireference_1_t67847A96B1438323AEC81CD945DFC5C035890AE1 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t67847A96B1438323AEC81CD945DFC5C035890AE1::IID, reinterpret_cast<void**>(&____ireference_1_t67847A96B1438323AEC81CD945DFC5C035890AE1));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int32_t returnValue = 0;
	hr = ____ireference_1_t67847A96B1438323AEC81CD945DFC5C035890AE1->IReference_1_get_Value_m327A9F068493A9DA6835C83433C65A0C858605A6(&returnValue);
	____ireference_1_t67847A96B1438323AEC81CD945DFC5C035890AE1->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return (returnValue != IL2CPP_S_OK ? reinterpret_cast<Exception_t *>(il2cpp_codegen_com_get_exception(returnValue, false)) : NULL);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.Guid>::get_Value()
extern "C" IL2CPP_METHOD_ATTR Guid_t  IReference_1_get_Value_m2092074B94AF8FDD23F6E49EEA36DB26B03F4D5B (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t9B1E4800A0C7FCF3F792739ED6F23DE204414B31* ____ireference_1_t9B1E4800A0C7FCF3F792739ED6F23DE204414B31 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t9B1E4800A0C7FCF3F792739ED6F23DE204414B31::IID, reinterpret_cast<void**>(&____ireference_1_t9B1E4800A0C7FCF3F792739ED6F23DE204414B31));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Guid_t  returnValue = {};
	hr = ____ireference_1_t9B1E4800A0C7FCF3F792739ED6F23DE204414B31->IReference_1_get_Value_m2092074B94AF8FDD23F6E49EEA36DB26B03F4D5B(&returnValue);
	____ireference_1_t9B1E4800A0C7FCF3F792739ED6F23DE204414B31->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.Int16>::get_Value()
extern "C" IL2CPP_METHOD_ATTR int16_t IReference_1_get_Value_m009A2D32288A345CECC6E0DA21C6194026F7666A (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t419B8E8D14A6383889A141DA48BA10EF53636954* ____ireference_1_t419B8E8D14A6383889A141DA48BA10EF53636954 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t419B8E8D14A6383889A141DA48BA10EF53636954::IID, reinterpret_cast<void**>(&____ireference_1_t419B8E8D14A6383889A141DA48BA10EF53636954));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int16_t returnValue = 0;
	hr = ____ireference_1_t419B8E8D14A6383889A141DA48BA10EF53636954->IReference_1_get_Value_m009A2D32288A345CECC6E0DA21C6194026F7666A(&returnValue);
	____ireference_1_t419B8E8D14A6383889A141DA48BA10EF53636954->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.Int32>::get_Value()
extern "C" IL2CPP_METHOD_ATTR int32_t IReference_1_get_Value_mE48C4EA35C8AD4467154020A633DD0CE76BAECA3 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t29C7708BA8286D396F6A505585E3D5D3140F38F4* ____ireference_1_t29C7708BA8286D396F6A505585E3D5D3140F38F4 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t29C7708BA8286D396F6A505585E3D5D3140F38F4::IID, reinterpret_cast<void**>(&____ireference_1_t29C7708BA8286D396F6A505585E3D5D3140F38F4));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int32_t returnValue = 0;
	hr = ____ireference_1_t29C7708BA8286D396F6A505585E3D5D3140F38F4->IReference_1_get_Value_mE48C4EA35C8AD4467154020A633DD0CE76BAECA3(&returnValue);
	____ireference_1_t29C7708BA8286D396F6A505585E3D5D3140F38F4->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.Int64>::get_Value()
extern "C" IL2CPP_METHOD_ATTR int64_t IReference_1_get_Value_mC1DCE564A165482AD25C6BD877FB304DFD83E468 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_tF0A5EAE209B2A4326BA3EC8A7038A82A86A4DDEA* ____ireference_1_tF0A5EAE209B2A4326BA3EC8A7038A82A86A4DDEA = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_tF0A5EAE209B2A4326BA3EC8A7038A82A86A4DDEA::IID, reinterpret_cast<void**>(&____ireference_1_tF0A5EAE209B2A4326BA3EC8A7038A82A86A4DDEA));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int64_t returnValue = 0;
	hr = ____ireference_1_tF0A5EAE209B2A4326BA3EC8A7038A82A86A4DDEA->IReference_1_get_Value_mC1DCE564A165482AD25C6BD877FB304DFD83E468(&returnValue);
	____ireference_1_tF0A5EAE209B2A4326BA3EC8A7038A82A86A4DDEA->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.Object>::get_Value()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * IReference_1_get_Value_m91B4C7051DB8EDBBE97C702D1A10292EA36CD182 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IReference_1_get_Value_m91B4C7051DB8EDBBE97C702D1A10292EA36CD182_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IReference_1_t76CDB39CEDF6319F796E177E5DE8F647F5A5B5FC* ____ireference_1_t76CDB39CEDF6319F796E177E5DE8F647F5A5B5FC = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t76CDB39CEDF6319F796E177E5DE8F647F5A5B5FC::IID, reinterpret_cast<void**>(&____ireference_1_t76CDB39CEDF6319F796E177E5DE8F647F5A5B5FC));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Il2CppIInspectable* returnValue = NULL;
	hr = ____ireference_1_t76CDB39CEDF6319F796E177E5DE8F647F5A5B5FC->IReference_1_get_Value_m91B4C7051DB8EDBBE97C702D1A10292EA36CD182(&returnValue);
	____ireference_1_t76CDB39CEDF6319F796E177E5DE8F647F5A5B5FC->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject * _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>::get_Value()
extern "C" IL2CPP_METHOD_ATTR EventRegistrationToken_tE1F3FD8339DB10082B4291DE47C45A352DCB08A7  IReference_1_get_Value_m78D0A55EF00DD60A84EA917FE395A1CE38335D73 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t4AC807526F70CF6E9296724F26CD756605107A36* ____ireference_1_t4AC807526F70CF6E9296724F26CD756605107A36 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t4AC807526F70CF6E9296724F26CD756605107A36::IID, reinterpret_cast<void**>(&____ireference_1_t4AC807526F70CF6E9296724F26CD756605107A36));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	EventRegistrationToken_tE1F3FD8339DB10082B4291DE47C45A352DCB08A7  returnValue = {};
	hr = ____ireference_1_t4AC807526F70CF6E9296724F26CD756605107A36->IReference_1_get_Value_m78D0A55EF00DD60A84EA917FE395A1CE38335D73(&returnValue);
	____ireference_1_t4AC807526F70CF6E9296724F26CD756605107A36->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.Single>::get_Value()
extern "C" IL2CPP_METHOD_ATTR float IReference_1_get_Value_m4B38DAA5B9FADBB6A97FFD1A66E45532BD63E4D8 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_tEB8F9D718A8787AFD2C98617833E4FC35E902482* ____ireference_1_tEB8F9D718A8787AFD2C98617833E4FC35E902482 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_tEB8F9D718A8787AFD2C98617833E4FC35E902482::IID, reinterpret_cast<void**>(&____ireference_1_tEB8F9D718A8787AFD2C98617833E4FC35E902482));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	float returnValue = 0.0f;
	hr = ____ireference_1_tEB8F9D718A8787AFD2C98617833E4FC35E902482->IReference_1_get_Value_m4B38DAA5B9FADBB6A97FFD1A66E45532BD63E4D8(&returnValue);
	____ireference_1_tEB8F9D718A8787AFD2C98617833E4FC35E902482->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.String>::get_Value()
extern "C" IL2CPP_METHOD_ATTR String_t* IReference_1_get_Value_m3FF840BC019723F645FC6EF8CC73606E9EE0D844 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_tA3B1E091D250AED9C946E9609CDAEC80264F5563* ____ireference_1_tA3B1E091D250AED9C946E9609CDAEC80264F5563 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_tA3B1E091D250AED9C946E9609CDAEC80264F5563::IID, reinterpret_cast<void**>(&____ireference_1_tA3B1E091D250AED9C946E9609CDAEC80264F5563));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Il2CppHString returnValue = NULL;
	hr = ____ireference_1_tA3B1E091D250AED9C946E9609CDAEC80264F5563->IReference_1_get_Value_m3FF840BC019723F645FC6EF8CC73606E9EE0D844(&returnValue);
	____ireference_1_tA3B1E091D250AED9C946E9609CDAEC80264F5563->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_hstring_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free_hstring(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.TimeSpan>::get_Value()
extern "C" IL2CPP_METHOD_ATTR TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  IReference_1_get_Value_m2B782C3D5622F00647095637D317BE1495519FCD (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_tFD875FBD21CADF906333AF0B909CD2B2CF85EFBA* ____ireference_1_tFD875FBD21CADF906333AF0B909CD2B2CF85EFBA = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_tFD875FBD21CADF906333AF0B909CD2B2CF85EFBA::IID, reinterpret_cast<void**>(&____ireference_1_tFD875FBD21CADF906333AF0B909CD2B2CF85EFBA));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  returnValue = {};
	hr = ____ireference_1_tFD875FBD21CADF906333AF0B909CD2B2CF85EFBA->IReference_1_get_Value_m2B782C3D5622F00647095637D317BE1495519FCD(&returnValue);
	____ireference_1_tFD875FBD21CADF906333AF0B909CD2B2CF85EFBA->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.Type>::get_Value()
extern "C" IL2CPP_METHOD_ATTR Type_t * IReference_1_get_Value_m437342D7C3C9C644A0628E947BD45979D2C6847C (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t9B1EA41F300EA5823D42EB8C305792D7F5261E97* ____ireference_1_t9B1EA41F300EA5823D42EB8C305792D7F5261E97 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t9B1EA41F300EA5823D42EB8C305792D7F5261E97::IID, reinterpret_cast<void**>(&____ireference_1_t9B1EA41F300EA5823D42EB8C305792D7F5261E97));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Il2CppWindowsRuntimeTypeName returnValue = Il2CppWindowsRuntimeTypeName();
	hr = ____ireference_1_t9B1EA41F300EA5823D42EB8C305792D7F5261E97->IReference_1_get_Value_m437342D7C3C9C644A0628E947BD45979D2C6847C(&returnValue);
	____ireference_1_t9B1EA41F300EA5823D42EB8C305792D7F5261E97->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	Type_t * _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_type_from_native(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_delete_native_type(returnValue);

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.UInt16>::get_Value()
extern "C" IL2CPP_METHOD_ATTR uint16_t IReference_1_get_Value_mA2A6F9C57F179D394456F66468EA0B46081C160A (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_tC7A6B390E90FA83DC2C998B75295538FF93643AB* ____ireference_1_tC7A6B390E90FA83DC2C998B75295538FF93643AB = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_tC7A6B390E90FA83DC2C998B75295538FF93643AB::IID, reinterpret_cast<void**>(&____ireference_1_tC7A6B390E90FA83DC2C998B75295538FF93643AB));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint16_t returnValue = 0;
	hr = ____ireference_1_tC7A6B390E90FA83DC2C998B75295538FF93643AB->IReference_1_get_Value_mA2A6F9C57F179D394456F66468EA0B46081C160A(&returnValue);
	____ireference_1_tC7A6B390E90FA83DC2C998B75295538FF93643AB->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.UInt32>::get_Value()
extern "C" IL2CPP_METHOD_ATTR uint32_t IReference_1_get_Value_m7E579377BE9FD2F87748D6B54100D3127B0A8302 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_tB2F2E0CD43CAEB9F74262EDD01DA07CCEA9A2D00* ____ireference_1_tB2F2E0CD43CAEB9F74262EDD01DA07CCEA9A2D00 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_tB2F2E0CD43CAEB9F74262EDD01DA07CCEA9A2D00::IID, reinterpret_cast<void**>(&____ireference_1_tB2F2E0CD43CAEB9F74262EDD01DA07CCEA9A2D00));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ireference_1_tB2F2E0CD43CAEB9F74262EDD01DA07CCEA9A2D00->IReference_1_get_Value_m7E579377BE9FD2F87748D6B54100D3127B0A8302(&returnValue);
	____ireference_1_tB2F2E0CD43CAEB9F74262EDD01DA07CCEA9A2D00->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.UInt64>::get_Value()
extern "C" IL2CPP_METHOD_ATTR uint64_t IReference_1_get_Value_m7A2645A084F28DD4D69B4A065A420D2DC59A8C76 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t76BE3B182DE2AFB7180314501BAD401974550371* ____ireference_1_t76BE3B182DE2AFB7180314501BAD401974550371 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t76BE3B182DE2AFB7180314501BAD401974550371::IID, reinterpret_cast<void**>(&____ireference_1_t76BE3B182DE2AFB7180314501BAD401974550371));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint64_t returnValue = 0;
	hr = ____ireference_1_t76BE3B182DE2AFB7180314501BAD401974550371->IReference_1_get_Value_m7A2645A084F28DD4D69B4A065A420D2DC59A8C76(&returnValue);
	____ireference_1_t76BE3B182DE2AFB7180314501BAD401974550371->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Devices.Enumeration.DeviceClass>::get_Value()
extern "C" IL2CPP_METHOD_ATTR int32_t IReference_1_get_Value_m41B541C03572B02B604DF140B6F3690E7B0C35E0 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t1F1A1A9E6FFA4657C4C5A28FE1D23519609C2BD6* ____ireference_1_t1F1A1A9E6FFA4657C4C5A28FE1D23519609C2BD6 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t1F1A1A9E6FFA4657C4C5A28FE1D23519609C2BD6::IID, reinterpret_cast<void**>(&____ireference_1_t1F1A1A9E6FFA4657C4C5A28FE1D23519609C2BD6));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int32_t returnValue = 0;
	hr = ____ireference_1_t1F1A1A9E6FFA4657C4C5A28FE1D23519609C2BD6->IReference_1_get_Value_m41B541C03572B02B604DF140B6F3690E7B0C35E0(&returnValue);
	____ireference_1_t1F1A1A9E6FFA4657C4C5A28FE1D23519609C2BD6->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.AsyncStatus>::get_Value()
extern "C" IL2CPP_METHOD_ATTR int32_t IReference_1_get_Value_m6209CEAC51680E439AA6245571854BA1F7AE6304 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t83A931601F5195DB6FFF65AB9A309CBC26BCA614* ____ireference_1_t83A931601F5195DB6FFF65AB9A309CBC26BCA614 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t83A931601F5195DB6FFF65AB9A309CBC26BCA614::IID, reinterpret_cast<void**>(&____ireference_1_t83A931601F5195DB6FFF65AB9A309CBC26BCA614));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int32_t returnValue = 0;
	hr = ____ireference_1_t83A931601F5195DB6FFF65AB9A309CBC26BCA614->IReference_1_get_Value_m6209CEAC51680E439AA6245571854BA1F7AE6304(&returnValue);
	____ireference_1_t83A931601F5195DB6FFF65AB9A309CBC26BCA614->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.DateTime>::get_Value()
extern "C" IL2CPP_METHOD_ATTR DateTime_t9D0F9E236B6200FF6413DD837230D25E285E7795  IReference_1_get_Value_m8A2147DBABB963656671ACB6C0BC03A06A02DA4A (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_tDB374689D094BEB200D3B354DC916CA5889930B4* ____ireference_1_tDB374689D094BEB200D3B354DC916CA5889930B4 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_tDB374689D094BEB200D3B354DC916CA5889930B4::IID, reinterpret_cast<void**>(&____ireference_1_tDB374689D094BEB200D3B354DC916CA5889930B4));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	DateTime_t9D0F9E236B6200FF6413DD837230D25E285E7795  returnValue = {};
	hr = ____ireference_1_tDB374689D094BEB200D3B354DC916CA5889930B4->IReference_1_get_Value_m8A2147DBABB963656671ACB6C0BC03A06A02DA4A(&returnValue);
	____ireference_1_tDB374689D094BEB200D3B354DC916CA5889930B4->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.EventRegistrationToken>::get_Value()
extern "C" IL2CPP_METHOD_ATTR EventRegistrationToken_tB7331C6A2CA7A6A9AD497264E9E787B3B71126D4  IReference_1_get_Value_m93D0577BA82B2418EB4B2DCF81F86934016908A7 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t2743E3BA6B940A699EE49615FBA484964C9B8B44* ____ireference_1_t2743E3BA6B940A699EE49615FBA484964C9B8B44 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t2743E3BA6B940A699EE49615FBA484964C9B8B44::IID, reinterpret_cast<void**>(&____ireference_1_t2743E3BA6B940A699EE49615FBA484964C9B8B44));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	EventRegistrationToken_tB7331C6A2CA7A6A9AD497264E9E787B3B71126D4  returnValue = {};
	hr = ____ireference_1_t2743E3BA6B940A699EE49615FBA484964C9B8B44->IReference_1_get_Value_m93D0577BA82B2418EB4B2DCF81F86934016908A7(&returnValue);
	____ireference_1_t2743E3BA6B940A699EE49615FBA484964C9B8B44->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.FoundationContract>::get_Value()
extern "C" IL2CPP_METHOD_ATTR FoundationContract_tA5129870FD2EAAE9518C2EA28B32757D4FD977E9  IReference_1_get_Value_m4F109C5DA2FF9F7BD3F605BB09430CA3F936807A (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t5A6F21153F46184B91D3803A669C812309053C2E* ____ireference_1_t5A6F21153F46184B91D3803A669C812309053C2E = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t5A6F21153F46184B91D3803A669C812309053C2E::IID, reinterpret_cast<void**>(&____ireference_1_t5A6F21153F46184B91D3803A669C812309053C2E));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	FoundationContract_tA5129870FD2EAAE9518C2EA28B32757D4FD977E9  returnValue = {};
	hr = ____ireference_1_t5A6F21153F46184B91D3803A669C812309053C2E->IReference_1_get_Value_m4F109C5DA2FF9F7BD3F605BB09430CA3F936807A(&returnValue);
	____ireference_1_t5A6F21153F46184B91D3803A669C812309053C2E->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.HResult>::get_Value()
extern "C" IL2CPP_METHOD_ATTR HResult_tD2916D1ECD3A4E474B4A639B8D27E510FF8421DB  IReference_1_get_Value_m310ABD51534A3ABADF2474DAC870D26B1706D4A1 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t9BBCE4CCCD926DFB5670735553DCC34756C5BF9E* ____ireference_1_t9BBCE4CCCD926DFB5670735553DCC34756C5BF9E = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t9BBCE4CCCD926DFB5670735553DCC34756C5BF9E::IID, reinterpret_cast<void**>(&____ireference_1_t9BBCE4CCCD926DFB5670735553DCC34756C5BF9E));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	HResult_tD2916D1ECD3A4E474B4A639B8D27E510FF8421DB  returnValue = {};
	hr = ____ireference_1_t9BBCE4CCCD926DFB5670735553DCC34756C5BF9E->IReference_1_get_Value_m310ABD51534A3ABADF2474DAC870D26B1706D4A1(&returnValue);
	____ireference_1_t9BBCE4CCCD926DFB5670735553DCC34756C5BF9E->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.Metadata.AttributeTargets>::get_Value()
extern "C" IL2CPP_METHOD_ATTR uint32_t IReference_1_get_Value_m0F953FE55F90100B2381188B132B5FAA7D5A4929 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t14DAE467685CF0D26BDDDFEEF8C8793E49BE3256* ____ireference_1_t14DAE467685CF0D26BDDDFEEF8C8793E49BE3256 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t14DAE467685CF0D26BDDDFEEF8C8793E49BE3256::IID, reinterpret_cast<void**>(&____ireference_1_t14DAE467685CF0D26BDDDFEEF8C8793E49BE3256));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ireference_1_t14DAE467685CF0D26BDDDFEEF8C8793E49BE3256->IReference_1_get_Value_m0F953FE55F90100B2381188B132B5FAA7D5A4929(&returnValue);
	____ireference_1_t14DAE467685CF0D26BDDDFEEF8C8793E49BE3256->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.Metadata.CompositionType>::get_Value()
extern "C" IL2CPP_METHOD_ATTR int32_t IReference_1_get_Value_m8B774866E2B0A62E2594C87D306AF73E49ADC70E (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_tFE00D20A0573B56E7A9EB4C6B16F4C2086E230D0* ____ireference_1_tFE00D20A0573B56E7A9EB4C6B16F4C2086E230D0 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_tFE00D20A0573B56E7A9EB4C6B16F4C2086E230D0::IID, reinterpret_cast<void**>(&____ireference_1_tFE00D20A0573B56E7A9EB4C6B16F4C2086E230D0));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int32_t returnValue = 0;
	hr = ____ireference_1_tFE00D20A0573B56E7A9EB4C6B16F4C2086E230D0->IReference_1_get_Value_m8B774866E2B0A62E2594C87D306AF73E49ADC70E(&returnValue);
	____ireference_1_tFE00D20A0573B56E7A9EB4C6B16F4C2086E230D0->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.Metadata.DeprecationType>::get_Value()
extern "C" IL2CPP_METHOD_ATTR int32_t IReference_1_get_Value_mDEE3FF8FD8F7F888E94CFF5074257AD3EEE14D74 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t5B7EDF4757BC18E604DDB1266B055D96C328AD71* ____ireference_1_t5B7EDF4757BC18E604DDB1266B055D96C328AD71 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t5B7EDF4757BC18E604DDB1266B055D96C328AD71::IID, reinterpret_cast<void**>(&____ireference_1_t5B7EDF4757BC18E604DDB1266B055D96C328AD71));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int32_t returnValue = 0;
	hr = ____ireference_1_t5B7EDF4757BC18E604DDB1266B055D96C328AD71->IReference_1_get_Value_mDEE3FF8FD8F7F888E94CFF5074257AD3EEE14D74(&returnValue);
	____ireference_1_t5B7EDF4757BC18E604DDB1266B055D96C328AD71->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.Metadata.GCPressureAmount>::get_Value()
extern "C" IL2CPP_METHOD_ATTR int32_t IReference_1_get_Value_mB1031EF026CC864A2E74CF2C53BAC3A9FD1F7746 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t3561B1C7CC988828D60EAD6CB1E3851C94F6A012* ____ireference_1_t3561B1C7CC988828D60EAD6CB1E3851C94F6A012 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t3561B1C7CC988828D60EAD6CB1E3851C94F6A012::IID, reinterpret_cast<void**>(&____ireference_1_t3561B1C7CC988828D60EAD6CB1E3851C94F6A012));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int32_t returnValue = 0;
	hr = ____ireference_1_t3561B1C7CC988828D60EAD6CB1E3851C94F6A012->IReference_1_get_Value_mB1031EF026CC864A2E74CF2C53BAC3A9FD1F7746(&returnValue);
	____ireference_1_t3561B1C7CC988828D60EAD6CB1E3851C94F6A012->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.Metadata.MarshalingType>::get_Value()
extern "C" IL2CPP_METHOD_ATTR int32_t IReference_1_get_Value_m1DF83BE7461C683CF165E03BC4915F4FFC2690C6 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_tAED774804E022955C705DD94598B4447B0142C06* ____ireference_1_tAED774804E022955C705DD94598B4447B0142C06 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_tAED774804E022955C705DD94598B4447B0142C06::IID, reinterpret_cast<void**>(&____ireference_1_tAED774804E022955C705DD94598B4447B0142C06));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int32_t returnValue = 0;
	hr = ____ireference_1_tAED774804E022955C705DD94598B4447B0142C06->IReference_1_get_Value_m1DF83BE7461C683CF165E03BC4915F4FFC2690C6(&returnValue);
	____ireference_1_tAED774804E022955C705DD94598B4447B0142C06->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.Metadata.ThreadingModel>::get_Value()
extern "C" IL2CPP_METHOD_ATTR int32_t IReference_1_get_Value_m7AA4C5DD3527F1B19462C726F511D88FC12FBE6B (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_tA168AABD94AF22150BA9FF1C22BB9D589944D6FD* ____ireference_1_tA168AABD94AF22150BA9FF1C22BB9D589944D6FD = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_tA168AABD94AF22150BA9FF1C22BB9D589944D6FD::IID, reinterpret_cast<void**>(&____ireference_1_tA168AABD94AF22150BA9FF1C22BB9D589944D6FD));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int32_t returnValue = 0;
	hr = ____ireference_1_tA168AABD94AF22150BA9FF1C22BB9D589944D6FD->IReference_1_get_Value_m7AA4C5DD3527F1B19462C726F511D88FC12FBE6B(&returnValue);
	____ireference_1_tA168AABD94AF22150BA9FF1C22BB9D589944D6FD->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.Point>::get_Value()
extern "C" IL2CPP_METHOD_ATTR Point_tEC1815EC53B414E5281C817051DA4F985DB9C8C1  IReference_1_get_Value_m12AEB76C9C84E98E8BEE7E909CE268F95A05E899 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t7773DF4951EE2956BB52F40107CA99EB3AC18121* ____ireference_1_t7773DF4951EE2956BB52F40107CA99EB3AC18121 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t7773DF4951EE2956BB52F40107CA99EB3AC18121::IID, reinterpret_cast<void**>(&____ireference_1_t7773DF4951EE2956BB52F40107CA99EB3AC18121));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Point_tEC1815EC53B414E5281C817051DA4F985DB9C8C1  returnValue = {};
	hr = ____ireference_1_t7773DF4951EE2956BB52F40107CA99EB3AC18121->IReference_1_get_Value_m12AEB76C9C84E98E8BEE7E909CE268F95A05E899(&returnValue);
	____ireference_1_t7773DF4951EE2956BB52F40107CA99EB3AC18121->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.Point>::get_Value()
extern "C" IL2CPP_METHOD_ATTR Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC  IReference_1_get_Value_m515BB78374A2BA73105E5E3DAED8030350AE1FA9 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t97388A71057076E3CF1C2138D18F067CB7AFF696* ____ireference_1_t97388A71057076E3CF1C2138D18F067CB7AFF696 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t97388A71057076E3CF1C2138D18F067CB7AFF696::IID, reinterpret_cast<void**>(&____ireference_1_t97388A71057076E3CF1C2138D18F067CB7AFF696));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC  returnValue = {};
	hr = ____ireference_1_t97388A71057076E3CF1C2138D18F067CB7AFF696->IReference_1_get_Value_m515BB78374A2BA73105E5E3DAED8030350AE1FA9(&returnValue);
	____ireference_1_t97388A71057076E3CF1C2138D18F067CB7AFF696->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.PropertyType>::get_Value()
extern "C" IL2CPP_METHOD_ATTR int32_t IReference_1_get_Value_m03DA6CDF5117537DE41F422D686269BF50DA50C6 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t13454E63971AE5A60B6BCF6FF56A963D17B7DFB1* ____ireference_1_t13454E63971AE5A60B6BCF6FF56A963D17B7DFB1 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t13454E63971AE5A60B6BCF6FF56A963D17B7DFB1::IID, reinterpret_cast<void**>(&____ireference_1_t13454E63971AE5A60B6BCF6FF56A963D17B7DFB1));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int32_t returnValue = 0;
	hr = ____ireference_1_t13454E63971AE5A60B6BCF6FF56A963D17B7DFB1->IReference_1_get_Value_m03DA6CDF5117537DE41F422D686269BF50DA50C6(&returnValue);
	____ireference_1_t13454E63971AE5A60B6BCF6FF56A963D17B7DFB1->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.Rect>::get_Value()
extern "C" IL2CPP_METHOD_ATTR Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0  IReference_1_get_Value_m799E5FBDBDF133003671C206C7190A221D6BC40C (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t817291E0E32BE3C83987C618344F4830BA9C3A34* ____ireference_1_t817291E0E32BE3C83987C618344F4830BA9C3A34 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t817291E0E32BE3C83987C618344F4830BA9C3A34::IID, reinterpret_cast<void**>(&____ireference_1_t817291E0E32BE3C83987C618344F4830BA9C3A34));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0  returnValue = {};
	hr = ____ireference_1_t817291E0E32BE3C83987C618344F4830BA9C3A34->IReference_1_get_Value_m799E5FBDBDF133003671C206C7190A221D6BC40C(&returnValue);
	____ireference_1_t817291E0E32BE3C83987C618344F4830BA9C3A34->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.Rect>::get_Value()
extern "C" IL2CPP_METHOD_ATTR Rect_tC430FB498F3B42BBCD93E88C03BA3CBB77B60ACA  IReference_1_get_Value_mD70DC394007AE06DD463C810C4A6C833AE4F83CB (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t0383D46BD689BDB48118BCC40E516D48E99AC9C9* ____ireference_1_t0383D46BD689BDB48118BCC40E516D48E99AC9C9 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t0383D46BD689BDB48118BCC40E516D48E99AC9C9::IID, reinterpret_cast<void**>(&____ireference_1_t0383D46BD689BDB48118BCC40E516D48E99AC9C9));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Rect_tC430FB498F3B42BBCD93E88C03BA3CBB77B60ACA  returnValue = {};
	hr = ____ireference_1_t0383D46BD689BDB48118BCC40E516D48E99AC9C9->IReference_1_get_Value_mD70DC394007AE06DD463C810C4A6C833AE4F83CB(&returnValue);
	____ireference_1_t0383D46BD689BDB48118BCC40E516D48E99AC9C9->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.Size>::get_Value()
extern "C" IL2CPP_METHOD_ATTR Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2  IReference_1_get_Value_m354841434B2661412713D5B4951615197C260B13 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t2A8F8DFC7C3805C64001D19FB34B045D5B9C5D60* ____ireference_1_t2A8F8DFC7C3805C64001D19FB34B045D5B9C5D60 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t2A8F8DFC7C3805C64001D19FB34B045D5B9C5D60::IID, reinterpret_cast<void**>(&____ireference_1_t2A8F8DFC7C3805C64001D19FB34B045D5B9C5D60));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2  returnValue = {};
	hr = ____ireference_1_t2A8F8DFC7C3805C64001D19FB34B045D5B9C5D60->IReference_1_get_Value_m354841434B2661412713D5B4951615197C260B13(&returnValue);
	____ireference_1_t2A8F8DFC7C3805C64001D19FB34B045D5B9C5D60->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.Size>::get_Value()
extern "C" IL2CPP_METHOD_ATTR Size_t4766FF009097CE547F699B69250246058DA664D9  IReference_1_get_Value_mEEA056935DABABBA8E17B0CBDA7AF3596AF5E825 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t1C3EFAED54D294F78A828A79443DD579F84600A5* ____ireference_1_t1C3EFAED54D294F78A828A79443DD579F84600A5 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t1C3EFAED54D294F78A828A79443DD579F84600A5::IID, reinterpret_cast<void**>(&____ireference_1_t1C3EFAED54D294F78A828A79443DD579F84600A5));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Size_t4766FF009097CE547F699B69250246058DA664D9  returnValue = {};
	hr = ____ireference_1_t1C3EFAED54D294F78A828A79443DD579F84600A5->IReference_1_get_Value_mEEA056935DABABBA8E17B0CBDA7AF3596AF5E825(&returnValue);
	____ireference_1_t1C3EFAED54D294F78A828A79443DD579F84600A5->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.TimeSpan>::get_Value()
extern "C" IL2CPP_METHOD_ATTR TimeSpan_tD18885B289077804D4E82931E68E84181C072755  IReference_1_get_Value_mC6234E02A201EAFB66846D1AA800201A51B2CDF7 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t3C2FDD60AAF84C14D98EE687F95A2FE316F1D921* ____ireference_1_t3C2FDD60AAF84C14D98EE687F95A2FE316F1D921 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t3C2FDD60AAF84C14D98EE687F95A2FE316F1D921::IID, reinterpret_cast<void**>(&____ireference_1_t3C2FDD60AAF84C14D98EE687F95A2FE316F1D921));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	TimeSpan_tD18885B289077804D4E82931E68E84181C072755  returnValue = {};
	hr = ____ireference_1_t3C2FDD60AAF84C14D98EE687F95A2FE316F1D921->IReference_1_get_Value_mC6234E02A201EAFB66846D1AA800201A51B2CDF7(&returnValue);
	____ireference_1_t3C2FDD60AAF84C14D98EE687F95A2FE316F1D921->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.UniversalApiContract>::get_Value()
extern "C" IL2CPP_METHOD_ATTR UniversalApiContract_t2909295C70CE09107C85CD360BE6888A4D1078D9  IReference_1_get_Value_m2269DCAE519508A042AD9A68C026B7AA70901042 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_tC752D5284F00B4397E95E715F07700B7C452DA32* ____ireference_1_tC752D5284F00B4397E95E715F07700B7C452DA32 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_tC752D5284F00B4397E95E715F07700B7C452DA32::IID, reinterpret_cast<void**>(&____ireference_1_tC752D5284F00B4397E95E715F07700B7C452DA32));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	UniversalApiContract_t2909295C70CE09107C85CD360BE6888A4D1078D9  returnValue = {};
	hr = ____ireference_1_tC752D5284F00B4397E95E715F07700B7C452DA32->IReference_1_get_Value_m2269DCAE519508A042AD9A68C026B7AA70901042(&returnValue);
	____ireference_1_tC752D5284F00B4397E95E715F07700B7C452DA32->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Media.Capture.Frames.MediaFrameReaderStartStatus>::get_Value()
extern "C" IL2CPP_METHOD_ATTR int32_t IReference_1_get_Value_m413463E6EF3718DC6314D45C75A765AEDEAEF962 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_tE5BD14F08B97F2C269780DBBA4DB762ACA65B27E* ____ireference_1_tE5BD14F08B97F2C269780DBBA4DB762ACA65B27E = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_tE5BD14F08B97F2C269780DBBA4DB762ACA65B27E::IID, reinterpret_cast<void**>(&____ireference_1_tE5BD14F08B97F2C269780DBBA4DB762ACA65B27E));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int32_t returnValue = 0;
	hr = ____ireference_1_tE5BD14F08B97F2C269780DBBA4DB762ACA65B27E->IReference_1_get_Value_m413463E6EF3718DC6314D45C75A765AEDEAEF962(&returnValue);
	____ireference_1_tE5BD14F08B97F2C269780DBBA4DB762ACA65B27E->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Media.Capture.Frames.MediaFrameSourceKind>::get_Value()
extern "C" IL2CPP_METHOD_ATTR int32_t IReference_1_get_Value_mA54DDA04BB838C67B0EDBCBEEAF9C91644941DC0 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t8F8824D1419F72A070E018458DA7472480DABBD6* ____ireference_1_t8F8824D1419F72A070E018458DA7472480DABBD6 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t8F8824D1419F72A070E018458DA7472480DABBD6::IID, reinterpret_cast<void**>(&____ireference_1_t8F8824D1419F72A070E018458DA7472480DABBD6));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int32_t returnValue = 0;
	hr = ____ireference_1_t8F8824D1419F72A070E018458DA7472480DABBD6->IReference_1_get_Value_mA54DDA04BB838C67B0EDBCBEEAF9C91644941DC0(&returnValue);
	____ireference_1_t8F8824D1419F72A070E018458DA7472480DABBD6->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Media.Capture.MediaCaptureMemoryPreference>::get_Value()
extern "C" IL2CPP_METHOD_ATTR int32_t IReference_1_get_Value_m7763B3B236F58FDEA7756091EEA48871AE7280BA (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_tE21B253E6C5763096171C9D4ED5C801C4EF9D9D4* ____ireference_1_tE21B253E6C5763096171C9D4ED5C801C4EF9D9D4 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_tE21B253E6C5763096171C9D4ED5C801C4EF9D9D4::IID, reinterpret_cast<void**>(&____ireference_1_tE21B253E6C5763096171C9D4ED5C801C4EF9D9D4));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int32_t returnValue = 0;
	hr = ____ireference_1_tE21B253E6C5763096171C9D4ED5C801C4EF9D9D4->IReference_1_get_Value_m7763B3B236F58FDEA7756091EEA48871AE7280BA(&returnValue);
	____ireference_1_tE21B253E6C5763096171C9D4ED5C801C4EF9D9D4->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Media.Capture.MediaCategory>::get_Value()
extern "C" IL2CPP_METHOD_ATTR int32_t IReference_1_get_Value_mEBE5CA523565F9E91B35A757183BB9059D822C22 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t51E27B1BB3E47D06635A002FB0E18320396332E6* ____ireference_1_t51E27B1BB3E47D06635A002FB0E18320396332E6 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t51E27B1BB3E47D06635A002FB0E18320396332E6::IID, reinterpret_cast<void**>(&____ireference_1_t51E27B1BB3E47D06635A002FB0E18320396332E6));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int32_t returnValue = 0;
	hr = ____ireference_1_t51E27B1BB3E47D06635A002FB0E18320396332E6->IReference_1_get_Value_mEBE5CA523565F9E91B35A757183BB9059D822C22(&returnValue);
	____ireference_1_t51E27B1BB3E47D06635A002FB0E18320396332E6->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Media.Capture.MediaStreamType>::get_Value()
extern "C" IL2CPP_METHOD_ATTR int32_t IReference_1_get_Value_mC8972903AC24E6CFE2D0ABAFEA6FCA815E2828C7 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_tDF345447C0E2FF2E2B0D7EA5BD9B5F92E793AD10* ____ireference_1_tDF345447C0E2FF2E2B0D7EA5BD9B5F92E793AD10 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_tDF345447C0E2FF2E2B0D7EA5BD9B5F92E793AD10::IID, reinterpret_cast<void**>(&____ireference_1_tDF345447C0E2FF2E2B0D7EA5BD9B5F92E793AD10));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int32_t returnValue = 0;
	hr = ____ireference_1_tDF345447C0E2FF2E2B0D7EA5BD9B5F92E793AD10->IReference_1_get_Value_mC8972903AC24E6CFE2D0ABAFEA6FCA815E2828C7(&returnValue);
	____ireference_1_tDF345447C0E2FF2E2B0D7EA5BD9B5F92E793AD10->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Media.Capture.StreamingCaptureMode>::get_Value()
extern "C" IL2CPP_METHOD_ATTR int32_t IReference_1_get_Value_mACE7B80857116354E05C8B3F24CF4D555A337DC1 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t64B3328BF6F77DE2CE9A0EE8B97A59A0B5291AC4* ____ireference_1_t64B3328BF6F77DE2CE9A0EE8B97A59A0B5291AC4 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t64B3328BF6F77DE2CE9A0EE8B97A59A0B5291AC4::IID, reinterpret_cast<void**>(&____ireference_1_t64B3328BF6F77DE2CE9A0EE8B97A59A0B5291AC4));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int32_t returnValue = 0;
	hr = ____ireference_1_t64B3328BF6F77DE2CE9A0EE8B97A59A0B5291AC4->IReference_1_get_Value_mACE7B80857116354E05C8B3F24CF4D555A337DC1(&returnValue);
	____ireference_1_t64B3328BF6F77DE2CE9A0EE8B97A59A0B5291AC4->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Security.Cryptography.BinaryStringEncoding>::get_Value()
extern "C" IL2CPP_METHOD_ATTR int32_t IReference_1_get_Value_mCEFD7C8573F0EDB887FFE1C4E5892EAAAA0275D0 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t267B03B31FDCEA065B31F3EA0D9723AF4A2FE743* ____ireference_1_t267B03B31FDCEA065B31F3EA0D9723AF4A2FE743 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t267B03B31FDCEA065B31F3EA0D9723AF4A2FE743::IID, reinterpret_cast<void**>(&____ireference_1_t267B03B31FDCEA065B31F3EA0D9723AF4A2FE743));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int32_t returnValue = 0;
	hr = ____ireference_1_t267B03B31FDCEA065B31F3EA0D9723AF4A2FE743->IReference_1_get_Value_mCEFD7C8573F0EDB887FFE1C4E5892EAAAA0275D0(&returnValue);
	____ireference_1_t267B03B31FDCEA065B31F3EA0D9723AF4A2FE743->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Storage.CreationCollisionOption>::get_Value()
extern "C" IL2CPP_METHOD_ATTR int32_t IReference_1_get_Value_mD022CF12AFA037E3A391C619D1DF5926221967A4 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_tF7295EBC968A80454550BB2DFEBDE7FDA5F935F6* ____ireference_1_tF7295EBC968A80454550BB2DFEBDE7FDA5F935F6 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_tF7295EBC968A80454550BB2DFEBDE7FDA5F935F6::IID, reinterpret_cast<void**>(&____ireference_1_tF7295EBC968A80454550BB2DFEBDE7FDA5F935F6));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int32_t returnValue = 0;
	hr = ____ireference_1_tF7295EBC968A80454550BB2DFEBDE7FDA5F935F6->IReference_1_get_Value_mD022CF12AFA037E3A391C619D1DF5926221967A4(&returnValue);
	____ireference_1_tF7295EBC968A80454550BB2DFEBDE7FDA5F935F6->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Storage.FileAccessMode>::get_Value()
extern "C" IL2CPP_METHOD_ATTR int32_t IReference_1_get_Value_mC3AB7079E1F409743043896D95D63259268AE354 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_tB37985294DE2468EB2EC7D40546C07FD1A71E934* ____ireference_1_tB37985294DE2468EB2EC7D40546C07FD1A71E934 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_tB37985294DE2468EB2EC7D40546C07FD1A71E934::IID, reinterpret_cast<void**>(&____ireference_1_tB37985294DE2468EB2EC7D40546C07FD1A71E934));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int32_t returnValue = 0;
	hr = ____ireference_1_tB37985294DE2468EB2EC7D40546C07FD1A71E934->IReference_1_get_Value_mC3AB7079E1F409743043896D95D63259268AE354(&returnValue);
	____ireference_1_tB37985294DE2468EB2EC7D40546C07FD1A71E934->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Storage.Streams.InputStreamOptions>::get_Value()
extern "C" IL2CPP_METHOD_ATTR uint32_t IReference_1_get_Value_m29DABAFAF45FE5B35150EB56DB1AC7608AC04108 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t4D805BBA32CE3FB48729C326E9DCD206E80E52DC* ____ireference_1_t4D805BBA32CE3FB48729C326E9DCD206E80E52DC = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t4D805BBA32CE3FB48729C326E9DCD206E80E52DC::IID, reinterpret_cast<void**>(&____ireference_1_t4D805BBA32CE3FB48729C326E9DCD206E80E52DC));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ireference_1_t4D805BBA32CE3FB48729C326E9DCD206E80E52DC->IReference_1_get_Value_m29DABAFAF45FE5B35150EB56DB1AC7608AC04108(&returnValue);
	____ireference_1_t4D805BBA32CE3FB48729C326E9DCD206E80E52DC->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.UI.Core.CoreDispatcherPriority>::get_Value()
extern "C" IL2CPP_METHOD_ATTR int32_t IReference_1_get_Value_m76D034B95E648EDCA29A3DD36B81AABCD432EBBF (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_tE126FD34B55F1220FE2E89A99968D3A34361ED11* ____ireference_1_tE126FD34B55F1220FE2E89A99968D3A34361ED11 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_tE126FD34B55F1220FE2E89A99968D3A34361ED11::IID, reinterpret_cast<void**>(&____ireference_1_tE126FD34B55F1220FE2E89A99968D3A34361ED11));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int32_t returnValue = 0;
	hr = ____ireference_1_tE126FD34B55F1220FE2E89A99968D3A34361ED11->IReference_1_get_Value_m76D034B95E648EDCA29A3DD36B81AABCD432EBBF(&returnValue);
	____ireference_1_tE126FD34B55F1220FE2E89A99968D3A34361ED11->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.UI.Xaml.Interop.NotifyCollectionChangedAction>::get_Value()
extern "C" IL2CPP_METHOD_ATTR int32_t IReference_1_get_Value_m6D3C2F5C181F41C7DCBECB612D569254FF735264 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_tAA1B3E47098CC9B4C78CD90173CB5A066702EB6E* ____ireference_1_tAA1B3E47098CC9B4C78CD90173CB5A066702EB6E = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_tAA1B3E47098CC9B4C78CD90173CB5A066702EB6E::IID, reinterpret_cast<void**>(&____ireference_1_tAA1B3E47098CC9B4C78CD90173CB5A066702EB6E));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int32_t returnValue = 0;
	hr = ____ireference_1_tAA1B3E47098CC9B4C78CD90173CB5A066702EB6E->IReference_1_get_Value_m6D3C2F5C181F41C7DCBECB612D569254FF735264(&returnValue);
	____ireference_1_tAA1B3E47098CC9B4C78CD90173CB5A066702EB6E->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.UI.Xaml.Interop.TypeKind>::get_Value()
extern "C" IL2CPP_METHOD_ATTR int32_t IReference_1_get_Value_m36783109B74EB29CB28AF73DD7E207957146F018 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_tC5997DB9C48F0D04F8FD9B6E0E05E0D1AD700882* ____ireference_1_tC5997DB9C48F0D04F8FD9B6E0E05E0D1AD700882 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_tC5997DB9C48F0D04F8FD9B6E0E05E0D1AD700882::IID, reinterpret_cast<void**>(&____ireference_1_tC5997DB9C48F0D04F8FD9B6E0E05E0D1AD700882));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int32_t returnValue = 0;
	hr = ____ireference_1_tC5997DB9C48F0D04F8FD9B6E0E05E0D1AD700882->IReference_1_get_Value_m36783109B74EB29CB28AF73DD7E207957146F018(&returnValue);
	____ireference_1_tC5997DB9C48F0D04F8FD9B6E0E05E0D1AD700882->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.UI.Xaml.Interop.TypeName>::get_Value()
extern "C" IL2CPP_METHOD_ATTR TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC  IReference_1_get_Value_mAD21B0BAD0AA9FB92F7A686B1DEE50AB61A0B5A3 (RuntimeObject* __this, const RuntimeMethod* method)
{


	IReference_1_t05125DEBFACCF631533E1BB325E91CC8E587D7AD* ____ireference_1_t05125DEBFACCF631533E1BB325E91CC8E587D7AD = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t05125DEBFACCF631533E1BB325E91CC8E587D7AD::IID, reinterpret_cast<void**>(&____ireference_1_t05125DEBFACCF631533E1BB325E91CC8E587D7AD));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC_marshaled_windows_runtime returnValue = {};
	hr = ____ireference_1_t05125DEBFACCF631533E1BB325E91CC8E587D7AD->IReference_1_get_Value_mAD21B0BAD0AA9FB92F7A686B1DEE50AB61A0B5A3(&returnValue);
	____ireference_1_t05125DEBFACCF631533E1BB325E91CC8E587D7AD->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC  _returnValue_unmarshaled;
	memset(&_returnValue_unmarshaled, 0, sizeof(_returnValue_unmarshaled));
	TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC_marshal_windows_runtime_back(returnValue, _returnValue_unmarshaled);

	// Marshaling cleanup of return value native representation
	TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC_marshal_windows_runtime_cleanup(returnValue);

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Windows.Foundation.TypedEventHandler`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void TypedEventHandler_2__ctor_mF868AC9F8D577D621BB083A46E846F62460B31F5_gshared (TypedEventHandler_2_t92DE3BFDCE6B7440B94713B44A93FB9515C3550C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Windows.Foundation.TypedEventHandler`2<System.Object,System.Object>::Invoke(TSender,TResult)
extern "C" IL2CPP_METHOD_ATTR void TypedEventHandler_2_Invoke_m6C97DE5DB76454B1184C5D0191F7A4EC125172F1_gshared (TypedEventHandler_2_t92DE3BFDCE6B7440B94713B44A93FB9515C3550C * __this, RuntimeObject * ___sender0, RuntimeObject * ___args1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 2)
				{
					// open
					typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___sender0, ___args1, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___args1, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___sender0, ___args1, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___sender0, ___args1);
							else
								GenericVirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___sender0, ___args1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sender0, ___args1);
							else
								VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sender0, ___args1);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___args1, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sender0, ___args1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___args1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___sender0, ___args1, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___sender0, ___args1);
						else
							GenericVirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___sender0, ___args1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sender0, ___args1);
						else
							VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sender0, ___args1);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___args1, targetMethod);
			}
		}
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
