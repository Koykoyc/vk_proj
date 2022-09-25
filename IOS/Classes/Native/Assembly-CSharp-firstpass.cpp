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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
struct Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC;
// System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>
struct Dictionary_2_tAFDD9B13B8A8D35E8017B1AD49EE8DCF947CD740;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>
struct Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>,System.Boolean>
struct Func_2_t0590A4A7DD386E29A0B0552177EEED331B7D69C1;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerable_1_t22A35158F9E40077A7147A082319C0D1DFFBE2FD;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>>
struct IEnumerable_1_t185EE408EF94E71343B9EB02DF04A71E4FCB327E;
// System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode>
struct IEnumerable_1_t2D73195D0BB02AACCD1E3786DCDD9F02D85D69BA;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>>
struct IEnumerator_1_t2E9BD7A2E60825B81C3E90DD6FCC201122425934;
// System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode>
struct IEnumerator_1_t993408F1AF277FE5DE07EC55F5921D620CF1B2ED;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,SimpleJSON.JSONNode>
struct KeyCollection_t8700DC3F9E82109D163F59A6D1B89BCB3F1F6D00;
// System.Collections.Generic.List`1<SimpleJSON.JSONNode>
struct List_1_t5575902E70199AF34CD1695997CE7E53A1509646;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.Stack`1<SimpleJSON.JSONNode>
struct Stack_1_t49EAD5E51500DDF3F8D6C96A7AD0A78A1F3E87A0;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,SimpleJSON.JSONNode>
struct ValueCollection_t1D735AA30CB35D8AD2B54A0D1366A7AC71506B32;
// System.Collections.Generic.Dictionary`2/Entry<System.String,SimpleJSON.JSONNode>[]
struct EntryU5BU5D_tA724ABAD9C8E10D60EA4F1A0A39A3D3DF779AD40;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// SimpleJSON.JSONNode[]
struct JSONNodeU5BU5D_t7DBC393D725402F1773E764E32F3366F568CCD33;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// System.Globalization.Calendar
struct Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A;
// System.Globalization.CompareInfo
struct CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9;
// System.Globalization.CultureData
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Exception
struct Exception_t;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// SimpleJSON.JSONArray
struct JSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E;
// SimpleJSON.JSONBool
struct JSONBool_t9FF67B765B247F2AD7F1614032A0A0EA3497EC62;
// SimpleJSON.JSONLazyCreator
struct JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6;
// SimpleJSON.JSONNode
struct JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043;
// SimpleJSON.JSONNull
struct JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47;
// SimpleJSON.JSONNumber
struct JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5;
// SimpleJSON.JSONObject
struct JSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1;
// SimpleJSON.JSONString
struct JSONString_tDC7D689F0DBDAC1FC0399D63CA27C8FEB266EFAF;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Globalization.TextInfo
struct TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// SimpleJSON.JSONArray/<get_Children>d__24
struct U3Cget_ChildrenU3Ed__24_t0B4B41955B2D2AF5198DD9E35A1F9B8F7DA975FD;
// SimpleJSON.JSONNode/<get_Children>d__43
struct U3Cget_ChildrenU3Ed__43_t676D15A68B9E4445BE9089BCD930635F8DC59D80;
// SimpleJSON.JSONNode/<get_DeepChildren>d__45
struct U3Cget_DeepChildrenU3Ed__45_tCD907C30A1B957DFC6A9DC8CFCC199DD51C378FA;
// SimpleJSON.JSONNode/Enumerator
struct Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8;
// SimpleJSON.JSONNode/LinqEnumerator
struct LinqEnumerator_t45B8943C727186418953AAB476E680E60C03D038;
// SimpleJSON.JSONObject/<>c__DisplayClass21_0
struct U3CU3Ec__DisplayClass21_0_t5F3C45E238AB19808012EFB4181E62F4DCED84CC;
// SimpleJSON.JSONObject/<get_Children>d__27
struct U3Cget_ChildrenU3Ed__27_tBAFD832B8A29905C1FDBEF21DACF57DF3850E73E;

IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tAFDD9B13B8A8D35E8017B1AD49EE8DCF947CD740_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t0590A4A7DD386E29A0B0552177EEED331B7D69C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t2D73195D0BB02AACCD1E3786DCDD9F02D85D69BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t993408F1AF277FE5DE07EC55F5921D620CF1B2ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JSONBool_t9FF67B765B247F2AD7F1614032A0A0EA3497EC62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JSONString_tDC7D689F0DBDAC1FC0399D63CA27C8FEB266EFAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LinqEnumerator_t45B8943C727186418953AAB476E680E60C03D038_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t5575902E70199AF34CD1695997CE7E53A1509646_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stack_1_t49EAD5E51500DDF3F8D6C96A7AD0A78A1F3E87A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass21_0_t5F3C45E238AB19808012EFB4181E62F4DCED84CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Cget_ChildrenU3Ed__24_t0B4B41955B2D2AF5198DD9E35A1F9B8F7DA975FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Cget_ChildrenU3Ed__27_tBAFD832B8A29905C1FDBEF21DACF57DF3850E73E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Cget_ChildrenU3Ed__43_t676D15A68B9E4445BE9089BCD930635F8DC59D80_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Cget_DeepChildrenU3Ed__45_tCD907C30A1B957DFC6A9DC8CFCC199DD51C378FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0767326DBE1DD31063256737FD019DC6682353E2;
IL2CPP_EXTERN_C String_t* _stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
IL2CPP_EXTERN_C String_t* _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51;
IL2CPP_EXTERN_C String_t* _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462;
IL2CPP_EXTERN_C String_t* _stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD;
IL2CPP_EXTERN_C String_t* _stringLiteral870C43A28360ADF668EFBACF63A4553351C7FA4C;
IL2CPP_EXTERN_C String_t* _stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122;
IL2CPP_EXTERN_C String_t* _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
IL2CPP_EXTERN_C String_t* _stringLiteralBF00FC1AEA59DE3445148D940526441AD4E1FFA7;
IL2CPP_EXTERN_C String_t* _stringLiteralD68508B50CDE1B2E777400476044304CB8149311;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699;
IL2CPP_EXTERN_C String_t* _stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE;
IL2CPP_EXTERN_C String_t* _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m9C14F88CD2235159DA9FFAAC62C6F7AD4E7E74BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m4C1946103ABDF133A308278B6819199E0D1EE22F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mF07D404CDE09597A5210DE02BCE5EE90CEAB475C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_mDCF3F7F20F872ADC03A74F11C55EB2B702EF2441_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m7BAD52D08C79633F1EF068E34DDF27F87F91316B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m6E16D0D059D86A3676475D36BD7A8C07FC99A629_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m6105C1DC5F16DE35DE5DD8D35763D4C01F0F91ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m47132E509248623F0403F4226E25E62D482284D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mEAC6AA9D4E6BD2EC57809A9EF2E518F581F021DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m06FAF0E96CC7771A89ED9A9DE592B8B166E228C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ElementAt_TisKeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46_m0B0DB4F927A044580DE56D31595028F8B15C38DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_First_TisKeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46_mEAEB4906A04BD2286F641D9D952C701B89087E9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisKeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46_mB4671BA5C74527947CCD670926BA049318F638F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m69943D9522B275330B702DE01A3289247FFFE383_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m7F31F9216A506EB82FA3E6EA1DA9C1E11DB81A3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m2F43C4805222C8A5C8027DC246081895540A7D17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m425A5F4589B9E03CCCCA6245AF5F20FDADC90FAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m8D5B4B174FCF301C8B25C69BC26D7DF5BCAFFE72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mA04D9F0633F9986798A90E49F1AF69EBAE9466DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mFC68D1988FD14FF974070B18474265493B4EE19B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JSONLazyCreator_Set_TisJSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E_mEBFCA8B610CC87E43748AA7BEF6B1C7038ED5120_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JSONLazyCreator_Set_TisJSONBool_t9FF67B765B247F2AD7F1614032A0A0EA3497EC62_m1FAD42F2E9ABBE9BD9EBEE524DBE64636B5B529B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JSONLazyCreator_Set_TisJSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5_m3E439FB072EF02F7F17A747A17F6B88F6DC87AA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JSONLazyCreator_Set_TisJSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1_m178DE9CFE882DCD5FCAE94006986BAB9FA2D5687_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JSONLazyCreator_Set_TisJSONString_tDC7D689F0DBDAC1FC0399D63CA27C8FEB266EFAF_m787C35A46053690A83D5CAB35951742C6439E395_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JSONNode_Parse_m69AEF21E17F84854BF203846254C8B943E9FEF21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2__ctor_mCCC7B7D252423D44D5C462671EF92285311CD04D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mD3950240DC492EBEB494BE0AEF2CB4223CFBA08D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mD27150EA5031B873539FD3D826C77219F3FFE044_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m438AD4912996174DEF92B8BFCAE67FEA62FC30AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mBA95256993BEDEE342648F4D18F563AFE53226F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m04D3744D5A2851C740631E66DC681938D0C3381B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_mEBF7FDF448806C118A40503C7C14AE24AE7CE194_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m76A37D3FDBD763730D205C826472852994A48997_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0D19ABAE80A85141D13415BC990D6195B7660284_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Capacity_m37D0396B7127B7DC8ABF2FD65D97E35312528266_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4C4DE135CD00FF88D00A978F68019097CA375E1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mFC2B27BFC88F482BA024BBE4896041DB9ABCC979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Capacity_mC753EC0F1AA3F25EF4207682DC4192DB6EC6EB13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m4A3219187EB2E715BEBB958BD529044CC1FB89D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Peek_m29E66649B5F2FD64F2C6838AD05AEF7DF7521B5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_mBA20C63F5B09D8617F58E73C88D6BB8ECD97ECB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_m1E86B0066F1B1B437493EF892300488D36FF18D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1__ctor_mF4CDE42219FEEE8D7E0FA47CB1BB69A526F72D9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_get_Count_m35DDA92DEDAD74B4E432CBD3C997F1E78473AAC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass21_0_U3CRemoveU3Eb__0_m32C80D793500A7AD9747C4B9BEF7E5902322DC8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cget_ChildrenU3Ed__24_System_Collections_IEnumerator_Reset_mFA33F402F7E5AA0EC8BB8F2BA1AD8A0B2A62DF30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cget_ChildrenU3Ed__27_System_Collections_IEnumerator_Reset_m83797D1841A982D0DF67F7E0CE31FCA5429867C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cget_ChildrenU3Ed__43_System_Collections_IEnumerator_Reset_m9E0B574824935D851FE2340C5C5A1FBAD9C1250E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cget_DeepChildrenU3Ed__45_System_Collections_IEnumerator_Reset_m0E9AC40CF8C756223AF77AF992D4C43C270B653D_RuntimeMethod_var;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8;;
struct Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8_marshaled_com;
struct Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8_marshaled_com;;
struct Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8_marshaled_pinvoke;
struct Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8_marshaled_pinvoke;;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t00DDB26693B7BCCD40544DBD546A67E6CCF39740 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>
struct Dictionary_2_tAFDD9B13B8A8D35E8017B1AD49EE8DCF947CD740  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tA724ABAD9C8E10D60EA4F1A0A39A3D3DF779AD40* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t8700DC3F9E82109D163F59A6D1B89BCB3F1F6D00 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t1D735AA30CB35D8AD2B54A0D1366A7AC71506B32 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tAFDD9B13B8A8D35E8017B1AD49EE8DCF947CD740, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tAFDD9B13B8A8D35E8017B1AD49EE8DCF947CD740, ___entries_1)); }
	inline EntryU5BU5D_tA724ABAD9C8E10D60EA4F1A0A39A3D3DF779AD40* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tA724ABAD9C8E10D60EA4F1A0A39A3D3DF779AD40** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tA724ABAD9C8E10D60EA4F1A0A39A3D3DF779AD40* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tAFDD9B13B8A8D35E8017B1AD49EE8DCF947CD740, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tAFDD9B13B8A8D35E8017B1AD49EE8DCF947CD740, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tAFDD9B13B8A8D35E8017B1AD49EE8DCF947CD740, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tAFDD9B13B8A8D35E8017B1AD49EE8DCF947CD740, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tAFDD9B13B8A8D35E8017B1AD49EE8DCF947CD740, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tAFDD9B13B8A8D35E8017B1AD49EE8DCF947CD740, ___keys_7)); }
	inline KeyCollection_t8700DC3F9E82109D163F59A6D1B89BCB3F1F6D00 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t8700DC3F9E82109D163F59A6D1B89BCB3F1F6D00 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t8700DC3F9E82109D163F59A6D1B89BCB3F1F6D00 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tAFDD9B13B8A8D35E8017B1AD49EE8DCF947CD740, ___values_8)); }
	inline ValueCollection_t1D735AA30CB35D8AD2B54A0D1366A7AC71506B32 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t1D735AA30CB35D8AD2B54A0D1366A7AC71506B32 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t1D735AA30CB35D8AD2B54A0D1366A7AC71506B32 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tAFDD9B13B8A8D35E8017B1AD49EE8DCF947CD740, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<SimpleJSON.JSONNode>
struct List_1_t5575902E70199AF34CD1695997CE7E53A1509646  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	JSONNodeU5BU5D_t7DBC393D725402F1773E764E32F3366F568CCD33* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t5575902E70199AF34CD1695997CE7E53A1509646, ____items_1)); }
	inline JSONNodeU5BU5D_t7DBC393D725402F1773E764E32F3366F568CCD33* get__items_1() const { return ____items_1; }
	inline JSONNodeU5BU5D_t7DBC393D725402F1773E764E32F3366F568CCD33** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(JSONNodeU5BU5D_t7DBC393D725402F1773E764E32F3366F568CCD33* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t5575902E70199AF34CD1695997CE7E53A1509646, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t5575902E70199AF34CD1695997CE7E53A1509646, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t5575902E70199AF34CD1695997CE7E53A1509646, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t5575902E70199AF34CD1695997CE7E53A1509646_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	JSONNodeU5BU5D_t7DBC393D725402F1773E764E32F3366F568CCD33* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t5575902E70199AF34CD1695997CE7E53A1509646_StaticFields, ____emptyArray_5)); }
	inline JSONNodeU5BU5D_t7DBC393D725402F1773E764E32F3366F568CCD33* get__emptyArray_5() const { return ____emptyArray_5; }
	inline JSONNodeU5BU5D_t7DBC393D725402F1773E764E32F3366F568CCD33** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(JSONNodeU5BU5D_t7DBC393D725402F1773E764E32F3366F568CCD33* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.Stack`1<SimpleJSON.JSONNode>
struct Stack_1_t49EAD5E51500DDF3F8D6C96A7AD0A78A1F3E87A0  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	JSONNodeU5BU5D_t7DBC393D725402F1773E764E32F3366F568CCD33* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_t49EAD5E51500DDF3F8D6C96A7AD0A78A1F3E87A0, ____array_0)); }
	inline JSONNodeU5BU5D_t7DBC393D725402F1773E764E32F3366F568CCD33* get__array_0() const { return ____array_0; }
	inline JSONNodeU5BU5D_t7DBC393D725402F1773E764E32F3366F568CCD33** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(JSONNodeU5BU5D_t7DBC393D725402F1773E764E32F3366F568CCD33* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_t49EAD5E51500DDF3F8D6C96A7AD0A78A1F3E87A0, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_t49EAD5E51500DDF3F8D6C96A7AD0A78A1F3E87A0, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(Stack_1_t49EAD5E51500DDF3F8D6C96A7AD0A78A1F3E87A0, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}
};


// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981, ____array_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98  : public RuntimeObject
{
public:
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
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
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
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___numInfo_10)); }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numInfo_10), (void*)value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateTimeInfo_11), (void*)value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textInfo_12)); }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_13), (void*)value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___englishname_14), (void*)value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativename_15), (void*)value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso3lang_16), (void*)value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso2lang_17), (void*)value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___win3lang_18), (void*)value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___territory_19), (void*)value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___native_calendar_names_20)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_calendar_names_20), (void*)value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___compareInfo_21)); }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compareInfo_21), (void*)value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___calendar_24)); }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calendar_24), (void*)value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_culture_25)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_culture_25), (void*)value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cached_serialized_form_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_cultureData_28)); }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureData_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariant_culture_info_0), (void*)value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_table_lock_1), (void*)value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_current_culture_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentUICulture_33), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentCulture_34), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_number_35), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_name_36), (void*)value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// SimpleJSON.JSON
struct JSON_tE3739E6B5418F9362CE6D0974A84AE84CCE6EFA2  : public RuntimeObject
{
public:

public:
};


// SimpleJSON.JSONNode
struct JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043  : public RuntimeObject
{
public:

public:
};

struct JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_StaticFields
{
public:
	// System.Boolean SimpleJSON.JSONNode::forceASCII
	bool ___forceASCII_0;
	// System.Boolean SimpleJSON.JSONNode::longAsString
	bool ___longAsString_1;
	// System.Boolean SimpleJSON.JSONNode::allowLineComments
	bool ___allowLineComments_2;

public:
	inline static int32_t get_offset_of_forceASCII_0() { return static_cast<int32_t>(offsetof(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_StaticFields, ___forceASCII_0)); }
	inline bool get_forceASCII_0() const { return ___forceASCII_0; }
	inline bool* get_address_of_forceASCII_0() { return &___forceASCII_0; }
	inline void set_forceASCII_0(bool value)
	{
		___forceASCII_0 = value;
	}

	inline static int32_t get_offset_of_longAsString_1() { return static_cast<int32_t>(offsetof(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_StaticFields, ___longAsString_1)); }
	inline bool get_longAsString_1() const { return ___longAsString_1; }
	inline bool* get_address_of_longAsString_1() { return &___longAsString_1; }
	inline void set_longAsString_1(bool value)
	{
		___longAsString_1 = value;
	}

	inline static int32_t get_offset_of_allowLineComments_2() { return static_cast<int32_t>(offsetof(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_StaticFields, ___allowLineComments_2)); }
	inline bool get_allowLineComments_2() const { return ___allowLineComments_2; }
	inline bool* get_address_of_allowLineComments_2() { return &___allowLineComments_2; }
	inline void set_allowLineComments_2(bool value)
	{
		___allowLineComments_2 = value;
	}
};

struct JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_ThreadStaticFields
{
public:
	// System.Text.StringBuilder SimpleJSON.JSONNode::m_EscapeBuilder
	StringBuilder_t * ___m_EscapeBuilder_3;

public:
	inline static int32_t get_offset_of_m_EscapeBuilder_3() { return static_cast<int32_t>(offsetof(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_ThreadStaticFields, ___m_EscapeBuilder_3)); }
	inline StringBuilder_t * get_m_EscapeBuilder_3() const { return ___m_EscapeBuilder_3; }
	inline StringBuilder_t ** get_address_of_m_EscapeBuilder_3() { return &___m_EscapeBuilder_3; }
	inline void set_m_EscapeBuilder_3(StringBuilder_t * value)
	{
		___m_EscapeBuilder_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EscapeBuilder_3), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
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
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// SimpleJSON.JSONNode/<get_Children>d__43
struct U3Cget_ChildrenU3Ed__43_t676D15A68B9E4445BE9089BCD930635F8DC59D80  : public RuntimeObject
{
public:
	// System.Int32 SimpleJSON.JSONNode/<get_Children>d__43::<>1__state
	int32_t ___U3CU3E1__state_0;
	// SimpleJSON.JSONNode SimpleJSON.JSONNode/<get_Children>d__43::<>2__current
	JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * ___U3CU3E2__current_1;
	// System.Int32 SimpleJSON.JSONNode/<get_Children>d__43::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3Cget_ChildrenU3Ed__43_t676D15A68B9E4445BE9089BCD930635F8DC59D80, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3Cget_ChildrenU3Ed__43_t676D15A68B9E4445BE9089BCD930635F8DC59D80, ___U3CU3E2__current_1)); }
	inline JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3Cget_ChildrenU3Ed__43_t676D15A68B9E4445BE9089BCD930635F8DC59D80, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}
};


// SimpleJSON.JSONNode/<get_DeepChildren>d__45
struct U3Cget_DeepChildrenU3Ed__45_tCD907C30A1B957DFC6A9DC8CFCC199DD51C378FA  : public RuntimeObject
{
public:
	// System.Int32 SimpleJSON.JSONNode/<get_DeepChildren>d__45::<>1__state
	int32_t ___U3CU3E1__state_0;
	// SimpleJSON.JSONNode SimpleJSON.JSONNode/<get_DeepChildren>d__45::<>2__current
	JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * ___U3CU3E2__current_1;
	// System.Int32 SimpleJSON.JSONNode/<get_DeepChildren>d__45::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// SimpleJSON.JSONNode SimpleJSON.JSONNode/<get_DeepChildren>d__45::<>4__this
	JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * ___U3CU3E4__this_3;
	// System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode/<get_DeepChildren>d__45::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_4;
	// System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode/<get_DeepChildren>d__45::<>7__wrap2
	RuntimeObject* ___U3CU3E7__wrap2_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3Cget_DeepChildrenU3Ed__45_tCD907C30A1B957DFC6A9DC8CFCC199DD51C378FA, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3Cget_DeepChildrenU3Ed__45_tCD907C30A1B957DFC6A9DC8CFCC199DD51C378FA, ___U3CU3E2__current_1)); }
	inline JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3Cget_DeepChildrenU3Ed__45_tCD907C30A1B957DFC6A9DC8CFCC199DD51C378FA, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3Cget_DeepChildrenU3Ed__45_tCD907C30A1B957DFC6A9DC8CFCC199DD51C378FA, ___U3CU3E4__this_3)); }
	inline JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_4() { return static_cast<int32_t>(offsetof(U3Cget_DeepChildrenU3Ed__45_tCD907C30A1B957DFC6A9DC8CFCC199DD51C378FA, ___U3CU3E7__wrap1_4)); }
	inline RuntimeObject* get_U3CU3E7__wrap1_4() const { return ___U3CU3E7__wrap1_4; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap1_4() { return &___U3CU3E7__wrap1_4; }
	inline void set_U3CU3E7__wrap1_4(RuntimeObject* value)
	{
		___U3CU3E7__wrap1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap2_5() { return static_cast<int32_t>(offsetof(U3Cget_DeepChildrenU3Ed__45_tCD907C30A1B957DFC6A9DC8CFCC199DD51C378FA, ___U3CU3E7__wrap2_5)); }
	inline RuntimeObject* get_U3CU3E7__wrap2_5() const { return ___U3CU3E7__wrap2_5; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap2_5() { return &___U3CU3E7__wrap2_5; }
	inline void set_U3CU3E7__wrap2_5(RuntimeObject* value)
	{
		___U3CU3E7__wrap2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap2_5), (void*)value);
	}
};


// SimpleJSON.JSONObject/<>c__DisplayClass21_0
struct U3CU3Ec__DisplayClass21_0_t5F3C45E238AB19808012EFB4181E62F4DCED84CC  : public RuntimeObject
{
public:
	// SimpleJSON.JSONNode SimpleJSON.JSONObject/<>c__DisplayClass21_0::aNode
	JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * ___aNode_0;

public:
	inline static int32_t get_offset_of_aNode_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass21_0_t5F3C45E238AB19808012EFB4181E62F4DCED84CC, ___aNode_0)); }
	inline JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * get_aNode_0() const { return ___aNode_0; }
	inline JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 ** get_address_of_aNode_0() { return &___aNode_0; }
	inline void set_aNode_0(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * value)
	{
		___aNode_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___aNode_0), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<SimpleJSON.JSONNode>
struct Enumerator_tDA1783FBD1372348634FED4EDC7396A489A211FA 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t5575902E70199AF34CD1695997CE7E53A1509646 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tDA1783FBD1372348634FED4EDC7396A489A211FA, ___list_0)); }
	inline List_1_t5575902E70199AF34CD1695997CE7E53A1509646 * get_list_0() const { return ___list_0; }
	inline List_1_t5575902E70199AF34CD1695997CE7E53A1509646 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t5575902E70199AF34CD1695997CE7E53A1509646 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tDA1783FBD1372348634FED4EDC7396A489A211FA, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tDA1783FBD1372348634FED4EDC7396A489A211FA, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tDA1783FBD1372348634FED4EDC7396A489A211FA, ___current_3)); }
	inline JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * get_current_3() const { return ___current_3; }
	inline JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>
struct KeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46, ___value_1)); }
	inline JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * get_value_1() const { return ___value_1; }
	inline JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.Decimal
struct Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Powers10_6), (void*)value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Zero_7)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___One_8)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_One_8() const { return ___One_8; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinusOne_9)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MaxValue_10)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinValue_11)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearPositiveZero_13 = value;
	}
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Guid
struct Guid_t 
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
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____fastRng_14;

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
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
};


// System.Int16
struct Int16_tD0F031114106263BB459DA1F099FF9F42691295A 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_tD0F031114106263BB459DA1F099FF9F42691295A, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
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


// SimpleJSON.JSONArray
struct JSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E  : public JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043
{
public:
	// System.Collections.Generic.List`1<SimpleJSON.JSONNode> SimpleJSON.JSONArray::m_List
	List_1_t5575902E70199AF34CD1695997CE7E53A1509646 * ___m_List_4;
	// System.Boolean SimpleJSON.JSONArray::inline
	bool ___inline_5;

public:
	inline static int32_t get_offset_of_m_List_4() { return static_cast<int32_t>(offsetof(JSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E, ___m_List_4)); }
	inline List_1_t5575902E70199AF34CD1695997CE7E53A1509646 * get_m_List_4() const { return ___m_List_4; }
	inline List_1_t5575902E70199AF34CD1695997CE7E53A1509646 ** get_address_of_m_List_4() { return &___m_List_4; }
	inline void set_m_List_4(List_1_t5575902E70199AF34CD1695997CE7E53A1509646 * value)
	{
		___m_List_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_List_4), (void*)value);
	}

	inline static int32_t get_offset_of_inline_5() { return static_cast<int32_t>(offsetof(JSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E, ___inline_5)); }
	inline bool get_inline_5() const { return ___inline_5; }
	inline bool* get_address_of_inline_5() { return &___inline_5; }
	inline void set_inline_5(bool value)
	{
		___inline_5 = value;
	}
};


// SimpleJSON.JSONBool
struct JSONBool_t9FF67B765B247F2AD7F1614032A0A0EA3497EC62  : public JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043
{
public:
	// System.Boolean SimpleJSON.JSONBool::m_Data
	bool ___m_Data_4;

public:
	inline static int32_t get_offset_of_m_Data_4() { return static_cast<int32_t>(offsetof(JSONBool_t9FF67B765B247F2AD7F1614032A0A0EA3497EC62, ___m_Data_4)); }
	inline bool get_m_Data_4() const { return ___m_Data_4; }
	inline bool* get_address_of_m_Data_4() { return &___m_Data_4; }
	inline void set_m_Data_4(bool value)
	{
		___m_Data_4 = value;
	}
};


// SimpleJSON.JSONLazyCreator
struct JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6  : public JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043
{
public:
	// SimpleJSON.JSONNode SimpleJSON.JSONLazyCreator::m_Node
	JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * ___m_Node_4;
	// System.String SimpleJSON.JSONLazyCreator::m_Key
	String_t* ___m_Key_5;

public:
	inline static int32_t get_offset_of_m_Node_4() { return static_cast<int32_t>(offsetof(JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6, ___m_Node_4)); }
	inline JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * get_m_Node_4() const { return ___m_Node_4; }
	inline JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 ** get_address_of_m_Node_4() { return &___m_Node_4; }
	inline void set_m_Node_4(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * value)
	{
		___m_Node_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Node_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Key_5() { return static_cast<int32_t>(offsetof(JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6, ___m_Key_5)); }
	inline String_t* get_m_Key_5() const { return ___m_Key_5; }
	inline String_t** get_address_of_m_Key_5() { return &___m_Key_5; }
	inline void set_m_Key_5(String_t* value)
	{
		___m_Key_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Key_5), (void*)value);
	}
};


// SimpleJSON.JSONNull
struct JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47  : public JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043
{
public:

public:
};

struct JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47_StaticFields
{
public:
	// SimpleJSON.JSONNull SimpleJSON.JSONNull::m_StaticInstance
	JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47 * ___m_StaticInstance_4;
	// System.Boolean SimpleJSON.JSONNull::reuseSameInstance
	bool ___reuseSameInstance_5;

public:
	inline static int32_t get_offset_of_m_StaticInstance_4() { return static_cast<int32_t>(offsetof(JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47_StaticFields, ___m_StaticInstance_4)); }
	inline JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47 * get_m_StaticInstance_4() const { return ___m_StaticInstance_4; }
	inline JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47 ** get_address_of_m_StaticInstance_4() { return &___m_StaticInstance_4; }
	inline void set_m_StaticInstance_4(JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47 * value)
	{
		___m_StaticInstance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StaticInstance_4), (void*)value);
	}

	inline static int32_t get_offset_of_reuseSameInstance_5() { return static_cast<int32_t>(offsetof(JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47_StaticFields, ___reuseSameInstance_5)); }
	inline bool get_reuseSameInstance_5() const { return ___reuseSameInstance_5; }
	inline bool* get_address_of_reuseSameInstance_5() { return &___reuseSameInstance_5; }
	inline void set_reuseSameInstance_5(bool value)
	{
		___reuseSameInstance_5 = value;
	}
};


// SimpleJSON.JSONNumber
struct JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5  : public JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043
{
public:
	// System.Double SimpleJSON.JSONNumber::m_Data
	double ___m_Data_4;

public:
	inline static int32_t get_offset_of_m_Data_4() { return static_cast<int32_t>(offsetof(JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5, ___m_Data_4)); }
	inline double get_m_Data_4() const { return ___m_Data_4; }
	inline double* get_address_of_m_Data_4() { return &___m_Data_4; }
	inline void set_m_Data_4(double value)
	{
		___m_Data_4 = value;
	}
};


// SimpleJSON.JSONObject
struct JSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1  : public JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode> SimpleJSON.JSONObject::m_Dict
	Dictionary_2_tAFDD9B13B8A8D35E8017B1AD49EE8DCF947CD740 * ___m_Dict_4;
	// System.Boolean SimpleJSON.JSONObject::inline
	bool ___inline_5;

public:
	inline static int32_t get_offset_of_m_Dict_4() { return static_cast<int32_t>(offsetof(JSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1, ___m_Dict_4)); }
	inline Dictionary_2_tAFDD9B13B8A8D35E8017B1AD49EE8DCF947CD740 * get_m_Dict_4() const { return ___m_Dict_4; }
	inline Dictionary_2_tAFDD9B13B8A8D35E8017B1AD49EE8DCF947CD740 ** get_address_of_m_Dict_4() { return &___m_Dict_4; }
	inline void set_m_Dict_4(Dictionary_2_tAFDD9B13B8A8D35E8017B1AD49EE8DCF947CD740 * value)
	{
		___m_Dict_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Dict_4), (void*)value);
	}

	inline static int32_t get_offset_of_inline_5() { return static_cast<int32_t>(offsetof(JSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1, ___inline_5)); }
	inline bool get_inline_5() const { return ___inline_5; }
	inline bool* get_address_of_inline_5() { return &___inline_5; }
	inline void set_inline_5(bool value)
	{
		___inline_5 = value;
	}
};


// SimpleJSON.JSONString
struct JSONString_tDC7D689F0DBDAC1FC0399D63CA27C8FEB266EFAF  : public JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043
{
public:
	// System.String SimpleJSON.JSONString::m_Data
	String_t* ___m_Data_4;

public:
	inline static int32_t get_offset_of_m_Data_4() { return static_cast<int32_t>(offsetof(JSONString_tDC7D689F0DBDAC1FC0399D63CA27C8FEB266EFAF, ___m_Data_4)); }
	inline String_t* get_m_Data_4() const { return ___m_Data_4; }
	inline String_t** get_address_of_m_Data_4() { return &___m_Data_4; }
	inline void set_m_Data_4(String_t* value)
	{
		___m_Data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Data_4), (void*)value);
	}
};


// System.SByte
struct SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt16
struct UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___dictionary_0)); }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___current_3)); }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.String,SimpleJSON.JSONNode>
struct Enumerator_tCE541D75AA851CBCC2F41CB77FDD2C3DA76C09AC 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tAFDD9B13B8A8D35E8017B1AD49EE8DCF947CD740 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tCE541D75AA851CBCC2F41CB77FDD2C3DA76C09AC, ___dictionary_0)); }
	inline Dictionary_2_tAFDD9B13B8A8D35E8017B1AD49EE8DCF947CD740 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tAFDD9B13B8A8D35E8017B1AD49EE8DCF947CD740 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tAFDD9B13B8A8D35E8017B1AD49EE8DCF947CD740 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tCE541D75AA851CBCC2F41CB77FDD2C3DA76C09AC, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tCE541D75AA851CBCC2F41CB77FDD2C3DA76C09AC, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tCE541D75AA851CBCC2F41CB77FDD2C3DA76C09AC, ___current_3)); }
	inline KeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tCE541D75AA851CBCC2F41CB77FDD2C3DA76C09AC, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
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
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// SimpleJSON.JSONNodeType
struct JSONNodeType_tCEE437965732B55AF407B8011D7534F4CFD89C23 
{
public:
	// System.Int32 SimpleJSON.JSONNodeType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JSONNodeType_tCEE437965732B55AF407B8011D7534F4CFD89C23, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// SimpleJSON.JSONTextMode
struct JSONTextMode_tD95705CAC61A90C412B80F35CC8A2C4F3884215B 
{
public:
	// System.Int32 SimpleJSON.JSONTextMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JSONTextMode_tD95705CAC61A90C412B80F35CC8A2C4F3884215B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Globalization.NumberStyles
struct NumberStyles_t379EFBF2535E1C950DEC8042704BB663BF636594 
{
public:
	// System.Int32 System.Globalization.NumberStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NumberStyles_t379EFBF2535E1C950DEC8042704BB663BF636594, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// SimpleJSON.JSONArray/<get_Children>d__24
struct U3Cget_ChildrenU3Ed__24_t0B4B41955B2D2AF5198DD9E35A1F9B8F7DA975FD  : public RuntimeObject
{
public:
	// System.Int32 SimpleJSON.JSONArray/<get_Children>d__24::<>1__state
	int32_t ___U3CU3E1__state_0;
	// SimpleJSON.JSONNode SimpleJSON.JSONArray/<get_Children>d__24::<>2__current
	JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * ___U3CU3E2__current_1;
	// System.Int32 SimpleJSON.JSONArray/<get_Children>d__24::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// SimpleJSON.JSONArray SimpleJSON.JSONArray/<get_Children>d__24::<>4__this
	JSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E * ___U3CU3E4__this_3;
	// System.Collections.Generic.List`1/Enumerator<SimpleJSON.JSONNode> SimpleJSON.JSONArray/<get_Children>d__24::<>7__wrap1
	Enumerator_tDA1783FBD1372348634FED4EDC7396A489A211FA  ___U3CU3E7__wrap1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3Cget_ChildrenU3Ed__24_t0B4B41955B2D2AF5198DD9E35A1F9B8F7DA975FD, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3Cget_ChildrenU3Ed__24_t0B4B41955B2D2AF5198DD9E35A1F9B8F7DA975FD, ___U3CU3E2__current_1)); }
	inline JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3Cget_ChildrenU3Ed__24_t0B4B41955B2D2AF5198DD9E35A1F9B8F7DA975FD, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3Cget_ChildrenU3Ed__24_t0B4B41955B2D2AF5198DD9E35A1F9B8F7DA975FD, ___U3CU3E4__this_3)); }
	inline JSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline JSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(JSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_4() { return static_cast<int32_t>(offsetof(U3Cget_ChildrenU3Ed__24_t0B4B41955B2D2AF5198DD9E35A1F9B8F7DA975FD, ___U3CU3E7__wrap1_4)); }
	inline Enumerator_tDA1783FBD1372348634FED4EDC7396A489A211FA  get_U3CU3E7__wrap1_4() const { return ___U3CU3E7__wrap1_4; }
	inline Enumerator_tDA1783FBD1372348634FED4EDC7396A489A211FA * get_address_of_U3CU3E7__wrap1_4() { return &___U3CU3E7__wrap1_4; }
	inline void set_U3CU3E7__wrap1_4(Enumerator_tDA1783FBD1372348634FED4EDC7396A489A211FA  value)
	{
		___U3CU3E7__wrap1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap1_4))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap1_4))->___current_3), (void*)NULL);
		#endif
	}
};


// SimpleJSON.JSONNode/Enumerator/Type
struct Type_t07F558D771609856890AD0FD5D23575FAB14F4B5 
{
public:
	// System.Int32 SimpleJSON.JSONNode/Enumerator/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_t07F558D771609856890AD0FD5D23575FAB14F4B5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

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

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// SimpleJSON.JSONNode/Enumerator
struct Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8 
{
public:
	// SimpleJSON.JSONNode/Enumerator/Type SimpleJSON.JSONNode/Enumerator::type
	int32_t ___type_0;
	// System.Collections.Generic.Dictionary`2/Enumerator<System.String,SimpleJSON.JSONNode> SimpleJSON.JSONNode/Enumerator::m_Object
	Enumerator_tCE541D75AA851CBCC2F41CB77FDD2C3DA76C09AC  ___m_Object_1;
	// System.Collections.Generic.List`1/Enumerator<SimpleJSON.JSONNode> SimpleJSON.JSONNode/Enumerator::m_Array
	Enumerator_tDA1783FBD1372348634FED4EDC7396A489A211FA  ___m_Array_2;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_m_Object_1() { return static_cast<int32_t>(offsetof(Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8, ___m_Object_1)); }
	inline Enumerator_tCE541D75AA851CBCC2F41CB77FDD2C3DA76C09AC  get_m_Object_1() const { return ___m_Object_1; }
	inline Enumerator_tCE541D75AA851CBCC2F41CB77FDD2C3DA76C09AC * get_address_of_m_Object_1() { return &___m_Object_1; }
	inline void set_m_Object_1(Enumerator_tCE541D75AA851CBCC2F41CB77FDD2C3DA76C09AC  value)
	{
		___m_Object_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Object_1))->___dictionary_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_Object_1))->___current_3))->___key_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_Object_1))->___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Array_2() { return static_cast<int32_t>(offsetof(Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8, ___m_Array_2)); }
	inline Enumerator_tDA1783FBD1372348634FED4EDC7396A489A211FA  get_m_Array_2() const { return ___m_Array_2; }
	inline Enumerator_tDA1783FBD1372348634FED4EDC7396A489A211FA * get_address_of_m_Array_2() { return &___m_Array_2; }
	inline void set_m_Array_2(Enumerator_tDA1783FBD1372348634FED4EDC7396A489A211FA  value)
	{
		___m_Array_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Array_2))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Array_2))->___current_3), (void*)NULL);
		#endif
	}
};

// Native definition for P/Invoke marshalling of SimpleJSON.JSONNode/Enumerator
struct Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8_marshaled_pinvoke
{
	int32_t ___type_0;
	Enumerator_tCE541D75AA851CBCC2F41CB77FDD2C3DA76C09AC  ___m_Object_1;
	Enumerator_tDA1783FBD1372348634FED4EDC7396A489A211FA  ___m_Array_2;
};
// Native definition for COM marshalling of SimpleJSON.JSONNode/Enumerator
struct Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8_marshaled_com
{
	int32_t ___type_0;
	Enumerator_tCE541D75AA851CBCC2F41CB77FDD2C3DA76C09AC  ___m_Object_1;
	Enumerator_tDA1783FBD1372348634FED4EDC7396A489A211FA  ___m_Array_2;
};

// SimpleJSON.JSONObject/<get_Children>d__27
struct U3Cget_ChildrenU3Ed__27_tBAFD832B8A29905C1FDBEF21DACF57DF3850E73E  : public RuntimeObject
{
public:
	// System.Int32 SimpleJSON.JSONObject/<get_Children>d__27::<>1__state
	int32_t ___U3CU3E1__state_0;
	// SimpleJSON.JSONNode SimpleJSON.JSONObject/<get_Children>d__27::<>2__current
	JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * ___U3CU3E2__current_1;
	// System.Int32 SimpleJSON.JSONObject/<get_Children>d__27::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// SimpleJSON.JSONObject SimpleJSON.JSONObject/<get_Children>d__27::<>4__this
	JSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1 * ___U3CU3E4__this_3;
	// System.Collections.Generic.Dictionary`2/Enumerator<System.String,SimpleJSON.JSONNode> SimpleJSON.JSONObject/<get_Children>d__27::<>7__wrap1
	Enumerator_tCE541D75AA851CBCC2F41CB77FDD2C3DA76C09AC  ___U3CU3E7__wrap1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3Cget_ChildrenU3Ed__27_tBAFD832B8A29905C1FDBEF21DACF57DF3850E73E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3Cget_ChildrenU3Ed__27_tBAFD832B8A29905C1FDBEF21DACF57DF3850E73E, ___U3CU3E2__current_1)); }
	inline JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3Cget_ChildrenU3Ed__27_tBAFD832B8A29905C1FDBEF21DACF57DF3850E73E, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3Cget_ChildrenU3Ed__27_tBAFD832B8A29905C1FDBEF21DACF57DF3850E73E, ___U3CU3E4__this_3)); }
	inline JSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline JSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(JSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_4() { return static_cast<int32_t>(offsetof(U3Cget_ChildrenU3Ed__27_tBAFD832B8A29905C1FDBEF21DACF57DF3850E73E, ___U3CU3E7__wrap1_4)); }
	inline Enumerator_tCE541D75AA851CBCC2F41CB77FDD2C3DA76C09AC  get_U3CU3E7__wrap1_4() const { return ___U3CU3E7__wrap1_4; }
	inline Enumerator_tCE541D75AA851CBCC2F41CB77FDD2C3DA76C09AC * get_address_of_U3CU3E7__wrap1_4() { return &___U3CU3E7__wrap1_4; }
	inline void set_U3CU3E7__wrap1_4(Enumerator_tCE541D75AA851CBCC2F41CB77FDD2C3DA76C09AC  value)
	{
		___U3CU3E7__wrap1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap1_4))->___dictionary_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3E7__wrap1_4))->___current_3))->___key_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3E7__wrap1_4))->___current_3))->___value_1), (void*)NULL);
		#endif
	}
};


// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>,System.Boolean>
struct Func_2_t0590A4A7DD386E29A0B0552177EEED331B7D69C1  : public MulticastDelegate_t
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// SimpleJSON.JSONNode/KeyEnumerator
struct KeyEnumerator_t480359137170FD764CB75A243A787E1AEDF89585 
{
public:
	// SimpleJSON.JSONNode/Enumerator SimpleJSON.JSONNode/KeyEnumerator::m_Enumerator
	Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8  ___m_Enumerator_0;

public:
	inline static int32_t get_offset_of_m_Enumerator_0() { return static_cast<int32_t>(offsetof(KeyEnumerator_t480359137170FD764CB75A243A787E1AEDF89585, ___m_Enumerator_0)); }
	inline Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8  get_m_Enumerator_0() const { return ___m_Enumerator_0; }
	inline Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8 * get_address_of_m_Enumerator_0() { return &___m_Enumerator_0; }
	inline void set_m_Enumerator_0(Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8  value)
	{
		___m_Enumerator_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_Enumerator_0))->___m_Object_1))->___dictionary_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_Enumerator_0))->___m_Object_1))->___current_3))->___key_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_Enumerator_0))->___m_Object_1))->___current_3))->___value_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_Enumerator_0))->___m_Array_2))->___list_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_Enumerator_0))->___m_Array_2))->___current_3), (void*)NULL);
		#endif
	}
};

// Native definition for P/Invoke marshalling of SimpleJSON.JSONNode/KeyEnumerator
struct KeyEnumerator_t480359137170FD764CB75A243A787E1AEDF89585_marshaled_pinvoke
{
	Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8_marshaled_pinvoke ___m_Enumerator_0;
};
// Native definition for COM marshalling of SimpleJSON.JSONNode/KeyEnumerator
struct KeyEnumerator_t480359137170FD764CB75A243A787E1AEDF89585_marshaled_com
{
	Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8_marshaled_com ___m_Enumerator_0;
};

// SimpleJSON.JSONNode/LinqEnumerator
struct LinqEnumerator_t45B8943C727186418953AAB476E680E60C03D038  : public RuntimeObject
{
public:
	// SimpleJSON.JSONNode SimpleJSON.JSONNode/LinqEnumerator::m_Node
	JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * ___m_Node_0;
	// SimpleJSON.JSONNode/Enumerator SimpleJSON.JSONNode/LinqEnumerator::m_Enumerator
	Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8  ___m_Enumerator_1;

public:
	inline static int32_t get_offset_of_m_Node_0() { return static_cast<int32_t>(offsetof(LinqEnumerator_t45B8943C727186418953AAB476E680E60C03D038, ___m_Node_0)); }
	inline JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * get_m_Node_0() const { return ___m_Node_0; }
	inline JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 ** get_address_of_m_Node_0() { return &___m_Node_0; }
	inline void set_m_Node_0(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * value)
	{
		___m_Node_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Node_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Enumerator_1() { return static_cast<int32_t>(offsetof(LinqEnumerator_t45B8943C727186418953AAB476E680E60C03D038, ___m_Enumerator_1)); }
	inline Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8  get_m_Enumerator_1() const { return ___m_Enumerator_1; }
	inline Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8 * get_address_of_m_Enumerator_1() { return &___m_Enumerator_1; }
	inline void set_m_Enumerator_1(Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8  value)
	{
		___m_Enumerator_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_Enumerator_1))->___m_Object_1))->___dictionary_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_Enumerator_1))->___m_Object_1))->___current_3))->___key_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_Enumerator_1))->___m_Object_1))->___current_3))->___value_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_Enumerator_1))->___m_Array_2))->___list_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_Enumerator_1))->___m_Array_2))->___current_3), (void*)NULL);
		#endif
	}
};


// SimpleJSON.JSONNode/ValueEnumerator
struct ValueEnumerator_tF3B99F2AF4F29E348D9CEF62A42AF04D04DB0C61 
{
public:
	// SimpleJSON.JSONNode/Enumerator SimpleJSON.JSONNode/ValueEnumerator::m_Enumerator
	Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8  ___m_Enumerator_0;

public:
	inline static int32_t get_offset_of_m_Enumerator_0() { return static_cast<int32_t>(offsetof(ValueEnumerator_tF3B99F2AF4F29E348D9CEF62A42AF04D04DB0C61, ___m_Enumerator_0)); }
	inline Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8  get_m_Enumerator_0() const { return ___m_Enumerator_0; }
	inline Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8 * get_address_of_m_Enumerator_0() { return &___m_Enumerator_0; }
	inline void set_m_Enumerator_0(Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8  value)
	{
		___m_Enumerator_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_Enumerator_0))->___m_Object_1))->___dictionary_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_Enumerator_0))->___m_Object_1))->___current_3))->___key_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_Enumerator_0))->___m_Object_1))->___current_3))->___value_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_Enumerator_0))->___m_Array_2))->___list_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_Enumerator_0))->___m_Array_2))->___current_3), (void*)NULL);
		#endif
	}
};

// Native definition for P/Invoke marshalling of SimpleJSON.JSONNode/ValueEnumerator
struct ValueEnumerator_tF3B99F2AF4F29E348D9CEF62A42AF04D04DB0C61_marshaled_pinvoke
{
	Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8_marshaled_pinvoke ___m_Enumerator_0;
};
// Native definition for COM marshalling of SimpleJSON.JSONNode/ValueEnumerator
struct ValueEnumerator_tF3B99F2AF4F29E348D9CEF62A42AF04D04DB0C61_marshaled_com
{
	Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8_marshaled_com ___m_Enumerator_0;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};

IL2CPP_EXTERN_C void Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8_marshal_pinvoke(const Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8& unmarshaled, Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8_marshal_pinvoke_back(const Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8_marshaled_pinvoke& marshaled, Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8& unmarshaled);
IL2CPP_EXTERN_C void Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8_marshal_pinvoke_cleanup(Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8_marshal_com(const Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8& unmarshaled, Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8_marshaled_com& marshaled);
IL2CPP_EXTERN_C void Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8_marshal_com_back(const Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8_marshaled_com& marshaled, Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8& unmarshaled);
IL2CPP_EXTERN_C void Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8_marshal_com_cleanup(Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8_marshaled_com& marshaled);

// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m6339FC2D3D1CE4FA13CF21C7F9FC58CA4441BF0C_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_m7B5E3383CB67492E573AC0D875ED82A51350F188_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mF15250BF947CA27BE9A23C08BAC6DB6F180B0EDD_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m72B622AD9BAEA821ED4FE737B1474CA1EABA4AEB_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_mC8FCB6A53C017A6C13FC891B6BB1D78F9A77D5E3_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Capacity_mE316E0DB641CFB093F0309D091D773047F81B2CC_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m7A81900F3492DE11874B0EA9A0E5454F897E3079_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___value0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m4C91D0E84532DF10C654917487D82CB0AB27693B_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// T SimpleJSON.JSONLazyCreator::Set<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JSONLazyCreator_Set_TisRuntimeObject_m8C4411A8456C6D37F28F914142F74CF2E41BE391_gshared (JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6 * __this, RuntimeObject * ___aVal0, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m8425596BB4249956819960EC76E618357F573E76_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_mD782ADAC3AB9809F63B681213A7A39784A9A169A_gshared (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m8FFF613733BF88B54FCD4498B1E97DE296E27757_gshared (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<System.Object>::Peek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Stack_1_Peek_m2060B46CD5CCD8A93C5CC558C6D3EF027862FE59_gshared (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mFD1C100DE65847CAB033057C77027AA5DB427B54_gshared_inline (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<System.Object>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Stack_1_Pop_m883C5DEF33CA2E556AC710A9BE26F8BD2D4B182C_gshared (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0  Dictionary_2_GetEnumerator_mD80BA563C32BF7C1EE95C9FC1BE3B423716CCE68_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mCABABA5D0FA017D2D54BE4FA6256C51518274116_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_mF3BA34126DA8AFA32D1E5285D842C5955C698F0D_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mA8F31A10EE1129768E13ACC4DC847B05EAD2A055_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m1D9CF8FA99A277EE49BC3002FDEAACDCDB29803B_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m1B599EE742A00E8D399B43E225AD4C6571FBC8DA_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// !!0 System.Linq.Enumerable::ElementAt<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Collections.Generic.IEnumerable`1<!!0>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerable_ElementAt_TisKeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625_m273B6F69504A684113E4C66F7235331A3D055D92_gshared (RuntimeObject* ___source0, int32_t ___index1, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mEFB776105F87A4EAB1CAC3F0C96C4D0B79F3F03D_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m45DB5340BC5312349874253DD3239546CB025D21_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m03715B6DDEC4F9E5EED2E464BB22A6C4C9500DCB_gshared (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisKeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625_mF12AF337F1F8C3FD7743967A64D5268623498A9D_gshared (RuntimeObject* ___source0, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate1, const RuntimeMethod* method);
// !!0 System.Linq.Enumerable::First<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerable_First_TisKeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625_m763A849DA06D805A477A9F940239007A837C37A5_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m883E91BB19072DD91E8FA3BEDA31D0FA095667EA_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m39BB9CD07FEC0DBEDFE938630364A23C9A87FC3F_gshared_inline (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_gshared (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mE985A35FC727FA9F519564063C5C5063209ADDA8_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m463456D9FF698859454DF07DE8A0D4A25BD28C9B_gshared (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);

// SimpleJSON.JSONNode SimpleJSON.JSONNode::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * JSONNode_Parse_m69AEF21E17F84854BF203846254C8B943E9FEF21 (String_t* ___aJSON0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<SimpleJSON.JSONNode>::GetEnumerator()
inline Enumerator_tDA1783FBD1372348634FED4EDC7396A489A211FA  List_1_GetEnumerator_m04D3744D5A2851C740631E66DC681938D0C3381B (List_1_t5575902E70199AF34CD1695997CE7E53A1509646 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tDA1783FBD1372348634FED4EDC7396A489A211FA  (*) (List_1_t5575902E70199AF34CD1695997CE7E53A1509646 *, const RuntimeMethod*))List_1_GetEnumerator_m6339FC2D3D1CE4FA13CF21C7F9FC58CA4441BF0C_gshared)(__this, method);
}
// System.Void SimpleJSON.JSONNode/Enumerator::.ctor(System.Collections.Generic.List`1/Enumerator<SimpleJSON.JSONNode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m057901299D85978F34E86C2B99997599C904516F (Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8 * __this, Enumerator_tDA1783FBD1372348634FED4EDC7396A489A211FA  ___aArrayEnum0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<SimpleJSON.JSONNode>::get_Count()
inline int32_t List_1_get_Count_m4C4DE135CD00FF88D00A978F68019097CA375E1B_inline (List_1_t5575902E70199AF34CD1695997CE7E53A1509646 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t5575902E70199AF34CD1695997CE7E53A1509646 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void SimpleJSON.JSONLazyCreator::.ctor(SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator__ctor_m0B79861AA63A30F62B32C3A2F3A87F152C1015F6 (JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6 * __this, JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * ___aNode0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<SimpleJSON.JSONNode>::get_Item(System.Int32)
inline JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * List_1_get_Item_mFC2B27BFC88F482BA024BBE4896041DB9ABCC979_inline (List_1_t5575902E70199AF34CD1695997CE7E53A1509646 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * (*) (List_1_t5575902E70199AF34CD1695997CE7E53A1509646 *, int32_t, const RuntimeMethod*))List_1_get_Item_m7B5E3383CB67492E573AC0D875ED82A51350F188_gshared_inline)(__this, ___index0, method);
}
// System.Boolean SimpleJSON.JSONNode::op_Equality(SimpleJSON.JSONNode,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNode_op_Equality_mEB349D8644B8E3F87CD33A35457A00480EFB329A (JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * ___a0, RuntimeObject * ___b1, const RuntimeMethod* method);
// SimpleJSON.JSONNull SimpleJSON.JSONNull::CreateOrGet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47 * JSONNull_CreateOrGet_mE2E06026E04958D2795026FBF38A47FBE14A7AEF (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::Add(!0)
inline void List_1_Add_m438AD4912996174DEF92B8BFCAE67FEA62FC30AD (List_1_t5575902E70199AF34CD1695997CE7E53A1509646 * __this, JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5575902E70199AF34CD1695997CE7E53A1509646 *, JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 *, const RuntimeMethod*))List_1_Add_mF15250BF947CA27BE9A23C08BAC6DB6F180B0EDD_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::set_Item(System.Int32,!0)
inline void List_1_set_Item_m4A3219187EB2E715BEBB958BD529044CC1FB89D9 (List_1_t5575902E70199AF34CD1695997CE7E53A1509646 * __this, int32_t ___index0, JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5575902E70199AF34CD1695997CE7E53A1509646 *, int32_t, JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 *, const RuntimeMethod*))List_1_set_Item_m72B622AD9BAEA821ED4FE737B1474CA1EABA4AEB_gshared)(__this, ___index0, ___value1, method);
}
// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mEBF7FDF448806C118A40503C7C14AE24AE7CE194 (List_1_t5575902E70199AF34CD1695997CE7E53A1509646 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5575902E70199AF34CD1695997CE7E53A1509646 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared)(__this, ___index0, method);
}
// System.Boolean System.Collections.Generic.List`1<SimpleJSON.JSONNode>::Remove(!0)
inline bool List_1_Remove_m76A37D3FDBD763730D205C826472852994A48997 (List_1_t5575902E70199AF34CD1695997CE7E53A1509646 * __this, JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t5575902E70199AF34CD1695997CE7E53A1509646 *, JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 *, const RuntimeMethod*))List_1_Remove_mC8FCB6A53C017A6C13FC891B6BB1D78F9A77D5E3_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::Clear()
inline void List_1_Clear_mBA95256993BEDEE342648F4D18F563AFE53226F7 (List_1_t5575902E70199AF34CD1695997CE7E53A1509646 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5575902E70199AF34CD1695997CE7E53A1509646 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Void SimpleJSON.JSONArray::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONArray__ctor_m5F3CE693516DF2278031527B3BEB830D430F78B1 (JSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<SimpleJSON.JSONNode>::get_Capacity()
inline int32_t List_1_get_Capacity_m37D0396B7127B7DC8ABF2FD65D97E35312528266 (List_1_t5575902E70199AF34CD1695997CE7E53A1509646 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t5575902E70199AF34CD1695997CE7E53A1509646 *, const RuntimeMethod*))List_1_get_Capacity_mE316E0DB641CFB093F0309D091D773047F81B2CC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::set_Capacity(System.Int32)
inline void List_1_set_Capacity_mC753EC0F1AA3F25EF4207682DC4192DB6EC6EB13 (List_1_t5575902E70199AF34CD1695997CE7E53A1509646 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5575902E70199AF34CD1695997CE7E53A1509646 *, int32_t, const RuntimeMethod*))List_1_set_Capacity_m7A81900F3492DE11874B0EA9A0E5454F897E3079_gshared)(__this, ___value0, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<SimpleJSON.JSONNode>::get_Current()
inline JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * Enumerator_get_Current_mA04D9F0633F9986798A90E49F1AF69EBAE9466DB_inline (Enumerator_tDA1783FBD1372348634FED4EDC7396A489A211FA * __this, const RuntimeMethod* method)
{
	return ((  JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * (*) (Enumerator_tDA1783FBD1372348634FED4EDC7396A489A211FA *, const RuntimeMethod*))Enumerator_get_Current_m4C91D0E84532DF10C654917487D82CB0AB27693B_gshared_inline)(__this, method);
}
// System.Boolean SimpleJSON.JSONNode::op_Inequality(SimpleJSON.JSONNode,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNode_op_Inequality_m22851EA8F1ED30D4A1B977CD92AFEEB246DD098A (JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * ___a0, RuntimeObject * ___b1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<SimpleJSON.JSONNode>::MoveNext()
inline bool Enumerator_MoveNext_m425A5F4589B9E03CCCCA6245AF5F20FDADC90FAD (Enumerator_tDA1783FBD1372348634FED4EDC7396A489A211FA * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tDA1783FBD1372348634FED4EDC7396A489A211FA *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<SimpleJSON.JSONNode>::Dispose()
inline void Enumerator_Dispose_m7F31F9216A506EB82FA3E6EA1DA9C1E11DB81A3B (Enumerator_tDA1783FBD1372348634FED4EDC7396A489A211FA * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tDA1783FBD1372348634FED4EDC7396A489A211FA *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void SimpleJSON.JSONArray/<get_Children>d__24::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__24__ctor_m8525173D7EAEF8C7D22520776CB3EEE75FD09014 (U3Cget_ChildrenU3Ed__24_t0B4B41955B2D2AF5198DD9E35A1F9B8F7DA975FD * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E (StringBuilder_t * __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendLine_mB5790BC98389118626505708AE683AE9257B91B2 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mB04B8FAD8E322DF8E69F3F85BCE4A8D041AE8BFB (StringBuilder_t * __this, Il2CppChar ___value0, int32_t ___repeatCount1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<SimpleJSON.JSONNode>::.ctor()
inline void List_1__ctor_m0D19ABAE80A85141D13415BC990D6195B7660284 (List_1_t5575902E70199AF34CD1695997CE7E53A1509646 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5575902E70199AF34CD1695997CE7E53A1509646 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void SimpleJSON.JSONNode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNode__ctor_m1CBF4F8B6E1DECA2CC6252F7DE0BEF1D11A18A91 (JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * __this, const RuntimeMethod* method);
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C (bool* __this, const RuntimeMethod* method);
// System.Boolean System.Boolean::TryParse(System.String,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Boolean_TryParse_m083F8EB6F0A07B24C26310648CB2380C3D3AAEE7 (String_t* ___value0, bool* ___result1, const RuntimeMethod* method);
// System.Void SimpleJSON.JSONBool::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONBool__ctor_mBFA987A0D1492AFBC458BB89C88E7EC4AA2BE007 (JSONBool_t9FF67B765B247F2AD7F1614032A0A0EA3497EC62 * __this, bool ___aData0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Int32 System.Boolean::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411 (bool* __this, const RuntimeMethod* method);
// T SimpleJSON.JSONLazyCreator::Set<SimpleJSON.JSONArray>(T)
inline JSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E * JSONLazyCreator_Set_TisJSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E_mEBFCA8B610CC87E43748AA7BEF6B1C7038ED5120 (JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6 * __this, JSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E * ___aVal0, const RuntimeMethod* method)
{
	return ((  JSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E * (*) (JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6 *, JSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E *, const RuntimeMethod*))JSONLazyCreator_Set_TisRuntimeObject_m8C4411A8456C6D37F28F914142F74CF2E41BE391_gshared)(__this, ___aVal0, method);
}
// System.Void SimpleJSON.JSONLazyCreator::.ctor(SimpleJSON.JSONNode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator__ctor_m6C390D7570282C672EB980117A97087DE5E763DF (JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6 * __this, JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * ___aNode0, String_t* ___aKey1, const RuntimeMethod* method);
// System.Void SimpleJSON.JSONObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject__ctor_mDC880B59ED4D826E15F67A626326822D1CD1F52C (JSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1 * __this, const RuntimeMethod* method);
// T SimpleJSON.JSONLazyCreator::Set<SimpleJSON.JSONObject>(T)
inline JSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1 * JSONLazyCreator_Set_TisJSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1_m178DE9CFE882DCD5FCAE94006986BAB9FA2D5687 (JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6 * __this, JSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1 * ___aVal0, const RuntimeMethod* method)
{
	return ((  JSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1 * (*) (JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6 *, JSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1 *, const RuntimeMethod*))JSONLazyCreator_Set_TisRuntimeObject_m8C4411A8456C6D37F28F914142F74CF2E41BE391_gshared)(__this, ___aVal0, method);
}
// System.Boolean SimpleJSON.JSONLazyCreator::op_Equality(SimpleJSON.JSONLazyCreator,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONLazyCreator_op_Equality_mCB25438D736BAEC78588A1C203AE79D31064898C (JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6 * ___a0, RuntimeObject * ___b1, const RuntimeMethod* method);
// System.Void SimpleJSON.JSONNumber::.ctor(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNumber__ctor_m540460B21D5ED37F9529F1734B24B6E868D432B8 (JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5 * __this, double ___aData0, const RuntimeMethod* method);
// T SimpleJSON.JSONLazyCreator::Set<SimpleJSON.JSONNumber>(T)
inline JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5 * JSONLazyCreator_Set_TisJSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5_m3E439FB072EF02F7F17A747A17F6B88F6DC87AA0 (JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6 * __this, JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5 * ___aVal0, const RuntimeMethod* method)
{
	return ((  JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5 * (*) (JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6 *, JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5 *, const RuntimeMethod*))JSONLazyCreator_Set_TisRuntimeObject_m8C4411A8456C6D37F28F914142F74CF2E41BE391_gshared)(__this, ___aVal0, method);
}
// System.Void SimpleJSON.JSONString::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONString__ctor_m7E8C037643D81531C83ED7103B3B2E2847454981 (JSONString_tDC7D689F0DBDAC1FC0399D63CA27C8FEB266EFAF * __this, String_t* ___aData0, const RuntimeMethod* method);
// T SimpleJSON.JSONLazyCreator::Set<SimpleJSON.JSONString>(T)
inline JSONString_tDC7D689F0DBDAC1FC0399D63CA27C8FEB266EFAF * JSONLazyCreator_Set_TisJSONString_tDC7D689F0DBDAC1FC0399D63CA27C8FEB266EFAF_m787C35A46053690A83D5CAB35951742C6439E395 (JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6 * __this, JSONString_tDC7D689F0DBDAC1FC0399D63CA27C8FEB266EFAF * ___aVal0, const RuntimeMethod* method)
{
	return ((  JSONString_tDC7D689F0DBDAC1FC0399D63CA27C8FEB266EFAF * (*) (JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6 *, JSONString_tDC7D689F0DBDAC1FC0399D63CA27C8FEB266EFAF *, const RuntimeMethod*))JSONLazyCreator_Set_TisRuntimeObject_m8C4411A8456C6D37F28F914142F74CF2E41BE391_gshared)(__this, ___aVal0, method);
}
// System.String System.Int64::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int64_ToString_m8AAA883F340993DCDF339C208F3416C3BA82589F (int64_t* __this, const RuntimeMethod* method);
// System.String System.UInt64::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt64_ToString_m3644686F0A0E32CB94D300CF891DBD7920396F37 (uint64_t* __this, const RuntimeMethod* method);
// T SimpleJSON.JSONLazyCreator::Set<SimpleJSON.JSONBool>(T)
inline JSONBool_t9FF67B765B247F2AD7F1614032A0A0EA3497EC62 * JSONLazyCreator_Set_TisJSONBool_t9FF67B765B247F2AD7F1614032A0A0EA3497EC62_m1FAD42F2E9ABBE9BD9EBEE524DBE64636B5B529B (JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6 * __this, JSONBool_t9FF67B765B247F2AD7F1614032A0A0EA3497EC62 * ___aVal0, const RuntimeMethod* method)
{
	return ((  JSONBool_t9FF67B765B247F2AD7F1614032A0A0EA3497EC62 * (*) (JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6 *, JSONBool_t9FF67B765B247F2AD7F1614032A0A0EA3497EC62 *, const RuntimeMethod*))JSONLazyCreator_Set_TisRuntimeObject_m8C4411A8456C6D37F28F914142F74CF2E41BE391_gshared)(__this, ___aVal0, method);
}
// System.Void SimpleJSON.JSONNode/<get_Children>d__43::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__43__ctor_m4A8B228BE4DA2CA88DD8CE8C67D0357664EB26A9 (U3Cget_ChildrenU3Ed__43_t676D15A68B9E4445BE9089BCD930635F8DC59D80 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void SimpleJSON.JSONNode/<get_DeepChildren>d__45::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_DeepChildrenU3Ed__45__ctor_m3800B443AD95F9F5ED8AF4FA4C43CD43DEBF685A (U3Cget_DeepChildrenU3Ed__45_tCD907C30A1B957DFC6A9DC8CFCC199DD51C378FA * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Void SimpleJSON.JSONNode/LinqEnumerator::.ctor(SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinqEnumerator__ctor_m3B100A94EC3DF14B4A94AE12D32050F84E72F65B (LinqEnumerator_t45B8943C727186418953AAB476E680E60C03D038 * __this, JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * ___aNode0, const RuntimeMethod* method);
// System.Void SimpleJSON.JSONNode/KeyEnumerator::.ctor(SimpleJSON.JSONNode/Enumerator)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyEnumerator__ctor_m0747B3AC824951C3C8B818496CEDD6D88B9E7E8A_inline (KeyEnumerator_t480359137170FD764CB75A243A787E1AEDF89585 * __this, Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8  ___aEnumerator0, const RuntimeMethod* method);
// System.Void SimpleJSON.JSONNode/ValueEnumerator::.ctor(SimpleJSON.JSONNode/Enumerator)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueEnumerator__ctor_mCB3648E562A32EEA21FD3F4DB8C20160ED03722E_inline (ValueEnumerator_tF3B99F2AF4F29E348D9CEF62A42AF04D04DB0C61 * __this, Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8  ___aEnumerator0, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164 (const RuntimeMethod* method);
// System.Boolean System.Double::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_TryParse_mE740D7083AC52793A9634067C4F032570FFBF61E (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, double* ___result3, const RuntimeMethod* method);
// System.String System.Double::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m4D920091736623333AE0E32439DBD5CF5AC128FE (double* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Boolean System.Int64::TryParse(System.String,System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int64_TryParse_m6EA988890D7F9954EA49A7227E60B3C674930650 (String_t* ___s0, int64_t* ___result1, const RuntimeMethod* method);
// System.Boolean System.UInt64::TryParse(System.String,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UInt64_TryParse_m9A4700B9A5FD8F9B5270914DA0DF310A6BD07AE5 (String_t* ___s0, uint64_t* ___result1, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>::get_Value()
inline JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * KeyValuePair_2_get_Value_mD27150EA5031B873539FD3D826C77219F3FFE044_inline (KeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46 * __this, const RuntimeMethod* method)
{
	return ((  JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * (*) (KeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m8425596BB4249956819960EC76E618357F573E76_gshared_inline)(__this, method);
}
// System.Int32 System.Object::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Object_GetHashCode_m29972277898725CF5403FB9765F335F0FAEA8162 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Text.StringBuilder SimpleJSON.JSONNode::get_EscapeBuilder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * JSONNode_get_EscapeBuilder_m0ACB6810C49FC1E2246978F2E5C66F7344422458 (const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::set_Length(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder_set_Length_m7C1756193B05DCA5A23C5DC98EE90A9FC685A27A (StringBuilder_t * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 System.Text.StringBuilder::get_Capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Capacity_m067D01B281C708C07EB01C776CA99B72C4F78B30 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::set_Capacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder_set_Capacity_mC1488A3E3622EE7B0A7A340F22A55CCFBBF21669 (StringBuilder_t * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.String System.UInt16::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt16_ToString_mB9BF3213F6AC036243B6AB79B0C98C4C727FB6E1 (uint16_t* __this, String_t* ___format0, const RuntimeMethod* method);
// SimpleJSON.JSONNode SimpleJSON.JSONNode::op_Implicit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * JSONNode_op_Implicit_mC6392F9282360F9ABD3AC734B18BF94C1FB7F107 (String_t* ___s0, const RuntimeMethod* method);
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m7875A49FE166D0A68F3F6B6E70C0C056EBEFD31D (String_t* __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// SimpleJSON.JSONNode SimpleJSON.JSONNode::op_Implicit(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * JSONNode_op_Implicit_m04174CC463B2FAAA3893DA0E1BC5F0EB0280C3B5 (bool ___b0, const RuntimeMethod* method);
// SimpleJSON.JSONNode SimpleJSON.JSONNode::op_Implicit(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * JSONNode_op_Implicit_mDB9E40DDE6449122804576F1F4FC2D1BD9FE9721 (double ___n0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<SimpleJSON.JSONNode>::.ctor()
inline void Stack_1__ctor_mF4CDE42219FEEE8D7E0FA47CB1BB69A526F72D9D (Stack_1_t49EAD5E51500DDF3F8D6C96A7AD0A78A1F3E87A0 * __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t49EAD5E51500DDF3F8D6C96A7AD0A78A1F3E87A0 *, const RuntimeMethod*))Stack_1__ctor_mD782ADAC3AB9809F63B681213A7A39784A9A169A_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Stack`1<SimpleJSON.JSONNode>::Push(!0)
inline void Stack_1_Push_m1E86B0066F1B1B437493EF892300488D36FF18D7 (Stack_1_t49EAD5E51500DDF3F8D6C96A7AD0A78A1F3E87A0 * __this, JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t49EAD5E51500DDF3F8D6C96A7AD0A78A1F3E87A0 *, JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 *, const RuntimeMethod*))Stack_1_Push_m8FFF613733BF88B54FCD4498B1E97DE296E27757_gshared)(__this, ___item0, method);
}
// !0 System.Collections.Generic.Stack`1<SimpleJSON.JSONNode>::Peek()
inline JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * Stack_1_Peek_m29E66649B5F2FD64F2C6838AD05AEF7DF7521B5D (Stack_1_t49EAD5E51500DDF3F8D6C96A7AD0A78A1F3E87A0 * __this, const RuntimeMethod* method)
{
	return ((  JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * (*) (Stack_1_t49EAD5E51500DDF3F8D6C96A7AD0A78A1F3E87A0 *, const RuntimeMethod*))Stack_1_Peek_m2060B46CD5CCD8A93C5CC558C6D3EF027862FE59_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.Stack`1<SimpleJSON.JSONNode>::get_Count()
inline int32_t Stack_1_get_Count_m35DDA92DEDAD74B4E432CBD3C997F1E78473AAC4_inline (Stack_1_t49EAD5E51500DDF3F8D6C96A7AD0A78A1F3E87A0 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_t49EAD5E51500DDF3F8D6C96A7AD0A78A1F3E87A0 *, const RuntimeMethod*))Stack_1_get_Count_mFD1C100DE65847CAB033057C77027AA5DB427B54_gshared_inline)(__this, method);
}
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<SimpleJSON.JSONNode>::Pop()
inline JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * Stack_1_Pop_mBA20C63F5B09D8617F58E73C88D6BB8ECD97ECB7 (Stack_1_t49EAD5E51500DDF3F8D6C96A7AD0A78A1F3E87A0 * __this, const RuntimeMethod* method)
{
	return ((  JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * (*) (Stack_1_t49EAD5E51500DDF3F8D6C96A7AD0A78A1F3E87A0 *, const RuntimeMethod*))Stack_1_Pop_m883C5DEF33CA2E556AC710A9BE26F8BD2D4B182C_gshared)(__this, method);
}
// System.Int32 System.Text.StringBuilder::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0 (StringBuilder_t * __this, const RuntimeMethod* method);
// SimpleJSON.JSONNode SimpleJSON.JSONNode::ParseElement(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * JSONNode_ParseElement_mA7B19451D1A3A82B822DB5C563CF26DA7712D925 (String_t* ___token0, bool ___quoted1, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method);
// System.Int32 System.Int32::Parse(System.String,System.Globalization.NumberStyles)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_mE2DF841397B10B947C6729D5B811D0C25D211A56 (String_t* ___s0, int32_t ___style1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void SimpleJSON.JSONNull::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNull__ctor_m774EAA6C8365C47B27BDB3FAD8C28686A1105033 (JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47 * __this, const RuntimeMethod* method);
// System.Boolean SimpleJSON.JSONNode::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNode_Equals_mBFF7A822B266FD96F6A6B54433B3F9A00CE06AA0 (JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean SimpleJSON.JSONNumber::IsNumeric(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNumber_IsNumeric_mFAC1B74A6BD2705D6B2952D74DA6DF6D38C4F268 (RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Double System.Convert::ToDouble(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Convert_ToDouble_mF6F0642EA16CAB414EEA621DEAA519527DA64284 (RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Int32 System.Double::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Double_GetHashCode_m33CB20AA5674C6F4367B7B08340B33FB979F9F39 (double* __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::GetEnumerator()
inline Enumerator_tCE541D75AA851CBCC2F41CB77FDD2C3DA76C09AC  Dictionary_2_GetEnumerator_mDCF3F7F20F872ADC03A74F11C55EB2B702EF2441 (Dictionary_2_tAFDD9B13B8A8D35E8017B1AD49EE8DCF947CD740 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tCE541D75AA851CBCC2F41CB77FDD2C3DA76C09AC  (*) (Dictionary_2_tAFDD9B13B8A8D35E8017B1AD49EE8DCF947CD740 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_mD80BA563C32BF7C1EE95C9FC1BE3B423716CCE68_gshared)(__this, method);
}
// System.Void SimpleJSON.JSONNode/Enumerator::.ctor(System.Collections.Generic.Dictionary`2/Enumerator<System.String,SimpleJSON.JSONNode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m1DBE7DBD0628D4C87A31D88096548AF2917CC576 (Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8 * __this, Enumerator_tCE541D75AA851CBCC2F41CB77FDD2C3DA76C09AC  ___aDictEnum0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_mF07D404CDE09597A5210DE02BCE5EE90CEAB475C (Dictionary_2_tAFDD9B13B8A8D35E8017B1AD49EE8DCF947CD740 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tAFDD9B13B8A8D35E8017B1AD49EE8DCF947CD740 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_mCABABA5D0FA017D2D54BE4FA6256C51518274116_gshared)(__this, ___key0, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::get_Item(!0)
inline JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * Dictionary_2_get_Item_mEAC6AA9D4E6BD2EC57809A9EF2E518F581F021DF (Dictionary_2_tAFDD9B13B8A8D35E8017B1AD49EE8DCF947CD740 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * (*) (Dictionary_2_tAFDD9B13B8A8D35E8017B1AD49EE8DCF947CD740 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mF3BA34126DA8AFA32D1E5285D842C5955C698F0D_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m06FAF0E96CC7771A89ED9A9DE592B8B166E228C3 (Dictionary_2_tAFDD9B13B8A8D35E8017B1AD49EE8DCF947CD740 * __this, String_t* ___key0, JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tAFDD9B13B8A8D35E8017B1AD49EE8DCF947CD740 *, String_t*, JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 *, const RuntimeMethod*))Dictionary_2_set_Item_mA8F31A10EE1129768E13ACC4DC847B05EAD2A055_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::Add(!0,!1)
inline void Dictionary_2_Add_m9C14F88CD2235159DA9FFAAC62C6F7AD4E7E74BB (Dictionary_2_tAFDD9B13B8A8D35E8017B1AD49EE8DCF947CD740 * __this, String_t* ___key0, JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tAFDD9B13B8A8D35E8017B1AD49EE8DCF947CD740 *, String_t*, JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 *, const RuntimeMethod*))Dictionary_2_Add_m1D9CF8FA99A277EE49BC3002FDEAACDCDB29803B_gshared)(__this, ___key0, ___value1, method);
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::get_Count()
inline int32_t Dictionary_2_get_Count_m47132E509248623F0403F4226E25E62D482284D6 (Dictionary_2_tAFDD9B13B8A8D35E8017B1AD49EE8DCF947CD740 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tAFDD9B13B8A8D35E8017B1AD49EE8DCF947CD740 *, const RuntimeMethod*))Dictionary_2_get_Count_m1B599EE742A00E8D399B43E225AD4C6571FBC8DA_gshared)(__this, method);
}
// !!0 System.Linq.Enumerable::ElementAt<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>>(System.Collections.Generic.IEnumerable`1<!!0>,System.Int32)
inline KeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46  Enumerable_ElementAt_TisKeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46_m0B0DB4F927A044580DE56D31595028F8B15C38DD (RuntimeObject* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46  (*) (RuntimeObject*, int32_t, const RuntimeMethod*))Enumerable_ElementAt_TisKeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625_m273B6F69504A684113E4C66F7235331A3D055D92_gshared)(___source0, ___index1, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>::get_Key()
inline String_t* KeyValuePair_2_get_Key_mD3950240DC492EBEB494BE0AEF2CB4223CFBA08D_inline (KeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46 *, const RuntimeMethod*))KeyValuePair_2_get_Key_mEFB776105F87A4EAB1CAC3F0C96C4D0B79F3F03D_gshared_inline)(__this, method);
}
// System.Guid System.Guid::NewGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t  Guid_NewGuid_m5BD19325820690ED6ECA31D67BC2CD474DC4FDB0 (const RuntimeMethod* method);
// System.String System.Guid::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_mA3AB7742FB0E04808F580868E82BDEB93187FB75 (Guid_t * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::Remove(!0)
inline bool Dictionary_2_Remove_m7BAD52D08C79633F1EF068E34DDF27F87F91316B (Dictionary_2_tAFDD9B13B8A8D35E8017B1AD49EE8DCF947CD740 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tAFDD9B13B8A8D35E8017B1AD49EE8DCF947CD740 *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m45DB5340BC5312349874253DD3239546CB025D21_gshared)(__this, ___key0, method);
}
// System.Void SimpleJSON.JSONObject/<>c__DisplayClass21_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0__ctor_mE55EB0815ED94FB7DA4223EB2B1D83A792D49444 (U3CU3Ec__DisplayClass21_0_t5F3C45E238AB19808012EFB4181E62F4DCED84CC * __this, const RuntimeMethod* method);
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mFC68D1988FD14FF974070B18474265493B4EE19B (Func_2_t0590A4A7DD386E29A0B0552177EEED331B7D69C1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t0590A4A7DD386E29A0B0552177EEED331B7D69C1 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m03715B6DDEC4F9E5EED2E464BB22A6C4C9500DCB_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisKeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46_mB4671BA5C74527947CCD670926BA049318F638F9 (RuntimeObject* ___source0, Func_2_t0590A4A7DD386E29A0B0552177EEED331B7D69C1 * ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t0590A4A7DD386E29A0B0552177EEED331B7D69C1 *, const RuntimeMethod*))Enumerable_Where_TisKeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625_mF12AF337F1F8C3FD7743967A64D5268623498A9D_gshared)(___source0, ___predicate1, method);
}
// !!0 System.Linq.Enumerable::First<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>>(System.Collections.Generic.IEnumerable`1<!!0>)
inline KeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46  Enumerable_First_TisKeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46_mEAEB4906A04BD2286F641D9D952C701B89087E9F (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46  (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_First_TisKeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625_m763A849DA06D805A477A9F940239007A837C37A5_gshared)(___source0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::Clear()
inline void Dictionary_2_Clear_m4C1946103ABDF133A308278B6819199E0D1EE22F (Dictionary_2_tAFDD9B13B8A8D35E8017B1AD49EE8DCF947CD740 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tAFDD9B13B8A8D35E8017B1AD49EE8DCF947CD740 *, const RuntimeMethod*))Dictionary_2_Clear_m883E91BB19072DD91E8FA3BEDA31D0FA095667EA_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.String,SimpleJSON.JSONNode>::get_Current()
inline KeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46  Enumerator_get_Current_m8D5B4B174FCF301C8B25C69BC26D7DF5BCAFFE72_inline (Enumerator_tCE541D75AA851CBCC2F41CB77FDD2C3DA76C09AC * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46  (*) (Enumerator_tCE541D75AA851CBCC2F41CB77FDD2C3DA76C09AC *, const RuntimeMethod*))Enumerator_get_Current_m39BB9CD07FEC0DBEDFE938630364A23C9A87FC3F_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,SimpleJSON.JSONNode>::MoveNext()
inline bool Enumerator_MoveNext_m2F43C4805222C8A5C8027DC246081895540A7D17 (Enumerator_tCE541D75AA851CBCC2F41CB77FDD2C3DA76C09AC * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tCE541D75AA851CBCC2F41CB77FDD2C3DA76C09AC *, const RuntimeMethod*))Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,SimpleJSON.JSONNode>::Dispose()
inline void Enumerator_Dispose_m69943D9522B275330B702DE01A3289247FFFE383 (Enumerator_tCE541D75AA851CBCC2F41CB77FDD2C3DA76C09AC * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tCE541D75AA851CBCC2F41CB77FDD2C3DA76C09AC *, const RuntimeMethod*))Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m6E16D0D059D86A3676475D36BD7A8C07FC99A629 (Dictionary_2_tAFDD9B13B8A8D35E8017B1AD49EE8DCF947CD740 * __this, String_t* ___key0, JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tAFDD9B13B8A8D35E8017B1AD49EE8DCF947CD740 *, String_t*, JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 **, const RuntimeMethod*))Dictionary_2_TryGetValue_mE985A35FC727FA9F519564063C5C5063209ADDA8_gshared)(__this, ___key0, ___value1, method);
}
// System.Void SimpleJSON.JSONObject/<get_Children>d__27::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__27__ctor_m999A61696E996872553914C6C4D8E86DFA4E7CFC (U3Cget_ChildrenU3Ed__27_tBAFD832B8A29905C1FDBEF21DACF57DF3850E73E * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.String SimpleJSON.JSONNode::Escape(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONNode_Escape_m71E3F923CC34FB0961ACD615E516B61AB60BBE23 (String_t* ___aText0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>::.ctor()
inline void Dictionary_2__ctor_m6105C1DC5F16DE35DE5DD8D35763D4C01F0F91ED (Dictionary_2_tAFDD9B13B8A8D35E8017B1AD49EE8DCF947CD740 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tAFDD9B13B8A8D35E8017B1AD49EE8DCF947CD740 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D (const RuntimeMethod* method);
// System.Void SimpleJSON.JSONArray/<get_Children>d__24::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__24_U3CU3Em__Finally1_m547151291D1595579CC8948861EAB01168C509B5 (U3Cget_ChildrenU3Ed__24_t0B4B41955B2D2AF5198DD9E35A1F9B8F7DA975FD * __this, const RuntimeMethod* method);
// System.Void SimpleJSON.JSONArray/<get_Children>d__24::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__24_System_IDisposable_Dispose_m9F772EA0CE9EAF94AA2EB8611E3FABC53DC8AECD (U3Cget_ChildrenU3Ed__24_t0B4B41955B2D2AF5198DD9E35A1F9B8F7DA975FD * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode> SimpleJSON.JSONArray/<get_Children>d__24::System.Collections.Generic.IEnumerable<SimpleJSON.JSONNode>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildrenU3Ed__24_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m09E3FAE760C9B87A35DBDF715E3556D67DD26A1A (U3Cget_ChildrenU3Ed__24_t0B4B41955B2D2AF5198DD9E35A1F9B8F7DA975FD * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode/<get_Children>d__43::System.Collections.Generic.IEnumerable<SimpleJSON.JSONNode>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildrenU3Ed__43_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m01ED6319833B8418EF465768BFF36D13CB058563 (U3Cget_ChildrenU3Ed__43_t676D15A68B9E4445BE9089BCD930635F8DC59D80 * __this, const RuntimeMethod* method);
// System.Void SimpleJSON.JSONNode/<get_DeepChildren>d__45::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_DeepChildrenU3Ed__45_U3CU3Em__Finally2_m98BC844827185D4A927492249BBF3F888FFF0454 (U3Cget_DeepChildrenU3Ed__45_tCD907C30A1B957DFC6A9DC8CFCC199DD51C378FA * __this, const RuntimeMethod* method);
// System.Void SimpleJSON.JSONNode/<get_DeepChildren>d__45::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_DeepChildrenU3Ed__45_U3CU3Em__Finally1_m92B26962014EB8727CACC7B5E6F7F628E2CA56A8 (U3Cget_DeepChildrenU3Ed__45_tCD907C30A1B957DFC6A9DC8CFCC199DD51C378FA * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode::get_DeepChildren()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JSONNode_get_DeepChildren_mF66414308628678DEA3A73F7B6841D82D99020CE (JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * __this, const RuntimeMethod* method);
// System.Void SimpleJSON.JSONNode/<get_DeepChildren>d__45::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_DeepChildrenU3Ed__45_System_IDisposable_Dispose_m5B889C6FB6BBCF1E149287DA9D91F61084D161B8 (U3Cget_DeepChildrenU3Ed__45_tCD907C30A1B957DFC6A9DC8CFCC199DD51C378FA * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode/<get_DeepChildren>d__45::System.Collections.Generic.IEnumerable<SimpleJSON.JSONNode>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_DeepChildrenU3Ed__45_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_mA5A8FA8A38ADC1FA3EBCF738521CCE87F0788837 (U3Cget_DeepChildrenU3Ed__45_tCD907C30A1B957DFC6A9DC8CFCC199DD51C378FA * __this, const RuntimeMethod* method);
// System.Boolean SimpleJSON.JSONNode/Enumerator::get_IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_get_IsValid_mFA3BB4B7F43B1005535936519FD3A42F5B23981E (Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>::.ctor(!0,!1)
inline void KeyValuePair_2__ctor_mCCC7B7D252423D44D5C462671EF92285311CD04D (KeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46 * __this, String_t* ___key0, JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46 *, String_t*, JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 *, const RuntimeMethod*))KeyValuePair_2__ctor_m463456D9FF698859454DF07DE8A0D4A25BD28C9B_gshared)(__this, ___key0, ___value1, method);
}
// System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode> SimpleJSON.JSONNode/Enumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46  Enumerator_get_Current_mF9E718C3795EB611071FF790A62BB5CAFD377FA9 (Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8 * __this, const RuntimeMethod* method);
// System.Boolean SimpleJSON.JSONNode/Enumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m580CDFBD1C55B6794F5567E544DE9857A5618A6E (Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8 * __this, const RuntimeMethod* method);
// System.Void SimpleJSON.JSONNode/KeyEnumerator::.ctor(System.Collections.Generic.List`1/Enumerator<SimpleJSON.JSONNode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyEnumerator__ctor_m13B6087FA46C7C03A3471C28B3FBC22DD4171FC7 (KeyEnumerator_t480359137170FD764CB75A243A787E1AEDF89585 * __this, Enumerator_tDA1783FBD1372348634FED4EDC7396A489A211FA  ___aArrayEnum0, const RuntimeMethod* method);
// System.Void SimpleJSON.JSONNode/KeyEnumerator::.ctor(System.Collections.Generic.Dictionary`2/Enumerator<System.String,SimpleJSON.JSONNode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyEnumerator__ctor_mD48489EDADC6546248A26244922162520AD16C3B (KeyEnumerator_t480359137170FD764CB75A243A787E1AEDF89585 * __this, Enumerator_tCE541D75AA851CBCC2F41CB77FDD2C3DA76C09AC  ___aDictEnum0, const RuntimeMethod* method);
// System.String SimpleJSON.JSONNode/KeyEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* KeyEnumerator_get_Current_mBF34CC35F2C34AC227D1621C8F0927D7C93AC26C (KeyEnumerator_t480359137170FD764CB75A243A787E1AEDF89585 * __this, const RuntimeMethod* method);
// System.Boolean SimpleJSON.JSONNode/KeyEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KeyEnumerator_MoveNext_m99B9BF2D4062F287B8D3A55C2C691537CAFE6F98 (KeyEnumerator_t480359137170FD764CB75A243A787E1AEDF89585 * __this, const RuntimeMethod* method);
// SimpleJSON.JSONNode/KeyEnumerator SimpleJSON.JSONNode/KeyEnumerator::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyEnumerator_t480359137170FD764CB75A243A787E1AEDF89585  KeyEnumerator_GetEnumerator_m0243DD23679D98AE2F30AD67FFFD4E27A16AB170 (KeyEnumerator_t480359137170FD764CB75A243A787E1AEDF89585 * __this, const RuntimeMethod* method);
// System.Void SimpleJSON.JSONNode/ValueEnumerator::.ctor(System.Collections.Generic.List`1/Enumerator<SimpleJSON.JSONNode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueEnumerator__ctor_m9E8A702BF30F549C55B441B43EBBF823D1F8C3AF (ValueEnumerator_tF3B99F2AF4F29E348D9CEF62A42AF04D04DB0C61 * __this, Enumerator_tDA1783FBD1372348634FED4EDC7396A489A211FA  ___aArrayEnum0, const RuntimeMethod* method);
// System.Void SimpleJSON.JSONNode/ValueEnumerator::.ctor(System.Collections.Generic.Dictionary`2/Enumerator<System.String,SimpleJSON.JSONNode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueEnumerator__ctor_mD13470952E4791B2DC48D9A64AD1735248EC0AF2 (ValueEnumerator_tF3B99F2AF4F29E348D9CEF62A42AF04D04DB0C61 * __this, Enumerator_tCE541D75AA851CBCC2F41CB77FDD2C3DA76C09AC  ___aDictEnum0, const RuntimeMethod* method);
// SimpleJSON.JSONNode SimpleJSON.JSONNode/ValueEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * ValueEnumerator_get_Current_mF69BBD9003C127D62E50E3A2AB4179EA3863B710 (ValueEnumerator_tF3B99F2AF4F29E348D9CEF62A42AF04D04DB0C61 * __this, const RuntimeMethod* method);
// System.Boolean SimpleJSON.JSONNode/ValueEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueEnumerator_MoveNext_mFBBE4BD2BD4BEDC52A09992FFB2BE22E61571C4B (ValueEnumerator_tF3B99F2AF4F29E348D9CEF62A42AF04D04DB0C61 * __this, const RuntimeMethod* method);
// SimpleJSON.JSONNode/ValueEnumerator SimpleJSON.JSONNode/ValueEnumerator::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueEnumerator_tF3B99F2AF4F29E348D9CEF62A42AF04D04DB0C61  ValueEnumerator_GetEnumerator_mB4E3F0A6AC7AA6140B861775571A15036BECB254 (ValueEnumerator_tF3B99F2AF4F29E348D9CEF62A42AF04D04DB0C61 * __this, const RuntimeMethod* method);
// System.Void SimpleJSON.JSONObject/<get_Children>d__27::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__27_U3CU3Em__Finally1_m9A4036B7026E7B3B412A965843E786D6D81A30C7 (U3Cget_ChildrenU3Ed__27_tBAFD832B8A29905C1FDBEF21DACF57DF3850E73E * __this, const RuntimeMethod* method);
// System.Void SimpleJSON.JSONObject/<get_Children>d__27::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__27_System_IDisposable_Dispose_mD5D0D2897E7A2CB0C11B9AFB1CFE8691E117CB66 (U3Cget_ChildrenU3Ed__27_tBAFD832B8A29905C1FDBEF21DACF57DF3850E73E * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode> SimpleJSON.JSONObject/<get_Children>d__27::System.Collections.Generic.IEnumerable<SimpleJSON.JSONNode>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildrenU3Ed__27_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_mEA40F1676AB5798F64BAB7F4981576428D0872E0 (U3Cget_ChildrenU3Ed__27_tBAFD832B8A29905C1FDBEF21DACF57DF3850E73E * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// SimpleJSON.JSONNode SimpleJSON.JSON::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * JSON_Parse_mE96FEEA722459A42C836CCF97AE3D01A1912D85D (String_t* ___aJSON0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return JSONNode.Parse(aJSON);
		String_t* L_0 = ___aJSON0;
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_1;
		L_1 = JSONNode_Parse_m69AEF21E17F84854BF203846254C8B943E9FEF21(L_0, /*hidden argument*/NULL);
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
// System.Boolean SimpleJSON.JSONArray::get_Inline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONArray_get_Inline_mC00FE5764DBE022CB2A6BF50824C467CF01FCB01 (JSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E * __this, const RuntimeMethod* method)
{
	{
		// get { return inline; }
		bool L_0 = __this->get_inline_5();
		return L_0;
	}
}
// System.Void SimpleJSON.JSONArray::set_Inline(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONArray_set_Inline_mCBDA88B1041B9DDFB22CF1F95D2C9AF533C11231 (JSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { inline = value; }
		bool L_0 = ___value0;
		__this->set_inline_5(L_0);
		// set { inline = value; }
		return;
	}
}
// SimpleJSON.JSONNodeType SimpleJSON.JSONArray::get_Tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONArray_get_Tag_mBA7D2708AFD83F55024FEE237CB4CC2B53ECFDDA (JSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E * __this, const RuntimeMethod* method)
{
	{
		// public override JSONNodeType Tag { get { return JSONNodeType.Array; } }
		return (int32_t)(1);
	}
}
// System.Boolean SimpleJSON.JSONArray::get_IsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONArray_get_IsArray_m194C15DF5096C82E67284D79ECC9D52A783A5B21 (JSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E * __this, const RuntimeMethod* method)
{
	{
		// public override bool IsArray { get { return true; } }
		return (bool)1;
	}
}
// SimpleJSON.JSONNode/Enumerator SimpleJSON.JSONArray::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8  JSONArray_GetEnumerator_m0B2C42AB0E7CD1C885EE73FFBC8A67964C58B18D (JSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m04D3744D5A2851C740631E66DC681938D0C3381B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override Enumerator GetEnumerator() { return new Enumerator(m_List.GetEnumerator()); }
		List_1_t5575902E70199AF34CD1695997CE7E53A1509646 * L_0 = __this->get_m_List_4();
		NullCheck(L_0);
		Enumerator_tDA1783FBD1372348634FED4EDC7396A489A211FA  L_1;
		L_1 = List_1_GetEnumerator_m04D3744D5A2851C740631E66DC681938D0C3381B(L_0, /*hidden argument*/List_1_GetEnumerator_m04D3744D5A2851C740631E66DC681938D0C3381B_RuntimeMethod_var);
		Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Enumerator__ctor_m057901299D85978F34E86C2B99997599C904516F((&L_2), L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONArray::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * JSONArray_get_Item_mB91E086B47603F6EB9E27B95FCAD0E696B2D6F35 (JSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E * __this, int32_t ___aIndex0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C4DE135CD00FF88D00A978F68019097CA375E1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mFC2B27BFC88F482BA024BBE4896041DB9ABCC979_RuntimeMethod_var);
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
		List_1_t5575902E70199AF34CD1695997CE7E53A1509646 * L_2 = __this->get_m_List_4();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m4C4DE135CD00FF88D00A978F68019097CA375E1B_inline(L_2, /*hidden argument*/List_1_get_Count_m4C4DE135CD00FF88D00A978F68019097CA375E1B_RuntimeMethod_var);
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0019;
		}
	}

IL_0012:
	{
		// return new JSONLazyCreator(this);
		JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6 * L_4 = (JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6 *)il2cpp_codegen_object_new(JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6_il2cpp_TypeInfo_var);
		JSONLazyCreator__ctor_m0B79861AA63A30F62B32C3A2F3A87F152C1015F6(L_4, __this, /*hidden argument*/NULL);
		return L_4;
	}

IL_0019:
	{
		// return m_List[aIndex];
		List_1_t5575902E70199AF34CD1695997CE7E53A1509646 * L_5 = __this->get_m_List_4();
		int32_t L_6 = ___aIndex0;
		NullCheck(L_5);
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_7;
		L_7 = List_1_get_Item_mFC2B27BFC88F482BA024BBE4896041DB9ABCC979_inline(L_5, L_6, /*hidden argument*/List_1_get_Item_mFC2B27BFC88F482BA024BBE4896041DB9ABCC979_RuntimeMethod_var);
		return L_7;
	}
}
// System.Void SimpleJSON.JSONArray::set_Item(System.Int32,SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONArray_set_Item_mF4A3E324D160BF0AD1427B88A2B47F700EB69696 (JSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E * __this, int32_t ___aIndex0, JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m438AD4912996174DEF92B8BFCAE67FEA62FC30AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C4DE135CD00FF88D00A978F68019097CA375E1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m4A3219187EB2E715BEBB958BD529044CC1FB89D9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value == null)
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_0 = ___value1;
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = JSONNode_op_Equality_mEB349D8644B8E3F87CD33A35457A00480EFB329A(L_0, NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// value = JSONNull.CreateOrGet();
		IL2CPP_RUNTIME_CLASS_INIT(JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47_il2cpp_TypeInfo_var);
		JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47 * L_2;
		L_2 = JSONNull_CreateOrGet_mE2E06026E04958D2795026FBF38A47FBE14A7AEF(/*hidden argument*/NULL);
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
		List_1_t5575902E70199AF34CD1695997CE7E53A1509646 * L_5 = __this->get_m_List_4();
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_m4C4DE135CD00FF88D00A978F68019097CA375E1B_inline(L_5, /*hidden argument*/List_1_get_Count_m4C4DE135CD00FF88D00A978F68019097CA375E1B_RuntimeMethod_var);
		if ((((int32_t)L_4) < ((int32_t)L_6)))
		{
			goto IL_002f;
		}
	}

IL_0022:
	{
		// m_List.Add(value);
		List_1_t5575902E70199AF34CD1695997CE7E53A1509646 * L_7 = __this->get_m_List_4();
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_8 = ___value1;
		NullCheck(L_7);
		List_1_Add_m438AD4912996174DEF92B8BFCAE67FEA62FC30AD(L_7, L_8, /*hidden argument*/List_1_Add_m438AD4912996174DEF92B8BFCAE67FEA62FC30AD_RuntimeMethod_var);
		return;
	}

IL_002f:
	{
		// m_List[aIndex] = value;
		List_1_t5575902E70199AF34CD1695997CE7E53A1509646 * L_9 = __this->get_m_List_4();
		int32_t L_10 = ___aIndex0;
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_11 = ___value1;
		NullCheck(L_9);
		List_1_set_Item_m4A3219187EB2E715BEBB958BD529044CC1FB89D9(L_9, L_10, L_11, /*hidden argument*/List_1_set_Item_m4A3219187EB2E715BEBB958BD529044CC1FB89D9_RuntimeMethod_var);
		// }
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONArray::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * JSONArray_get_Item_m411ED75FE2A99BEA55FE44AB9C844D971A4BC815 (JSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E * __this, String_t* ___aKey0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return new JSONLazyCreator(this); }
		JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6 * L_0 = (JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6 *)il2cpp_codegen_object_new(JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6_il2cpp_TypeInfo_var);
		JSONLazyCreator__ctor_m0B79861AA63A30F62B32C3A2F3A87F152C1015F6(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void SimpleJSON.JSONArray::set_Item(System.String,SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONArray_set_Item_mF61DBA24AB5A0323BDBA8F38F1C4504FC7A7D3E6 (JSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E * __this, String_t* ___aKey0, JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m438AD4912996174DEF92B8BFCAE67FEA62FC30AD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value == null)
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_0 = ___value1;
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = JSONNode_op_Equality_mEB349D8644B8E3F87CD33A35457A00480EFB329A(L_0, NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// value = JSONNull.CreateOrGet();
		IL2CPP_RUNTIME_CLASS_INIT(JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47_il2cpp_TypeInfo_var);
		JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47 * L_2;
		L_2 = JSONNull_CreateOrGet_mE2E06026E04958D2795026FBF38A47FBE14A7AEF(/*hidden argument*/NULL);
		___value1 = L_2;
	}

IL_0010:
	{
		// m_List.Add(value);
		List_1_t5575902E70199AF34CD1695997CE7E53A1509646 * L_3 = __this->get_m_List_4();
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_4 = ___value1;
		NullCheck(L_3);
		List_1_Add_m438AD4912996174DEF92B8BFCAE67FEA62FC30AD(L_3, L_4, /*hidden argument*/List_1_Add_m438AD4912996174DEF92B8BFCAE67FEA62FC30AD_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Int32 SimpleJSON.JSONArray::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONArray_get_Count_m9468CAC9D288419DE8A7CA235B32EBC9FBF558B7 (JSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C4DE135CD00FF88D00A978F68019097CA375E1B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return m_List.Count; }
		List_1_t5575902E70199AF34CD1695997CE7E53A1509646 * L_0 = __this->get_m_List_4();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m4C4DE135CD00FF88D00A978F68019097CA375E1B_inline(L_0, /*hidden argument*/List_1_get_Count_m4C4DE135CD00FF88D00A978F68019097CA375E1B_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void SimpleJSON.JSONArray::Add(System.String,SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONArray_Add_mFDEF8511E0C68436BDFEF07162C4F0AF4EAA2970 (JSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E * __this, String_t* ___aKey0, JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * ___aItem1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m438AD4912996174DEF92B8BFCAE67FEA62FC30AD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (aItem == null)
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_0 = ___aItem1;
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = JSONNode_op_Equality_mEB349D8644B8E3F87CD33A35457A00480EFB329A(L_0, NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// aItem = JSONNull.CreateOrGet();
		IL2CPP_RUNTIME_CLASS_INIT(JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47_il2cpp_TypeInfo_var);
		JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47 * L_2;
		L_2 = JSONNull_CreateOrGet_mE2E06026E04958D2795026FBF38A47FBE14A7AEF(/*hidden argument*/NULL);
		___aItem1 = L_2;
	}

IL_0010:
	{
		// m_List.Add(aItem);
		List_1_t5575902E70199AF34CD1695997CE7E53A1509646 * L_3 = __this->get_m_List_4();
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_4 = ___aItem1;
		NullCheck(L_3);
		List_1_Add_m438AD4912996174DEF92B8BFCAE67FEA62FC30AD(L_3, L_4, /*hidden argument*/List_1_Add_m438AD4912996174DEF92B8BFCAE67FEA62FC30AD_RuntimeMethod_var);
		// }
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONArray::Remove(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * JSONArray_Remove_mD3958262883D23A7E689E01AEF74DF589AD323FE (JSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E * __this, int32_t ___aIndex0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mEBF7FDF448806C118A40503C7C14AE24AE7CE194_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C4DE135CD00FF88D00A978F68019097CA375E1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mFC2B27BFC88F482BA024BBE4896041DB9ABCC979_RuntimeMethod_var);
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
		List_1_t5575902E70199AF34CD1695997CE7E53A1509646 * L_2 = __this->get_m_List_4();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m4C4DE135CD00FF88D00A978F68019097CA375E1B_inline(L_2, /*hidden argument*/List_1_get_Count_m4C4DE135CD00FF88D00A978F68019097CA375E1B_RuntimeMethod_var);
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0014;
		}
	}

IL_0012:
	{
		// return null;
		return (JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 *)NULL;
	}

IL_0014:
	{
		// JSONNode tmp = m_List[aIndex];
		List_1_t5575902E70199AF34CD1695997CE7E53A1509646 * L_4 = __this->get_m_List_4();
		int32_t L_5 = ___aIndex0;
		NullCheck(L_4);
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_6;
		L_6 = List_1_get_Item_mFC2B27BFC88F482BA024BBE4896041DB9ABCC979_inline(L_4, L_5, /*hidden argument*/List_1_get_Item_mFC2B27BFC88F482BA024BBE4896041DB9ABCC979_RuntimeMethod_var);
		// m_List.RemoveAt(aIndex);
		List_1_t5575902E70199AF34CD1695997CE7E53A1509646 * L_7 = __this->get_m_List_4();
		int32_t L_8 = ___aIndex0;
		NullCheck(L_7);
		List_1_RemoveAt_mEBF7FDF448806C118A40503C7C14AE24AE7CE194(L_7, L_8, /*hidden argument*/List_1_RemoveAt_mEBF7FDF448806C118A40503C7C14AE24AE7CE194_RuntimeMethod_var);
		// return tmp;
		return L_6;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONArray::Remove(SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * JSONArray_Remove_m7142B83C03C15E06352847A651143A30DDD53E28 (JSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E * __this, JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * ___aNode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m76A37D3FDBD763730D205C826472852994A48997_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_List.Remove(aNode);
		List_1_t5575902E70199AF34CD1695997CE7E53A1509646 * L_0 = __this->get_m_List_4();
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_1 = ___aNode0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Remove_m76A37D3FDBD763730D205C826472852994A48997(L_0, L_1, /*hidden argument*/List_1_Remove_m76A37D3FDBD763730D205C826472852994A48997_RuntimeMethod_var);
		// return aNode;
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_3 = ___aNode0;
		return L_3;
	}
}
// System.Void SimpleJSON.JSONArray::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONArray_Clear_m81494B498A94CCC0EDD88106EAF5576B1B91D86E (JSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mBA95256993BEDEE342648F4D18F563AFE53226F7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_List.Clear();
		List_1_t5575902E70199AF34CD1695997CE7E53A1509646 * L_0 = __this->get_m_List_4();
		NullCheck(L_0);
		List_1_Clear_mBA95256993BEDEE342648F4D18F563AFE53226F7(L_0, /*hidden argument*/List_1_Clear_mBA95256993BEDEE342648F4D18F563AFE53226F7_RuntimeMethod_var);
		// }
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONArray::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * JSONArray_Clone_mF631257C948CC88C949F01EA3CF7A0A59BE5973D (JSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m7F31F9216A506EB82FA3E6EA1DA9C1E11DB81A3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m425A5F4589B9E03CCCCA6245AF5F20FDADC90FAD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mA04D9F0633F9986798A90E49F1AF69EBAE9466DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m04D3744D5A2851C740631E66DC681938D0C3381B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Capacity_m37D0396B7127B7DC8ABF2FD65D97E35312528266_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Capacity_mC753EC0F1AA3F25EF4207682DC4192DB6EC6EB13_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E * V_0 = NULL;
	Enumerator_tDA1783FBD1372348634FED4EDC7396A489A211FA  V_1;
	memset((&V_1), 0, sizeof(V_1));
	JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// var node = new JSONArray();
		JSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E * L_0 = (JSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E *)il2cpp_codegen_object_new(JSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E_il2cpp_TypeInfo_var);
		JSONArray__ctor_m5F3CE693516DF2278031527B3BEB830D430F78B1(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// node.m_List.Capacity = m_List.Capacity;
		JSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E * L_1 = V_0;
		NullCheck(L_1);
		List_1_t5575902E70199AF34CD1695997CE7E53A1509646 * L_2 = L_1->get_m_List_4();
		List_1_t5575902E70199AF34CD1695997CE7E53A1509646 * L_3 = __this->get_m_List_4();
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Capacity_m37D0396B7127B7DC8ABF2FD65D97E35312528266(L_3, /*hidden argument*/List_1_get_Capacity_m37D0396B7127B7DC8ABF2FD65D97E35312528266_RuntimeMethod_var);
		NullCheck(L_2);
		List_1_set_Capacity_mC753EC0F1AA3F25EF4207682DC4192DB6EC6EB13(L_2, L_4, /*hidden argument*/List_1_set_Capacity_mC753EC0F1AA3F25EF4207682DC4192DB6EC6EB13_RuntimeMethod_var);
		// foreach(var n in m_List)
		List_1_t5575902E70199AF34CD1695997CE7E53A1509646 * L_5 = __this->get_m_List_4();
		NullCheck(L_5);
		Enumerator_tDA1783FBD1372348634FED4EDC7396A489A211FA  L_6;
		L_6 = List_1_GetEnumerator_m04D3744D5A2851C740631E66DC681938D0C3381B(L_5, /*hidden argument*/List_1_GetEnumerator_m04D3744D5A2851C740631E66DC681938D0C3381B_RuntimeMethod_var);
		V_1 = L_6;
	}

IL_0028:
	try
	{// begin try (depth: 1)
		{
			goto IL_0050;
		}

IL_002a:
		{
			// foreach(var n in m_List)
			JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_7;
			L_7 = Enumerator_get_Current_mA04D9F0633F9986798A90E49F1AF69EBAE9466DB_inline((Enumerator_tDA1783FBD1372348634FED4EDC7396A489A211FA *)(&V_1), /*hidden argument*/Enumerator_get_Current_mA04D9F0633F9986798A90E49F1AF69EBAE9466DB_RuntimeMethod_var);
			V_2 = L_7;
			// if (n != null)
			JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_8 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
			bool L_9;
			L_9 = JSONNode_op_Inequality_m22851EA8F1ED30D4A1B977CD92AFEEB246DD098A(L_8, NULL, /*hidden argument*/NULL);
			if (!L_9)
			{
				goto IL_0049;
			}
		}

IL_003b:
		{
			// node.Add(n.Clone());
			JSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E * L_10 = V_0;
			JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_11 = V_2;
			NullCheck(L_11);
			JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_12;
			L_12 = VirtualFuncInvoker0< JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * >::Invoke(26 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::Clone() */, L_11);
			NullCheck(L_10);
			VirtualActionInvoker1< JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * >::Invoke(21 /* System.Void SimpleJSON.JSONNode::Add(SimpleJSON.JSONNode) */, L_10, L_12);
			goto IL_0050;
		}

IL_0049:
		{
			// node.Add(null);
			JSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E * L_13 = V_0;
			NullCheck(L_13);
			VirtualActionInvoker1< JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * >::Invoke(21 /* System.Void SimpleJSON.JSONNode::Add(SimpleJSON.JSONNode) */, L_13, (JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 *)NULL);
		}

IL_0050:
		{
			// foreach(var n in m_List)
			bool L_14;
			L_14 = Enumerator_MoveNext_m425A5F4589B9E03CCCCA6245AF5F20FDADC90FAD((Enumerator_tDA1783FBD1372348634FED4EDC7396A489A211FA *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m425A5F4589B9E03CCCCA6245AF5F20FDADC90FAD_RuntimeMethod_var);
			if (L_14)
			{
				goto IL_002a;
			}
		}

IL_0059:
		{
			IL2CPP_LEAVE(0x69, FINALLY_005b);
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005b;
	}

FINALLY_005b:
	{// begin finally (depth: 1)
		Enumerator_Dispose_m7F31F9216A506EB82FA3E6EA1DA9C1E11DB81A3B((Enumerator_tDA1783FBD1372348634FED4EDC7396A489A211FA *)(&V_1), /*hidden argument*/Enumerator_Dispose_m7F31F9216A506EB82FA3E6EA1DA9C1E11DB81A3B_RuntimeMethod_var);
		IL2CPP_END_FINALLY(91)
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(91)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x69, IL_0069)
	}

IL_0069:
	{
		// return node;
		JSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E * L_15 = V_0;
		return L_15;
	}
}
// System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode> SimpleJSON.JSONArray::get_Children()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JSONArray_get_Children_mFF20142C5D77D438F218F14C2C7241E9083B15D8 (JSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Cget_ChildrenU3Ed__24_t0B4B41955B2D2AF5198DD9E35A1F9B8F7DA975FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3Cget_ChildrenU3Ed__24_t0B4B41955B2D2AF5198DD9E35A1F9B8F7DA975FD * L_0 = (U3Cget_ChildrenU3Ed__24_t0B4B41955B2D2AF5198DD9E35A1F9B8F7DA975FD *)il2cpp_codegen_object_new(U3Cget_ChildrenU3Ed__24_t0B4B41955B2D2AF5198DD9E35A1F9B8F7DA975FD_il2cpp_TypeInfo_var);
		U3Cget_ChildrenU3Ed__24__ctor_m8525173D7EAEF8C7D22520776CB3EEE75FD09014(L_0, ((int32_t)-2), /*hidden argument*/NULL);
		U3Cget_ChildrenU3Ed__24_t0B4B41955B2D2AF5198DD9E35A1F9B8F7DA975FD * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_3(__this);
		return L_1;
	}
}
// System.Void SimpleJSON.JSONArray::WriteToStringBuilder(System.Text.StringBuilder,System.Int32,System.Int32,SimpleJSON.JSONTextMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONArray_WriteToStringBuilder_m80DDB88D53978AE9F8BC8CB95D98F10B92E5D64B (JSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E * __this, StringBuilder_t * ___aSB0, int32_t ___aIndent1, int32_t ___aIndentInc2, int32_t ___aMode3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C4DE135CD00FF88D00A978F68019097CA375E1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mFC2B27BFC88F482BA024BBE4896041DB9ABCC979_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// aSB.Append('[');
		StringBuilder_t * L_0 = ___aSB0;
		NullCheck(L_0);
		StringBuilder_t * L_1;
		L_1 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_0, ((int32_t)91), /*hidden argument*/NULL);
		// int count = m_List.Count;
		List_1_t5575902E70199AF34CD1695997CE7E53A1509646 * L_2 = __this->get_m_List_4();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m4C4DE135CD00FF88D00A978F68019097CA375E1B_inline(L_2, /*hidden argument*/List_1_get_Count_m4C4DE135CD00FF88D00A978F68019097CA375E1B_RuntimeMethod_var);
		V_0 = L_3;
		// if (inline)
		bool L_4 = __this->get_inline_5();
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
		StringBuilder_t * L_6 = ___aSB0;
		NullCheck(L_6);
		StringBuilder_t * L_7;
		L_7 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_6, ((int32_t)44), /*hidden argument*/NULL);
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
		StringBuilder_t * L_9 = ___aSB0;
		NullCheck(L_9);
		StringBuilder_t * L_10;
		L_10 = StringBuilder_AppendLine_mB5790BC98389118626505708AE683AE9257B91B2(L_9, /*hidden argument*/NULL);
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
		StringBuilder_t * L_12 = ___aSB0;
		int32_t L_13 = ___aIndent1;
		int32_t L_14 = ___aIndentInc2;
		NullCheck(L_12);
		StringBuilder_t * L_15;
		L_15 = StringBuilder_Append_mB04B8FAD8E322DF8E69F3F85BCE4A8D041AE8BFB(L_12, ((int32_t)32), ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)L_14)), /*hidden argument*/NULL);
	}

IL_004e:
	{
		// m_List[i].WriteToStringBuilder(aSB, aIndent + aIndentInc, aIndentInc, aMode);
		List_1_t5575902E70199AF34CD1695997CE7E53A1509646 * L_16 = __this->get_m_List_4();
		int32_t L_17 = V_1;
		NullCheck(L_16);
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_18;
		L_18 = List_1_get_Item_mFC2B27BFC88F482BA024BBE4896041DB9ABCC979_inline(L_16, L_17, /*hidden argument*/List_1_get_Item_mFC2B27BFC88F482BA024BBE4896041DB9ABCC979_RuntimeMethod_var);
		StringBuilder_t * L_19 = ___aSB0;
		int32_t L_20 = ___aIndent1;
		int32_t L_21 = ___aIndentInc2;
		int32_t L_22 = ___aIndentInc2;
		int32_t L_23 = ___aMode3;
		NullCheck(L_18);
		VirtualActionInvoker4< StringBuilder_t *, int32_t, int32_t, int32_t >::Invoke(31 /* System.Void SimpleJSON.JSONNode::WriteToStringBuilder(System.Text.StringBuilder,System.Int32,System.Int32,SimpleJSON.JSONTextMode) */, L_18, L_19, ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)L_21)), L_22, L_23);
		// for (int i = 0; i < count; i++)
		int32_t L_24 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
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
		StringBuilder_t * L_28 = ___aSB0;
		NullCheck(L_28);
		StringBuilder_t * L_29;
		L_29 = StringBuilder_AppendLine_mB5790BC98389118626505708AE683AE9257B91B2(L_28, /*hidden argument*/NULL);
		int32_t L_30 = ___aIndent1;
		NullCheck(L_29);
		StringBuilder_t * L_31;
		L_31 = StringBuilder_Append_mB04B8FAD8E322DF8E69F3F85BCE4A8D041AE8BFB(L_29, ((int32_t)32), L_30, /*hidden argument*/NULL);
	}

IL_0082:
	{
		// aSB.Append(']');
		StringBuilder_t * L_32 = ___aSB0;
		NullCheck(L_32);
		StringBuilder_t * L_33;
		L_33 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_32, ((int32_t)93), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SimpleJSON.JSONArray::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONArray__ctor_m5F3CE693516DF2278031527B3BEB830D430F78B1 (JSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0D19ABAE80A85141D13415BC990D6195B7660284_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t5575902E70199AF34CD1695997CE7E53A1509646_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<JSONNode> m_List = new List<JSONNode>();
		List_1_t5575902E70199AF34CD1695997CE7E53A1509646 * L_0 = (List_1_t5575902E70199AF34CD1695997CE7E53A1509646 *)il2cpp_codegen_object_new(List_1_t5575902E70199AF34CD1695997CE7E53A1509646_il2cpp_TypeInfo_var);
		List_1__ctor_m0D19ABAE80A85141D13415BC990D6195B7660284(L_0, /*hidden argument*/List_1__ctor_m0D19ABAE80A85141D13415BC990D6195B7660284_RuntimeMethod_var);
		__this->set_m_List_4(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		JSONNode__ctor_m1CBF4F8B6E1DECA2CC6252F7DE0BEF1D11A18A91(__this, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONBool_get_Tag_mB9CA91991F00F4B74A0B8506DF446B77AF7872AB (JSONBool_t9FF67B765B247F2AD7F1614032A0A0EA3497EC62 * __this, const RuntimeMethod* method)
{
	{
		// public override JSONNodeType Tag { get { return JSONNodeType.Boolean; } }
		return (int32_t)(6);
	}
}
// System.Boolean SimpleJSON.JSONBool::get_IsBoolean()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONBool_get_IsBoolean_m4C847D82501287231AD2E08CBB6CADA94D980599 (JSONBool_t9FF67B765B247F2AD7F1614032A0A0EA3497EC62 * __this, const RuntimeMethod* method)
{
	{
		// public override bool IsBoolean { get { return true; } }
		return (bool)1;
	}
}
// SimpleJSON.JSONNode/Enumerator SimpleJSON.JSONBool::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8  JSONBool_GetEnumerator_mB707A772B8651C727BABE7657335A6EFCFD2D407 (JSONBool_t9FF67B765B247F2AD7F1614032A0A0EA3497EC62 * __this, const RuntimeMethod* method)
{
	Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public override Enumerator GetEnumerator() { return new Enumerator(); }
		il2cpp_codegen_initobj((&V_0), sizeof(Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8 ));
		Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8  L_0 = V_0;
		return L_0;
	}
}
// System.String SimpleJSON.JSONBool::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONBool_get_Value_m7EDACE20FE016532F6714D1311EC851635DD4C53 (JSONBool_t9FF67B765B247F2AD7F1614032A0A0EA3497EC62 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Data.ToString(); }
		bool* L_0 = __this->get_address_of_m_Data_4();
		String_t* L_1;
		L_1 = Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C((bool*)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void SimpleJSON.JSONBool::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONBool_set_Value_mE4AC78CF051938BCFBD45858D58A260709A210BC (JSONBool_t9FF67B765B247F2AD7F1614032A0A0EA3497EC62 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (bool.TryParse(value, out v))
		String_t* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Boolean_TryParse_m083F8EB6F0A07B24C26310648CB2380C3D3AAEE7(L_0, (bool*)(&V_0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		// m_Data = v;
		bool L_2 = V_0;
		__this->set_m_Data_4(L_2);
	}

IL_0011:
	{
		// }
		return;
	}
}
// System.Boolean SimpleJSON.JSONBool::get_AsBool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONBool_get_AsBool_m2BB0201AE8B6118A20FCF2727F3F8D235505A552 (JSONBool_t9FF67B765B247F2AD7F1614032A0A0EA3497EC62 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Data; }
		bool L_0 = __this->get_m_Data_4();
		return L_0;
	}
}
// System.Void SimpleJSON.JSONBool::set_AsBool(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONBool_set_AsBool_m3D364B4168376B1F5312DCF0F4B771C278BF014F (JSONBool_t9FF67B765B247F2AD7F1614032A0A0EA3497EC62 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { m_Data = value; }
		bool L_0 = ___value0;
		__this->set_m_Data_4(L_0);
		// set { m_Data = value; }
		return;
	}
}
// System.Void SimpleJSON.JSONBool::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONBool__ctor_mBFA987A0D1492AFBC458BB89C88E7EC4AA2BE007 (JSONBool_t9FF67B765B247F2AD7F1614032A0A0EA3497EC62 * __this, bool ___aData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public JSONBool(bool aData)
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		JSONNode__ctor_m1CBF4F8B6E1DECA2CC6252F7DE0BEF1D11A18A91(__this, /*hidden argument*/NULL);
		// m_Data = aData;
		bool L_0 = ___aData0;
		__this->set_m_Data_4(L_0);
		// }
		return;
	}
}
// System.Void SimpleJSON.JSONBool::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONBool__ctor_m9AAE9CA0B6044181BAF839B3CB43F9EB05DB2F8A (JSONBool_t9FF67B765B247F2AD7F1614032A0A0EA3497EC62 * __this, String_t* ___aData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public JSONBool(string aData)
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		JSONNode__ctor_m1CBF4F8B6E1DECA2CC6252F7DE0BEF1D11A18A91(__this, /*hidden argument*/NULL);
		// Value = aData;
		String_t* L_0 = ___aData0;
		VirtualActionInvoker1< String_t* >::Invoke(10 /* System.Void SimpleJSON.JSONNode::set_Value(System.String) */, __this, L_0);
		// }
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONBool::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * JSONBool_Clone_mA9840685D60D808795EDAC8FE745FD8DF8DD9BA7 (JSONBool_t9FF67B765B247F2AD7F1614032A0A0EA3497EC62 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONBool_t9FF67B765B247F2AD7F1614032A0A0EA3497EC62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new JSONBool(m_Data);
		bool L_0 = __this->get_m_Data_4();
		JSONBool_t9FF67B765B247F2AD7F1614032A0A0EA3497EC62 * L_1 = (JSONBool_t9FF67B765B247F2AD7F1614032A0A0EA3497EC62 *)il2cpp_codegen_object_new(JSONBool_t9FF67B765B247F2AD7F1614032A0A0EA3497EC62_il2cpp_TypeInfo_var);
		JSONBool__ctor_mBFA987A0D1492AFBC458BB89C88E7EC4AA2BE007(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void SimpleJSON.JSONBool::WriteToStringBuilder(System.Text.StringBuilder,System.Int32,System.Int32,SimpleJSON.JSONTextMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONBool_WriteToStringBuilder_m421FFE2D4A595460C5B0AA59C83E6EF5DECCC4E0 (JSONBool_t9FF67B765B247F2AD7F1614032A0A0EA3497EC62 * __this, StringBuilder_t * ___aSB0, int32_t ___aIndent1, int32_t ___aIndentInc2, int32_t ___aMode3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * G_B2_0 = NULL;
	StringBuilder_t * G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	StringBuilder_t * G_B3_1 = NULL;
	{
		// aSB.Append((m_Data) ? "true" : "false");
		StringBuilder_t * L_0 = ___aSB0;
		bool L_1 = __this->get_m_Data_4();
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
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean SimpleJSON.JSONBool::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONBool_Equals_mEEF0FFBE41AB3814546ABA212A53AA57517D84B1 (JSONBool_t9FF67B765B247F2AD7F1614032A0A0EA3497EC62 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (obj == null)
		RuntimeObject * L_0 = ___obj0;
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
		RuntimeObject * L_1 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_1, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)))
		{
			goto IL_001c;
		}
	}
	{
		// return m_Data == (bool)obj;
		bool L_2 = __this->get_m_Data_4();
		RuntimeObject * L_3 = ___obj0;
		return (bool)((((int32_t)L_2) == ((int32_t)((*(bool*)((bool*)UnBox(L_3, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var))))))? 1 : 0);
	}

IL_001c:
	{
		// return false;
		return (bool)0;
	}
}
// System.Int32 SimpleJSON.JSONBool::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONBool_GetHashCode_m59F19469C64DA65D9B03D4BE6FBCBAAE2762C05E (JSONBool_t9FF67B765B247F2AD7F1614032A0A0EA3497EC62 * __this, const RuntimeMethod* method)
{
	{
		// return m_Data.GetHashCode();
		bool* L_0 = __this->get_address_of_m_Data_4();
		int32_t L_1;
		L_1 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void SimpleJSON.JSONBool::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONBool_Clear_m8145693CB24832D790974C7EE90DFCD6B454744D (JSONBool_t9FF67B765B247F2AD7F1614032A0A0EA3497EC62 * __this, const RuntimeMethod* method)
{
	{
		// m_Data = false;
		__this->set_m_Data_4((bool)0);
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
// SimpleJSON.JSONNodeType SimpleJSON.JSONLazyCreator::get_Tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONLazyCreator_get_Tag_m3A6D074EB93F58B7070B64703D0ABCF7F75B1954 (JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6 * __this, const RuntimeMethod* method)
{
	{
		// public override JSONNodeType Tag { get { return JSONNodeType.None; } }
		return (int32_t)(7);
	}
}
// SimpleJSON.JSONNode/Enumerator SimpleJSON.JSONLazyCreator::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8  JSONLazyCreator_GetEnumerator_m1E8AD0743755E20E6E32B8B53643063DC5F3C13B (JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6 * __this, const RuntimeMethod* method)
{
	Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public override Enumerator GetEnumerator() { return new Enumerator(); }
		il2cpp_codegen_initobj((&V_0), sizeof(Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8 ));
		Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8  L_0 = V_0;
		return L_0;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::.ctor(SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator__ctor_m0B79861AA63A30F62B32C3A2F3A87F152C1015F6 (JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6 * __this, JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * ___aNode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public JSONLazyCreator(JSONNode aNode)
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		JSONNode__ctor_m1CBF4F8B6E1DECA2CC6252F7DE0BEF1D11A18A91(__this, /*hidden argument*/NULL);
		// m_Node = aNode;
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_0 = ___aNode0;
		__this->set_m_Node_4(L_0);
		// m_Key = null;
		__this->set_m_Key_5((String_t*)NULL);
		// }
		return;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::.ctor(SimpleJSON.JSONNode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator__ctor_m6C390D7570282C672EB980117A97087DE5E763DF (JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6 * __this, JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * ___aNode0, String_t* ___aKey1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public JSONLazyCreator(JSONNode aNode, string aKey)
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		JSONNode__ctor_m1CBF4F8B6E1DECA2CC6252F7DE0BEF1D11A18A91(__this, /*hidden argument*/NULL);
		// m_Node = aNode;
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_0 = ___aNode0;
		__this->set_m_Node_4(L_0);
		// m_Key = aKey;
		String_t* L_1 = ___aKey1;
		__this->set_m_Key_5(L_1);
		// }
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONLazyCreator::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * JSONLazyCreator_get_Item_m5679E58AD4E2A877E1B0DFDEE1966C91F22F6873 (JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6 * __this, int32_t ___aIndex0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return new JSONLazyCreator(this); }
		JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6 * L_0 = (JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6 *)il2cpp_codegen_object_new(JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6_il2cpp_TypeInfo_var);
		JSONLazyCreator__ctor_m0B79861AA63A30F62B32C3A2F3A87F152C1015F6(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::set_Item(System.Int32,SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator_set_Item_mE8980B3490249E8442E0BBA0FFAF7A25579659FB (JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6 * __this, int32_t ___aIndex0, JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_Set_TisJSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E_mEBFCA8B610CC87E43748AA7BEF6B1C7038ED5120_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { Set(new JSONArray()).Add(value); }
		JSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E * L_0 = (JSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E *)il2cpp_codegen_object_new(JSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E_il2cpp_TypeInfo_var);
		JSONArray__ctor_m5F3CE693516DF2278031527B3BEB830D430F78B1(L_0, /*hidden argument*/NULL);
		JSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E * L_1;
		L_1 = JSONLazyCreator_Set_TisJSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E_mEBFCA8B610CC87E43748AA7BEF6B1C7038ED5120(__this, L_0, /*hidden argument*/JSONLazyCreator_Set_TisJSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E_mEBFCA8B610CC87E43748AA7BEF6B1C7038ED5120_RuntimeMethod_var);
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_2 = ___value1;
		NullCheck(L_1);
		VirtualActionInvoker1< JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * >::Invoke(21 /* System.Void SimpleJSON.JSONNode::Add(SimpleJSON.JSONNode) */, L_1, L_2);
		// set { Set(new JSONArray()).Add(value); }
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONLazyCreator::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * JSONLazyCreator_get_Item_m1E8CE199AA17884522F27832C69277BB00BABF07 (JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6 * __this, String_t* ___aKey0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return new JSONLazyCreator(this, aKey); }
		String_t* L_0 = ___aKey0;
		JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6 * L_1 = (JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6 *)il2cpp_codegen_object_new(JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6_il2cpp_TypeInfo_var);
		JSONLazyCreator__ctor_m6C390D7570282C672EB980117A97087DE5E763DF(L_1, __this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::set_Item(System.String,SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator_set_Item_m0D0E3BF1D133B3E0DA46F6A127350770F4837A91 (JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6 * __this, String_t* ___aKey0, JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_Set_TisJSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1_m178DE9CFE882DCD5FCAE94006986BAB9FA2D5687_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { Set(new JSONObject()).Add(aKey, value); }
		JSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1 * L_0 = (JSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1 *)il2cpp_codegen_object_new(JSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1_il2cpp_TypeInfo_var);
		JSONObject__ctor_mDC880B59ED4D826E15F67A626326822D1CD1F52C(L_0, /*hidden argument*/NULL);
		JSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1 * L_1;
		L_1 = JSONLazyCreator_Set_TisJSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1_m178DE9CFE882DCD5FCAE94006986BAB9FA2D5687(__this, L_0, /*hidden argument*/JSONLazyCreator_Set_TisJSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1_m178DE9CFE882DCD5FCAE94006986BAB9FA2D5687_RuntimeMethod_var);
		String_t* L_2 = ___aKey0;
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_3 = ___value1;
		NullCheck(L_1);
		VirtualActionInvoker2< String_t*, JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * >::Invoke(20 /* System.Void SimpleJSON.JSONNode::Add(System.String,SimpleJSON.JSONNode) */, L_1, L_2, L_3);
		// set { Set(new JSONObject()).Add(aKey, value); }
		return;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::Add(SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator_Add_m6AA4B279C70E27ED1B18AF98E92783CD97EA0889 (JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6 * __this, JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * ___aItem0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_Set_TisJSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E_mEBFCA8B610CC87E43748AA7BEF6B1C7038ED5120_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Set(new JSONArray()).Add(aItem);
		JSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E * L_0 = (JSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E *)il2cpp_codegen_object_new(JSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E_il2cpp_TypeInfo_var);
		JSONArray__ctor_m5F3CE693516DF2278031527B3BEB830D430F78B1(L_0, /*hidden argument*/NULL);
		JSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E * L_1;
		L_1 = JSONLazyCreator_Set_TisJSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E_mEBFCA8B610CC87E43748AA7BEF6B1C7038ED5120(__this, L_0, /*hidden argument*/JSONLazyCreator_Set_TisJSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E_mEBFCA8B610CC87E43748AA7BEF6B1C7038ED5120_RuntimeMethod_var);
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_2 = ___aItem0;
		NullCheck(L_1);
		VirtualActionInvoker1< JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * >::Invoke(21 /* System.Void SimpleJSON.JSONNode::Add(SimpleJSON.JSONNode) */, L_1, L_2);
		// }
		return;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::Add(System.String,SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator_Add_mA541314CB35828119821DF9D32C06C02E103D097 (JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6 * __this, String_t* ___aKey0, JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * ___aItem1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_Set_TisJSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1_m178DE9CFE882DCD5FCAE94006986BAB9FA2D5687_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Set(new JSONObject()).Add(aKey, aItem);
		JSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1 * L_0 = (JSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1 *)il2cpp_codegen_object_new(JSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1_il2cpp_TypeInfo_var);
		JSONObject__ctor_mDC880B59ED4D826E15F67A626326822D1CD1F52C(L_0, /*hidden argument*/NULL);
		JSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1 * L_1;
		L_1 = JSONLazyCreator_Set_TisJSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1_m178DE9CFE882DCD5FCAE94006986BAB9FA2D5687(__this, L_0, /*hidden argument*/JSONLazyCreator_Set_TisJSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1_m178DE9CFE882DCD5FCAE94006986BAB9FA2D5687_RuntimeMethod_var);
		String_t* L_2 = ___aKey0;
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_3 = ___aItem1;
		NullCheck(L_1);
		VirtualActionInvoker2< String_t*, JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * >::Invoke(20 /* System.Void SimpleJSON.JSONNode::Add(System.String,SimpleJSON.JSONNode) */, L_1, L_2, L_3);
		// }
		return;
	}
}
// System.Boolean SimpleJSON.JSONLazyCreator::op_Equality(SimpleJSON.JSONLazyCreator,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONLazyCreator_op_Equality_mCB25438D736BAEC78588A1C203AE79D31064898C (JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6 * ___a0, RuntimeObject * ___b1, const RuntimeMethod* method)
{
	{
		// if (b == null)
		RuntimeObject * L_0 = ___b1;
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
		JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6 * L_1 = ___a0;
		RuntimeObject * L_2 = ___b1;
		return (bool)((((RuntimeObject*)(JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6 *)L_1) == ((RuntimeObject*)(RuntimeObject *)L_2))? 1 : 0);
	}
}
// System.Boolean SimpleJSON.JSONLazyCreator::op_Inequality(SimpleJSON.JSONLazyCreator,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONLazyCreator_op_Inequality_m02BA9367F2E9AB8C9BCD5669C6BA9DE076178218 (JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6 * ___a0, RuntimeObject * ___b1, const RuntimeMethod* method)
{
	{
		// return !(a == b);
		JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6 * L_0 = ___a0;
		RuntimeObject * L_1 = ___b1;
		bool L_2;
		L_2 = JSONLazyCreator_op_Equality_mCB25438D736BAEC78588A1C203AE79D31064898C(L_0, L_1, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean SimpleJSON.JSONLazyCreator::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONLazyCreator_Equals_m14E80E99AF8A7CCD7EB9991FFABF3DB01980894F (JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	{
		// if (obj == null)
		RuntimeObject * L_0 = ___obj0;
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
		RuntimeObject * L_1 = ___obj0;
		return (bool)((((RuntimeObject*)(JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6 *)__this) == ((RuntimeObject*)(RuntimeObject *)L_1))? 1 : 0);
	}
}
// System.Int32 SimpleJSON.JSONLazyCreator::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONLazyCreator_GetHashCode_m20B43AF6AED7123FA9CA49F2019A4B214F523DF9 (JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6 * __this, const RuntimeMethod* method)
{
	{
		// return 0;
		return 0;
	}
}
// System.Int32 SimpleJSON.JSONLazyCreator::get_AsInt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONLazyCreator_get_AsInt_m42A06E76316F1243A40AD6FD3C664575D8988758 (JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_Set_TisJSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5_m3E439FB072EF02F7F17A747A17F6B88F6DC87AA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { Set(new JSONNumber(0)); return 0; }
		JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5 * L_0 = (JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5 *)il2cpp_codegen_object_new(JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5_il2cpp_TypeInfo_var);
		JSONNumber__ctor_m540460B21D5ED37F9529F1734B24B6E868D432B8(L_0, (0.0), /*hidden argument*/NULL);
		JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5 * L_1;
		L_1 = JSONLazyCreator_Set_TisJSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5_m3E439FB072EF02F7F17A747A17F6B88F6DC87AA0(__this, L_0, /*hidden argument*/JSONLazyCreator_Set_TisJSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5_m3E439FB072EF02F7F17A747A17F6B88F6DC87AA0_RuntimeMethod_var);
		// get { Set(new JSONNumber(0)); return 0; }
		return 0;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::set_AsInt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator_set_AsInt_mD3942EF6D8F7D250F63D8358B626E3233E4E6D9A (JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_Set_TisJSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5_m3E439FB072EF02F7F17A747A17F6B88F6DC87AA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { Set(new JSONNumber(value)); }
		int32_t L_0 = ___value0;
		JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5 * L_1 = (JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5 *)il2cpp_codegen_object_new(JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5_il2cpp_TypeInfo_var);
		JSONNumber__ctor_m540460B21D5ED37F9529F1734B24B6E868D432B8(L_1, ((double)((double)L_0)), /*hidden argument*/NULL);
		JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5 * L_2;
		L_2 = JSONLazyCreator_Set_TisJSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5_m3E439FB072EF02F7F17A747A17F6B88F6DC87AA0(__this, L_1, /*hidden argument*/JSONLazyCreator_Set_TisJSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5_m3E439FB072EF02F7F17A747A17F6B88F6DC87AA0_RuntimeMethod_var);
		// set { Set(new JSONNumber(value)); }
		return;
	}
}
// System.Single SimpleJSON.JSONLazyCreator::get_AsFloat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float JSONLazyCreator_get_AsFloat_m89017807E84A7B04CD9B072858E4B2780928CECF (JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_Set_TisJSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5_m3E439FB072EF02F7F17A747A17F6B88F6DC87AA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { Set(new JSONNumber(0.0f)); return 0.0f; }
		JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5 * L_0 = (JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5 *)il2cpp_codegen_object_new(JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5_il2cpp_TypeInfo_var);
		JSONNumber__ctor_m540460B21D5ED37F9529F1734B24B6E868D432B8(L_0, (0.0), /*hidden argument*/NULL);
		JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5 * L_1;
		L_1 = JSONLazyCreator_Set_TisJSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5_m3E439FB072EF02F7F17A747A17F6B88F6DC87AA0(__this, L_0, /*hidden argument*/JSONLazyCreator_Set_TisJSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5_m3E439FB072EF02F7F17A747A17F6B88F6DC87AA0_RuntimeMethod_var);
		// get { Set(new JSONNumber(0.0f)); return 0.0f; }
		return (0.0f);
	}
}
// System.Void SimpleJSON.JSONLazyCreator::set_AsFloat(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator_set_AsFloat_m74C138C110E58F0F84C3E63844C9D10694D1BF9F (JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_Set_TisJSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5_m3E439FB072EF02F7F17A747A17F6B88F6DC87AA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { Set(new JSONNumber(value)); }
		float L_0 = ___value0;
		JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5 * L_1 = (JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5 *)il2cpp_codegen_object_new(JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5_il2cpp_TypeInfo_var);
		JSONNumber__ctor_m540460B21D5ED37F9529F1734B24B6E868D432B8(L_1, ((double)((double)L_0)), /*hidden argument*/NULL);
		JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5 * L_2;
		L_2 = JSONLazyCreator_Set_TisJSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5_m3E439FB072EF02F7F17A747A17F6B88F6DC87AA0(__this, L_1, /*hidden argument*/JSONLazyCreator_Set_TisJSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5_m3E439FB072EF02F7F17A747A17F6B88F6DC87AA0_RuntimeMethod_var);
		// set { Set(new JSONNumber(value)); }
		return;
	}
}
// System.Double SimpleJSON.JSONLazyCreator::get_AsDouble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double JSONLazyCreator_get_AsDouble_mBD1C53F2A1C5BEA7D0F16FC4427B361325D1DFF8 (JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_Set_TisJSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5_m3E439FB072EF02F7F17A747A17F6B88F6DC87AA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { Set(new JSONNumber(0.0)); return 0.0; }
		JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5 * L_0 = (JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5 *)il2cpp_codegen_object_new(JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5_il2cpp_TypeInfo_var);
		JSONNumber__ctor_m540460B21D5ED37F9529F1734B24B6E868D432B8(L_0, (0.0), /*hidden argument*/NULL);
		JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5 * L_1;
		L_1 = JSONLazyCreator_Set_TisJSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5_m3E439FB072EF02F7F17A747A17F6B88F6DC87AA0(__this, L_0, /*hidden argument*/JSONLazyCreator_Set_TisJSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5_m3E439FB072EF02F7F17A747A17F6B88F6DC87AA0_RuntimeMethod_var);
		// get { Set(new JSONNumber(0.0)); return 0.0; }
		return (0.0);
	}
}
// System.Void SimpleJSON.JSONLazyCreator::set_AsDouble(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator_set_AsDouble_m490FE6CA5F4FB2BF477934745D8D184779BC746D (JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6 * __this, double ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_Set_TisJSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5_m3E439FB072EF02F7F17A747A17F6B88F6DC87AA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { Set(new JSONNumber(value)); }
		double L_0 = ___value0;
		JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5 * L_1 = (JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5 *)il2cpp_codegen_object_new(JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5_il2cpp_TypeInfo_var);
		JSONNumber__ctor_m540460B21D5ED37F9529F1734B24B6E868D432B8(L_1, L_0, /*hidden argument*/NULL);
		JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5 * L_2;
		L_2 = JSONLazyCreator_Set_TisJSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5_m3E439FB072EF02F7F17A747A17F6B88F6DC87AA0(__this, L_1, /*hidden argument*/JSONLazyCreator_Set_TisJSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5_m3E439FB072EF02F7F17A747A17F6B88F6DC87AA0_RuntimeMethod_var);
		// set { Set(new JSONNumber(value)); }
		return;
	}
}
// System.Int64 SimpleJSON.JSONLazyCreator::get_AsLong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t JSONLazyCreator_get_AsLong_m8C695B8A3D7742ADEB66C291012428D83E2BAD97 (JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_Set_TisJSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5_m3E439FB072EF02F7F17A747A17F6B88F6DC87AA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_Set_TisJSONString_tDC7D689F0DBDAC1FC0399D63CA27C8FEB266EFAF_m787C35A46053690A83D5CAB35951742C6439E395_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONString_tDC7D689F0DBDAC1FC0399D63CA27C8FEB266EFAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (longAsString)
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		bool L_0 = ((JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_StaticFields*)il2cpp_codegen_static_fields_for(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var))->get_longAsString_1();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		// Set(new JSONString("0"));
		JSONString_tDC7D689F0DBDAC1FC0399D63CA27C8FEB266EFAF * L_1 = (JSONString_tDC7D689F0DBDAC1FC0399D63CA27C8FEB266EFAF *)il2cpp_codegen_object_new(JSONString_tDC7D689F0DBDAC1FC0399D63CA27C8FEB266EFAF_il2cpp_TypeInfo_var);
		JSONString__ctor_m7E8C037643D81531C83ED7103B3B2E2847454981(L_1, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, /*hidden argument*/NULL);
		JSONString_tDC7D689F0DBDAC1FC0399D63CA27C8FEB266EFAF * L_2;
		L_2 = JSONLazyCreator_Set_TisJSONString_tDC7D689F0DBDAC1FC0399D63CA27C8FEB266EFAF_m787C35A46053690A83D5CAB35951742C6439E395(__this, L_1, /*hidden argument*/JSONLazyCreator_Set_TisJSONString_tDC7D689F0DBDAC1FC0399D63CA27C8FEB266EFAF_m787C35A46053690A83D5CAB35951742C6439E395_RuntimeMethod_var);
		goto IL_002f;
	}

IL_001a:
	{
		// Set(new JSONNumber(0.0));
		JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5 * L_3 = (JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5 *)il2cpp_codegen_object_new(JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5_il2cpp_TypeInfo_var);
		JSONNumber__ctor_m540460B21D5ED37F9529F1734B24B6E868D432B8(L_3, (0.0), /*hidden argument*/NULL);
		JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5 * L_4;
		L_4 = JSONLazyCreator_Set_TisJSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5_m3E439FB072EF02F7F17A747A17F6B88F6DC87AA0(__this, L_3, /*hidden argument*/JSONLazyCreator_Set_TisJSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5_m3E439FB072EF02F7F17A747A17F6B88F6DC87AA0_RuntimeMethod_var);
	}

IL_002f:
	{
		// return 0L;
		return ((int64_t)((int64_t)0));
	}
}
// System.Void SimpleJSON.JSONLazyCreator::set_AsLong(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator_set_AsLong_mA3A489E6889FC1A3B8F4A572F2FCCAE3EFA499CC (JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_Set_TisJSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5_m3E439FB072EF02F7F17A747A17F6B88F6DC87AA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_Set_TisJSONString_tDC7D689F0DBDAC1FC0399D63CA27C8FEB266EFAF_m787C35A46053690A83D5CAB35951742C6439E395_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONString_tDC7D689F0DBDAC1FC0399D63CA27C8FEB266EFAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (longAsString)
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		bool L_0 = ((JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_StaticFields*)il2cpp_codegen_static_fields_for(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var))->get_longAsString_1();
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		// Set(new JSONString(value.ToString()));
		String_t* L_1;
		L_1 = Int64_ToString_m8AAA883F340993DCDF339C208F3416C3BA82589F((int64_t*)(&___value0), /*hidden argument*/NULL);
		JSONString_tDC7D689F0DBDAC1FC0399D63CA27C8FEB266EFAF * L_2 = (JSONString_tDC7D689F0DBDAC1FC0399D63CA27C8FEB266EFAF *)il2cpp_codegen_object_new(JSONString_tDC7D689F0DBDAC1FC0399D63CA27C8FEB266EFAF_il2cpp_TypeInfo_var);
		JSONString__ctor_m7E8C037643D81531C83ED7103B3B2E2847454981(L_2, L_1, /*hidden argument*/NULL);
		JSONString_tDC7D689F0DBDAC1FC0399D63CA27C8FEB266EFAF * L_3;
		L_3 = JSONLazyCreator_Set_TisJSONString_tDC7D689F0DBDAC1FC0399D63CA27C8FEB266EFAF_m787C35A46053690A83D5CAB35951742C6439E395(__this, L_2, /*hidden argument*/JSONLazyCreator_Set_TisJSONString_tDC7D689F0DBDAC1FC0399D63CA27C8FEB266EFAF_m787C35A46053690A83D5CAB35951742C6439E395_RuntimeMethod_var);
		return;
	}

IL_001b:
	{
		// Set(new JSONNumber(value));
		int64_t L_4 = ___value0;
		JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5 * L_5 = (JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5 *)il2cpp_codegen_object_new(JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5_il2cpp_TypeInfo_var);
		JSONNumber__ctor_m540460B21D5ED37F9529F1734B24B6E868D432B8(L_5, ((double)((double)L_4)), /*hidden argument*/NULL);
		JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5 * L_6;
		L_6 = JSONLazyCreator_Set_TisJSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5_m3E439FB072EF02F7F17A747A17F6B88F6DC87AA0(__this, L_5, /*hidden argument*/JSONLazyCreator_Set_TisJSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5_m3E439FB072EF02F7F17A747A17F6B88F6DC87AA0_RuntimeMethod_var);
		// }
		return;
	}
}
// System.UInt64 SimpleJSON.JSONLazyCreator::get_AsULong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t JSONLazyCreator_get_AsULong_mF72359206F914C27CF5EC7FC708E675F2F7A36CB (JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_Set_TisJSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5_m3E439FB072EF02F7F17A747A17F6B88F6DC87AA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_Set_TisJSONString_tDC7D689F0DBDAC1FC0399D63CA27C8FEB266EFAF_m787C35A46053690A83D5CAB35951742C6439E395_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONString_tDC7D689F0DBDAC1FC0399D63CA27C8FEB266EFAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (longAsString)
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		bool L_0 = ((JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_StaticFields*)il2cpp_codegen_static_fields_for(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var))->get_longAsString_1();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		// Set(new JSONString("0"));
		JSONString_tDC7D689F0DBDAC1FC0399D63CA27C8FEB266EFAF * L_1 = (JSONString_tDC7D689F0DBDAC1FC0399D63CA27C8FEB266EFAF *)il2cpp_codegen_object_new(JSONString_tDC7D689F0DBDAC1FC0399D63CA27C8FEB266EFAF_il2cpp_TypeInfo_var);
		JSONString__ctor_m7E8C037643D81531C83ED7103B3B2E2847454981(L_1, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, /*hidden argument*/NULL);
		JSONString_tDC7D689F0DBDAC1FC0399D63CA27C8FEB266EFAF * L_2;
		L_2 = JSONLazyCreator_Set_TisJSONString_tDC7D689F0DBDAC1FC0399D63CA27C8FEB266EFAF_m787C35A46053690A83D5CAB35951742C6439E395(__this, L_1, /*hidden argument*/JSONLazyCreator_Set_TisJSONString_tDC7D689F0DBDAC1FC0399D63CA27C8FEB266EFAF_m787C35A46053690A83D5CAB35951742C6439E395_RuntimeMethod_var);
		goto IL_002f;
	}

IL_001a:
	{
		// Set(new JSONNumber(0.0));
		JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5 * L_3 = (JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5 *)il2cpp_codegen_object_new(JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5_il2cpp_TypeInfo_var);
		JSONNumber__ctor_m540460B21D5ED37F9529F1734B24B6E868D432B8(L_3, (0.0), /*hidden argument*/NULL);
		JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5 * L_4;
		L_4 = JSONLazyCreator_Set_TisJSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5_m3E439FB072EF02F7F17A747A17F6B88F6DC87AA0(__this, L_3, /*hidden argument*/JSONLazyCreator_Set_TisJSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5_m3E439FB072EF02F7F17A747A17F6B88F6DC87AA0_RuntimeMethod_var);
	}

IL_002f:
	{
		// return 0L;
		return ((int64_t)((int64_t)0));
	}
}
// System.Void SimpleJSON.JSONLazyCreator::set_AsULong(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator_set_AsULong_mC6173A08FA690125468771996FD3D99DA7D247BC (JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6 * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_Set_TisJSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5_m3E439FB072EF02F7F17A747A17F6B88F6DC87AA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_Set_TisJSONString_tDC7D689F0DBDAC1FC0399D63CA27C8FEB266EFAF_m787C35A46053690A83D5CAB35951742C6439E395_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONString_tDC7D689F0DBDAC1FC0399D63CA27C8FEB266EFAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (longAsString)
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		bool L_0 = ((JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_StaticFields*)il2cpp_codegen_static_fields_for(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var))->get_longAsString_1();
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		// Set(new JSONString(value.ToString()));
		String_t* L_1;
		L_1 = UInt64_ToString_m3644686F0A0E32CB94D300CF891DBD7920396F37((uint64_t*)(&___value0), /*hidden argument*/NULL);
		JSONString_tDC7D689F0DBDAC1FC0399D63CA27C8FEB266EFAF * L_2 = (JSONString_tDC7D689F0DBDAC1FC0399D63CA27C8FEB266EFAF *)il2cpp_codegen_object_new(JSONString_tDC7D689F0DBDAC1FC0399D63CA27C8FEB266EFAF_il2cpp_TypeInfo_var);
		JSONString__ctor_m7E8C037643D81531C83ED7103B3B2E2847454981(L_2, L_1, /*hidden argument*/NULL);
		JSONString_tDC7D689F0DBDAC1FC0399D63CA27C8FEB266EFAF * L_3;
		L_3 = JSONLazyCreator_Set_TisJSONString_tDC7D689F0DBDAC1FC0399D63CA27C8FEB266EFAF_m787C35A46053690A83D5CAB35951742C6439E395(__this, L_2, /*hidden argument*/JSONLazyCreator_Set_TisJSONString_tDC7D689F0DBDAC1FC0399D63CA27C8FEB266EFAF_m787C35A46053690A83D5CAB35951742C6439E395_RuntimeMethod_var);
		return;
	}

IL_001b:
	{
		// Set(new JSONNumber(value));
		uint64_t L_4 = ___value0;
		JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5 * L_5 = (JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5 *)il2cpp_codegen_object_new(JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5_il2cpp_TypeInfo_var);
		JSONNumber__ctor_m540460B21D5ED37F9529F1734B24B6E868D432B8(L_5, ((double)((double)((double)((uint64_t)L_4)))), /*hidden argument*/NULL);
		JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5 * L_6;
		L_6 = JSONLazyCreator_Set_TisJSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5_m3E439FB072EF02F7F17A747A17F6B88F6DC87AA0(__this, L_5, /*hidden argument*/JSONLazyCreator_Set_TisJSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5_m3E439FB072EF02F7F17A747A17F6B88F6DC87AA0_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Boolean SimpleJSON.JSONLazyCreator::get_AsBool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONLazyCreator_get_AsBool_mF27B6C9FC704065CDB2B178AED35069212EDDFCC (JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONBool_t9FF67B765B247F2AD7F1614032A0A0EA3497EC62_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_Set_TisJSONBool_t9FF67B765B247F2AD7F1614032A0A0EA3497EC62_m1FAD42F2E9ABBE9BD9EBEE524DBE64636B5B529B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { Set(new JSONBool(false)); return false; }
		JSONBool_t9FF67B765B247F2AD7F1614032A0A0EA3497EC62 * L_0 = (JSONBool_t9FF67B765B247F2AD7F1614032A0A0EA3497EC62 *)il2cpp_codegen_object_new(JSONBool_t9FF67B765B247F2AD7F1614032A0A0EA3497EC62_il2cpp_TypeInfo_var);
		JSONBool__ctor_mBFA987A0D1492AFBC458BB89C88E7EC4AA2BE007(L_0, (bool)0, /*hidden argument*/NULL);
		JSONBool_t9FF67B765B247F2AD7F1614032A0A0EA3497EC62 * L_1;
		L_1 = JSONLazyCreator_Set_TisJSONBool_t9FF67B765B247F2AD7F1614032A0A0EA3497EC62_m1FAD42F2E9ABBE9BD9EBEE524DBE64636B5B529B(__this, L_0, /*hidden argument*/JSONLazyCreator_Set_TisJSONBool_t9FF67B765B247F2AD7F1614032A0A0EA3497EC62_m1FAD42F2E9ABBE9BD9EBEE524DBE64636B5B529B_RuntimeMethod_var);
		// get { Set(new JSONBool(false)); return false; }
		return (bool)0;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::set_AsBool(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator_set_AsBool_m58268C31926C3B396083BF888747BC1F5E4BCBCB (JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONBool_t9FF67B765B247F2AD7F1614032A0A0EA3497EC62_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_Set_TisJSONBool_t9FF67B765B247F2AD7F1614032A0A0EA3497EC62_m1FAD42F2E9ABBE9BD9EBEE524DBE64636B5B529B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { Set(new JSONBool(value)); }
		bool L_0 = ___value0;
		JSONBool_t9FF67B765B247F2AD7F1614032A0A0EA3497EC62 * L_1 = (JSONBool_t9FF67B765B247F2AD7F1614032A0A0EA3497EC62 *)il2cpp_codegen_object_new(JSONBool_t9FF67B765B247F2AD7F1614032A0A0EA3497EC62_il2cpp_TypeInfo_var);
		JSONBool__ctor_mBFA987A0D1492AFBC458BB89C88E7EC4AA2BE007(L_1, L_0, /*hidden argument*/NULL);
		JSONBool_t9FF67B765B247F2AD7F1614032A0A0EA3497EC62 * L_2;
		L_2 = JSONLazyCreator_Set_TisJSONBool_t9FF67B765B247F2AD7F1614032A0A0EA3497EC62_m1FAD42F2E9ABBE9BD9EBEE524DBE64636B5B529B(__this, L_1, /*hidden argument*/JSONLazyCreator_Set_TisJSONBool_t9FF67B765B247F2AD7F1614032A0A0EA3497EC62_m1FAD42F2E9ABBE9BD9EBEE524DBE64636B5B529B_RuntimeMethod_var);
		// set { Set(new JSONBool(value)); }
		return;
	}
}
// SimpleJSON.JSONArray SimpleJSON.JSONLazyCreator::get_AsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E * JSONLazyCreator_get_AsArray_m7774E52E019503D6042D0AB8021466B5E617DFBC (JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_Set_TisJSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E_mEBFCA8B610CC87E43748AA7BEF6B1C7038ED5120_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return Set(new JSONArray()); }
		JSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E * L_0 = (JSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E *)il2cpp_codegen_object_new(JSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E_il2cpp_TypeInfo_var);
		JSONArray__ctor_m5F3CE693516DF2278031527B3BEB830D430F78B1(L_0, /*hidden argument*/NULL);
		JSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E * L_1;
		L_1 = JSONLazyCreator_Set_TisJSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E_mEBFCA8B610CC87E43748AA7BEF6B1C7038ED5120(__this, L_0, /*hidden argument*/JSONLazyCreator_Set_TisJSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E_mEBFCA8B610CC87E43748AA7BEF6B1C7038ED5120_RuntimeMethod_var);
		return L_1;
	}
}
// SimpleJSON.JSONObject SimpleJSON.JSONLazyCreator::get_AsObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1 * JSONLazyCreator_get_AsObject_m258758F521BE31F4BA01AD8E3D769761D320CFCC (JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_Set_TisJSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1_m178DE9CFE882DCD5FCAE94006986BAB9FA2D5687_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return Set(new JSONObject()); }
		JSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1 * L_0 = (JSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1 *)il2cpp_codegen_object_new(JSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1_il2cpp_TypeInfo_var);
		JSONObject__ctor_mDC880B59ED4D826E15F67A626326822D1CD1F52C(L_0, /*hidden argument*/NULL);
		JSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1 * L_1;
		L_1 = JSONLazyCreator_Set_TisJSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1_m178DE9CFE882DCD5FCAE94006986BAB9FA2D5687(__this, L_0, /*hidden argument*/JSONLazyCreator_Set_TisJSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1_m178DE9CFE882DCD5FCAE94006986BAB9FA2D5687_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void SimpleJSON.JSONLazyCreator::WriteToStringBuilder(System.Text.StringBuilder,System.Int32,System.Int32,SimpleJSON.JSONTextMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONLazyCreator_WriteToStringBuilder_m95D334FA623EB56E6BD461C32EA5CD864662F05B (JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6 * __this, StringBuilder_t * ___aSB0, int32_t ___aIndent1, int32_t ___aIndentInc2, int32_t ___aMode3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		s_Il2CppMethodInitialized = true;
	}
	{
		// aSB.Append("null");
		StringBuilder_t * L_0 = ___aSB0;
		NullCheck(L_0);
		StringBuilder_t * L_1;
		L_1 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_0, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, /*hidden argument*/NULL);
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
// SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * JSONNode_get_Item_m68FCA7088A6690FB632145068B7E8B373A8DB4ED (JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * __this, int32_t ___aIndex0, const RuntimeMethod* method)
{
	{
		// public virtual JSONNode this[int aIndex] { get { return null; } set { } }
		return (JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 *)NULL;
	}
}
// System.Void SimpleJSON.JSONNode::set_Item(System.Int32,SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNode_set_Item_m25F2BA097890C323C4B283AE4ED5995BB103F021 (JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * __this, int32_t ___aIndex0, JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * ___value1, const RuntimeMethod* method)
{
	{
		// public virtual JSONNode this[int aIndex] { get { return null; } set { } }
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * JSONNode_get_Item_mE4DA966D936ACB13C37763CDCE5EC2AF5729D205 (JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * __this, String_t* ___aKey0, const RuntimeMethod* method)
{
	{
		// public virtual JSONNode this[string aKey] { get { return null; } set { } }
		return (JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 *)NULL;
	}
}
// System.Void SimpleJSON.JSONNode::set_Item(System.String,SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNode_set_Item_m29B408C6CAB5AA50B520C24A19563CE2C8E0F9DE (JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * __this, String_t* ___aKey0, JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * ___value1, const RuntimeMethod* method)
{
	{
		// public virtual JSONNode this[string aKey] { get { return null; } set { } }
		return;
	}
}
// System.String SimpleJSON.JSONNode::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONNode_get_Value_m9B82BB86D4FD6E7CC92BFB773E9459329816CE9C (JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public virtual string Value { get { return ""; } set { } }
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}
}
// System.Void SimpleJSON.JSONNode::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNode_set_Value_m831EF2FF049F37126F9915D07AD0408400B1C72A (JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public virtual string Value { get { return ""; } set { } }
		return;
	}
}
// System.Int32 SimpleJSON.JSONNode::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONNode_get_Count_m7AD24AA531038210738C18D8A25190B3BA76FD2D (JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * __this, const RuntimeMethod* method)
{
	{
		// public virtual int Count { get { return 0; } }
		return 0;
	}
}
// System.Boolean SimpleJSON.JSONNode::get_IsNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNode_get_IsNumber_m3189BF7AD2A6D5D70797D383EDCF74ACEBBBCE5C (JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * __this, const RuntimeMethod* method)
{
	{
		// public virtual bool IsNumber { get { return false; } }
		return (bool)0;
	}
}
// System.Boolean SimpleJSON.JSONNode::get_IsString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNode_get_IsString_mAA1EB2A7163F1F1CECB249CC01967F58C792D10F (JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * __this, const RuntimeMethod* method)
{
	{
		// public virtual bool IsString { get { return false; } }
		return (bool)0;
	}
}
// System.Boolean SimpleJSON.JSONNode::get_IsBoolean()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNode_get_IsBoolean_mAEAD2EF66A8E96031237FB0C24A3EB7678D9A67C (JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * __this, const RuntimeMethod* method)
{
	{
		// public virtual bool IsBoolean { get { return false; } }
		return (bool)0;
	}
}
// System.Boolean SimpleJSON.JSONNode::get_IsNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNode_get_IsNull_mA9E1B086C9708E0DBA88B8D46C12145F350DD103 (JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * __this, const RuntimeMethod* method)
{
	{
		// public virtual bool IsNull { get { return false; } }
		return (bool)0;
	}
}
// System.Boolean SimpleJSON.JSONNode::get_IsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNode_get_IsArray_m1B11D601CC7BCB5FCBF86ABD789B500240A63A67 (JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * __this, const RuntimeMethod* method)
{
	{
		// public virtual bool IsArray { get { return false; } }
		return (bool)0;
	}
}
// System.Boolean SimpleJSON.JSONNode::get_IsObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNode_get_IsObject_mFC432CA1A043D3EE786300135BCEDB8F60F004D7 (JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * __this, const RuntimeMethod* method)
{
	{
		// public virtual bool IsObject { get { return false; } }
		return (bool)0;
	}
}
// System.Boolean SimpleJSON.JSONNode::get_Inline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNode_get_Inline_m2F25D4A17A00109F0FC4E333DD0992D8F8B3E3E9 (JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * __this, const RuntimeMethod* method)
{
	{
		// public virtual bool Inline { get { return false; } set { } }
		return (bool)0;
	}
}
// System.Void SimpleJSON.JSONNode::set_Inline(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNode_set_Inline_m929B6EBB35EA276CF12E8A90FFCA2A8B330342A0 (JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public virtual bool Inline { get { return false; } set { } }
		return;
	}
}
// System.Void SimpleJSON.JSONNode::Add(System.String,SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNode_Add_mDD2480A1E9A657DD80FACB63418B7D3EB928FC8C (JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * __this, String_t* ___aKey0, JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * ___aItem1, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void SimpleJSON.JSONNode::Add(SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNode_Add_m31E333F3FF2EA38F6E41E269B55CA1573F6BB85F (JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * __this, JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * ___aItem0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Add("", aItem);
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_0 = ___aItem0;
		VirtualActionInvoker2< String_t*, JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * >::Invoke(20 /* System.Void SimpleJSON.JSONNode::Add(System.String,SimpleJSON.JSONNode) */, __this, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, L_0);
		// }
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::Remove(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * JSONNode_Remove_mF7243F4578DB464584758182E06AB93679B3783F (JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * __this, String_t* ___aKey0, const RuntimeMethod* method)
{
	{
		// return null;
		return (JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 *)NULL;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::Remove(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * JSONNode_Remove_m7241A96E1AE22CAE87DE961567091BBFE1F5A360 (JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * __this, int32_t ___aIndex0, const RuntimeMethod* method)
{
	{
		// return null;
		return (JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 *)NULL;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::Remove(SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * JSONNode_Remove_mF567CA468968F37D6A0BC5E8A30D5F2C4A0F8EB5 (JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * __this, JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * ___aNode0, const RuntimeMethod* method)
{
	{
		// return aNode;
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_0 = ___aNode0;
		return L_0;
	}
}
// System.Void SimpleJSON.JSONNode::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNode_Clear_mFB924F28B9110E8836981E8E117AB1FAEAD09982 (JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * __this, const RuntimeMethod* method)
{
	{
		// public virtual void Clear() { }
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * JSONNode_Clone_mF4BA48E31062E715E064A2471BA22DDEB21D3918 (JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * __this, const RuntimeMethod* method)
{
	{
		// return null;
		return (JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 *)NULL;
	}
}
// System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode::get_Children()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JSONNode_get_Children_m93AC18CC13651ADE3DB09B101FCB8E0B489B299F (JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Cget_ChildrenU3Ed__43_t676D15A68B9E4445BE9089BCD930635F8DC59D80_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3Cget_ChildrenU3Ed__43_t676D15A68B9E4445BE9089BCD930635F8DC59D80 * L_0 = (U3Cget_ChildrenU3Ed__43_t676D15A68B9E4445BE9089BCD930635F8DC59D80 *)il2cpp_codegen_object_new(U3Cget_ChildrenU3Ed__43_t676D15A68B9E4445BE9089BCD930635F8DC59D80_il2cpp_TypeInfo_var);
		U3Cget_ChildrenU3Ed__43__ctor_m4A8B228BE4DA2CA88DD8CE8C67D0357664EB26A9(L_0, ((int32_t)-2), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode::get_DeepChildren()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JSONNode_get_DeepChildren_mF66414308628678DEA3A73F7B6841D82D99020CE (JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Cget_DeepChildrenU3Ed__45_tCD907C30A1B957DFC6A9DC8CFCC199DD51C378FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3Cget_DeepChildrenU3Ed__45_tCD907C30A1B957DFC6A9DC8CFCC199DD51C378FA * L_0 = (U3Cget_DeepChildrenU3Ed__45_tCD907C30A1B957DFC6A9DC8CFCC199DD51C378FA *)il2cpp_codegen_object_new(U3Cget_DeepChildrenU3Ed__45_tCD907C30A1B957DFC6A9DC8CFCC199DD51C378FA_il2cpp_TypeInfo_var);
		U3Cget_DeepChildrenU3Ed__45__ctor_m3800B443AD95F9F5ED8AF4FA4C43CD43DEBF685A(L_0, ((int32_t)-2), /*hidden argument*/NULL);
		U3Cget_DeepChildrenU3Ed__45_tCD907C30A1B957DFC6A9DC8CFCC199DD51C378FA * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_3(__this);
		return L_1;
	}
}
// System.Boolean SimpleJSON.JSONNode::HasKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNode_HasKey_mA5B8306E68983DE34D500D2F83FC7013FF9FE746 (JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * __this, String_t* ___aKey0, const RuntimeMethod* method)
{
	{
		// return false;
		return (bool)0;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::GetValueOrDefault(System.String,SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * JSONNode_GetValueOrDefault_mCDBCF987A1752AECCCB780FE8C9F40AC1071FC93 (JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * __this, String_t* ___aKey0, JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * ___aDefault1, const RuntimeMethod* method)
{
	{
		// return aDefault;
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_0 = ___aDefault1;
		return L_0;
	}
}
// System.String SimpleJSON.JSONNode::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONNode_ToString_m6C2211311DCA4723345DF3832693184CB3E4554D (JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	{
		// StringBuilder sb = new StringBuilder();
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// WriteToStringBuilder(sb, 0, 0, JSONTextMode.Compact);
		StringBuilder_t * L_1 = V_0;
		VirtualActionInvoker4< StringBuilder_t *, int32_t, int32_t, int32_t >::Invoke(31 /* System.Void SimpleJSON.JSONNode::WriteToStringBuilder(System.Text.StringBuilder,System.Int32,System.Int32,SimpleJSON.JSONTextMode) */, __this, L_1, 0, 0, 0);
		// return sb.ToString();
		StringBuilder_t * L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		return L_3;
	}
}
// System.String SimpleJSON.JSONNode::ToString(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONNode_ToString_mC000EFD570BBC997597C47F38395D1B780063CCC (JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * __this, int32_t ___aIndent0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	{
		// StringBuilder sb = new StringBuilder();
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// WriteToStringBuilder(sb, 0, aIndent, JSONTextMode.Indent);
		StringBuilder_t * L_1 = V_0;
		int32_t L_2 = ___aIndent0;
		VirtualActionInvoker4< StringBuilder_t *, int32_t, int32_t, int32_t >::Invoke(31 /* System.Void SimpleJSON.JSONNode::WriteToStringBuilder(System.Text.StringBuilder,System.Int32,System.Int32,SimpleJSON.JSONTextMode) */, __this, L_1, 0, L_2, 1);
		// return sb.ToString();
		StringBuilder_t * L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		return L_4;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>> SimpleJSON.JSONNode::get_Linq()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JSONNode_get_Linq_m90FBEF6424C5C7C4A0DD9489C0638F6905803DA5 (JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinqEnumerator_t45B8943C727186418953AAB476E680E60C03D038_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public IEnumerable<KeyValuePair<string, JSONNode>> Linq { get { return new LinqEnumerator(this); } }
		LinqEnumerator_t45B8943C727186418953AAB476E680E60C03D038 * L_0 = (LinqEnumerator_t45B8943C727186418953AAB476E680E60C03D038 *)il2cpp_codegen_object_new(LinqEnumerator_t45B8943C727186418953AAB476E680E60C03D038_il2cpp_TypeInfo_var);
		LinqEnumerator__ctor_m3B100A94EC3DF14B4A94AE12D32050F84E72F65B(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// SimpleJSON.JSONNode/KeyEnumerator SimpleJSON.JSONNode::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyEnumerator_t480359137170FD764CB75A243A787E1AEDF89585  JSONNode_get_Keys_m4D9FD5091E68ADC0A6A621818E27CD2CD1DDE7C0 (JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * __this, const RuntimeMethod* method)
{
	{
		// public KeyEnumerator Keys { get { return new KeyEnumerator(GetEnumerator()); } }
		Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8  L_0;
		L_0 = VirtualFuncInvoker0< Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8  >::Invoke(32 /* SimpleJSON.JSONNode/Enumerator SimpleJSON.JSONNode::GetEnumerator() */, __this);
		KeyEnumerator_t480359137170FD764CB75A243A787E1AEDF89585  L_1;
		memset((&L_1), 0, sizeof(L_1));
		KeyEnumerator__ctor_m0747B3AC824951C3C8B818496CEDD6D88B9E7E8A_inline((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// SimpleJSON.JSONNode/ValueEnumerator SimpleJSON.JSONNode::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueEnumerator_tF3B99F2AF4F29E348D9CEF62A42AF04D04DB0C61  JSONNode_get_Values_mC225711E45284FEC77A340E3D7686B2F667EBE6A (JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * __this, const RuntimeMethod* method)
{
	{
		// public ValueEnumerator Values { get { return new ValueEnumerator(GetEnumerator()); } }
		Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8  L_0;
		L_0 = VirtualFuncInvoker0< Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8  >::Invoke(32 /* SimpleJSON.JSONNode/Enumerator SimpleJSON.JSONNode::GetEnumerator() */, __this);
		ValueEnumerator_tF3B99F2AF4F29E348D9CEF62A42AF04D04DB0C61  L_1;
		memset((&L_1), 0, sizeof(L_1));
		ValueEnumerator__ctor_mCB3648E562A32EEA21FD3F4DB8C20160ED03722E_inline((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Double SimpleJSON.JSONNode::get_AsDouble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double JSONNode_get_AsDouble_mDB5FD20F057B328E4A8D2A6E0344D712EA5222CD (JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	{
		// double v = 0.0;
		V_0 = (0.0);
		// if (double.TryParse(Value, NumberStyles.Float, CultureInfo.InvariantCulture, out v))
		String_t* L_0;
		L_0 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String SimpleJSON.JSONNode::get_Value() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_1;
		L_1 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Double_TryParse_mE740D7083AC52793A9634067C4F032570FFBF61E(L_0, ((int32_t)167), L_1, (double*)(&V_0), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		// return v;
		double L_3 = V_0;
		return L_3;
	}

IL_0025:
	{
		// return 0.0;
		return (0.0);
	}
}
// System.Void SimpleJSON.JSONNode::set_AsDouble(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNode_set_AsDouble_mC5255237373D9BFBB462959043D6A230D5E52642 (JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * __this, double ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Value = value.ToString(CultureInfo.InvariantCulture);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_0;
		L_0 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		String_t* L_1;
		L_1 = Double_ToString_m4D920091736623333AE0E32439DBD5CF5AC128FE((double*)(&___value0), L_0, /*hidden argument*/NULL);
		VirtualActionInvoker1< String_t* >::Invoke(10 /* System.Void SimpleJSON.JSONNode::set_Value(System.String) */, __this, L_1);
		// }
		return;
	}
}
// System.Int32 SimpleJSON.JSONNode::get_AsInt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONNode_get_AsInt_m3F0B6AC95E43D28183E6FF0E6680E8AEBFF5614D (JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * __this, const RuntimeMethod* method)
{
	{
		// get { return (int)AsDouble; }
		double L_0;
		L_0 = VirtualFuncInvoker0< double >::Invoke(33 /* System.Double SimpleJSON.JSONNode::get_AsDouble() */, __this);
		return ((int32_t)((int32_t)L_0));
	}
}
// System.Void SimpleJSON.JSONNode::set_AsInt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNode_set_AsInt_m19378B69037D4A783749882479D66937E3942CE2 (JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { AsDouble = value; }
		int32_t L_0 = ___value0;
		VirtualActionInvoker1< double >::Invoke(34 /* System.Void SimpleJSON.JSONNode::set_AsDouble(System.Double) */, __this, ((double)((double)L_0)));
		// set { AsDouble = value; }
		return;
	}
}
// System.Single SimpleJSON.JSONNode::get_AsFloat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float JSONNode_get_AsFloat_mA5E740EE81C49B0A2B3653DD2D91EAC4D0DA38B2 (JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * __this, const RuntimeMethod* method)
{
	{
		// get { return (float)AsDouble; }
		double L_0;
		L_0 = VirtualFuncInvoker0< double >::Invoke(33 /* System.Double SimpleJSON.JSONNode::get_AsDouble() */, __this);
		return ((float)((float)L_0));
	}
}
// System.Void SimpleJSON.JSONNode::set_AsFloat(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNode_set_AsFloat_m7389EDD5E4CAFCBF1B5FD2BC91E492736E0ECA65 (JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { AsDouble = value; }
		float L_0 = ___value0;
		VirtualActionInvoker1< double >::Invoke(34 /* System.Void SimpleJSON.JSONNode::set_AsDouble(System.Double) */, __this, ((double)((double)L_0)));
		// set { AsDouble = value; }
		return;
	}
}
// System.Boolean SimpleJSON.JSONNode::get_AsBool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNode_get_AsBool_m468F905B830A77EDC94036AECAE06CCB2062D2F0 (JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// bool v = false;
		V_0 = (bool)0;
		// if (bool.TryParse(Value, out v))
		String_t* L_0;
		L_0 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String SimpleJSON.JSONNode::get_Value() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Boolean_TryParse_m083F8EB6F0A07B24C26310648CB2380C3D3AAEE7(L_0, (bool*)(&V_0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// return v;
		bool L_2 = V_0;
		return L_2;
	}

IL_0013:
	{
		// return !string.IsNullOrEmpty(Value);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String SimpleJSON.JSONNode::get_Value() */, __this);
		bool L_4;
		L_4 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_3, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void SimpleJSON.JSONNode::set_AsBool(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNode_set_AsBool_mAF476F53D7ED6FAE388588E1C1DD2B4EF980F5EE (JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		s_Il2CppMethodInitialized = true;
	}
	JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * G_B2_0 = NULL;
	JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * G_B3_1 = NULL;
	{
		// Value = (value) ? "true" : "false";
		bool L_0 = ___value0;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_000b;
		}
	}
	{
		G_B3_0 = _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
		G_B3_1 = G_B1_0;
		goto IL_0010;
	}

IL_000b:
	{
		G_B3_0 = _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
		G_B3_1 = G_B2_0;
	}

IL_0010:
	{
		NullCheck(G_B3_1);
		VirtualActionInvoker1< String_t* >::Invoke(10 /* System.Void SimpleJSON.JSONNode::set_Value(System.String) */, G_B3_1, G_B3_0);
		// }
		return;
	}
}
// System.Int64 SimpleJSON.JSONNode::get_AsLong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t JSONNode_get_AsLong_m20B3E5C5287AC523A5C46918126974FE016B3877 (JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * __this, const RuntimeMethod* method)
{
	int64_t V_0 = 0;
	{
		// long val = 0;
		V_0 = ((int64_t)((int64_t)0));
		// if (long.TryParse(Value, out val))
		String_t* L_0;
		L_0 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String SimpleJSON.JSONNode::get_Value() */, __this);
		bool L_1;
		L_1 = Int64_TryParse_m6EA988890D7F9954EA49A7227E60B3C674930650(L_0, (int64_t*)(&V_0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// return val;
		int64_t L_2 = V_0;
		return L_2;
	}

IL_0014:
	{
		// return 0L;
		return ((int64_t)((int64_t)0));
	}
}
// System.Void SimpleJSON.JSONNode::set_AsLong(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNode_set_AsLong_mE36EF82E60B0C32F150346D699FE9869F3217CF2 (JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		// Value = value.ToString();
		String_t* L_0;
		L_0 = Int64_ToString_m8AAA883F340993DCDF339C208F3416C3BA82589F((int64_t*)(&___value0), /*hidden argument*/NULL);
		VirtualActionInvoker1< String_t* >::Invoke(10 /* System.Void SimpleJSON.JSONNode::set_Value(System.String) */, __this, L_0);
		// }
		return;
	}
}
// System.UInt64 SimpleJSON.JSONNode::get_AsULong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t JSONNode_get_AsULong_m0530C31674EF966ACA3049CEC7B58DE0999C2E6C (JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * __this, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	{
		// ulong val = 0;
		V_0 = ((int64_t)((int64_t)0));
		// if (ulong.TryParse(Value, out val))
		String_t* L_0;
		L_0 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String SimpleJSON.JSONNode::get_Value() */, __this);
		bool L_1;
		L_1 = UInt64_TryParse_m9A4700B9A5FD8F9B5270914DA0DF310A6BD07AE5(L_0, (uint64_t*)(&V_0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// return val;
		uint64_t L_2 = V_0;
		return L_2;
	}

IL_0014:
	{
		// return 0;
		return ((int64_t)((int64_t)0));
	}
}
// System.Void SimpleJSON.JSONNode::set_AsULong(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNode_set_AsULong_mBFB736B7624B2F58723E370CE9C2218986D3831B (JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	{
		// Value = value.ToString();
		String_t* L_0;
		L_0 = UInt64_ToString_m3644686F0A0E32CB94D300CF891DBD7920396F37((uint64_t*)(&___value0), /*hidden argument*/NULL);
		VirtualActionInvoker1< String_t* >::Invoke(10 /* System.Void SimpleJSON.JSONNode::set_Value(System.String) */, __this, L_0);
		// }
		return;
	}
}
// SimpleJSON.JSONArray SimpleJSON.JSONNode::get_AsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E * JSONNode_get_AsArray_mD6FAE94576DA50BCAF8E3EEF81CAB62C89966D3F (JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return this as JSONArray;
		return ((JSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E *)IsInstClass((RuntimeObject*)__this, JSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E_il2cpp_TypeInfo_var));
	}
}
// SimpleJSON.JSONObject SimpleJSON.JSONNode::get_AsObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1 * JSONNode_get_AsObject_m96C974C159160E812077411341FFA273B3BD4216 (JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return this as JSONObject;
		return ((JSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1 *)IsInstClass((RuntimeObject*)__this, JSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1_il2cpp_TypeInfo_var));
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::op_Implicit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * JSONNode_op_Implicit_mC6392F9282360F9ABD3AC734B18BF94C1FB7F107 (String_t* ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONString_tDC7D689F0DBDAC1FC0399D63CA27C8FEB266EFAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (s == null) ? (JSONNode) JSONNull.CreateOrGet() : new JSONString(s);
		String_t* L_0 = ___s0;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		String_t* L_1 = ___s0;
		JSONString_tDC7D689F0DBDAC1FC0399D63CA27C8FEB266EFAF * L_2 = (JSONString_tDC7D689F0DBDAC1FC0399D63CA27C8FEB266EFAF *)il2cpp_codegen_object_new(JSONString_tDC7D689F0DBDAC1FC0399D63CA27C8FEB266EFAF_il2cpp_TypeInfo_var);
		JSONString__ctor_m7E8C037643D81531C83ED7103B3B2E2847454981(L_2, L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_000a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47_il2cpp_TypeInfo_var);
		JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47 * L_3;
		L_3 = JSONNull_CreateOrGet_mE2E06026E04958D2795026FBF38A47FBE14A7AEF(/*hidden argument*/NULL);
		return L_3;
	}
}
// System.String SimpleJSON.JSONNode::op_Implicit(SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONNode_op_Implicit_mE11B102085A3EDECED8D7593CE898C27BC363AAF (JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * ___d0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (d == null) ? null : d.Value;
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_0 = ___d0;
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = JSONNode_op_Equality_mEB349D8644B8E3F87CD33A35457A00480EFB329A(L_0, NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_2 = ___d0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String SimpleJSON.JSONNode::get_Value() */, L_2);
		return L_3;
	}

IL_0010:
	{
		return (String_t*)NULL;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::op_Implicit(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * JSONNode_op_Implicit_mDB9E40DDE6449122804576F1F4FC2D1BD9FE9721 (double ___n0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new JSONNumber(n);
		double L_0 = ___n0;
		JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5 * L_1 = (JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5 *)il2cpp_codegen_object_new(JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5_il2cpp_TypeInfo_var);
		JSONNumber__ctor_m540460B21D5ED37F9529F1734B24B6E868D432B8(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Double SimpleJSON.JSONNode::op_Implicit(SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double JSONNode_op_Implicit_m96884B0F42B9282CF3B94DF70EA790591CE5D70A (JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * ___d0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (d == null) ? 0 : d.AsDouble;
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_0 = ___d0;
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = JSONNode_op_Equality_mEB349D8644B8E3F87CD33A35457A00480EFB329A(L_0, NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_2 = ___d0;
		NullCheck(L_2);
		double L_3;
		L_3 = VirtualFuncInvoker0< double >::Invoke(33 /* System.Double SimpleJSON.JSONNode::get_AsDouble() */, L_2);
		return L_3;
	}

IL_0010:
	{
		return (0.0);
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::op_Implicit(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * JSONNode_op_Implicit_m15B5C6A8F83AEFCA8E2422039495626A6B5BA9AD (float ___n0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new JSONNumber(n);
		float L_0 = ___n0;
		JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5 * L_1 = (JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5 *)il2cpp_codegen_object_new(JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5_il2cpp_TypeInfo_var);
		JSONNumber__ctor_m540460B21D5ED37F9529F1734B24B6E868D432B8(L_1, ((double)((double)L_0)), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Single SimpleJSON.JSONNode::op_Implicit(SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float JSONNode_op_Implicit_m1C2AE3220662C5E56E16142EFD9391B7C50A318C (JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * ___d0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (d == null) ? 0 : d.AsFloat;
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_0 = ___d0;
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = JSONNode_op_Equality_mEB349D8644B8E3F87CD33A35457A00480EFB329A(L_0, NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_2 = ___d0;
		NullCheck(L_2);
		float L_3;
		L_3 = VirtualFuncInvoker0< float >::Invoke(37 /* System.Single SimpleJSON.JSONNode::get_AsFloat() */, L_2);
		return L_3;
	}

IL_0010:
	{
		return (0.0f);
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * JSONNode_op_Implicit_m04F10331C13E2A8FC82650B6B15E1187B045F3A7 (int32_t ___n0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new JSONNumber(n);
		int32_t L_0 = ___n0;
		JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5 * L_1 = (JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5 *)il2cpp_codegen_object_new(JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5_il2cpp_TypeInfo_var);
		JSONNumber__ctor_m540460B21D5ED37F9529F1734B24B6E868D432B8(L_1, ((double)((double)L_0)), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 SimpleJSON.JSONNode::op_Implicit(SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONNode_op_Implicit_m9A07E4AE48A99860EC3766183C68D53FBD909A50 (JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * ___d0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (d == null) ? 0 : d.AsInt;
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_0 = ___d0;
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = JSONNode_op_Equality_mEB349D8644B8E3F87CD33A35457A00480EFB329A(L_0, NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_2 = ___d0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(35 /* System.Int32 SimpleJSON.JSONNode::get_AsInt() */, L_2);
		return L_3;
	}

IL_0010:
	{
		return 0;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::op_Implicit(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * JSONNode_op_Implicit_m34481FC523B55CDDE3E324C99B23654D93842660 (int64_t ___n0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONString_tDC7D689F0DBDAC1FC0399D63CA27C8FEB266EFAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (longAsString)
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		bool L_0 = ((JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_StaticFields*)il2cpp_codegen_static_fields_for(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var))->get_longAsString_1();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// return new JSONString(n.ToString());
		String_t* L_1;
		L_1 = Int64_ToString_m8AAA883F340993DCDF339C208F3416C3BA82589F((int64_t*)(&___n0), /*hidden argument*/NULL);
		JSONString_tDC7D689F0DBDAC1FC0399D63CA27C8FEB266EFAF * L_2 = (JSONString_tDC7D689F0DBDAC1FC0399D63CA27C8FEB266EFAF *)il2cpp_codegen_object_new(JSONString_tDC7D689F0DBDAC1FC0399D63CA27C8FEB266EFAF_il2cpp_TypeInfo_var);
		JSONString__ctor_m7E8C037643D81531C83ED7103B3B2E2847454981(L_2, L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0014:
	{
		// return new JSONNumber(n);
		int64_t L_3 = ___n0;
		JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5 * L_4 = (JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5 *)il2cpp_codegen_object_new(JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5_il2cpp_TypeInfo_var);
		JSONNumber__ctor_m540460B21D5ED37F9529F1734B24B6E868D432B8(L_4, ((double)((double)L_3)), /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Int64 SimpleJSON.JSONNode::op_Implicit(SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t JSONNode_op_Implicit_m024836707A15DC95A75EAFEB0B7F0B1A24CED920 (JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * ___d0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (d == null) ? 0L : d.AsLong;
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_0 = ___d0;
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = JSONNode_op_Equality_mEB349D8644B8E3F87CD33A35457A00480EFB329A(L_0, NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_2 = ___d0;
		NullCheck(L_2);
		int64_t L_3;
		L_3 = VirtualFuncInvoker0< int64_t >::Invoke(41 /* System.Int64 SimpleJSON.JSONNode::get_AsLong() */, L_2);
		return L_3;
	}

IL_0010:
	{
		return ((int64_t)((int64_t)0));
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::op_Implicit(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * JSONNode_op_Implicit_mD0805782226DBAA9C2A539C733441243759E155E (uint64_t ___n0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONString_tDC7D689F0DBDAC1FC0399D63CA27C8FEB266EFAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (longAsString)
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		bool L_0 = ((JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_StaticFields*)il2cpp_codegen_static_fields_for(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var))->get_longAsString_1();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// return new JSONString(n.ToString());
		String_t* L_1;
		L_1 = UInt64_ToString_m3644686F0A0E32CB94D300CF891DBD7920396F37((uint64_t*)(&___n0), /*hidden argument*/NULL);
		JSONString_tDC7D689F0DBDAC1FC0399D63CA27C8FEB266EFAF * L_2 = (JSONString_tDC7D689F0DBDAC1FC0399D63CA27C8FEB266EFAF *)il2cpp_codegen_object_new(JSONString_tDC7D689F0DBDAC1FC0399D63CA27C8FEB266EFAF_il2cpp_TypeInfo_var);
		JSONString__ctor_m7E8C037643D81531C83ED7103B3B2E2847454981(L_2, L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0014:
	{
		// return new JSONNumber(n);
		uint64_t L_3 = ___n0;
		JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5 * L_4 = (JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5 *)il2cpp_codegen_object_new(JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5_il2cpp_TypeInfo_var);
		JSONNumber__ctor_m540460B21D5ED37F9529F1734B24B6E868D432B8(L_4, ((double)((double)((double)((uint64_t)L_3)))), /*hidden argument*/NULL);
		return L_4;
	}
}
// System.UInt64 SimpleJSON.JSONNode::op_Implicit(SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t JSONNode_op_Implicit_mA97A332F2DF876041BE7DADF73D9C81A039F23CB (JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * ___d0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (d == null) ? 0 : d.AsULong;
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_0 = ___d0;
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = JSONNode_op_Equality_mEB349D8644B8E3F87CD33A35457A00480EFB329A(L_0, NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_2 = ___d0;
		NullCheck(L_2);
		uint64_t L_3;
		L_3 = VirtualFuncInvoker0< uint64_t >::Invoke(43 /* System.UInt64 SimpleJSON.JSONNode::get_AsULong() */, L_2);
		return L_3;
	}

IL_0010:
	{
		return ((int64_t)((int64_t)0));
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::op_Implicit(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * JSONNode_op_Implicit_m04174CC463B2FAAA3893DA0E1BC5F0EB0280C3B5 (bool ___b0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONBool_t9FF67B765B247F2AD7F1614032A0A0EA3497EC62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new JSONBool(b);
		bool L_0 = ___b0;
		JSONBool_t9FF67B765B247F2AD7F1614032A0A0EA3497EC62 * L_1 = (JSONBool_t9FF67B765B247F2AD7F1614032A0A0EA3497EC62 *)il2cpp_codegen_object_new(JSONBool_t9FF67B765B247F2AD7F1614032A0A0EA3497EC62_il2cpp_TypeInfo_var);
		JSONBool__ctor_mBFA987A0D1492AFBC458BB89C88E7EC4AA2BE007(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean SimpleJSON.JSONNode::op_Implicit(SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNode_op_Implicit_m56F05EC7453355A68B50E4933297958F8D60701C (JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * ___d0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (d == null) ? false : d.AsBool;
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_0 = ___d0;
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = JSONNode_op_Equality_mEB349D8644B8E3F87CD33A35457A00480EFB329A(L_0, NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_2 = ___d0;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(39 /* System.Boolean SimpleJSON.JSONNode::get_AsBool() */, L_2);
		return L_3;
	}

IL_0010:
	{
		return (bool)0;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::op_Implicit(System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * JSONNode_op_Implicit_m757755AFE21B579A47662DAA9BD32620FC7BC7F2 (KeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46  ___aKeyValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mD27150EA5031B873539FD3D826C77219F3FFE044_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return aKeyValue.Value;
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_0;
		L_0 = KeyValuePair_2_get_Value_mD27150EA5031B873539FD3D826C77219F3FFE044_inline((KeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46 *)(&___aKeyValue0), /*hidden argument*/KeyValuePair_2_get_Value_mD27150EA5031B873539FD3D826C77219F3FFE044_RuntimeMethod_var);
		return L_0;
	}
}
// System.Boolean SimpleJSON.JSONNode::op_Equality(SimpleJSON.JSONNode,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNode_op_Equality_mEB349D8644B8E3F87CD33A35457A00480EFB329A (JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * ___a0, RuntimeObject * ___b1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B6_0 = 0;
	int32_t G_B10_0 = 0;
	{
		// if (ReferenceEquals(a, b))
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_0 = ___a0;
		RuntimeObject * L_1 = ___b1;
		if ((!(((RuntimeObject*)(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 *)L_0) == ((RuntimeObject*)(RuntimeObject *)L_1))))
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
		// bool aIsNull = a is JSONNull || ReferenceEquals(a, null) || a is JSONLazyCreator;
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_2 = ___a0;
		if (((JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47 *)IsInstClass((RuntimeObject*)L_2, JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47_il2cpp_TypeInfo_var)))
		{
			goto IL_001c;
		}
	}
	{
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_3 = ___a0;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_4 = ___a0;
		G_B6_0 = ((!(((RuntimeObject*)(JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6 *)((JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6 *)IsInstClass((RuntimeObject*)L_4, JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_001d;
	}

IL_001c:
	{
		G_B6_0 = 1;
	}

IL_001d:
	{
		V_0 = (bool)G_B6_0;
		// bool bIsNull = b is JSONNull || ReferenceEquals(b, null) || b is JSONLazyCreator;
		RuntimeObject * L_5 = ___b1;
		if (((JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47 *)IsInstClass((RuntimeObject*)L_5, JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47_il2cpp_TypeInfo_var)))
		{
			goto IL_0034;
		}
	}
	{
		RuntimeObject * L_6 = ___b1;
		if (!L_6)
		{
			goto IL_0034;
		}
	}
	{
		RuntimeObject * L_7 = ___b1;
		G_B10_0 = ((!(((RuntimeObject*)(JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6 *)((JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6 *)IsInstClass((RuntimeObject*)L_7, JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_0035;
	}

IL_0034:
	{
		G_B10_0 = 1;
	}

IL_0035:
	{
		V_1 = (bool)G_B10_0;
		// if (aIsNull && bIsNull)
		bool L_8 = V_0;
		bool L_9 = V_1;
		if (!((int32_t)((int32_t)L_8&(int32_t)L_9)))
		{
			goto IL_003d;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_003d:
	{
		// return !aIsNull && a.Equals(b);
		bool L_10 = V_0;
		if (L_10)
		{
			goto IL_0048;
		}
	}
	{
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_11 = ___a0;
		RuntimeObject * L_12 = ___b1;
		NullCheck(L_11);
		bool L_13;
		L_13 = VirtualFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_11, L_12);
		return L_13;
	}

IL_0048:
	{
		return (bool)0;
	}
}
// System.Boolean SimpleJSON.JSONNode::op_Inequality(SimpleJSON.JSONNode,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNode_op_Inequality_m22851EA8F1ED30D4A1B977CD92AFEEB246DD098A (JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * ___a0, RuntimeObject * ___b1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return !(a == b);
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_0 = ___a0;
		RuntimeObject * L_1 = ___b1;
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = JSONNode_op_Equality_mEB349D8644B8E3F87CD33A35457A00480EFB329A(L_0, L_1, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean SimpleJSON.JSONNode::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNode_Equals_mBFF7A822B266FD96F6A6B54433B3F9A00CE06AA0 (JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	{
		// return ReferenceEquals(this, obj);
		RuntimeObject * L_0 = ___obj0;
		return (bool)((((RuntimeObject*)(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 *)__this) == ((RuntimeObject*)(RuntimeObject *)L_0))? 1 : 0);
	}
}
// System.Int32 SimpleJSON.JSONNode::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONNode_GetHashCode_mA0F3A3B708D8EAABFB5AAF1A3FE8EB86A5CC90BA (JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * __this, const RuntimeMethod* method)
{
	{
		// return base.GetHashCode();
		int32_t L_0;
		L_0 = Object_GetHashCode_m29972277898725CF5403FB9765F335F0FAEA8162(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Text.StringBuilder SimpleJSON.JSONNode::get_EscapeBuilder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * JSONNode_get_EscapeBuilder_m0ACB6810C49FC1E2246978F2E5C66F7344422458 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_EscapeBuilder == null)
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		StringBuilder_t * L_0 = ((JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var))->get_m_EscapeBuilder_3();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		// m_EscapeBuilder = new StringBuilder();
		StringBuilder_t * L_1 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		((JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var))->set_m_EscapeBuilder_3(L_1);
	}

IL_0011:
	{
		// return m_EscapeBuilder;
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		StringBuilder_t * L_2 = ((JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var))->get_m_EscapeBuilder_3();
		return L_2;
	}
}
// System.String SimpleJSON.JSONNode::Escape(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONNode_Escape_m71E3F923CC34FB0961ACD615E516B61AB60BBE23 (String_t* ___aText0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB78F235D4291950A7D101307609C259F3E1F033F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD68508B50CDE1B2E777400476044304CB8149311);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	Il2CppChar V_4 = 0x0;
	uint16_t V_5 = 0;
	{
		// var sb = EscapeBuilder;
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		StringBuilder_t * L_0;
		L_0 = JSONNode_get_EscapeBuilder_m0ACB6810C49FC1E2246978F2E5C66F7344422458(/*hidden argument*/NULL);
		V_0 = L_0;
		// sb.Length = 0;
		StringBuilder_t * L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_set_Length_m7C1756193B05DCA5A23C5DC98EE90A9FC685A27A(L_1, 0, /*hidden argument*/NULL);
		// if (sb.Capacity < aText.Length + aText.Length / 10)
		StringBuilder_t * L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = StringBuilder_get_Capacity_m067D01B281C708C07EB01C776CA99B72C4F78B30(L_2, /*hidden argument*/NULL);
		String_t* L_4 = ___aText0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_4, /*hidden argument*/NULL);
		String_t* L_6 = ___aText0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_6, /*hidden argument*/NULL);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)((int32_t)((int32_t)L_7/(int32_t)((int32_t)10))))))))
		{
			goto IL_003b;
		}
	}
	{
		// sb.Capacity = aText.Length + aText.Length / 10;
		StringBuilder_t * L_8 = V_0;
		String_t* L_9 = ___aText0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_9, /*hidden argument*/NULL);
		String_t* L_11 = ___aText0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_11, /*hidden argument*/NULL);
		NullCheck(L_8);
		StringBuilder_set_Capacity_mC1488A3E3622EE7B0A7A340F22A55CCFBBF21669(L_8, ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)((int32_t)((int32_t)L_12/(int32_t)((int32_t)10))))), /*hidden argument*/NULL);
	}

IL_003b:
	{
		// foreach (char c in aText)
		String_t* L_13 = ___aText0;
		V_2 = L_13;
		V_3 = 0;
		goto IL_0125;
	}

IL_0044:
	{
		// foreach (char c in aText)
		String_t* L_14 = V_2;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		Il2CppChar L_16;
		L_16 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_14, L_15, /*hidden argument*/NULL);
		V_4 = L_16;
		Il2CppChar L_17 = V_4;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)8)))
		{
			case 0:
			{
				goto IL_00c6;
			}
			case 1:
			{
				goto IL_00b8;
			}
			case 2:
			{
				goto IL_009c;
			}
			case 3:
			{
				goto IL_00e2;
			}
			case 4:
			{
				goto IL_00d4;
			}
			case 5:
			{
				goto IL_00aa;
			}
		}
	}
	{
		Il2CppChar L_18 = V_4;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)34))))
		{
			goto IL_008b;
		}
	}
	{
		Il2CppChar L_19 = V_4;
		if ((!(((uint32_t)L_19) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_00e2;
		}
	}
	{
		// sb.Append("\\\\");
		StringBuilder_t * L_20 = V_0;
		NullCheck(L_20);
		StringBuilder_t * L_21;
		L_21 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_20, _stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE, /*hidden argument*/NULL);
		// break;
		goto IL_0121;
	}

IL_008b:
	{
		// sb.Append("\\\"");
		StringBuilder_t * L_22 = V_0;
		NullCheck(L_22);
		StringBuilder_t * L_23;
		L_23 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_22, _stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD, /*hidden argument*/NULL);
		// break;
		goto IL_0121;
	}

IL_009c:
	{
		// sb.Append("\\n");
		StringBuilder_t * L_24 = V_0;
		NullCheck(L_24);
		StringBuilder_t * L_25;
		L_25 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_24, _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51, /*hidden argument*/NULL);
		// break;
		goto IL_0121;
	}

IL_00aa:
	{
		// sb.Append("\\r");
		StringBuilder_t * L_26 = V_0;
		NullCheck(L_26);
		StringBuilder_t * L_27;
		L_27 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_26, _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F, /*hidden argument*/NULL);
		// break;
		goto IL_0121;
	}

IL_00b8:
	{
		// sb.Append("\\t");
		StringBuilder_t * L_28 = V_0;
		NullCheck(L_28);
		StringBuilder_t * L_29;
		L_29 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_28, _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462, /*hidden argument*/NULL);
		// break;
		goto IL_0121;
	}

IL_00c6:
	{
		// sb.Append("\\b");
		StringBuilder_t * L_30 = V_0;
		NullCheck(L_30);
		StringBuilder_t * L_31;
		L_31 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_30, _stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9, /*hidden argument*/NULL);
		// break;
		goto IL_0121;
	}

IL_00d4:
	{
		// sb.Append("\\f");
		StringBuilder_t * L_32 = V_0;
		NullCheck(L_32);
		StringBuilder_t * L_33;
		L_33 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_32, _stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122, /*hidden argument*/NULL);
		// break;
		goto IL_0121;
	}

IL_00e2:
	{
		// if (c < ' ' || (forceASCII && c > 127))
		Il2CppChar L_34 = V_4;
		if ((((int32_t)L_34) < ((int32_t)((int32_t)32))))
		{
			goto IL_00f5;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		bool L_35 = ((JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_StaticFields*)il2cpp_codegen_static_fields_for(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var))->get_forceASCII_0();
		if (!L_35)
		{
			goto IL_0118;
		}
	}
	{
		Il2CppChar L_36 = V_4;
		if ((((int32_t)L_36) <= ((int32_t)((int32_t)127))))
		{
			goto IL_0118;
		}
	}

IL_00f5:
	{
		// ushort val = c;
		Il2CppChar L_37 = V_4;
		V_5 = (uint16_t)L_37;
		// sb.Append("\\u").Append(val.ToString("X4"));
		StringBuilder_t * L_38 = V_0;
		NullCheck(L_38);
		StringBuilder_t * L_39;
		L_39 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_38, _stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699, /*hidden argument*/NULL);
		String_t* L_40;
		L_40 = UInt16_ToString_mB9BF3213F6AC036243B6AB79B0C98C4C727FB6E1((uint16_t*)(&V_5), _stringLiteralD68508B50CDE1B2E777400476044304CB8149311, /*hidden argument*/NULL);
		NullCheck(L_39);
		StringBuilder_t * L_41;
		L_41 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_39, L_40, /*hidden argument*/NULL);
		// }
		goto IL_0121;
	}

IL_0118:
	{
		// sb.Append(c);
		StringBuilder_t * L_42 = V_0;
		Il2CppChar L_43 = V_4;
		NullCheck(L_42);
		StringBuilder_t * L_44;
		L_44 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_42, L_43, /*hidden argument*/NULL);
	}

IL_0121:
	{
		int32_t L_45 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)1));
	}

IL_0125:
	{
		// foreach (char c in aText)
		int32_t L_46 = V_3;
		String_t* L_47 = V_2;
		NullCheck(L_47);
		int32_t L_48;
		L_48 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_47, /*hidden argument*/NULL);
		if ((((int32_t)L_46) < ((int32_t)L_48)))
		{
			goto IL_0044;
		}
	}
	{
		// string result = sb.ToString();
		StringBuilder_t * L_49 = V_0;
		NullCheck(L_49);
		String_t* L_50;
		L_50 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_49);
		V_1 = L_50;
		// sb.Length = 0;
		StringBuilder_t * L_51 = V_0;
		NullCheck(L_51);
		StringBuilder_set_Length_m7C1756193B05DCA5A23C5DC98EE90A9FC685A27A(L_51, 0, /*hidden argument*/NULL);
		// return result;
		String_t* L_52 = V_1;
		return L_52;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::ParseElement(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * JSONNode_ParseElement_mA7B19451D1A3A82B822DB5C563CF26DA7712D925 (String_t* ___token0, bool ___quoted1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	String_t* V_1 = NULL;
	{
		// if (quoted)
		bool L_0 = ___quoted1;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return token;
		String_t* L_1 = ___token0;
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_2;
		L_2 = JSONNode_op_Implicit_mC6392F9282360F9ABD3AC734B18BF94C1FB7F107(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_000a:
	{
		// if (token.Length <= 5)
		String_t* L_3 = ___token0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_3, /*hidden argument*/NULL);
		if ((((int32_t)L_4) > ((int32_t)5)))
		{
			goto IL_0058;
		}
	}
	{
		// string tmp = token.ToLower();
		String_t* L_5 = ___token0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = String_ToLower_m7875A49FE166D0A68F3F6B6E70C0C056EBEFD31D(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		// if (tmp == "false" || tmp == "true")
		String_t* L_7 = V_1;
		bool L_8;
		L_8 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_7, _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0034;
		}
	}
	{
		String_t* L_9 = V_1;
		bool L_10;
		L_10 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_9, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0045;
		}
	}

IL_0034:
	{
		// return tmp == "true";
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_11, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_13;
		L_13 = JSONNode_op_Implicit_m04174CC463B2FAAA3893DA0E1BC5F0EB0280C3B5(L_12, /*hidden argument*/NULL);
		return L_13;
	}

IL_0045:
	{
		// if (tmp == "null")
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_14, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0058;
		}
	}
	{
		// return JSONNull.CreateOrGet();
		IL2CPP_RUNTIME_CLASS_INIT(JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47_il2cpp_TypeInfo_var);
		JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47 * L_16;
		L_16 = JSONNull_CreateOrGet_mE2E06026E04958D2795026FBF38A47FBE14A7AEF(/*hidden argument*/NULL);
		return L_16;
	}

IL_0058:
	{
		// if (double.TryParse(token, NumberStyles.Float, CultureInfo.InvariantCulture, out val))
		String_t* L_17 = ___token0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_18;
		L_18 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Double_TryParse_mE740D7083AC52793A9634067C4F032570FFBF61E(L_17, ((int32_t)167), L_18, (double*)(&V_0), /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_0073;
		}
	}
	{
		// return val;
		double L_20 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_21;
		L_21 = JSONNode_op_Implicit_mDB9E40DDE6449122804576F1F4FC2D1BD9FE9721(L_20, /*hidden argument*/NULL);
		return L_21;
	}

IL_0073:
	{
		// return token;
		String_t* L_22 = ___token0;
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_23;
		L_23 = JSONNode_op_Implicit_mC6392F9282360F9ABD3AC734B18BF94C1FB7F107(L_22, /*hidden argument*/NULL);
		return L_23;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * JSONNode_Parse_m69AEF21E17F84854BF203846254C8B943E9FEF21 (String_t* ___aJSON0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Peek_m29E66649B5F2FD64F2C6838AD05AEF7DF7521B5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_mBA20C63F5B09D8617F58E73C88D6BB8ECD97ECB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m1E86B0066F1B1B437493EF892300488D36FF18D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1__ctor_mF4CDE42219FEEE8D7E0FA47CB1BB69A526F72D9D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_get_Count_m35DDA92DEDAD74B4E432CBD3C997F1E78473AAC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_t49EAD5E51500DDF3F8D6C96A7AD0A78A1F3E87A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	Stack_1_t49EAD5E51500DDF3F8D6C96A7AD0A78A1F3E87A0 * V_0 = NULL;
	JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * V_1 = NULL;
	int32_t V_2 = 0;
	StringBuilder_t * V_3 = NULL;
	String_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	Il2CppChar V_8 = 0x0;
	Il2CppChar V_9 = 0x0;
	String_t* V_10 = NULL;
	{
		// Stack<JSONNode> stack = new Stack<JSONNode>();
		Stack_1_t49EAD5E51500DDF3F8D6C96A7AD0A78A1F3E87A0 * L_0 = (Stack_1_t49EAD5E51500DDF3F8D6C96A7AD0A78A1F3E87A0 *)il2cpp_codegen_object_new(Stack_1_t49EAD5E51500DDF3F8D6C96A7AD0A78A1F3E87A0_il2cpp_TypeInfo_var);
		Stack_1__ctor_mF4CDE42219FEEE8D7E0FA47CB1BB69A526F72D9D(L_0, /*hidden argument*/Stack_1__ctor_mF4CDE42219FEEE8D7E0FA47CB1BB69A526F72D9D_RuntimeMethod_var);
		V_0 = L_0;
		// JSONNode ctx = null;
		V_1 = (JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 *)NULL;
		// int i = 0;
		V_2 = 0;
		// StringBuilder Token = new StringBuilder();
		StringBuilder_t * L_1 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_1, /*hidden argument*/NULL);
		V_3 = L_1;
		// string TokenName = "";
		V_4 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// bool QuoteMode = false;
		V_5 = (bool)0;
		// bool TokenIsQuoted = false;
		V_6 = (bool)0;
		// bool HasNewlineChar = false;
		V_7 = (bool)0;
		goto IL_03f0;
	}

IL_0025:
	{
		// switch (aJSON[i])
		String_t* L_2 = ___aJSON0;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		Il2CppChar L_4;
		L_4 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_2, L_3, /*hidden argument*/NULL);
		V_8 = L_4;
		Il2CppChar L_5 = V_8;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)47)))))
		{
			goto IL_0086;
		}
	}
	{
		Il2CppChar L_6 = V_8;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)32)))))
		{
			goto IL_0066;
		}
	}
	{
		Il2CppChar L_7 = V_8;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)((int32_t)9))))
		{
			case 0:
			{
				goto IL_02a9;
			}
			case 1:
			{
				goto IL_02a1;
			}
			case 2:
			{
				goto IL_03de;
			}
			case 3:
			{
				goto IL_03de;
			}
			case 4:
			{
				goto IL_02a1;
			}
		}
	}
	{
		Il2CppChar L_8 = V_8;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)32))))
		{
			goto IL_02a9;
		}
	}
	{
		goto IL_03de;
	}

IL_0066:
	{
		Il2CppChar L_9 = V_8;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)34))))
		{
			goto IL_023b;
		}
	}
	{
		Il2CppChar L_10 = V_8;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)44))))
		{
			goto IL_024e;
		}
	}
	{
		Il2CppChar L_11 = V_8;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)47))))
		{
			goto IL_0386;
		}
	}
	{
		goto IL_03de;
	}

IL_0086:
	{
		Il2CppChar L_12 = V_8;
		if ((!(((uint32_t)L_12) <= ((uint32_t)((int32_t)93)))))
		{
			goto IL_00b0;
		}
	}
	{
		Il2CppChar L_13 = V_8;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)58))))
		{
			goto IL_020d;
		}
	}
	{
		Il2CppChar L_14 = V_8;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)((int32_t)91))))
		{
			case 0:
			{
				goto IL_0126;
			}
			case 1:
			{
				goto IL_02c3;
			}
			case 2:
			{
				goto IL_017c;
			}
		}
	}
	{
		goto IL_03de;
	}

IL_00b0:
	{
		Il2CppChar L_15 = V_8;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)123))))
		{
			goto IL_00d0;
		}
	}
	{
		Il2CppChar L_16 = V_8;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)125))))
		{
			goto IL_017c;
		}
	}
	{
		Il2CppChar L_17 = V_8;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)65279))))
		{
			goto IL_03ec;
		}
	}
	{
		goto IL_03de;
	}

IL_00d0:
	{
		// if (QuoteMode)
		bool L_18 = V_5;
		if (!L_18)
		{
			goto IL_00e7;
		}
	}
	{
		// Token.Append(aJSON[i]);
		StringBuilder_t * L_19 = V_3;
		String_t* L_20 = ___aJSON0;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		Il2CppChar L_22;
		L_22 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_20, L_21, /*hidden argument*/NULL);
		NullCheck(L_19);
		StringBuilder_t * L_23;
		L_23 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_19, L_22, /*hidden argument*/NULL);
		// break;
		goto IL_03ec;
	}

IL_00e7:
	{
		// stack.Push(new JSONObject());
		Stack_1_t49EAD5E51500DDF3F8D6C96A7AD0A78A1F3E87A0 * L_24 = V_0;
		JSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1 * L_25 = (JSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1 *)il2cpp_codegen_object_new(JSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1_il2cpp_TypeInfo_var);
		JSONObject__ctor_mDC880B59ED4D826E15F67A626326822D1CD1F52C(L_25, /*hidden argument*/NULL);
		NullCheck(L_24);
		Stack_1_Push_m1E86B0066F1B1B437493EF892300488D36FF18D7(L_24, L_25, /*hidden argument*/Stack_1_Push_m1E86B0066F1B1B437493EF892300488D36FF18D7_RuntimeMethod_var);
		// if (ctx != null)
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_26 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = JSONNode_op_Inequality_m22851EA8F1ED30D4A1B977CD92AFEEB246DD098A(L_26, NULL, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_0109;
		}
	}
	{
		// ctx.Add(TokenName, stack.Peek());
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_28 = V_1;
		String_t* L_29 = V_4;
		Stack_1_t49EAD5E51500DDF3F8D6C96A7AD0A78A1F3E87A0 * L_30 = V_0;
		NullCheck(L_30);
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_31;
		L_31 = Stack_1_Peek_m29E66649B5F2FD64F2C6838AD05AEF7DF7521B5D(L_30, /*hidden argument*/Stack_1_Peek_m29E66649B5F2FD64F2C6838AD05AEF7DF7521B5D_RuntimeMethod_var);
		NullCheck(L_28);
		VirtualActionInvoker2< String_t*, JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * >::Invoke(20 /* System.Void SimpleJSON.JSONNode::Add(System.String,SimpleJSON.JSONNode) */, L_28, L_29, L_31);
	}

IL_0109:
	{
		// TokenName = "";
		V_4 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// Token.Length = 0;
		StringBuilder_t * L_32 = V_3;
		NullCheck(L_32);
		StringBuilder_set_Length_m7C1756193B05DCA5A23C5DC98EE90A9FC685A27A(L_32, 0, /*hidden argument*/NULL);
		// ctx = stack.Peek();
		Stack_1_t49EAD5E51500DDF3F8D6C96A7AD0A78A1F3E87A0 * L_33 = V_0;
		NullCheck(L_33);
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_34;
		L_34 = Stack_1_Peek_m29E66649B5F2FD64F2C6838AD05AEF7DF7521B5D(L_33, /*hidden argument*/Stack_1_Peek_m29E66649B5F2FD64F2C6838AD05AEF7DF7521B5D_RuntimeMethod_var);
		V_1 = L_34;
		// HasNewlineChar = false;
		V_7 = (bool)0;
		// break;
		goto IL_03ec;
	}

IL_0126:
	{
		// if (QuoteMode)
		bool L_35 = V_5;
		if (!L_35)
		{
			goto IL_013d;
		}
	}
	{
		// Token.Append(aJSON[i]);
		StringBuilder_t * L_36 = V_3;
		String_t* L_37 = ___aJSON0;
		int32_t L_38 = V_2;
		NullCheck(L_37);
		Il2CppChar L_39;
		L_39 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_37, L_38, /*hidden argument*/NULL);
		NullCheck(L_36);
		StringBuilder_t * L_40;
		L_40 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_36, L_39, /*hidden argument*/NULL);
		// break;
		goto IL_03ec;
	}

IL_013d:
	{
		// stack.Push(new JSONArray());
		Stack_1_t49EAD5E51500DDF3F8D6C96A7AD0A78A1F3E87A0 * L_41 = V_0;
		JSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E * L_42 = (JSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E *)il2cpp_codegen_object_new(JSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E_il2cpp_TypeInfo_var);
		JSONArray__ctor_m5F3CE693516DF2278031527B3BEB830D430F78B1(L_42, /*hidden argument*/NULL);
		NullCheck(L_41);
		Stack_1_Push_m1E86B0066F1B1B437493EF892300488D36FF18D7(L_41, L_42, /*hidden argument*/Stack_1_Push_m1E86B0066F1B1B437493EF892300488D36FF18D7_RuntimeMethod_var);
		// if (ctx != null)
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_43 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		bool L_44;
		L_44 = JSONNode_op_Inequality_m22851EA8F1ED30D4A1B977CD92AFEEB246DD098A(L_43, NULL, /*hidden argument*/NULL);
		if (!L_44)
		{
			goto IL_015f;
		}
	}
	{
		// ctx.Add(TokenName, stack.Peek());
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_45 = V_1;
		String_t* L_46 = V_4;
		Stack_1_t49EAD5E51500DDF3F8D6C96A7AD0A78A1F3E87A0 * L_47 = V_0;
		NullCheck(L_47);
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_48;
		L_48 = Stack_1_Peek_m29E66649B5F2FD64F2C6838AD05AEF7DF7521B5D(L_47, /*hidden argument*/Stack_1_Peek_m29E66649B5F2FD64F2C6838AD05AEF7DF7521B5D_RuntimeMethod_var);
		NullCheck(L_45);
		VirtualActionInvoker2< String_t*, JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * >::Invoke(20 /* System.Void SimpleJSON.JSONNode::Add(System.String,SimpleJSON.JSONNode) */, L_45, L_46, L_48);
	}

IL_015f:
	{
		// TokenName = "";
		V_4 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// Token.Length = 0;
		StringBuilder_t * L_49 = V_3;
		NullCheck(L_49);
		StringBuilder_set_Length_m7C1756193B05DCA5A23C5DC98EE90A9FC685A27A(L_49, 0, /*hidden argument*/NULL);
		// ctx = stack.Peek();
		Stack_1_t49EAD5E51500DDF3F8D6C96A7AD0A78A1F3E87A0 * L_50 = V_0;
		NullCheck(L_50);
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_51;
		L_51 = Stack_1_Peek_m29E66649B5F2FD64F2C6838AD05AEF7DF7521B5D(L_50, /*hidden argument*/Stack_1_Peek_m29E66649B5F2FD64F2C6838AD05AEF7DF7521B5D_RuntimeMethod_var);
		V_1 = L_51;
		// HasNewlineChar = false;
		V_7 = (bool)0;
		// break;
		goto IL_03ec;
	}

IL_017c:
	{
		// if (QuoteMode)
		bool L_52 = V_5;
		if (!L_52)
		{
			goto IL_0193;
		}
	}
	{
		// Token.Append(aJSON[i]);
		StringBuilder_t * L_53 = V_3;
		String_t* L_54 = ___aJSON0;
		int32_t L_55 = V_2;
		NullCheck(L_54);
		Il2CppChar L_56;
		L_56 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_54, L_55, /*hidden argument*/NULL);
		NullCheck(L_53);
		StringBuilder_t * L_57;
		L_57 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_53, L_56, /*hidden argument*/NULL);
		// break;
		goto IL_03ec;
	}

IL_0193:
	{
		// if (stack.Count == 0)
		Stack_1_t49EAD5E51500DDF3F8D6C96A7AD0A78A1F3E87A0 * L_58 = V_0;
		NullCheck(L_58);
		int32_t L_59;
		L_59 = Stack_1_get_Count_m35DDA92DEDAD74B4E432CBD3C997F1E78473AAC4_inline(L_58, /*hidden argument*/Stack_1_get_Count_m35DDA92DEDAD74B4E432CBD3C997F1E78473AAC4_RuntimeMethod_var);
		if (L_59)
		{
			goto IL_01a6;
		}
	}
	{
		// throw new Exception("JSON Parse: Too many closing brackets");
		Exception_t * L_60 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_60, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral870C43A28360ADF668EFBACF63A4553351C7FA4C)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_60, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JSONNode_Parse_m69AEF21E17F84854BF203846254C8B943E9FEF21_RuntimeMethod_var)));
	}

IL_01a6:
	{
		// stack.Pop();
		Stack_1_t49EAD5E51500DDF3F8D6C96A7AD0A78A1F3E87A0 * L_61 = V_0;
		NullCheck(L_61);
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_62;
		L_62 = Stack_1_Pop_mBA20C63F5B09D8617F58E73C88D6BB8ECD97ECB7(L_61, /*hidden argument*/Stack_1_Pop_mBA20C63F5B09D8617F58E73C88D6BB8ECD97ECB7_RuntimeMethod_var);
		// if (Token.Length > 0 || TokenIsQuoted)
		StringBuilder_t * L_63 = V_3;
		NullCheck(L_63);
		int32_t L_64;
		L_64 = StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0(L_63, /*hidden argument*/NULL);
		bool L_65 = V_6;
		if (!((int32_t)((int32_t)((((int32_t)L_64) > ((int32_t)0))? 1 : 0)|(int32_t)L_65)))
		{
			goto IL_01d0;
		}
	}
	{
		// ctx.Add(TokenName, ParseElement(Token.ToString(), TokenIsQuoted));
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_66 = V_1;
		String_t* L_67 = V_4;
		StringBuilder_t * L_68 = V_3;
		NullCheck(L_68);
		String_t* L_69;
		L_69 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_68);
		bool L_70 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_71;
		L_71 = JSONNode_ParseElement_mA7B19451D1A3A82B822DB5C563CF26DA7712D925(L_69, L_70, /*hidden argument*/NULL);
		NullCheck(L_66);
		VirtualActionInvoker2< String_t*, JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * >::Invoke(20 /* System.Void SimpleJSON.JSONNode::Add(System.String,SimpleJSON.JSONNode) */, L_66, L_67, L_71);
	}

IL_01d0:
	{
		// if (ctx != null)
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_72 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		bool L_73;
		L_73 = JSONNode_op_Inequality_m22851EA8F1ED30D4A1B977CD92AFEEB246DD098A(L_72, NULL, /*hidden argument*/NULL);
		if (!L_73)
		{
			goto IL_01e4;
		}
	}
	{
		// ctx.Inline = !HasNewlineChar;
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_74 = V_1;
		bool L_75 = V_7;
		NullCheck(L_74);
		VirtualActionInvoker1< bool >::Invoke(19 /* System.Void SimpleJSON.JSONNode::set_Inline(System.Boolean) */, L_74, (bool)((((int32_t)L_75) == ((int32_t)0))? 1 : 0));
	}

IL_01e4:
	{
		// TokenIsQuoted = false;
		V_6 = (bool)0;
		// TokenName = "";
		V_4 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// Token.Length = 0;
		StringBuilder_t * L_76 = V_3;
		NullCheck(L_76);
		StringBuilder_set_Length_m7C1756193B05DCA5A23C5DC98EE90A9FC685A27A(L_76, 0, /*hidden argument*/NULL);
		// if (stack.Count > 0)
		Stack_1_t49EAD5E51500DDF3F8D6C96A7AD0A78A1F3E87A0 * L_77 = V_0;
		NullCheck(L_77);
		int32_t L_78;
		L_78 = Stack_1_get_Count_m35DDA92DEDAD74B4E432CBD3C997F1E78473AAC4_inline(L_77, /*hidden argument*/Stack_1_get_Count_m35DDA92DEDAD74B4E432CBD3C997F1E78473AAC4_RuntimeMethod_var);
		if ((((int32_t)L_78) <= ((int32_t)0)))
		{
			goto IL_03ec;
		}
	}
	{
		// ctx = stack.Peek();
		Stack_1_t49EAD5E51500DDF3F8D6C96A7AD0A78A1F3E87A0 * L_79 = V_0;
		NullCheck(L_79);
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_80;
		L_80 = Stack_1_Peek_m29E66649B5F2FD64F2C6838AD05AEF7DF7521B5D(L_79, /*hidden argument*/Stack_1_Peek_m29E66649B5F2FD64F2C6838AD05AEF7DF7521B5D_RuntimeMethod_var);
		V_1 = L_80;
		// break;
		goto IL_03ec;
	}

IL_020d:
	{
		// if (QuoteMode)
		bool L_81 = V_5;
		if (!L_81)
		{
			goto IL_0224;
		}
	}
	{
		// Token.Append(aJSON[i]);
		StringBuilder_t * L_82 = V_3;
		String_t* L_83 = ___aJSON0;
		int32_t L_84 = V_2;
		NullCheck(L_83);
		Il2CppChar L_85;
		L_85 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_83, L_84, /*hidden argument*/NULL);
		NullCheck(L_82);
		StringBuilder_t * L_86;
		L_86 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_82, L_85, /*hidden argument*/NULL);
		// break;
		goto IL_03ec;
	}

IL_0224:
	{
		// TokenName = Token.ToString();
		StringBuilder_t * L_87 = V_3;
		NullCheck(L_87);
		String_t* L_88;
		L_88 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_87);
		V_4 = L_88;
		// Token.Length = 0;
		StringBuilder_t * L_89 = V_3;
		NullCheck(L_89);
		StringBuilder_set_Length_m7C1756193B05DCA5A23C5DC98EE90A9FC685A27A(L_89, 0, /*hidden argument*/NULL);
		// TokenIsQuoted = false;
		V_6 = (bool)0;
		// break;
		goto IL_03ec;
	}

IL_023b:
	{
		// QuoteMode ^= true;
		bool L_90 = V_5;
		V_5 = (bool)((((int32_t)L_90) == ((int32_t)0))? 1 : 0);
		// TokenIsQuoted |= QuoteMode;
		bool L_91 = V_6;
		bool L_92 = V_5;
		V_6 = (bool)((int32_t)((int32_t)L_91|(int32_t)L_92));
		// break;
		goto IL_03ec;
	}

IL_024e:
	{
		// if (QuoteMode)
		bool L_93 = V_5;
		if (!L_93)
		{
			goto IL_0265;
		}
	}
	{
		// Token.Append(aJSON[i]);
		StringBuilder_t * L_94 = V_3;
		String_t* L_95 = ___aJSON0;
		int32_t L_96 = V_2;
		NullCheck(L_95);
		Il2CppChar L_97;
		L_97 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_95, L_96, /*hidden argument*/NULL);
		NullCheck(L_94);
		StringBuilder_t * L_98;
		L_98 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_94, L_97, /*hidden argument*/NULL);
		// break;
		goto IL_03ec;
	}

IL_0265:
	{
		// if (Token.Length > 0 || TokenIsQuoted)
		StringBuilder_t * L_99 = V_3;
		NullCheck(L_99);
		int32_t L_100;
		L_100 = StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0(L_99, /*hidden argument*/NULL);
		bool L_101 = V_6;
		if (!((int32_t)((int32_t)((((int32_t)L_100) > ((int32_t)0))? 1 : 0)|(int32_t)L_101)))
		{
			goto IL_0288;
		}
	}
	{
		// ctx.Add(TokenName, ParseElement(Token.ToString(), TokenIsQuoted));
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_102 = V_1;
		String_t* L_103 = V_4;
		StringBuilder_t * L_104 = V_3;
		NullCheck(L_104);
		String_t* L_105;
		L_105 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_104);
		bool L_106 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_107;
		L_107 = JSONNode_ParseElement_mA7B19451D1A3A82B822DB5C563CF26DA7712D925(L_105, L_106, /*hidden argument*/NULL);
		NullCheck(L_102);
		VirtualActionInvoker2< String_t*, JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * >::Invoke(20 /* System.Void SimpleJSON.JSONNode::Add(System.String,SimpleJSON.JSONNode) */, L_102, L_103, L_107);
	}

IL_0288:
	{
		// TokenIsQuoted = false;
		V_6 = (bool)0;
		// TokenName = "";
		V_4 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// Token.Length = 0;
		StringBuilder_t * L_108 = V_3;
		NullCheck(L_108);
		StringBuilder_set_Length_m7C1756193B05DCA5A23C5DC98EE90A9FC685A27A(L_108, 0, /*hidden argument*/NULL);
		// TokenIsQuoted = false;
		V_6 = (bool)0;
		// break;
		goto IL_03ec;
	}

IL_02a1:
	{
		// HasNewlineChar = true;
		V_7 = (bool)1;
		// break;
		goto IL_03ec;
	}

IL_02a9:
	{
		// if (QuoteMode)
		bool L_109 = V_5;
		if (!L_109)
		{
			goto IL_03ec;
		}
	}
	{
		// Token.Append(aJSON[i]);
		StringBuilder_t * L_110 = V_3;
		String_t* L_111 = ___aJSON0;
		int32_t L_112 = V_2;
		NullCheck(L_111);
		Il2CppChar L_113;
		L_113 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_111, L_112, /*hidden argument*/NULL);
		NullCheck(L_110);
		StringBuilder_t * L_114;
		L_114 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_110, L_113, /*hidden argument*/NULL);
		// break;
		goto IL_03ec;
	}

IL_02c3:
	{
		// ++i;
		int32_t L_115 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_115, (int32_t)1));
		// if (QuoteMode)
		bool L_116 = V_5;
		if (!L_116)
		{
			goto IL_03ec;
		}
	}
	{
		// char C = aJSON[i];
		String_t* L_117 = ___aJSON0;
		int32_t L_118 = V_2;
		NullCheck(L_117);
		Il2CppChar L_119;
		L_119 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_117, L_118, /*hidden argument*/NULL);
		V_9 = L_119;
		Il2CppChar L_120 = V_9;
		if ((!(((uint32_t)L_120) <= ((uint32_t)((int32_t)102)))))
		{
			goto IL_02ee;
		}
	}
	{
		Il2CppChar L_121 = V_9;
		if ((((int32_t)L_121) == ((int32_t)((int32_t)98))))
		{
			goto IL_033a;
		}
	}
	{
		Il2CppChar L_122 = V_9;
		if ((((int32_t)L_122) == ((int32_t)((int32_t)102))))
		{
			goto IL_0347;
		}
	}
	{
		goto IL_037b;
	}

IL_02ee:
	{
		Il2CppChar L_123 = V_9;
		if ((((int32_t)L_123) == ((int32_t)((int32_t)110))))
		{
			goto IL_032c;
		}
	}
	{
		Il2CppChar L_124 = V_9;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_124, (int32_t)((int32_t)114))))
		{
			case 0:
			{
				goto IL_031e;
			}
			case 1:
			{
				goto IL_037b;
			}
			case 2:
			{
				goto IL_0310;
			}
			case 3:
			{
				goto IL_0355;
			}
		}
	}
	{
		goto IL_037b;
	}

IL_0310:
	{
		// Token.Append('\t');
		StringBuilder_t * L_125 = V_3;
		NullCheck(L_125);
		StringBuilder_t * L_126;
		L_126 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_125, ((int32_t)9), /*hidden argument*/NULL);
		// break;
		goto IL_03ec;
	}

IL_031e:
	{
		// Token.Append('\r');
		StringBuilder_t * L_127 = V_3;
		NullCheck(L_127);
		StringBuilder_t * L_128;
		L_128 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_127, ((int32_t)13), /*hidden argument*/NULL);
		// break;
		goto IL_03ec;
	}

IL_032c:
	{
		// Token.Append('\n');
		StringBuilder_t * L_129 = V_3;
		NullCheck(L_129);
		StringBuilder_t * L_130;
		L_130 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_129, ((int32_t)10), /*hidden argument*/NULL);
		// break;
		goto IL_03ec;
	}

IL_033a:
	{
		// Token.Append('\b');
		StringBuilder_t * L_131 = V_3;
		NullCheck(L_131);
		StringBuilder_t * L_132;
		L_132 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_131, 8, /*hidden argument*/NULL);
		// break;
		goto IL_03ec;
	}

IL_0347:
	{
		// Token.Append('\f');
		StringBuilder_t * L_133 = V_3;
		NullCheck(L_133);
		StringBuilder_t * L_134;
		L_134 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_133, ((int32_t)12), /*hidden argument*/NULL);
		// break;
		goto IL_03ec;
	}

IL_0355:
	{
		// string s = aJSON.Substring(i + 1, 4);
		String_t* L_135 = ___aJSON0;
		int32_t L_136 = V_2;
		NullCheck(L_135);
		String_t* L_137;
		L_137 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_135, ((int32_t)il2cpp_codegen_add((int32_t)L_136, (int32_t)1)), 4, /*hidden argument*/NULL);
		V_10 = L_137;
		// Token.Append((char)int.Parse(
		//     s,
		//     System.Globalization.NumberStyles.AllowHexSpecifier));
		StringBuilder_t * L_138 = V_3;
		String_t* L_139 = V_10;
		int32_t L_140;
		L_140 = Int32_Parse_mE2DF841397B10B947C6729D5B811D0C25D211A56(L_139, ((int32_t)512), /*hidden argument*/NULL);
		NullCheck(L_138);
		StringBuilder_t * L_141;
		L_141 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_138, ((int32_t)((uint16_t)L_140)), /*hidden argument*/NULL);
		// i += 4;
		int32_t L_142 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_142, (int32_t)4));
		// break;
		goto IL_03ec;
	}

IL_037b:
	{
		// Token.Append(C);
		StringBuilder_t * L_143 = V_3;
		Il2CppChar L_144 = V_9;
		NullCheck(L_143);
		StringBuilder_t * L_145;
		L_145 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_143, L_144, /*hidden argument*/NULL);
		// break;
		goto IL_03ec;
	}

IL_0386:
	{
		// if (allowLineComments && !QuoteMode && i + 1 < aJSON.Length && aJSON[i + 1] == '/')
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		bool L_146 = ((JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_StaticFields*)il2cpp_codegen_static_fields_for(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var))->get_allowLineComments_2();
		if (!L_146)
		{
			goto IL_03ce;
		}
	}
	{
		bool L_147 = V_5;
		if (L_147)
		{
			goto IL_03ce;
		}
	}
	{
		int32_t L_148 = V_2;
		String_t* L_149 = ___aJSON0;
		NullCheck(L_149);
		int32_t L_150;
		L_150 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_149, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_148, (int32_t)1))) >= ((int32_t)L_150)))
		{
			goto IL_03ce;
		}
	}
	{
		String_t* L_151 = ___aJSON0;
		int32_t L_152 = V_2;
		NullCheck(L_151);
		Il2CppChar L_153;
		L_153 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_151, ((int32_t)il2cpp_codegen_add((int32_t)L_152, (int32_t)1)), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_153) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_03ce;
		}
	}

IL_03a9:
	{
		// while (++i < aJSON.Length && aJSON[i] != '\n' && aJSON[i] != '\r') ;
		int32_t L_154 = V_2;
		int32_t L_155 = ((int32_t)il2cpp_codegen_add((int32_t)L_154, (int32_t)1));
		V_2 = L_155;
		String_t* L_156 = ___aJSON0;
		NullCheck(L_156);
		int32_t L_157;
		L_157 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_156, /*hidden argument*/NULL);
		if ((((int32_t)L_155) >= ((int32_t)L_157)))
		{
			goto IL_03ec;
		}
	}
	{
		String_t* L_158 = ___aJSON0;
		int32_t L_159 = V_2;
		NullCheck(L_158);
		Il2CppChar L_160;
		L_160 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_158, L_159, /*hidden argument*/NULL);
		if ((((int32_t)L_160) == ((int32_t)((int32_t)10))))
		{
			goto IL_03ec;
		}
	}
	{
		String_t* L_161 = ___aJSON0;
		int32_t L_162 = V_2;
		NullCheck(L_161);
		Il2CppChar L_163;
		L_163 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_161, L_162, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_163) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_03a9;
		}
	}
	{
		// break;
		goto IL_03ec;
	}

IL_03ce:
	{
		// Token.Append(aJSON[i]);
		StringBuilder_t * L_164 = V_3;
		String_t* L_165 = ___aJSON0;
		int32_t L_166 = V_2;
		NullCheck(L_165);
		Il2CppChar L_167;
		L_167 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_165, L_166, /*hidden argument*/NULL);
		NullCheck(L_164);
		StringBuilder_t * L_168;
		L_168 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_164, L_167, /*hidden argument*/NULL);
		// break;
		goto IL_03ec;
	}

IL_03de:
	{
		// Token.Append(aJSON[i]);
		StringBuilder_t * L_169 = V_3;
		String_t* L_170 = ___aJSON0;
		int32_t L_171 = V_2;
		NullCheck(L_170);
		Il2CppChar L_172;
		L_172 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_170, L_171, /*hidden argument*/NULL);
		NullCheck(L_169);
		StringBuilder_t * L_173;
		L_173 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_169, L_172, /*hidden argument*/NULL);
	}

IL_03ec:
	{
		// ++i;
		int32_t L_174 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_174, (int32_t)1));
	}

IL_03f0:
	{
		// while (i < aJSON.Length)
		int32_t L_175 = V_2;
		String_t* L_176 = ___aJSON0;
		NullCheck(L_176);
		int32_t L_177;
		L_177 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_176, /*hidden argument*/NULL);
		if ((((int32_t)L_175) < ((int32_t)L_177)))
		{
			goto IL_0025;
		}
	}
	{
		// if (QuoteMode)
		bool L_178 = V_5;
		if (!L_178)
		{
			goto IL_040b;
		}
	}
	{
		// throw new Exception("JSON Parse: Quotation marks seems to be messed up.");
		Exception_t * L_179 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_179, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBF00FC1AEA59DE3445148D940526441AD4E1FFA7)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_179, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JSONNode_Parse_m69AEF21E17F84854BF203846254C8B943E9FEF21_RuntimeMethod_var)));
	}

IL_040b:
	{
		// if (ctx == null)
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_180 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		bool L_181;
		L_181 = JSONNode_op_Equality_mEB349D8644B8E3F87CD33A35457A00480EFB329A(L_180, NULL, /*hidden argument*/NULL);
		if (!L_181)
		{
			goto IL_0422;
		}
	}
	{
		// return ParseElement(Token.ToString(), TokenIsQuoted);
		StringBuilder_t * L_182 = V_3;
		NullCheck(L_182);
		String_t* L_183;
		L_183 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_182);
		bool L_184 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_185;
		L_185 = JSONNode_ParseElement_mA7B19451D1A3A82B822DB5C563CF26DA7712D925(L_183, L_184, /*hidden argument*/NULL);
		return L_185;
	}

IL_0422:
	{
		// return ctx;
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_186 = V_1;
		return L_186;
	}
}
// System.Void SimpleJSON.JSONNode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNode__ctor_m1CBF4F8B6E1DECA2CC6252F7DE0BEF1D11A18A91 (JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SimpleJSON.JSONNode::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNode__cctor_mD5545294D80A8A7EC2E166FDDF8C71A4EC3F09D0 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool forceASCII = false; // Use Unicode by default
		((JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_StaticFields*)il2cpp_codegen_static_fields_for(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var))->set_forceASCII_0((bool)0);
		// public static bool longAsString = false; // lazy creator creates a JSONString instead of JSONNumber
		((JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_StaticFields*)il2cpp_codegen_static_fields_for(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var))->set_longAsString_1((bool)0);
		// public static bool allowLineComments = true; // allow "//"-style comments at the end of a line
		((JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_StaticFields*)il2cpp_codegen_static_fields_for(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var))->set_allowLineComments_2((bool)1);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// SimpleJSON.JSONNull SimpleJSON.JSONNull::CreateOrGet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47 * JSONNull_CreateOrGet_mE2E06026E04958D2795026FBF38A47FBE14A7AEF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (reuseSameInstance)
		IL2CPP_RUNTIME_CLASS_INIT(JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47_il2cpp_TypeInfo_var);
		bool L_0 = ((JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47_StaticFields*)il2cpp_codegen_static_fields_for(JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47_il2cpp_TypeInfo_var))->get_reuseSameInstance_5();
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// return m_StaticInstance;
		IL2CPP_RUNTIME_CLASS_INIT(JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47_il2cpp_TypeInfo_var);
		JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47 * L_1 = ((JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47_StaticFields*)il2cpp_codegen_static_fields_for(JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47_il2cpp_TypeInfo_var))->get_m_StaticInstance_4();
		return L_1;
	}

IL_000d:
	{
		// return new JSONNull();
		JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47 * L_2 = (JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47 *)il2cpp_codegen_object_new(JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47_il2cpp_TypeInfo_var);
		JSONNull__ctor_m774EAA6C8365C47B27BDB3FAD8C28686A1105033(L_2, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void SimpleJSON.JSONNull::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNull__ctor_m774EAA6C8365C47B27BDB3FAD8C28686A1105033 (JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private JSONNull() { }
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		JSONNode__ctor_m1CBF4F8B6E1DECA2CC6252F7DE0BEF1D11A18A91(__this, /*hidden argument*/NULL);
		// private JSONNull() { }
		return;
	}
}
// SimpleJSON.JSONNodeType SimpleJSON.JSONNull::get_Tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONNull_get_Tag_m8CC0AC532BEF769781F75F62AC52009E154FB105 (JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47 * __this, const RuntimeMethod* method)
{
	{
		// public override JSONNodeType Tag { get { return JSONNodeType.NullValue; } }
		return (int32_t)(5);
	}
}
// System.Boolean SimpleJSON.JSONNull::get_IsNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNull_get_IsNull_m3B07A0182B1672877098FDC068A5ABA1AE336099 (JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47 * __this, const RuntimeMethod* method)
{
	{
		// public override bool IsNull { get { return true; } }
		return (bool)1;
	}
}
// SimpleJSON.JSONNode/Enumerator SimpleJSON.JSONNull::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8  JSONNull_GetEnumerator_m4654CE7479238B4E8CB6219F9D859CBD7784AB18 (JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47 * __this, const RuntimeMethod* method)
{
	Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public override Enumerator GetEnumerator() { return new Enumerator(); }
		il2cpp_codegen_initobj((&V_0), sizeof(Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8 ));
		Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8  L_0 = V_0;
		return L_0;
	}
}
// System.String SimpleJSON.JSONNull::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONNull_get_Value_m553A353F6BB70066CDFC90AE29595B789CE3C0ED (JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47 * __this, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNull_set_Value_mBBFC09F30AC48C4DF47BF6FCA1F271A6C6AD814A (JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// set { }
		return;
	}
}
// System.Boolean SimpleJSON.JSONNull::get_AsBool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNull_get_AsBool_m21B6CD1890428C491DBDC195ABD86C7A9B2CB520 (JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47 * __this, const RuntimeMethod* method)
{
	{
		// get { return false; }
		return (bool)0;
	}
}
// System.Void SimpleJSON.JSONNull::set_AsBool(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNull_set_AsBool_m9C680F040C87C7617AC04D1CCEC4DF04B3A062B1 (JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { }
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNull::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * JSONNull_Clone_m89261B64D2AFD3D88D48E189605DF0ABE71AD6B4 (JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return CreateOrGet();
		IL2CPP_RUNTIME_CLASS_INIT(JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47_il2cpp_TypeInfo_var);
		JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47 * L_0;
		L_0 = JSONNull_CreateOrGet_mE2E06026E04958D2795026FBF38A47FBE14A7AEF(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean SimpleJSON.JSONNull::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNull_Equals_m281EA55980AE7E71755B38A70914EDB521651CDE (JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (object.ReferenceEquals(this, obj))
		RuntimeObject * L_0 = ___obj0;
		if ((!(((RuntimeObject*)(JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47 *)__this) == ((RuntimeObject*)(RuntimeObject *)L_0))))
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
		RuntimeObject * L_1 = ___obj0;
		return (bool)((!(((RuntimeObject*)(JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47 *)((JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47 *)IsInstClass((RuntimeObject*)L_1, JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
// System.Int32 SimpleJSON.JSONNull::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONNull_GetHashCode_m11ACC117024154A6425EC0A92F92BE0850AB9AC8 (JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47 * __this, const RuntimeMethod* method)
{
	{
		// return 0;
		return 0;
	}
}
// System.Void SimpleJSON.JSONNull::WriteToStringBuilder(System.Text.StringBuilder,System.Int32,System.Int32,SimpleJSON.JSONTextMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNull_WriteToStringBuilder_mA85B44E1E280A51A0E09A296D80CDF5735E8E4A6 (JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47 * __this, StringBuilder_t * ___aSB0, int32_t ___aIndent1, int32_t ___aIndentInc2, int32_t ___aMode3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		s_Il2CppMethodInitialized = true;
	}
	{
		// aSB.Append("null");
		StringBuilder_t * L_0 = ___aSB0;
		NullCheck(L_0);
		StringBuilder_t * L_1;
		L_1 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_0, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SimpleJSON.JSONNull::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNull__cctor_mFBF013316CC0BC72EEF846918C4C18C8EDD2C75A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static JSONNull m_StaticInstance = new JSONNull();
		JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47 * L_0 = (JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47 *)il2cpp_codegen_object_new(JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47_il2cpp_TypeInfo_var);
		JSONNull__ctor_m774EAA6C8365C47B27BDB3FAD8C28686A1105033(L_0, /*hidden argument*/NULL);
		((JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47_StaticFields*)il2cpp_codegen_static_fields_for(JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47_il2cpp_TypeInfo_var))->set_m_StaticInstance_4(L_0);
		// public static bool reuseSameInstance = true;
		((JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47_StaticFields*)il2cpp_codegen_static_fields_for(JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47_il2cpp_TypeInfo_var))->set_reuseSameInstance_5((bool)1);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONNumber_get_Tag_m6B46BC7A9FAB14E69076796A4EC0EA692AE868F8 (JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5 * __this, const RuntimeMethod* method)
{
	{
		// public override JSONNodeType Tag { get { return JSONNodeType.Number; } }
		return (int32_t)(4);
	}
}
// System.Boolean SimpleJSON.JSONNumber::get_IsNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNumber_get_IsNumber_m4EA2B0AAFDABFB616DC3F2F5BF2432E5FBC7DE1C (JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5 * __this, const RuntimeMethod* method)
{
	{
		// public override bool IsNumber { get { return true; } }
		return (bool)1;
	}
}
// SimpleJSON.JSONNode/Enumerator SimpleJSON.JSONNumber::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8  JSONNumber_GetEnumerator_m401DDA65F1DA380E495054994C9AABEAAD9E1DA3 (JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5 * __this, const RuntimeMethod* method)
{
	Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public override Enumerator GetEnumerator() { return new Enumerator(); }
		il2cpp_codegen_initobj((&V_0), sizeof(Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8 ));
		Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8  L_0 = V_0;
		return L_0;
	}
}
// System.String SimpleJSON.JSONNumber::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONNumber_get_Value_mF47E99756A3D325CF16BE8BFD6FF7148DFCAB81D (JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return m_Data.ToString(CultureInfo.InvariantCulture); }
		double* L_0 = __this->get_address_of_m_Data_4();
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_1;
		L_1 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		String_t* L_2;
		L_2 = Double_ToString_m4D920091736623333AE0E32439DBD5CF5AC128FE((double*)L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void SimpleJSON.JSONNumber::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNumber_set_Value_mA2DD9A59619C9FD69ED20EAD8EE931E4506589A1 (JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	{
		// if (double.TryParse(value, NumberStyles.Float, CultureInfo.InvariantCulture, out v))
		String_t* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_1;
		L_1 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Double_TryParse_mE740D7083AC52793A9634067C4F032570FFBF61E(L_0, ((int32_t)167), L_1, (double*)(&V_0), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// m_Data = v;
		double L_3 = V_0;
		__this->set_m_Data_4(L_3);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Double SimpleJSON.JSONNumber::get_AsDouble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double JSONNumber_get_AsDouble_m71742FA87FBA9CEC1B3CD7797BB12D940AA8C3D5 (JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Data; }
		double L_0 = __this->get_m_Data_4();
		return L_0;
	}
}
// System.Void SimpleJSON.JSONNumber::set_AsDouble(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNumber_set_AsDouble_m01EF626FFB8BCB29DDDB4AB4B6A6FD4973C0395E (JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5 * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// set { m_Data = value; }
		double L_0 = ___value0;
		__this->set_m_Data_4(L_0);
		// set { m_Data = value; }
		return;
	}
}
// System.Int64 SimpleJSON.JSONNumber::get_AsLong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t JSONNumber_get_AsLong_m7BAE9B68D85DB4F1DCA7B65041E16C1C6ADCC7FF (JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5 * __this, const RuntimeMethod* method)
{
	{
		// get { return (long)m_Data; }
		double L_0 = __this->get_m_Data_4();
		return ((int64_t)((int64_t)L_0));
	}
}
// System.Void SimpleJSON.JSONNumber::set_AsLong(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNumber_set_AsLong_m488A99BC950EC40B22C8EAE579308E62C7EA58EF (JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		// set { m_Data = value; }
		int64_t L_0 = ___value0;
		__this->set_m_Data_4(((double)((double)L_0)));
		// set { m_Data = value; }
		return;
	}
}
// System.UInt64 SimpleJSON.JSONNumber::get_AsULong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t JSONNumber_get_AsULong_m3E38543FACE846F686A63B481A26B01A28361FE1 (JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5 * __this, const RuntimeMethod* method)
{
	{
		// get { return (ulong)m_Data; }
		double L_0 = __this->get_m_Data_4();
		return il2cpp_codegen_cast_floating_point<uint64_t, int64_t, double>(L_0);
	}
}
// System.Void SimpleJSON.JSONNumber::set_AsULong(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNumber_set_AsULong_m6BE641D2E9751980FBBCA843AEA15BAC7C04B5D1 (JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5 * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	{
		// set { m_Data = value; }
		uint64_t L_0 = ___value0;
		__this->set_m_Data_4(((double)((double)((double)((uint64_t)L_0)))));
		// set { m_Data = value; }
		return;
	}
}
// System.Void SimpleJSON.JSONNumber::.ctor(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNumber__ctor_m540460B21D5ED37F9529F1734B24B6E868D432B8 (JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5 * __this, double ___aData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public JSONNumber(double aData)
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		JSONNode__ctor_m1CBF4F8B6E1DECA2CC6252F7DE0BEF1D11A18A91(__this, /*hidden argument*/NULL);
		// m_Data = aData;
		double L_0 = ___aData0;
		__this->set_m_Data_4(L_0);
		// }
		return;
	}
}
// System.Void SimpleJSON.JSONNumber::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNumber__ctor_mAAF7F464DDCB064C83D2898FE50CCE90F77E4808 (JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5 * __this, String_t* ___aData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public JSONNumber(string aData)
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		JSONNode__ctor_m1CBF4F8B6E1DECA2CC6252F7DE0BEF1D11A18A91(__this, /*hidden argument*/NULL);
		// Value = aData;
		String_t* L_0 = ___aData0;
		VirtualActionInvoker1< String_t* >::Invoke(10 /* System.Void SimpleJSON.JSONNode::set_Value(System.String) */, __this, L_0);
		// }
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNumber::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * JSONNumber_Clone_m49C93ED2C5CAFF1487F3187214B1F854EF7AC04C (JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new JSONNumber(m_Data);
		double L_0 = __this->get_m_Data_4();
		JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5 * L_1 = (JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5 *)il2cpp_codegen_object_new(JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5_il2cpp_TypeInfo_var);
		JSONNumber__ctor_m540460B21D5ED37F9529F1734B24B6E868D432B8(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void SimpleJSON.JSONNumber::WriteToStringBuilder(System.Text.StringBuilder,System.Int32,System.Int32,SimpleJSON.JSONTextMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNumber_WriteToStringBuilder_m918A4406F272535FBDEC2E67DA558DF0B3AB2264 (JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5 * __this, StringBuilder_t * ___aSB0, int32_t ___aIndent1, int32_t ___aIndentInc2, int32_t ___aMode3, const RuntimeMethod* method)
{
	{
		// aSB.Append(Value);
		StringBuilder_t * L_0 = ___aSB0;
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String SimpleJSON.JSONNode::get_Value() */, __this);
		NullCheck(L_0);
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean SimpleJSON.JSONNumber::IsNumeric(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNumber_IsNumeric_mFAC1B74A6BD2705D6B2952D74DA6DF6D38C4F268 (RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return value is int || value is uint
		//     || value is float || value is double
		//     || value is decimal
		//     || value is long || value is ulong
		//     || value is short || value is ushort
		//     || value is sbyte || value is byte;
		RuntimeObject * L_0 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject * L_1 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_1, UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var)))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject * L_2 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_2, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var)))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject * L_3 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_3, Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var)))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject * L_4 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_4, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var)))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject * L_5 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_5, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var)))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject * L_6 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_6, UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var)))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject * L_7 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_7, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var)))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject * L_8 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_8, UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var)))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject * L_9 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_9, SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var)))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject * L_10 = ___value0;
		return (bool)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInstSealed((RuntimeObject*)L_10, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}

IL_005a:
	{
		return (bool)1;
	}
}
// System.Boolean SimpleJSON.JSONNumber::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNumber_Equals_mA8EBF84AAB284A4FF0E308F193B06A812E038A3F (JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5 * V_0 = NULL;
	{
		// if (obj == null)
		RuntimeObject * L_0 = ___obj0;
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
		RuntimeObject * L_1 = ___obj0;
		bool L_2;
		L_2 = JSONNode_Equals_mBFF7A822B266FD96F6A6B54433B3F9A00CE06AA0(__this, L_1, /*hidden argument*/NULL);
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
		RuntimeObject * L_3 = ___obj0;
		V_0 = ((JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5 *)IsInstClass((RuntimeObject*)L_3, JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5_il2cpp_TypeInfo_var));
		// if (s2 != null)
		JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5 * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = JSONNode_op_Inequality_m22851EA8F1ED30D4A1B977CD92AFEEB246DD098A(L_4, NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		// return m_Data == s2.m_Data;
		double L_6 = __this->get_m_Data_4();
		JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5 * L_7 = V_0;
		NullCheck(L_7);
		double L_8 = L_7->get_m_Data_4();
		return (bool)((((double)L_6) == ((double)L_8))? 1 : 0);
	}

IL_002f:
	{
		// if (IsNumeric(obj))
		RuntimeObject * L_9 = ___obj0;
		bool L_10;
		L_10 = JSONNumber_IsNumeric_mFAC1B74A6BD2705D6B2952D74DA6DF6D38C4F268(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0046;
		}
	}
	{
		// return Convert.ToDouble(obj) == m_Data;
		RuntimeObject * L_11 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = Convert_ToDouble_mF6F0642EA16CAB414EEA621DEAA519527DA64284(L_11, /*hidden argument*/NULL);
		double L_13 = __this->get_m_Data_4();
		return (bool)((((double)L_12) == ((double)L_13))? 1 : 0);
	}

IL_0046:
	{
		// return false;
		return (bool)0;
	}
}
// System.Int32 SimpleJSON.JSONNumber::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONNumber_GetHashCode_m886C693586191D3BE953E1E1CC7D5548B1E737D3 (JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5 * __this, const RuntimeMethod* method)
{
	{
		// return m_Data.GetHashCode();
		double* L_0 = __this->get_address_of_m_Data_4();
		int32_t L_1;
		L_1 = Double_GetHashCode_m33CB20AA5674C6F4367B7B08340B33FB979F9F39((double*)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void SimpleJSON.JSONNumber::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONNumber_Clear_m5D6BCCEBA8685E7A7638D205547E612E16626729 (JSONNumber_t3014E36D7C89391F37CBCA7F9FBEE7EA91DB05A5 * __this, const RuntimeMethod* method)
{
	{
		// m_Data = 0;
		__this->set_m_Data_4((0.0));
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
// System.Boolean SimpleJSON.JSONObject::get_Inline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_get_Inline_m359D85BE012171E4E002285F20BC429E1A6BFA98 (JSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1 * __this, const RuntimeMethod* method)
{
	{
		// get { return inline; }
		bool L_0 = __this->get_inline_5();
		return L_0;
	}
}
// System.Void SimpleJSON.JSONObject::set_Inline(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_set_Inline_m0AEACDF3C151A715C9F63679BDFAC03171D47810 (JSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { inline = value; }
		bool L_0 = ___value0;
		__this->set_inline_5(L_0);
		// set { inline = value; }
		return;
	}
}
// SimpleJSON.JSONNodeType SimpleJSON.JSONObject::get_Tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONObject_get_Tag_m511E4A135B46CF2AFFB7509BBFBF6ABAF93603E7 (JSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1 * __this, const RuntimeMethod* method)
{
	{
		// public override JSONNodeType Tag { get { return JSONNodeType.Object; } }
		return (int32_t)(2);
	}
}
// System.Boolean SimpleJSON.JSONObject::get_IsObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_get_IsObject_m8DA1E1498537E1E1C66EB54EF30C3C60C6C0D3CB (JSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1 * __this, const RuntimeMethod* method)
{
	{
		// public override bool IsObject { get { return true; } }
		return (bool)1;
	}
}
// SimpleJSON.JSONNode/Enumerator SimpleJSON.JSONObject::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8  JSONObject_GetEnumerator_m1AF735552661D6EEA2C54C3F190230835E407236 (JSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_mDCF3F7F20F872ADC03A74F11C55EB2B702EF2441_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override Enumerator GetEnumerator() { return new Enumerator(m_Dict.GetEnumerator()); }
		Dictionary_2_tAFDD9B13B8A8D35E8017B1AD49EE8DCF947CD740 * L_0 = __this->get_m_Dict_4();
		NullCheck(L_0);
		Enumerator_tCE541D75AA851CBCC2F41CB77FDD2C3DA76C09AC  L_1;
		L_1 = Dictionary_2_GetEnumerator_mDCF3F7F20F872ADC03A74F11C55EB2B702EF2441(L_0, /*hidden argument*/Dictionary_2_GetEnumerator_mDCF3F7F20F872ADC03A74F11C55EB2B702EF2441_RuntimeMethod_var);
		Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Enumerator__ctor_m1DBE7DBD0628D4C87A31D88096548AF2917CC576((&L_2), L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONObject::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * JSONObject_get_Item_m1A6BE59A0A8BAB7FE28A6C0BC87FA4BE32D4018B (JSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1 * __this, String_t* ___aKey0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mF07D404CDE09597A5210DE02BCE5EE90CEAB475C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mEAC6AA9D4E6BD2EC57809A9EF2E518F581F021DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Dict.ContainsKey(aKey))
		Dictionary_2_tAFDD9B13B8A8D35E8017B1AD49EE8DCF947CD740 * L_0 = __this->get_m_Dict_4();
		String_t* L_1 = ___aKey0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mF07D404CDE09597A5210DE02BCE5EE90CEAB475C(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_mF07D404CDE09597A5210DE02BCE5EE90CEAB475C_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// return m_Dict[aKey];
		Dictionary_2_tAFDD9B13B8A8D35E8017B1AD49EE8DCF947CD740 * L_3 = __this->get_m_Dict_4();
		String_t* L_4 = ___aKey0;
		NullCheck(L_3);
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_5;
		L_5 = Dictionary_2_get_Item_mEAC6AA9D4E6BD2EC57809A9EF2E518F581F021DF(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_mEAC6AA9D4E6BD2EC57809A9EF2E518F581F021DF_RuntimeMethod_var);
		return L_5;
	}

IL_001b:
	{
		// return new JSONLazyCreator(this, aKey);
		String_t* L_6 = ___aKey0;
		JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6 * L_7 = (JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6 *)il2cpp_codegen_object_new(JSONLazyCreator_tDD17A0F5E2EB4E6ABD543B85270DD506A564FFA6_il2cpp_TypeInfo_var);
		JSONLazyCreator__ctor_m6C390D7570282C672EB980117A97087DE5E763DF(L_7, __this, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Void SimpleJSON.JSONObject::set_Item(System.String,SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_set_Item_mB3A6227B0FEFE0A516EE7E2F694042FE168156EB (JSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1 * __this, String_t* ___aKey0, JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m9C14F88CD2235159DA9FFAAC62C6F7AD4E7E74BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mF07D404CDE09597A5210DE02BCE5EE90CEAB475C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m06FAF0E96CC7771A89ED9A9DE592B8B166E228C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value == null)
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_0 = ___value1;
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = JSONNode_op_Equality_mEB349D8644B8E3F87CD33A35457A00480EFB329A(L_0, NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// value = JSONNull.CreateOrGet();
		IL2CPP_RUNTIME_CLASS_INIT(JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47_il2cpp_TypeInfo_var);
		JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47 * L_2;
		L_2 = JSONNull_CreateOrGet_mE2E06026E04958D2795026FBF38A47FBE14A7AEF(/*hidden argument*/NULL);
		___value1 = L_2;
	}

IL_0010:
	{
		// if (m_Dict.ContainsKey(aKey))
		Dictionary_2_tAFDD9B13B8A8D35E8017B1AD49EE8DCF947CD740 * L_3 = __this->get_m_Dict_4();
		String_t* L_4 = ___aKey0;
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_ContainsKey_mF07D404CDE09597A5210DE02BCE5EE90CEAB475C(L_3, L_4, /*hidden argument*/Dictionary_2_ContainsKey_mF07D404CDE09597A5210DE02BCE5EE90CEAB475C_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		// m_Dict[aKey] = value;
		Dictionary_2_tAFDD9B13B8A8D35E8017B1AD49EE8DCF947CD740 * L_6 = __this->get_m_Dict_4();
		String_t* L_7 = ___aKey0;
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_8 = ___value1;
		NullCheck(L_6);
		Dictionary_2_set_Item_m06FAF0E96CC7771A89ED9A9DE592B8B166E228C3(L_6, L_7, L_8, /*hidden argument*/Dictionary_2_set_Item_m06FAF0E96CC7771A89ED9A9DE592B8B166E228C3_RuntimeMethod_var);
		return;
	}

IL_002c:
	{
		// m_Dict.Add(aKey, value);
		Dictionary_2_tAFDD9B13B8A8D35E8017B1AD49EE8DCF947CD740 * L_9 = __this->get_m_Dict_4();
		String_t* L_10 = ___aKey0;
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_11 = ___value1;
		NullCheck(L_9);
		Dictionary_2_Add_m9C14F88CD2235159DA9FFAAC62C6F7AD4E7E74BB(L_9, L_10, L_11, /*hidden argument*/Dictionary_2_Add_m9C14F88CD2235159DA9FFAAC62C6F7AD4E7E74BB_RuntimeMethod_var);
		// }
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONObject::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * JSONObject_get_Item_m76D60CDACB0991A590F72FF75D1828EA2B39F39F (JSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1 * __this, int32_t ___aIndex0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m47132E509248623F0403F4226E25E62D482284D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ElementAt_TisKeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46_m0B0DB4F927A044580DE56D31595028F8B15C38DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mD27150EA5031B873539FD3D826C77219F3FFE044_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46  V_0;
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
		Dictionary_2_tAFDD9B13B8A8D35E8017B1AD49EE8DCF947CD740 * L_2 = __this->get_m_Dict_4();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Dictionary_2_get_Count_m47132E509248623F0403F4226E25E62D482284D6(L_2, /*hidden argument*/Dictionary_2_get_Count_m47132E509248623F0403F4226E25E62D482284D6_RuntimeMethod_var);
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0014;
		}
	}

IL_0012:
	{
		// return null;
		return (JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 *)NULL;
	}

IL_0014:
	{
		// return m_Dict.ElementAt(aIndex).Value;
		Dictionary_2_tAFDD9B13B8A8D35E8017B1AD49EE8DCF947CD740 * L_4 = __this->get_m_Dict_4();
		int32_t L_5 = ___aIndex0;
		KeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46  L_6;
		L_6 = Enumerable_ElementAt_TisKeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46_m0B0DB4F927A044580DE56D31595028F8B15C38DD(L_4, L_5, /*hidden argument*/Enumerable_ElementAt_TisKeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46_m0B0DB4F927A044580DE56D31595028F8B15C38DD_RuntimeMethod_var);
		V_0 = L_6;
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_7;
		L_7 = KeyValuePair_2_get_Value_mD27150EA5031B873539FD3D826C77219F3FFE044_inline((KeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46 *)(&V_0), /*hidden argument*/KeyValuePair_2_get_Value_mD27150EA5031B873539FD3D826C77219F3FFE044_RuntimeMethod_var);
		return L_7;
	}
}
// System.Void SimpleJSON.JSONObject::set_Item(System.Int32,SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_set_Item_m3CB015E02CB932589E57C00F6C3E27322293B3A0 (JSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1 * __this, int32_t ___aIndex0, JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m47132E509248623F0403F4226E25E62D482284D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m06FAF0E96CC7771A89ED9A9DE592B8B166E228C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ElementAt_TisKeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46_m0B0DB4F927A044580DE56D31595028F8B15C38DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mD3950240DC492EBEB494BE0AEF2CB4223CFBA08D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	KeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (value == null)
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_0 = ___value1;
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = JSONNode_op_Equality_mEB349D8644B8E3F87CD33A35457A00480EFB329A(L_0, NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// value = JSONNull.CreateOrGet();
		IL2CPP_RUNTIME_CLASS_INIT(JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47_il2cpp_TypeInfo_var);
		JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47 * L_2;
		L_2 = JSONNull_CreateOrGet_mE2E06026E04958D2795026FBF38A47FBE14A7AEF(/*hidden argument*/NULL);
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
		Dictionary_2_tAFDD9B13B8A8D35E8017B1AD49EE8DCF947CD740 * L_5 = __this->get_m_Dict_4();
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Dictionary_2_get_Count_m47132E509248623F0403F4226E25E62D482284D6(L_5, /*hidden argument*/Dictionary_2_get_Count_m47132E509248623F0403F4226E25E62D482284D6_RuntimeMethod_var);
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
		Dictionary_2_tAFDD9B13B8A8D35E8017B1AD49EE8DCF947CD740 * L_7 = __this->get_m_Dict_4();
		int32_t L_8 = ___aIndex0;
		KeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46  L_9;
		L_9 = Enumerable_ElementAt_TisKeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46_m0B0DB4F927A044580DE56D31595028F8B15C38DD(L_7, L_8, /*hidden argument*/Enumerable_ElementAt_TisKeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46_m0B0DB4F927A044580DE56D31595028F8B15C38DD_RuntimeMethod_var);
		V_1 = L_9;
		String_t* L_10;
		L_10 = KeyValuePair_2_get_Key_mD3950240DC492EBEB494BE0AEF2CB4223CFBA08D_inline((KeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Key_mD3950240DC492EBEB494BE0AEF2CB4223CFBA08D_RuntimeMethod_var);
		V_0 = L_10;
		// m_Dict[key] = value;
		Dictionary_2_tAFDD9B13B8A8D35E8017B1AD49EE8DCF947CD740 * L_11 = __this->get_m_Dict_4();
		String_t* L_12 = V_0;
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_13 = ___value1;
		NullCheck(L_11);
		Dictionary_2_set_Item_m06FAF0E96CC7771A89ED9A9DE592B8B166E228C3(L_11, L_12, L_13, /*hidden argument*/Dictionary_2_set_Item_m06FAF0E96CC7771A89ED9A9DE592B8B166E228C3_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Int32 SimpleJSON.JSONObject::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONObject_get_Count_m19CC7B95F788DFF0CE6917F06CFDFE0062FBDB96 (JSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m47132E509248623F0403F4226E25E62D482284D6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return m_Dict.Count; }
		Dictionary_2_tAFDD9B13B8A8D35E8017B1AD49EE8DCF947CD740 * L_0 = __this->get_m_Dict_4();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Dictionary_2_get_Count_m47132E509248623F0403F4226E25E62D482284D6(L_0, /*hidden argument*/Dictionary_2_get_Count_m47132E509248623F0403F4226E25E62D482284D6_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void SimpleJSON.JSONObject::Add(System.String,SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_Add_m0268BD87069B407DE0F601028CFBE6A52F22D594 (JSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1 * __this, String_t* ___aKey0, JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * ___aItem1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m9C14F88CD2235159DA9FFAAC62C6F7AD4E7E74BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mF07D404CDE09597A5210DE02BCE5EE90CEAB475C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m06FAF0E96CC7771A89ED9A9DE592B8B166E228C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Guid_t  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (aItem == null)
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_0 = ___aItem1;
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = JSONNode_op_Equality_mEB349D8644B8E3F87CD33A35457A00480EFB329A(L_0, NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// aItem = JSONNull.CreateOrGet();
		IL2CPP_RUNTIME_CLASS_INIT(JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47_il2cpp_TypeInfo_var);
		JSONNull_tDF7BB70174057C3D7365A47A85DA6B16886E7D47 * L_2;
		L_2 = JSONNull_CreateOrGet_mE2E06026E04958D2795026FBF38A47FBE14A7AEF(/*hidden argument*/NULL);
		___aItem1 = L_2;
	}

IL_0010:
	{
		// if (aKey != null)
		String_t* L_3 = ___aKey0;
		if (!L_3)
		{
			goto IL_003d;
		}
	}
	{
		// if (m_Dict.ContainsKey(aKey))
		Dictionary_2_tAFDD9B13B8A8D35E8017B1AD49EE8DCF947CD740 * L_4 = __this->get_m_Dict_4();
		String_t* L_5 = ___aKey0;
		NullCheck(L_4);
		bool L_6;
		L_6 = Dictionary_2_ContainsKey_mF07D404CDE09597A5210DE02BCE5EE90CEAB475C(L_4, L_5, /*hidden argument*/Dictionary_2_ContainsKey_mF07D404CDE09597A5210DE02BCE5EE90CEAB475C_RuntimeMethod_var);
		if (!L_6)
		{
			goto IL_002f;
		}
	}
	{
		// m_Dict[aKey] = aItem;
		Dictionary_2_tAFDD9B13B8A8D35E8017B1AD49EE8DCF947CD740 * L_7 = __this->get_m_Dict_4();
		String_t* L_8 = ___aKey0;
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_9 = ___aItem1;
		NullCheck(L_7);
		Dictionary_2_set_Item_m06FAF0E96CC7771A89ED9A9DE592B8B166E228C3(L_7, L_8, L_9, /*hidden argument*/Dictionary_2_set_Item_m06FAF0E96CC7771A89ED9A9DE592B8B166E228C3_RuntimeMethod_var);
		return;
	}

IL_002f:
	{
		// m_Dict.Add(aKey, aItem);
		Dictionary_2_tAFDD9B13B8A8D35E8017B1AD49EE8DCF947CD740 * L_10 = __this->get_m_Dict_4();
		String_t* L_11 = ___aKey0;
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_12 = ___aItem1;
		NullCheck(L_10);
		Dictionary_2_Add_m9C14F88CD2235159DA9FFAAC62C6F7AD4E7E74BB(L_10, L_11, L_12, /*hidden argument*/Dictionary_2_Add_m9C14F88CD2235159DA9FFAAC62C6F7AD4E7E74BB_RuntimeMethod_var);
		// }
		return;
	}

IL_003d:
	{
		// m_Dict.Add(Guid.NewGuid().ToString(), aItem);
		Dictionary_2_tAFDD9B13B8A8D35E8017B1AD49EE8DCF947CD740 * L_13 = __this->get_m_Dict_4();
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t_il2cpp_TypeInfo_var);
		Guid_t  L_14;
		L_14 = Guid_NewGuid_m5BD19325820690ED6ECA31D67BC2CD474DC4FDB0(/*hidden argument*/NULL);
		V_0 = L_14;
		String_t* L_15;
		L_15 = Guid_ToString_mA3AB7742FB0E04808F580868E82BDEB93187FB75((Guid_t *)(&V_0), /*hidden argument*/NULL);
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_16 = ___aItem1;
		NullCheck(L_13);
		Dictionary_2_Add_m9C14F88CD2235159DA9FFAAC62C6F7AD4E7E74BB(L_13, L_15, L_16, /*hidden argument*/Dictionary_2_Add_m9C14F88CD2235159DA9FFAAC62C6F7AD4E7E74BB_RuntimeMethod_var);
		// }
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONObject::Remove(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * JSONObject_Remove_mE20DCDECF7FF984A389891EF2F08DC2088E7D8C6 (JSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1 * __this, String_t* ___aKey0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mF07D404CDE09597A5210DE02BCE5EE90CEAB475C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m7BAD52D08C79633F1EF068E34DDF27F87F91316B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mEAC6AA9D4E6BD2EC57809A9EF2E518F581F021DF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_Dict.ContainsKey(aKey))
		Dictionary_2_tAFDD9B13B8A8D35E8017B1AD49EE8DCF947CD740 * L_0 = __this->get_m_Dict_4();
		String_t* L_1 = ___aKey0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mF07D404CDE09597A5210DE02BCE5EE90CEAB475C(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_mF07D404CDE09597A5210DE02BCE5EE90CEAB475C_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0010;
		}
	}
	{
		// return null;
		return (JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 *)NULL;
	}

IL_0010:
	{
		// JSONNode tmp = m_Dict[aKey];
		Dictionary_2_tAFDD9B13B8A8D35E8017B1AD49EE8DCF947CD740 * L_3 = __this->get_m_Dict_4();
		String_t* L_4 = ___aKey0;
		NullCheck(L_3);
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_5;
		L_5 = Dictionary_2_get_Item_mEAC6AA9D4E6BD2EC57809A9EF2E518F581F021DF(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_mEAC6AA9D4E6BD2EC57809A9EF2E518F581F021DF_RuntimeMethod_var);
		// m_Dict.Remove(aKey);
		Dictionary_2_tAFDD9B13B8A8D35E8017B1AD49EE8DCF947CD740 * L_6 = __this->get_m_Dict_4();
		String_t* L_7 = ___aKey0;
		NullCheck(L_6);
		bool L_8;
		L_8 = Dictionary_2_Remove_m7BAD52D08C79633F1EF068E34DDF27F87F91316B(L_6, L_7, /*hidden argument*/Dictionary_2_Remove_m7BAD52D08C79633F1EF068E34DDF27F87F91316B_RuntimeMethod_var);
		// return tmp;
		return L_5;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONObject::Remove(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * JSONObject_Remove_mD648238FD174CC258C46E70A36BDFDBE3CC53EE8 (JSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1 * __this, int32_t ___aIndex0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m7BAD52D08C79633F1EF068E34DDF27F87F91316B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m47132E509248623F0403F4226E25E62D482284D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ElementAt_TisKeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46_m0B0DB4F927A044580DE56D31595028F8B15C38DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mD3950240DC492EBEB494BE0AEF2CB4223CFBA08D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mD27150EA5031B873539FD3D826C77219F3FFE044_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46  V_0;
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
		Dictionary_2_tAFDD9B13B8A8D35E8017B1AD49EE8DCF947CD740 * L_2 = __this->get_m_Dict_4();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Dictionary_2_get_Count_m47132E509248623F0403F4226E25E62D482284D6(L_2, /*hidden argument*/Dictionary_2_get_Count_m47132E509248623F0403F4226E25E62D482284D6_RuntimeMethod_var);
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0014;
		}
	}

IL_0012:
	{
		// return null;
		return (JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 *)NULL;
	}

IL_0014:
	{
		// var item = m_Dict.ElementAt(aIndex);
		Dictionary_2_tAFDD9B13B8A8D35E8017B1AD49EE8DCF947CD740 * L_4 = __this->get_m_Dict_4();
		int32_t L_5 = ___aIndex0;
		KeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46  L_6;
		L_6 = Enumerable_ElementAt_TisKeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46_m0B0DB4F927A044580DE56D31595028F8B15C38DD(L_4, L_5, /*hidden argument*/Enumerable_ElementAt_TisKeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46_m0B0DB4F927A044580DE56D31595028F8B15C38DD_RuntimeMethod_var);
		V_0 = L_6;
		// m_Dict.Remove(item.Key);
		Dictionary_2_tAFDD9B13B8A8D35E8017B1AD49EE8DCF947CD740 * L_7 = __this->get_m_Dict_4();
		String_t* L_8;
		L_8 = KeyValuePair_2_get_Key_mD3950240DC492EBEB494BE0AEF2CB4223CFBA08D_inline((KeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46 *)(&V_0), /*hidden argument*/KeyValuePair_2_get_Key_mD3950240DC492EBEB494BE0AEF2CB4223CFBA08D_RuntimeMethod_var);
		NullCheck(L_7);
		bool L_9;
		L_9 = Dictionary_2_Remove_m7BAD52D08C79633F1EF068E34DDF27F87F91316B(L_7, L_8, /*hidden argument*/Dictionary_2_Remove_m7BAD52D08C79633F1EF068E34DDF27F87F91316B_RuntimeMethod_var);
		// return item.Value;
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_10;
		L_10 = KeyValuePair_2_get_Value_mD27150EA5031B873539FD3D826C77219F3FFE044_inline((KeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46 *)(&V_0), /*hidden argument*/KeyValuePair_2_get_Value_mD27150EA5031B873539FD3D826C77219F3FFE044_RuntimeMethod_var);
		return L_10;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONObject::Remove(SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * JSONObject_Remove_m0F1ECF30C2B6C5607AFD8C72E37E87FE5D572EDB (JSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1 * __this, JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * ___aNode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m7BAD52D08C79633F1EF068E34DDF27F87F91316B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_First_TisKeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46_mEAEB4906A04BD2286F641D9D952C701B89087E9F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisKeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46_mB4671BA5C74527947CCD670926BA049318F638F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_mFC68D1988FD14FF974070B18474265493B4EE19B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t0590A4A7DD386E29A0B0552177EEED331B7D69C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mD3950240DC492EBEB494BE0AEF2CB4223CFBA08D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass21_0_U3CRemoveU3Eb__0_m32C80D793500A7AD9747C4B9BEF7E5902322DC8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass21_0_t5F3C45E238AB19808012EFB4181E62F4DCED84CC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass21_0_t5F3C45E238AB19808012EFB4181E62F4DCED84CC * V_0 = NULL;
	KeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46  V_1;
	memset((&V_1), 0, sizeof(V_1));
	JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		U3CU3Ec__DisplayClass21_0_t5F3C45E238AB19808012EFB4181E62F4DCED84CC * L_0 = (U3CU3Ec__DisplayClass21_0_t5F3C45E238AB19808012EFB4181E62F4DCED84CC *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass21_0_t5F3C45E238AB19808012EFB4181E62F4DCED84CC_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass21_0__ctor_mE55EB0815ED94FB7DA4223EB2B1D83A792D49444(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass21_0_t5F3C45E238AB19808012EFB4181E62F4DCED84CC * L_1 = V_0;
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_2 = ___aNode0;
		NullCheck(L_1);
		L_1->set_aNode_0(L_2);
	}

IL_000d:
	try
	{// begin try (depth: 1)
		// var item = m_Dict.Where(k => k.Value == aNode).First();
		Dictionary_2_tAFDD9B13B8A8D35E8017B1AD49EE8DCF947CD740 * L_3 = __this->get_m_Dict_4();
		U3CU3Ec__DisplayClass21_0_t5F3C45E238AB19808012EFB4181E62F4DCED84CC * L_4 = V_0;
		Func_2_t0590A4A7DD386E29A0B0552177EEED331B7D69C1 * L_5 = (Func_2_t0590A4A7DD386E29A0B0552177EEED331B7D69C1 *)il2cpp_codegen_object_new(Func_2_t0590A4A7DD386E29A0B0552177EEED331B7D69C1_il2cpp_TypeInfo_var);
		Func_2__ctor_mFC68D1988FD14FF974070B18474265493B4EE19B(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass21_0_U3CRemoveU3Eb__0_m32C80D793500A7AD9747C4B9BEF7E5902322DC8D_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mFC68D1988FD14FF974070B18474265493B4EE19B_RuntimeMethod_var);
		RuntimeObject* L_6;
		L_6 = Enumerable_Where_TisKeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46_mB4671BA5C74527947CCD670926BA049318F638F9(L_3, L_5, /*hidden argument*/Enumerable_Where_TisKeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46_mB4671BA5C74527947CCD670926BA049318F638F9_RuntimeMethod_var);
		KeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46  L_7;
		L_7 = Enumerable_First_TisKeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46_mEAEB4906A04BD2286F641D9D952C701B89087E9F(L_6, /*hidden argument*/Enumerable_First_TisKeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46_mEAEB4906A04BD2286F641D9D952C701B89087E9F_RuntimeMethod_var);
		V_1 = L_7;
		// m_Dict.Remove(item.Key);
		Dictionary_2_tAFDD9B13B8A8D35E8017B1AD49EE8DCF947CD740 * L_8 = __this->get_m_Dict_4();
		String_t* L_9;
		L_9 = KeyValuePair_2_get_Key_mD3950240DC492EBEB494BE0AEF2CB4223CFBA08D_inline((KeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Key_mD3950240DC492EBEB494BE0AEF2CB4223CFBA08D_RuntimeMethod_var);
		NullCheck(L_8);
		bool L_10;
		L_10 = Dictionary_2_Remove_m7BAD52D08C79633F1EF068E34DDF27F87F91316B(L_8, L_9, /*hidden argument*/Dictionary_2_Remove_m7BAD52D08C79633F1EF068E34DDF27F87F91316B_RuntimeMethod_var);
		// return aNode;
		U3CU3Ec__DisplayClass21_0_t5F3C45E238AB19808012EFB4181E62F4DCED84CC * L_11 = V_0;
		NullCheck(L_11);
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_12 = L_11->get_aNode_0();
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
		V_2 = (JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 *)NULL;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004b;
	}// end catch (depth: 1)

IL_004b:
	{
		// }
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_13 = V_2;
		return L_13;
	}
}
// System.Void SimpleJSON.JSONObject::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_Clear_m2AAE8E181A2578BED67AC92B0942E7B6078F0CF3 (JSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m4C1946103ABDF133A308278B6819199E0D1EE22F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Dict.Clear();
		Dictionary_2_tAFDD9B13B8A8D35E8017B1AD49EE8DCF947CD740 * L_0 = __this->get_m_Dict_4();
		NullCheck(L_0);
		Dictionary_2_Clear_m4C1946103ABDF133A308278B6819199E0D1EE22F(L_0, /*hidden argument*/Dictionary_2_Clear_m4C1946103ABDF133A308278B6819199E0D1EE22F_RuntimeMethod_var);
		// }
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONObject::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * JSONObject_Clone_mAD71C1534CFC7B86CC9FD037E416C20FF5105246 (JSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_mDCF3F7F20F872ADC03A74F11C55EB2B702EF2441_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m69943D9522B275330B702DE01A3289247FFFE383_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m2F43C4805222C8A5C8027DC246081895540A7D17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m8D5B4B174FCF301C8B25C69BC26D7DF5BCAFFE72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mD3950240DC492EBEB494BE0AEF2CB4223CFBA08D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mD27150EA5031B873539FD3D826C77219F3FFE044_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1 * V_0 = NULL;
	Enumerator_tCE541D75AA851CBCC2F41CB77FDD2C3DA76C09AC  V_1;
	memset((&V_1), 0, sizeof(V_1));
	KeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// var node = new JSONObject();
		JSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1 * L_0 = (JSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1 *)il2cpp_codegen_object_new(JSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1_il2cpp_TypeInfo_var);
		JSONObject__ctor_mDC880B59ED4D826E15F67A626326822D1CD1F52C(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// foreach (var n in m_Dict)
		Dictionary_2_tAFDD9B13B8A8D35E8017B1AD49EE8DCF947CD740 * L_1 = __this->get_m_Dict_4();
		NullCheck(L_1);
		Enumerator_tCE541D75AA851CBCC2F41CB77FDD2C3DA76C09AC  L_2;
		L_2 = Dictionary_2_GetEnumerator_mDCF3F7F20F872ADC03A74F11C55EB2B702EF2441(L_1, /*hidden argument*/Dictionary_2_GetEnumerator_mDCF3F7F20F872ADC03A74F11C55EB2B702EF2441_RuntimeMethod_var);
		V_1 = L_2;
	}

IL_0012:
	try
	{// begin try (depth: 1)
		{
			goto IL_0035;
		}

IL_0014:
		{
			// foreach (var n in m_Dict)
			KeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46  L_3;
			L_3 = Enumerator_get_Current_m8D5B4B174FCF301C8B25C69BC26D7DF5BCAFFE72_inline((Enumerator_tCE541D75AA851CBCC2F41CB77FDD2C3DA76C09AC *)(&V_1), /*hidden argument*/Enumerator_get_Current_m8D5B4B174FCF301C8B25C69BC26D7DF5BCAFFE72_RuntimeMethod_var);
			V_2 = L_3;
			// node.Add(n.Key, n.Value.Clone());
			JSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1 * L_4 = V_0;
			String_t* L_5;
			L_5 = KeyValuePair_2_get_Key_mD3950240DC492EBEB494BE0AEF2CB4223CFBA08D_inline((KeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Key_mD3950240DC492EBEB494BE0AEF2CB4223CFBA08D_RuntimeMethod_var);
			JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_6;
			L_6 = KeyValuePair_2_get_Value_mD27150EA5031B873539FD3D826C77219F3FFE044_inline((KeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_mD27150EA5031B873539FD3D826C77219F3FFE044_RuntimeMethod_var);
			NullCheck(L_6);
			JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_7;
			L_7 = VirtualFuncInvoker0< JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * >::Invoke(26 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::Clone() */, L_6);
			NullCheck(L_4);
			VirtualActionInvoker2< String_t*, JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * >::Invoke(20 /* System.Void SimpleJSON.JSONNode::Add(System.String,SimpleJSON.JSONNode) */, L_4, L_5, L_7);
		}

IL_0035:
		{
			// foreach (var n in m_Dict)
			bool L_8;
			L_8 = Enumerator_MoveNext_m2F43C4805222C8A5C8027DC246081895540A7D17((Enumerator_tCE541D75AA851CBCC2F41CB77FDD2C3DA76C09AC *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m2F43C4805222C8A5C8027DC246081895540A7D17_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_0014;
			}
		}

IL_003e:
		{
			IL2CPP_LEAVE(0x4E, FINALLY_0040);
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0040;
	}

FINALLY_0040:
	{// begin finally (depth: 1)
		Enumerator_Dispose_m69943D9522B275330B702DE01A3289247FFFE383((Enumerator_tCE541D75AA851CBCC2F41CB77FDD2C3DA76C09AC *)(&V_1), /*hidden argument*/Enumerator_Dispose_m69943D9522B275330B702DE01A3289247FFFE383_RuntimeMethod_var);
		IL2CPP_END_FINALLY(64)
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(64)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4E, IL_004e)
	}

IL_004e:
	{
		// return node;
		JSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1 * L_9 = V_0;
		return L_9;
	}
}
// System.Boolean SimpleJSON.JSONObject::HasKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONObject_HasKey_m837B4A498F84AF79E2EFA9AC7DD041D6A51ED7C6 (JSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1 * __this, String_t* ___aKey0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mF07D404CDE09597A5210DE02BCE5EE90CEAB475C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return m_Dict.ContainsKey(aKey);
		Dictionary_2_tAFDD9B13B8A8D35E8017B1AD49EE8DCF947CD740 * L_0 = __this->get_m_Dict_4();
		String_t* L_1 = ___aKey0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mF07D404CDE09597A5210DE02BCE5EE90CEAB475C(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_mF07D404CDE09597A5210DE02BCE5EE90CEAB475C_RuntimeMethod_var);
		return L_2;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONObject::GetValueOrDefault(System.String,SimpleJSON.JSONNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * JSONObject_GetValueOrDefault_m740D5332DEBA5BDCB4622103202C09F66D009D08 (JSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1 * __this, String_t* ___aKey0, JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * ___aDefault1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m6E16D0D059D86A3676475D36BD7A8C07FC99A629_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * V_0 = NULL;
	{
		// if (m_Dict.TryGetValue(aKey, out res))
		Dictionary_2_tAFDD9B13B8A8D35E8017B1AD49EE8DCF947CD740 * L_0 = __this->get_m_Dict_4();
		String_t* L_1 = ___aKey0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m6E16D0D059D86A3676475D36BD7A8C07FC99A629(L_0, L_1, (JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m6E16D0D059D86A3676475D36BD7A8C07FC99A629_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		// return res;
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_3 = V_0;
		return L_3;
	}

IL_0012:
	{
		// return aDefault;
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_4 = ___aDefault1;
		return L_4;
	}
}
// System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode> SimpleJSON.JSONObject::get_Children()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JSONObject_get_Children_mD36A022F70752842908E542DF8A88E827A43153C (JSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Cget_ChildrenU3Ed__27_tBAFD832B8A29905C1FDBEF21DACF57DF3850E73E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3Cget_ChildrenU3Ed__27_tBAFD832B8A29905C1FDBEF21DACF57DF3850E73E * L_0 = (U3Cget_ChildrenU3Ed__27_tBAFD832B8A29905C1FDBEF21DACF57DF3850E73E *)il2cpp_codegen_object_new(U3Cget_ChildrenU3Ed__27_tBAFD832B8A29905C1FDBEF21DACF57DF3850E73E_il2cpp_TypeInfo_var);
		U3Cget_ChildrenU3Ed__27__ctor_m999A61696E996872553914C6C4D8E86DFA4E7CFC(L_0, ((int32_t)-2), /*hidden argument*/NULL);
		U3Cget_ChildrenU3Ed__27_tBAFD832B8A29905C1FDBEF21DACF57DF3850E73E * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_3(__this);
		return L_1;
	}
}
// System.Void SimpleJSON.JSONObject::WriteToStringBuilder(System.Text.StringBuilder,System.Int32,System.Int32,SimpleJSON.JSONTextMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject_WriteToStringBuilder_mC9B657B6950EAD6BFADD62F0EFCFACC8E1E25DB4 (JSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1 * __this, StringBuilder_t * ___aSB0, int32_t ___aIndent1, int32_t ___aIndentInc2, int32_t ___aMode3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_mDCF3F7F20F872ADC03A74F11C55EB2B702EF2441_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m69943D9522B275330B702DE01A3289247FFFE383_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m2F43C4805222C8A5C8027DC246081895540A7D17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m8D5B4B174FCF301C8B25C69BC26D7DF5BCAFFE72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mD3950240DC492EBEB494BE0AEF2CB4223CFBA08D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mD27150EA5031B873539FD3D826C77219F3FFE044_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0767326DBE1DD31063256737FD019DC6682353E2);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Enumerator_tCE541D75AA851CBCC2F41CB77FDD2C3DA76C09AC  V_1;
	memset((&V_1), 0, sizeof(V_1));
	KeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// aSB.Append('{');
		StringBuilder_t * L_0 = ___aSB0;
		NullCheck(L_0);
		StringBuilder_t * L_1;
		L_1 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_0, ((int32_t)123), /*hidden argument*/NULL);
		// bool first = true;
		V_0 = (bool)1;
		// if (inline)
		bool L_2 = __this->get_inline_5();
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
		Dictionary_2_tAFDD9B13B8A8D35E8017B1AD49EE8DCF947CD740 * L_3 = __this->get_m_Dict_4();
		NullCheck(L_3);
		Enumerator_tCE541D75AA851CBCC2F41CB77FDD2C3DA76C09AC  L_4;
		L_4 = Dictionary_2_GetEnumerator_mDCF3F7F20F872ADC03A74F11C55EB2B702EF2441(L_3, /*hidden argument*/Dictionary_2_GetEnumerator_mDCF3F7F20F872ADC03A74F11C55EB2B702EF2441_RuntimeMethod_var);
		V_1 = L_4;
	}

IL_0022:
	try
	{// begin try (depth: 1)
		{
			goto IL_00a9;
		}

IL_0027:
		{
			// foreach (var k in m_Dict)
			KeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46  L_5;
			L_5 = Enumerator_get_Current_m8D5B4B174FCF301C8B25C69BC26D7DF5BCAFFE72_inline((Enumerator_tCE541D75AA851CBCC2F41CB77FDD2C3DA76C09AC *)(&V_1), /*hidden argument*/Enumerator_get_Current_m8D5B4B174FCF301C8B25C69BC26D7DF5BCAFFE72_RuntimeMethod_var);
			V_2 = L_5;
			// if (!first)
			bool L_6 = V_0;
			if (L_6)
			{
				goto IL_003b;
			}
		}

IL_0032:
		{
			// aSB.Append(',');
			StringBuilder_t * L_7 = ___aSB0;
			NullCheck(L_7);
			StringBuilder_t * L_8;
			L_8 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_7, ((int32_t)44), /*hidden argument*/NULL);
		}

IL_003b:
		{
			// first = false;
			V_0 = (bool)0;
			// if (aMode == JSONTextMode.Indent)
			int32_t L_9 = ___aMode3;
			if ((!(((uint32_t)L_9) == ((uint32_t)1))))
			{
				goto IL_0049;
			}
		}

IL_0042:
		{
			// aSB.AppendLine();
			StringBuilder_t * L_10 = ___aSB0;
			NullCheck(L_10);
			StringBuilder_t * L_11;
			L_11 = StringBuilder_AppendLine_mB5790BC98389118626505708AE683AE9257B91B2(L_10, /*hidden argument*/NULL);
		}

IL_0049:
		{
			// if (aMode == JSONTextMode.Indent)
			int32_t L_12 = ___aMode3;
			if ((!(((uint32_t)L_12) == ((uint32_t)1))))
			{
				goto IL_005a;
			}
		}

IL_004e:
		{
			// aSB.Append(' ', aIndent + aIndentInc);
			StringBuilder_t * L_13 = ___aSB0;
			int32_t L_14 = ___aIndent1;
			int32_t L_15 = ___aIndentInc2;
			NullCheck(L_13);
			StringBuilder_t * L_16;
			L_16 = StringBuilder_Append_mB04B8FAD8E322DF8E69F3F85BCE4A8D041AE8BFB(L_13, ((int32_t)32), ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)L_15)), /*hidden argument*/NULL);
		}

IL_005a:
		{
			// aSB.Append('\"').Append(Escape(k.Key)).Append('\"');
			StringBuilder_t * L_17 = ___aSB0;
			NullCheck(L_17);
			StringBuilder_t * L_18;
			L_18 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_17, ((int32_t)34), /*hidden argument*/NULL);
			String_t* L_19;
			L_19 = KeyValuePair_2_get_Key_mD3950240DC492EBEB494BE0AEF2CB4223CFBA08D_inline((KeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Key_mD3950240DC492EBEB494BE0AEF2CB4223CFBA08D_RuntimeMethod_var);
			IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
			String_t* L_20;
			L_20 = JSONNode_Escape_m71E3F923CC34FB0961ACD615E516B61AB60BBE23(L_19, /*hidden argument*/NULL);
			NullCheck(L_18);
			StringBuilder_t * L_21;
			L_21 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_18, L_20, /*hidden argument*/NULL);
			NullCheck(L_21);
			StringBuilder_t * L_22;
			L_22 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_21, ((int32_t)34), /*hidden argument*/NULL);
			// if (aMode == JSONTextMode.Compact)
			int32_t L_23 = ___aMode3;
			if (L_23)
			{
				goto IL_008a;
			}
		}

IL_007f:
		{
			// aSB.Append(':');
			StringBuilder_t * L_24 = ___aSB0;
			NullCheck(L_24);
			StringBuilder_t * L_25;
			L_25 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_24, ((int32_t)58), /*hidden argument*/NULL);
			goto IL_0096;
		}

IL_008a:
		{
			// aSB.Append(" : ");
			StringBuilder_t * L_26 = ___aSB0;
			NullCheck(L_26);
			StringBuilder_t * L_27;
			L_27 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_26, _stringLiteral0767326DBE1DD31063256737FD019DC6682353E2, /*hidden argument*/NULL);
		}

IL_0096:
		{
			// k.Value.WriteToStringBuilder(aSB, aIndent + aIndentInc, aIndentInc, aMode);
			JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_28;
			L_28 = KeyValuePair_2_get_Value_mD27150EA5031B873539FD3D826C77219F3FFE044_inline((KeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_mD27150EA5031B873539FD3D826C77219F3FFE044_RuntimeMethod_var);
			StringBuilder_t * L_29 = ___aSB0;
			int32_t L_30 = ___aIndent1;
			int32_t L_31 = ___aIndentInc2;
			int32_t L_32 = ___aIndentInc2;
			int32_t L_33 = ___aMode3;
			NullCheck(L_28);
			VirtualActionInvoker4< StringBuilder_t *, int32_t, int32_t, int32_t >::Invoke(31 /* System.Void SimpleJSON.JSONNode::WriteToStringBuilder(System.Text.StringBuilder,System.Int32,System.Int32,SimpleJSON.JSONTextMode) */, L_28, L_29, ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)L_31)), L_32, L_33);
		}

IL_00a9:
		{
			// foreach (var k in m_Dict)
			bool L_34;
			L_34 = Enumerator_MoveNext_m2F43C4805222C8A5C8027DC246081895540A7D17((Enumerator_tCE541D75AA851CBCC2F41CB77FDD2C3DA76C09AC *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m2F43C4805222C8A5C8027DC246081895540A7D17_RuntimeMethod_var);
			if (L_34)
			{
				goto IL_0027;
			}
		}

IL_00b5:
		{
			IL2CPP_LEAVE(0xC5, FINALLY_00b7);
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00b7;
	}

FINALLY_00b7:
	{// begin finally (depth: 1)
		Enumerator_Dispose_m69943D9522B275330B702DE01A3289247FFFE383((Enumerator_tCE541D75AA851CBCC2F41CB77FDD2C3DA76C09AC *)(&V_1), /*hidden argument*/Enumerator_Dispose_m69943D9522B275330B702DE01A3289247FFFE383_RuntimeMethod_var);
		IL2CPP_END_FINALLY(183)
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(183)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xC5, IL_00c5)
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
		StringBuilder_t * L_36 = ___aSB0;
		NullCheck(L_36);
		StringBuilder_t * L_37;
		L_37 = StringBuilder_AppendLine_mB5790BC98389118626505708AE683AE9257B91B2(L_36, /*hidden argument*/NULL);
		int32_t L_38 = ___aIndent1;
		NullCheck(L_37);
		StringBuilder_t * L_39;
		L_39 = StringBuilder_Append_mB04B8FAD8E322DF8E69F3F85BCE4A8D041AE8BFB(L_37, ((int32_t)32), L_38, /*hidden argument*/NULL);
	}

IL_00d9:
	{
		// aSB.Append('}');
		StringBuilder_t * L_40 = ___aSB0;
		NullCheck(L_40);
		StringBuilder_t * L_41;
		L_41 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_40, ((int32_t)125), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SimpleJSON.JSONObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONObject__ctor_mDC880B59ED4D826E15F67A626326822D1CD1F52C (JSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m6105C1DC5F16DE35DE5DD8D35763D4C01F0F91ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tAFDD9B13B8A8D35E8017B1AD49EE8DCF947CD740_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Dictionary<string, JSONNode> m_Dict = new Dictionary<string, JSONNode>();
		Dictionary_2_tAFDD9B13B8A8D35E8017B1AD49EE8DCF947CD740 * L_0 = (Dictionary_2_tAFDD9B13B8A8D35E8017B1AD49EE8DCF947CD740 *)il2cpp_codegen_object_new(Dictionary_2_tAFDD9B13B8A8D35E8017B1AD49EE8DCF947CD740_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m6105C1DC5F16DE35DE5DD8D35763D4C01F0F91ED(L_0, /*hidden argument*/Dictionary_2__ctor_m6105C1DC5F16DE35DE5DD8D35763D4C01F0F91ED_RuntimeMethod_var);
		__this->set_m_Dict_4(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		JSONNode__ctor_m1CBF4F8B6E1DECA2CC6252F7DE0BEF1D11A18A91(__this, /*hidden argument*/NULL);
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
// SimpleJSON.JSONNodeType SimpleJSON.JSONString::get_Tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONString_get_Tag_m7E09C62F10964D4D27854A83E0860A5AC985AFE3 (JSONString_tDC7D689F0DBDAC1FC0399D63CA27C8FEB266EFAF * __this, const RuntimeMethod* method)
{
	{
		// public override JSONNodeType Tag { get { return JSONNodeType.String; } }
		return (int32_t)(3);
	}
}
// System.Boolean SimpleJSON.JSONString::get_IsString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONString_get_IsString_m5BF6795E2EC537F95E28F159B6760962D9F8CA4E (JSONString_tDC7D689F0DBDAC1FC0399D63CA27C8FEB266EFAF * __this, const RuntimeMethod* method)
{
	{
		// public override bool IsString { get { return true; } }
		return (bool)1;
	}
}
// SimpleJSON.JSONNode/Enumerator SimpleJSON.JSONString::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8  JSONString_GetEnumerator_m69464F52BB0DA089F154DCB55F5ED7302310CB9D (JSONString_tDC7D689F0DBDAC1FC0399D63CA27C8FEB266EFAF * __this, const RuntimeMethod* method)
{
	Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public override Enumerator GetEnumerator() { return new Enumerator(); }
		il2cpp_codegen_initobj((&V_0), sizeof(Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8 ));
		Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8  L_0 = V_0;
		return L_0;
	}
}
// System.String SimpleJSON.JSONString::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONString_get_Value_m4731F37BD04F956DABFB67BA0C421211C6C97F59 (JSONString_tDC7D689F0DBDAC1FC0399D63CA27C8FEB266EFAF * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Data; }
		String_t* L_0 = __this->get_m_Data_4();
		return L_0;
	}
}
// System.Void SimpleJSON.JSONString::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONString_set_Value_m2670EB54A9F28DF3F09476CA0AEF5A74F83EF45B (JSONString_tDC7D689F0DBDAC1FC0399D63CA27C8FEB266EFAF * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// m_Data = value;
		String_t* L_0 = ___value0;
		__this->set_m_Data_4(L_0);
		// }
		return;
	}
}
// System.Void SimpleJSON.JSONString::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONString__ctor_m7E8C037643D81531C83ED7103B3B2E2847454981 (JSONString_tDC7D689F0DBDAC1FC0399D63CA27C8FEB266EFAF * __this, String_t* ___aData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public JSONString(string aData)
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		JSONNode__ctor_m1CBF4F8B6E1DECA2CC6252F7DE0BEF1D11A18A91(__this, /*hidden argument*/NULL);
		// m_Data = aData;
		String_t* L_0 = ___aData0;
		__this->set_m_Data_4(L_0);
		// }
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONString::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * JSONString_Clone_mA5A56022700D16F4BAA060A948590F3729E50CBC (JSONString_tDC7D689F0DBDAC1FC0399D63CA27C8FEB266EFAF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONString_tDC7D689F0DBDAC1FC0399D63CA27C8FEB266EFAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new JSONString(m_Data);
		String_t* L_0 = __this->get_m_Data_4();
		JSONString_tDC7D689F0DBDAC1FC0399D63CA27C8FEB266EFAF * L_1 = (JSONString_tDC7D689F0DBDAC1FC0399D63CA27C8FEB266EFAF *)il2cpp_codegen_object_new(JSONString_tDC7D689F0DBDAC1FC0399D63CA27C8FEB266EFAF_il2cpp_TypeInfo_var);
		JSONString__ctor_m7E8C037643D81531C83ED7103B3B2E2847454981(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void SimpleJSON.JSONString::WriteToStringBuilder(System.Text.StringBuilder,System.Int32,System.Int32,SimpleJSON.JSONTextMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONString_WriteToStringBuilder_mD04D1D9ECF6524AFE0BFFA950C5E28C6CCA58A81 (JSONString_tDC7D689F0DBDAC1FC0399D63CA27C8FEB266EFAF * __this, StringBuilder_t * ___aSB0, int32_t ___aIndent1, int32_t ___aIndentInc2, int32_t ___aMode3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// aSB.Append('\"').Append(Escape(m_Data)).Append('\"');
		StringBuilder_t * L_0 = ___aSB0;
		NullCheck(L_0);
		StringBuilder_t * L_1;
		L_1 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_0, ((int32_t)34), /*hidden argument*/NULL);
		String_t* L_2 = __this->get_m_Data_4();
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = JSONNode_Escape_m71E3F923CC34FB0961ACD615E516B61AB60BBE23(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		StringBuilder_t * L_4;
		L_4 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_1, L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		StringBuilder_t * L_5;
		L_5 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_4, ((int32_t)34), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean SimpleJSON.JSONString::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONString_Equals_mBF62E77E4EA113962F09D5EF5AAB519F0C5DBE96 (JSONString_tDC7D689F0DBDAC1FC0399D63CA27C8FEB266EFAF * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONString_tDC7D689F0DBDAC1FC0399D63CA27C8FEB266EFAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	JSONString_tDC7D689F0DBDAC1FC0399D63CA27C8FEB266EFAF * V_1 = NULL;
	{
		// if (base.Equals(obj))
		RuntimeObject * L_0 = ___obj0;
		bool L_1;
		L_1 = JSONNode_Equals_mBFF7A822B266FD96F6A6B54433B3F9A00CE06AA0(__this, L_0, /*hidden argument*/NULL);
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
		RuntimeObject * L_2 = ___obj0;
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
		String_t* L_4 = __this->get_m_Data_4();
		String_t* L_5 = V_0;
		bool L_6;
		L_6 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_0022:
	{
		// JSONString s2 = obj as JSONString;
		RuntimeObject * L_7 = ___obj0;
		V_1 = ((JSONString_tDC7D689F0DBDAC1FC0399D63CA27C8FEB266EFAF *)IsInstClass((RuntimeObject*)L_7, JSONString_tDC7D689F0DBDAC1FC0399D63CA27C8FEB266EFAF_il2cpp_TypeInfo_var));
		// if (s2 != null)
		JSONString_tDC7D689F0DBDAC1FC0399D63CA27C8FEB266EFAF * L_8 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = JSONNode_op_Inequality_m22851EA8F1ED30D4A1B977CD92AFEEB246DD098A(L_8, NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0044;
		}
	}
	{
		// return m_Data == s2.m_Data;
		String_t* L_10 = __this->get_m_Data_4();
		JSONString_tDC7D689F0DBDAC1FC0399D63CA27C8FEB266EFAF * L_11 = V_1;
		NullCheck(L_11);
		String_t* L_12 = L_11->get_m_Data_4();
		bool L_13;
		L_13 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_10, L_12, /*hidden argument*/NULL);
		return L_13;
	}

IL_0044:
	{
		// return false;
		return (bool)0;
	}
}
// System.Int32 SimpleJSON.JSONString::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JSONString_GetHashCode_m0D03E5BEB56AD43BDEFC55A105FB80C808C22017 (JSONString_tDC7D689F0DBDAC1FC0399D63CA27C8FEB266EFAF * __this, const RuntimeMethod* method)
{
	{
		// return m_Data.GetHashCode();
		String_t* L_0 = __this->get_m_Data_4();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		return L_1;
	}
}
// System.Void SimpleJSON.JSONString::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONString_Clear_mBD6A25024B15670C43FC4BC306C866FCD832DCD9 (JSONString_tDC7D689F0DBDAC1FC0399D63CA27C8FEB266EFAF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Data = "";
		__this->set_m_Data_4(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SimpleJSON.JSONArray/<get_Children>d__24::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__24__ctor_m8525173D7EAEF8C7D22520776CB3EEE75FD09014 (U3Cget_ChildrenU3Ed__24_t0B4B41955B2D2AF5198DD9E35A1F9B8F7DA975FD * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void SimpleJSON.JSONArray/<get_Children>d__24::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__24_System_IDisposable_Dispose_m9F772EA0CE9EAF94AA2EB8611E3FABC53DC8AECD (U3Cget_ChildrenU3Ed__24_t0B4B41955B2D2AF5198DD9E35A1F9B8F7DA975FD * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
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

IL_0011:
	try
	{// begin try (depth: 1)
		IL2CPP_LEAVE(0x1A, FINALLY_0013);
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0013;
	}

FINALLY_0013:
	{// begin finally (depth: 1)
		U3Cget_ChildrenU3Ed__24_U3CU3Em__Finally1_m547151291D1595579CC8948861EAB01168C509B5(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(19)
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(19)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean SimpleJSON.JSONArray/<get_Children>d__24::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Cget_ChildrenU3Ed__24_MoveNext_m7874AE80D033BDF1A18A9ABE759666245E7402CC (U3Cget_ChildrenU3Ed__24_t0B4B41955B2D2AF5198DD9E35A1F9B8F7DA975FD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m425A5F4589B9E03CCCCA6245AF5F20FDADC90FAD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mA04D9F0633F9986798A90E49F1AF69EBAE9466DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m04D3744D5A2851C740631E66DC681938D0C3381B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	JSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E * V_2 = NULL;
	JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;

IL_0000:
	try
	{// begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			JSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E * L_1 = __this->get_U3CU3E4__this_3();
			V_2 = L_1;
			int32_t L_2 = V_1;
			if (!L_2)
			{
				goto IL_0019;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_1;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_0059;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			goto IL_008b;
		}

IL_0019:
		{
			__this->set_U3CU3E1__state_0((-1));
			// foreach (JSONNode N in m_List)
			JSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E * L_4 = V_2;
			NullCheck(L_4);
			List_1_t5575902E70199AF34CD1695997CE7E53A1509646 * L_5 = L_4->get_m_List_4();
			NullCheck(L_5);
			Enumerator_tDA1783FBD1372348634FED4EDC7396A489A211FA  L_6;
			L_6 = List_1_GetEnumerator_m04D3744D5A2851C740631E66DC681938D0C3381B(L_5, /*hidden argument*/List_1_GetEnumerator_m04D3744D5A2851C740631E66DC681938D0C3381B_RuntimeMethod_var);
			__this->set_U3CU3E7__wrap1_4(L_6);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_0061;
		}

IL_003b:
		{
			// foreach (JSONNode N in m_List)
			Enumerator_tDA1783FBD1372348634FED4EDC7396A489A211FA * L_7 = __this->get_address_of_U3CU3E7__wrap1_4();
			JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_8;
			L_8 = Enumerator_get_Current_mA04D9F0633F9986798A90E49F1AF69EBAE9466DB_inline((Enumerator_tDA1783FBD1372348634FED4EDC7396A489A211FA *)L_7, /*hidden argument*/Enumerator_get_Current_mA04D9F0633F9986798A90E49F1AF69EBAE9466DB_RuntimeMethod_var);
			V_3 = L_8;
			// yield return N;
			JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_9 = V_3;
			__this->set_U3CU3E2__current_1(L_9);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_008b;
		}

IL_0059:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
		}

IL_0061:
		{
			// foreach (JSONNode N in m_List)
			Enumerator_tDA1783FBD1372348634FED4EDC7396A489A211FA * L_10 = __this->get_address_of_U3CU3E7__wrap1_4();
			bool L_11;
			L_11 = Enumerator_MoveNext_m425A5F4589B9E03CCCCA6245AF5F20FDADC90FAD((Enumerator_tDA1783FBD1372348634FED4EDC7396A489A211FA *)L_10, /*hidden argument*/Enumerator_MoveNext_m425A5F4589B9E03CCCCA6245AF5F20FDADC90FAD_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_003b;
			}
		}

IL_006e:
		{
			U3Cget_ChildrenU3Ed__24_U3CU3Em__Finally1_m547151291D1595579CC8948861EAB01168C509B5(__this, /*hidden argument*/NULL);
			Enumerator_tDA1783FBD1372348634FED4EDC7396A489A211FA * L_12 = __this->get_address_of_U3CU3E7__wrap1_4();
			il2cpp_codegen_initobj(L_12, sizeof(Enumerator_tDA1783FBD1372348634FED4EDC7396A489A211FA ));
			// }
			V_0 = (bool)0;
			goto IL_008b;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_0084;
	}

FAULT_0084:
	{// begin fault (depth: 1)
		U3Cget_ChildrenU3Ed__24_System_IDisposable_Dispose_m9F772EA0CE9EAF94AA2EB8611E3FABC53DC8AECD(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(132)
	}// end fault
	IL2CPP_CLEANUP(132)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_008b:
	{
		bool L_13 = V_0;
		return L_13;
	}
}
// System.Void SimpleJSON.JSONArray/<get_Children>d__24::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__24_U3CU3Em__Finally1_m547151291D1595579CC8948861EAB01168C509B5 (U3Cget_ChildrenU3Ed__24_t0B4B41955B2D2AF5198DD9E35A1F9B8F7DA975FD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m7F31F9216A506EB82FA3E6EA1DA9C1E11DB81A3B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		Enumerator_tDA1783FBD1372348634FED4EDC7396A489A211FA * L_0 = __this->get_address_of_U3CU3E7__wrap1_4();
		Enumerator_Dispose_m7F31F9216A506EB82FA3E6EA1DA9C1E11DB81A3B((Enumerator_tDA1783FBD1372348634FED4EDC7396A489A211FA *)L_0, /*hidden argument*/Enumerator_Dispose_m7F31F9216A506EB82FA3E6EA1DA9C1E11DB81A3B_RuntimeMethod_var);
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONArray/<get_Children>d__24::System.Collections.Generic.IEnumerator<SimpleJSON.JSONNode>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * U3Cget_ChildrenU3Ed__24_System_Collections_Generic_IEnumeratorU3CSimpleJSON_JSONNodeU3E_get_Current_m2A210CB7971DFE7083B5422E3937F0F3664EF503 (U3Cget_ChildrenU3Ed__24_t0B4B41955B2D2AF5198DD9E35A1F9B8F7DA975FD * __this, const RuntimeMethod* method)
{
	{
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void SimpleJSON.JSONArray/<get_Children>d__24::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__24_System_Collections_IEnumerator_Reset_mFA33F402F7E5AA0EC8BB8F2BA1AD8A0B2A62DF30 (U3Cget_ChildrenU3Ed__24_t0B4B41955B2D2AF5198DD9E35A1F9B8F7DA975FD * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Cget_ChildrenU3Ed__24_System_Collections_IEnumerator_Reset_mFA33F402F7E5AA0EC8BB8F2BA1AD8A0B2A62DF30_RuntimeMethod_var)));
	}
}
// System.Object SimpleJSON.JSONArray/<get_Children>d__24::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3Cget_ChildrenU3Ed__24_System_Collections_IEnumerator_get_Current_mDBA44EC45F9A7C7B871900909FE1A81B66D509E5 (U3Cget_ChildrenU3Ed__24_t0B4B41955B2D2AF5198DD9E35A1F9B8F7DA975FD * __this, const RuntimeMethod* method)
{
	{
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode> SimpleJSON.JSONArray/<get_Children>d__24::System.Collections.Generic.IEnumerable<SimpleJSON.JSONNode>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildrenU3Ed__24_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m09E3FAE760C9B87A35DBDF715E3556D67DD26A1A (U3Cget_ChildrenU3Ed__24_t0B4B41955B2D2AF5198DD9E35A1F9B8F7DA975FD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Cget_ChildrenU3Ed__24_t0B4B41955B2D2AF5198DD9E35A1F9B8F7DA975FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3Cget_ChildrenU3Ed__24_t0B4B41955B2D2AF5198DD9E35A1F9B8F7DA975FD * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3Cget_ChildrenU3Ed__24_t0B4B41955B2D2AF5198DD9E35A1F9B8F7DA975FD * L_3 = (U3Cget_ChildrenU3Ed__24_t0B4B41955B2D2AF5198DD9E35A1F9B8F7DA975FD *)il2cpp_codegen_object_new(U3Cget_ChildrenU3Ed__24_t0B4B41955B2D2AF5198DD9E35A1F9B8F7DA975FD_il2cpp_TypeInfo_var);
		U3Cget_ChildrenU3Ed__24__ctor_m8525173D7EAEF8C7D22520776CB3EEE75FD09014(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
		U3Cget_ChildrenU3Ed__24_t0B4B41955B2D2AF5198DD9E35A1F9B8F7DA975FD * L_4 = V_0;
		JSONArray_tEB40935C625123823D4E6A4D95FF4574D684936E * L_5 = __this->get_U3CU3E4__this_3();
		NullCheck(L_4);
		L_4->set_U3CU3E4__this_3(L_5);
	}

IL_0035:
	{
		U3Cget_ChildrenU3Ed__24_t0B4B41955B2D2AF5198DD9E35A1F9B8F7DA975FD * L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator SimpleJSON.JSONArray/<get_Children>d__24::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildrenU3Ed__24_System_Collections_IEnumerable_GetEnumerator_mCFEA96946345AF1A5ABFC4930A35CFFD1C066379 (U3Cget_ChildrenU3Ed__24_t0B4B41955B2D2AF5198DD9E35A1F9B8F7DA975FD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3Cget_ChildrenU3Ed__24_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m09E3FAE760C9B87A35DBDF715E3556D67DD26A1A(__this, /*hidden argument*/NULL);
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
// System.Void SimpleJSON.JSONNode/<get_Children>d__43::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__43__ctor_m4A8B228BE4DA2CA88DD8CE8C67D0357664EB26A9 (U3Cget_ChildrenU3Ed__43_t676D15A68B9E4445BE9089BCD930635F8DC59D80 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void SimpleJSON.JSONNode/<get_Children>d__43::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__43_System_IDisposable_Dispose_m4B9EA2FBE1CBD93A6EDFF2B4544B494BCB042AD8 (U3Cget_ChildrenU3Ed__43_t676D15A68B9E4445BE9089BCD930635F8DC59D80 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean SimpleJSON.JSONNode/<get_Children>d__43::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Cget_ChildrenU3Ed__43_MoveNext_m7F2F5FCCDBB632AC56DEB910C257F4F0B2C929A8 (U3Cget_ChildrenU3Ed__43_t676D15A68B9E4445BE9089BCD930635F8DC59D80 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
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
		__this->set_U3CU3E1__state_0((-1));
		// yield break;
		return (bool)0;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode/<get_Children>d__43::System.Collections.Generic.IEnumerator<SimpleJSON.JSONNode>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * U3Cget_ChildrenU3Ed__43_System_Collections_Generic_IEnumeratorU3CSimpleJSON_JSONNodeU3E_get_Current_m24415C00325684B1B42E220FE8D3ED324A2F4705 (U3Cget_ChildrenU3Ed__43_t676D15A68B9E4445BE9089BCD930635F8DC59D80 * __this, const RuntimeMethod* method)
{
	{
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void SimpleJSON.JSONNode/<get_Children>d__43::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__43_System_Collections_IEnumerator_Reset_m9E0B574824935D851FE2340C5C5A1FBAD9C1250E (U3Cget_ChildrenU3Ed__43_t676D15A68B9E4445BE9089BCD930635F8DC59D80 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Cget_ChildrenU3Ed__43_System_Collections_IEnumerator_Reset_m9E0B574824935D851FE2340C5C5A1FBAD9C1250E_RuntimeMethod_var)));
	}
}
// System.Object SimpleJSON.JSONNode/<get_Children>d__43::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3Cget_ChildrenU3Ed__43_System_Collections_IEnumerator_get_Current_mECE206FAD1A21EC167EFDB9C20C21EF7DE7B859E (U3Cget_ChildrenU3Ed__43_t676D15A68B9E4445BE9089BCD930635F8DC59D80 * __this, const RuntimeMethod* method)
{
	{
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode/<get_Children>d__43::System.Collections.Generic.IEnumerable<SimpleJSON.JSONNode>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildrenU3Ed__43_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m01ED6319833B8418EF465768BFF36D13CB058563 (U3Cget_ChildrenU3Ed__43_t676D15A68B9E4445BE9089BCD930635F8DC59D80 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Cget_ChildrenU3Ed__43_t676D15A68B9E4445BE9089BCD930635F8DC59D80_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3Cget_ChildrenU3Ed__43_t676D15A68B9E4445BE9089BCD930635F8DC59D80 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3Cget_ChildrenU3Ed__43_t676D15A68B9E4445BE9089BCD930635F8DC59D80 * L_3 = (U3Cget_ChildrenU3Ed__43_t676D15A68B9E4445BE9089BCD930635F8DC59D80 *)il2cpp_codegen_object_new(U3Cget_ChildrenU3Ed__43_t676D15A68B9E4445BE9089BCD930635F8DC59D80_il2cpp_TypeInfo_var);
		U3Cget_ChildrenU3Ed__43__ctor_m4A8B228BE4DA2CA88DD8CE8C67D0357664EB26A9(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_0029:
	{
		U3Cget_ChildrenU3Ed__43_t676D15A68B9E4445BE9089BCD930635F8DC59D80 * L_4 = V_0;
		return L_4;
	}
}
// System.Collections.IEnumerator SimpleJSON.JSONNode/<get_Children>d__43::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildrenU3Ed__43_System_Collections_IEnumerable_GetEnumerator_mF942F910085010FA1E045D580BC0776F515BC576 (U3Cget_ChildrenU3Ed__43_t676D15A68B9E4445BE9089BCD930635F8DC59D80 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3Cget_ChildrenU3Ed__43_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_m01ED6319833B8418EF465768BFF36D13CB058563(__this, /*hidden argument*/NULL);
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
// System.Void SimpleJSON.JSONNode/<get_DeepChildren>d__45::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_DeepChildrenU3Ed__45__ctor_m3800B443AD95F9F5ED8AF4FA4C43CD43DEBF685A (U3Cget_DeepChildrenU3Ed__45_tCD907C30A1B957DFC6A9DC8CFCC199DD51C378FA * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void SimpleJSON.JSONNode/<get_DeepChildren>d__45::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_DeepChildrenU3Ed__45_System_IDisposable_Dispose_m5B889C6FB6BBCF1E149287DA9D91F61084D161B8 (U3Cget_DeepChildrenU3Ed__45_tCD907C30A1B957DFC6A9DC8CFCC199DD51C378FA * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)((int32_t)-4)))) > ((uint32_t)1))))
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

IL_0013:
	try
	{// begin try (depth: 1)
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)((int32_t)-4))))
			{
				goto IL_001e;
			}
		}

IL_0018:
		{
			int32_t L_4 = V_0;
			if ((((int32_t)L_4) == ((int32_t)1)))
			{
				goto IL_001e;
			}
		}

IL_001c:
		{
			IL2CPP_LEAVE(0x2F, FINALLY_0028);
		}

IL_001e:
		{
		}

IL_001f:
		try
		{// begin try (depth: 2)
			IL2CPP_LEAVE(0x2F, FINALLY_0021);
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0021;
		}

FINALLY_0021:
		{// begin finally (depth: 2)
			U3Cget_DeepChildrenU3Ed__45_U3CU3Em__Finally2_m98BC844827185D4A927492249BBF3F888FFF0454(__this, /*hidden argument*/NULL);
			IL2CPP_END_FINALLY(33)
		}// end finally (depth: 2)
		IL2CPP_CLEANUP(33)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0x2F, FINALLY_0028);
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0028;
	}

FINALLY_0028:
	{// begin finally (depth: 1)
		U3Cget_DeepChildrenU3Ed__45_U3CU3Em__Finally1_m92B26962014EB8727CACC7B5E6F7F628E2CA56A8(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(40)
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(40)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2F, IL_002f)
	}

IL_002f:
	{
		return;
	}
}
// System.Boolean SimpleJSON.JSONNode/<get_DeepChildren>d__45::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Cget_DeepChildrenU3Ed__45_MoveNext_mA9098BF0D7BE2687DF11CEAB9793231BDF9E2A6C (U3Cget_DeepChildrenU3Ed__45_tCD907C30A1B957DFC6A9DC8CFCC199DD51C378FA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t2D73195D0BB02AACCD1E3786DCDD9F02D85D69BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t993408F1AF277FE5DE07EC55F5921D620CF1B2ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * V_2 = NULL;
	JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * V_3 = NULL;
	JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;

IL_0000:
	try
	{// begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_1 = __this->get_U3CU3E4__this_3();
			V_2 = L_1;
			int32_t L_2 = V_1;
			if (!L_2)
			{
				goto IL_001c;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_1;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_0085;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			goto IL_00cc;
		}

IL_001c:
		{
			__this->set_U3CU3E1__state_0((-1));
			// foreach (var C in Children)
			JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_4 = V_2;
			NullCheck(L_4);
			RuntimeObject* L_5;
			L_5 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(27 /* System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode::get_Children() */, L_4);
			NullCheck(L_5);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode>::GetEnumerator() */, IEnumerable_1_t2D73195D0BB02AACCD1E3786DCDD9F02D85D69BA_il2cpp_TypeInfo_var, L_5);
			__this->set_U3CU3E7__wrap1_4(L_6);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_00a7;
		}

IL_003e:
		{
			// foreach (var C in Children)
			RuntimeObject* L_7 = __this->get_U3CU3E7__wrap1_4();
			NullCheck(L_7);
			JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_8;
			L_8 = InterfaceFuncInvoker0< JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode>::get_Current() */, IEnumerator_1_t993408F1AF277FE5DE07EC55F5921D620CF1B2ED_il2cpp_TypeInfo_var, L_7);
			V_3 = L_8;
			// foreach (var D in C.DeepChildren)
			JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_9 = V_3;
			NullCheck(L_9);
			RuntimeObject* L_10;
			L_10 = JSONNode_get_DeepChildren_mF66414308628678DEA3A73F7B6841D82D99020CE(L_9, /*hidden argument*/NULL);
			NullCheck(L_10);
			RuntimeObject* L_11;
			L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode>::GetEnumerator() */, IEnumerable_1_t2D73195D0BB02AACCD1E3786DCDD9F02D85D69BA_il2cpp_TypeInfo_var, L_10);
			__this->set_U3CU3E7__wrap2_5(L_11);
			__this->set_U3CU3E1__state_0(((int32_t)-4));
			goto IL_008d;
		}

IL_0065:
		{
			// foreach (var D in C.DeepChildren)
			RuntimeObject* L_12 = __this->get_U3CU3E7__wrap2_5();
			NullCheck(L_12);
			JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_13;
			L_13 = InterfaceFuncInvoker0< JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode>::get_Current() */, IEnumerator_1_t993408F1AF277FE5DE07EC55F5921D620CF1B2ED_il2cpp_TypeInfo_var, L_12);
			V_4 = L_13;
			// yield return D;
			JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_14 = V_4;
			__this->set_U3CU3E2__current_1(L_14);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_00cc;
		}

IL_0085:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-4));
		}

IL_008d:
		{
			// foreach (var D in C.DeepChildren)
			RuntimeObject* L_15 = __this->get_U3CU3E7__wrap2_5();
			NullCheck(L_15);
			bool L_16;
			L_16 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_15);
			if (L_16)
			{
				goto IL_0065;
			}
		}

IL_009a:
		{
			U3Cget_DeepChildrenU3Ed__45_U3CU3Em__Finally2_m98BC844827185D4A927492249BBF3F888FFF0454(__this, /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap2_5((RuntimeObject*)NULL);
		}

IL_00a7:
		{
			// foreach (var C in Children)
			RuntimeObject* L_17 = __this->get_U3CU3E7__wrap1_4();
			NullCheck(L_17);
			bool L_18;
			L_18 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_17);
			if (L_18)
			{
				goto IL_003e;
			}
		}

IL_00b4:
		{
			U3Cget_DeepChildrenU3Ed__45_U3CU3Em__Finally1_m92B26962014EB8727CACC7B5E6F7F628E2CA56A8(__this, /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap1_4((RuntimeObject*)NULL);
			// }
			V_0 = (bool)0;
			goto IL_00cc;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_00c5;
	}

FAULT_00c5:
	{// begin fault (depth: 1)
		U3Cget_DeepChildrenU3Ed__45_System_IDisposable_Dispose_m5B889C6FB6BBCF1E149287DA9D91F61084D161B8(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(197)
	}// end fault
	IL2CPP_CLEANUP(197)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00cc:
	{
		bool L_19 = V_0;
		return L_19;
	}
}
// System.Void SimpleJSON.JSONNode/<get_DeepChildren>d__45::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_DeepChildrenU3Ed__45_U3CU3Em__Finally1_m92B26962014EB8727CACC7B5E6F7F628E2CA56A8 (U3Cget_DeepChildrenU3Ed__45_tCD907C30A1B957DFC6A9DC8CFCC199DD51C378FA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		RuntimeObject* L_0 = __this->get_U3CU3E7__wrap1_4();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_U3CU3E7__wrap1_4();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Void SimpleJSON.JSONNode/<get_DeepChildren>d__45::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_DeepChildrenU3Ed__45_U3CU3Em__Finally2_m98BC844827185D4A927492249BBF3F888FFF0454 (U3Cget_DeepChildrenU3Ed__45_tCD907C30A1B957DFC6A9DC8CFCC199DD51C378FA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0(((int32_t)-3));
		RuntimeObject* L_0 = __this->get_U3CU3E7__wrap2_5();
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_U3CU3E7__wrap2_5();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001b:
	{
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode/<get_DeepChildren>d__45::System.Collections.Generic.IEnumerator<SimpleJSON.JSONNode>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * U3Cget_DeepChildrenU3Ed__45_System_Collections_Generic_IEnumeratorU3CSimpleJSON_JSONNodeU3E_get_Current_m4BB737D123D0A1E70CE5C3DCE042859E86A64C7A (U3Cget_DeepChildrenU3Ed__45_tCD907C30A1B957DFC6A9DC8CFCC199DD51C378FA * __this, const RuntimeMethod* method)
{
	{
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void SimpleJSON.JSONNode/<get_DeepChildren>d__45::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_DeepChildrenU3Ed__45_System_Collections_IEnumerator_Reset_m0E9AC40CF8C756223AF77AF992D4C43C270B653D (U3Cget_DeepChildrenU3Ed__45_tCD907C30A1B957DFC6A9DC8CFCC199DD51C378FA * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Cget_DeepChildrenU3Ed__45_System_Collections_IEnumerator_Reset_m0E9AC40CF8C756223AF77AF992D4C43C270B653D_RuntimeMethod_var)));
	}
}
// System.Object SimpleJSON.JSONNode/<get_DeepChildren>d__45::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3Cget_DeepChildrenU3Ed__45_System_Collections_IEnumerator_get_Current_m4164D3713DFBAF54E787421273A6AC58639200E6 (U3Cget_DeepChildrenU3Ed__45_tCD907C30A1B957DFC6A9DC8CFCC199DD51C378FA * __this, const RuntimeMethod* method)
{
	{
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode/<get_DeepChildren>d__45::System.Collections.Generic.IEnumerable<SimpleJSON.JSONNode>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_DeepChildrenU3Ed__45_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_mA5A8FA8A38ADC1FA3EBCF738521CCE87F0788837 (U3Cget_DeepChildrenU3Ed__45_tCD907C30A1B957DFC6A9DC8CFCC199DD51C378FA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Cget_DeepChildrenU3Ed__45_tCD907C30A1B957DFC6A9DC8CFCC199DD51C378FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3Cget_DeepChildrenU3Ed__45_tCD907C30A1B957DFC6A9DC8CFCC199DD51C378FA * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3Cget_DeepChildrenU3Ed__45_tCD907C30A1B957DFC6A9DC8CFCC199DD51C378FA * L_3 = (U3Cget_DeepChildrenU3Ed__45_tCD907C30A1B957DFC6A9DC8CFCC199DD51C378FA *)il2cpp_codegen_object_new(U3Cget_DeepChildrenU3Ed__45_tCD907C30A1B957DFC6A9DC8CFCC199DD51C378FA_il2cpp_TypeInfo_var);
		U3Cget_DeepChildrenU3Ed__45__ctor_m3800B443AD95F9F5ED8AF4FA4C43CD43DEBF685A(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
		U3Cget_DeepChildrenU3Ed__45_tCD907C30A1B957DFC6A9DC8CFCC199DD51C378FA * L_4 = V_0;
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_5 = __this->get_U3CU3E4__this_3();
		NullCheck(L_4);
		L_4->set_U3CU3E4__this_3(L_5);
	}

IL_0035:
	{
		U3Cget_DeepChildrenU3Ed__45_tCD907C30A1B957DFC6A9DC8CFCC199DD51C378FA * L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator SimpleJSON.JSONNode/<get_DeepChildren>d__45::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_DeepChildrenU3Ed__45_System_Collections_IEnumerable_GetEnumerator_mDE96FAD5AAA752F2616E1AB0E4A00922E09FF093 (U3Cget_DeepChildrenU3Ed__45_tCD907C30A1B957DFC6A9DC8CFCC199DD51C378FA * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3Cget_DeepChildrenU3Ed__45_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_mA5A8FA8A38ADC1FA3EBCF738521CCE87F0788837(__this, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: SimpleJSON.JSONNode/Enumerator
IL2CPP_EXTERN_C void Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8_marshal_pinvoke(const Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8& unmarshaled, Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Object_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Object' of type 'Enumerator'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Object_1Exception, NULL);
}
IL2CPP_EXTERN_C void Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8_marshal_pinvoke_back(const Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8_marshaled_pinvoke& marshaled, Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8& unmarshaled)
{
	Exception_t* ___m_Object_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Object' of type 'Enumerator'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Object_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: SimpleJSON.JSONNode/Enumerator
IL2CPP_EXTERN_C void Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8_marshal_pinvoke_cleanup(Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: SimpleJSON.JSONNode/Enumerator
IL2CPP_EXTERN_C void Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8_marshal_com(const Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8& unmarshaled, Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8_marshaled_com& marshaled)
{
	Exception_t* ___m_Object_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Object' of type 'Enumerator'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Object_1Exception, NULL);
}
IL2CPP_EXTERN_C void Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8_marshal_com_back(const Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8_marshaled_com& marshaled, Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8& unmarshaled)
{
	Exception_t* ___m_Object_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Object' of type 'Enumerator'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Object_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: SimpleJSON.JSONNode/Enumerator
IL2CPP_EXTERN_C void Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8_marshal_com_cleanup(Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8_marshaled_com& marshaled)
{
}
// System.Boolean SimpleJSON.JSONNode/Enumerator::get_IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_get_IsValid_mFA3BB4B7F43B1005535936519FD3A42F5B23981E (Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsValid { get { return type != Type.None; } }
		int32_t L_0 = __this->get_type_0();
		return (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool Enumerator_get_IsValid_mFA3BB4B7F43B1005535936519FD3A42F5B23981E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8 *>(__this + _offset);
	bool _returnValue;
	_returnValue = Enumerator_get_IsValid_mFA3BB4B7F43B1005535936519FD3A42F5B23981E(_thisAdjusted, method);
	return _returnValue;
}
// System.Void SimpleJSON.JSONNode/Enumerator::.ctor(System.Collections.Generic.List`1/Enumerator<SimpleJSON.JSONNode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m057901299D85978F34E86C2B99997599C904516F (Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8 * __this, Enumerator_tDA1783FBD1372348634FED4EDC7396A489A211FA  ___aArrayEnum0, const RuntimeMethod* method)
{
	{
		// type = Type.Array;
		__this->set_type_0(1);
		// m_Object = default(Dictionary<string, JSONNode>.Enumerator);
		Enumerator_tCE541D75AA851CBCC2F41CB77FDD2C3DA76C09AC * L_0 = __this->get_address_of_m_Object_1();
		il2cpp_codegen_initobj(L_0, sizeof(Enumerator_tCE541D75AA851CBCC2F41CB77FDD2C3DA76C09AC ));
		// m_Array = aArrayEnum;
		Enumerator_tDA1783FBD1372348634FED4EDC7396A489A211FA  L_1 = ___aArrayEnum0;
		__this->set_m_Array_2(L_1);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator__ctor_m057901299D85978F34E86C2B99997599C904516F_AdjustorThunk (RuntimeObject * __this, Enumerator_tDA1783FBD1372348634FED4EDC7396A489A211FA  ___aArrayEnum0, const RuntimeMethod* method)
{
	Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8 *>(__this + _offset);
	Enumerator__ctor_m057901299D85978F34E86C2B99997599C904516F(_thisAdjusted, ___aArrayEnum0, method);
}
// System.Void SimpleJSON.JSONNode/Enumerator::.ctor(System.Collections.Generic.Dictionary`2/Enumerator<System.String,SimpleJSON.JSONNode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m1DBE7DBD0628D4C87A31D88096548AF2917CC576 (Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8 * __this, Enumerator_tCE541D75AA851CBCC2F41CB77FDD2C3DA76C09AC  ___aDictEnum0, const RuntimeMethod* method)
{
	{
		// type = Type.Object;
		__this->set_type_0(2);
		// m_Object = aDictEnum;
		Enumerator_tCE541D75AA851CBCC2F41CB77FDD2C3DA76C09AC  L_0 = ___aDictEnum0;
		__this->set_m_Object_1(L_0);
		// m_Array = default(List<JSONNode>.Enumerator);
		Enumerator_tDA1783FBD1372348634FED4EDC7396A489A211FA * L_1 = __this->get_address_of_m_Array_2();
		il2cpp_codegen_initobj(L_1, sizeof(Enumerator_tDA1783FBD1372348634FED4EDC7396A489A211FA ));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator__ctor_m1DBE7DBD0628D4C87A31D88096548AF2917CC576_AdjustorThunk (RuntimeObject * __this, Enumerator_tCE541D75AA851CBCC2F41CB77FDD2C3DA76C09AC  ___aDictEnum0, const RuntimeMethod* method)
{
	Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8 *>(__this + _offset);
	Enumerator__ctor_m1DBE7DBD0628D4C87A31D88096548AF2917CC576(_thisAdjusted, ___aDictEnum0, method);
}
// System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode> SimpleJSON.JSONNode/Enumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46  Enumerator_get_Current_mF9E718C3795EB611071FF790A62BB5CAFD377FA9 (Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m8D5B4B174FCF301C8B25C69BC26D7DF5BCAFFE72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mA04D9F0633F9986798A90E49F1AF69EBAE9466DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_mCCC7B7D252423D44D5C462671EF92285311CD04D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (type == Type.Array)
		int32_t L_0 = __this->get_type_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_001f;
		}
	}
	{
		// return new KeyValuePair<string, JSONNode>(string.Empty, m_Array.Current);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		Enumerator_tDA1783FBD1372348634FED4EDC7396A489A211FA * L_2 = __this->get_address_of_m_Array_2();
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_3;
		L_3 = Enumerator_get_Current_mA04D9F0633F9986798A90E49F1AF69EBAE9466DB_inline((Enumerator_tDA1783FBD1372348634FED4EDC7396A489A211FA *)L_2, /*hidden argument*/Enumerator_get_Current_mA04D9F0633F9986798A90E49F1AF69EBAE9466DB_RuntimeMethod_var);
		KeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46  L_4;
		memset((&L_4), 0, sizeof(L_4));
		KeyValuePair_2__ctor_mCCC7B7D252423D44D5C462671EF92285311CD04D((&L_4), L_1, L_3, /*hidden argument*/KeyValuePair_2__ctor_mCCC7B7D252423D44D5C462671EF92285311CD04D_RuntimeMethod_var);
		return L_4;
	}

IL_001f:
	{
		// else if (type == Type.Object)
		int32_t L_5 = __this->get_type_0();
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_0034;
		}
	}
	{
		// return m_Object.Current;
		Enumerator_tCE541D75AA851CBCC2F41CB77FDD2C3DA76C09AC * L_6 = __this->get_address_of_m_Object_1();
		KeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46  L_7;
		L_7 = Enumerator_get_Current_m8D5B4B174FCF301C8B25C69BC26D7DF5BCAFFE72_inline((Enumerator_tCE541D75AA851CBCC2F41CB77FDD2C3DA76C09AC *)L_6, /*hidden argument*/Enumerator_get_Current_m8D5B4B174FCF301C8B25C69BC26D7DF5BCAFFE72_RuntimeMethod_var);
		return L_7;
	}

IL_0034:
	{
		// return new KeyValuePair<string, JSONNode>(string.Empty, null);
		String_t* L_8 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		KeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46  L_9;
		memset((&L_9), 0, sizeof(L_9));
		KeyValuePair_2__ctor_mCCC7B7D252423D44D5C462671EF92285311CD04D((&L_9), L_8, (JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 *)NULL, /*hidden argument*/KeyValuePair_2__ctor_mCCC7B7D252423D44D5C462671EF92285311CD04D_RuntimeMethod_var);
		return L_9;
	}
}
IL2CPP_EXTERN_C  KeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46  Enumerator_get_Current_mF9E718C3795EB611071FF790A62BB5CAFD377FA9_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8 *>(__this + _offset);
	KeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46  _returnValue;
	_returnValue = Enumerator_get_Current_mF9E718C3795EB611071FF790A62BB5CAFD377FA9(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean SimpleJSON.JSONNode/Enumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m580CDFBD1C55B6794F5567E544DE9857A5618A6E (Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m2F43C4805222C8A5C8027DC246081895540A7D17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m425A5F4589B9E03CCCCA6245AF5F20FDADC90FAD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (type == Type.Array)
		int32_t L_0 = __this->get_type_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0015;
		}
	}
	{
		// return m_Array.MoveNext();
		Enumerator_tDA1783FBD1372348634FED4EDC7396A489A211FA * L_1 = __this->get_address_of_m_Array_2();
		bool L_2;
		L_2 = Enumerator_MoveNext_m425A5F4589B9E03CCCCA6245AF5F20FDADC90FAD((Enumerator_tDA1783FBD1372348634FED4EDC7396A489A211FA *)L_1, /*hidden argument*/Enumerator_MoveNext_m425A5F4589B9E03CCCCA6245AF5F20FDADC90FAD_RuntimeMethod_var);
		return L_2;
	}

IL_0015:
	{
		// else if (type == Type.Object)
		int32_t L_3 = __this->get_type_0();
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_002a;
		}
	}
	{
		// return m_Object.MoveNext();
		Enumerator_tCE541D75AA851CBCC2F41CB77FDD2C3DA76C09AC * L_4 = __this->get_address_of_m_Object_1();
		bool L_5;
		L_5 = Enumerator_MoveNext_m2F43C4805222C8A5C8027DC246081895540A7D17((Enumerator_tCE541D75AA851CBCC2F41CB77FDD2C3DA76C09AC *)L_4, /*hidden argument*/Enumerator_MoveNext_m2F43C4805222C8A5C8027DC246081895540A7D17_RuntimeMethod_var);
		return L_5;
	}

IL_002a:
	{
		// return false;
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Enumerator_MoveNext_m580CDFBD1C55B6794F5567E544DE9857A5618A6E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8 *>(__this + _offset);
	bool _returnValue;
	_returnValue = Enumerator_MoveNext_m580CDFBD1C55B6794F5567E544DE9857A5618A6E(_thisAdjusted, method);
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
IL2CPP_EXTERN_C void KeyEnumerator_t480359137170FD764CB75A243A787E1AEDF89585_marshal_pinvoke(const KeyEnumerator_t480359137170FD764CB75A243A787E1AEDF89585& unmarshaled, KeyEnumerator_t480359137170FD764CB75A243A787E1AEDF89585_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Enumerator_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Enumerator' of type 'KeyEnumerator'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Enumerator_0Exception, NULL);
}
IL2CPP_EXTERN_C void KeyEnumerator_t480359137170FD764CB75A243A787E1AEDF89585_marshal_pinvoke_back(const KeyEnumerator_t480359137170FD764CB75A243A787E1AEDF89585_marshaled_pinvoke& marshaled, KeyEnumerator_t480359137170FD764CB75A243A787E1AEDF89585& unmarshaled)
{
	Exception_t* ___m_Enumerator_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Enumerator' of type 'KeyEnumerator'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Enumerator_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: SimpleJSON.JSONNode/KeyEnumerator
IL2CPP_EXTERN_C void KeyEnumerator_t480359137170FD764CB75A243A787E1AEDF89585_marshal_pinvoke_cleanup(KeyEnumerator_t480359137170FD764CB75A243A787E1AEDF89585_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: SimpleJSON.JSONNode/KeyEnumerator
IL2CPP_EXTERN_C void KeyEnumerator_t480359137170FD764CB75A243A787E1AEDF89585_marshal_com(const KeyEnumerator_t480359137170FD764CB75A243A787E1AEDF89585& unmarshaled, KeyEnumerator_t480359137170FD764CB75A243A787E1AEDF89585_marshaled_com& marshaled)
{
	Exception_t* ___m_Enumerator_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Enumerator' of type 'KeyEnumerator'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Enumerator_0Exception, NULL);
}
IL2CPP_EXTERN_C void KeyEnumerator_t480359137170FD764CB75A243A787E1AEDF89585_marshal_com_back(const KeyEnumerator_t480359137170FD764CB75A243A787E1AEDF89585_marshaled_com& marshaled, KeyEnumerator_t480359137170FD764CB75A243A787E1AEDF89585& unmarshaled)
{
	Exception_t* ___m_Enumerator_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Enumerator' of type 'KeyEnumerator'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Enumerator_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: SimpleJSON.JSONNode/KeyEnumerator
IL2CPP_EXTERN_C void KeyEnumerator_t480359137170FD764CB75A243A787E1AEDF89585_marshal_com_cleanup(KeyEnumerator_t480359137170FD764CB75A243A787E1AEDF89585_marshaled_com& marshaled)
{
}
// System.Void SimpleJSON.JSONNode/KeyEnumerator::.ctor(System.Collections.Generic.List`1/Enumerator<SimpleJSON.JSONNode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyEnumerator__ctor_m13B6087FA46C7C03A3471C28B3FBC22DD4171FC7 (KeyEnumerator_t480359137170FD764CB75A243A787E1AEDF89585 * __this, Enumerator_tDA1783FBD1372348634FED4EDC7396A489A211FA  ___aArrayEnum0, const RuntimeMethod* method)
{
	{
		// public KeyEnumerator(List<JSONNode>.Enumerator aArrayEnum) : this(new Enumerator(aArrayEnum)) { }
		Enumerator_tDA1783FBD1372348634FED4EDC7396A489A211FA  L_0 = ___aArrayEnum0;
		Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_m057901299D85978F34E86C2B99997599C904516F((&L_1), L_0, /*hidden argument*/NULL);
		KeyEnumerator__ctor_m0747B3AC824951C3C8B818496CEDD6D88B9E7E8A_inline((KeyEnumerator_t480359137170FD764CB75A243A787E1AEDF89585 *)__this, L_1, /*hidden argument*/NULL);
		// public KeyEnumerator(List<JSONNode>.Enumerator aArrayEnum) : this(new Enumerator(aArrayEnum)) { }
		return;
	}
}
IL2CPP_EXTERN_C  void KeyEnumerator__ctor_m13B6087FA46C7C03A3471C28B3FBC22DD4171FC7_AdjustorThunk (RuntimeObject * __this, Enumerator_tDA1783FBD1372348634FED4EDC7396A489A211FA  ___aArrayEnum0, const RuntimeMethod* method)
{
	KeyEnumerator_t480359137170FD764CB75A243A787E1AEDF89585 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<KeyEnumerator_t480359137170FD764CB75A243A787E1AEDF89585 *>(__this + _offset);
	KeyEnumerator__ctor_m13B6087FA46C7C03A3471C28B3FBC22DD4171FC7(_thisAdjusted, ___aArrayEnum0, method);
}
// System.Void SimpleJSON.JSONNode/KeyEnumerator::.ctor(System.Collections.Generic.Dictionary`2/Enumerator<System.String,SimpleJSON.JSONNode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyEnumerator__ctor_mD48489EDADC6546248A26244922162520AD16C3B (KeyEnumerator_t480359137170FD764CB75A243A787E1AEDF89585 * __this, Enumerator_tCE541D75AA851CBCC2F41CB77FDD2C3DA76C09AC  ___aDictEnum0, const RuntimeMethod* method)
{
	{
		// public KeyEnumerator(Dictionary<string, JSONNode>.Enumerator aDictEnum) : this(new Enumerator(aDictEnum)) { }
		Enumerator_tCE541D75AA851CBCC2F41CB77FDD2C3DA76C09AC  L_0 = ___aDictEnum0;
		Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_m1DBE7DBD0628D4C87A31D88096548AF2917CC576((&L_1), L_0, /*hidden argument*/NULL);
		KeyEnumerator__ctor_m0747B3AC824951C3C8B818496CEDD6D88B9E7E8A_inline((KeyEnumerator_t480359137170FD764CB75A243A787E1AEDF89585 *)__this, L_1, /*hidden argument*/NULL);
		// public KeyEnumerator(Dictionary<string, JSONNode>.Enumerator aDictEnum) : this(new Enumerator(aDictEnum)) { }
		return;
	}
}
IL2CPP_EXTERN_C  void KeyEnumerator__ctor_mD48489EDADC6546248A26244922162520AD16C3B_AdjustorThunk (RuntimeObject * __this, Enumerator_tCE541D75AA851CBCC2F41CB77FDD2C3DA76C09AC  ___aDictEnum0, const RuntimeMethod* method)
{
	KeyEnumerator_t480359137170FD764CB75A243A787E1AEDF89585 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<KeyEnumerator_t480359137170FD764CB75A243A787E1AEDF89585 *>(__this + _offset);
	KeyEnumerator__ctor_mD48489EDADC6546248A26244922162520AD16C3B(_thisAdjusted, ___aDictEnum0, method);
}
// System.Void SimpleJSON.JSONNode/KeyEnumerator::.ctor(SimpleJSON.JSONNode/Enumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyEnumerator__ctor_m0747B3AC824951C3C8B818496CEDD6D88B9E7E8A (KeyEnumerator_t480359137170FD764CB75A243A787E1AEDF89585 * __this, Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8  ___aEnumerator0, const RuntimeMethod* method)
{
	{
		// public KeyEnumerator(Enumerator aEnumerator) { m_Enumerator = aEnumerator; }
		Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8  L_0 = ___aEnumerator0;
		__this->set_m_Enumerator_0(L_0);
		// public KeyEnumerator(Enumerator aEnumerator) { m_Enumerator = aEnumerator; }
		return;
	}
}
IL2CPP_EXTERN_C  void KeyEnumerator__ctor_m0747B3AC824951C3C8B818496CEDD6D88B9E7E8A_AdjustorThunk (RuntimeObject * __this, Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8  ___aEnumerator0, const RuntimeMethod* method)
{
	KeyEnumerator_t480359137170FD764CB75A243A787E1AEDF89585 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<KeyEnumerator_t480359137170FD764CB75A243A787E1AEDF89585 *>(__this + _offset);
	KeyEnumerator__ctor_m0747B3AC824951C3C8B818496CEDD6D88B9E7E8A_inline(_thisAdjusted, ___aEnumerator0, method);
}
// System.String SimpleJSON.JSONNode/KeyEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* KeyEnumerator_get_Current_mBF34CC35F2C34AC227D1621C8F0927D7C93AC26C (KeyEnumerator_t480359137170FD764CB75A243A787E1AEDF89585 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mD3950240DC492EBEB494BE0AEF2CB4223CFBA08D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public string Current { get { return m_Enumerator.Current.Key; } }
		Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8 * L_0 = __this->get_address_of_m_Enumerator_0();
		KeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46  L_1;
		L_1 = Enumerator_get_Current_mF9E718C3795EB611071FF790A62BB5CAFD377FA9((Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8 *)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2;
		L_2 = KeyValuePair_2_get_Key_mD3950240DC492EBEB494BE0AEF2CB4223CFBA08D_inline((KeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46 *)(&V_0), /*hidden argument*/KeyValuePair_2_get_Key_mD3950240DC492EBEB494BE0AEF2CB4223CFBA08D_RuntimeMethod_var);
		return L_2;
	}
}
IL2CPP_EXTERN_C  String_t* KeyEnumerator_get_Current_mBF34CC35F2C34AC227D1621C8F0927D7C93AC26C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyEnumerator_t480359137170FD764CB75A243A787E1AEDF89585 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<KeyEnumerator_t480359137170FD764CB75A243A787E1AEDF89585 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = KeyEnumerator_get_Current_mBF34CC35F2C34AC227D1621C8F0927D7C93AC26C(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean SimpleJSON.JSONNode/KeyEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KeyEnumerator_MoveNext_m99B9BF2D4062F287B8D3A55C2C691537CAFE6F98 (KeyEnumerator_t480359137170FD764CB75A243A787E1AEDF89585 * __this, const RuntimeMethod* method)
{
	{
		// public bool MoveNext() { return m_Enumerator.MoveNext(); }
		Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8 * L_0 = __this->get_address_of_m_Enumerator_0();
		bool L_1;
		L_1 = Enumerator_MoveNext_m580CDFBD1C55B6794F5567E544DE9857A5618A6E((Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8 *)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool KeyEnumerator_MoveNext_m99B9BF2D4062F287B8D3A55C2C691537CAFE6F98_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyEnumerator_t480359137170FD764CB75A243A787E1AEDF89585 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<KeyEnumerator_t480359137170FD764CB75A243A787E1AEDF89585 *>(__this + _offset);
	bool _returnValue;
	_returnValue = KeyEnumerator_MoveNext_m99B9BF2D4062F287B8D3A55C2C691537CAFE6F98(_thisAdjusted, method);
	return _returnValue;
}
// SimpleJSON.JSONNode/KeyEnumerator SimpleJSON.JSONNode/KeyEnumerator::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyEnumerator_t480359137170FD764CB75A243A787E1AEDF89585  KeyEnumerator_GetEnumerator_m0243DD23679D98AE2F30AD67FFFD4E27A16AB170 (KeyEnumerator_t480359137170FD764CB75A243A787E1AEDF89585 * __this, const RuntimeMethod* method)
{
	{
		// public KeyEnumerator GetEnumerator() { return this; }
		KeyEnumerator_t480359137170FD764CB75A243A787E1AEDF89585  L_0 = (*(KeyEnumerator_t480359137170FD764CB75A243A787E1AEDF89585 *)__this);
		return L_0;
	}
}
IL2CPP_EXTERN_C  KeyEnumerator_t480359137170FD764CB75A243A787E1AEDF89585  KeyEnumerator_GetEnumerator_m0243DD23679D98AE2F30AD67FFFD4E27A16AB170_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyEnumerator_t480359137170FD764CB75A243A787E1AEDF89585 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<KeyEnumerator_t480359137170FD764CB75A243A787E1AEDF89585 *>(__this + _offset);
	KeyEnumerator_t480359137170FD764CB75A243A787E1AEDF89585  _returnValue;
	_returnValue = KeyEnumerator_GetEnumerator_m0243DD23679D98AE2F30AD67FFFD4E27A16AB170(_thisAdjusted, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinqEnumerator__ctor_m3B100A94EC3DF14B4A94AE12D32050F84E72F65B (LinqEnumerator_t45B8943C727186418953AAB476E680E60C03D038 * __this, JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * ___aNode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal LinqEnumerator(JSONNode aNode)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// m_Node = aNode;
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_0 = ___aNode0;
		__this->set_m_Node_0(L_0);
		// if (m_Node != null)
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_1 = __this->get_m_Node_0();
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = JSONNode_op_Inequality_m22851EA8F1ED30D4A1B977CD92AFEEB246DD098A(L_1, NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		// m_Enumerator = m_Node.GetEnumerator();
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_3 = __this->get_m_Node_0();
		NullCheck(L_3);
		Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8  L_4;
		L_4 = VirtualFuncInvoker0< Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8  >::Invoke(32 /* SimpleJSON.JSONNode/Enumerator SimpleJSON.JSONNode::GetEnumerator() */, L_3);
		__this->set_m_Enumerator_1(L_4);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode> SimpleJSON.JSONNode/LinqEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46  LinqEnumerator_get_Current_m414843B6351637AAAF627AAD81880DE4BFD61353 (LinqEnumerator_t45B8943C727186418953AAB476E680E60C03D038 * __this, const RuntimeMethod* method)
{
	{
		// public KeyValuePair<string, JSONNode> Current { get { return m_Enumerator.Current; } }
		Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8 * L_0 = __this->get_address_of_m_Enumerator_1();
		KeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46  L_1;
		L_1 = Enumerator_get_Current_mF9E718C3795EB611071FF790A62BB5CAFD377FA9((Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8 *)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Object SimpleJSON.JSONNode/LinqEnumerator::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * LinqEnumerator_System_Collections_IEnumerator_get_Current_m7F2D3716F0A2DAB0E37902FCC792A31BF9063758 (LinqEnumerator_t45B8943C727186418953AAB476E680E60C03D038 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object IEnumerator.Current { get { return m_Enumerator.Current; } }
		Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8 * L_0 = __this->get_address_of_m_Enumerator_1();
		KeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46  L_1;
		L_1 = Enumerator_get_Current_mF9E718C3795EB611071FF790A62BB5CAFD377FA9((Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8 *)L_0, /*hidden argument*/NULL);
		KeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46  L_2 = L_1;
		RuntimeObject * L_3 = Box(KeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Boolean SimpleJSON.JSONNode/LinqEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LinqEnumerator_MoveNext_mC600DAAECE627F2900FA1975C41E3D95F79E30F5 (LinqEnumerator_t45B8943C727186418953AAB476E680E60C03D038 * __this, const RuntimeMethod* method)
{
	{
		// public bool MoveNext() { return m_Enumerator.MoveNext(); }
		Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8 * L_0 = __this->get_address_of_m_Enumerator_1();
		bool L_1;
		L_1 = Enumerator_MoveNext_m580CDFBD1C55B6794F5567E544DE9857A5618A6E((Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8 *)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void SimpleJSON.JSONNode/LinqEnumerator::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinqEnumerator_Dispose_m1E091AD169C66B9DA526BA37FFC6DC662ECE3272 (LinqEnumerator_t45B8943C727186418953AAB476E680E60C03D038 * __this, const RuntimeMethod* method)
{
	{
		// m_Node = null;
		__this->set_m_Node_0((JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 *)NULL);
		// m_Enumerator = new Enumerator();
		Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8 * L_0 = __this->get_address_of_m_Enumerator_1();
		il2cpp_codegen_initobj(L_0, sizeof(Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8 ));
		// }
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>> SimpleJSON.JSONNode/LinqEnumerator::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LinqEnumerator_GetEnumerator_m8EE24F869680079C3280C231400F84085414E93E (LinqEnumerator_t45B8943C727186418953AAB476E680E60C03D038 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinqEnumerator_t45B8943C727186418953AAB476E680E60C03D038_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new LinqEnumerator(m_Node);
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_0 = __this->get_m_Node_0();
		LinqEnumerator_t45B8943C727186418953AAB476E680E60C03D038 * L_1 = (LinqEnumerator_t45B8943C727186418953AAB476E680E60C03D038 *)il2cpp_codegen_object_new(LinqEnumerator_t45B8943C727186418953AAB476E680E60C03D038_il2cpp_TypeInfo_var);
		LinqEnumerator__ctor_m3B100A94EC3DF14B4A94AE12D32050F84E72F65B(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void SimpleJSON.JSONNode/LinqEnumerator::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinqEnumerator_Reset_m5412BB4216090D65D10EE8E9E3D3006CAC45C43C (LinqEnumerator_t45B8943C727186418953AAB476E680E60C03D038 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Node != null)
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_0 = __this->get_m_Node_0();
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = JSONNode_op_Inequality_m22851EA8F1ED30D4A1B977CD92AFEEB246DD098A(L_0, NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// m_Enumerator = m_Node.GetEnumerator();
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_2 = __this->get_m_Node_0();
		NullCheck(L_2);
		Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8  L_3;
		L_3 = VirtualFuncInvoker0< Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8  >::Invoke(32 /* SimpleJSON.JSONNode/Enumerator SimpleJSON.JSONNode::GetEnumerator() */, L_2);
		__this->set_m_Enumerator_1(L_3);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator SimpleJSON.JSONNode/LinqEnumerator::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LinqEnumerator_System_Collections_IEnumerable_GetEnumerator_m74AF45D293634ECACC82EE9CB8987984DB4E6968 (LinqEnumerator_t45B8943C727186418953AAB476E680E60C03D038 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LinqEnumerator_t45B8943C727186418953AAB476E680E60C03D038_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new LinqEnumerator(m_Node);
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_0 = __this->get_m_Node_0();
		LinqEnumerator_t45B8943C727186418953AAB476E680E60C03D038 * L_1 = (LinqEnumerator_t45B8943C727186418953AAB476E680E60C03D038 *)il2cpp_codegen_object_new(LinqEnumerator_t45B8943C727186418953AAB476E680E60C03D038_il2cpp_TypeInfo_var);
		LinqEnumerator__ctor_m3B100A94EC3DF14B4A94AE12D32050F84E72F65B(L_1, L_0, /*hidden argument*/NULL);
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


// Conversion methods for marshalling of: SimpleJSON.JSONNode/ValueEnumerator
IL2CPP_EXTERN_C void ValueEnumerator_tF3B99F2AF4F29E348D9CEF62A42AF04D04DB0C61_marshal_pinvoke(const ValueEnumerator_tF3B99F2AF4F29E348D9CEF62A42AF04D04DB0C61& unmarshaled, ValueEnumerator_tF3B99F2AF4F29E348D9CEF62A42AF04D04DB0C61_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Enumerator_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Enumerator' of type 'ValueEnumerator'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Enumerator_0Exception, NULL);
}
IL2CPP_EXTERN_C void ValueEnumerator_tF3B99F2AF4F29E348D9CEF62A42AF04D04DB0C61_marshal_pinvoke_back(const ValueEnumerator_tF3B99F2AF4F29E348D9CEF62A42AF04D04DB0C61_marshaled_pinvoke& marshaled, ValueEnumerator_tF3B99F2AF4F29E348D9CEF62A42AF04D04DB0C61& unmarshaled)
{
	Exception_t* ___m_Enumerator_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Enumerator' of type 'ValueEnumerator'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Enumerator_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: SimpleJSON.JSONNode/ValueEnumerator
IL2CPP_EXTERN_C void ValueEnumerator_tF3B99F2AF4F29E348D9CEF62A42AF04D04DB0C61_marshal_pinvoke_cleanup(ValueEnumerator_tF3B99F2AF4F29E348D9CEF62A42AF04D04DB0C61_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: SimpleJSON.JSONNode/ValueEnumerator
IL2CPP_EXTERN_C void ValueEnumerator_tF3B99F2AF4F29E348D9CEF62A42AF04D04DB0C61_marshal_com(const ValueEnumerator_tF3B99F2AF4F29E348D9CEF62A42AF04D04DB0C61& unmarshaled, ValueEnumerator_tF3B99F2AF4F29E348D9CEF62A42AF04D04DB0C61_marshaled_com& marshaled)
{
	Exception_t* ___m_Enumerator_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Enumerator' of type 'ValueEnumerator'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Enumerator_0Exception, NULL);
}
IL2CPP_EXTERN_C void ValueEnumerator_tF3B99F2AF4F29E348D9CEF62A42AF04D04DB0C61_marshal_com_back(const ValueEnumerator_tF3B99F2AF4F29E348D9CEF62A42AF04D04DB0C61_marshaled_com& marshaled, ValueEnumerator_tF3B99F2AF4F29E348D9CEF62A42AF04D04DB0C61& unmarshaled)
{
	Exception_t* ___m_Enumerator_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Enumerator' of type 'ValueEnumerator'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Enumerator_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: SimpleJSON.JSONNode/ValueEnumerator
IL2CPP_EXTERN_C void ValueEnumerator_tF3B99F2AF4F29E348D9CEF62A42AF04D04DB0C61_marshal_com_cleanup(ValueEnumerator_tF3B99F2AF4F29E348D9CEF62A42AF04D04DB0C61_marshaled_com& marshaled)
{
}
// System.Void SimpleJSON.JSONNode/ValueEnumerator::.ctor(System.Collections.Generic.List`1/Enumerator<SimpleJSON.JSONNode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueEnumerator__ctor_m9E8A702BF30F549C55B441B43EBBF823D1F8C3AF (ValueEnumerator_tF3B99F2AF4F29E348D9CEF62A42AF04D04DB0C61 * __this, Enumerator_tDA1783FBD1372348634FED4EDC7396A489A211FA  ___aArrayEnum0, const RuntimeMethod* method)
{
	{
		// public ValueEnumerator(List<JSONNode>.Enumerator aArrayEnum) : this(new Enumerator(aArrayEnum)) { }
		Enumerator_tDA1783FBD1372348634FED4EDC7396A489A211FA  L_0 = ___aArrayEnum0;
		Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_m057901299D85978F34E86C2B99997599C904516F((&L_1), L_0, /*hidden argument*/NULL);
		ValueEnumerator__ctor_mCB3648E562A32EEA21FD3F4DB8C20160ED03722E_inline((ValueEnumerator_tF3B99F2AF4F29E348D9CEF62A42AF04D04DB0C61 *)__this, L_1, /*hidden argument*/NULL);
		// public ValueEnumerator(List<JSONNode>.Enumerator aArrayEnum) : this(new Enumerator(aArrayEnum)) { }
		return;
	}
}
IL2CPP_EXTERN_C  void ValueEnumerator__ctor_m9E8A702BF30F549C55B441B43EBBF823D1F8C3AF_AdjustorThunk (RuntimeObject * __this, Enumerator_tDA1783FBD1372348634FED4EDC7396A489A211FA  ___aArrayEnum0, const RuntimeMethod* method)
{
	ValueEnumerator_tF3B99F2AF4F29E348D9CEF62A42AF04D04DB0C61 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueEnumerator_tF3B99F2AF4F29E348D9CEF62A42AF04D04DB0C61 *>(__this + _offset);
	ValueEnumerator__ctor_m9E8A702BF30F549C55B441B43EBBF823D1F8C3AF(_thisAdjusted, ___aArrayEnum0, method);
}
// System.Void SimpleJSON.JSONNode/ValueEnumerator::.ctor(System.Collections.Generic.Dictionary`2/Enumerator<System.String,SimpleJSON.JSONNode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueEnumerator__ctor_mD13470952E4791B2DC48D9A64AD1735248EC0AF2 (ValueEnumerator_tF3B99F2AF4F29E348D9CEF62A42AF04D04DB0C61 * __this, Enumerator_tCE541D75AA851CBCC2F41CB77FDD2C3DA76C09AC  ___aDictEnum0, const RuntimeMethod* method)
{
	{
		// public ValueEnumerator(Dictionary<string, JSONNode>.Enumerator aDictEnum) : this(new Enumerator(aDictEnum)) { }
		Enumerator_tCE541D75AA851CBCC2F41CB77FDD2C3DA76C09AC  L_0 = ___aDictEnum0;
		Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_m1DBE7DBD0628D4C87A31D88096548AF2917CC576((&L_1), L_0, /*hidden argument*/NULL);
		ValueEnumerator__ctor_mCB3648E562A32EEA21FD3F4DB8C20160ED03722E_inline((ValueEnumerator_tF3B99F2AF4F29E348D9CEF62A42AF04D04DB0C61 *)__this, L_1, /*hidden argument*/NULL);
		// public ValueEnumerator(Dictionary<string, JSONNode>.Enumerator aDictEnum) : this(new Enumerator(aDictEnum)) { }
		return;
	}
}
IL2CPP_EXTERN_C  void ValueEnumerator__ctor_mD13470952E4791B2DC48D9A64AD1735248EC0AF2_AdjustorThunk (RuntimeObject * __this, Enumerator_tCE541D75AA851CBCC2F41CB77FDD2C3DA76C09AC  ___aDictEnum0, const RuntimeMethod* method)
{
	ValueEnumerator_tF3B99F2AF4F29E348D9CEF62A42AF04D04DB0C61 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueEnumerator_tF3B99F2AF4F29E348D9CEF62A42AF04D04DB0C61 *>(__this + _offset);
	ValueEnumerator__ctor_mD13470952E4791B2DC48D9A64AD1735248EC0AF2(_thisAdjusted, ___aDictEnum0, method);
}
// System.Void SimpleJSON.JSONNode/ValueEnumerator::.ctor(SimpleJSON.JSONNode/Enumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueEnumerator__ctor_mCB3648E562A32EEA21FD3F4DB8C20160ED03722E (ValueEnumerator_tF3B99F2AF4F29E348D9CEF62A42AF04D04DB0C61 * __this, Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8  ___aEnumerator0, const RuntimeMethod* method)
{
	{
		// public ValueEnumerator(Enumerator aEnumerator) { m_Enumerator = aEnumerator; }
		Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8  L_0 = ___aEnumerator0;
		__this->set_m_Enumerator_0(L_0);
		// public ValueEnumerator(Enumerator aEnumerator) { m_Enumerator = aEnumerator; }
		return;
	}
}
IL2CPP_EXTERN_C  void ValueEnumerator__ctor_mCB3648E562A32EEA21FD3F4DB8C20160ED03722E_AdjustorThunk (RuntimeObject * __this, Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8  ___aEnumerator0, const RuntimeMethod* method)
{
	ValueEnumerator_tF3B99F2AF4F29E348D9CEF62A42AF04D04DB0C61 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueEnumerator_tF3B99F2AF4F29E348D9CEF62A42AF04D04DB0C61 *>(__this + _offset);
	ValueEnumerator__ctor_mCB3648E562A32EEA21FD3F4DB8C20160ED03722E_inline(_thisAdjusted, ___aEnumerator0, method);
}
// SimpleJSON.JSONNode SimpleJSON.JSONNode/ValueEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * ValueEnumerator_get_Current_mF69BBD9003C127D62E50E3A2AB4179EA3863B710 (ValueEnumerator_tF3B99F2AF4F29E348D9CEF62A42AF04D04DB0C61 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mD27150EA5031B873539FD3D826C77219F3FFE044_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public JSONNode Current { get { return m_Enumerator.Current.Value; } }
		Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8 * L_0 = __this->get_address_of_m_Enumerator_0();
		KeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46  L_1;
		L_1 = Enumerator_get_Current_mF9E718C3795EB611071FF790A62BB5CAFD377FA9((Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8 *)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_2;
		L_2 = KeyValuePair_2_get_Value_mD27150EA5031B873539FD3D826C77219F3FFE044_inline((KeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46 *)(&V_0), /*hidden argument*/KeyValuePair_2_get_Value_mD27150EA5031B873539FD3D826C77219F3FFE044_RuntimeMethod_var);
		return L_2;
	}
}
IL2CPP_EXTERN_C  JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * ValueEnumerator_get_Current_mF69BBD9003C127D62E50E3A2AB4179EA3863B710_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	ValueEnumerator_tF3B99F2AF4F29E348D9CEF62A42AF04D04DB0C61 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueEnumerator_tF3B99F2AF4F29E348D9CEF62A42AF04D04DB0C61 *>(__this + _offset);
	JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * _returnValue;
	_returnValue = ValueEnumerator_get_Current_mF69BBD9003C127D62E50E3A2AB4179EA3863B710(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean SimpleJSON.JSONNode/ValueEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueEnumerator_MoveNext_mFBBE4BD2BD4BEDC52A09992FFB2BE22E61571C4B (ValueEnumerator_tF3B99F2AF4F29E348D9CEF62A42AF04D04DB0C61 * __this, const RuntimeMethod* method)
{
	{
		// public bool MoveNext() { return m_Enumerator.MoveNext(); }
		Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8 * L_0 = __this->get_address_of_m_Enumerator_0();
		bool L_1;
		L_1 = Enumerator_MoveNext_m580CDFBD1C55B6794F5567E544DE9857A5618A6E((Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8 *)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool ValueEnumerator_MoveNext_mFBBE4BD2BD4BEDC52A09992FFB2BE22E61571C4B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	ValueEnumerator_tF3B99F2AF4F29E348D9CEF62A42AF04D04DB0C61 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueEnumerator_tF3B99F2AF4F29E348D9CEF62A42AF04D04DB0C61 *>(__this + _offset);
	bool _returnValue;
	_returnValue = ValueEnumerator_MoveNext_mFBBE4BD2BD4BEDC52A09992FFB2BE22E61571C4B(_thisAdjusted, method);
	return _returnValue;
}
// SimpleJSON.JSONNode/ValueEnumerator SimpleJSON.JSONNode/ValueEnumerator::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueEnumerator_tF3B99F2AF4F29E348D9CEF62A42AF04D04DB0C61  ValueEnumerator_GetEnumerator_mB4E3F0A6AC7AA6140B861775571A15036BECB254 (ValueEnumerator_tF3B99F2AF4F29E348D9CEF62A42AF04D04DB0C61 * __this, const RuntimeMethod* method)
{
	{
		// public ValueEnumerator GetEnumerator() { return this; }
		ValueEnumerator_tF3B99F2AF4F29E348D9CEF62A42AF04D04DB0C61  L_0 = (*(ValueEnumerator_tF3B99F2AF4F29E348D9CEF62A42AF04D04DB0C61 *)__this);
		return L_0;
	}
}
IL2CPP_EXTERN_C  ValueEnumerator_tF3B99F2AF4F29E348D9CEF62A42AF04D04DB0C61  ValueEnumerator_GetEnumerator_mB4E3F0A6AC7AA6140B861775571A15036BECB254_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	ValueEnumerator_tF3B99F2AF4F29E348D9CEF62A42AF04D04DB0C61 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ValueEnumerator_tF3B99F2AF4F29E348D9CEF62A42AF04D04DB0C61 *>(__this + _offset);
	ValueEnumerator_tF3B99F2AF4F29E348D9CEF62A42AF04D04DB0C61  _returnValue;
	_returnValue = ValueEnumerator_GetEnumerator_mB4E3F0A6AC7AA6140B861775571A15036BECB254(_thisAdjusted, method);
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
// System.Void SimpleJSON.JSONObject/<>c__DisplayClass21_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0__ctor_mE55EB0815ED94FB7DA4223EB2B1D83A792D49444 (U3CU3Ec__DisplayClass21_0_t5F3C45E238AB19808012EFB4181E62F4DCED84CC * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean SimpleJSON.JSONObject/<>c__DisplayClass21_0::<Remove>b__0(System.Collections.Generic.KeyValuePair`2<System.String,SimpleJSON.JSONNode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass21_0_U3CRemoveU3Eb__0_m32C80D793500A7AD9747C4B9BEF7E5902322DC8D (U3CU3Ec__DisplayClass21_0_t5F3C45E238AB19808012EFB4181E62F4DCED84CC * __this, KeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46  ___k0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mD27150EA5031B873539FD3D826C77219F3FFE044_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var item = m_Dict.Where(k => k.Value == aNode).First();
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_0;
		L_0 = KeyValuePair_2_get_Value_mD27150EA5031B873539FD3D826C77219F3FFE044_inline((KeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46 *)(&___k0), /*hidden argument*/KeyValuePair_2_get_Value_mD27150EA5031B873539FD3D826C77219F3FFE044_RuntimeMethod_var);
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_1 = __this->get_aNode_0();
		IL2CPP_RUNTIME_CLASS_INIT(JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = JSONNode_op_Equality_mEB349D8644B8E3F87CD33A35457A00480EFB329A(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void SimpleJSON.JSONObject/<get_Children>d__27::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__27__ctor_m999A61696E996872553914C6C4D8E86DFA4E7CFC (U3Cget_ChildrenU3Ed__27_tBAFD832B8A29905C1FDBEF21DACF57DF3850E73E * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void SimpleJSON.JSONObject/<get_Children>d__27::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__27_System_IDisposable_Dispose_mD5D0D2897E7A2CB0C11B9AFB1CFE8691E117CB66 (U3Cget_ChildrenU3Ed__27_tBAFD832B8A29905C1FDBEF21DACF57DF3850E73E * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
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

IL_0011:
	try
	{// begin try (depth: 1)
		IL2CPP_LEAVE(0x1A, FINALLY_0013);
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0013;
	}

FINALLY_0013:
	{// begin finally (depth: 1)
		U3Cget_ChildrenU3Ed__27_U3CU3Em__Finally1_m9A4036B7026E7B3B412A965843E786D6D81A30C7(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(19)
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(19)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean SimpleJSON.JSONObject/<get_Children>d__27::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Cget_ChildrenU3Ed__27_MoveNext_m8117B92814C45C804FCCDC38206177FB9449514F (U3Cget_ChildrenU3Ed__27_tBAFD832B8A29905C1FDBEF21DACF57DF3850E73E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_mDCF3F7F20F872ADC03A74F11C55EB2B702EF2441_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m2F43C4805222C8A5C8027DC246081895540A7D17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m8D5B4B174FCF301C8B25C69BC26D7DF5BCAFFE72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mD27150EA5031B873539FD3D826C77219F3FFE044_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	JSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1 * V_2 = NULL;
	KeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;

IL_0000:
	try
	{// begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			JSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1 * L_1 = __this->get_U3CU3E4__this_3();
			V_2 = L_1;
			int32_t L_2 = V_1;
			if (!L_2)
			{
				goto IL_0019;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_1;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_005f;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			goto IL_0091;
		}

IL_0019:
		{
			__this->set_U3CU3E1__state_0((-1));
			// foreach (KeyValuePair<string, JSONNode> N in m_Dict)
			JSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1 * L_4 = V_2;
			NullCheck(L_4);
			Dictionary_2_tAFDD9B13B8A8D35E8017B1AD49EE8DCF947CD740 * L_5 = L_4->get_m_Dict_4();
			NullCheck(L_5);
			Enumerator_tCE541D75AA851CBCC2F41CB77FDD2C3DA76C09AC  L_6;
			L_6 = Dictionary_2_GetEnumerator_mDCF3F7F20F872ADC03A74F11C55EB2B702EF2441(L_5, /*hidden argument*/Dictionary_2_GetEnumerator_mDCF3F7F20F872ADC03A74F11C55EB2B702EF2441_RuntimeMethod_var);
			__this->set_U3CU3E7__wrap1_4(L_6);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_0067;
		}

IL_003b:
		{
			// foreach (KeyValuePair<string, JSONNode> N in m_Dict)
			Enumerator_tCE541D75AA851CBCC2F41CB77FDD2C3DA76C09AC * L_7 = __this->get_address_of_U3CU3E7__wrap1_4();
			KeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46  L_8;
			L_8 = Enumerator_get_Current_m8D5B4B174FCF301C8B25C69BC26D7DF5BCAFFE72_inline((Enumerator_tCE541D75AA851CBCC2F41CB77FDD2C3DA76C09AC *)L_7, /*hidden argument*/Enumerator_get_Current_m8D5B4B174FCF301C8B25C69BC26D7DF5BCAFFE72_RuntimeMethod_var);
			V_3 = L_8;
			// yield return N.Value;
			JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_9;
			L_9 = KeyValuePair_2_get_Value_mD27150EA5031B873539FD3D826C77219F3FFE044_inline((KeyValuePair_2_t7342D2F6B67041D137B9F2482D6A59A321C76B46 *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Value_mD27150EA5031B873539FD3D826C77219F3FFE044_RuntimeMethod_var);
			__this->set_U3CU3E2__current_1(L_9);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_0091;
		}

IL_005f:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
		}

IL_0067:
		{
			// foreach (KeyValuePair<string, JSONNode> N in m_Dict)
			Enumerator_tCE541D75AA851CBCC2F41CB77FDD2C3DA76C09AC * L_10 = __this->get_address_of_U3CU3E7__wrap1_4();
			bool L_11;
			L_11 = Enumerator_MoveNext_m2F43C4805222C8A5C8027DC246081895540A7D17((Enumerator_tCE541D75AA851CBCC2F41CB77FDD2C3DA76C09AC *)L_10, /*hidden argument*/Enumerator_MoveNext_m2F43C4805222C8A5C8027DC246081895540A7D17_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_003b;
			}
		}

IL_0074:
		{
			U3Cget_ChildrenU3Ed__27_U3CU3Em__Finally1_m9A4036B7026E7B3B412A965843E786D6D81A30C7(__this, /*hidden argument*/NULL);
			Enumerator_tCE541D75AA851CBCC2F41CB77FDD2C3DA76C09AC * L_12 = __this->get_address_of_U3CU3E7__wrap1_4();
			il2cpp_codegen_initobj(L_12, sizeof(Enumerator_tCE541D75AA851CBCC2F41CB77FDD2C3DA76C09AC ));
			// }
			V_0 = (bool)0;
			goto IL_0091;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_008a;
	}

FAULT_008a:
	{// begin fault (depth: 1)
		U3Cget_ChildrenU3Ed__27_System_IDisposable_Dispose_mD5D0D2897E7A2CB0C11B9AFB1CFE8691E117CB66(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(138)
	}// end fault
	IL2CPP_CLEANUP(138)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0091:
	{
		bool L_13 = V_0;
		return L_13;
	}
}
// System.Void SimpleJSON.JSONObject/<get_Children>d__27::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__27_U3CU3Em__Finally1_m9A4036B7026E7B3B412A965843E786D6D81A30C7 (U3Cget_ChildrenU3Ed__27_tBAFD832B8A29905C1FDBEF21DACF57DF3850E73E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m69943D9522B275330B702DE01A3289247FFFE383_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		Enumerator_tCE541D75AA851CBCC2F41CB77FDD2C3DA76C09AC * L_0 = __this->get_address_of_U3CU3E7__wrap1_4();
		Enumerator_Dispose_m69943D9522B275330B702DE01A3289247FFFE383((Enumerator_tCE541D75AA851CBCC2F41CB77FDD2C3DA76C09AC *)L_0, /*hidden argument*/Enumerator_Dispose_m69943D9522B275330B702DE01A3289247FFFE383_RuntimeMethod_var);
		return;
	}
}
// SimpleJSON.JSONNode SimpleJSON.JSONObject/<get_Children>d__27::System.Collections.Generic.IEnumerator<SimpleJSON.JSONNode>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * U3Cget_ChildrenU3Ed__27_System_Collections_Generic_IEnumeratorU3CSimpleJSON_JSONNodeU3E_get_Current_mD424058C691E3F240D27800AC2C209CF52CD73A3 (U3Cget_ChildrenU3Ed__27_tBAFD832B8A29905C1FDBEF21DACF57DF3850E73E * __this, const RuntimeMethod* method)
{
	{
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void SimpleJSON.JSONObject/<get_Children>d__27::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__27_System_Collections_IEnumerator_Reset_m83797D1841A982D0DF67F7E0CE31FCA5429867C0 (U3Cget_ChildrenU3Ed__27_tBAFD832B8A29905C1FDBEF21DACF57DF3850E73E * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3Cget_ChildrenU3Ed__27_System_Collections_IEnumerator_Reset_m83797D1841A982D0DF67F7E0CE31FCA5429867C0_RuntimeMethod_var)));
	}
}
// System.Object SimpleJSON.JSONObject/<get_Children>d__27::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3Cget_ChildrenU3Ed__27_System_Collections_IEnumerator_get_Current_mA7C7835930FAE15E2D7A3DA5956C8D7D1B58DBC7 (U3Cget_ChildrenU3Ed__27_tBAFD832B8A29905C1FDBEF21DACF57DF3850E73E * __this, const RuntimeMethod* method)
{
	{
		JSONNode_t323405B8D0CBFDE18F9CA898D127407E729FF043 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<SimpleJSON.JSONNode> SimpleJSON.JSONObject/<get_Children>d__27::System.Collections.Generic.IEnumerable<SimpleJSON.JSONNode>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildrenU3Ed__27_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_mEA40F1676AB5798F64BAB7F4981576428D0872E0 (U3Cget_ChildrenU3Ed__27_tBAFD832B8A29905C1FDBEF21DACF57DF3850E73E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3Cget_ChildrenU3Ed__27_tBAFD832B8A29905C1FDBEF21DACF57DF3850E73E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3Cget_ChildrenU3Ed__27_tBAFD832B8A29905C1FDBEF21DACF57DF3850E73E * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3Cget_ChildrenU3Ed__27_tBAFD832B8A29905C1FDBEF21DACF57DF3850E73E * L_3 = (U3Cget_ChildrenU3Ed__27_tBAFD832B8A29905C1FDBEF21DACF57DF3850E73E *)il2cpp_codegen_object_new(U3Cget_ChildrenU3Ed__27_tBAFD832B8A29905C1FDBEF21DACF57DF3850E73E_il2cpp_TypeInfo_var);
		U3Cget_ChildrenU3Ed__27__ctor_m999A61696E996872553914C6C4D8E86DFA4E7CFC(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
		U3Cget_ChildrenU3Ed__27_tBAFD832B8A29905C1FDBEF21DACF57DF3850E73E * L_4 = V_0;
		JSONObject_tA8D89EE5BC717C7DA2EBCA3BA7D90CCCB53569D1 * L_5 = __this->get_U3CU3E4__this_3();
		NullCheck(L_4);
		L_4->set_U3CU3E4__this_3(L_5);
	}

IL_0035:
	{
		U3Cget_ChildrenU3Ed__27_tBAFD832B8A29905C1FDBEF21DACF57DF3850E73E * L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator SimpleJSON.JSONObject/<get_Children>d__27::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildrenU3Ed__27_System_Collections_IEnumerable_GetEnumerator_mEC01C05CF59AE3DC21A824295228BD67F4B55E01 (U3Cget_ChildrenU3Ed__27_tBAFD832B8A29905C1FDBEF21DACF57DF3850E73E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3Cget_ChildrenU3Ed__27_System_Collections_Generic_IEnumerableU3CSimpleJSON_JSONNodeU3E_GetEnumerator_mEA40F1676AB5798F64BAB7F4981576428D0872E0(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyEnumerator__ctor_m0747B3AC824951C3C8B818496CEDD6D88B9E7E8A_inline (KeyEnumerator_t480359137170FD764CB75A243A787E1AEDF89585 * __this, Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8  ___aEnumerator0, const RuntimeMethod* method)
{
	{
		// public KeyEnumerator(Enumerator aEnumerator) { m_Enumerator = aEnumerator; }
		Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8  L_0 = ___aEnumerator0;
		__this->set_m_Enumerator_0(L_0);
		// public KeyEnumerator(Enumerator aEnumerator) { m_Enumerator = aEnumerator; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueEnumerator__ctor_mCB3648E562A32EEA21FD3F4DB8C20160ED03722E_inline (ValueEnumerator_tF3B99F2AF4F29E348D9CEF62A42AF04D04DB0C61 * __this, Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8  ___aEnumerator0, const RuntimeMethod* method)
{
	{
		// public ValueEnumerator(Enumerator aEnumerator) { m_Enumerator = aEnumerator; }
		Enumerator_tF163ECD99FD283D3ED0FCFE2FC9B43AC0EAEE5E8  L_0 = ___aEnumerator0;
		__this->set_m_Enumerator_0(L_0);
		// public ValueEnumerator(Enumerator aEnumerator) { m_Enumerator = aEnumerator; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_m7B5E3383CB67492E573AC0D875ED82A51350F188_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m4C91D0E84532DF10C654917487D82CB0AB27693B_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m8425596BB4249956819960EC76E618357F573E76_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mFD1C100DE65847CAB033057C77027AA5DB427B54_gshared_inline (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_1();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mEFB776105F87A4EAB1CAC3F0C96C4D0B79F3F03D_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m39BB9CD07FEC0DBEDFE938630364A23C9A87FC3F_gshared_inline (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_0 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )__this->get_current_3();
		return (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_0;
	}
}
