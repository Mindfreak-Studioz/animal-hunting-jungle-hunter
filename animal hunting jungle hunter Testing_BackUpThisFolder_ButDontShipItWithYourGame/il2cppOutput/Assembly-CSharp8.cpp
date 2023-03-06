#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtualActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>
struct Dictionary_2_t74542AFEF76A87F0A6EE38215ABCD050C900E0E2;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>
struct Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>,System.Boolean>
struct Func_2_t4674CE269C901F4BD6F1A0EE18182B888C45DBB5;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerable_1_t60509816D8966320E2A9660FC756B6C440ADFC50;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>>
struct IEnumerable_1_t0923CE760144B7836D967E1CFCAAFF840BCD9D1A;
// System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode>
struct IEnumerable_1_tE6D057AF215588DA9A4145F9FCA0ADF5CFC7F6BD;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>>
struct IEnumerator_1_t799CC38C0A81DCE9E0AA3F703EEDD012A4F7EB71;
// System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode>
struct IEnumerator_1_t93603AF1D6FE895E5B99825CB3391A1EA969D8DE;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_tB45A861D090B15129521119AE48ED3813820A974;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,SimpleJSON.JSONNode>
struct KeyCollection_tB5791F6D12B5D2344D02EC386DBEE217775A02B9;
// System.Collections.Generic.List`1<SimpleJSON.JSONNode>
struct List_1_tD66F8EBB7E2F92261ACAA473BBD1879737E6783C;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,SimpleJSON.JSONNode>
struct ValueCollection_t66DDA0C13A571E4121D5F4F03B4FE287A1738116;
// System.Collections.Generic.Dictionary`2/Entry<System.String,SimpleJSON.JSONNode>[]
struct EntryU5BU5D_tC036A82CE7AB2C3926C9E9703E243A620FFC74D5;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// SimpleJSON.JSONNode[]
struct JSONNodeU5BU5D_t71421879B329DE21CBBE1CA17D8851930AE5C3C4;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.IO.BinaryWriter
struct BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Text.Encoder
struct Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// SimpleJSON.JSONArray
struct JSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2;
// SimpleJSON.JSONBool
struct JSONBool_tD0B1D526BA8A27DAB4559E54BBDFB94FA1A8B1D9;
// SimpleJSON.JSONLazyCreator
struct JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C;
// SimpleJSON.JSONNode
struct JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653;
// SimpleJSON.JSONNull
struct JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595;
// SimpleJSON.JSONNumber
struct JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA;
// SimpleJSON.JSONObject
struct JSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118;
// SimpleJSON.JSONString
struct JSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// SimpleJSON.JSONArray/<get_Children>d__22
struct U3Cget_ChildrenU3Ed__22_t0BBD3CB230460AF1CA521BEBCBD1A39F74A02822;
// SimpleJSON.JSONNode/<get_Children>d__40
struct U3Cget_ChildrenU3Ed__40_tD8DB7CAAB4657CD56F7E69A2896BF9BEF44DC074;
// SimpleJSON.JSONNode/<get_DeepChildren>d__42
struct U3Cget_DeepChildrenU3Ed__42_tF52AF8636771CA100B6375F869B3C3BF8F6ADAF3;
// SimpleJSON.JSONNode/Enumerator
struct Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4;
// SimpleJSON.JSONNode/LinqEnumerator
struct LinqEnumerator_t6B1FE14759D1722ED209D8FEBAE0761C67B0D7A6;
// SimpleJSON.JSONObject/<>c__DisplayClass21_0
struct U3CU3Ec__DisplayClass21_0_t651DB8FCB045D590FF5910F1E9917C209DC429BA;
// SimpleJSON.JSONObject/<get_Children>d__23
struct U3Cget_ChildrenU3Ed__23_tD9157FC1CC7E1337F0FA7AF88F80A749399578AC;

IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t74542AFEF76A87F0A6EE38215ABCD050C900E0E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t4674CE269C901F4BD6F1A0EE18182B888C45DBB5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tE6D057AF215588DA9A4145F9FCA0ADF5CFC7F6BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t93603AF1D6FE895E5B99825CB3391A1EA969D8DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JSONBool_tD0B1D526BA8A27DAB4559E54BBDFB94FA1A8B1D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyValuePair_2_tC25A1CF74139C27B48AA7E7BA0EAE31F240EA3EF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LinqEnumerator_t6B1FE14759D1722ED209D8FEBAE0761C67B0D7A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD66F8EBB7E2F92261ACAA473BBD1879737E6783C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass21_0_t651DB8FCB045D590FF5910F1E9917C209DC429BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Cget_ChildrenU3Ed__22_t0BBD3CB230460AF1CA521BEBCBD1A39F74A02822_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Cget_ChildrenU3Ed__23_tD9157FC1CC7E1337F0FA7AF88F80A749399578AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Cget_ChildrenU3Ed__40_tD8DB7CAAB4657CD56F7E69A2896BF9BEF44DC074_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Cget_DeepChildrenU3Ed__42_tF52AF8636771CA100B6375F869B3C3BF8F6ADAF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0767326DBE1DD31063256737FD019DC6682353E2;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
IL2CPP_EXTERN_C String_t* _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m0A53846E31C3AFF0D883504E62257998824A6650_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m772241BA9070E18A75464D09201A0C8F65E1F657_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m9ADA9DC934EF1A0048D21D89875DB863F5FF5908_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m72C4C408622F37344F5BB59F0E0A6C32C34DD444_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m24C963242223589068186A2B22F6555FBB9D8C97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m3CF989BD764D8F7838E6D8E449D354B1CF7BB385_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mAD5BCB746F2E2424B09CA2BDD03E42770B068809_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_mB48527A5126C9884983E7BDF7C198EB79F418816_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m0CF9B92648E889A9619C7A89391273130D5A092B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ElementAt_TisKeyValuePair_2_tC25A1CF74139C27B48AA7E7BA0EAE31F240EA3EF_m5904D22F70F1DB45D3856B3B2ABF559CC44CCE5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_First_TisKeyValuePair_2_tC25A1CF74139C27B48AA7E7BA0EAE31F240EA3EF_m5DFB7AB1A627ED5971C67D34212F3CEEFE6B0B73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisKeyValuePair_2_tC25A1CF74139C27B48AA7E7BA0EAE31F240EA3EF_m9C8FA5E47A24524DE3A4F1F6E26E21615BF8477D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m756221DECDDF7233667BACEB87D32CDCC5EC56AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m883E0A6A001B379F5451A9DC6C151D223F9BD448_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m95D8AAFAF60B6E536EA7429F49C5FD5AC7A242BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m00944D3982456679FF855520913693EB62A293C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mBA58967C724F00BFA740985C05C1A2B8E5FB583D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mF65727235CD00D1C771CF27D5F360ED62E1EFDF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m77AFF0C2B6AD157424C10FFEB116D213835CF084_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m8F2C97D8503D752215E004A880195B64917CEE95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mF70405758E51B64B1E5E4FA7764450689DA30832_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyCollection_GetEnumerator_m89A6615E37C327BA711371335F347D86406D4E22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2__ctor_m8C7678C8F41122663CAEA0A3046D2699D7677E03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m207EFB432FBB579ECA85B5399A1E266D0D8E3641_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mE11898FE6C7E851793D8B6E7B740E9828BA6EF94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m3C60D77B9288E9619EBC7F28115464996321E97D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m7DDCF28102A20EEBF067D96F91DFE18F03A96C5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m24DE650BE95A807BAE35507BBA507DD5480128FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mEFC31D4DE59FCE14782FF159FD633CDFEF369438_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m334012939E9E81EC23774AAEF7341D165260178E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m6F782FA6EB1B2E2F1C3530246C446F4DEEA30190_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m9E1232D0A0D221987BA1E611491D57A00AFC1721_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_mF945957677A6D59A7A530133DF6FA14CC374C9F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass21_0_U3CRemoveU3Eb__0_m8B35D441B276B749481FF797FC51A256A7A56105_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cget_ChildrenU3Ed__22_System_Collections_IEnumerator_Reset_m5FDF47F215C3ECA0B88DBDBA67D9E23939FB6E75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cget_ChildrenU3Ed__23_System_Collections_IEnumerator_Reset_mE65CCEC3E7FCE86596AF14C5821DA3D5F76C34E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cget_ChildrenU3Ed__40_System_Collections_IEnumerator_Reset_m5375DEDEB65015D0634741057877D504BF18526F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cget_DeepChildrenU3Ed__42_System_Collections_IEnumerator_Reset_m3B21F82F9CF8A35C11BD0D4B635E29F13507C5C3_RuntimeMethod_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4;;
struct Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4_marshaled_com;
struct Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4_marshaled_com;;
struct Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4_marshaled_pinvoke;
struct Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4_marshaled_pinvoke;;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>
struct Dictionary_2_t74542AFEF76A87F0A6EE38215ABCD050C900E0E2  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tC036A82CE7AB2C3926C9E9703E243A620FFC74D5* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tB5791F6D12B5D2344D02EC386DBEE217775A02B9* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t66DDA0C13A571E4121D5F4F03B4FE287A1738116* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,SimpleJSON.JSONNode>
struct KeyCollection_tB5791F6D12B5D2344D02EC386DBEE217775A02B9  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_t74542AFEF76A87F0A6EE38215ABCD050C900E0E2* ____dictionary_0;
};

// System.Collections.Generic.List`1<SimpleJSON.JSONNode>
struct List_1_tD66F8EBB7E2F92261ACAA473BBD1879737E6783C  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	JSONNodeU5BU5D_t71421879B329DE21CBBE1CA17D8851930AE5C3C4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tD66F8EBB7E2F92261ACAA473BBD1879737E6783C_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	JSONNodeU5BU5D_t71421879B329DE21CBBE1CA17D8851930AE5C3C4* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.IO.BinaryWriter
struct BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E  : public RuntimeObject
{
	// System.IO.Stream System.IO.BinaryWriter::OutStream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___OutStream_1;
	// System.Byte[] System.IO.BinaryWriter::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_2;
	// System.Text.Encoding System.IO.BinaryWriter::_encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____encoding_3;
	// System.Text.Encoder System.IO.BinaryWriter::_encoder
	Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA* ____encoder_4;
	// System.Boolean System.IO.BinaryWriter::_leaveOpen
	bool ____leaveOpen_5;
	// System.Byte[] System.IO.BinaryWriter::_largeByteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____largeByteBuffer_6;
	// System.Int32 System.IO.BinaryWriter::_maxChars
	int32_t ____maxChars_7;
};

struct BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_StaticFields
{
	// System.IO.BinaryWriter System.IO.BinaryWriter::Null
	BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___Null_0;
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};

struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// SimpleJSON.JSON
struct JSON_tE597692294F0F0CD8F25BE27A4C9D44F0ACCBE86  : public RuntimeObject
{
};

// SimpleJSON.JSONNode
struct JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653  : public RuntimeObject
{
};

struct JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653_StaticFields
{
	// System.Boolean SimpleJSON.JSONNode::forceASCII
	bool ___forceASCII_0;
	// System.Boolean SimpleJSON.JSONNode::longAsString
	bool ___longAsString_1;
	// SimpleJSON.JSONContainerType SimpleJSON.JSONNode::VectorContainerType
	int32_t ___VectorContainerType_3;
	// SimpleJSON.JSONContainerType SimpleJSON.JSONNode::QuaternionContainerType
	int32_t ___QuaternionContainerType_4;
	// SimpleJSON.JSONContainerType SimpleJSON.JSONNode::RectContainerType
	int32_t ___RectContainerType_5;
};

struct JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653_ThreadStaticFields
{
	// System.Text.StringBuilder SimpleJSON.JSONNode::m_EscapeBuilder
	StringBuilder_t* ___m_EscapeBuilder_2;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// SimpleJSON.JSONNode/<get_Children>d__40
struct U3Cget_ChildrenU3Ed__40_tD8DB7CAAB4657CD56F7E69A2896BF9BEF44DC074  : public RuntimeObject
{
	// System.Int32 SimpleJSON.JSONNode/<get_Children>d__40::<>1__state
	int32_t ___U3CU3E1__state_0;
	// SimpleJSON.JSONNode SimpleJSON.JSONNode/<get_Children>d__40::<>2__current
	JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* ___U3CU3E2__current_1;
	// System.Int32 SimpleJSON.JSONNode/<get_Children>d__40::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
};

// SimpleJSON.JSONNode/<get_DeepChildren>d__42
struct U3Cget_DeepChildrenU3Ed__42_tF52AF8636771CA100B6375F869B3C3BF8F6ADAF3  : public RuntimeObject
{
	// System.Int32 SimpleJSON.JSONNode/<get_DeepChildren>d__42::<>1__state
	int32_t ___U3CU3E1__state_0;
	// SimpleJSON.JSONNode SimpleJSON.JSONNode/<get_DeepChildren>d__42::<>2__current
	JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* ___U3CU3E2__current_1;
	// System.Int32 SimpleJSON.JSONNode/<get_DeepChildren>d__42::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// SimpleJSON.JSONNode SimpleJSON.JSONNode/<get_DeepChildren>d__42::<>4__this
	JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* ___U3CU3E4__this_3;
	// System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode/<get_DeepChildren>d__42::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_4;
	// System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode/<get_DeepChildren>d__42::<>7__wrap2
	RuntimeObject* ___U3CU3E7__wrap2_5;
};

// SimpleJSON.JSONObject/<>c__DisplayClass21_0
struct U3CU3Ec__DisplayClass21_0_t651DB8FCB045D590FF5910F1E9917C209DC429BA  : public RuntimeObject
{
	// SimpleJSON.JSONNode SimpleJSON.JSONObject/<>c__DisplayClass21_0::aNode
	JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* ___aNode_0;
};

// System.Collections.Generic.List`1/Enumerator<SimpleJSON.JSONNode>
struct Enumerator_tC64B3D14117706116B48376FC4C0B294E0FFD944 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tD66F8EBB7E2F92261ACAA473BBD1879737E6783C* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>
struct Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_version
	int32_t ____version_2;
	// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_currentKey
	RuntimeObject* ____currentKey_3;
};

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,SimpleJSON.JSONNode>
struct Enumerator_tB4BE7AC63B98A2FCDE82B99DC9943B069ECCF23C 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_dictionary
	Dictionary_2_t74542AFEF76A87F0A6EE38215ABCD050C900E0E2* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_version
	int32_t ____version_2;
	// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_currentKey
	String_t* ____currentKey_3;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>
struct KeyValuePair_2_tC25A1CF74139C27B48AA7E7BA0EAE31F240EA3EF 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* ___value_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Decimal
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Decimal::flags
			int32_t ___flags_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___flags_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___hi_6_OffsetPadding[4];
			// System.Int32 System.Decimal::hi
			int32_t ___hi_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___hi_6_OffsetPadding_forAlignmentOnly[4];
			int32_t ___hi_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___lo_7_OffsetPadding[8];
			// System.Int32 System.Decimal::lo
			int32_t ___lo_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___lo_7_OffsetPadding_forAlignmentOnly[8];
			int32_t ___lo_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___mid_8_OffsetPadding[12];
			// System.Int32 System.Decimal::mid
			int32_t ___mid_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___mid_8_OffsetPadding_forAlignmentOnly[12];
			int32_t ___mid_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_9_OffsetPadding[8];
			// System.UInt64 System.Decimal::ulomidLE
			uint64_t ___ulomidLE_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_9_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_9_forAlignmentOnly;
		};
	};
};

struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields
{
	// System.Decimal System.Decimal::Zero
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___Zero_0;
	// System.Decimal System.Decimal::One
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___One_1;
	// System.Decimal System.Decimal::MinusOne
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinusOne_2;
	// System.Decimal System.Decimal::MaxValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MaxValue_3;
	// System.Decimal System.Decimal::MinValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinValue_4;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Guid
struct Guid_t 
{
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
};

struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// SimpleJSON.JSONArray
struct JSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2  : public JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653
{
	// System.Collections.Generic.List`1<SimpleJSON.JSONNode> SimpleJSON.JSONArray::m_List
	List_1_tD66F8EBB7E2F92261ACAA473BBD1879737E6783C* ___m_List_6;
	// System.Boolean SimpleJSON.JSONArray::inline
	bool ___inline_7;
};

// SimpleJSON.JSONBool
struct JSONBool_tD0B1D526BA8A27DAB4559E54BBDFB94FA1A8B1D9  : public JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653
{
	// System.Boolean SimpleJSON.JSONBool::m_Data
	bool ___m_Data_6;
};

// SimpleJSON.JSONLazyCreator
struct JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C  : public JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653
{
	// SimpleJSON.JSONNode SimpleJSON.JSONLazyCreator::m_Node
	JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* ___m_Node_6;
	// System.String SimpleJSON.JSONLazyCreator::m_Key
	String_t* ___m_Key_7;
};

// SimpleJSON.JSONNull
struct JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595  : public JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653
{
};

struct JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595_StaticFields
{
	// SimpleJSON.JSONNull SimpleJSON.JSONNull::m_StaticInstance
	JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595* ___m_StaticInstance_6;
	// System.Boolean SimpleJSON.JSONNull::reuseSameInstance
	bool ___reuseSameInstance_7;
};

// SimpleJSON.JSONNumber
struct JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA  : public JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653
{
	// System.Double SimpleJSON.JSONNumber::m_Data
	double ___m_Data_6;
};

// SimpleJSON.JSONObject
struct JSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118  : public JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653
{
	// System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode> SimpleJSON.JSONObject::m_Dict
	Dictionary_2_t74542AFEF76A87F0A6EE38215ABCD050C900E0E2* ___m_Dict_6;
	// System.Boolean SimpleJSON.JSONObject::inline
	bool ___inline_7;
};

// SimpleJSON.JSONString
struct JSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4  : public JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653
{
	// System.String SimpleJSON.JSONString::m_Data
	String_t* ___m_Data_6;
};

// System.SByte
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12
struct __StaticArrayInitTypeSizeU3D12_t1BDD2193C3F925556BCD5FF35C0AC52DDB0CAB8F 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_t1BDD2193C3F925556BCD5FF35C0AC52DDB0CAB8F__padding[12];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
struct __StaticArrayInitTypeSizeU3D32_tC3894D25C1E879699FE1C9BAB1BBF2787B405069 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_tC3894D25C1E879699FE1C9BAB1BBF2787B405069__padding[32];
	};
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,SimpleJSON.JSONNode>
struct Enumerator_t0882EABB7914927B55F113EC1FC8D52BA871F911 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t74542AFEF76A87F0A6EE38215ABCD050C900E0E2* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tC25A1CF74139C27B48AA7E7BA0EAE31F240EA3EF ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::067EAF3F727B985767F95E6014895724A51BEC050B158CBF78429570BF08F888
	__StaticArrayInitTypeSizeU3D32_tC3894D25C1E879699FE1C9BAB1BBF2787B405069 ___067EAF3F727B985767F95E6014895724A51BEC050B158CBF78429570BF08F888_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::1C44884CF68478613962F6D577A99B33A15DF781948F0C78B8E7C859CC87126B
	__StaticArrayInitTypeSizeU3D12_t1BDD2193C3F925556BCD5FF35C0AC52DDB0CAB8F ___1C44884CF68478613962F6D577A99B33A15DF781948F0C78B8E7C859CC87126B_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::546A1CF4CDF70DBFD7CB48204B6DC0EE9C6DB1943D35F9E74D1811A8961D2475
	__StaticArrayInitTypeSizeU3D12_t1BDD2193C3F925556BCD5FF35C0AC52DDB0CAB8F ___546A1CF4CDF70DBFD7CB48204B6DC0EE9C6DB1943D35F9E74D1811A8961D2475_2;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// SimpleJSON.JSONArray/<get_Children>d__22
struct U3Cget_ChildrenU3Ed__22_t0BBD3CB230460AF1CA521BEBCBD1A39F74A02822  : public RuntimeObject
{
	// System.Int32 SimpleJSON.JSONArray/<get_Children>d__22::<>1__state
	int32_t ___U3CU3E1__state_0;
	// SimpleJSON.JSONNode SimpleJSON.JSONArray/<get_Children>d__22::<>2__current
	JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* ___U3CU3E2__current_1;
	// System.Int32 SimpleJSON.JSONArray/<get_Children>d__22::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// SimpleJSON.JSONArray SimpleJSON.JSONArray/<get_Children>d__22::<>4__this
	JSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2* ___U3CU3E4__this_3;
	// System.Collections.Generic.List`1/Enumerator<SimpleJSON.JSONNode> SimpleJSON.JSONArray/<get_Children>d__22::<>7__wrap1
	Enumerator_tC64B3D14117706116B48376FC4C0B294E0FFD944 ___U3CU3E7__wrap1_4;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// SimpleJSON.JSONNode/Enumerator
struct Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4 
{
	// SimpleJSON.JSONNode/Enumerator/Type SimpleJSON.JSONNode/Enumerator::type
	int32_t ___type_0;
	// System.Collections.Generic.Dictionary`2/Enumerator<System.String,SimpleJSON.JSONNode> SimpleJSON.JSONNode/Enumerator::m_Object
	Enumerator_t0882EABB7914927B55F113EC1FC8D52BA871F911 ___m_Object_1;
	// System.Collections.Generic.List`1/Enumerator<SimpleJSON.JSONNode> SimpleJSON.JSONNode/Enumerator::m_Array
	Enumerator_tC64B3D14117706116B48376FC4C0B294E0FFD944 ___m_Array_2;
};
// Native definition for P/Invoke marshalling of SimpleJSON.JSONNode/Enumerator
struct Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4_marshaled_pinvoke
{
	int32_t ___type_0;
	Enumerator_t0882EABB7914927B55F113EC1FC8D52BA871F911 ___m_Object_1;
	Enumerator_tC64B3D14117706116B48376FC4C0B294E0FFD944 ___m_Array_2;
};
// Native definition for COM marshalling of SimpleJSON.JSONNode/Enumerator
struct Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4_marshaled_com
{
	int32_t ___type_0;
	Enumerator_t0882EABB7914927B55F113EC1FC8D52BA871F911 ___m_Object_1;
	Enumerator_tC64B3D14117706116B48376FC4C0B294E0FFD944 ___m_Array_2;
};

// SimpleJSON.JSONObject/<get_Children>d__23
struct U3Cget_ChildrenU3Ed__23_tD9157FC1CC7E1337F0FA7AF88F80A749399578AC  : public RuntimeObject
{
	// System.Int32 SimpleJSON.JSONObject/<get_Children>d__23::<>1__state
	int32_t ___U3CU3E1__state_0;
	// SimpleJSON.JSONNode SimpleJSON.JSONObject/<get_Children>d__23::<>2__current
	JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* ___U3CU3E2__current_1;
	// System.Int32 SimpleJSON.JSONObject/<get_Children>d__23::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// SimpleJSON.JSONObject SimpleJSON.JSONObject/<get_Children>d__23::<>4__this
	JSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118* ___U3CU3E4__this_3;
	// System.Collections.Generic.Dictionary`2/Enumerator<System.String,SimpleJSON.JSONNode> SimpleJSON.JSONObject/<get_Children>d__23::<>7__wrap1
	Enumerator_t0882EABB7914927B55F113EC1FC8D52BA871F911 ___U3CU3E7__wrap1_4;
};

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>,System.Boolean>
struct Func_2_t4674CE269C901F4BD6F1A0EE18182B888C45DBB5  : public MulticastDelegate_t
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// SimpleJSON.JSONNode/KeyEnumerator
struct KeyEnumerator_t927DD8FD7C7D67CBE611D33C16AF70CDF793CDCF 
{
	// SimpleJSON.JSONNode/Enumerator SimpleJSON.JSONNode/KeyEnumerator::m_Enumerator
	Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4 ___m_Enumerator_0;
};
// Native definition for P/Invoke marshalling of SimpleJSON.JSONNode/KeyEnumerator
struct KeyEnumerator_t927DD8FD7C7D67CBE611D33C16AF70CDF793CDCF_marshaled_pinvoke
{
	Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4_marshaled_pinvoke ___m_Enumerator_0;
};
// Native definition for COM marshalling of SimpleJSON.JSONNode/KeyEnumerator
struct KeyEnumerator_t927DD8FD7C7D67CBE611D33C16AF70CDF793CDCF_marshaled_com
{
	Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4_marshaled_com ___m_Enumerator_0;
};

// SimpleJSON.JSONNode/LinqEnumerator
struct LinqEnumerator_t6B1FE14759D1722ED209D8FEBAE0761C67B0D7A6  : public RuntimeObject
{
	// SimpleJSON.JSONNode SimpleJSON.JSONNode/LinqEnumerator::m_Node
	JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* ___m_Node_0;
	// SimpleJSON.JSONNode/Enumerator SimpleJSON.JSONNode/LinqEnumerator::m_Enumerator
	Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4 ___m_Enumerator_1;
};

// SimpleJSON.JSONNode/ValueEnumerator
struct ValueEnumerator_tD3C6F06F8E91A96073FAEE3822232DFF6AC63FB6 
{
	// SimpleJSON.JSONNode/Enumerator SimpleJSON.JSONNode/ValueEnumerator::m_Enumerator
	Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4 ___m_Enumerator_0;
};
// Native definition for P/Invoke marshalling of SimpleJSON.JSONNode/ValueEnumerator
struct ValueEnumerator_tD3C6F06F8E91A96073FAEE3822232DFF6AC63FB6_marshaled_pinvoke
{
	Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4_marshaled_pinvoke ___m_Enumerator_0;
};
// Native definition for COM marshalling of SimpleJSON.JSONNode/ValueEnumerator
struct ValueEnumerator_tD3C6F06F8E91A96073FAEE3822232DFF6AC63FB6_marshaled_com
{
	Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4_marshaled_com ___m_Enumerator_0;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};

IL2CPP_EXTERN_C void Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4_marshal_pinvoke(const Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4& unmarshaled, Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4_marshal_pinvoke_back(const Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4_marshaled_pinvoke& marshaled, Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4& unmarshaled);
IL2CPP_EXTERN_C void Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4_marshal_pinvoke_cleanup(Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4_marshal_com(const Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4& unmarshaled, Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4_marshaled_com& marshaled);
IL2CPP_EXTERN_C void Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4_marshal_com_back(const Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4_marshaled_com& marshaled, Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4& unmarshaled);
IL2CPP_EXTERN_C void Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4_marshal_com_cleanup(Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4_marshaled_com& marshaled);

// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m0D5C3E0BE2D37252D3F4E0F0EA9A13C9458D4950_gshared (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::ElementAt<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerable_ElementAt_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_mD78C04A7CBBD94F962638610BF19A5097A7E0ECD_gshared (RuntimeObject* ___source0, int32_t ___index1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m999A10C26DDF74143AD155662D58037B37AB83F7_gshared (Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_mB0DE37F992A224BD3B6FCB4EEF30FDDEA7540412_gshared (RuntimeObject* ___source0, Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* ___predicate1, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::First<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerable_First_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_m4EDB83358F4E30FA0404D7F760F652673F6787F1_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* Dictionary_2_get_Keys_m72D290F90654BFD683FA7AA7C63D9F4F692218B6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF KeyCollection_GetEnumerator_m7E77FBA7DE2D3876EC02F396712C4AA5B1D535A5_gshared (KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mEB2A61F3F3F420C1B1DFD5C74EEFD4BD7761BCF7_gshared (Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mD6472FA27D28B9AE64A0FEF796C72ABBC2420EBF_gshared_inline (Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mB5E00F11BCA3AC963F9BA72659FA76B107863F3C_gshared (Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;

// System.Boolean SimpleJSON.JSONNode/Enumerator::get_IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_get_IsValid_mBC273331DC1699FF46BD3621AE5059A54AD98BA6 (Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4* __this, const RuntimeMethod* method) ;
// System.Void SimpleJSON.JSONNode/Enumerator::.ctor(System.Collections.Generic.List`1/Enumerator<SimpleJSON.JSONNode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mF21239C69620D815F8CD34F022BE18E9DAF9CB10 (Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4* __this, Enumerator_tC64B3D14117706116B48376FC4C0B294E0FFD944 ___aArrayEnum0, const RuntimeMethod* method) ;
// System.Void SimpleJSON.JSONNode/Enumerator::.ctor(System.Collections.Generic.Dictionary`2/Enumerator<System.String,SimpleJSON.JSONNode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mAC4ED0FA4B083E2652E865A41EA5C74A49478EFE (Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4* __this, Enumerator_t0882EABB7914927B55F113EC1FC8D52BA871F911 ___aDictEnum0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<SimpleJSON.JSONNode>::get_Current()
inline JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* Enumerator_get_Current_m77AFF0C2B6AD157424C10FFEB116D213835CF084_inline (Enumerator_tC64B3D14117706116B48376FC4C0B294E0FFD944* __this, const RuntimeMethod* method)
{
	return ((  JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* (*) (Enumerator_tC64B3D14117706116B48376FC4C0B294E0FFD944*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_m8C7678C8F41122663CAEA0A3046D2699D7677E03 (KeyValuePair_2_tC25A1CF74139C27B48AA7E7BA0EAE31F240EA3EF* __this, String_t* ___key0, JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tC25A1CF74139C27B48AA7E7BA0EAE31F240EA3EF*, String_t*, JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653*, const RuntimeMethod*))KeyValuePair_2__ctor_m0D5C3E0BE2D37252D3F4E0F0EA9A13C9458D4950_gshared)(__this, ___key0, ___value1, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,SimpleJSON.JSONNode>::get_Current()
inline KeyValuePair_2_tC25A1CF74139C27B48AA7E7BA0EAE31F240EA3EF Enumerator_get_Current_mF70405758E51B64B1E5E4FA7764450689DA30832_inline (Enumerator_t0882EABB7914927B55F113EC1FC8D52BA871F911* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tC25A1CF74139C27B48AA7E7BA0EAE31F240EA3EF (*) (Enumerator_t0882EABB7914927B55F113EC1FC8D52BA871F911*, const RuntimeMethod*))Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode> SimpleJSON.JSONNode/Enumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tC25A1CF74139C27B48AA7E7BA0EAE31F240EA3EF Enumerator_get_Current_mDE6750203413E1069D0520793D6AA0B2527CB20E (Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<SimpleJSON.JSONNode>::MoveNext()
inline bool Enumerator_MoveNext_mBA58967C724F00BFA740985C05C1A2B8E5FB583D (Enumerator_tC64B3D14117706116B48376FC4C0B294E0FFD944* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tC64B3D14117706116B48376FC4C0B294E0FFD944*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,SimpleJSON.JSONNode>::MoveNext()
inline bool Enumerator_MoveNext_m00944D3982456679FF855520913693EB62A293C1 (Enumerator_t0882EABB7914927B55F113EC1FC8D52BA871F911* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t0882EABB7914927B55F113EC1FC8D52BA871F911*, const RuntimeMethod*))Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared)(__this, method);
}
// System.Boolean SimpleJSON.JSONNode/Enumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m238CF072385A1106BEDEFCE33BA2B0DBE999758A (Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4* __this, const RuntimeMethod* method) ;
// System.Void SimpleJSON.JSONNode/ValueEnumerator::.ctor(SimpleJSON.JSONNode/Enumerator)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueEnumerator__ctor_m7BA4BAD5FEBAC4054F71575B728DC27EC4080F0A_inline (ValueEnumerator_tD3C6F06F8E91A96073FAEE3822232DFF6AC63FB6* __this, Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4 ___aEnumerator0, const RuntimeMethod* method) ;
// System.Void SimpleJSON.JSONNode/ValueEnumerator::.ctor(System.Collections.Generic.List`1/Enumerator<SimpleJSON.JSONNode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueEnumerator__ctor_mCC61CE3EDCF1AC94A84E031F2E89F8054C94A015 (ValueEnumerator_tD3C6F06F8E91A96073FAEE3822232DFF6AC63FB6* __this, Enumerator_tC64B3D14117706116B48376FC4C0B294E0FFD944 ___aArrayEnum0, const RuntimeMethod* method) ;
// System.Void SimpleJSON.JSONNode/ValueEnumerator::.ctor(System.Collections.Generic.Dictionary`2/Enumerator<System.String,SimpleJSON.JSONNode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueEnumerator__ctor_m122732DF448B45E8E82956E07AC8314C60E28C29 (ValueEnumerator_tD3C6F06F8E91A96073FAEE3822232DFF6AC63FB6* __this, Enumerator_t0882EABB7914927B55F113EC1FC8D52BA871F911 ___aDictEnum0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>::get_Value()
inline JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* KeyValuePair_2_get_Value_mE11898FE6C7E851793D8B6E7B740E9828BA6EF94_inline (KeyValuePair_2_tC25A1CF74139C27B48AA7E7BA0EAE31F240EA3EF* __this, const RuntimeMethod* method)
{
	return ((  JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* (*) (KeyValuePair_2_tC25A1CF74139C27B48AA7E7BA0EAE31F240EA3EF*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode/ValueEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* ValueEnumerator_get_Current_mAA24A52FDEB7160BD268193175388EACB41B7CE2 (ValueEnumerator_tD3C6F06F8E91A96073FAEE3822232DFF6AC63FB6* __this, const RuntimeMethod* method) ;
// System.Boolean SimpleJSON.JSONNode/ValueEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueEnumerator_MoveNext_m5B596A2EF2FF395EDA8F5CAB97C0789498D250C9 (ValueEnumerator_tD3C6F06F8E91A96073FAEE3822232DFF6AC63FB6* __this, const RuntimeMethod* method) ;
// SimpleJSON.JSONNode/ValueEnumerator SimpleJSON.JSONNode/ValueEnumerator::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueEnumerator_tD3C6F06F8E91A96073FAEE3822232DFF6AC63FB6 ValueEnumerator_GetEnumerator_m765261287A2C0AEF757B94994826F43951387E4C (ValueEnumerator_tD3C6F06F8E91A96073FAEE3822232DFF6AC63FB6* __this, const RuntimeMethod* method) ;
// System.Void SimpleJSON.JSONNode/KeyEnumerator::.ctor(SimpleJSON.JSONNode/Enumerator)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyEnumerator__ctor_m526EA1364C367B83C931F4208CDD816BD02810EA_inline (KeyEnumerator_t927DD8FD7C7D67CBE611D33C16AF70CDF793CDCF* __this, Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4 ___aEnumerator0, const RuntimeMethod* method) ;
// System.Void SimpleJSON.JSONNode/KeyEnumerator::.ctor(System.Collections.Generic.List`1/Enumerator<SimpleJSON.JSONNode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyEnumerator__ctor_m6EA81E2BED4CA5194A7306D8B324F7356E37F80A (KeyEnumerator_t927DD8FD7C7D67CBE611D33C16AF70CDF793CDCF* __this, Enumerator_tC64B3D14117706116B48376FC4C0B294E0FFD944 ___aArrayEnum0, const RuntimeMethod* method) ;
// System.Void SimpleJSON.JSONNode/KeyEnumerator::.ctor(System.Collections.Generic.Dictionary`2/Enumerator<System.String,SimpleJSON.JSONNode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyEnumerator__ctor_mA6338E82A9F8AA19A1744352B4FE54103AD70405 (KeyEnumerator_t927DD8FD7C7D67CBE611D33C16AF70CDF793CDCF* __this, Enumerator_t0882EABB7914927B55F113EC1FC8D52BA871F911 ___aDictEnum0, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m207EFB432FBB579ECA85B5399A1E266D0D8E3641_inline (KeyValuePair_2_tC25A1CF74139C27B48AA7E7BA0EAE31F240EA3EF* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tC25A1CF74139C27B48AA7E7BA0EAE31F240EA3EF*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::op_Implicit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* JSONNode_op_Implicit_mA884A397C3152BDB411767FDE9EDC274A8904523 (String_t* ___s0, const RuntimeMethod* method) ;
// SimpleJSON.JSONNode SimpleJSON.JSONNode/KeyEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* KeyEnumerator_get_Current_m8FBFEE52D4438AAF3E10AB4370B34FBB8E66B3C2 (KeyEnumerator_t927DD8FD7C7D67CBE611D33C16AF70CDF793CDCF* __this, const RuntimeMethod* method) ;
// System.Boolean SimpleJSON.JSONNode/KeyEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KeyEnumerator_MoveNext_m42FE2CEE808A7E065895BA333B7FBD2F3AEE032F (KeyEnumerator_t927DD8FD7C7D67CBE611D33C16AF70CDF793CDCF* __this, const RuntimeMethod* method) ;
// SimpleJSON.JSONNode/KeyEnumerator SimpleJSON.JSONNode/KeyEnumerator::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyEnumerator_t927DD8FD7C7D67CBE611D33C16AF70CDF793CDCF KeyEnumerator_GetEnumerator_mD4687B4D6D10E4D6870CBBECC680689A62A95C0B (KeyEnumerator_t927DD8FD7C7D67CBE611D33C16AF70CDF793CDCF* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean SimpleJSON.JSONNode::op_Inequality(SimpleJSON.JSONNode,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNode_op_Inequality_m2DF69DE99CD87AA07CE1200892E24EA22B351943 (JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* ___a0, RuntimeObject* ___b1, const RuntimeMethod* method) ;
// System.Void SimpleJSON.JSONNode/LinqEnumerator::.ctor(SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinqEnumerator__ctor_m9FD8AB1580F3D94C5C36D070DBE85E023ED36E30 (LinqEnumerator_t6B1FE14759D1722ED209D8FEBAE0761C67B0D7A6* __this, JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* ___aNode0, const RuntimeMethod* method) ;
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_mEC09D20ED666BC3277AC9D16B68AA287E5AFE1B2 (const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void SimpleJSON.JSONNode/<get_Children>d__40::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__40__ctor_mED3CB3E682749015A8491DF12C31487745A4248B (U3Cget_ChildrenU3Ed__40_tD8DB7CAAB4657CD56F7E69A2896BF9BEF44DC074* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode/<get_Children>d__40::System.Collections.Generic.IEnumerable<SimpleJSON.JSONNode>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildrenU3Ed__40_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m2F120D821A756BC0938593FF8F6184A49710DFA3 (U3Cget_ChildrenU3Ed__40_tD8DB7CAAB4657CD56F7E69A2896BF9BEF44DC074* __this, const RuntimeMethod* method) ;
// System.Void SimpleJSON.JSONNode/<get_DeepChildren>d__42::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_DeepChildrenU3Ed__42_U3CU3Em__Finally1_mFB16A1F4090D60071A16E8ED7E86DC487305AF73 (U3Cget_DeepChildrenU3Ed__42_tF52AF8636771CA100B6375F869B3C3BF8F6ADAF3* __this, const RuntimeMethod* method) ;
// System.Void SimpleJSON.JSONNode/<get_DeepChildren>d__42::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_DeepChildrenU3Ed__42_U3CU3Em__Finally2_m9B19E684C42ABCBC8476BDD436F5EB28D9C731AC (U3Cget_DeepChildrenU3Ed__42_tF52AF8636771CA100B6375F869B3C3BF8F6ADAF3* __this, const RuntimeMethod* method) ;
// System.Void SimpleJSON.JSONNode/<get_DeepChildren>d__42::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_DeepChildrenU3Ed__42_System_IDisposable_Dispose_mA6F2AF3124A2E4A2DCB86C54AF4E31F08EA8AF3F (U3Cget_DeepChildrenU3Ed__42_tF52AF8636771CA100B6375F869B3C3BF8F6ADAF3* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode::get_DeepChildren()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JSONNode_get_DeepChildren_m891CB892AEA834980686ED760B952A86DC1E8725 (JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* __this, const RuntimeMethod* method) ;
// System.Void SimpleJSON.JSONNode/<get_DeepChildren>d__42::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_DeepChildrenU3Ed__42__ctor_mB98C64BA2B81334A1830986688EA632F32DC2EDB (U3Cget_DeepChildrenU3Ed__42_tF52AF8636771CA100B6375F869B3C3BF8F6ADAF3* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode/<get_DeepChildren>d__42::System.Collections.Generic.IEnumerable<SimpleJSON.JSONNode>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_DeepChildrenU3Ed__42_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_mF23F7F01784F070DC30E80C7B2525BB08F1F729F (U3Cget_DeepChildrenU3Ed__42_tF52AF8636771CA100B6375F869B3C3BF8F6ADAF3* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<SimpleJSON.JSONNode>::GetEnumerator()
inline Enumerator_tC64B3D14117706116B48376FC4C0B294E0FFD944 List_1_GetEnumerator_m7DDCF28102A20EEBF067D96F91DFE18F03A96C5B (List_1_tD66F8EBB7E2F92261ACAA473BBD1879737E6783C* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tC64B3D14117706116B48376FC4C0B294E0FFD944 (*) (List_1_tD66F8EBB7E2F92261ACAA473BBD1879737E6783C*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<SimpleJSON.JSONNode>::get_Count()
inline int32_t List_1_get_Count_m6F782FA6EB1B2E2F1C3530246C446F4DEEA30190_inline (List_1_tD66F8EBB7E2F92261ACAA473BBD1879737E6783C* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tD66F8EBB7E2F92261ACAA473BBD1879737E6783C*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void SimpleJSON.JSONLazyCreator::.ctor(SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator__ctor_m0B3625D19DDD8DBDBB45822FAABCE266FA4EE694 (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* __this, JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* ___aNode0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<SimpleJSON.JSONNode>::get_Item(System.Int32)
inline JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* List_1_get_Item_m9E1232D0A0D221987BA1E611491D57A00AFC1721 (List_1_tD66F8EBB7E2F92261ACAA473BBD1879737E6783C* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* (*) (List_1_tD66F8EBB7E2F92261ACAA473BBD1879737E6783C*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Boolean SimpleJSON.JSONNode::op_Equality(SimpleJSON.JSONNode,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNode_op_Equality_m6961ED452D3A120FE9908FFB96260DF98A47A8B3 (JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* ___a0, RuntimeObject* ___b1, const RuntimeMethod* method) ;
// SimpleJSON.JSONNull SimpleJSON.JSONNull::CreateOrGet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595* JSONNull_CreateOrGet_m68ED6000156701E566B1EA9DDC5284299B0C9105 (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::Add(T)
inline void List_1_Add_m3C60D77B9288E9619EBC7F28115464996321E97D_inline (List_1_tD66F8EBB7E2F92261ACAA473BBD1879737E6783C* __this, JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD66F8EBB7E2F92261ACAA473BBD1879737E6783C*, JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::set_Item(System.Int32,T)
inline void List_1_set_Item_mF945957677A6D59A7A530133DF6FA14CC374C9F1 (List_1_tD66F8EBB7E2F92261ACAA473BBD1879737E6783C* __this, int32_t ___index0, JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD66F8EBB7E2F92261ACAA473BBD1879737E6783C*, int32_t, JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653*, const RuntimeMethod*))List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared)(__this, ___index0, ___value1, method);
}
// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m24DE650BE95A807BAE35507BBA507DD5480128FC (List_1_tD66F8EBB7E2F92261ACAA473BBD1879737E6783C* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD66F8EBB7E2F92261ACAA473BBD1879737E6783C*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// System.Boolean System.Collections.Generic.List`1<SimpleJSON.JSONNode>::Remove(T)
inline bool List_1_Remove_mEFC31D4DE59FCE14782FF159FD633CDFEF369438 (List_1_tD66F8EBB7E2F92261ACAA473BBD1879737E6783C* __this, JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tD66F8EBB7E2F92261ACAA473BBD1879737E6783C*, JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Void SimpleJSON.JSONArray/<get_Children>d__22::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__22__ctor_m85868694A6F76D6658184E05C60FF81F01F77A15 (U3Cget_ChildrenU3Ed__22_t0BBD3CB230460AF1CA521BEBCBD1A39F74A02822* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::AppendLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendLine_m3BC704C4E6A8531027D8C9287D0AB2AA0188AC4E (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_mE20F6CD28FC8E8C9FD65987DBD32E6087CCE1CF3 (StringBuilder_t* __this, Il2CppChar ___value0, int32_t ___repeatCount1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::.ctor()
inline void List_1__ctor_m334012939E9E81EC23774AAEF7341D165260178E (List_1_tD66F8EBB7E2F92261ACAA473BBD1879737E6783C* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD66F8EBB7E2F92261ACAA473BBD1879737E6783C*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void SimpleJSON.JSONNode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNode__ctor_mF8F2893483161D3B7B9877B63C69063D26A5C353 (JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* __this, const RuntimeMethod* method) ;
// System.Void SimpleJSON.JSONArray/<get_Children>d__22::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__22_U3CU3Em__Finally1_mE8C769C27FDCFEA9BDE25D788AE87EC9565F4C5F (U3Cget_ChildrenU3Ed__22_t0BBD3CB230460AF1CA521BEBCBD1A39F74A02822* __this, const RuntimeMethod* method) ;
// System.Void SimpleJSON.JSONArray/<get_Children>d__22::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__22_System_IDisposable_Dispose_m2F364B8DD4640833161EE743D458FAF77BCAED9F (U3Cget_ChildrenU3Ed__22_t0BBD3CB230460AF1CA521BEBCBD1A39F74A02822* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<SimpleJSON.JSONNode>::Dispose()
inline void Enumerator_Dispose_m883E0A6A001B379F5451A9DC6C151D223F9BD448 (Enumerator_tC64B3D14117706116B48376FC4C0B294E0FFD944* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tC64B3D14117706116B48376FC4C0B294E0FFD944*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode> SimpleJSON.JSONArray/<get_Children>d__22::System.Collections.Generic.IEnumerable<SimpleJSON.JSONNode>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildrenU3Ed__22_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_mE9E5D91FED8686D7D44613FE3F2E5A67765D924E (U3Cget_ChildrenU3Ed__22_t0BBD3CB230460AF1CA521BEBCBD1A39F74A02822* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::GetEnumerator()
inline Enumerator_t0882EABB7914927B55F113EC1FC8D52BA871F911 Dictionary_2_GetEnumerator_m9ADA9DC934EF1A0048D21D89875DB863F5FF5908 (Dictionary_2_t74542AFEF76A87F0A6EE38215ABCD050C900E0E2* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t0882EABB7914927B55F113EC1FC8D52BA871F911 (*) (Dictionary_2_t74542AFEF76A87F0A6EE38215ABCD050C900E0E2*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m772241BA9070E18A75464D09201A0C8F65E1F657 (Dictionary_2_t74542AFEF76A87F0A6EE38215ABCD050C900E0E2* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t74542AFEF76A87F0A6EE38215ABCD050C900E0E2*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::get_Item(TKey)
inline JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* Dictionary_2_get_Item_mAD5BCB746F2E2424B09CA2BDD03E42770B068809 (Dictionary_2_t74542AFEF76A87F0A6EE38215ABCD050C900E0E2* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* (*) (Dictionary_2_t74542AFEF76A87F0A6EE38215ABCD050C900E0E2*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.Void SimpleJSON.JSONLazyCreator::.ctor(SimpleJSON.JSONNode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator__ctor_m02E2D630C60045F25A3AC001B7A17DF2D5D197B4 (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* __this, JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* ___aNode0, String_t* ___aKey1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m0CF9B92648E889A9619C7A89391273130D5A092B (Dictionary_2_t74542AFEF76A87F0A6EE38215ABCD050C900E0E2* __this, String_t* ___key0, JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t74542AFEF76A87F0A6EE38215ABCD050C900E0E2*, String_t*, JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::Add(TKey,TValue)
inline void Dictionary_2_Add_m0A53846E31C3AFF0D883504E62257998824A6650 (Dictionary_2_t74542AFEF76A87F0A6EE38215ABCD050C900E0E2* __this, String_t* ___key0, JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t74542AFEF76A87F0A6EE38215ABCD050C900E0E2*, String_t*, JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::get_Count()
inline int32_t Dictionary_2_get_Count_m3CF989BD764D8F7838E6D8E449D354B1CF7BB385 (Dictionary_2_t74542AFEF76A87F0A6EE38215ABCD050C900E0E2* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t74542AFEF76A87F0A6EE38215ABCD050C900E0E2*, const RuntimeMethod*))Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_gshared)(__this, method);
}
// TSource System.Linq.Enumerable::ElementAt<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>>(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
inline KeyValuePair_2_tC25A1CF74139C27B48AA7E7BA0EAE31F240EA3EF Enumerable_ElementAt_TisKeyValuePair_2_tC25A1CF74139C27B48AA7E7BA0EAE31F240EA3EF_m5904D22F70F1DB45D3856B3B2ABF559CC44CCE5C (RuntimeObject* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tC25A1CF74139C27B48AA7E7BA0EAE31F240EA3EF (*) (RuntimeObject*, int32_t, const RuntimeMethod*))Enumerable_ElementAt_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_mD78C04A7CBBD94F962638610BF19A5097A7E0ECD_gshared)(___source0, ___index1, method);
}
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// System.Guid System.Guid::NewGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t Guid_NewGuid_m1827D92D71326C3F3C263F057F6E90F907617903 (const RuntimeMethod* method) ;
// System.String System.Guid::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C (Guid_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::Remove(TKey)
inline bool Dictionary_2_Remove_m72C4C408622F37344F5BB59F0E0A6C32C34DD444 (Dictionary_2_t74542AFEF76A87F0A6EE38215ABCD050C900E0E2* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t74542AFEF76A87F0A6EE38215ABCD050C900E0E2*, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___key0, method);
}
// System.Void SimpleJSON.JSONObject/<>c__DisplayClass21_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0__ctor_m6976B4CF7F93E28364B390F81E55DAD60BB141C1 (U3CU3Ec__DisplayClass21_0_t651DB8FCB045D590FF5910F1E9917C209DC429BA* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mC1D875BE4AE5DDA483B819A1193FBD916C8C544C (Func_2_t4674CE269C901F4BD6F1A0EE18182B888C45DBB5* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t4674CE269C901F4BD6F1A0EE18182B888C45DBB5*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m999A10C26DDF74143AD155662D58037B37AB83F7_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisKeyValuePair_2_tC25A1CF74139C27B48AA7E7BA0EAE31F240EA3EF_m9C8FA5E47A24524DE3A4F1F6E26E21615BF8477D (RuntimeObject* ___source0, Func_2_t4674CE269C901F4BD6F1A0EE18182B888C45DBB5* ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t4674CE269C901F4BD6F1A0EE18182B888C45DBB5*, const RuntimeMethod*))Enumerable_Where_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_mB0DE37F992A224BD3B6FCB4EEF30FDDEA7540412_gshared)(___source0, ___predicate1, method);
}
// TSource System.Linq.Enumerable::First<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>>(System.Collections.Generic.IEnumerable`1<TSource>)
inline KeyValuePair_2_tC25A1CF74139C27B48AA7E7BA0EAE31F240EA3EF Enumerable_First_TisKeyValuePair_2_tC25A1CF74139C27B48AA7E7BA0EAE31F240EA3EF_m5DFB7AB1A627ED5971C67D34212F3CEEFE6B0B73 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tC25A1CF74139C27B48AA7E7BA0EAE31F240EA3EF (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_First_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_m4EDB83358F4E30FA0404D7F760F652673F6787F1_gshared)(___source0, method);
}
// System.Void SimpleJSON.JSONObject/<get_Children>d__23::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__23__ctor_mD7DD2FB8F14148B45EC4AC3A595DC1AFE369FC99 (U3Cget_ChildrenU3Ed__23_tD9157FC1CC7E1337F0FA7AF88F80A749399578AC* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,SimpleJSON.JSONNode>::Dispose()
inline void Enumerator_Dispose_m95D8AAFAF60B6E536EA7429F49C5FD5AC7A242BB (Enumerator_t0882EABB7914927B55F113EC1FC8D52BA871F911* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t0882EABB7914927B55F113EC1FC8D52BA871F911*, const RuntimeMethod*))Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared)(__this, method);
}
// System.String SimpleJSON.JSONNode::Escape(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONNode_Escape_mC20A370D25C7B269E4707FF5CEC7062C470C416A (String_t* ___aText0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::get_Keys()
inline KeyCollection_tB5791F6D12B5D2344D02EC386DBEE217775A02B9* Dictionary_2_get_Keys_mB48527A5126C9884983E7BDF7C198EB79F418816 (Dictionary_2_t74542AFEF76A87F0A6EE38215ABCD050C900E0E2* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_tB5791F6D12B5D2344D02EC386DBEE217775A02B9* (*) (Dictionary_2_t74542AFEF76A87F0A6EE38215ABCD050C900E0E2*, const RuntimeMethod*))Dictionary_2_get_Keys_m72D290F90654BFD683FA7AA7C63D9F4F692218B6_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,SimpleJSON.JSONNode>::GetEnumerator()
inline Enumerator_tB4BE7AC63B98A2FCDE82B99DC9943B069ECCF23C KeyCollection_GetEnumerator_m89A6615E37C327BA711371335F347D86406D4E22 (KeyCollection_tB5791F6D12B5D2344D02EC386DBEE217775A02B9* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tB4BE7AC63B98A2FCDE82B99DC9943B069ECCF23C (*) (KeyCollection_tB5791F6D12B5D2344D02EC386DBEE217775A02B9*, const RuntimeMethod*))KeyCollection_GetEnumerator_m7E77FBA7DE2D3876EC02F396712C4AA5B1D535A5_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,SimpleJSON.JSONNode>::Dispose()
inline void Enumerator_Dispose_m756221DECDDF7233667BACEB87D32CDCC5EC56AB (Enumerator_tB4BE7AC63B98A2FCDE82B99DC9943B069ECCF23C* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB4BE7AC63B98A2FCDE82B99DC9943B069ECCF23C*, const RuntimeMethod*))Enumerator_Dispose_mEB2A61F3F3F420C1B1DFD5C74EEFD4BD7761BCF7_gshared)(__this, method);
}
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,SimpleJSON.JSONNode>::get_Current()
inline String_t* Enumerator_get_Current_m8F2C97D8503D752215E004A880195B64917CEE95_inline (Enumerator_tB4BE7AC63B98A2FCDE82B99DC9943B069ECCF23C* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_tB4BE7AC63B98A2FCDE82B99DC9943B069ECCF23C*, const RuntimeMethod*))Enumerator_get_Current_mD6472FA27D28B9AE64A0FEF796C72ABBC2420EBF_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,SimpleJSON.JSONNode>::MoveNext()
inline bool Enumerator_MoveNext_mF65727235CD00D1C771CF27D5F360ED62E1EFDF1 (Enumerator_tB4BE7AC63B98A2FCDE82B99DC9943B069ECCF23C* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB4BE7AC63B98A2FCDE82B99DC9943B069ECCF23C*, const RuntimeMethod*))Enumerator_MoveNext_mB5E00F11BCA3AC963F9BA72659FA76B107863F3C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::.ctor()
inline void Dictionary_2__ctor_m24C963242223589068186A2B22F6555FBB9D8C97 (Dictionary_2_t74542AFEF76A87F0A6EE38215ABCD050C900E0E2* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t74542AFEF76A87F0A6EE38215ABCD050C900E0E2*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void SimpleJSON.JSONObject/<get_Children>d__23::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__23_U3CU3Em__Finally1_m0FEB12CB9C8CC84E25A44F9FC928D8EB8F4DF9DD (U3Cget_ChildrenU3Ed__23_tD9157FC1CC7E1337F0FA7AF88F80A749399578AC* __this, const RuntimeMethod* method) ;
// System.Void SimpleJSON.JSONObject/<get_Children>d__23::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__23_System_IDisposable_Dispose_m85C7654E92BD35A4525D4F3E70FFD57B5CD497AF (U3Cget_ChildrenU3Ed__23_tD9157FC1CC7E1337F0FA7AF88F80A749399578AC* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode> SimpleJSON.JSONObject/<get_Children>d__23::System.Collections.Generic.IEnumerable<SimpleJSON.JSONNode>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildrenU3Ed__23_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m42B5EADBEE1E083675385176B87BCAB7C4FA0873 (U3Cget_ChildrenU3Ed__23_tD9157FC1CC7E1337F0FA7AF88F80A749399578AC* __this, const RuntimeMethod* method) ;
// System.Boolean SimpleJSON.JSONNode::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNode_Equals_mE1B8A846783529B1E54786975A6A2396089A88DE (JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425 (const RuntimeMethod* method) ;
// System.String System.Double::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m4318830D9F771852FDCF21C14CF9E8ABC7E77357 (double* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) ;
// System.Boolean System.Double::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_TryParse_m6038C4DBF1789F1954938FF7F6D3459359CD7718 (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, double* ___result3, const RuntimeMethod* method) ;
// System.Boolean SimpleJSON.JSONNumber::IsNumeric(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNumber_IsNumeric_mE6C07226FABFDD425449643925B667C05C52D41D (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Double System.Convert::ToDouble(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Convert_ToDouble_mE64ED1A9412EA3B16E4C7F1C74655F53DE71C71A (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Double::GetHashCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline (double* __this, const RuntimeMethod* method) ;
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63 (bool* __this, const RuntimeMethod* method) ;
// System.Boolean System.Boolean::TryParse(System.String,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Boolean_TryParse_mACDFEB12D4D8B25F9AAA56678FEFC0724D49776F (String_t* ___value0, bool* ___result1, const RuntimeMethod* method) ;
// System.Int32 System.Boolean::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3 (bool* __this, const RuntimeMethod* method) ;
// System.Void SimpleJSON.JSONNull::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNull__ctor_m909243259F39D10FA6FEB176474DEF9C9972D76B (JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595* __this, const RuntimeMethod* method) ;
// System.Void SimpleJSON.JSONArray::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONArray__ctor_m92FFF2DC8E1425398814F50D4B253EB459B8477F (JSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2* __this, const RuntimeMethod* method) ;
// System.Void SimpleJSON.JSONLazyCreator::Set(SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator_Set_mEF6EB64379EBE960F050C24D45EDCA4B6D404958 (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* __this, JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* ___aVal0, const RuntimeMethod* method) ;
// System.Void SimpleJSON.JSONObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject__ctor_m8007967452F5257DC9F5DF2B78B411BFD4B6D6AB (JSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118* __this, const RuntimeMethod* method) ;
// System.Boolean SimpleJSON.JSONLazyCreator::op_Equality(SimpleJSON.JSONLazyCreator,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONLazyCreator_op_Equality_m7C4199B28912BE4C1AE6009F94C6FE07776923C5 (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* ___a0, RuntimeObject* ___b1, const RuntimeMethod* method) ;
// System.Void SimpleJSON.JSONNumber::.ctor(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNumber__ctor_m1CE3527102D15EBC3A183E3519895E291CAC1D90 (JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* __this, double ___aData0, const RuntimeMethod* method) ;
// System.Void SimpleJSON.JSONString::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONString__ctor_m1DD5FB9A4147F72A0ED5F773FF82FA269241AD19 (JSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4* __this, String_t* ___aData0, const RuntimeMethod* method) ;
// System.String System.Int64::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int64_ToString_m284E4E55662818E38654309A41C2B07CD436F36B (int64_t* __this, const RuntimeMethod* method) ;
// System.Void SimpleJSON.JSONBool::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONBool__ctor_mBB02E388CFB96B99E84561FCFF68147F00391C58 (JSONBool_tD0B1D526BA8A27DAB4559E54BBDFB94FA1A8B1D9* __this, bool ___aData0, const RuntimeMethod* method) ;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* JSONNode_Parse_m51FFFB4953A8D875B9D2DD5E032D131A149956E0 (String_t* ___aJSON0, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Int64 System.BitConverter::DoubleToInt64Bits(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BitConverter_DoubleToInt64Bits_m45D911F884F3B09BF39C02044EDC9BDA8084C80B_inline (double ___value0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: SimpleJSON.JSONNode/Enumerator
IL2CPP_EXTERN_C void Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4_marshal_pinvoke(const Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4& unmarshaled, Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Object_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Object' of type 'Enumerator'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Object_1Exception, NULL);
}
IL2CPP_EXTERN_C void Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4_marshal_pinvoke_back(const Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4_marshaled_pinvoke& marshaled, Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4& unmarshaled)
{
	Exception_t* ___m_Object_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Object' of type 'Enumerator'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Object_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: SimpleJSON.JSONNode/Enumerator
IL2CPP_EXTERN_C void Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4_marshal_pinvoke_cleanup(Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: SimpleJSON.JSONNode/Enumerator
IL2CPP_EXTERN_C void Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4_marshal_com(const Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4& unmarshaled, Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4_marshaled_com& marshaled)
{
	Exception_t* ___m_Object_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Object' of type 'Enumerator'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Object_1Exception, NULL);
}
IL2CPP_EXTERN_C void Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4_marshal_com_back(const Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4_marshaled_com& marshaled, Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4& unmarshaled)
{
	Exception_t* ___m_Object_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Object' of type 'Enumerator'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Object_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: SimpleJSON.JSONNode/Enumerator
IL2CPP_EXTERN_C void Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4_marshal_com_cleanup(Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4_marshaled_com& marshaled)
{
}
// System.Boolean SimpleJSON.JSONNode/Enumerator::get_IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_get_IsValid_mBC273331DC1699FF46BD3621AE5059A54AD98BA6 (Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsValid { get { return type != Type.None; } }
		int32_t L_0 = __this->___type_0;
		return (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool Enumerator_get_IsValid_mBC273331DC1699FF46BD3621AE5059A54AD98BA6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4*>(__this + _offset);
	bool _returnValue;
	_returnValue = Enumerator_get_IsValid_mBC273331DC1699FF46BD3621AE5059A54AD98BA6(_thisAdjusted, method);
	return _returnValue;
}
// System.Void SimpleJSON.JSONNode/Enumerator::.ctor(System.Collections.Generic.List`1/Enumerator<SimpleJSON.JSONNode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mF21239C69620D815F8CD34F022BE18E9DAF9CB10 (Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4* __this, Enumerator_tC64B3D14117706116B48376FC4C0B294E0FFD944 ___aArrayEnum0, const RuntimeMethod* method) 
{
	{
		// type = Type.Array;
		__this->___type_0 = 1;
		// m_Object = default(Dictionary<string, JSONNode>.Enumerator);
		Enumerator_t0882EABB7914927B55F113EC1FC8D52BA871F911* L_0 = (&__this->___m_Object_1);
		il2cpp_codegen_initobj(L_0, sizeof(Enumerator_t0882EABB7914927B55F113EC1FC8D52BA871F911));
		// m_Array = aArrayEnum;
		Enumerator_tC64B3D14117706116B48376FC4C0B294E0FFD944 L_1 = ___aArrayEnum0;
		__this->___m_Array_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___m_Array_2))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___m_Array_2))->____current_3), (void*)NULL);
		#endif
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator__ctor_mF21239C69620D815F8CD34F022BE18E9DAF9CB10_AdjustorThunk (RuntimeObject* __this, Enumerator_tC64B3D14117706116B48376FC4C0B294E0FFD944 ___aArrayEnum0, const RuntimeMethod* method)
{
	Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4*>(__this + _offset);
	Enumerator__ctor_mF21239C69620D815F8CD34F022BE18E9DAF9CB10(_thisAdjusted, ___aArrayEnum0, method);
}
// System.Void SimpleJSON.JSONNode/Enumerator::.ctor(System.Collections.Generic.Dictionary`2/Enumerator<System.String,SimpleJSON.JSONNode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mAC4ED0FA4B083E2652E865A41EA5C74A49478EFE (Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4* __this, Enumerator_t0882EABB7914927B55F113EC1FC8D52BA871F911 ___aDictEnum0, const RuntimeMethod* method) 
{
	{
		// type = Type.Object;
		__this->___type_0 = 2;
		// m_Object = aDictEnum;
		Enumerator_t0882EABB7914927B55F113EC1FC8D52BA871F911 L_0 = ___aDictEnum0;
		__this->___m_Object_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___m_Object_1))->____dictionary_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___m_Object_1))->____current_3))->___key_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___m_Object_1))->____current_3))->___value_1), (void*)NULL);
		#endif
		// m_Array = default(List<JSONNode>.Enumerator);
		Enumerator_tC64B3D14117706116B48376FC4C0B294E0FFD944* L_1 = (&__this->___m_Array_2);
		il2cpp_codegen_initobj(L_1, sizeof(Enumerator_tC64B3D14117706116B48376FC4C0B294E0FFD944));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator__ctor_mAC4ED0FA4B083E2652E865A41EA5C74A49478EFE_AdjustorThunk (RuntimeObject* __this, Enumerator_t0882EABB7914927B55F113EC1FC8D52BA871F911 ___aDictEnum0, const RuntimeMethod* method)
{
	Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4*>(__this + _offset);
	Enumerator__ctor_mAC4ED0FA4B083E2652E865A41EA5C74A49478EFE(_thisAdjusted, ___aDictEnum0, method);
}
// System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode> SimpleJSON.JSONNode/Enumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tC25A1CF74139C27B48AA7E7BA0EAE31F240EA3EF Enumerator_get_Current_mDE6750203413E1069D0520793D6AA0B2527CB20E (Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m77AFF0C2B6AD157424C10FFEB116D213835CF084_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mF70405758E51B64B1E5E4FA7764450689DA30832_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_m8C7678C8F41122663CAEA0A3046D2699D7677E03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (type == Type.Array)
		int32_t L_0 = __this->___type_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_001f;
		}
	}
	{
		// return new KeyValuePair<string, JSONNode>(string.Empty, m_Array.Current);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		Enumerator_tC64B3D14117706116B48376FC4C0B294E0FFD944* L_2 = (&__this->___m_Array_2);
		JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_3;
		L_3 = Enumerator_get_Current_m77AFF0C2B6AD157424C10FFEB116D213835CF084_inline(L_2, Enumerator_get_Current_m77AFF0C2B6AD157424C10FFEB116D213835CF084_RuntimeMethod_var);
		KeyValuePair_2_tC25A1CF74139C27B48AA7E7BA0EAE31F240EA3EF L_4;
		memset((&L_4), 0, sizeof(L_4));
		KeyValuePair_2__ctor_m8C7678C8F41122663CAEA0A3046D2699D7677E03((&L_4), L_1, L_3, /*hidden argument*/KeyValuePair_2__ctor_m8C7678C8F41122663CAEA0A3046D2699D7677E03_RuntimeMethod_var);
		return L_4;
	}

IL_001f:
	{
		// else if (type == Type.Object)
		int32_t L_5 = __this->___type_0;
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_0034;
		}
	}
	{
		// return m_Object.Current;
		Enumerator_t0882EABB7914927B55F113EC1FC8D52BA871F911* L_6 = (&__this->___m_Object_1);
		KeyValuePair_2_tC25A1CF74139C27B48AA7E7BA0EAE31F240EA3EF L_7;
		L_7 = Enumerator_get_Current_mF70405758E51B64B1E5E4FA7764450689DA30832_inline(L_6, Enumerator_get_Current_mF70405758E51B64B1E5E4FA7764450689DA30832_RuntimeMethod_var);
		return L_7;
	}

IL_0034:
	{
		// return new KeyValuePair<string, JSONNode>(string.Empty, null);
		String_t* L_8 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		KeyValuePair_2_tC25A1CF74139C27B48AA7E7BA0EAE31F240EA3EF L_9;
		memset((&L_9), 0, sizeof(L_9));
		KeyValuePair_2__ctor_m8C7678C8F41122663CAEA0A3046D2699D7677E03((&L_9), L_8, (JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653*)NULL, /*hidden argument*/KeyValuePair_2__ctor_m8C7678C8F41122663CAEA0A3046D2699D7677E03_RuntimeMethod_var);
		return L_9;
	}
}
IL2CPP_EXTERN_C  KeyValuePair_2_tC25A1CF74139C27B48AA7E7BA0EAE31F240EA3EF Enumerator_get_Current_mDE6750203413E1069D0520793D6AA0B2527CB20E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4*>(__this + _offset);
	KeyValuePair_2_tC25A1CF74139C27B48AA7E7BA0EAE31F240EA3EF _returnValue;
	_returnValue = Enumerator_get_Current_mDE6750203413E1069D0520793D6AA0B2527CB20E(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean SimpleJSON.JSONNode/Enumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m238CF072385A1106BEDEFCE33BA2B0DBE999758A (Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m00944D3982456679FF855520913693EB62A293C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBA58967C724F00BFA740985C05C1A2B8E5FB583D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (type == Type.Array)
		int32_t L_0 = __this->___type_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0015;
		}
	}
	{
		// return m_Array.MoveNext();
		Enumerator_tC64B3D14117706116B48376FC4C0B294E0FFD944* L_1 = (&__this->___m_Array_2);
		bool L_2;
		L_2 = Enumerator_MoveNext_mBA58967C724F00BFA740985C05C1A2B8E5FB583D(L_1, Enumerator_MoveNext_mBA58967C724F00BFA740985C05C1A2B8E5FB583D_RuntimeMethod_var);
		return L_2;
	}

IL_0015:
	{
		// else if (type == Type.Object)
		int32_t L_3 = __this->___type_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_002a;
		}
	}
	{
		// return m_Object.MoveNext();
		Enumerator_t0882EABB7914927B55F113EC1FC8D52BA871F911* L_4 = (&__this->___m_Object_1);
		bool L_5;
		L_5 = Enumerator_MoveNext_m00944D3982456679FF855520913693EB62A293C1(L_4, Enumerator_MoveNext_m00944D3982456679FF855520913693EB62A293C1_RuntimeMethod_var);
		return L_5;
	}

IL_002a:
	{
		// return false;
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Enumerator_MoveNext_m238CF072385A1106BEDEFCE33BA2B0DBE999758A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4*>(__this + _offset);
	bool _returnValue;
	_returnValue = Enumerator_MoveNext_m238CF072385A1106BEDEFCE33BA2B0DBE999758A(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: SimpleJSON.JSONNode/ValueEnumerator
IL2CPP_EXTERN_C void ValueEnumerator_tD3C6F06F8E91A96073FAEE3822232DFF6AC63FB6_marshal_pinvoke(const ValueEnumerator_tD3C6F06F8E91A96073FAEE3822232DFF6AC63FB6& unmarshaled, ValueEnumerator_tD3C6F06F8E91A96073FAEE3822232DFF6AC63FB6_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Enumerator_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Enumerator' of type 'ValueEnumerator'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Enumerator_0Exception, NULL);
}
IL2CPP_EXTERN_C void ValueEnumerator_tD3C6F06F8E91A96073FAEE3822232DFF6AC63FB6_marshal_pinvoke_back(const ValueEnumerator_tD3C6F06F8E91A96073FAEE3822232DFF6AC63FB6_marshaled_pinvoke& marshaled, ValueEnumerator_tD3C6F06F8E91A96073FAEE3822232DFF6AC63FB6& unmarshaled)
{
	Exception_t* ___m_Enumerator_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Enumerator' of type 'ValueEnumerator'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Enumerator_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: SimpleJSON.JSONNode/ValueEnumerator
IL2CPP_EXTERN_C void ValueEnumerator_tD3C6F06F8E91A96073FAEE3822232DFF6AC63FB6_marshal_pinvoke_cleanup(ValueEnumerator_tD3C6F06F8E91A96073FAEE3822232DFF6AC63FB6_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: SimpleJSON.JSONNode/ValueEnumerator
IL2CPP_EXTERN_C void ValueEnumerator_tD3C6F06F8E91A96073FAEE3822232DFF6AC63FB6_marshal_com(const ValueEnumerator_tD3C6F06F8E91A96073FAEE3822232DFF6AC63FB6& unmarshaled, ValueEnumerator_tD3C6F06F8E91A96073FAEE3822232DFF6AC63FB6_marshaled_com& marshaled)
{
	Exception_t* ___m_Enumerator_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Enumerator' of type 'ValueEnumerator'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Enumerator_0Exception, NULL);
}
IL2CPP_EXTERN_C void ValueEnumerator_tD3C6F06F8E91A96073FAEE3822232DFF6AC63FB6_marshal_com_back(const ValueEnumerator_tD3C6F06F8E91A96073FAEE3822232DFF6AC63FB6_marshaled_com& marshaled, ValueEnumerator_tD3C6F06F8E91A96073FAEE3822232DFF6AC63FB6& unmarshaled)
{
	Exception_t* ___m_Enumerator_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Enumerator' of type 'ValueEnumerator'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Enumerator_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: SimpleJSON.JSONNode/ValueEnumerator
IL2CPP_EXTERN_C void ValueEnumerator_tD3C6F06F8E91A96073FAEE3822232DFF6AC63FB6_marshal_com_cleanup(ValueEnumerator_tD3C6F06F8E91A96073FAEE3822232DFF6AC63FB6_marshaled_com& marshaled)
{
}
// System.Void SimpleJSON.JSONNode/ValueEnumerator::.ctor(System.Collections.Generic.List`1/Enumerator<SimpleJSON.JSONNode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueEnumerator__ctor_mCC61CE3EDCF1AC94A84E031F2E89F8054C94A015 (ValueEnumerator_tD3C6F06F8E91A96073FAEE3822232DFF6AC63FB6* __this, Enumerator_tC64B3D14117706116B48376FC4C0B294E0FFD944 ___aArrayEnum0, const RuntimeMethod* method) 
{
	{
		// public ValueEnumerator(List<JSONNode>.Enumerator aArrayEnum) : this(new Enumerator(aArrayEnum)) { }
		Enumerator_tC64B3D14117706116B48376FC4C0B294E0FFD944 L_0 = ___aArrayEnum0;
		Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_mF21239C69620D815F8CD34F022BE18E9DAF9CB10((&L_1), L_0, /*hidden argument*/NULL);
		ValueEnumerator__ctor_m7BA4BAD5FEBAC4054F71575B728DC27EC4080F0A_inline(__this, L_1, NULL);
		// public ValueEnumerator(List<JSONNode>.Enumerator aArrayEnum) : this(new Enumerator(aArrayEnum)) { }
		return;
	}
}
IL2CPP_EXTERN_C  void ValueEnumerator__ctor_mCC61CE3EDCF1AC94A84E031F2E89F8054C94A015_AdjustorThunk (RuntimeObject* __this, Enumerator_tC64B3D14117706116B48376FC4C0B294E0FFD944 ___aArrayEnum0, const RuntimeMethod* method)
{
	ValueEnumerator_tD3C6F06F8E91A96073FAEE3822232DFF6AC63FB6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueEnumerator_tD3C6F06F8E91A96073FAEE3822232DFF6AC63FB6*>(__this + _offset);
	ValueEnumerator__ctor_mCC61CE3EDCF1AC94A84E031F2E89F8054C94A015(_thisAdjusted, ___aArrayEnum0, method);
}
// System.Void SimpleJSON.JSONNode/ValueEnumerator::.ctor(System.Collections.Generic.Dictionary`2/Enumerator<System.String,SimpleJSON.JSONNode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueEnumerator__ctor_m122732DF448B45E8E82956E07AC8314C60E28C29 (ValueEnumerator_tD3C6F06F8E91A96073FAEE3822232DFF6AC63FB6* __this, Enumerator_t0882EABB7914927B55F113EC1FC8D52BA871F911 ___aDictEnum0, const RuntimeMethod* method) 
{
	{
		// public ValueEnumerator(Dictionary<string, JSONNode>.Enumerator aDictEnum) : this(new Enumerator(aDictEnum)) { }
		Enumerator_t0882EABB7914927B55F113EC1FC8D52BA871F911 L_0 = ___aDictEnum0;
		Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_mAC4ED0FA4B083E2652E865A41EA5C74A49478EFE((&L_1), L_0, /*hidden argument*/NULL);
		ValueEnumerator__ctor_m7BA4BAD5FEBAC4054F71575B728DC27EC4080F0A_inline(__this, L_1, NULL);
		// public ValueEnumerator(Dictionary<string, JSONNode>.Enumerator aDictEnum) : this(new Enumerator(aDictEnum)) { }
		return;
	}
}
IL2CPP_EXTERN_C  void ValueEnumerator__ctor_m122732DF448B45E8E82956E07AC8314C60E28C29_AdjustorThunk (RuntimeObject* __this, Enumerator_t0882EABB7914927B55F113EC1FC8D52BA871F911 ___aDictEnum0, const RuntimeMethod* method)
{
	ValueEnumerator_tD3C6F06F8E91A96073FAEE3822232DFF6AC63FB6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueEnumerator_tD3C6F06F8E91A96073FAEE3822232DFF6AC63FB6*>(__this + _offset);
	ValueEnumerator__ctor_m122732DF448B45E8E82956E07AC8314C60E28C29(_thisAdjusted, ___aDictEnum0, method);
}
// System.Void SimpleJSON.JSONNode/ValueEnumerator::.ctor(SimpleJSON.JSONNode/Enumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueEnumerator__ctor_m7BA4BAD5FEBAC4054F71575B728DC27EC4080F0A (ValueEnumerator_tD3C6F06F8E91A96073FAEE3822232DFF6AC63FB6* __this, Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4 ___aEnumerator0, const RuntimeMethod* method) 
{
	{
		// public ValueEnumerator(Enumerator aEnumerator) { m_Enumerator = aEnumerator; }
		Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4 L_0 = ___aEnumerator0;
		__this->___m_Enumerator_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___m_Enumerator_0))->___m_Object_1))->____dictionary_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___m_Enumerator_0))->___m_Object_1))->____current_3))->___key_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___m_Enumerator_0))->___m_Object_1))->____current_3))->___value_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___m_Enumerator_0))->___m_Array_2))->____list_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___m_Enumerator_0))->___m_Array_2))->____current_3), (void*)NULL);
		#endif
		// public ValueEnumerator(Enumerator aEnumerator) { m_Enumerator = aEnumerator; }
		return;
	}
}
IL2CPP_EXTERN_C  void ValueEnumerator__ctor_m7BA4BAD5FEBAC4054F71575B728DC27EC4080F0A_AdjustorThunk (RuntimeObject* __this, Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4 ___aEnumerator0, const RuntimeMethod* method)
{
	ValueEnumerator_tD3C6F06F8E91A96073FAEE3822232DFF6AC63FB6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueEnumerator_tD3C6F06F8E91A96073FAEE3822232DFF6AC63FB6*>(__this + _offset);
	ValueEnumerator__ctor_m7BA4BAD5FEBAC4054F71575B728DC27EC4080F0A_inline(_thisAdjusted, ___aEnumerator0, method);
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode/ValueEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* ValueEnumerator_get_Current_mAA24A52FDEB7160BD268193175388EACB41B7CE2 (ValueEnumerator_tD3C6F06F8E91A96073FAEE3822232DFF6AC63FB6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mE11898FE6C7E851793D8B6E7B740E9828BA6EF94_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_tC25A1CF74139C27B48AA7E7BA0EAE31F240EA3EF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public JSONNode Current { get { return m_Enumerator.Current.Value; } }
		Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4* L_0 = (&__this->___m_Enumerator_0);
		KeyValuePair_2_tC25A1CF74139C27B48AA7E7BA0EAE31F240EA3EF L_1;
		L_1 = Enumerator_get_Current_mDE6750203413E1069D0520793D6AA0B2527CB20E(L_0, NULL);
		V_0 = L_1;
		JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_2;
		L_2 = KeyValuePair_2_get_Value_mE11898FE6C7E851793D8B6E7B740E9828BA6EF94_inline((&V_0), KeyValuePair_2_get_Value_mE11898FE6C7E851793D8B6E7B740E9828BA6EF94_RuntimeMethod_var);
		return L_2;
	}
}
IL2CPP_EXTERN_C  JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* ValueEnumerator_get_Current_mAA24A52FDEB7160BD268193175388EACB41B7CE2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueEnumerator_tD3C6F06F8E91A96073FAEE3822232DFF6AC63FB6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueEnumerator_tD3C6F06F8E91A96073FAEE3822232DFF6AC63FB6*>(__this + _offset);
	JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* _returnValue;
	_returnValue = ValueEnumerator_get_Current_mAA24A52FDEB7160BD268193175388EACB41B7CE2(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean SimpleJSON.JSONNode/ValueEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueEnumerator_MoveNext_m5B596A2EF2FF395EDA8F5CAB97C0789498D250C9 (ValueEnumerator_tD3C6F06F8E91A96073FAEE3822232DFF6AC63FB6* __this, const RuntimeMethod* method) 
{
	{
		// public bool MoveNext() { return m_Enumerator.MoveNext(); }
		Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4* L_0 = (&__this->___m_Enumerator_0);
		bool L_1;
		L_1 = Enumerator_MoveNext_m238CF072385A1106BEDEFCE33BA2B0DBE999758A(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool ValueEnumerator_MoveNext_m5B596A2EF2FF395EDA8F5CAB97C0789498D250C9_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueEnumerator_tD3C6F06F8E91A96073FAEE3822232DFF6AC63FB6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueEnumerator_tD3C6F06F8E91A96073FAEE3822232DFF6AC63FB6*>(__this + _offset);
	bool _returnValue;
	_returnValue = ValueEnumerator_MoveNext_m5B596A2EF2FF395EDA8F5CAB97C0789498D250C9(_thisAdjusted, method);
	return _returnValue;
}
// SimpleJSON.JSONNode/ValueEnumerator SimpleJSON.JSONNode/ValueEnumerator::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueEnumerator_tD3C6F06F8E91A96073FAEE3822232DFF6AC63FB6 ValueEnumerator_GetEnumerator_m765261287A2C0AEF757B94994826F43951387E4C (ValueEnumerator_tD3C6F06F8E91A96073FAEE3822232DFF6AC63FB6* __this, const RuntimeMethod* method) 
{
	{
		// public ValueEnumerator GetEnumerator() { return this; }
		ValueEnumerator_tD3C6F06F8E91A96073FAEE3822232DFF6AC63FB6 L_0 = (*(ValueEnumerator_tD3C6F06F8E91A96073FAEE3822232DFF6AC63FB6*)__this);
		return L_0;
	}
}
IL2CPP_EXTERN_C  ValueEnumerator_tD3C6F06F8E91A96073FAEE3822232DFF6AC63FB6 ValueEnumerator_GetEnumerator_m765261287A2C0AEF757B94994826F43951387E4C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueEnumerator_tD3C6F06F8E91A96073FAEE3822232DFF6AC63FB6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueEnumerator_tD3C6F06F8E91A96073FAEE3822232DFF6AC63FB6*>(__this + _offset);
	ValueEnumerator_tD3C6F06F8E91A96073FAEE3822232DFF6AC63FB6 _returnValue;
	_returnValue = ValueEnumerator_GetEnumerator_m765261287A2C0AEF757B94994826F43951387E4C(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: SimpleJSON.JSONNode/KeyEnumerator
IL2CPP_EXTERN_C void KeyEnumerator_t927DD8FD7C7D67CBE611D33C16AF70CDF793CDCF_marshal_pinvoke(const KeyEnumerator_t927DD8FD7C7D67CBE611D33C16AF70CDF793CDCF& unmarshaled, KeyEnumerator_t927DD8FD7C7D67CBE611D33C16AF70CDF793CDCF_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Enumerator_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Enumerator' of type 'KeyEnumerator'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Enumerator_0Exception, NULL);
}
IL2CPP_EXTERN_C void KeyEnumerator_t927DD8FD7C7D67CBE611D33C16AF70CDF793CDCF_marshal_pinvoke_back(const KeyEnumerator_t927DD8FD7C7D67CBE611D33C16AF70CDF793CDCF_marshaled_pinvoke& marshaled, KeyEnumerator_t927DD8FD7C7D67CBE611D33C16AF70CDF793CDCF& unmarshaled)
{
	Exception_t* ___m_Enumerator_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Enumerator' of type 'KeyEnumerator'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Enumerator_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: SimpleJSON.JSONNode/KeyEnumerator
IL2CPP_EXTERN_C void KeyEnumerator_t927DD8FD7C7D67CBE611D33C16AF70CDF793CDCF_marshal_pinvoke_cleanup(KeyEnumerator_t927DD8FD7C7D67CBE611D33C16AF70CDF793CDCF_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: SimpleJSON.JSONNode/KeyEnumerator
IL2CPP_EXTERN_C void KeyEnumerator_t927DD8FD7C7D67CBE611D33C16AF70CDF793CDCF_marshal_com(const KeyEnumerator_t927DD8FD7C7D67CBE611D33C16AF70CDF793CDCF& unmarshaled, KeyEnumerator_t927DD8FD7C7D67CBE611D33C16AF70CDF793CDCF_marshaled_com& marshaled)
{
	Exception_t* ___m_Enumerator_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Enumerator' of type 'KeyEnumerator'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Enumerator_0Exception, NULL);
}
IL2CPP_EXTERN_C void KeyEnumerator_t927DD8FD7C7D67CBE611D33C16AF70CDF793CDCF_marshal_com_back(const KeyEnumerator_t927DD8FD7C7D67CBE611D33C16AF70CDF793CDCF_marshaled_com& marshaled, KeyEnumerator_t927DD8FD7C7D67CBE611D33C16AF70CDF793CDCF& unmarshaled)
{
	Exception_t* ___m_Enumerator_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Enumerator' of type 'KeyEnumerator'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Enumerator_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: SimpleJSON.JSONNode/KeyEnumerator
IL2CPP_EXTERN_C void KeyEnumerator_t927DD8FD7C7D67CBE611D33C16AF70CDF793CDCF_marshal_com_cleanup(KeyEnumerator_t927DD8FD7C7D67CBE611D33C16AF70CDF793CDCF_marshaled_com& marshaled)
{
}
// System.Void SimpleJSON.JSONNode/KeyEnumerator::.ctor(System.Collections.Generic.List`1/Enumerator<SimpleJSON.JSONNode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyEnumerator__ctor_m6EA81E2BED4CA5194A7306D8B324F7356E37F80A (KeyEnumerator_t927DD8FD7C7D67CBE611D33C16AF70CDF793CDCF* __this, Enumerator_tC64B3D14117706116B48376FC4C0B294E0FFD944 ___aArrayEnum0, const RuntimeMethod* method) 
{
	{
		// public KeyEnumerator(List<JSONNode>.Enumerator aArrayEnum) : this(new Enumerator(aArrayEnum)) { }
		Enumerator_tC64B3D14117706116B48376FC4C0B294E0FFD944 L_0 = ___aArrayEnum0;
		Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_mF21239C69620D815F8CD34F022BE18E9DAF9CB10((&L_1), L_0, /*hidden argument*/NULL);
		KeyEnumerator__ctor_m526EA1364C367B83C931F4208CDD816BD02810EA_inline(__this, L_1, NULL);
		// public KeyEnumerator(List<JSONNode>.Enumerator aArrayEnum) : this(new Enumerator(aArrayEnum)) { }
		return;
	}
}
IL2CPP_EXTERN_C  void KeyEnumerator__ctor_m6EA81E2BED4CA5194A7306D8B324F7356E37F80A_AdjustorThunk (RuntimeObject* __this, Enumerator_tC64B3D14117706116B48376FC4C0B294E0FFD944 ___aArrayEnum0, const RuntimeMethod* method)
{
	KeyEnumerator_t927DD8FD7C7D67CBE611D33C16AF70CDF793CDCF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<KeyEnumerator_t927DD8FD7C7D67CBE611D33C16AF70CDF793CDCF*>(__this + _offset);
	KeyEnumerator__ctor_m6EA81E2BED4CA5194A7306D8B324F7356E37F80A(_thisAdjusted, ___aArrayEnum0, method);
}
// System.Void SimpleJSON.JSONNode/KeyEnumerator::.ctor(System.Collections.Generic.Dictionary`2/Enumerator<System.String,SimpleJSON.JSONNode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyEnumerator__ctor_mA6338E82A9F8AA19A1744352B4FE54103AD70405 (KeyEnumerator_t927DD8FD7C7D67CBE611D33C16AF70CDF793CDCF* __this, Enumerator_t0882EABB7914927B55F113EC1FC8D52BA871F911 ___aDictEnum0, const RuntimeMethod* method) 
{
	{
		// public KeyEnumerator(Dictionary<string, JSONNode>.Enumerator aDictEnum) : this(new Enumerator(aDictEnum)) { }
		Enumerator_t0882EABB7914927B55F113EC1FC8D52BA871F911 L_0 = ___aDictEnum0;
		Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_mAC4ED0FA4B083E2652E865A41EA5C74A49478EFE((&L_1), L_0, /*hidden argument*/NULL);
		KeyEnumerator__ctor_m526EA1364C367B83C931F4208CDD816BD02810EA_inline(__this, L_1, NULL);
		// public KeyEnumerator(Dictionary<string, JSONNode>.Enumerator aDictEnum) : this(new Enumerator(aDictEnum)) { }
		return;
	}
}
IL2CPP_EXTERN_C  void KeyEnumerator__ctor_mA6338E82A9F8AA19A1744352B4FE54103AD70405_AdjustorThunk (RuntimeObject* __this, Enumerator_t0882EABB7914927B55F113EC1FC8D52BA871F911 ___aDictEnum0, const RuntimeMethod* method)
{
	KeyEnumerator_t927DD8FD7C7D67CBE611D33C16AF70CDF793CDCF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<KeyEnumerator_t927DD8FD7C7D67CBE611D33C16AF70CDF793CDCF*>(__this + _offset);
	KeyEnumerator__ctor_mA6338E82A9F8AA19A1744352B4FE54103AD70405(_thisAdjusted, ___aDictEnum0, method);
}
// System.Void SimpleJSON.JSONNode/KeyEnumerator::.ctor(SimpleJSON.JSONNode/Enumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyEnumerator__ctor_m526EA1364C367B83C931F4208CDD816BD02810EA (KeyEnumerator_t927DD8FD7C7D67CBE611D33C16AF70CDF793CDCF* __this, Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4 ___aEnumerator0, const RuntimeMethod* method) 
{
	{
		// public KeyEnumerator(Enumerator aEnumerator) { m_Enumerator = aEnumerator; }
		Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4 L_0 = ___aEnumerator0;
		__this->___m_Enumerator_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___m_Enumerator_0))->___m_Object_1))->____dictionary_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___m_Enumerator_0))->___m_Object_1))->____current_3))->___key_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___m_Enumerator_0))->___m_Object_1))->____current_3))->___value_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___m_Enumerator_0))->___m_Array_2))->____list_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___m_Enumerator_0))->___m_Array_2))->____current_3), (void*)NULL);
		#endif
		// public KeyEnumerator(Enumerator aEnumerator) { m_Enumerator = aEnumerator; }
		return;
	}
}
IL2CPP_EXTERN_C  void KeyEnumerator__ctor_m526EA1364C367B83C931F4208CDD816BD02810EA_AdjustorThunk (RuntimeObject* __this, Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4 ___aEnumerator0, const RuntimeMethod* method)
{
	KeyEnumerator_t927DD8FD7C7D67CBE611D33C16AF70CDF793CDCF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<KeyEnumerator_t927DD8FD7C7D67CBE611D33C16AF70CDF793CDCF*>(__this + _offset);
	KeyEnumerator__ctor_m526EA1364C367B83C931F4208CDD816BD02810EA_inline(_thisAdjusted, ___aEnumerator0, method);
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode/KeyEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* KeyEnumerator_get_Current_m8FBFEE52D4438AAF3E10AB4370B34FBB8E66B3C2 (KeyEnumerator_t927DD8FD7C7D67CBE611D33C16AF70CDF793CDCF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m207EFB432FBB579ECA85B5399A1E266D0D8E3641_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_tC25A1CF74139C27B48AA7E7BA0EAE31F240EA3EF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public JSONNode Current { get { return m_Enumerator.Current.Key; } }
		Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4* L_0 = (&__this->___m_Enumerator_0);
		KeyValuePair_2_tC25A1CF74139C27B48AA7E7BA0EAE31F240EA3EF L_1;
		L_1 = Enumerator_get_Current_mDE6750203413E1069D0520793D6AA0B2527CB20E(L_0, NULL);
		V_0 = L_1;
		String_t* L_2;
		L_2 = KeyValuePair_2_get_Key_m207EFB432FBB579ECA85B5399A1E266D0D8E3641_inline((&V_0), KeyValuePair_2_get_Key_m207EFB432FBB579ECA85B5399A1E266D0D8E3641_RuntimeMethod_var);
		JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_3;
		L_3 = JSONNode_op_Implicit_mA884A397C3152BDB411767FDE9EDC274A8904523(L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* KeyEnumerator_get_Current_m8FBFEE52D4438AAF3E10AB4370B34FBB8E66B3C2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	KeyEnumerator_t927DD8FD7C7D67CBE611D33C16AF70CDF793CDCF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<KeyEnumerator_t927DD8FD7C7D67CBE611D33C16AF70CDF793CDCF*>(__this + _offset);
	JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* _returnValue;
	_returnValue = KeyEnumerator_get_Current_m8FBFEE52D4438AAF3E10AB4370B34FBB8E66B3C2(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean SimpleJSON.JSONNode/KeyEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KeyEnumerator_MoveNext_m42FE2CEE808A7E065895BA333B7FBD2F3AEE032F (KeyEnumerator_t927DD8FD7C7D67CBE611D33C16AF70CDF793CDCF* __this, const RuntimeMethod* method) 
{
	{
		// public bool MoveNext() { return m_Enumerator.MoveNext(); }
		Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4* L_0 = (&__this->___m_Enumerator_0);
		bool L_1;
		L_1 = Enumerator_MoveNext_m238CF072385A1106BEDEFCE33BA2B0DBE999758A(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool KeyEnumerator_MoveNext_m42FE2CEE808A7E065895BA333B7FBD2F3AEE032F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	KeyEnumerator_t927DD8FD7C7D67CBE611D33C16AF70CDF793CDCF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<KeyEnumerator_t927DD8FD7C7D67CBE611D33C16AF70CDF793CDCF*>(__this + _offset);
	bool _returnValue;
	_returnValue = KeyEnumerator_MoveNext_m42FE2CEE808A7E065895BA333B7FBD2F3AEE032F(_thisAdjusted, method);
	return _returnValue;
}
// SimpleJSON.JSONNode/KeyEnumerator SimpleJSON.JSONNode/KeyEnumerator::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyEnumerator_t927DD8FD7C7D67CBE611D33C16AF70CDF793CDCF KeyEnumerator_GetEnumerator_mD4687B4D6D10E4D6870CBBECC680689A62A95C0B (KeyEnumerator_t927DD8FD7C7D67CBE611D33C16AF70CDF793CDCF* __this, const RuntimeMethod* method) 
{
	{
		// public KeyEnumerator GetEnumerator() { return this; }
		KeyEnumerator_t927DD8FD7C7D67CBE611D33C16AF70CDF793CDCF L_0 = (*(KeyEnumerator_t927DD8FD7C7D67CBE611D33C16AF70CDF793CDCF*)__this);
		return L_0;
	}
}
IL2CPP_EXTERN_C  KeyEnumerator_t927DD8FD7C7D67CBE611D33C16AF70CDF793CDCF KeyEnumerator_GetEnumerator_mD4687B4D6D10E4D6870CBBECC680689A62A95C0B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	KeyEnumerator_t927DD8FD7C7D67CBE611D33C16AF70CDF793CDCF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<KeyEnumerator_t927DD8FD7C7D67CBE611D33C16AF70CDF793CDCF*>(__this + _offset);
	KeyEnumerator_t927DD8FD7C7D67CBE611D33C16AF70CDF793CDCF _returnValue;
	_returnValue = KeyEnumerator_GetEnumerator_mD4687B4D6D10E4D6870CBBECC680689A62A95C0B(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SimpleJSON.JSONNode/LinqEnumerator::.ctor(SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinqEnumerator__ctor_m9FD8AB1580F3D94C5C36D070DBE85E023ED36E30 (LinqEnumerator_t6B1FE14759D1722ED209D8FEBAE0761C67B0D7A6* __this, JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* ___aNode0, const RuntimeMethod* method) 
{
	{
		// internal LinqEnumerator(JSONNode aNode)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_Node = aNode;
		JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_0 = ___aNode0;
		__this->___m_Node_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Node_0), (void*)L_0);
		// if (m_Node != null)
		JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_1 = __this->___m_Node_0;
		bool L_2;
		L_2 = JSONNode_op_Inequality_m2DF69DE99CD87AA07CE1200892E24EA22B351943(L_1, NULL, NULL);
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		// m_Enumerator = m_Node.GetEnumerator();
		JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_3 = __this->___m_Node_0;
		NullCheck(L_3);
		Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4 L_4;
		L_4 = VirtualFuncInvoker0< Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4 >::Invoke(28 /* SimpleJSON.JSONNode/Enumerator SimpleJSON.JSONNode::GetEnumerator() */, L_3);
		__this->___m_Enumerator_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___m_Enumerator_1))->___m_Object_1))->____dictionary_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___m_Enumerator_1))->___m_Object_1))->____current_3))->___key_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___m_Enumerator_1))->___m_Object_1))->____current_3))->___value_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___m_Enumerator_1))->___m_Array_2))->____list_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___m_Enumerator_1))->___m_Array_2))->____current_3), (void*)NULL);
		#endif
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode> SimpleJSON.JSONNode/LinqEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tC25A1CF74139C27B48AA7E7BA0EAE31F240EA3EF LinqEnumerator_get_Current_m28F0BE4D9B5736F5BD79197C1895EAC1592EBAAF (LinqEnumerator_t6B1FE14759D1722ED209D8FEBAE0761C67B0D7A6* __this, const RuntimeMethod* method) 
{
	{
		// public KeyValuePair<string, JSONNode> Current { get { return m_Enumerator.Current; } }
		Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4* L_0 = (&__this->___m_Enumerator_1);
		KeyValuePair_2_tC25A1CF74139C27B48AA7E7BA0EAE31F240EA3EF L_1;
		L_1 = Enumerator_get_Current_mDE6750203413E1069D0520793D6AA0B2527CB20E(L_0, NULL);
		return L_1;
	}
}
// System.Object SimpleJSON.JSONNode/LinqEnumerator::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LinqEnumerator_System_Collections_IEnumerator_get_Current_m6B6C12C7E8CD21DF513FCDCB4E88E454790B6FF0 (LinqEnumerator_t6B1FE14759D1722ED209D8FEBAE0761C67B0D7A6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_tC25A1CF74139C27B48AA7E7BA0EAE31F240EA3EF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object IEnumerator.Current { get { return m_Enumerator.Current; } }
		Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4* L_0 = (&__this->___m_Enumerator_1);
		KeyValuePair_2_tC25A1CF74139C27B48AA7E7BA0EAE31F240EA3EF L_1;
		L_1 = Enumerator_get_Current_mDE6750203413E1069D0520793D6AA0B2527CB20E(L_0, NULL);
		KeyValuePair_2_tC25A1CF74139C27B48AA7E7BA0EAE31F240EA3EF L_2 = L_1;
		RuntimeObject* L_3 = Box(KeyValuePair_2_tC25A1CF74139C27B48AA7E7BA0EAE31F240EA3EF_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Boolean SimpleJSON.JSONNode/LinqEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LinqEnumerator_MoveNext_mCA8604B6E8D857CF16003E674048C05E29447819 (LinqEnumerator_t6B1FE14759D1722ED209D8FEBAE0761C67B0D7A6* __this, const RuntimeMethod* method) 
{
	{
		// public bool MoveNext() { return m_Enumerator.MoveNext(); }
		Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4* L_0 = (&__this->___m_Enumerator_1);
		bool L_1;
		L_1 = Enumerator_MoveNext_m238CF072385A1106BEDEFCE33BA2B0DBE999758A(L_0, NULL);
		return L_1;
	}
}
// System.Void SimpleJSON.JSONNode/LinqEnumerator::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinqEnumerator_Dispose_m5D6A54C4B712D138739726323D5BEA50A4E12E32 (LinqEnumerator_t6B1FE14759D1722ED209D8FEBAE0761C67B0D7A6* __this, const RuntimeMethod* method) 
{
	{
		// m_Node = null;
		__this->___m_Node_0 = (JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Node_0), (void*)(JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653*)NULL);
		// m_Enumerator = new Enumerator();
		Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4* L_0 = (&__this->___m_Enumerator_1);
		il2cpp_codegen_initobj(L_0, sizeof(Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4));
		// }
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>> SimpleJSON.JSONNode/LinqEnumerator::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LinqEnumerator_GetEnumerator_m4A9F0720F0C0964F91032AB8B8776F09DC70A90B (LinqEnumerator_t6B1FE14759D1722ED209D8FEBAE0761C67B0D7A6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinqEnumerator_t6B1FE14759D1722ED209D8FEBAE0761C67B0D7A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new LinqEnumerator(m_Node);
		JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_0 = __this->___m_Node_0;
		LinqEnumerator_t6B1FE14759D1722ED209D8FEBAE0761C67B0D7A6* L_1 = (LinqEnumerator_t6B1FE14759D1722ED209D8FEBAE0761C67B0D7A6*)il2cpp_codegen_object_new(LinqEnumerator_t6B1FE14759D1722ED209D8FEBAE0761C67B0D7A6_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		LinqEnumerator__ctor_m9FD8AB1580F3D94C5C36D070DBE85E023ED36E30(L_1, L_0, NULL);
		return L_1;
	}
}
// System.Void SimpleJSON.JSONNode/LinqEnumerator::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinqEnumerator_Reset_m56B65E398518EF57070307FDC48069DFE37BC57B (LinqEnumerator_t6B1FE14759D1722ED209D8FEBAE0761C67B0D7A6* __this, const RuntimeMethod* method) 
{
	{
		// if (m_Node != null)
		JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_0 = __this->___m_Node_0;
		bool L_1;
		L_1 = JSONNode_op_Inequality_m2DF69DE99CD87AA07CE1200892E24EA22B351943(L_0, NULL, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// m_Enumerator = m_Node.GetEnumerator();
		JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_2 = __this->___m_Node_0;
		NullCheck(L_2);
		Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4 L_3;
		L_3 = VirtualFuncInvoker0< Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4 >::Invoke(28 /* SimpleJSON.JSONNode/Enumerator SimpleJSON.JSONNode::GetEnumerator() */, L_2);
		__this->___m_Enumerator_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___m_Enumerator_1))->___m_Object_1))->____dictionary_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___m_Enumerator_1))->___m_Object_1))->____current_3))->___key_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___m_Enumerator_1))->___m_Object_1))->____current_3))->___value_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___m_Enumerator_1))->___m_Array_2))->____list_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___m_Enumerator_1))->___m_Array_2))->____current_3), (void*)NULL);
		#endif
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator SimpleJSON.JSONNode/LinqEnumerator::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LinqEnumerator_System_Collections_IEnumerable_GetEnumerator_mB63F02D713868ABF87DAB18ABFD5D832F4D805A4 (LinqEnumerator_t6B1FE14759D1722ED209D8FEBAE0761C67B0D7A6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinqEnumerator_t6B1FE14759D1722ED209D8FEBAE0761C67B0D7A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new LinqEnumerator(m_Node);
		JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_0 = __this->___m_Node_0;
		LinqEnumerator_t6B1FE14759D1722ED209D8FEBAE0761C67B0D7A6* L_1 = (LinqEnumerator_t6B1FE14759D1722ED209D8FEBAE0761C67B0D7A6*)il2cpp_codegen_object_new(LinqEnumerator_t6B1FE14759D1722ED209D8FEBAE0761C67B0D7A6_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		LinqEnumerator__ctor_m9FD8AB1580F3D94C5C36D070DBE85E023ED36E30(L_1, L_0, NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SimpleJSON.JSONNode/<get_Children>d__40::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__40__ctor_mED3CB3E682749015A8491DF12C31487745A4248B (U3Cget_ChildrenU3Ed__40_tD8DB7CAAB4657CD56F7E69A2896BF9BEF44DC074* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_mEC09D20ED666BC3277AC9D16B68AA287E5AFE1B2(NULL);
		__this->___U3CU3El__initialThreadId_2 = L_1;
		return;
	}
}
// System.Void SimpleJSON.JSONNode/<get_Children>d__40::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__40_System_IDisposable_Dispose_m278BD93CDDCDA8A33C819FE8B1B7BE4FEE90D06B (U3Cget_ChildrenU3Ed__40_tD8DB7CAAB4657CD56F7E69A2896BF9BEF44DC074* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SimpleJSON.JSONNode/<get_Children>d__40::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Cget_ChildrenU3Ed__40_MoveNext_mD6AE82A70820FAF1AFEC7896955955E990067CB8 (U3Cget_ChildrenU3Ed__40_tD8DB7CAAB4657CD56F7E69A2896BF9BEF44DC074* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield break;
		return (bool)0;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode/<get_Children>d__40::System.Collections.Generic.IEnumerator<SimpleJSON.JSONNode>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* U3Cget_ChildrenU3Ed__40_System_Collections_Generic_IEnumeratorU3CSimpleJSON_JSONNodeU3E_get_Current_m75DE45763814DF424576E7C517E1D7EFDBAD9F45 (U3Cget_ChildrenU3Ed__40_tD8DB7CAAB4657CD56F7E69A2896BF9BEF44DC074* __this, const RuntimeMethod* method) 
{
	{
		JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SimpleJSON.JSONNode/<get_Children>d__40::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__40_System_Collections_IEnumerator_Reset_m5375DEDEB65015D0634741057877D504BF18526F (U3Cget_ChildrenU3Ed__40_tD8DB7CAAB4657CD56F7E69A2896BF9BEF44DC074* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Cget_ChildrenU3Ed__40_System_Collections_IEnumerator_Reset_m5375DEDEB65015D0634741057877D504BF18526F_RuntimeMethod_var)));
	}
}
// System.Object SimpleJSON.JSONNode/<get_Children>d__40::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildrenU3Ed__40_System_Collections_IEnumerator_get_Current_m05E8F0D8A29155DCA5EA0D8B6ABA68AF7236F9C6 (U3Cget_ChildrenU3Ed__40_tD8DB7CAAB4657CD56F7E69A2896BF9BEF44DC074* __this, const RuntimeMethod* method) 
{
	{
		JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode/<get_Children>d__40::System.Collections.Generic.IEnumerable<SimpleJSON.JSONNode>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildrenU3Ed__40_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m2F120D821A756BC0938593FF8F6184A49710DFA3 (U3Cget_ChildrenU3Ed__40_tD8DB7CAAB4657CD56F7E69A2896BF9BEF44DC074* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Cget_ChildrenU3Ed__40_tD8DB7CAAB4657CD56F7E69A2896BF9BEF44DC074_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3Cget_ChildrenU3Ed__40_tD8DB7CAAB4657CD56F7E69A2896BF9BEF44DC074* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId_2;
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_mEC09D20ED666BC3277AC9D16B68AA287E5AFE1B2(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->___U3CU3E1__state_0 = 0;
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3Cget_ChildrenU3Ed__40_tD8DB7CAAB4657CD56F7E69A2896BF9BEF44DC074* L_3 = (U3Cget_ChildrenU3Ed__40_tD8DB7CAAB4657CD56F7E69A2896BF9BEF44DC074*)il2cpp_codegen_object_new(U3Cget_ChildrenU3Ed__40_tD8DB7CAAB4657CD56F7E69A2896BF9BEF44DC074_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		U3Cget_ChildrenU3Ed__40__ctor_mED3CB3E682749015A8491DF12C31487745A4248B(L_3, 0, NULL);
		V_0 = L_3;
	}

IL_0029:
	{
		U3Cget_ChildrenU3Ed__40_tD8DB7CAAB4657CD56F7E69A2896BF9BEF44DC074* L_4 = V_0;
		return L_4;
	}
}
// System.Collections.IEnumerator SimpleJSON.JSONNode/<get_Children>d__40::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildrenU3Ed__40_System_Collections_IEnumerable_GetEnumerator_mB1CE5E0B30277A97EA1C6D3E337523DEA5B11757 (U3Cget_ChildrenU3Ed__40_tD8DB7CAAB4657CD56F7E69A2896BF9BEF44DC074* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3Cget_ChildrenU3Ed__40_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m2F120D821A756BC0938593FF8F6184A49710DFA3(__this, NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SimpleJSON.JSONNode/<get_DeepChildren>d__42::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_DeepChildrenU3Ed__42__ctor_mB98C64BA2B81334A1830986688EA632F32DC2EDB (U3Cget_DeepChildrenU3Ed__42_tF52AF8636771CA100B6375F869B3C3BF8F6ADAF3* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_mEC09D20ED666BC3277AC9D16B68AA287E5AFE1B2(NULL);
		__this->___U3CU3El__initialThreadId_2 = L_1;
		return;
	}
}
// System.Void SimpleJSON.JSONNode/<get_DeepChildren>d__42::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_DeepChildrenU3Ed__42_System_IDisposable_Dispose_mA6F2AF3124A2E4A2DCB86C54AF4E31F08EA8AF3F (U3Cget_DeepChildrenU3Ed__42_tF52AF8636771CA100B6375F869B3C3BF8F6ADAF3* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract(L_1, ((int32_t)-4)))) > ((uint32_t)1))))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_002f;
		}
	}

IL_0012:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0028:
			{// begin finally (depth: 1)
				U3Cget_DeepChildrenU3Ed__42_U3CU3Em__Finally1_mFB16A1F4090D60071A16E8ED7E86DC487305AF73(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_3 = V_0;
				if ((((int32_t)L_3) == ((int32_t)((int32_t)-4))))
				{
					goto IL_001e_1;
				}
			}
			{
				int32_t L_4 = V_0;
				if ((((int32_t)L_4) == ((int32_t)1)))
				{
					goto IL_001e_1;
				}
			}
			{
				goto IL_002f;
			}

IL_001e_1:
			{
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0021_1:
					{// begin finally (depth: 2)
						U3Cget_DeepChildrenU3Ed__42_U3CU3Em__Finally2_m9B19E684C42ABCBC8476BDD436F5EB28D9C731AC(__this, NULL);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					goto IL_002f;
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002f:
	{
		return;
	}
}
// System.Boolean SimpleJSON.JSONNode/<get_DeepChildren>d__42::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Cget_DeepChildrenU3Ed__42_MoveNext_m6568ACC95807B31FA819569F541B6EDAAD92F579 (U3Cget_DeepChildrenU3Ed__42_tF52AF8636771CA100B6375F869B3C3BF8F6ADAF3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tE6D057AF215588DA9A4145F9FCA0ADF5CFC7F6BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t93603AF1D6FE895E5B99825CB3391A1EA969D8DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* V_2 = NULL;
	JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* V_3 = NULL;
	JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* V_4 = NULL;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_00c5:
			{// begin fault (depth: 1)
				U3Cget_DeepChildrenU3Ed__42_System_IDisposable_Dispose_mA6F2AF3124A2E4A2DCB86C54AF4E31F08EA8AF3F(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_1 = __this->___U3CU3E4__this_3;
				V_2 = L_1;
				int32_t L_2 = V_1;
				if (!L_2)
				{
					goto IL_001c_1;
				}
			}
			{
				int32_t L_3 = V_1;
				if ((((int32_t)L_3) == ((int32_t)1)))
				{
					goto IL_0085_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_00cc;
			}

IL_001c_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// foreach (var C in Children)
				JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_4 = V_2;
				NullCheck(L_4);
				RuntimeObject* L_5;
				L_5 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(25 /* System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode::get_Children() */, L_4);
				NullCheck(L_5);
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode>::GetEnumerator() */, IEnumerable_1_tE6D057AF215588DA9A4145F9FCA0ADF5CFC7F6BD_il2cpp_TypeInfo_var, L_5);
				__this->___U3CU3E7__wrap1_4 = L_6;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap1_4), (void*)L_6);
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				goto IL_00a7_1;
			}

IL_003e_1:
			{
				// foreach (var C in Children)
				RuntimeObject* L_7 = __this->___U3CU3E7__wrap1_4;
				NullCheck(L_7);
				JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_8;
				L_8 = InterfaceFuncInvoker0< JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode>::get_Current() */, IEnumerator_1_t93603AF1D6FE895E5B99825CB3391A1EA969D8DE_il2cpp_TypeInfo_var, L_7);
				V_3 = L_8;
				// foreach (var D in C.DeepChildren)
				JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_9 = V_3;
				NullCheck(L_9);
				RuntimeObject* L_10;
				L_10 = JSONNode_get_DeepChildren_m891CB892AEA834980686ED760B952A86DC1E8725(L_9, NULL);
				NullCheck(L_10);
				RuntimeObject* L_11;
				L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode>::GetEnumerator() */, IEnumerable_1_tE6D057AF215588DA9A4145F9FCA0ADF5CFC7F6BD_il2cpp_TypeInfo_var, L_10);
				__this->___U3CU3E7__wrap2_5 = L_11;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap2_5), (void*)L_11);
				__this->___U3CU3E1__state_0 = ((int32_t)-4);
				goto IL_008d_1;
			}

IL_0065_1:
			{
				// foreach (var D in C.DeepChildren)
				RuntimeObject* L_12 = __this->___U3CU3E7__wrap2_5;
				NullCheck(L_12);
				JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_13;
				L_13 = InterfaceFuncInvoker0< JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode>::get_Current() */, IEnumerator_1_t93603AF1D6FE895E5B99825CB3391A1EA969D8DE_il2cpp_TypeInfo_var, L_12);
				V_4 = L_13;
				// yield return D;
				JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_14 = V_4;
				__this->___U3CU3E2__current_1 = L_14;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_14);
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_00cc;
			}

IL_0085_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-4);
			}

IL_008d_1:
			{
				// foreach (var D in C.DeepChildren)
				RuntimeObject* L_15 = __this->___U3CU3E7__wrap2_5;
				NullCheck(L_15);
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_15);
				if (L_16)
				{
					goto IL_0065_1;
				}
			}
			{
				U3Cget_DeepChildrenU3Ed__42_U3CU3Em__Finally2_m9B19E684C42ABCBC8476BDD436F5EB28D9C731AC(__this, NULL);
				__this->___U3CU3E7__wrap2_5 = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap2_5), (void*)(RuntimeObject*)NULL);
			}

IL_00a7_1:
			{
				// foreach (var C in Children)
				RuntimeObject* L_17 = __this->___U3CU3E7__wrap1_4;
				NullCheck(L_17);
				bool L_18;
				L_18 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_17);
				if (L_18)
				{
					goto IL_003e_1;
				}
			}
			{
				U3Cget_DeepChildrenU3Ed__42_U3CU3Em__Finally1_mFB16A1F4090D60071A16E8ED7E86DC487305AF73(__this, NULL);
				__this->___U3CU3E7__wrap1_4 = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap1_4), (void*)(RuntimeObject*)NULL);
				// }
				V_0 = (bool)0;
				goto IL_00cc;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00cc:
	{
		bool L_19 = V_0;
		return L_19;
	}
}
// System.Void SimpleJSON.JSONNode/<get_DeepChildren>d__42::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_DeepChildrenU3Ed__42_U3CU3Em__Finally1_mFB16A1F4090D60071A16E8ED7E86DC487305AF73 (U3Cget_DeepChildrenU3Ed__42_tF52AF8636771CA100B6375F869B3C3BF8F6ADAF3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		RuntimeObject* L_0 = __this->___U3CU3E7__wrap1_4;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->___U3CU3E7__wrap1_4;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Void SimpleJSON.JSONNode/<get_DeepChildren>d__42::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_DeepChildrenU3Ed__42_U3CU3Em__Finally2_m9B19E684C42ABCBC8476BDD436F5EB28D9C731AC (U3Cget_DeepChildrenU3Ed__42_tF52AF8636771CA100B6375F869B3C3BF8F6ADAF3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-3);
		RuntimeObject* L_0 = __this->___U3CU3E7__wrap2_5;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_1 = __this->___U3CU3E7__wrap2_5;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_1);
	}

IL_001b:
	{
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode/<get_DeepChildren>d__42::System.Collections.Generic.IEnumerator<SimpleJSON.JSONNode>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* U3Cget_DeepChildrenU3Ed__42_System_Collections_Generic_IEnumeratorU3CSimpleJSON_JSONNodeU3E_get_Current_m927BE2DB8EF13D247334ACBD9AD5F9D7312E13DC (U3Cget_DeepChildrenU3Ed__42_tF52AF8636771CA100B6375F869B3C3BF8F6ADAF3* __this, const RuntimeMethod* method) 
{
	{
		JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SimpleJSON.JSONNode/<get_DeepChildren>d__42::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_DeepChildrenU3Ed__42_System_Collections_IEnumerator_Reset_m3B21F82F9CF8A35C11BD0D4B635E29F13507C5C3 (U3Cget_DeepChildrenU3Ed__42_tF52AF8636771CA100B6375F869B3C3BF8F6ADAF3* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Cget_DeepChildrenU3Ed__42_System_Collections_IEnumerator_Reset_m3B21F82F9CF8A35C11BD0D4B635E29F13507C5C3_RuntimeMethod_var)));
	}
}
// System.Object SimpleJSON.JSONNode/<get_DeepChildren>d__42::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_DeepChildrenU3Ed__42_System_Collections_IEnumerator_get_Current_mF0F87CE545AB2B74799D13F35D5007A8C95F0CB3 (U3Cget_DeepChildrenU3Ed__42_tF52AF8636771CA100B6375F869B3C3BF8F6ADAF3* __this, const RuntimeMethod* method) 
{
	{
		JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode/<get_DeepChildren>d__42::System.Collections.Generic.IEnumerable<SimpleJSON.JSONNode>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_DeepChildrenU3Ed__42_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_mF23F7F01784F070DC30E80C7B2525BB08F1F729F (U3Cget_DeepChildrenU3Ed__42_tF52AF8636771CA100B6375F869B3C3BF8F6ADAF3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Cget_DeepChildrenU3Ed__42_tF52AF8636771CA100B6375F869B3C3BF8F6ADAF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3Cget_DeepChildrenU3Ed__42_tF52AF8636771CA100B6375F869B3C3BF8F6ADAF3* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId_2;
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_mEC09D20ED666BC3277AC9D16B68AA287E5AFE1B2(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->___U3CU3E1__state_0 = 0;
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3Cget_DeepChildrenU3Ed__42_tF52AF8636771CA100B6375F869B3C3BF8F6ADAF3* L_3 = (U3Cget_DeepChildrenU3Ed__42_tF52AF8636771CA100B6375F869B3C3BF8F6ADAF3*)il2cpp_codegen_object_new(U3Cget_DeepChildrenU3Ed__42_tF52AF8636771CA100B6375F869B3C3BF8F6ADAF3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		U3Cget_DeepChildrenU3Ed__42__ctor_mB98C64BA2B81334A1830986688EA632F32DC2EDB(L_3, 0, NULL);
		V_0 = L_3;
		U3Cget_DeepChildrenU3Ed__42_tF52AF8636771CA100B6375F869B3C3BF8F6ADAF3* L_4 = V_0;
		JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_5 = __this->___U3CU3E4__this_3;
		NullCheck(L_4);
		L_4->___U3CU3E4__this_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___U3CU3E4__this_3), (void*)L_5);
	}

IL_0035:
	{
		U3Cget_DeepChildrenU3Ed__42_tF52AF8636771CA100B6375F869B3C3BF8F6ADAF3* L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator SimpleJSON.JSONNode/<get_DeepChildren>d__42::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_DeepChildrenU3Ed__42_System_Collections_IEnumerable_GetEnumerator_m60B68168D69C58711A46585D0A262C6CFA0C8B5F (U3Cget_DeepChildrenU3Ed__42_tF52AF8636771CA100B6375F869B3C3BF8F6ADAF3* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3Cget_DeepChildrenU3Ed__42_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_mF23F7F01784F070DC30E80C7B2525BB08F1F729F(__this, NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean SimpleJSON.JSONArray::get_Inline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONArray_get_Inline_mBA0C9AEBB7420DBDFD977C0F54CC237E8F2BE3E5 (JSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2* __this, const RuntimeMethod* method) 
{
	{
		// get { return inline; }
		bool L_0 = __this->___inline_7;
		return L_0;
	}
}
// System.Void SimpleJSON.JSONArray::set_Inline(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONArray_set_Inline_m731089F5D0FA649ED210518DC299635A8D86A1DC (JSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { inline = value; }
		bool L_0 = ___value0;
		__this->___inline_7 = L_0;
		// set { inline = value; }
		return;
	}
}
// SimpleJSON.JSONNodeType SimpleJSON.JSONArray::get_Tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONArray_get_Tag_m360EB078D7897D6D52783B8CDA6B736D014E97BC (JSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2* __this, const RuntimeMethod* method) 
{
	{
		// public override JSONNodeType Tag { get { return JSONNodeType.Array; } }
		return (int32_t)(1);
	}
}
// System.Boolean SimpleJSON.JSONArray::get_IsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONArray_get_IsArray_mA7B4EF5B0128FB64ACEB7EAC66FA3522991980AF (JSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2* __this, const RuntimeMethod* method) 
{
	{
		// public override bool IsArray { get { return true; } }
		return (bool)1;
	}
}
// SimpleJSON.JSONNode/Enumerator SimpleJSON.JSONArray::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4 JSONArray_GetEnumerator_m6AF64AE0DD2A5AAB8C0E271BF0CAB8AA1FD32E17 (JSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7DDCF28102A20EEBF067D96F91DFE18F03A96C5B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override Enumerator GetEnumerator() { return new Enumerator(m_List.GetEnumerator()); }
		List_1_tD66F8EBB7E2F92261ACAA473BBD1879737E6783C* L_0 = __this->___m_List_6;
		NullCheck(L_0);
		Enumerator_tC64B3D14117706116B48376FC4C0B294E0FFD944 L_1;
		L_1 = List_1_GetEnumerator_m7DDCF28102A20EEBF067D96F91DFE18F03A96C5B(L_0, List_1_GetEnumerator_m7DDCF28102A20EEBF067D96F91DFE18F03A96C5B_RuntimeMethod_var);
		Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Enumerator__ctor_mF21239C69620D815F8CD34F022BE18E9DAF9CB10((&L_2), L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONArray::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* JSONArray_get_Item_m8BE9047FC512840E6A4594560EDF86BB4E0FF657 (JSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2* __this, int32_t ___aIndex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6F782FA6EB1B2E2F1C3530246C446F4DEEA30190_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m9E1232D0A0D221987BA1E611491D57A00AFC1721_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (aIndex < 0 || aIndex >= m_List.Count)
		int32_t L_0 = ___aIndex0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = ___aIndex0;
		List_1_tD66F8EBB7E2F92261ACAA473BBD1879737E6783C* L_2 = __this->___m_List_6;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m6F782FA6EB1B2E2F1C3530246C446F4DEEA30190_inline(L_2, List_1_get_Count_m6F782FA6EB1B2E2F1C3530246C446F4DEEA30190_RuntimeMethod_var);
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0019;
		}
	}

IL_0012:
	{
		// return new JSONLazyCreator(this);
		JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* L_4 = (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C*)il2cpp_codegen_object_new(JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		JSONLazyCreator__ctor_m0B3625D19DDD8DBDBB45822FAABCE266FA4EE694(L_4, __this, NULL);
		return L_4;
	}

IL_0019:
	{
		// return m_List[aIndex];
		List_1_tD66F8EBB7E2F92261ACAA473BBD1879737E6783C* L_5 = __this->___m_List_6;
		int32_t L_6 = ___aIndex0;
		NullCheck(L_5);
		JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_7;
		L_7 = List_1_get_Item_m9E1232D0A0D221987BA1E611491D57A00AFC1721(L_5, L_6, List_1_get_Item_m9E1232D0A0D221987BA1E611491D57A00AFC1721_RuntimeMethod_var);
		return L_7;
	}
}
// System.Void SimpleJSON.JSONArray::set_Item(System.Int32,SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONArray_set_Item_mBCD05590C34BC589B786E753B9FE796EBA3F6725 (JSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2* __this, int32_t ___aIndex0, JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3C60D77B9288E9619EBC7F28115464996321E97D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6F782FA6EB1B2E2F1C3530246C446F4DEEA30190_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_mF945957677A6D59A7A530133DF6FA14CC374C9F1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value == null)
		JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_0 = ___value1;
		bool L_1;
		L_1 = JSONNode_op_Equality_m6961ED452D3A120FE9908FFB96260DF98A47A8B3(L_0, NULL, NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// value = JSONNull.CreateOrGet();
		il2cpp_codegen_runtime_class_init_inline(JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595_il2cpp_TypeInfo_var);
		JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595* L_2;
		L_2 = JSONNull_CreateOrGet_m68ED6000156701E566B1EA9DDC5284299B0C9105(NULL);
		___value1 = L_2;
	}

IL_0010:
	{
		// if (aIndex < 0 || aIndex >= m_List.Count)
		int32_t L_3 = ___aIndex0;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_4 = ___aIndex0;
		List_1_tD66F8EBB7E2F92261ACAA473BBD1879737E6783C* L_5 = __this->___m_List_6;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_m6F782FA6EB1B2E2F1C3530246C446F4DEEA30190_inline(L_5, List_1_get_Count_m6F782FA6EB1B2E2F1C3530246C446F4DEEA30190_RuntimeMethod_var);
		if ((((int32_t)L_4) < ((int32_t)L_6)))
		{
			goto IL_002f;
		}
	}

IL_0022:
	{
		// m_List.Add(value);
		List_1_tD66F8EBB7E2F92261ACAA473BBD1879737E6783C* L_7 = __this->___m_List_6;
		JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_8 = ___value1;
		NullCheck(L_7);
		List_1_Add_m3C60D77B9288E9619EBC7F28115464996321E97D_inline(L_7, L_8, List_1_Add_m3C60D77B9288E9619EBC7F28115464996321E97D_RuntimeMethod_var);
		return;
	}

IL_002f:
	{
		// m_List[aIndex] = value;
		List_1_tD66F8EBB7E2F92261ACAA473BBD1879737E6783C* L_9 = __this->___m_List_6;
		int32_t L_10 = ___aIndex0;
		JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_11 = ___value1;
		NullCheck(L_9);
		List_1_set_Item_mF945957677A6D59A7A530133DF6FA14CC374C9F1(L_9, L_10, L_11, List_1_set_Item_mF945957677A6D59A7A530133DF6FA14CC374C9F1_RuntimeMethod_var);
		// }
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONArray::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* JSONArray_get_Item_mE18312128B02B505BA656D7F444B05A6769710AE (JSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2* __this, String_t* ___aKey0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return new JSONLazyCreator(this); }
		JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* L_0 = (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C*)il2cpp_codegen_object_new(JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JSONLazyCreator__ctor_m0B3625D19DDD8DBDBB45822FAABCE266FA4EE694(L_0, __this, NULL);
		return L_0;
	}
}
// System.Void SimpleJSON.JSONArray::set_Item(System.String,SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONArray_set_Item_mE4E0DE5133E60AF49E46FEDAD00D2A04349C0855 (JSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2* __this, String_t* ___aKey0, JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3C60D77B9288E9619EBC7F28115464996321E97D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value == null)
		JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_0 = ___value1;
		bool L_1;
		L_1 = JSONNode_op_Equality_m6961ED452D3A120FE9908FFB96260DF98A47A8B3(L_0, NULL, NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// value = JSONNull.CreateOrGet();
		il2cpp_codegen_runtime_class_init_inline(JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595_il2cpp_TypeInfo_var);
		JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595* L_2;
		L_2 = JSONNull_CreateOrGet_m68ED6000156701E566B1EA9DDC5284299B0C9105(NULL);
		___value1 = L_2;
	}

IL_0010:
	{
		// m_List.Add(value);
		List_1_tD66F8EBB7E2F92261ACAA473BBD1879737E6783C* L_3 = __this->___m_List_6;
		JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_4 = ___value1;
		NullCheck(L_3);
		List_1_Add_m3C60D77B9288E9619EBC7F28115464996321E97D_inline(L_3, L_4, List_1_Add_m3C60D77B9288E9619EBC7F28115464996321E97D_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Int32 SimpleJSON.JSONArray::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONArray_get_Count_mB71218A2D8288D0665C467844F7351D301FDAFDD (JSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6F782FA6EB1B2E2F1C3530246C446F4DEEA30190_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return m_List.Count; }
		List_1_tD66F8EBB7E2F92261ACAA473BBD1879737E6783C* L_0 = __this->___m_List_6;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m6F782FA6EB1B2E2F1C3530246C446F4DEEA30190_inline(L_0, List_1_get_Count_m6F782FA6EB1B2E2F1C3530246C446F4DEEA30190_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void SimpleJSON.JSONArray::Add(System.String,SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONArray_Add_mD1FBE0F0FC20E7415014B7FF21939592EBB0C9A1 (JSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2* __this, String_t* ___aKey0, JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* ___aItem1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3C60D77B9288E9619EBC7F28115464996321E97D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (aItem == null)
		JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_0 = ___aItem1;
		bool L_1;
		L_1 = JSONNode_op_Equality_m6961ED452D3A120FE9908FFB96260DF98A47A8B3(L_0, NULL, NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// aItem = JSONNull.CreateOrGet();
		il2cpp_codegen_runtime_class_init_inline(JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595_il2cpp_TypeInfo_var);
		JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595* L_2;
		L_2 = JSONNull_CreateOrGet_m68ED6000156701E566B1EA9DDC5284299B0C9105(NULL);
		___aItem1 = L_2;
	}

IL_0010:
	{
		// m_List.Add(aItem);
		List_1_tD66F8EBB7E2F92261ACAA473BBD1879737E6783C* L_3 = __this->___m_List_6;
		JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_4 = ___aItem1;
		NullCheck(L_3);
		List_1_Add_m3C60D77B9288E9619EBC7F28115464996321E97D_inline(L_3, L_4, List_1_Add_m3C60D77B9288E9619EBC7F28115464996321E97D_RuntimeMethod_var);
		// }
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONArray::Remove(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* JSONArray_Remove_m79500DBD9751A04C02756470A4D22DDCF9C97FEC (JSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2* __this, int32_t ___aIndex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m24DE650BE95A807BAE35507BBA507DD5480128FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6F782FA6EB1B2E2F1C3530246C446F4DEEA30190_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m9E1232D0A0D221987BA1E611491D57A00AFC1721_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (aIndex < 0 || aIndex >= m_List.Count)
		int32_t L_0 = ___aIndex0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = ___aIndex0;
		List_1_tD66F8EBB7E2F92261ACAA473BBD1879737E6783C* L_2 = __this->___m_List_6;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m6F782FA6EB1B2E2F1C3530246C446F4DEEA30190_inline(L_2, List_1_get_Count_m6F782FA6EB1B2E2F1C3530246C446F4DEEA30190_RuntimeMethod_var);
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0014;
		}
	}

IL_0012:
	{
		// return null;
		return (JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653*)NULL;
	}

IL_0014:
	{
		// JSONNode tmp = m_List[aIndex];
		List_1_tD66F8EBB7E2F92261ACAA473BBD1879737E6783C* L_4 = __this->___m_List_6;
		int32_t L_5 = ___aIndex0;
		NullCheck(L_4);
		JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_6;
		L_6 = List_1_get_Item_m9E1232D0A0D221987BA1E611491D57A00AFC1721(L_4, L_5, List_1_get_Item_m9E1232D0A0D221987BA1E611491D57A00AFC1721_RuntimeMethod_var);
		// m_List.RemoveAt(aIndex);
		List_1_tD66F8EBB7E2F92261ACAA473BBD1879737E6783C* L_7 = __this->___m_List_6;
		int32_t L_8 = ___aIndex0;
		NullCheck(L_7);
		List_1_RemoveAt_m24DE650BE95A807BAE35507BBA507DD5480128FC(L_7, L_8, List_1_RemoveAt_m24DE650BE95A807BAE35507BBA507DD5480128FC_RuntimeMethod_var);
		// return tmp;
		return L_6;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONArray::Remove(SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* JSONArray_Remove_m64C3EBFE3DB5BE130232769DC43000E84589E674 (JSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2* __this, JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* ___aNode0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mEFC31D4DE59FCE14782FF159FD633CDFEF369438_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_List.Remove(aNode);
		List_1_tD66F8EBB7E2F92261ACAA473BBD1879737E6783C* L_0 = __this->___m_List_6;
		JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_1 = ___aNode0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Remove_mEFC31D4DE59FCE14782FF159FD633CDFEF369438(L_0, L_1, List_1_Remove_mEFC31D4DE59FCE14782FF159FD633CDFEF369438_RuntimeMethod_var);
		// return aNode;
		JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_3 = ___aNode0;
		return L_3;
	}
}
// System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode> SimpleJSON.JSONArray::get_Children()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JSONArray_get_Children_m733AE4C5816E51E6F86441110606489A0406AA91 (JSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Cget_ChildrenU3Ed__22_t0BBD3CB230460AF1CA521BEBCBD1A39F74A02822_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3Cget_ChildrenU3Ed__22_t0BBD3CB230460AF1CA521BEBCBD1A39F74A02822* L_0 = (U3Cget_ChildrenU3Ed__22_t0BBD3CB230460AF1CA521BEBCBD1A39F74A02822*)il2cpp_codegen_object_new(U3Cget_ChildrenU3Ed__22_t0BBD3CB230460AF1CA521BEBCBD1A39F74A02822_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3Cget_ChildrenU3Ed__22__ctor_m85868694A6F76D6658184E05C60FF81F01F77A15(L_0, ((int32_t)-2), NULL);
		U3Cget_ChildrenU3Ed__22_t0BBD3CB230460AF1CA521BEBCBD1A39F74A02822* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		return L_1;
	}
}
// System.Void SimpleJSON.JSONArray::WriteToStringBuilder(System.Text.StringBuilder,System.Int32,System.Int32,SimpleJSON.JSONTextMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONArray_WriteToStringBuilder_m9F23115433028794DCAC019F82EEFD946990D994 (JSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2* __this, StringBuilder_t* ___aSB0, int32_t ___aIndent1, int32_t ___aIndentInc2, int32_t ___aMode3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6F782FA6EB1B2E2F1C3530246C446F4DEEA30190_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m9E1232D0A0D221987BA1E611491D57A00AFC1721_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// aSB.Append('[');
		StringBuilder_t* L_0 = ___aSB0;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_0, ((int32_t)91), NULL);
		// int count = m_List.Count;
		List_1_tD66F8EBB7E2F92261ACAA473BBD1879737E6783C* L_2 = __this->___m_List_6;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m6F782FA6EB1B2E2F1C3530246C446F4DEEA30190_inline(L_2, List_1_get_Count_m6F782FA6EB1B2E2F1C3530246C446F4DEEA30190_RuntimeMethod_var);
		V_0 = L_3;
		// if (inline)
		bool L_4 = __this->___inline_7;
		if (!L_4)
		{
			goto IL_0020;
		}
	}
	{
		// aMode = JSONTextMode.Compact;
		___aMode3 = 0;
	}

IL_0020:
	{
		// for (int i = 0; i < count; i++)
		V_1 = 0;
		goto IL_006a;
	}

IL_0024:
	{
		// if (i > 0)
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}
	{
		// aSB.Append(',');
		StringBuilder_t* L_6 = ___aSB0;
		NullCheck(L_6);
		StringBuilder_t* L_7;
		L_7 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_6, ((int32_t)44), NULL);
	}

IL_0031:
	{
		// if (aMode == JSONTextMode.Indent)
		int32_t L_8 = ___aMode3;
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_003d;
		}
	}
	{
		// aSB.AppendLine();
		StringBuilder_t* L_9 = ___aSB0;
		NullCheck(L_9);
		StringBuilder_t* L_10;
		L_10 = StringBuilder_AppendLine_m3BC704C4E6A8531027D8C9287D0AB2AA0188AC4E(L_9, NULL);
	}

IL_003d:
	{
		// if (aMode == JSONTextMode.Indent)
		int32_t L_11 = ___aMode3;
		if ((!(((uint32_t)L_11) == ((uint32_t)1))))
		{
			goto IL_004e;
		}
	}
	{
		// aSB.Append(' ', aIndent + aIndentInc);
		StringBuilder_t* L_12 = ___aSB0;
		int32_t L_13 = ___aIndent1;
		int32_t L_14 = ___aIndentInc2;
		NullCheck(L_12);
		StringBuilder_t* L_15;
		L_15 = StringBuilder_Append_mE20F6CD28FC8E8C9FD65987DBD32E6087CCE1CF3(L_12, ((int32_t)32), ((int32_t)il2cpp_codegen_add(L_13, L_14)), NULL);
	}

IL_004e:
	{
		// m_List[i].WriteToStringBuilder(aSB, aIndent + aIndentInc, aIndentInc, aMode);
		List_1_tD66F8EBB7E2F92261ACAA473BBD1879737E6783C* L_16 = __this->___m_List_6;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_18;
		L_18 = List_1_get_Item_m9E1232D0A0D221987BA1E611491D57A00AFC1721(L_16, L_17, List_1_get_Item_m9E1232D0A0D221987BA1E611491D57A00AFC1721_RuntimeMethod_var);
		StringBuilder_t* L_19 = ___aSB0;
		int32_t L_20 = ___aIndent1;
		int32_t L_21 = ___aIndentInc2;
		int32_t L_22 = ___aIndentInc2;
		int32_t L_23 = ___aMode3;
		NullCheck(L_18);
		VirtualActionInvoker4< StringBuilder_t*, int32_t, int32_t, int32_t >::Invoke(27 /* System.Void SimpleJSON.JSONNode::WriteToStringBuilder(System.Text.StringBuilder,System.Int32,System.Int32,SimpleJSON.JSONTextMode) */, L_18, L_19, ((int32_t)il2cpp_codegen_add(L_20, L_21)), L_22, L_23);
		// for (int i = 0; i < count; i++)
		int32_t L_24 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_006a:
	{
		// for (int i = 0; i < count; i++)
		int32_t L_25 = V_1;
		int32_t L_26 = V_0;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0024;
		}
	}
	{
		// if (aMode == JSONTextMode.Indent)
		int32_t L_27 = ___aMode3;
		if ((!(((uint32_t)L_27) == ((uint32_t)1))))
		{
			goto IL_0082;
		}
	}
	{
		// aSB.AppendLine().Append(' ', aIndent);
		StringBuilder_t* L_28 = ___aSB0;
		NullCheck(L_28);
		StringBuilder_t* L_29;
		L_29 = StringBuilder_AppendLine_m3BC704C4E6A8531027D8C9287D0AB2AA0188AC4E(L_28, NULL);
		int32_t L_30 = ___aIndent1;
		NullCheck(L_29);
		StringBuilder_t* L_31;
		L_31 = StringBuilder_Append_mE20F6CD28FC8E8C9FD65987DBD32E6087CCE1CF3(L_29, ((int32_t)32), L_30, NULL);
	}

IL_0082:
	{
		// aSB.Append(']');
		StringBuilder_t* L_32 = ___aSB0;
		NullCheck(L_32);
		StringBuilder_t* L_33;
		L_33 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_32, ((int32_t)93), NULL);
		// }
		return;
	}
}
// System.Void SimpleJSON.JSONArray::SerializeBinary(System.IO.BinaryWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONArray_SerializeBinary_m1CAA8628D33912AF42637CC6AC603402C429026C (JSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2* __this, BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___aWriter0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6F782FA6EB1B2E2F1C3530246C446F4DEEA30190_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m9E1232D0A0D221987BA1E611491D57A00AFC1721_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// aWriter.Write((byte)JSONNodeType.Array);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_0 = ___aWriter0;
		NullCheck(L_0);
		VirtualActionInvoker1< uint8_t >::Invoke(8 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_0, (uint8_t)1);
		// aWriter.Write(m_List.Count);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_1 = ___aWriter0;
		List_1_tD66F8EBB7E2F92261ACAA473BBD1879737E6783C* L_2 = __this->___m_List_6;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m6F782FA6EB1B2E2F1C3530246C446F4DEEA30190_inline(L_2, List_1_get_Count_m6F782FA6EB1B2E2F1C3530246C446F4DEEA30190_RuntimeMethod_var);
		NullCheck(L_1);
		VirtualActionInvoker1< int32_t >::Invoke(16 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_1, L_3);
		// for (int i = 0; i < m_List.Count; i++)
		V_0 = 0;
		goto IL_0032;
	}

IL_001c:
	{
		// m_List[i].SerializeBinary(aWriter);
		List_1_tD66F8EBB7E2F92261ACAA473BBD1879737E6783C* L_4 = __this->___m_List_6;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_6;
		L_6 = List_1_get_Item_m9E1232D0A0D221987BA1E611491D57A00AFC1721(L_4, L_5, List_1_get_Item_m9E1232D0A0D221987BA1E611491D57A00AFC1721_RuntimeMethod_var);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_7 = ___aWriter0;
		NullCheck(L_6);
		VirtualActionInvoker1< BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* >::Invoke(41 /* System.Void SimpleJSON.JSONNode::SerializeBinary(System.IO.BinaryWriter) */, L_6, L_7);
		// for (int i = 0; i < m_List.Count; i++)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0032:
	{
		// for (int i = 0; i < m_List.Count; i++)
		int32_t L_9 = V_0;
		List_1_tD66F8EBB7E2F92261ACAA473BBD1879737E6783C* L_10 = __this->___m_List_6;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_m6F782FA6EB1B2E2F1C3530246C446F4DEEA30190_inline(L_10, List_1_get_Count_m6F782FA6EB1B2E2F1C3530246C446F4DEEA30190_RuntimeMethod_var);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_001c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void SimpleJSON.JSONArray::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONArray__ctor_m92FFF2DC8E1425398814F50D4B253EB459B8477F (JSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m334012939E9E81EC23774AAEF7341D165260178E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD66F8EBB7E2F92261ACAA473BBD1879737E6783C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<JSONNode> m_List = new List<JSONNode>();
		List_1_tD66F8EBB7E2F92261ACAA473BBD1879737E6783C* L_0 = (List_1_tD66F8EBB7E2F92261ACAA473BBD1879737E6783C*)il2cpp_codegen_object_new(List_1_tD66F8EBB7E2F92261ACAA473BBD1879737E6783C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m334012939E9E81EC23774AAEF7341D165260178E(L_0, List_1__ctor_m334012939E9E81EC23774AAEF7341D165260178E_RuntimeMethod_var);
		__this->___m_List_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_List_6), (void*)L_0);
		JSONNode__ctor_mF8F2893483161D3B7B9877B63C69063D26A5C353(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SimpleJSON.JSONArray/<get_Children>d__22::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__22__ctor_m85868694A6F76D6658184E05C60FF81F01F77A15 (U3Cget_ChildrenU3Ed__22_t0BBD3CB230460AF1CA521BEBCBD1A39F74A02822* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_mEC09D20ED666BC3277AC9D16B68AA287E5AFE1B2(NULL);
		__this->___U3CU3El__initialThreadId_2 = L_1;
		return;
	}
}
// System.Void SimpleJSON.JSONArray/<get_Children>d__22::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__22_System_IDisposable_Dispose_m2F364B8DD4640833161EE743D458FAF77BCAED9F (U3Cget_ChildrenU3Ed__22_t0BBD3CB230460AF1CA521BEBCBD1A39F74A02822* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{// begin finally (depth: 1)
				U3Cget_ChildrenU3Ed__22_U3CU3Em__Finally1_mE8C769C27FDCFEA9BDE25D788AE87EC9565F4C5F(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_001a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean SimpleJSON.JSONArray/<get_Children>d__22::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Cget_ChildrenU3Ed__22_MoveNext_mD1A93CD03B10AD9224ACD34AA4478BA4EB448AE5 (U3Cget_ChildrenU3Ed__22_t0BBD3CB230460AF1CA521BEBCBD1A39F74A02822* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBA58967C724F00BFA740985C05C1A2B8E5FB583D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m77AFF0C2B6AD157424C10FFEB116D213835CF084_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7DDCF28102A20EEBF067D96F91DFE18F03A96C5B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	JSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2* V_2 = NULL;
	JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* V_3 = NULL;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_0084:
			{// begin fault (depth: 1)
				U3Cget_ChildrenU3Ed__22_System_IDisposable_Dispose_m2F364B8DD4640833161EE743D458FAF77BCAED9F(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				JSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2* L_1 = __this->___U3CU3E4__this_3;
				V_2 = L_1;
				int32_t L_2 = V_1;
				if (!L_2)
				{
					goto IL_0019_1;
				}
			}
			{
				int32_t L_3 = V_1;
				if ((((int32_t)L_3) == ((int32_t)1)))
				{
					goto IL_0059_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_008b;
			}

IL_0019_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// foreach (JSONNode N in m_List)
				JSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2* L_4 = V_2;
				NullCheck(L_4);
				List_1_tD66F8EBB7E2F92261ACAA473BBD1879737E6783C* L_5 = L_4->___m_List_6;
				NullCheck(L_5);
				Enumerator_tC64B3D14117706116B48376FC4C0B294E0FFD944 L_6;
				L_6 = List_1_GetEnumerator_m7DDCF28102A20EEBF067D96F91DFE18F03A96C5B(L_5, List_1_GetEnumerator_m7DDCF28102A20EEBF067D96F91DFE18F03A96C5B_RuntimeMethod_var);
				__this->___U3CU3E7__wrap1_4 = L_6;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E7__wrap1_4))->____list_0), (void*)NULL);
				#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E7__wrap1_4))->____current_3), (void*)NULL);
				#endif
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				goto IL_0061_1;
			}

IL_003b_1:
			{
				// foreach (JSONNode N in m_List)
				Enumerator_tC64B3D14117706116B48376FC4C0B294E0FFD944* L_7 = (&__this->___U3CU3E7__wrap1_4);
				JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_8;
				L_8 = Enumerator_get_Current_m77AFF0C2B6AD157424C10FFEB116D213835CF084_inline(L_7, Enumerator_get_Current_m77AFF0C2B6AD157424C10FFEB116D213835CF084_RuntimeMethod_var);
				V_3 = L_8;
				// yield return N;
				JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_9 = V_3;
				__this->___U3CU3E2__current_1 = L_9;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_9);
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_008b;
			}

IL_0059_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
			}

IL_0061_1:
			{
				// foreach (JSONNode N in m_List)
				Enumerator_tC64B3D14117706116B48376FC4C0B294E0FFD944* L_10 = (&__this->___U3CU3E7__wrap1_4);
				bool L_11;
				L_11 = Enumerator_MoveNext_mBA58967C724F00BFA740985C05C1A2B8E5FB583D(L_10, Enumerator_MoveNext_mBA58967C724F00BFA740985C05C1A2B8E5FB583D_RuntimeMethod_var);
				if (L_11)
				{
					goto IL_003b_1;
				}
			}
			{
				U3Cget_ChildrenU3Ed__22_U3CU3Em__Finally1_mE8C769C27FDCFEA9BDE25D788AE87EC9565F4C5F(__this, NULL);
				Enumerator_tC64B3D14117706116B48376FC4C0B294E0FFD944* L_12 = (&__this->___U3CU3E7__wrap1_4);
				il2cpp_codegen_initobj(L_12, sizeof(Enumerator_tC64B3D14117706116B48376FC4C0B294E0FFD944));
				// }
				V_0 = (bool)0;
				goto IL_008b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_008b:
	{
		bool L_13 = V_0;
		return L_13;
	}
}
// System.Void SimpleJSON.JSONArray/<get_Children>d__22::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__22_U3CU3Em__Finally1_mE8C769C27FDCFEA9BDE25D788AE87EC9565F4C5F (U3Cget_ChildrenU3Ed__22_t0BBD3CB230460AF1CA521BEBCBD1A39F74A02822* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m883E0A6A001B379F5451A9DC6C151D223F9BD448_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		Enumerator_tC64B3D14117706116B48376FC4C0B294E0FFD944* L_0 = (&__this->___U3CU3E7__wrap1_4);
		Enumerator_Dispose_m883E0A6A001B379F5451A9DC6C151D223F9BD448(L_0, Enumerator_Dispose_m883E0A6A001B379F5451A9DC6C151D223F9BD448_RuntimeMethod_var);
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONArray/<get_Children>d__22::System.Collections.Generic.IEnumerator<SimpleJSON.JSONNode>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* U3Cget_ChildrenU3Ed__22_System_Collections_Generic_IEnumeratorU3CSimpleJSON_JSONNodeU3E_get_Current_m9FB6C47800DA9AC5BD99118430A954370D30FA70 (U3Cget_ChildrenU3Ed__22_t0BBD3CB230460AF1CA521BEBCBD1A39F74A02822* __this, const RuntimeMethod* method) 
{
	{
		JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SimpleJSON.JSONArray/<get_Children>d__22::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__22_System_Collections_IEnumerator_Reset_m5FDF47F215C3ECA0B88DBDBA67D9E23939FB6E75 (U3Cget_ChildrenU3Ed__22_t0BBD3CB230460AF1CA521BEBCBD1A39F74A02822* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Cget_ChildrenU3Ed__22_System_Collections_IEnumerator_Reset_m5FDF47F215C3ECA0B88DBDBA67D9E23939FB6E75_RuntimeMethod_var)));
	}
}
// System.Object SimpleJSON.JSONArray/<get_Children>d__22::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildrenU3Ed__22_System_Collections_IEnumerator_get_Current_mB7369D4C4D04908F6F69E55E0FDF6835418E9671 (U3Cget_ChildrenU3Ed__22_t0BBD3CB230460AF1CA521BEBCBD1A39F74A02822* __this, const RuntimeMethod* method) 
{
	{
		JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode> SimpleJSON.JSONArray/<get_Children>d__22::System.Collections.Generic.IEnumerable<SimpleJSON.JSONNode>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildrenU3Ed__22_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_mE9E5D91FED8686D7D44613FE3F2E5A67765D924E (U3Cget_ChildrenU3Ed__22_t0BBD3CB230460AF1CA521BEBCBD1A39F74A02822* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Cget_ChildrenU3Ed__22_t0BBD3CB230460AF1CA521BEBCBD1A39F74A02822_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3Cget_ChildrenU3Ed__22_t0BBD3CB230460AF1CA521BEBCBD1A39F74A02822* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId_2;
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_mEC09D20ED666BC3277AC9D16B68AA287E5AFE1B2(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->___U3CU3E1__state_0 = 0;
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3Cget_ChildrenU3Ed__22_t0BBD3CB230460AF1CA521BEBCBD1A39F74A02822* L_3 = (U3Cget_ChildrenU3Ed__22_t0BBD3CB230460AF1CA521BEBCBD1A39F74A02822*)il2cpp_codegen_object_new(U3Cget_ChildrenU3Ed__22_t0BBD3CB230460AF1CA521BEBCBD1A39F74A02822_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		U3Cget_ChildrenU3Ed__22__ctor_m85868694A6F76D6658184E05C60FF81F01F77A15(L_3, 0, NULL);
		V_0 = L_3;
		U3Cget_ChildrenU3Ed__22_t0BBD3CB230460AF1CA521BEBCBD1A39F74A02822* L_4 = V_0;
		JSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2* L_5 = __this->___U3CU3E4__this_3;
		NullCheck(L_4);
		L_4->___U3CU3E4__this_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___U3CU3E4__this_3), (void*)L_5);
	}

IL_0035:
	{
		U3Cget_ChildrenU3Ed__22_t0BBD3CB230460AF1CA521BEBCBD1A39F74A02822* L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator SimpleJSON.JSONArray/<get_Children>d__22::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildrenU3Ed__22_System_Collections_IEnumerable_GetEnumerator_m64A7C394D254404FA1EE6C54C42CB33064B85573 (U3Cget_ChildrenU3Ed__22_t0BBD3CB230460AF1CA521BEBCBD1A39F74A02822* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3Cget_ChildrenU3Ed__22_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_mE9E5D91FED8686D7D44613FE3F2E5A67765D924E(__this, NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean SimpleJSON.JSONObject::get_Inline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_get_Inline_mCDF2154366BEFF9E547918F999E7F3C7C4865F84 (JSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118* __this, const RuntimeMethod* method) 
{
	{
		// get { return inline; }
		bool L_0 = __this->___inline_7;
		return L_0;
	}
}
// System.Void SimpleJSON.JSONObject::set_Inline(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_set_Inline_m7F048A7565E5A53FDB610D44B7CA75A314CB7A7A (JSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { inline = value; }
		bool L_0 = ___value0;
		__this->___inline_7 = L_0;
		// set { inline = value; }
		return;
	}
}
// SimpleJSON.JSONNodeType SimpleJSON.JSONObject::get_Tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONObject_get_Tag_mD57D6BCAD1C677B88693FD508129CFAD661F4FBD (JSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118* __this, const RuntimeMethod* method) 
{
	{
		// public override JSONNodeType Tag { get { return JSONNodeType.Object; } }
		return (int32_t)(2);
	}
}
// System.Boolean SimpleJSON.JSONObject::get_IsObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_get_IsObject_m9F72861BE5A0DB2888AA3CBEC82718E08DD71E93 (JSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118* __this, const RuntimeMethod* method) 
{
	{
		// public override bool IsObject { get { return true; } }
		return (bool)1;
	}
}
// SimpleJSON.JSONNode/Enumerator SimpleJSON.JSONObject::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4 JSONObject_GetEnumerator_m8912E3D1EA302655BB5701B53EB19437238BABDA (JSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m9ADA9DC934EF1A0048D21D89875DB863F5FF5908_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override Enumerator GetEnumerator() { return new Enumerator(m_Dict.GetEnumerator()); }
		Dictionary_2_t74542AFEF76A87F0A6EE38215ABCD050C900E0E2* L_0 = __this->___m_Dict_6;
		NullCheck(L_0);
		Enumerator_t0882EABB7914927B55F113EC1FC8D52BA871F911 L_1;
		L_1 = Dictionary_2_GetEnumerator_m9ADA9DC934EF1A0048D21D89875DB863F5FF5908(L_0, Dictionary_2_GetEnumerator_m9ADA9DC934EF1A0048D21D89875DB863F5FF5908_RuntimeMethod_var);
		Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Enumerator__ctor_mAC4ED0FA4B083E2652E865A41EA5C74A49478EFE((&L_2), L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONObject::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* JSONObject_get_Item_m219B9BA37D800A5DFEAA14E4EECA375B3565BF96 (JSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118* __this, String_t* ___aKey0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m772241BA9070E18A75464D09201A0C8F65E1F657_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mAD5BCB746F2E2424B09CA2BDD03E42770B068809_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Dict.ContainsKey(aKey))
		Dictionary_2_t74542AFEF76A87F0A6EE38215ABCD050C900E0E2* L_0 = __this->___m_Dict_6;
		String_t* L_1 = ___aKey0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m772241BA9070E18A75464D09201A0C8F65E1F657(L_0, L_1, Dictionary_2_ContainsKey_m772241BA9070E18A75464D09201A0C8F65E1F657_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// return m_Dict[aKey];
		Dictionary_2_t74542AFEF76A87F0A6EE38215ABCD050C900E0E2* L_3 = __this->___m_Dict_6;
		String_t* L_4 = ___aKey0;
		NullCheck(L_3);
		JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_5;
		L_5 = Dictionary_2_get_Item_mAD5BCB746F2E2424B09CA2BDD03E42770B068809(L_3, L_4, Dictionary_2_get_Item_mAD5BCB746F2E2424B09CA2BDD03E42770B068809_RuntimeMethod_var);
		return L_5;
	}

IL_001b:
	{
		// return new JSONLazyCreator(this, aKey);
		String_t* L_6 = ___aKey0;
		JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* L_7 = (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C*)il2cpp_codegen_object_new(JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		JSONLazyCreator__ctor_m02E2D630C60045F25A3AC001B7A17DF2D5D197B4(L_7, __this, L_6, NULL);
		return L_7;
	}
}
// System.Void SimpleJSON.JSONObject::set_Item(System.String,SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_set_Item_m1AC7334DBA67D0CB6C9549B83B3FFA75CF226AEF (JSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118* __this, String_t* ___aKey0, JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m0A53846E31C3AFF0D883504E62257998824A6650_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m772241BA9070E18A75464D09201A0C8F65E1F657_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m0CF9B92648E889A9619C7A89391273130D5A092B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value == null)
		JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_0 = ___value1;
		bool L_1;
		L_1 = JSONNode_op_Equality_m6961ED452D3A120FE9908FFB96260DF98A47A8B3(L_0, NULL, NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// value = JSONNull.CreateOrGet();
		il2cpp_codegen_runtime_class_init_inline(JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595_il2cpp_TypeInfo_var);
		JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595* L_2;
		L_2 = JSONNull_CreateOrGet_m68ED6000156701E566B1EA9DDC5284299B0C9105(NULL);
		___value1 = L_2;
	}

IL_0010:
	{
		// if (m_Dict.ContainsKey(aKey))
		Dictionary_2_t74542AFEF76A87F0A6EE38215ABCD050C900E0E2* L_3 = __this->___m_Dict_6;
		String_t* L_4 = ___aKey0;
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_ContainsKey_m772241BA9070E18A75464D09201A0C8F65E1F657(L_3, L_4, Dictionary_2_ContainsKey_m772241BA9070E18A75464D09201A0C8F65E1F657_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		// m_Dict[aKey] = value;
		Dictionary_2_t74542AFEF76A87F0A6EE38215ABCD050C900E0E2* L_6 = __this->___m_Dict_6;
		String_t* L_7 = ___aKey0;
		JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_8 = ___value1;
		NullCheck(L_6);
		Dictionary_2_set_Item_m0CF9B92648E889A9619C7A89391273130D5A092B(L_6, L_7, L_8, Dictionary_2_set_Item_m0CF9B92648E889A9619C7A89391273130D5A092B_RuntimeMethod_var);
		return;
	}

IL_002c:
	{
		// m_Dict.Add(aKey, value);
		Dictionary_2_t74542AFEF76A87F0A6EE38215ABCD050C900E0E2* L_9 = __this->___m_Dict_6;
		String_t* L_10 = ___aKey0;
		JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_11 = ___value1;
		NullCheck(L_9);
		Dictionary_2_Add_m0A53846E31C3AFF0D883504E62257998824A6650(L_9, L_10, L_11, Dictionary_2_Add_m0A53846E31C3AFF0D883504E62257998824A6650_RuntimeMethod_var);
		// }
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONObject::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* JSONObject_get_Item_m5C2EDBE7B154A3FC1CC43616C4C40255B4D95652 (JSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118* __this, int32_t ___aIndex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m3CF989BD764D8F7838E6D8E449D354B1CF7BB385_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ElementAt_TisKeyValuePair_2_tC25A1CF74139C27B48AA7E7BA0EAE31F240EA3EF_m5904D22F70F1DB45D3856B3B2ABF559CC44CCE5C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mE11898FE6C7E851793D8B6E7B740E9828BA6EF94_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_tC25A1CF74139C27B48AA7E7BA0EAE31F240EA3EF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (aIndex < 0 || aIndex >= m_Dict.Count)
		int32_t L_0 = ___aIndex0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = ___aIndex0;
		Dictionary_2_t74542AFEF76A87F0A6EE38215ABCD050C900E0E2* L_2 = __this->___m_Dict_6;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Dictionary_2_get_Count_m3CF989BD764D8F7838E6D8E449D354B1CF7BB385(L_2, Dictionary_2_get_Count_m3CF989BD764D8F7838E6D8E449D354B1CF7BB385_RuntimeMethod_var);
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0014;
		}
	}

IL_0012:
	{
		// return null;
		return (JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653*)NULL;
	}

IL_0014:
	{
		// return m_Dict.ElementAt(aIndex).Value;
		Dictionary_2_t74542AFEF76A87F0A6EE38215ABCD050C900E0E2* L_4 = __this->___m_Dict_6;
		int32_t L_5 = ___aIndex0;
		KeyValuePair_2_tC25A1CF74139C27B48AA7E7BA0EAE31F240EA3EF L_6;
		L_6 = Enumerable_ElementAt_TisKeyValuePair_2_tC25A1CF74139C27B48AA7E7BA0EAE31F240EA3EF_m5904D22F70F1DB45D3856B3B2ABF559CC44CCE5C(L_4, L_5, Enumerable_ElementAt_TisKeyValuePair_2_tC25A1CF74139C27B48AA7E7BA0EAE31F240EA3EF_m5904D22F70F1DB45D3856B3B2ABF559CC44CCE5C_RuntimeMethod_var);
		V_0 = L_6;
		JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_7;
		L_7 = KeyValuePair_2_get_Value_mE11898FE6C7E851793D8B6E7B740E9828BA6EF94_inline((&V_0), KeyValuePair_2_get_Value_mE11898FE6C7E851793D8B6E7B740E9828BA6EF94_RuntimeMethod_var);
		return L_7;
	}
}
// System.Void SimpleJSON.JSONObject::set_Item(System.Int32,SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_set_Item_mFB6E61E3FA394B7D2CA01CC957A6A253642D109B (JSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118* __this, int32_t ___aIndex0, JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m3CF989BD764D8F7838E6D8E449D354B1CF7BB385_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m0CF9B92648E889A9619C7A89391273130D5A092B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ElementAt_TisKeyValuePair_2_tC25A1CF74139C27B48AA7E7BA0EAE31F240EA3EF_m5904D22F70F1DB45D3856B3B2ABF559CC44CCE5C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m207EFB432FBB579ECA85B5399A1E266D0D8E3641_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	KeyValuePair_2_tC25A1CF74139C27B48AA7E7BA0EAE31F240EA3EF V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (value == null)
		JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_0 = ___value1;
		bool L_1;
		L_1 = JSONNode_op_Equality_m6961ED452D3A120FE9908FFB96260DF98A47A8B3(L_0, NULL, NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// value = JSONNull.CreateOrGet();
		il2cpp_codegen_runtime_class_init_inline(JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595_il2cpp_TypeInfo_var);
		JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595* L_2;
		L_2 = JSONNull_CreateOrGet_m68ED6000156701E566B1EA9DDC5284299B0C9105(NULL);
		___value1 = L_2;
	}

IL_0010:
	{
		// if (aIndex < 0 || aIndex >= m_Dict.Count)
		int32_t L_3 = ___aIndex0;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_4 = ___aIndex0;
		Dictionary_2_t74542AFEF76A87F0A6EE38215ABCD050C900E0E2* L_5 = __this->___m_Dict_6;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Dictionary_2_get_Count_m3CF989BD764D8F7838E6D8E449D354B1CF7BB385(L_5, Dictionary_2_get_Count_m3CF989BD764D8F7838E6D8E449D354B1CF7BB385_RuntimeMethod_var);
		if ((((int32_t)L_4) < ((int32_t)L_6)))
		{
			goto IL_0023;
		}
	}

IL_0022:
	{
		// return;
		return;
	}

IL_0023:
	{
		// string key = m_Dict.ElementAt(aIndex).Key;
		Dictionary_2_t74542AFEF76A87F0A6EE38215ABCD050C900E0E2* L_7 = __this->___m_Dict_6;
		int32_t L_8 = ___aIndex0;
		KeyValuePair_2_tC25A1CF74139C27B48AA7E7BA0EAE31F240EA3EF L_9;
		L_9 = Enumerable_ElementAt_TisKeyValuePair_2_tC25A1CF74139C27B48AA7E7BA0EAE31F240EA3EF_m5904D22F70F1DB45D3856B3B2ABF559CC44CCE5C(L_7, L_8, Enumerable_ElementAt_TisKeyValuePair_2_tC25A1CF74139C27B48AA7E7BA0EAE31F240EA3EF_m5904D22F70F1DB45D3856B3B2ABF559CC44CCE5C_RuntimeMethod_var);
		V_1 = L_9;
		String_t* L_10;
		L_10 = KeyValuePair_2_get_Key_m207EFB432FBB579ECA85B5399A1E266D0D8E3641_inline((&V_1), KeyValuePair_2_get_Key_m207EFB432FBB579ECA85B5399A1E266D0D8E3641_RuntimeMethod_var);
		V_0 = L_10;
		// m_Dict[key] = value;
		Dictionary_2_t74542AFEF76A87F0A6EE38215ABCD050C900E0E2* L_11 = __this->___m_Dict_6;
		String_t* L_12 = V_0;
		JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_13 = ___value1;
		NullCheck(L_11);
		Dictionary_2_set_Item_m0CF9B92648E889A9619C7A89391273130D5A092B(L_11, L_12, L_13, Dictionary_2_set_Item_m0CF9B92648E889A9619C7A89391273130D5A092B_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Int32 SimpleJSON.JSONObject::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONObject_get_Count_m9109E9A81559A9006EE160CA6A0F3291C71F2D08 (JSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m3CF989BD764D8F7838E6D8E449D354B1CF7BB385_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return m_Dict.Count; }
		Dictionary_2_t74542AFEF76A87F0A6EE38215ABCD050C900E0E2* L_0 = __this->___m_Dict_6;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Dictionary_2_get_Count_m3CF989BD764D8F7838E6D8E449D354B1CF7BB385(L_0, Dictionary_2_get_Count_m3CF989BD764D8F7838E6D8E449D354B1CF7BB385_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void SimpleJSON.JSONObject::Add(System.String,SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_Add_m25BD208A0AC0F0223FD93FBCB42785B12A6E1A18 (JSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118* __this, String_t* ___aKey0, JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* ___aItem1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m0A53846E31C3AFF0D883504E62257998824A6650_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m772241BA9070E18A75464D09201A0C8F65E1F657_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m0CF9B92648E889A9619C7A89391273130D5A092B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (aItem == null)
		JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_0 = ___aItem1;
		bool L_1;
		L_1 = JSONNode_op_Equality_m6961ED452D3A120FE9908FFB96260DF98A47A8B3(L_0, NULL, NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// aItem = JSONNull.CreateOrGet();
		il2cpp_codegen_runtime_class_init_inline(JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595_il2cpp_TypeInfo_var);
		JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595* L_2;
		L_2 = JSONNull_CreateOrGet_m68ED6000156701E566B1EA9DDC5284299B0C9105(NULL);
		___aItem1 = L_2;
	}

IL_0010:
	{
		// if (!string.IsNullOrEmpty(aKey))
		String_t* L_3 = ___aKey0;
		bool L_4;
		L_4 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_3, NULL);
		if (L_4)
		{
			goto IL_0042;
		}
	}
	{
		// if (m_Dict.ContainsKey(aKey))
		Dictionary_2_t74542AFEF76A87F0A6EE38215ABCD050C900E0E2* L_5 = __this->___m_Dict_6;
		String_t* L_6 = ___aKey0;
		NullCheck(L_5);
		bool L_7;
		L_7 = Dictionary_2_ContainsKey_m772241BA9070E18A75464D09201A0C8F65E1F657(L_5, L_6, Dictionary_2_ContainsKey_m772241BA9070E18A75464D09201A0C8F65E1F657_RuntimeMethod_var);
		if (!L_7)
		{
			goto IL_0034;
		}
	}
	{
		// m_Dict[aKey] = aItem;
		Dictionary_2_t74542AFEF76A87F0A6EE38215ABCD050C900E0E2* L_8 = __this->___m_Dict_6;
		String_t* L_9 = ___aKey0;
		JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_10 = ___aItem1;
		NullCheck(L_8);
		Dictionary_2_set_Item_m0CF9B92648E889A9619C7A89391273130D5A092B(L_8, L_9, L_10, Dictionary_2_set_Item_m0CF9B92648E889A9619C7A89391273130D5A092B_RuntimeMethod_var);
		return;
	}

IL_0034:
	{
		// m_Dict.Add(aKey, aItem);
		Dictionary_2_t74542AFEF76A87F0A6EE38215ABCD050C900E0E2* L_11 = __this->___m_Dict_6;
		String_t* L_12 = ___aKey0;
		JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_13 = ___aItem1;
		NullCheck(L_11);
		Dictionary_2_Add_m0A53846E31C3AFF0D883504E62257998824A6650(L_11, L_12, L_13, Dictionary_2_Add_m0A53846E31C3AFF0D883504E62257998824A6650_RuntimeMethod_var);
		return;
	}

IL_0042:
	{
		// m_Dict.Add(Guid.NewGuid().ToString(), aItem);
		Dictionary_2_t74542AFEF76A87F0A6EE38215ABCD050C900E0E2* L_14 = __this->___m_Dict_6;
		Guid_t L_15;
		L_15 = Guid_NewGuid_m1827D92D71326C3F3C263F057F6E90F907617903(NULL);
		V_0 = L_15;
		String_t* L_16;
		L_16 = Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C((&V_0), NULL);
		JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_17 = ___aItem1;
		NullCheck(L_14);
		Dictionary_2_Add_m0A53846E31C3AFF0D883504E62257998824A6650(L_14, L_16, L_17, Dictionary_2_Add_m0A53846E31C3AFF0D883504E62257998824A6650_RuntimeMethod_var);
		// }
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONObject::Remove(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* JSONObject_Remove_m34280FDB4512E61F42781475E492BE98514830C9 (JSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118* __this, String_t* ___aKey0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m772241BA9070E18A75464D09201A0C8F65E1F657_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m72C4C408622F37344F5BB59F0E0A6C32C34DD444_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mAD5BCB746F2E2424B09CA2BDD03E42770B068809_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_Dict.ContainsKey(aKey))
		Dictionary_2_t74542AFEF76A87F0A6EE38215ABCD050C900E0E2* L_0 = __this->___m_Dict_6;
		String_t* L_1 = ___aKey0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m772241BA9070E18A75464D09201A0C8F65E1F657(L_0, L_1, Dictionary_2_ContainsKey_m772241BA9070E18A75464D09201A0C8F65E1F657_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0010;
		}
	}
	{
		// return null;
		return (JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653*)NULL;
	}

IL_0010:
	{
		// JSONNode tmp = m_Dict[aKey];
		Dictionary_2_t74542AFEF76A87F0A6EE38215ABCD050C900E0E2* L_3 = __this->___m_Dict_6;
		String_t* L_4 = ___aKey0;
		NullCheck(L_3);
		JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_5;
		L_5 = Dictionary_2_get_Item_mAD5BCB746F2E2424B09CA2BDD03E42770B068809(L_3, L_4, Dictionary_2_get_Item_mAD5BCB746F2E2424B09CA2BDD03E42770B068809_RuntimeMethod_var);
		// m_Dict.Remove(aKey);
		Dictionary_2_t74542AFEF76A87F0A6EE38215ABCD050C900E0E2* L_6 = __this->___m_Dict_6;
		String_t* L_7 = ___aKey0;
		NullCheck(L_6);
		bool L_8;
		L_8 = Dictionary_2_Remove_m72C4C408622F37344F5BB59F0E0A6C32C34DD444(L_6, L_7, Dictionary_2_Remove_m72C4C408622F37344F5BB59F0E0A6C32C34DD444_RuntimeMethod_var);
		// return tmp;
		return L_5;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONObject::Remove(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* JSONObject_Remove_mD1B01E22A9C1FEE83A00ECDFD8E0D8A422F8E4C2 (JSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118* __this, int32_t ___aIndex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m72C4C408622F37344F5BB59F0E0A6C32C34DD444_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m3CF989BD764D8F7838E6D8E449D354B1CF7BB385_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ElementAt_TisKeyValuePair_2_tC25A1CF74139C27B48AA7E7BA0EAE31F240EA3EF_m5904D22F70F1DB45D3856B3B2ABF559CC44CCE5C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m207EFB432FBB579ECA85B5399A1E266D0D8E3641_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mE11898FE6C7E851793D8B6E7B740E9828BA6EF94_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_tC25A1CF74139C27B48AA7E7BA0EAE31F240EA3EF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (aIndex < 0 || aIndex >= m_Dict.Count)
		int32_t L_0 = ___aIndex0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = ___aIndex0;
		Dictionary_2_t74542AFEF76A87F0A6EE38215ABCD050C900E0E2* L_2 = __this->___m_Dict_6;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Dictionary_2_get_Count_m3CF989BD764D8F7838E6D8E449D354B1CF7BB385(L_2, Dictionary_2_get_Count_m3CF989BD764D8F7838E6D8E449D354B1CF7BB385_RuntimeMethod_var);
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0014;
		}
	}

IL_0012:
	{
		// return null;
		return (JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653*)NULL;
	}

IL_0014:
	{
		// var item = m_Dict.ElementAt(aIndex);
		Dictionary_2_t74542AFEF76A87F0A6EE38215ABCD050C900E0E2* L_4 = __this->___m_Dict_6;
		int32_t L_5 = ___aIndex0;
		KeyValuePair_2_tC25A1CF74139C27B48AA7E7BA0EAE31F240EA3EF L_6;
		L_6 = Enumerable_ElementAt_TisKeyValuePair_2_tC25A1CF74139C27B48AA7E7BA0EAE31F240EA3EF_m5904D22F70F1DB45D3856B3B2ABF559CC44CCE5C(L_4, L_5, Enumerable_ElementAt_TisKeyValuePair_2_tC25A1CF74139C27B48AA7E7BA0EAE31F240EA3EF_m5904D22F70F1DB45D3856B3B2ABF559CC44CCE5C_RuntimeMethod_var);
		V_0 = L_6;
		// m_Dict.Remove(item.Key);
		Dictionary_2_t74542AFEF76A87F0A6EE38215ABCD050C900E0E2* L_7 = __this->___m_Dict_6;
		String_t* L_8;
		L_8 = KeyValuePair_2_get_Key_m207EFB432FBB579ECA85B5399A1E266D0D8E3641_inline((&V_0), KeyValuePair_2_get_Key_m207EFB432FBB579ECA85B5399A1E266D0D8E3641_RuntimeMethod_var);
		NullCheck(L_7);
		bool L_9;
		L_9 = Dictionary_2_Remove_m72C4C408622F37344F5BB59F0E0A6C32C34DD444(L_7, L_8, Dictionary_2_Remove_m72C4C408622F37344F5BB59F0E0A6C32C34DD444_RuntimeMethod_var);
		// return item.Value;
		JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_10;
		L_10 = KeyValuePair_2_get_Value_mE11898FE6C7E851793D8B6E7B740E9828BA6EF94_inline((&V_0), KeyValuePair_2_get_Value_mE11898FE6C7E851793D8B6E7B740E9828BA6EF94_RuntimeMethod_var);
		return L_10;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONObject::Remove(SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* JSONObject_Remove_m51B998A7997D184A1A20359D512C6B5A1B825404 (JSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118* __this, JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* ___aNode0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m72C4C408622F37344F5BB59F0E0A6C32C34DD444_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_First_TisKeyValuePair_2_tC25A1CF74139C27B48AA7E7BA0EAE31F240EA3EF_m5DFB7AB1A627ED5971C67D34212F3CEEFE6B0B73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisKeyValuePair_2_tC25A1CF74139C27B48AA7E7BA0EAE31F240EA3EF_m9C8FA5E47A24524DE3A4F1F6E26E21615BF8477D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t4674CE269C901F4BD6F1A0EE18182B888C45DBB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m207EFB432FBB579ECA85B5399A1E266D0D8E3641_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass21_0_U3CRemoveU3Eb__0_m8B35D441B276B749481FF797FC51A256A7A56105_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass21_0_t651DB8FCB045D590FF5910F1E9917C209DC429BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass21_0_t651DB8FCB045D590FF5910F1E9917C209DC429BA* V_0 = NULL;
	KeyValuePair_2_tC25A1CF74139C27B48AA7E7BA0EAE31F240EA3EF V_1;
	memset((&V_1), 0, sizeof(V_1));
	JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		U3CU3Ec__DisplayClass21_0_t651DB8FCB045D590FF5910F1E9917C209DC429BA* L_0 = (U3CU3Ec__DisplayClass21_0_t651DB8FCB045D590FF5910F1E9917C209DC429BA*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass21_0_t651DB8FCB045D590FF5910F1E9917C209DC429BA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass21_0__ctor_m6976B4CF7F93E28364B390F81E55DAD60BB141C1(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass21_0_t651DB8FCB045D590FF5910F1E9917C209DC429BA* L_1 = V_0;
		JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_2 = ___aNode0;
		NullCheck(L_1);
		L_1->___aNode_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___aNode_0), (void*)L_2);
	}
	try
	{// begin try (depth: 1)
		// var item = m_Dict.Where(k => k.Value == aNode).First();
		Dictionary_2_t74542AFEF76A87F0A6EE38215ABCD050C900E0E2* L_3 = __this->___m_Dict_6;
		U3CU3Ec__DisplayClass21_0_t651DB8FCB045D590FF5910F1E9917C209DC429BA* L_4 = V_0;
		Func_2_t4674CE269C901F4BD6F1A0EE18182B888C45DBB5* L_5 = (Func_2_t4674CE269C901F4BD6F1A0EE18182B888C45DBB5*)il2cpp_codegen_object_new(Func_2_t4674CE269C901F4BD6F1A0EE18182B888C45DBB5_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Func_2__ctor_mC1D875BE4AE5DDA483B819A1193FBD916C8C544C(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass21_0_U3CRemoveU3Eb__0_m8B35D441B276B749481FF797FC51A256A7A56105_RuntimeMethod_var), NULL);
		RuntimeObject* L_6;
		L_6 = Enumerable_Where_TisKeyValuePair_2_tC25A1CF74139C27B48AA7E7BA0EAE31F240EA3EF_m9C8FA5E47A24524DE3A4F1F6E26E21615BF8477D(L_3, L_5, Enumerable_Where_TisKeyValuePair_2_tC25A1CF74139C27B48AA7E7BA0EAE31F240EA3EF_m9C8FA5E47A24524DE3A4F1F6E26E21615BF8477D_RuntimeMethod_var);
		KeyValuePair_2_tC25A1CF74139C27B48AA7E7BA0EAE31F240EA3EF L_7;
		L_7 = Enumerable_First_TisKeyValuePair_2_tC25A1CF74139C27B48AA7E7BA0EAE31F240EA3EF_m5DFB7AB1A627ED5971C67D34212F3CEEFE6B0B73(L_6, Enumerable_First_TisKeyValuePair_2_tC25A1CF74139C27B48AA7E7BA0EAE31F240EA3EF_m5DFB7AB1A627ED5971C67D34212F3CEEFE6B0B73_RuntimeMethod_var);
		V_1 = L_7;
		// m_Dict.Remove(item.Key);
		Dictionary_2_t74542AFEF76A87F0A6EE38215ABCD050C900E0E2* L_8 = __this->___m_Dict_6;
		String_t* L_9;
		L_9 = KeyValuePair_2_get_Key_m207EFB432FBB579ECA85B5399A1E266D0D8E3641_inline((&V_1), KeyValuePair_2_get_Key_m207EFB432FBB579ECA85B5399A1E266D0D8E3641_RuntimeMethod_var);
		NullCheck(L_8);
		bool L_10;
		L_10 = Dictionary_2_Remove_m72C4C408622F37344F5BB59F0E0A6C32C34DD444(L_8, L_9, Dictionary_2_Remove_m72C4C408622F37344F5BB59F0E0A6C32C34DD444_RuntimeMethod_var);
		// return aNode;
		U3CU3Ec__DisplayClass21_0_t651DB8FCB045D590FF5910F1E9917C209DC429BA* L_11 = V_0;
		NullCheck(L_11);
		JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_12 = L_11->___aNode_0;
		V_2 = L_12;
		goto IL_004b;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0046;
		}
		throw e;
	}

CATCH_0046:
	{// begin catch(System.Object)
		// catch
		// return null;
		V_2 = (JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653*)NULL;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004b;
	}// end catch (depth: 1)

IL_004b:
	{
		// }
		JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_13 = V_2;
		return L_13;
	}
}
// System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode> SimpleJSON.JSONObject::get_Children()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JSONObject_get_Children_m03D7227DE57F0BE2977FC0436C0DE48858650B7C (JSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Cget_ChildrenU3Ed__23_tD9157FC1CC7E1337F0FA7AF88F80A749399578AC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3Cget_ChildrenU3Ed__23_tD9157FC1CC7E1337F0FA7AF88F80A749399578AC* L_0 = (U3Cget_ChildrenU3Ed__23_tD9157FC1CC7E1337F0FA7AF88F80A749399578AC*)il2cpp_codegen_object_new(U3Cget_ChildrenU3Ed__23_tD9157FC1CC7E1337F0FA7AF88F80A749399578AC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3Cget_ChildrenU3Ed__23__ctor_mD7DD2FB8F14148B45EC4AC3A595DC1AFE369FC99(L_0, ((int32_t)-2), NULL);
		U3Cget_ChildrenU3Ed__23_tD9157FC1CC7E1337F0FA7AF88F80A749399578AC* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		return L_1;
	}
}
// System.Void SimpleJSON.JSONObject::WriteToStringBuilder(System.Text.StringBuilder,System.Int32,System.Int32,SimpleJSON.JSONTextMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_WriteToStringBuilder_m931DC8805C6B8F09617958EFDAEA957751EB2EAE (JSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118* __this, StringBuilder_t* ___aSB0, int32_t ___aIndent1, int32_t ___aIndentInc2, int32_t ___aMode3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m9ADA9DC934EF1A0048D21D89875DB863F5FF5908_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m95D8AAFAF60B6E536EA7429F49C5FD5AC7A242BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m00944D3982456679FF855520913693EB62A293C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mF70405758E51B64B1E5E4FA7764450689DA30832_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m207EFB432FBB579ECA85B5399A1E266D0D8E3641_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mE11898FE6C7E851793D8B6E7B740E9828BA6EF94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0767326DBE1DD31063256737FD019DC6682353E2);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Enumerator_t0882EABB7914927B55F113EC1FC8D52BA871F911 V_1;
	memset((&V_1), 0, sizeof(V_1));
	KeyValuePair_2_tC25A1CF74139C27B48AA7E7BA0EAE31F240EA3EF V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// aSB.Append('{');
		StringBuilder_t* L_0 = ___aSB0;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_0, ((int32_t)123), NULL);
		// bool first = true;
		V_0 = (bool)1;
		// if (inline)
		bool L_2 = __this->___inline_7;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		// aMode = JSONTextMode.Compact;
		___aMode3 = 0;
	}

IL_0016:
	{
		// foreach (var k in m_Dict)
		Dictionary_2_t74542AFEF76A87F0A6EE38215ABCD050C900E0E2* L_3 = __this->___m_Dict_6;
		NullCheck(L_3);
		Enumerator_t0882EABB7914927B55F113EC1FC8D52BA871F911 L_4;
		L_4 = Dictionary_2_GetEnumerator_m9ADA9DC934EF1A0048D21D89875DB863F5FF5908(L_3, Dictionary_2_GetEnumerator_m9ADA9DC934EF1A0048D21D89875DB863F5FF5908_RuntimeMethod_var);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b7:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m95D8AAFAF60B6E536EA7429F49C5FD5AC7A242BB((&V_1), Enumerator_Dispose_m95D8AAFAF60B6E536EA7429F49C5FD5AC7A242BB_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00a9_1;
			}

IL_0027_1:
			{
				// foreach (var k in m_Dict)
				KeyValuePair_2_tC25A1CF74139C27B48AA7E7BA0EAE31F240EA3EF L_5;
				L_5 = Enumerator_get_Current_mF70405758E51B64B1E5E4FA7764450689DA30832_inline((&V_1), Enumerator_get_Current_mF70405758E51B64B1E5E4FA7764450689DA30832_RuntimeMethod_var);
				V_2 = L_5;
				// if (!first)
				bool L_6 = V_0;
				if (L_6)
				{
					goto IL_003b_1;
				}
			}
			{
				// aSB.Append(',');
				StringBuilder_t* L_7 = ___aSB0;
				NullCheck(L_7);
				StringBuilder_t* L_8;
				L_8 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_7, ((int32_t)44), NULL);
			}

IL_003b_1:
			{
				// first = false;
				V_0 = (bool)0;
				// if (aMode == JSONTextMode.Indent)
				int32_t L_9 = ___aMode3;
				if ((!(((uint32_t)L_9) == ((uint32_t)1))))
				{
					goto IL_0049_1;
				}
			}
			{
				// aSB.AppendLine();
				StringBuilder_t* L_10 = ___aSB0;
				NullCheck(L_10);
				StringBuilder_t* L_11;
				L_11 = StringBuilder_AppendLine_m3BC704C4E6A8531027D8C9287D0AB2AA0188AC4E(L_10, NULL);
			}

IL_0049_1:
			{
				// if (aMode == JSONTextMode.Indent)
				int32_t L_12 = ___aMode3;
				if ((!(((uint32_t)L_12) == ((uint32_t)1))))
				{
					goto IL_005a_1;
				}
			}
			{
				// aSB.Append(' ', aIndent + aIndentInc);
				StringBuilder_t* L_13 = ___aSB0;
				int32_t L_14 = ___aIndent1;
				int32_t L_15 = ___aIndentInc2;
				NullCheck(L_13);
				StringBuilder_t* L_16;
				L_16 = StringBuilder_Append_mE20F6CD28FC8E8C9FD65987DBD32E6087CCE1CF3(L_13, ((int32_t)32), ((int32_t)il2cpp_codegen_add(L_14, L_15)), NULL);
			}

IL_005a_1:
			{
				// aSB.Append('\"').Append(Escape(k.Key)).Append('\"');
				StringBuilder_t* L_17 = ___aSB0;
				NullCheck(L_17);
				StringBuilder_t* L_18;
				L_18 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_17, ((int32_t)34), NULL);
				String_t* L_19;
				L_19 = KeyValuePair_2_get_Key_m207EFB432FBB579ECA85B5399A1E266D0D8E3641_inline((&V_2), KeyValuePair_2_get_Key_m207EFB432FBB579ECA85B5399A1E266D0D8E3641_RuntimeMethod_var);
				String_t* L_20;
				L_20 = JSONNode_Escape_mC20A370D25C7B269E4707FF5CEC7062C470C416A(L_19, NULL);
				NullCheck(L_18);
				StringBuilder_t* L_21;
				L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_18, L_20, NULL);
				NullCheck(L_21);
				StringBuilder_t* L_22;
				L_22 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_21, ((int32_t)34), NULL);
				// if (aMode == JSONTextMode.Compact)
				int32_t L_23 = ___aMode3;
				if (L_23)
				{
					goto IL_008a_1;
				}
			}
			{
				// aSB.Append(':');
				StringBuilder_t* L_24 = ___aSB0;
				NullCheck(L_24);
				StringBuilder_t* L_25;
				L_25 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_24, ((int32_t)58), NULL);
				goto IL_0096_1;
			}

IL_008a_1:
			{
				// aSB.Append(" : ");
				StringBuilder_t* L_26 = ___aSB0;
				NullCheck(L_26);
				StringBuilder_t* L_27;
				L_27 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_26, _stringLiteral0767326DBE1DD31063256737FD019DC6682353E2, NULL);
			}

IL_0096_1:
			{
				// k.Value.WriteToStringBuilder(aSB, aIndent + aIndentInc, aIndentInc, aMode);
				JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_28;
				L_28 = KeyValuePair_2_get_Value_mE11898FE6C7E851793D8B6E7B740E9828BA6EF94_inline((&V_2), KeyValuePair_2_get_Value_mE11898FE6C7E851793D8B6E7B740E9828BA6EF94_RuntimeMethod_var);
				StringBuilder_t* L_29 = ___aSB0;
				int32_t L_30 = ___aIndent1;
				int32_t L_31 = ___aIndentInc2;
				int32_t L_32 = ___aIndentInc2;
				int32_t L_33 = ___aMode3;
				NullCheck(L_28);
				VirtualActionInvoker4< StringBuilder_t*, int32_t, int32_t, int32_t >::Invoke(27 /* System.Void SimpleJSON.JSONNode::WriteToStringBuilder(System.Text.StringBuilder,System.Int32,System.Int32,SimpleJSON.JSONTextMode) */, L_28, L_29, ((int32_t)il2cpp_codegen_add(L_30, L_31)), L_32, L_33);
			}

IL_00a9_1:
			{
				// foreach (var k in m_Dict)
				bool L_34;
				L_34 = Enumerator_MoveNext_m00944D3982456679FF855520913693EB62A293C1((&V_1), Enumerator_MoveNext_m00944D3982456679FF855520913693EB62A293C1_RuntimeMethod_var);
				if (L_34)
				{
					goto IL_0027_1;
				}
			}
			{
				goto IL_00c5;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00c5:
	{
		// if (aMode == JSONTextMode.Indent)
		int32_t L_35 = ___aMode3;
		if ((!(((uint32_t)L_35) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		// aSB.AppendLine().Append(' ', aIndent);
		StringBuilder_t* L_36 = ___aSB0;
		NullCheck(L_36);
		StringBuilder_t* L_37;
		L_37 = StringBuilder_AppendLine_m3BC704C4E6A8531027D8C9287D0AB2AA0188AC4E(L_36, NULL);
		int32_t L_38 = ___aIndent1;
		NullCheck(L_37);
		StringBuilder_t* L_39;
		L_39 = StringBuilder_Append_mE20F6CD28FC8E8C9FD65987DBD32E6087CCE1CF3(L_37, ((int32_t)32), L_38, NULL);
	}

IL_00d9:
	{
		// aSB.Append('}');
		StringBuilder_t* L_40 = ___aSB0;
		NullCheck(L_40);
		StringBuilder_t* L_41;
		L_41 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_40, ((int32_t)125), NULL);
		// }
		return;
	}
}
// System.Void SimpleJSON.JSONObject::SerializeBinary(System.IO.BinaryWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_SerializeBinary_m7E62AE42E3118B0BF5372941809943838E45B01A (JSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118* __this, BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___aWriter0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m3CF989BD764D8F7838E6D8E449D354B1CF7BB385_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mAD5BCB746F2E2424B09CA2BDD03E42770B068809_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_mB48527A5126C9884983E7BDF7C198EB79F418816_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m756221DECDDF7233667BACEB87D32CDCC5EC56AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mF65727235CD00D1C771CF27D5F360ED62E1EFDF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m8F2C97D8503D752215E004A880195B64917CEE95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCollection_GetEnumerator_m89A6615E37C327BA711371335F347D86406D4E22_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tB4BE7AC63B98A2FCDE82B99DC9943B069ECCF23C V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// aWriter.Write((byte)JSONNodeType.Object);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_0 = ___aWriter0;
		NullCheck(L_0);
		VirtualActionInvoker1< uint8_t >::Invoke(8 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_0, (uint8_t)2);
		// aWriter.Write(m_Dict.Count);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_1 = ___aWriter0;
		Dictionary_2_t74542AFEF76A87F0A6EE38215ABCD050C900E0E2* L_2 = __this->___m_Dict_6;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Dictionary_2_get_Count_m3CF989BD764D8F7838E6D8E449D354B1CF7BB385(L_2, Dictionary_2_get_Count_m3CF989BD764D8F7838E6D8E449D354B1CF7BB385_RuntimeMethod_var);
		NullCheck(L_1);
		VirtualActionInvoker1< int32_t >::Invoke(16 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_1, L_3);
		// foreach (string K in m_Dict.Keys)
		Dictionary_2_t74542AFEF76A87F0A6EE38215ABCD050C900E0E2* L_4 = __this->___m_Dict_6;
		NullCheck(L_4);
		KeyCollection_tB5791F6D12B5D2344D02EC386DBEE217775A02B9* L_5;
		L_5 = Dictionary_2_get_Keys_mB48527A5126C9884983E7BDF7C198EB79F418816(L_4, Dictionary_2_get_Keys_mB48527A5126C9884983E7BDF7C198EB79F418816_RuntimeMethod_var);
		NullCheck(L_5);
		Enumerator_tB4BE7AC63B98A2FCDE82B99DC9943B069ECCF23C L_6;
		L_6 = KeyCollection_GetEnumerator_m89A6615E37C327BA711371335F347D86406D4E22(L_5, KeyCollection_GetEnumerator_m89A6615E37C327BA711371335F347D86406D4E22_RuntimeMethod_var);
		V_0 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0057:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m756221DECDDF7233667BACEB87D32CDCC5EC56AB((&V_0), Enumerator_Dispose_m756221DECDDF7233667BACEB87D32CDCC5EC56AB_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_004c_1;
			}

IL_002b_1:
			{
				// foreach (string K in m_Dict.Keys)
				String_t* L_7;
				L_7 = Enumerator_get_Current_m8F2C97D8503D752215E004A880195B64917CEE95_inline((&V_0), Enumerator_get_Current_m8F2C97D8503D752215E004A880195B64917CEE95_RuntimeMethod_var);
				V_1 = L_7;
				// aWriter.Write(K);
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_8 = ___aWriter0;
				String_t* L_9 = V_1;
				NullCheck(L_8);
				VirtualActionInvoker1< String_t* >::Invoke(21 /* System.Void System.IO.BinaryWriter::Write(System.String) */, L_8, L_9);
				// m_Dict[K].SerializeBinary(aWriter);
				Dictionary_2_t74542AFEF76A87F0A6EE38215ABCD050C900E0E2* L_10 = __this->___m_Dict_6;
				String_t* L_11 = V_1;
				NullCheck(L_10);
				JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_12;
				L_12 = Dictionary_2_get_Item_mAD5BCB746F2E2424B09CA2BDD03E42770B068809(L_10, L_11, Dictionary_2_get_Item_mAD5BCB746F2E2424B09CA2BDD03E42770B068809_RuntimeMethod_var);
				BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_13 = ___aWriter0;
				NullCheck(L_12);
				VirtualActionInvoker1< BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* >::Invoke(41 /* System.Void SimpleJSON.JSONNode::SerializeBinary(System.IO.BinaryWriter) */, L_12, L_13);
			}

IL_004c_1:
			{
				// foreach (string K in m_Dict.Keys)
				bool L_14;
				L_14 = Enumerator_MoveNext_mF65727235CD00D1C771CF27D5F360ED62E1EFDF1((&V_0), Enumerator_MoveNext_mF65727235CD00D1C771CF27D5F360ED62E1EFDF1_RuntimeMethod_var);
				if (L_14)
				{
					goto IL_002b_1;
				}
			}
			{
				goto IL_0065;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0065:
	{
		// }
		return;
	}
}
// System.Void SimpleJSON.JSONObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject__ctor_m8007967452F5257DC9F5DF2B78B411BFD4B6D6AB (JSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m24C963242223589068186A2B22F6555FBB9D8C97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t74542AFEF76A87F0A6EE38215ABCD050C900E0E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Dictionary<string, JSONNode> m_Dict = new Dictionary<string, JSONNode>();
		Dictionary_2_t74542AFEF76A87F0A6EE38215ABCD050C900E0E2* L_0 = (Dictionary_2_t74542AFEF76A87F0A6EE38215ABCD050C900E0E2*)il2cpp_codegen_object_new(Dictionary_2_t74542AFEF76A87F0A6EE38215ABCD050C900E0E2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m24C963242223589068186A2B22F6555FBB9D8C97(L_0, Dictionary_2__ctor_m24C963242223589068186A2B22F6555FBB9D8C97_RuntimeMethod_var);
		__this->___m_Dict_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Dict_6), (void*)L_0);
		JSONNode__ctor_mF8F2893483161D3B7B9877B63C69063D26A5C353(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SimpleJSON.JSONObject/<>c__DisplayClass21_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0__ctor_m6976B4CF7F93E28364B390F81E55DAD60BB141C1 (U3CU3Ec__DisplayClass21_0_t651DB8FCB045D590FF5910F1E9917C209DC429BA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean SimpleJSON.JSONObject/<>c__DisplayClass21_0::<Remove>b__0(System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass21_0_U3CRemoveU3Eb__0_m8B35D441B276B749481FF797FC51A256A7A56105 (U3CU3Ec__DisplayClass21_0_t651DB8FCB045D590FF5910F1E9917C209DC429BA* __this, KeyValuePair_2_tC25A1CF74139C27B48AA7E7BA0EAE31F240EA3EF ___k0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mE11898FE6C7E851793D8B6E7B740E9828BA6EF94_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var item = m_Dict.Where(k => k.Value == aNode).First();
		JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_0;
		L_0 = KeyValuePair_2_get_Value_mE11898FE6C7E851793D8B6E7B740E9828BA6EF94_inline((&___k0), KeyValuePair_2_get_Value_mE11898FE6C7E851793D8B6E7B740E9828BA6EF94_RuntimeMethod_var);
		JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_1 = __this->___aNode_0;
		bool L_2;
		L_2 = JSONNode_op_Equality_m6961ED452D3A120FE9908FFB96260DF98A47A8B3(L_0, L_1, NULL);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SimpleJSON.JSONObject/<get_Children>d__23::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__23__ctor_mD7DD2FB8F14148B45EC4AC3A595DC1AFE369FC99 (U3Cget_ChildrenU3Ed__23_tD9157FC1CC7E1337F0FA7AF88F80A749399578AC* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_mEC09D20ED666BC3277AC9D16B68AA287E5AFE1B2(NULL);
		__this->___U3CU3El__initialThreadId_2 = L_1;
		return;
	}
}
// System.Void SimpleJSON.JSONObject/<get_Children>d__23::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__23_System_IDisposable_Dispose_m85C7654E92BD35A4525D4F3E70FFD57B5CD497AF (U3Cget_ChildrenU3Ed__23_tD9157FC1CC7E1337F0FA7AF88F80A749399578AC* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{// begin finally (depth: 1)
				U3Cget_ChildrenU3Ed__23_U3CU3Em__Finally1_m0FEB12CB9C8CC84E25A44F9FC928D8EB8F4DF9DD(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_001a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean SimpleJSON.JSONObject/<get_Children>d__23::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Cget_ChildrenU3Ed__23_MoveNext_mB9E90BB01F42BA8913E7CD7AEA18FBEADFC46CC0 (U3Cget_ChildrenU3Ed__23_tD9157FC1CC7E1337F0FA7AF88F80A749399578AC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m9ADA9DC934EF1A0048D21D89875DB863F5FF5908_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m00944D3982456679FF855520913693EB62A293C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mF70405758E51B64B1E5E4FA7764450689DA30832_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mE11898FE6C7E851793D8B6E7B740E9828BA6EF94_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	JSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118* V_2 = NULL;
	KeyValuePair_2_tC25A1CF74139C27B48AA7E7BA0EAE31F240EA3EF V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_008a:
			{// begin fault (depth: 1)
				U3Cget_ChildrenU3Ed__23_System_IDisposable_Dispose_m85C7654E92BD35A4525D4F3E70FFD57B5CD497AF(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				JSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118* L_1 = __this->___U3CU3E4__this_3;
				V_2 = L_1;
				int32_t L_2 = V_1;
				if (!L_2)
				{
					goto IL_0019_1;
				}
			}
			{
				int32_t L_3 = V_1;
				if ((((int32_t)L_3) == ((int32_t)1)))
				{
					goto IL_005f_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_0091;
			}

IL_0019_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// foreach (KeyValuePair<string, JSONNode> N in m_Dict)
				JSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118* L_4 = V_2;
				NullCheck(L_4);
				Dictionary_2_t74542AFEF76A87F0A6EE38215ABCD050C900E0E2* L_5 = L_4->___m_Dict_6;
				NullCheck(L_5);
				Enumerator_t0882EABB7914927B55F113EC1FC8D52BA871F911 L_6;
				L_6 = Dictionary_2_GetEnumerator_m9ADA9DC934EF1A0048D21D89875DB863F5FF5908(L_5, Dictionary_2_GetEnumerator_m9ADA9DC934EF1A0048D21D89875DB863F5FF5908_RuntimeMethod_var);
				__this->___U3CU3E7__wrap1_4 = L_6;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E7__wrap1_4))->____dictionary_0), (void*)NULL);
				#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3E7__wrap1_4))->____current_3))->___key_0), (void*)NULL);
				#endif
				#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3E7__wrap1_4))->____current_3))->___value_1), (void*)NULL);
				#endif
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				goto IL_0067_1;
			}

IL_003b_1:
			{
				// foreach (KeyValuePair<string, JSONNode> N in m_Dict)
				Enumerator_t0882EABB7914927B55F113EC1FC8D52BA871F911* L_7 = (&__this->___U3CU3E7__wrap1_4);
				KeyValuePair_2_tC25A1CF74139C27B48AA7E7BA0EAE31F240EA3EF L_8;
				L_8 = Enumerator_get_Current_mF70405758E51B64B1E5E4FA7764450689DA30832_inline(L_7, Enumerator_get_Current_mF70405758E51B64B1E5E4FA7764450689DA30832_RuntimeMethod_var);
				V_3 = L_8;
				// yield return N.Value;
				JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_9;
				L_9 = KeyValuePair_2_get_Value_mE11898FE6C7E851793D8B6E7B740E9828BA6EF94_inline((&V_3), KeyValuePair_2_get_Value_mE11898FE6C7E851793D8B6E7B740E9828BA6EF94_RuntimeMethod_var);
				__this->___U3CU3E2__current_1 = L_9;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_9);
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_0091;
			}

IL_005f_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
			}

IL_0067_1:
			{
				// foreach (KeyValuePair<string, JSONNode> N in m_Dict)
				Enumerator_t0882EABB7914927B55F113EC1FC8D52BA871F911* L_10 = (&__this->___U3CU3E7__wrap1_4);
				bool L_11;
				L_11 = Enumerator_MoveNext_m00944D3982456679FF855520913693EB62A293C1(L_10, Enumerator_MoveNext_m00944D3982456679FF855520913693EB62A293C1_RuntimeMethod_var);
				if (L_11)
				{
					goto IL_003b_1;
				}
			}
			{
				U3Cget_ChildrenU3Ed__23_U3CU3Em__Finally1_m0FEB12CB9C8CC84E25A44F9FC928D8EB8F4DF9DD(__this, NULL);
				Enumerator_t0882EABB7914927B55F113EC1FC8D52BA871F911* L_12 = (&__this->___U3CU3E7__wrap1_4);
				il2cpp_codegen_initobj(L_12, sizeof(Enumerator_t0882EABB7914927B55F113EC1FC8D52BA871F911));
				// }
				V_0 = (bool)0;
				goto IL_0091;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0091:
	{
		bool L_13 = V_0;
		return L_13;
	}
}
// System.Void SimpleJSON.JSONObject/<get_Children>d__23::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__23_U3CU3Em__Finally1_m0FEB12CB9C8CC84E25A44F9FC928D8EB8F4DF9DD (U3Cget_ChildrenU3Ed__23_tD9157FC1CC7E1337F0FA7AF88F80A749399578AC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m95D8AAFAF60B6E536EA7429F49C5FD5AC7A242BB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		Enumerator_t0882EABB7914927B55F113EC1FC8D52BA871F911* L_0 = (&__this->___U3CU3E7__wrap1_4);
		Enumerator_Dispose_m95D8AAFAF60B6E536EA7429F49C5FD5AC7A242BB(L_0, Enumerator_Dispose_m95D8AAFAF60B6E536EA7429F49C5FD5AC7A242BB_RuntimeMethod_var);
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONObject/<get_Children>d__23::System.Collections.Generic.IEnumerator<SimpleJSON.JSONNode>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* U3Cget_ChildrenU3Ed__23_System_Collections_Generic_IEnumeratorU3CSimpleJSON_JSONNodeU3E_get_Current_mFB2B5F5F93F044ADBF11AF1C59D305BFE295D063 (U3Cget_ChildrenU3Ed__23_tD9157FC1CC7E1337F0FA7AF88F80A749399578AC* __this, const RuntimeMethod* method) 
{
	{
		JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SimpleJSON.JSONObject/<get_Children>d__23::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__23_System_Collections_IEnumerator_Reset_mE65CCEC3E7FCE86596AF14C5821DA3D5F76C34E3 (U3Cget_ChildrenU3Ed__23_tD9157FC1CC7E1337F0FA7AF88F80A749399578AC* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Cget_ChildrenU3Ed__23_System_Collections_IEnumerator_Reset_mE65CCEC3E7FCE86596AF14C5821DA3D5F76C34E3_RuntimeMethod_var)));
	}
}
// System.Object SimpleJSON.JSONObject/<get_Children>d__23::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildrenU3Ed__23_System_Collections_IEnumerator_get_Current_m3B0D1EE4EF3C849E2A702C9B9DB6F65FA70890D9 (U3Cget_ChildrenU3Ed__23_tD9157FC1CC7E1337F0FA7AF88F80A749399578AC* __this, const RuntimeMethod* method) 
{
	{
		JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode> SimpleJSON.JSONObject/<get_Children>d__23::System.Collections.Generic.IEnumerable<SimpleJSON.JSONNode>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildrenU3Ed__23_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m42B5EADBEE1E083675385176B87BCAB7C4FA0873 (U3Cget_ChildrenU3Ed__23_tD9157FC1CC7E1337F0FA7AF88F80A749399578AC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Cget_ChildrenU3Ed__23_tD9157FC1CC7E1337F0FA7AF88F80A749399578AC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3Cget_ChildrenU3Ed__23_tD9157FC1CC7E1337F0FA7AF88F80A749399578AC* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId_2;
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_mEC09D20ED666BC3277AC9D16B68AA287E5AFE1B2(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->___U3CU3E1__state_0 = 0;
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3Cget_ChildrenU3Ed__23_tD9157FC1CC7E1337F0FA7AF88F80A749399578AC* L_3 = (U3Cget_ChildrenU3Ed__23_tD9157FC1CC7E1337F0FA7AF88F80A749399578AC*)il2cpp_codegen_object_new(U3Cget_ChildrenU3Ed__23_tD9157FC1CC7E1337F0FA7AF88F80A749399578AC_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		U3Cget_ChildrenU3Ed__23__ctor_mD7DD2FB8F14148B45EC4AC3A595DC1AFE369FC99(L_3, 0, NULL);
		V_0 = L_3;
		U3Cget_ChildrenU3Ed__23_tD9157FC1CC7E1337F0FA7AF88F80A749399578AC* L_4 = V_0;
		JSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118* L_5 = __this->___U3CU3E4__this_3;
		NullCheck(L_4);
		L_4->___U3CU3E4__this_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___U3CU3E4__this_3), (void*)L_5);
	}

IL_0035:
	{
		U3Cget_ChildrenU3Ed__23_tD9157FC1CC7E1337F0FA7AF88F80A749399578AC* L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator SimpleJSON.JSONObject/<get_Children>d__23::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildrenU3Ed__23_System_Collections_IEnumerable_GetEnumerator_mC4F14551458D7F9F3DDC7610F078982D1C04DBD4 (U3Cget_ChildrenU3Ed__23_tD9157FC1CC7E1337F0FA7AF88F80A749399578AC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3Cget_ChildrenU3Ed__23_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m42B5EADBEE1E083675385176B87BCAB7C4FA0873(__this, NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// SimpleJSON.JSONNodeType SimpleJSON.JSONString::get_Tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONString_get_Tag_m68B0FF9ADDC3E203E5D60BB10639AEABACA34D44 (JSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4* __this, const RuntimeMethod* method) 
{
	{
		// public override JSONNodeType Tag { get { return JSONNodeType.String; } }
		return (int32_t)(3);
	}
}
// System.Boolean SimpleJSON.JSONString::get_IsString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONString_get_IsString_m933985E37AE8A887A2039A9BAC7698F083BCD6E3 (JSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4* __this, const RuntimeMethod* method) 
{
	{
		// public override bool IsString { get { return true; } }
		return (bool)1;
	}
}
// SimpleJSON.JSONNode/Enumerator SimpleJSON.JSONString::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4 JSONString_GetEnumerator_m1CB9E437FC8622F3FE05D0AC12024D144747E0B8 (JSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4* __this, const RuntimeMethod* method) 
{
	Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public override Enumerator GetEnumerator() { return new Enumerator(); }
		il2cpp_codegen_initobj((&V_0), sizeof(Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4));
		Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4 L_0 = V_0;
		return L_0;
	}
}
// System.String SimpleJSON.JSONString::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONString_get_Value_mEAD2BD372A2C517E83233BA5F6E309745AA5E9B4 (JSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Data; }
		String_t* L_0 = __this->___m_Data_6;
		return L_0;
	}
}
// System.Void SimpleJSON.JSONString::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONString_set_Value_mB974D9B82AB8F9FAB84DCA99B8BD4B7C1C08ED00 (JSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// m_Data = value;
		String_t* L_0 = ___value0;
		__this->___m_Data_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Data_6), (void*)L_0);
		// }
		return;
	}
}
// System.Void SimpleJSON.JSONString::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONString__ctor_m1DD5FB9A4147F72A0ED5F773FF82FA269241AD19 (JSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4* __this, String_t* ___aData0, const RuntimeMethod* method) 
{
	{
		// public JSONString(string aData)
		JSONNode__ctor_mF8F2893483161D3B7B9877B63C69063D26A5C353(__this, NULL);
		// m_Data = aData;
		String_t* L_0 = ___aData0;
		__this->___m_Data_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Data_6), (void*)L_0);
		// }
		return;
	}
}
// System.Void SimpleJSON.JSONString::WriteToStringBuilder(System.Text.StringBuilder,System.Int32,System.Int32,SimpleJSON.JSONTextMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONString_WriteToStringBuilder_mDF24D860FBF8E71F6F04799DD70F7700CE41D818 (JSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4* __this, StringBuilder_t* ___aSB0, int32_t ___aIndent1, int32_t ___aIndentInc2, int32_t ___aMode3, const RuntimeMethod* method) 
{
	{
		// aSB.Append('\"').Append(Escape(m_Data)).Append('\"');
		StringBuilder_t* L_0 = ___aSB0;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_0, ((int32_t)34), NULL);
		String_t* L_2 = __this->___m_Data_6;
		String_t* L_3;
		L_3 = JSONNode_Escape_mC20A370D25C7B269E4707FF5CEC7062C470C416A(L_2, NULL);
		NullCheck(L_1);
		StringBuilder_t* L_4;
		L_4 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_1, L_3, NULL);
		NullCheck(L_4);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_4, ((int32_t)34), NULL);
		// }
		return;
	}
}
// System.Boolean SimpleJSON.JSONString::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONString_Equals_m1C60B537E558E6DF85ACF3EF9FF43BF9A3CF5435 (JSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	JSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4* V_1 = NULL;
	{
		// if (base.Equals(obj))
		RuntimeObject* L_0 = ___obj0;
		bool L_1;
		L_1 = JSONNode_Equals_mE1B8A846783529B1E54786975A6A2396089A88DE(__this, L_0, NULL);
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000b:
	{
		// string s = obj as string;
		RuntimeObject* L_2 = ___obj0;
		V_0 = ((String_t*)IsInstSealed((RuntimeObject*)L_2, String_t_il2cpp_TypeInfo_var));
		// if (s != null)
		String_t* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// return m_Data == s;
		String_t* L_4 = __this->___m_Data_6;
		String_t* L_5 = V_0;
		bool L_6;
		L_6 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_4, L_5, NULL);
		return L_6;
	}

IL_0022:
	{
		// JSONString s2 = obj as JSONString;
		RuntimeObject* L_7 = ___obj0;
		V_1 = ((JSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4*)IsInstClass((RuntimeObject*)L_7, JSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4_il2cpp_TypeInfo_var));
		// if (s2 != null)
		JSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4* L_8 = V_1;
		bool L_9;
		L_9 = JSONNode_op_Inequality_m2DF69DE99CD87AA07CE1200892E24EA22B351943(L_8, NULL, NULL);
		if (!L_9)
		{
			goto IL_0044;
		}
	}
	{
		// return m_Data == s2.m_Data;
		String_t* L_10 = __this->___m_Data_6;
		JSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4* L_11 = V_1;
		NullCheck(L_11);
		String_t* L_12 = L_11->___m_Data_6;
		bool L_13;
		L_13 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_10, L_12, NULL);
		return L_13;
	}

IL_0044:
	{
		// return false;
		return (bool)0;
	}
}
// System.Int32 SimpleJSON.JSONString::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONString_GetHashCode_m979A74F84B4C0F45BF63D75DE1146490F743EE00 (JSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4* __this, const RuntimeMethod* method) 
{
	{
		// return m_Data.GetHashCode();
		String_t* L_0 = __this->___m_Data_6;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		return L_1;
	}
}
// System.Void SimpleJSON.JSONString::SerializeBinary(System.IO.BinaryWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONString_SerializeBinary_m326D7A86B47F8CD093FCC4738ACB1DED2FED53A1 (JSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4* __this, BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___aWriter0, const RuntimeMethod* method) 
{
	{
		// aWriter.Write((byte)JSONNodeType.String);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_0 = ___aWriter0;
		NullCheck(L_0);
		VirtualActionInvoker1< uint8_t >::Invoke(8 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_0, (uint8_t)3);
		// aWriter.Write(m_Data);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_1 = ___aWriter0;
		String_t* L_2 = __this->___m_Data_6;
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(21 /* System.Void System.IO.BinaryWriter::Write(System.String) */, L_1, L_2);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// SimpleJSON.JSONNodeType SimpleJSON.JSONNumber::get_Tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONNumber_get_Tag_m7C6E217E85B6161812496B63E5D371B910AAC856 (JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* __this, const RuntimeMethod* method) 
{
	{
		// public override JSONNodeType Tag { get { return JSONNodeType.Number; } }
		return (int32_t)(4);
	}
}
// System.Boolean SimpleJSON.JSONNumber::get_IsNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNumber_get_IsNumber_mFABFD0C9C4905CFB34A62700A1BD335F53E4214E (JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* __this, const RuntimeMethod* method) 
{
	{
		// public override bool IsNumber { get { return true; } }
		return (bool)1;
	}
}
// SimpleJSON.JSONNode/Enumerator SimpleJSON.JSONNumber::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4 JSONNumber_GetEnumerator_m4D13E84756AEED9FCD7EFEEE4D01187DD049C596 (JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* __this, const RuntimeMethod* method) 
{
	Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public override Enumerator GetEnumerator() { return new Enumerator(); }
		il2cpp_codegen_initobj((&V_0), sizeof(Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4));
		Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4 L_0 = V_0;
		return L_0;
	}
}
// System.String SimpleJSON.JSONNumber::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONNumber_get_Value_mBC5AB046D134B1E54C228C9C1C2231F8448CD56D (JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return m_Data.ToString(CultureInfo.InvariantCulture); }
		double* L_0 = (&__this->___m_Data_6);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_1;
		L_1 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		String_t* L_2;
		L_2 = Double_ToString_m4318830D9F771852FDCF21C14CF9E8ABC7E77357(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Void SimpleJSON.JSONNumber::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNumber_set_Value_m2264762BBD76F39DDC5DF3160910A44FBEFDE54C (JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	{
		// if (double.TryParse(value, NumberStyles.Float, CultureInfo.InvariantCulture, out v))
		String_t* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_1;
		L_1 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		bool L_2;
		L_2 = Double_TryParse_m6038C4DBF1789F1954938FF7F6D3459359CD7718(L_0, ((int32_t)167), L_1, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// m_Data = v;
		double L_3 = V_0;
		__this->___m_Data_6 = L_3;
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Double SimpleJSON.JSONNumber::get_AsDouble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double JSONNumber_get_AsDouble_m8C004121700A7E7EB2B77ED223187227E33DE60B (JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Data; }
		double L_0 = __this->___m_Data_6;
		return L_0;
	}
}
// System.Void SimpleJSON.JSONNumber::set_AsDouble(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNumber_set_AsDouble_m8E17AF8C0E9AE0EF6E25D86CB1B119904ADC0558 (JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_Data = value; }
		double L_0 = ___value0;
		__this->___m_Data_6 = L_0;
		// set { m_Data = value; }
		return;
	}
}
// System.Int64 SimpleJSON.JSONNumber::get_AsLong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t JSONNumber_get_AsLong_mF96069F806F51121CBFE8847D9E0D312F05986BB (JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* __this, const RuntimeMethod* method) 
{
	{
		// get { return (long)m_Data; }
		double L_0 = __this->___m_Data_6;
		return il2cpp_codegen_cast_double_to_int<int64_t>(L_0);
	}
}
// System.Void SimpleJSON.JSONNumber::set_AsLong(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNumber_set_AsLong_m541EF4E20CD8683CA860E0B969CECF7B71E2A357 (JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_Data = value; }
		int64_t L_0 = ___value0;
		__this->___m_Data_6 = ((double)L_0);
		// set { m_Data = value; }
		return;
	}
}
// System.Void SimpleJSON.JSONNumber::.ctor(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNumber__ctor_m1CE3527102D15EBC3A183E3519895E291CAC1D90 (JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* __this, double ___aData0, const RuntimeMethod* method) 
{
	{
		// public JSONNumber(double aData)
		JSONNode__ctor_mF8F2893483161D3B7B9877B63C69063D26A5C353(__this, NULL);
		// m_Data = aData;
		double L_0 = ___aData0;
		__this->___m_Data_6 = L_0;
		// }
		return;
	}
}
// System.Void SimpleJSON.JSONNumber::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNumber__ctor_m39FDDE1A9EFEE9C4F2498E531D12B97AA49A1BA5 (JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* __this, String_t* ___aData0, const RuntimeMethod* method) 
{
	{
		// public JSONNumber(string aData)
		JSONNode__ctor_mF8F2893483161D3B7B9877B63C69063D26A5C353(__this, NULL);
		// Value = aData;
		String_t* L_0 = ___aData0;
		VirtualActionInvoker1< String_t* >::Invoke(10 /* System.Void SimpleJSON.JSONNode::set_Value(System.String) */, __this, L_0);
		// }
		return;
	}
}
// System.Void SimpleJSON.JSONNumber::WriteToStringBuilder(System.Text.StringBuilder,System.Int32,System.Int32,SimpleJSON.JSONTextMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNumber_WriteToStringBuilder_mD311BC3C1EE3E159C43801EB214F084E567367F2 (JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* __this, StringBuilder_t* ___aSB0, int32_t ___aIndent1, int32_t ___aIndentInc2, int32_t ___aMode3, const RuntimeMethod* method) 
{
	{
		// aSB.Append(Value);
		StringBuilder_t* L_0 = ___aSB0;
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String SimpleJSON.JSONNode::get_Value() */, __this);
		NullCheck(L_0);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Boolean SimpleJSON.JSONNumber::IsNumeric(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNumber_IsNumeric_mE6C07226FABFDD425449643925B667C05C52D41D (RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return value is int || value is uint
		//     || value is float || value is double
		//     || value is decimal
		//     || value is long || value is ulong
		//     || value is short || value is ushort
		//     || value is sbyte || value is byte;
		RuntimeObject* L_0 = ___value0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_1 = ___value0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var)))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_2 = ___value0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_2, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var)))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_3 = ___value0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_3, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var)))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_4 = ___value0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_4, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var)))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_5 = ___value0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_5, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var)))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_6 = ___value0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_6, UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var)))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_7 = ___value0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_7, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var)))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_8 = ___value0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_8, UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var)))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_9 = ___value0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_9, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var)))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_10 = ___value0;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_10, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}

IL_005a:
	{
		return (bool)1;
	}
}
// System.Boolean SimpleJSON.JSONNumber::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNumber_Equals_mC04BB811CCAF20E70AE696AE74ECFDF5DA888688 (JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* V_0 = NULL;
	{
		// if (obj == null)
		RuntimeObject* L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0005:
	{
		// if (base.Equals(obj))
		RuntimeObject* L_1 = ___obj0;
		bool L_2;
		L_2 = JSONNode_Equals_mE1B8A846783529B1E54786975A6A2396089A88DE(__this, L_1, NULL);
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0010:
	{
		// JSONNumber s2 = obj as JSONNumber;
		RuntimeObject* L_3 = ___obj0;
		V_0 = ((JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA*)IsInstClass((RuntimeObject*)L_3, JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA_il2cpp_TypeInfo_var));
		// if (s2 != null)
		JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* L_4 = V_0;
		bool L_5;
		L_5 = JSONNode_op_Inequality_m2DF69DE99CD87AA07CE1200892E24EA22B351943(L_4, NULL, NULL);
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		// return m_Data == s2.m_Data;
		double L_6 = __this->___m_Data_6;
		JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* L_7 = V_0;
		NullCheck(L_7);
		double L_8 = L_7->___m_Data_6;
		return (bool)((((double)L_6) == ((double)L_8))? 1 : 0);
	}

IL_002f:
	{
		// if (IsNumeric(obj))
		RuntimeObject* L_9 = ___obj0;
		bool L_10;
		L_10 = JSONNumber_IsNumeric_mE6C07226FABFDD425449643925B667C05C52D41D(L_9, NULL);
		if (!L_10)
		{
			goto IL_0046;
		}
	}
	{
		// return Convert.ToDouble(obj) == m_Data;
		RuntimeObject* L_11 = ___obj0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = Convert_ToDouble_mE64ED1A9412EA3B16E4C7F1C74655F53DE71C71A(L_11, NULL);
		double L_13 = __this->___m_Data_6;
		return (bool)((((double)L_12) == ((double)L_13))? 1 : 0);
	}

IL_0046:
	{
		// return false;
		return (bool)0;
	}
}
// System.Int32 SimpleJSON.JSONNumber::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONNumber_GetHashCode_m976ADFE41037830524798C7E6AFE08006B5F77AD (JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* __this, const RuntimeMethod* method) 
{
	{
		// return m_Data.GetHashCode();
		double* L_0 = (&__this->___m_Data_6);
		int32_t L_1;
		L_1 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void SimpleJSON.JSONNumber::SerializeBinary(System.IO.BinaryWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNumber_SerializeBinary_m9DCA81AEB0FE16CD13559FFD2B98A869E3874F3B (JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* __this, BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___aWriter0, const RuntimeMethod* method) 
{
	{
		// aWriter.Write((byte)JSONNodeType.Number);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_0 = ___aWriter0;
		NullCheck(L_0);
		VirtualActionInvoker1< uint8_t >::Invoke(8 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_0, (uint8_t)4);
		// aWriter.Write(m_Data);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_1 = ___aWriter0;
		double L_2 = __this->___m_Data_6;
		NullCheck(L_1);
		VirtualActionInvoker1< double >::Invoke(13 /* System.Void System.IO.BinaryWriter::Write(System.Double) */, L_1, L_2);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// SimpleJSON.JSONNodeType SimpleJSON.JSONBool::get_Tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONBool_get_Tag_m82CE84C4C89E157D4DB036B9F0745343C005C338 (JSONBool_tD0B1D526BA8A27DAB4559E54BBDFB94FA1A8B1D9* __this, const RuntimeMethod* method) 
{
	{
		// public override JSONNodeType Tag { get { return JSONNodeType.Boolean; } }
		return (int32_t)(6);
	}
}
// System.Boolean SimpleJSON.JSONBool::get_IsBoolean()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONBool_get_IsBoolean_m2671AE98710859611DF47E6BC58E6582C3A5B445 (JSONBool_tD0B1D526BA8A27DAB4559E54BBDFB94FA1A8B1D9* __this, const RuntimeMethod* method) 
{
	{
		// public override bool IsBoolean { get { return true; } }
		return (bool)1;
	}
}
// SimpleJSON.JSONNode/Enumerator SimpleJSON.JSONBool::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4 JSONBool_GetEnumerator_mA07A10A6111713F7AD09FF03D09A6028556094D9 (JSONBool_tD0B1D526BA8A27DAB4559E54BBDFB94FA1A8B1D9* __this, const RuntimeMethod* method) 
{
	Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public override Enumerator GetEnumerator() { return new Enumerator(); }
		il2cpp_codegen_initobj((&V_0), sizeof(Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4));
		Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4 L_0 = V_0;
		return L_0;
	}
}
// System.String SimpleJSON.JSONBool::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONBool_get_Value_mBEA89869448B0B597758D5BF2A3B576CA0BB64E3 (JSONBool_tD0B1D526BA8A27DAB4559E54BBDFB94FA1A8B1D9* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Data.ToString(); }
		bool* L_0 = (&__this->___m_Data_6);
		String_t* L_1;
		L_1 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63(L_0, NULL);
		return L_1;
	}
}
// System.Void SimpleJSON.JSONBool::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONBool_set_Value_mC960EE4083CA91D0059BE24661AFC06E131E2CFC (JSONBool_tD0B1D526BA8A27DAB4559E54BBDFB94FA1A8B1D9* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (bool.TryParse(value, out v))
		String_t* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Boolean_TryParse_mACDFEB12D4D8B25F9AAA56678FEFC0724D49776F(L_0, (&V_0), NULL);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		// m_Data = v;
		bool L_2 = V_0;
		__this->___m_Data_6 = L_2;
	}

IL_0011:
	{
		// }
		return;
	}
}
// System.Boolean SimpleJSON.JSONBool::get_AsBool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONBool_get_AsBool_mE04224144EAD0A9AD2F3B14BC0C68557A3BF22AC (JSONBool_tD0B1D526BA8A27DAB4559E54BBDFB94FA1A8B1D9* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Data; }
		bool L_0 = __this->___m_Data_6;
		return L_0;
	}
}
// System.Void SimpleJSON.JSONBool::set_AsBool(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONBool_set_AsBool_m88EDF61A5ABBFF3ECF723312852E14F3C60AE365 (JSONBool_tD0B1D526BA8A27DAB4559E54BBDFB94FA1A8B1D9* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_Data = value; }
		bool L_0 = ___value0;
		__this->___m_Data_6 = L_0;
		// set { m_Data = value; }
		return;
	}
}
// System.Void SimpleJSON.JSONBool::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONBool__ctor_mBB02E388CFB96B99E84561FCFF68147F00391C58 (JSONBool_tD0B1D526BA8A27DAB4559E54BBDFB94FA1A8B1D9* __this, bool ___aData0, const RuntimeMethod* method) 
{
	{
		// public JSONBool(bool aData)
		JSONNode__ctor_mF8F2893483161D3B7B9877B63C69063D26A5C353(__this, NULL);
		// m_Data = aData;
		bool L_0 = ___aData0;
		__this->___m_Data_6 = L_0;
		// }
		return;
	}
}
// System.Void SimpleJSON.JSONBool::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONBool__ctor_m8CFB6AA78095EA003AB9B5EDD8932E8E0B01A1B9 (JSONBool_tD0B1D526BA8A27DAB4559E54BBDFB94FA1A8B1D9* __this, String_t* ___aData0, const RuntimeMethod* method) 
{
	{
		// public JSONBool(string aData)
		JSONNode__ctor_mF8F2893483161D3B7B9877B63C69063D26A5C353(__this, NULL);
		// Value = aData;
		String_t* L_0 = ___aData0;
		VirtualActionInvoker1< String_t* >::Invoke(10 /* System.Void SimpleJSON.JSONNode::set_Value(System.String) */, __this, L_0);
		// }
		return;
	}
}
// System.Void SimpleJSON.JSONBool::WriteToStringBuilder(System.Text.StringBuilder,System.Int32,System.Int32,SimpleJSON.JSONTextMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONBool_WriteToStringBuilder_m82C70C80863730E8A22EE7A5B099C765F2E1D91E (JSONBool_tD0B1D526BA8A27DAB4559E54BBDFB94FA1A8B1D9* __this, StringBuilder_t* ___aSB0, int32_t ___aIndent1, int32_t ___aIndentInc2, int32_t ___aMode3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* G_B2_0 = NULL;
	StringBuilder_t* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	StringBuilder_t* G_B3_1 = NULL;
	{
		// aSB.Append((m_Data) ? "true" : "false");
		StringBuilder_t* L_0 = ___aSB0;
		bool L_1 = __this->___m_Data_6;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_0010;
		}
	}
	{
		G_B3_0 = _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
		G_B3_1 = G_B1_0;
		goto IL_0015;
	}

IL_0010:
	{
		G_B3_0 = _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
		G_B3_1 = G_B2_0;
	}

IL_0015:
	{
		NullCheck(G_B3_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(G_B3_1, G_B3_0, NULL);
		// }
		return;
	}
}
// System.Boolean SimpleJSON.JSONBool::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONBool_Equals_m2671F40DA8F1128BA1451FE7066515C6E0C50D45 (JSONBool_tD0B1D526BA8A27DAB4559E54BBDFB94FA1A8B1D9* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (obj == null)
		RuntimeObject* L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0005:
	{
		// if (obj is bool)
		RuntimeObject* L_1 = ___obj0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var)))
		{
			goto IL_001c;
		}
	}
	{
		// return m_Data == (bool)obj;
		bool L_2 = __this->___m_Data_6;
		RuntimeObject* L_3 = ___obj0;
		return (bool)((((int32_t)L_2) == ((int32_t)((*(bool*)((bool*)(bool*)UnBox(L_3, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var))))))? 1 : 0);
	}

IL_001c:
	{
		// return false;
		return (bool)0;
	}
}
// System.Int32 SimpleJSON.JSONBool::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONBool_GetHashCode_mC5B59375A9EE9978A5ADD1A24ECEE3FC920836DB (JSONBool_tD0B1D526BA8A27DAB4559E54BBDFB94FA1A8B1D9* __this, const RuntimeMethod* method) 
{
	{
		// return m_Data.GetHashCode();
		bool* L_0 = (&__this->___m_Data_6);
		int32_t L_1;
		L_1 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3(L_0, NULL);
		return L_1;
	}
}
// System.Void SimpleJSON.JSONBool::SerializeBinary(System.IO.BinaryWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONBool_SerializeBinary_m05BDBCE5030787C8E16A18F69E8CC58AAE8B967C (JSONBool_tD0B1D526BA8A27DAB4559E54BBDFB94FA1A8B1D9* __this, BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___aWriter0, const RuntimeMethod* method) 
{
	{
		// aWriter.Write((byte)JSONNodeType.Boolean);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_0 = ___aWriter0;
		NullCheck(L_0);
		VirtualActionInvoker1< uint8_t >::Invoke(8 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_0, (uint8_t)6);
		// aWriter.Write(m_Data);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_1 = ___aWriter0;
		bool L_2 = __this->___m_Data_6;
		NullCheck(L_1);
		VirtualActionInvoker1< bool >::Invoke(7 /* System.Void System.IO.BinaryWriter::Write(System.Boolean) */, L_1, L_2);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// SimpleJSON.JSONNull SimpleJSON.JSONNull::CreateOrGet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595* JSONNull_CreateOrGet_m68ED6000156701E566B1EA9DDC5284299B0C9105 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (reuseSameInstance)
		il2cpp_codegen_runtime_class_init_inline(JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595_il2cpp_TypeInfo_var);
		bool L_0 = ((JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595_StaticFields*)il2cpp_codegen_static_fields_for(JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595_il2cpp_TypeInfo_var))->___reuseSameInstance_7;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// return m_StaticInstance;
		il2cpp_codegen_runtime_class_init_inline(JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595_il2cpp_TypeInfo_var);
		JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595* L_1 = ((JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595_StaticFields*)il2cpp_codegen_static_fields_for(JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595_il2cpp_TypeInfo_var))->___m_StaticInstance_6;
		return L_1;
	}

IL_000d:
	{
		// return new JSONNull();
		JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595* L_2 = (JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595*)il2cpp_codegen_object_new(JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		JSONNull__ctor_m909243259F39D10FA6FEB176474DEF9C9972D76B(L_2, NULL);
		return L_2;
	}
}
// System.Void SimpleJSON.JSONNull::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNull__ctor_m909243259F39D10FA6FEB176474DEF9C9972D76B (JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595* __this, const RuntimeMethod* method) 
{
	{
		// private JSONNull() { }
		JSONNode__ctor_mF8F2893483161D3B7B9877B63C69063D26A5C353(__this, NULL);
		// private JSONNull() { }
		return;
	}
}
// SimpleJSON.JSONNodeType SimpleJSON.JSONNull::get_Tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONNull_get_Tag_m89A7F368EA6269874235F85E43AE82254AAFD41E (JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595* __this, const RuntimeMethod* method) 
{
	{
		// public override JSONNodeType Tag { get { return JSONNodeType.NullValue; } }
		return (int32_t)(5);
	}
}
// System.Boolean SimpleJSON.JSONNull::get_IsNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNull_get_IsNull_m1174212D6379871AC361EF06FA05DD510FC55595 (JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595* __this, const RuntimeMethod* method) 
{
	{
		// public override bool IsNull { get { return true; } }
		return (bool)1;
	}
}
// SimpleJSON.JSONNode/Enumerator SimpleJSON.JSONNull::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4 JSONNull_GetEnumerator_m16D254C74386D1A0AB2EFD1DE0EAF409C73B7686 (JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595* __this, const RuntimeMethod* method) 
{
	Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public override Enumerator GetEnumerator() { return new Enumerator(); }
		il2cpp_codegen_initobj((&V_0), sizeof(Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4));
		Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4 L_0 = V_0;
		return L_0;
	}
}
// System.String SimpleJSON.JSONNull::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONNull_get_Value_mB15431220D7D0B45CE002A204DF9E070CF78DBE0 (JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return "null"; }
		return _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
	}
}
// System.Void SimpleJSON.JSONNull::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNull_set_Value_mAF0CD2E912EF772E0892EB4ABB77294F689CF20A (JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// set { }
		return;
	}
}
// System.Boolean SimpleJSON.JSONNull::get_AsBool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNull_get_AsBool_m6F3817CD49ED7CC10C180D31D84ED4B0151C78CE (JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595* __this, const RuntimeMethod* method) 
{
	{
		// get { return false; }
		return (bool)0;
	}
}
// System.Void SimpleJSON.JSONNull::set_AsBool(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNull_set_AsBool_m5717BC3921B7DE0683E9160B3816628B5CBC663D (JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { }
		return;
	}
}
// System.Boolean SimpleJSON.JSONNull::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNull_Equals_m8A39CAD3A41E9584C434B90A1360C62B3E158DE6 (JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (object.ReferenceEquals(this, obj))
		RuntimeObject* L_0 = ___obj0;
		if ((!(((RuntimeObject*)(JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595*)__this) == ((RuntimeObject*)(RuntimeObject*)L_0))))
		{
			goto IL_0006;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0006:
	{
		// return (obj is JSONNull);
		RuntimeObject* L_1 = ___obj0;
		return (bool)((!(((RuntimeObject*)(JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595*)((JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595*)IsInstClass((RuntimeObject*)L_1, JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Int32 SimpleJSON.JSONNull::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONNull_GetHashCode_m74BE6286F06C6E7D5E35381E8BD27215117D9061 (JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595* __this, const RuntimeMethod* method) 
{
	{
		// return 0;
		return 0;
	}
}
// System.Void SimpleJSON.JSONNull::WriteToStringBuilder(System.Text.StringBuilder,System.Int32,System.Int32,SimpleJSON.JSONTextMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNull_WriteToStringBuilder_mB5B78BFA6A4943319926C1B2AE93F68C7B9B5FFD (JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595* __this, StringBuilder_t* ___aSB0, int32_t ___aIndent1, int32_t ___aIndentInc2, int32_t ___aMode3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		s_Il2CppMethodInitialized = true;
	}
	{
		// aSB.Append("null");
		StringBuilder_t* L_0 = ___aSB0;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_0, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, NULL);
		// }
		return;
	}
}
// System.Void SimpleJSON.JSONNull::SerializeBinary(System.IO.BinaryWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNull_SerializeBinary_mDF2ACD3562B41C7FE9346E65742B91684FCB2054 (JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595* __this, BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___aWriter0, const RuntimeMethod* method) 
{
	{
		// aWriter.Write((byte)JSONNodeType.NullValue);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_0 = ___aWriter0;
		NullCheck(L_0);
		VirtualActionInvoker1< uint8_t >::Invoke(8 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_0, (uint8_t)5);
		// }
		return;
	}
}
// System.Void SimpleJSON.JSONNull::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNull__cctor_m49F440C5442212437C3A1CDAF32B864961BE534B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static JSONNull m_StaticInstance = new JSONNull();
		JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595* L_0 = (JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595*)il2cpp_codegen_object_new(JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JSONNull__ctor_m909243259F39D10FA6FEB176474DEF9C9972D76B(L_0, NULL);
		((JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595_StaticFields*)il2cpp_codegen_static_fields_for(JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595_il2cpp_TypeInfo_var))->___m_StaticInstance_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595_StaticFields*)il2cpp_codegen_static_fields_for(JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595_il2cpp_TypeInfo_var))->___m_StaticInstance_6), (void*)L_0);
		// public static bool reuseSameInstance = true;
		((JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595_StaticFields*)il2cpp_codegen_static_fields_for(JSONNull_tF2E8AF37ABA6DB5848AD3567D6C9960AF2C82595_il2cpp_TypeInfo_var))->___reuseSameInstance_7 = (bool)1;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// SimpleJSON.JSONNodeType SimpleJSON.JSONLazyCreator::get_Tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONLazyCreator_get_Tag_m1CB86FEA25328F1BE9CC01F6D020C9450E9F466E (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* __this, const RuntimeMethod* method) 
{
	{
		// public override JSONNodeType Tag { get { return JSONNodeType.None; } }
		return (int32_t)(7);
	}
}
// SimpleJSON.JSONNode/Enumerator SimpleJSON.JSONLazyCreator::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4 JSONLazyCreator_GetEnumerator_m720BF0642A079A8BD44F6D650CF4D833DEF67757 (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* __this, const RuntimeMethod* method) 
{
	Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public override Enumerator GetEnumerator() { return new Enumerator(); }
		il2cpp_codegen_initobj((&V_0), sizeof(Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4));
		Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4 L_0 = V_0;
		return L_0;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::.ctor(SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator__ctor_m0B3625D19DDD8DBDBB45822FAABCE266FA4EE694 (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* __this, JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* ___aNode0, const RuntimeMethod* method) 
{
	{
		// public JSONLazyCreator(JSONNode aNode)
		JSONNode__ctor_mF8F2893483161D3B7B9877B63C69063D26A5C353(__this, NULL);
		// m_Node = aNode;
		JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_0 = ___aNode0;
		__this->___m_Node_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Node_6), (void*)L_0);
		// m_Key = null;
		__this->___m_Key_7 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Key_7), (void*)(String_t*)NULL);
		// }
		return;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::.ctor(SimpleJSON.JSONNode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator__ctor_m02E2D630C60045F25A3AC001B7A17DF2D5D197B4 (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* __this, JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* ___aNode0, String_t* ___aKey1, const RuntimeMethod* method) 
{
	{
		// public JSONLazyCreator(JSONNode aNode, string aKey)
		JSONNode__ctor_mF8F2893483161D3B7B9877B63C69063D26A5C353(__this, NULL);
		// m_Node = aNode;
		JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_0 = ___aNode0;
		__this->___m_Node_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Node_6), (void*)L_0);
		// m_Key = aKey;
		String_t* L_1 = ___aKey1;
		__this->___m_Key_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Key_7), (void*)L_1);
		// }
		return;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::Set(SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator_Set_mEF6EB64379EBE960F050C24D45EDCA4B6D404958 (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* __this, JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* ___aVal0, const RuntimeMethod* method) 
{
	{
		// if (m_Key == null)
		String_t* L_0 = __this->___m_Key_7;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		// m_Node.Add(aVal);
		JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_1 = __this->___m_Node_6;
		JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_2 = ___aVal0;
		NullCheck(L_1);
		VirtualActionInvoker1< JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* >::Invoke(21 /* System.Void SimpleJSON.JSONNode::Add(SimpleJSON.JSONNode) */, L_1, L_2);
		goto IL_0028;
	}

IL_0016:
	{
		// m_Node.Add(m_Key, aVal);
		JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_3 = __this->___m_Node_6;
		String_t* L_4 = __this->___m_Key_7;
		JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_5 = ___aVal0;
		NullCheck(L_3);
		VirtualActionInvoker2< String_t*, JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* >::Invoke(20 /* System.Void SimpleJSON.JSONNode::Add(System.String,SimpleJSON.JSONNode) */, L_3, L_4, L_5);
	}

IL_0028:
	{
		// m_Node = null; // Be GC friendly.
		__this->___m_Node_6 = (JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Node_6), (void*)(JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653*)NULL);
		// }
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONLazyCreator::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* JSONLazyCreator_get_Item_m562D16AE7F1F0CACA5ED050B390B63F98EBC77B1 (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* __this, int32_t ___aIndex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new JSONLazyCreator(this);
		JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* L_0 = (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C*)il2cpp_codegen_object_new(JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JSONLazyCreator__ctor_m0B3625D19DDD8DBDBB45822FAABCE266FA4EE694(L_0, __this, NULL);
		return L_0;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::set_Item(System.Int32,SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator_set_Item_m42894F9D00193BC7138C5D451E1B0BBD1BFE1084 (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* __this, int32_t ___aIndex0, JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2* V_0 = NULL;
	{
		// var tmp = new JSONArray();
		JSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2* L_0 = (JSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2*)il2cpp_codegen_object_new(JSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JSONArray__ctor_m92FFF2DC8E1425398814F50D4B253EB459B8477F(L_0, NULL);
		V_0 = L_0;
		// tmp.Add(value);
		JSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2* L_1 = V_0;
		JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_2 = ___value1;
		NullCheck(L_1);
		VirtualActionInvoker1< JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* >::Invoke(21 /* System.Void SimpleJSON.JSONNode::Add(SimpleJSON.JSONNode) */, L_1, L_2);
		// Set(tmp);
		JSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2* L_3 = V_0;
		JSONLazyCreator_Set_mEF6EB64379EBE960F050C24D45EDCA4B6D404958(__this, L_3, NULL);
		// }
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONLazyCreator::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* JSONLazyCreator_get_Item_mF7AE3ADFBE062BF3B83FECCE0EF10F10996DE0CD (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* __this, String_t* ___aKey0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new JSONLazyCreator(this, aKey);
		String_t* L_0 = ___aKey0;
		JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* L_1 = (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C*)il2cpp_codegen_object_new(JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		JSONLazyCreator__ctor_m02E2D630C60045F25A3AC001B7A17DF2D5D197B4(L_1, __this, L_0, NULL);
		return L_1;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::set_Item(System.String,SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator_set_Item_m0107997E3B3CB75FACD86FB487C5D9416171CBEC (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* __this, String_t* ___aKey0, JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118* V_0 = NULL;
	{
		// var tmp = new JSONObject();
		JSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118* L_0 = (JSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118*)il2cpp_codegen_object_new(JSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JSONObject__ctor_m8007967452F5257DC9F5DF2B78B411BFD4B6D6AB(L_0, NULL);
		V_0 = L_0;
		// tmp.Add(aKey, value);
		JSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118* L_1 = V_0;
		String_t* L_2 = ___aKey0;
		JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_3 = ___value1;
		NullCheck(L_1);
		VirtualActionInvoker2< String_t*, JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* >::Invoke(20 /* System.Void SimpleJSON.JSONNode::Add(System.String,SimpleJSON.JSONNode) */, L_1, L_2, L_3);
		// Set(tmp);
		JSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118* L_4 = V_0;
		JSONLazyCreator_Set_mEF6EB64379EBE960F050C24D45EDCA4B6D404958(__this, L_4, NULL);
		// }
		return;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::Add(SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator_Add_mA8451EE34FEA0205B6BD6527AB46E5926451F49F (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* __this, JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* ___aItem0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2* V_0 = NULL;
	{
		// var tmp = new JSONArray();
		JSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2* L_0 = (JSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2*)il2cpp_codegen_object_new(JSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JSONArray__ctor_m92FFF2DC8E1425398814F50D4B253EB459B8477F(L_0, NULL);
		V_0 = L_0;
		// tmp.Add(aItem);
		JSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2* L_1 = V_0;
		JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_2 = ___aItem0;
		NullCheck(L_1);
		VirtualActionInvoker1< JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* >::Invoke(21 /* System.Void SimpleJSON.JSONNode::Add(SimpleJSON.JSONNode) */, L_1, L_2);
		// Set(tmp);
		JSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2* L_3 = V_0;
		JSONLazyCreator_Set_mEF6EB64379EBE960F050C24D45EDCA4B6D404958(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::Add(System.String,SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator_Add_mDC69A4E203B73054072D1575EC4CF20D95064F61 (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* __this, String_t* ___aKey0, JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* ___aItem1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118* V_0 = NULL;
	{
		// var tmp = new JSONObject();
		JSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118* L_0 = (JSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118*)il2cpp_codegen_object_new(JSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JSONObject__ctor_m8007967452F5257DC9F5DF2B78B411BFD4B6D6AB(L_0, NULL);
		V_0 = L_0;
		// tmp.Add(aKey, aItem);
		JSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118* L_1 = V_0;
		String_t* L_2 = ___aKey0;
		JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_3 = ___aItem1;
		NullCheck(L_1);
		VirtualActionInvoker2< String_t*, JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* >::Invoke(20 /* System.Void SimpleJSON.JSONNode::Add(System.String,SimpleJSON.JSONNode) */, L_1, L_2, L_3);
		// Set(tmp);
		JSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118* L_4 = V_0;
		JSONLazyCreator_Set_mEF6EB64379EBE960F050C24D45EDCA4B6D404958(__this, L_4, NULL);
		// }
		return;
	}
}
// System.Boolean SimpleJSON.JSONLazyCreator::op_Equality(SimpleJSON.JSONLazyCreator,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONLazyCreator_op_Equality_m7C4199B28912BE4C1AE6009F94C6FE07776923C5 (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* ___a0, RuntimeObject* ___b1, const RuntimeMethod* method) 
{
	{
		// if (b == null)
		RuntimeObject* L_0 = ___b1;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0005:
	{
		// return System.Object.ReferenceEquals(a, b);
		JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* L_1 = ___a0;
		RuntimeObject* L_2 = ___b1;
		return (bool)((((RuntimeObject*)(JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C*)L_1) == ((RuntimeObject*)(RuntimeObject*)L_2))? 1 : 0);
	}
}
// System.Boolean SimpleJSON.JSONLazyCreator::op_Inequality(SimpleJSON.JSONLazyCreator,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONLazyCreator_op_Inequality_m8E4E9C09E420FE4E5A0AB54B63CFAEF2244B5F3B (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* ___a0, RuntimeObject* ___b1, const RuntimeMethod* method) 
{
	{
		// return !(a == b);
		JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* L_0 = ___a0;
		RuntimeObject* L_1 = ___b1;
		bool L_2;
		L_2 = JSONLazyCreator_op_Equality_m7C4199B28912BE4C1AE6009F94C6FE07776923C5(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean SimpleJSON.JSONLazyCreator::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONLazyCreator_Equals_m753939907CFDB1548B0DAAB38E4737EF17B50066 (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	{
		// if (obj == null)
		RuntimeObject* L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0005:
	{
		// return System.Object.ReferenceEquals(this, obj);
		RuntimeObject* L_1 = ___obj0;
		return (bool)((((RuntimeObject*)(JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C*)__this) == ((RuntimeObject*)(RuntimeObject*)L_1))? 1 : 0);
	}
}
// System.Int32 SimpleJSON.JSONLazyCreator::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONLazyCreator_GetHashCode_m878E7AFF42AE5C43F4F643B6AEB25662491316F9 (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* __this, const RuntimeMethod* method) 
{
	{
		// return 0;
		return 0;
	}
}
// System.Int32 SimpleJSON.JSONLazyCreator::get_AsInt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONLazyCreator_get_AsInt_mE1404FBC99CE4E8EF4ABBE0BDF661206BAC2C44D (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* V_0 = NULL;
	{
		// JSONNumber tmp = new JSONNumber(0);
		JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* L_0 = (JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA*)il2cpp_codegen_object_new(JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JSONNumber__ctor_m1CE3527102D15EBC3A183E3519895E291CAC1D90(L_0, (0.0), NULL);
		V_0 = L_0;
		// Set(tmp);
		JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* L_1 = V_0;
		JSONLazyCreator_Set_mEF6EB64379EBE960F050C24D45EDCA4B6D404958(__this, L_1, NULL);
		// return 0;
		return 0;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::set_AsInt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator_set_AsInt_m13146E53FD6A2F7573B752BFF079E0AF6A5FAE74 (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* V_0 = NULL;
	{
		// JSONNumber tmp = new JSONNumber(value);
		int32_t L_0 = ___value0;
		JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* L_1 = (JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA*)il2cpp_codegen_object_new(JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		JSONNumber__ctor_m1CE3527102D15EBC3A183E3519895E291CAC1D90(L_1, ((double)L_0), NULL);
		V_0 = L_1;
		// Set(tmp);
		JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* L_2 = V_0;
		JSONLazyCreator_Set_mEF6EB64379EBE960F050C24D45EDCA4B6D404958(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Single SimpleJSON.JSONLazyCreator::get_AsFloat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float JSONLazyCreator_get_AsFloat_m2600D4B0E1179583EFE268070C66EAC11D380E04 (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* V_0 = NULL;
	{
		// JSONNumber tmp = new JSONNumber(0.0f);
		JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* L_0 = (JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA*)il2cpp_codegen_object_new(JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JSONNumber__ctor_m1CE3527102D15EBC3A183E3519895E291CAC1D90(L_0, (0.0), NULL);
		V_0 = L_0;
		// Set(tmp);
		JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* L_1 = V_0;
		JSONLazyCreator_Set_mEF6EB64379EBE960F050C24D45EDCA4B6D404958(__this, L_1, NULL);
		// return 0.0f;
		return (0.0f);
	}
}
// System.Void SimpleJSON.JSONLazyCreator::set_AsFloat(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator_set_AsFloat_m9DCF79C70D4ED3728C12B709A6D95A0F0A057DE0 (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* V_0 = NULL;
	{
		// JSONNumber tmp = new JSONNumber(value);
		float L_0 = ___value0;
		JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* L_1 = (JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA*)il2cpp_codegen_object_new(JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		JSONNumber__ctor_m1CE3527102D15EBC3A183E3519895E291CAC1D90(L_1, ((double)L_0), NULL);
		V_0 = L_1;
		// Set(tmp);
		JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* L_2 = V_0;
		JSONLazyCreator_Set_mEF6EB64379EBE960F050C24D45EDCA4B6D404958(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Double SimpleJSON.JSONLazyCreator::get_AsDouble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double JSONLazyCreator_get_AsDouble_m41D6DF89CD7CEC00F36962068EE072D391EC0B38 (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* V_0 = NULL;
	{
		// JSONNumber tmp = new JSONNumber(0.0);
		JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* L_0 = (JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA*)il2cpp_codegen_object_new(JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JSONNumber__ctor_m1CE3527102D15EBC3A183E3519895E291CAC1D90(L_0, (0.0), NULL);
		V_0 = L_0;
		// Set(tmp);
		JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* L_1 = V_0;
		JSONLazyCreator_Set_mEF6EB64379EBE960F050C24D45EDCA4B6D404958(__this, L_1, NULL);
		// return 0.0;
		return (0.0);
	}
}
// System.Void SimpleJSON.JSONLazyCreator::set_AsDouble(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator_set_AsDouble_mB7ABE38136DBEDA7CC9AC12A381322D6C49ADED9 (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* __this, double ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* V_0 = NULL;
	{
		// JSONNumber tmp = new JSONNumber(value);
		double L_0 = ___value0;
		JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* L_1 = (JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA*)il2cpp_codegen_object_new(JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		JSONNumber__ctor_m1CE3527102D15EBC3A183E3519895E291CAC1D90(L_1, L_0, NULL);
		V_0 = L_1;
		// Set(tmp);
		JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* L_2 = V_0;
		JSONLazyCreator_Set_mEF6EB64379EBE960F050C24D45EDCA4B6D404958(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Int64 SimpleJSON.JSONLazyCreator::get_AsLong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t JSONLazyCreator_get_AsLong_mFBA0000985629FA20509FA45A6A8B751C9CAC2B8 (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (longAsString)
		bool L_0 = ((JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653_StaticFields*)il2cpp_codegen_static_fields_for(JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653_il2cpp_TypeInfo_var))->___longAsString_1;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// Set(new JSONString("0"));
		JSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4* L_1 = (JSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4*)il2cpp_codegen_object_new(JSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		JSONString__ctor_m1DD5FB9A4147F72A0ED5F773FF82FA269241AD19(L_1, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, NULL);
		JSONLazyCreator_Set_mEF6EB64379EBE960F050C24D45EDCA4B6D404958(__this, L_1, NULL);
		goto IL_002d;
	}

IL_0019:
	{
		// Set(new JSONNumber(0.0));
		JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* L_2 = (JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA*)il2cpp_codegen_object_new(JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		JSONNumber__ctor_m1CE3527102D15EBC3A183E3519895E291CAC1D90(L_2, (0.0), NULL);
		JSONLazyCreator_Set_mEF6EB64379EBE960F050C24D45EDCA4B6D404958(__this, L_2, NULL);
	}

IL_002d:
	{
		// return 0L;
		return ((int64_t)0);
	}
}
// System.Void SimpleJSON.JSONLazyCreator::set_AsLong(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator_set_AsLong_mBD4640D2F347DEF793A631A44026A03D3D5D73A4 (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (longAsString)
		bool L_0 = ((JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653_StaticFields*)il2cpp_codegen_static_fields_for(JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653_il2cpp_TypeInfo_var))->___longAsString_1;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		// Set(new JSONString(value.ToString()));
		String_t* L_1;
		L_1 = Int64_ToString_m284E4E55662818E38654309A41C2B07CD436F36B((&___value0), NULL);
		JSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4* L_2 = (JSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4*)il2cpp_codegen_object_new(JSONString_t348EE0B9A82469687311C579D9F88B5D8A4644A4_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		JSONString__ctor_m1DD5FB9A4147F72A0ED5F773FF82FA269241AD19(L_2, L_1, NULL);
		JSONLazyCreator_Set_mEF6EB64379EBE960F050C24D45EDCA4B6D404958(__this, L_2, NULL);
		return;
	}

IL_001a:
	{
		// Set(new JSONNumber(value));
		int64_t L_3 = ___value0;
		JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA* L_4 = (JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA*)il2cpp_codegen_object_new(JSONNumber_tD23F8AD32E46F8410025D66A339D34E105A516EA_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		JSONNumber__ctor_m1CE3527102D15EBC3A183E3519895E291CAC1D90(L_4, ((double)L_3), NULL);
		JSONLazyCreator_Set_mEF6EB64379EBE960F050C24D45EDCA4B6D404958(__this, L_4, NULL);
		// }
		return;
	}
}
// System.Boolean SimpleJSON.JSONLazyCreator::get_AsBool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONLazyCreator_get_AsBool_m7D8AF5879C2C8036916AA6B15E22CB4B80412CF4 (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONBool_tD0B1D526BA8A27DAB4559E54BBDFB94FA1A8B1D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONBool_tD0B1D526BA8A27DAB4559E54BBDFB94FA1A8B1D9* V_0 = NULL;
	{
		// JSONBool tmp = new JSONBool(false);
		JSONBool_tD0B1D526BA8A27DAB4559E54BBDFB94FA1A8B1D9* L_0 = (JSONBool_tD0B1D526BA8A27DAB4559E54BBDFB94FA1A8B1D9*)il2cpp_codegen_object_new(JSONBool_tD0B1D526BA8A27DAB4559E54BBDFB94FA1A8B1D9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JSONBool__ctor_mBB02E388CFB96B99E84561FCFF68147F00391C58(L_0, (bool)0, NULL);
		V_0 = L_0;
		// Set(tmp);
		JSONBool_tD0B1D526BA8A27DAB4559E54BBDFB94FA1A8B1D9* L_1 = V_0;
		JSONLazyCreator_Set_mEF6EB64379EBE960F050C24D45EDCA4B6D404958(__this, L_1, NULL);
		// return false;
		return (bool)0;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::set_AsBool(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator_set_AsBool_m4DB409DB959182CAA610147A51A2ECDBAFEA6092 (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONBool_tD0B1D526BA8A27DAB4559E54BBDFB94FA1A8B1D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONBool_tD0B1D526BA8A27DAB4559E54BBDFB94FA1A8B1D9* V_0 = NULL;
	{
		// JSONBool tmp = new JSONBool(value);
		bool L_0 = ___value0;
		JSONBool_tD0B1D526BA8A27DAB4559E54BBDFB94FA1A8B1D9* L_1 = (JSONBool_tD0B1D526BA8A27DAB4559E54BBDFB94FA1A8B1D9*)il2cpp_codegen_object_new(JSONBool_tD0B1D526BA8A27DAB4559E54BBDFB94FA1A8B1D9_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		JSONBool__ctor_mBB02E388CFB96B99E84561FCFF68147F00391C58(L_1, L_0, NULL);
		V_0 = L_1;
		// Set(tmp);
		JSONBool_tD0B1D526BA8A27DAB4559E54BBDFB94FA1A8B1D9* L_2 = V_0;
		JSONLazyCreator_Set_mEF6EB64379EBE960F050C24D45EDCA4B6D404958(__this, L_2, NULL);
		// }
		return;
	}
}
// SimpleJSON.JSONArray SimpleJSON.JSONLazyCreator::get_AsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2* JSONLazyCreator_get_AsArray_m493C069A3624597885A7B6E00C82E829A84B47C4 (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2* V_0 = NULL;
	{
		// JSONArray tmp = new JSONArray();
		JSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2* L_0 = (JSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2*)il2cpp_codegen_object_new(JSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JSONArray__ctor_m92FFF2DC8E1425398814F50D4B253EB459B8477F(L_0, NULL);
		V_0 = L_0;
		// Set(tmp);
		JSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2* L_1 = V_0;
		JSONLazyCreator_Set_mEF6EB64379EBE960F050C24D45EDCA4B6D404958(__this, L_1, NULL);
		// return tmp;
		JSONArray_t05249F608221D2720A34EF792297DB686FE9A7D2* L_2 = V_0;
		return L_2;
	}
}
// SimpleJSON.JSONObject SimpleJSON.JSONLazyCreator::get_AsObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118* JSONLazyCreator_get_AsObject_mE01B43B261A6A56F4FCE40AB11F3AAF90B7C292D (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118* V_0 = NULL;
	{
		// JSONObject tmp = new JSONObject();
		JSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118* L_0 = (JSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118*)il2cpp_codegen_object_new(JSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JSONObject__ctor_m8007967452F5257DC9F5DF2B78B411BFD4B6D6AB(L_0, NULL);
		V_0 = L_0;
		// Set(tmp);
		JSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118* L_1 = V_0;
		JSONLazyCreator_Set_mEF6EB64379EBE960F050C24D45EDCA4B6D404958(__this, L_1, NULL);
		// return tmp;
		JSONObject_t3B88F8FCE5CCDEAA8C7F2834A851F40E8508B118* L_2 = V_0;
		return L_2;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::WriteToStringBuilder(System.Text.StringBuilder,System.Int32,System.Int32,SimpleJSON.JSONTextMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator_WriteToStringBuilder_mC9975859B1C42C9F5E507E604121D10B2FB2D93D (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* __this, StringBuilder_t* ___aSB0, int32_t ___aIndent1, int32_t ___aIndentInc2, int32_t ___aMode3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		s_Il2CppMethodInitialized = true;
	}
	{
		// aSB.Append("null");
		StringBuilder_t* L_0 = ___aSB0;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_0, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, NULL);
		// }
		return;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::SerializeBinary(System.IO.BinaryWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator_SerializeBinary_m46EC80C4622EAC174B1729946A5F6EBB73F36A3B (JSONLazyCreator_tDE06520D8A050030BC0C24F5C360FA69E8C5C40C* __this, BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___aWriter0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// SimpleJSON.JSONNode SimpleJSON.JSON::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* JSON_Parse_m9E6F3A67011C765E4352E350D1F400C9A52DC5F6 (String_t* ___aJSON0, const RuntimeMethod* method) 
{
	{
		// return JSONNode.Parse(aJSON);
		String_t* L_0 = ___aJSON0;
		JSONNode_tDBF6A862594425AD5621BB6756DF7BBD6CDC7653* L_1;
		L_1 = JSONNode_Parse_m51FFFB4953A8D875B9D2DD5E032D131A149956E0(L_0, NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D (String_t* ___s0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___s0;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___s0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)((int32_t)L_3^(int32_t)L_4)), ((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___s0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_000d;
		}
	}

IL_002a:
	{
		uint32_t L_9 = V_0;
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueEnumerator__ctor_m7BA4BAD5FEBAC4054F71575B728DC27EC4080F0A_inline (ValueEnumerator_tD3C6F06F8E91A96073FAEE3822232DFF6AC63FB6* __this, Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4 ___aEnumerator0, const RuntimeMethod* method) 
{
	{
		// public ValueEnumerator(Enumerator aEnumerator) { m_Enumerator = aEnumerator; }
		Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4 L_0 = ___aEnumerator0;
		__this->___m_Enumerator_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___m_Enumerator_0))->___m_Object_1))->____dictionary_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___m_Enumerator_0))->___m_Object_1))->____current_3))->___key_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___m_Enumerator_0))->___m_Object_1))->____current_3))->___value_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___m_Enumerator_0))->___m_Array_2))->____list_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___m_Enumerator_0))->___m_Array_2))->____current_3), (void*)NULL);
		#endif
		// public ValueEnumerator(Enumerator aEnumerator) { m_Enumerator = aEnumerator; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyEnumerator__ctor_m526EA1364C367B83C931F4208CDD816BD02810EA_inline (KeyEnumerator_t927DD8FD7C7D67CBE611D33C16AF70CDF793CDCF* __this, Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4 ___aEnumerator0, const RuntimeMethod* method) 
{
	{
		// public KeyEnumerator(Enumerator aEnumerator) { m_Enumerator = aEnumerator; }
		Enumerator_tD165A87A3BB8D61233033AB43D7537E59F877AB4 L_0 = ___aEnumerator0;
		__this->___m_Enumerator_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___m_Enumerator_0))->___m_Object_1))->____dictionary_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___m_Enumerator_0))->___m_Object_1))->____current_3))->___key_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___m_Enumerator_0))->___m_Object_1))->____current_3))->___value_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___m_Enumerator_0))->___m_Array_2))->____list_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___m_Enumerator_0))->___m_Array_2))->____current_3), (void*)NULL);
		#endif
		// public KeyEnumerator(Enumerator aEnumerator) { m_Enumerator = aEnumerator; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline (double* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	{
		double L_0 = *((double*)__this);
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int64_t L_1;
		L_1 = BitConverter_DoubleToInt64Bits_m45D911F884F3B09BF39C02044EDC9BDA8084C80B_inline(L_0, NULL);
		V_0 = L_1;
		int64_t L_2 = V_0;
		if ((((int64_t)((int64_t)(((int64_t)il2cpp_codegen_subtract(L_2, ((int64_t)1)))&((int64_t)(std::numeric_limits<int64_t>::max)())))) < ((int64_t)((int64_t)9218868437227405312LL))))
		{
			goto IL_002d;
		}
	}
	{
		int64_t L_3 = V_0;
		V_0 = ((int64_t)(L_3&((int64_t)9218868437227405312LL)));
	}

IL_002d:
	{
		int64_t L_4 = V_0;
		int64_t L_5 = V_0;
		return ((int32_t)(((int32_t)L_4)^((int32_t)((int64_t)(L_5>>((int32_t)32))))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_0 = (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mD6472FA27D28B9AE64A0FEF796C72ABBC2420EBF_gshared_inline (Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____currentKey_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BitConverter_DoubleToInt64Bits_m45D911F884F3B09BF39C02044EDC9BDA8084C80B_inline (double ___value0, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = *((int64_t*)((uintptr_t)(&___value0)));
		return L_0;
	}
}
