﻿#include "il2cpp-config.h"

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

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// Microsoft.MixedReality.Toolkit.BaseCoreSystem
struct BaseCoreSystem_t1B04DCFA7545A86EAA41A8085969CD32B674EF7F;
// Microsoft.MixedReality.Toolkit.BaseEventSystem
struct BaseEventSystem_tC4ADB21EAC9DA95E3A19A458B5CA298A1D51707A;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_t94F8622EEDD7F13CFA936C16501EDC6ADE26A95B;
// Microsoft.MixedReality.Toolkit.Boundary.BoundaryEventData
struct BoundaryEventData_tC9F73BC3895F31B9819342ECF498A94527AFF755;
// Microsoft.MixedReality.Toolkit.Boundary.Edge[]
struct EdgeU5BU5D_t7E044B25C942823DE9859802DCB5083603078A84;
// Microsoft.MixedReality.Toolkit.Boundary.IMixedRealityBoundaryHandler
struct IMixedRealityBoundaryHandler_tE213C770656488AA0EDEA72965C40CC4EA050CB4;
// Microsoft.MixedReality.Toolkit.Boundary.IMixedRealityBoundarySystem
struct IMixedRealityBoundarySystem_tA10FB43254B3D03F1E2820060709D175CC087A9F;
// Microsoft.MixedReality.Toolkit.Boundary.InscribedRectangle
struct InscribedRectangle_t8C3D61D1D8B9DEC50CAF5879190AFE6DECCF9269;
// Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem
struct MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896;
// Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem/<>c
struct U3CU3Ec_tC079DC849FD558F5A392DBED4FEC5A94C3956213;
// Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile
struct MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55;
// Microsoft.MixedReality.Toolkit.IMixedRealityEventSource
struct IMixedRealityEventSource_tCDCE387D30E6064314B340D9E15DA73BE8637F43;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_tE83694D916A0E6EA064F6E25AD4635F275E9D126;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.BaseEventSystem/EventHandlerEntry>>
struct Dictionary_2_t6CAFAD6E74E812BB153AF6AC7727B33761F3933E;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Boundary.Edge>
struct List_1_tF107DDA4D2B267D6DB271286F269CBC499CB1672;
// System.Collections.Generic.List`1<System.Tuple`2<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,UnityEngine.GameObject>>
struct List_1_t14CC06CC2142256D6066B9B737B042E972799633;
// System.Collections.Generic.List`1<System.Tuple`3<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,System.Type,UnityEngine.EventSystems.IEventSystemHandler>>
struct List_1_t1F1B688CCCBE76E073C576F58A5558AB95C3187A;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_t4FB5BF302DAD74D690156A022C4FA4D4081E9B26;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_t882412D5BE0B5BFC1900366319F8B2EB544BDD8B;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t32541D3F4C935BBA3800256BD21A7CA8148AAC13;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Boundary.IMixedRealityBoundaryHandler>
struct EventFunction_1_t97D0C3B1C38BD8910A6C8BA1C38B402288281E1D;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
struct EventFunction_1_tCDB8D379DD3CEC56B7828A86C5DCF113D208CF8D;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.LineRenderer
struct LineRenderer_tD225C480F28F28A4D737866474F21001B803B7C3;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Renderer
struct Renderer_t0556D67DD582620D1F495627EDE30D03284151F4;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;

IL2CPP_EXTERN_C RuntimeClass* BoundaryEventData_tC9F73BC3895F31B9819342ECF498A94527AFF755_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EdgeUtilities_t7ED49A615EAAE779B786E14621834709DCC0C330_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventFunction_1_t97D0C3B1C38BD8910A6C8BA1C38B402288281E1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityBoundaryHandler_tE213C770656488AA0EDEA72965C40CC4EA050CB4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InscribedRectangle_t8C3D61D1D8B9DEC50CAF5879190AFE6DECCF9269_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF107DDA4D2B267D6DB271286F269CBC499CB1672_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityPlayspace_tCAEF92B588B4F24DA4609183191F7F8576C1A609_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tC079DC849FD558F5A392DBED4FEC5A94C3956213_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral08F4C85E3C7B3015A1D6AE49E918EEF4724AA3A2;
IL2CPP_EXTERN_C String_t* _stringLiteral0F2870EE42AB42B214B04B6E021F9E37E4876948;
IL2CPP_EXTERN_C String_t* _stringLiteral336225A8A8C2A59DF2453949ECE78E8F6011DF11;
IL2CPP_EXTERN_C String_t* _stringLiteral3D03E038C14AF03724AFC2F297DEDBF0191D35C0;
IL2CPP_EXTERN_C String_t* _stringLiteral7383576ECCAB0349555823F261126B8965950B1D;
IL2CPP_EXTERN_C String_t* _stringLiteral7C4826711A870DDC870DF57BDC7A2709822EA3D4;
IL2CPP_EXTERN_C String_t* _stringLiteral7FB5E88B95F6DD67982580DA8160B05C3AE91AE3;
IL2CPP_EXTERN_C String_t* _stringLiteral89F18224F9872BC3FEDC818D630C509C663DA4E6;
IL2CPP_EXTERN_C String_t* _stringLiteral8B86287AB9462502DBA9CAE10FBC19B0FFECCF0A;
IL2CPP_EXTERN_C String_t* _stringLiteral8B9DE5633EA0FF1587D63358C4EEB4B549D20B42;
IL2CPP_EXTERN_C String_t* _stringLiteralE29DB923E25B51AC8B5CE56FF91A58B6A8D895B4;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisEdge_tDDBEEDA96F6415F4ACED33A74B60C2A60692A89D_mFF8B95EB1BF1B5982472F2DB99A769D71F32259F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseEventSystem_HandleEvent_TisIMixedRealityBoundaryHandler_tE213C770656488AA0EDEA72965C40CC4EA050CB4_m2D029D35765A000A13CC696B1A1CB69E2775AE56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventFunction_1__ctor_m3C9317BE669D592331E1C2AAAC8D33E17792DC34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ValidateEventData_TisBoundaryEventData_tC9F73BC3895F31B9819342ECF498A94527AFF755_m25DF805CFF0C7C87990D589B6A24C5426752E5FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisLineRenderer_tD225C480F28F28A4D737866474F21001B803B7C3_m6F360048E08E499FB2BFEB8E3428AAF7C16CF7DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisLineRenderer_tD225C480F28F28A4D737866474F21001B803B7C3_mA7B9D3113E801CA31D9A0A4E9607E4ADC99EF5CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0D49B1F3C7C5BFFF75472217A0AF38100D121154_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mD9F028AEE5C43737BEB50A8DAA8CA939CE314002_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m88791B9062762F4E67F8D4233708EF1BF3D50386_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m98C9EE2091A054D534779BCEEDFFF9E8E0131060_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6834ABFBD98D5EFE53A4BD01EA25BC516F24B171_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m78B74AF0F514D366E27B61FFC2DBDDFCDE856A57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m9C166B12F3436C88C895D68CE856D15BD1BDF0A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m2E29D30C43F78ABB30F6C7881652C11852FD4D6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mB9D869619B30FC5432E5F514D166A02AE8E8D626_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m7684344C547C49122B242D657ED4F2CA1C5C6B9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mC3A17DB301190693522F552F6CB7BC525F3E1F88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m1EE8221CA0BA4F2442E7B9859AC5A1351199E4A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__103_0_m14429B5E1DE3283E4761C2F0CB8E68CE09A9825A_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t MixedRealityBoundarySystem_CalculateBoundaryBounds_mADBFEBD7C538C1AECFF288339D59418DBD64A982_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityBoundarySystem_Contains_m97F3BD756AEF5BE84B26728E1D1C3A560227961E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityBoundarySystem_CreateInscribedBounds_m115CC815EC0C5523FC14CC96ACD5E131E02BFFE3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityBoundarySystem_Destroy_mE0339A9287D1D8384E35B1FBF648A37CD2A1C432_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityBoundarySystem_GetBoundaryCeilingVisualization_m6714940F88E1A3124ADDFF4F584E2C9D3371ED16_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityBoundarySystem_GetBoundaryWallVisualization_m58C553AE9582810EA6183F0807767E21D051D49C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityBoundarySystem_GetFloorVisualization_mB86E831CC25BE2E7829B0C245A0E227AAEB029DE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityBoundarySystem_GetHashCode_m95AE819839DC04517F16F68F06C85827300184FD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityBoundarySystem_GetPlayAreaVisualization_m74708BC496EFE9FB6F819BE40C9CD56EC5716DD8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityBoundarySystem_GetTrackedAreaVisualization_m258989AB14CB56316B1D40B51D31869BDD6D4442_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityBoundarySystem_Initialize_m5C96FBB4FAB590FAEBE64D97A72229837C2EEAE0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityBoundarySystem_RaiseBoundaryVisualizationChanged_mD9F8E0F28B5D454E8852ABACC1A715632B753477_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityBoundarySystem_SetTrackingSpace_m0A0E4971372B6BFF7C9C2B8AD535B3C7C4399AA2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityBoundarySystem_TryGetRectangularBoundsParams_mB30F43AB0B74E51D936FB28B96496C3CAF10EB27_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityBoundarySystem__cctor_m8B1B94DF70939DBA699F7FD114C5CF08D471FBFE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityBoundarySystem__ctor_mDBE0558D05EE9D91A93431BC7F18DABF0CD099BF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityBoundarySystem_get_BoundaryVisualizationParent_m0E284C16B1206119552E3B664D8304AF377824D9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityBoundarySystem_get_BoundaryVisualizationProfile_m5948FD82F0C66FB7ED6EF7EAAD60D6F610FF5245_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityBoundarySystem_get_BoundaryWallsPhysicsLayer_m22D37858D35302CDC8572F0B4779E14123EF745C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityBoundarySystem_get_CeilingPhysicsLayer_mE0B843EDF4375229AA0C275AEC74C1B88380C627_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityBoundarySystem_get_FloorPhysicsLayer_m69CF905D524F44296D1185F14F11090F4132E0D3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityBoundarySystem_get_PlayAreaPhysicsLayer_mA8BDD4B6096D301ED2BD95FC8C2A2ACA46369294_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityBoundarySystem_get_TrackedAreaPhysicsLayer_m0D3BA2671879F1EEF76323BB18F5298358D46C1E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityBoundarySystem_set_BoundaryWallsPhysicsLayer_m12A637C4BFACAAB8D6525140D67A6DD3AEE49F1B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityBoundarySystem_set_CeilingPhysicsLayer_m330D371B781BC6680F6CE1A939D00AE5A7A93D16_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityBoundarySystem_set_FloorPhysicsLayer_mF88CB1D05522E259D8B87602188A766941FE8EE8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityBoundarySystem_set_PlayAreaPhysicsLayer_mF318EB9E1B096CA5384A896F8DE33E82CCE89C03_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityBoundarySystem_set_ShowBoundaryCeiling_mA404992D09835DA063D8EDBE71D57BA6EB924981_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityBoundarySystem_set_ShowBoundaryWalls_m020E1CB6E680F0A57276D85397A825B72CFBFB09_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityBoundarySystem_set_ShowFloor_m60A62834B3CAF453D66402D79E7A2CC3248D0442_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityBoundarySystem_set_ShowPlayArea_m4AB7CD398E88EE5D4F2DA7C816556109D8EE6323_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityBoundarySystem_set_ShowTrackedArea_m91A480BC0C5276845A028B3E91D8A771BD58C35E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityBoundarySystem_set_TrackedAreaPhysicsLayer_m2D11844AEFA0E8B70AC7FAC4E8DFA500739AB0FD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__103_0_m14429B5E1DE3283E4761C2F0CB8E68CE09A9825A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_m02970FEC5074B8C499F11DF959AA75001596CE64_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct EdgeU5BU5D_t7E044B25C942823DE9859802DCB5083603078A84;
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t5DEE108371A7FB157DB79EC62488AA928D0B53F0 
{
public:

public:
};


// System.Object


// Microsoft.MixedReality.Toolkit.BaseService
struct  BaseService_tC02B92B66649511F83A73CD8A2A569521EAC0248  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.Toolkit.BaseService::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.UInt32 Microsoft.MixedReality.Toolkit.BaseService::<Priority>k__BackingField
	uint32_t ___U3CPriorityU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::<ConfigurationProfile>k__BackingField
	BaseMixedRealityProfile_t94F8622EEDD7F13CFA936C16501EDC6ADE26A95B * ___U3CConfigurationProfileU3Ek__BackingField_3;
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseService::disposed
	bool ___disposed_4;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseService_tC02B92B66649511F83A73CD8A2A569521EAC0248, ___U3CNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CNameU3Ek__BackingField_1() const { return ___U3CNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_1() { return &___U3CNameU3Ek__BackingField_1; }
	inline void set_U3CNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPriorityU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseService_tC02B92B66649511F83A73CD8A2A569521EAC0248, ___U3CPriorityU3Ek__BackingField_2)); }
	inline uint32_t get_U3CPriorityU3Ek__BackingField_2() const { return ___U3CPriorityU3Ek__BackingField_2; }
	inline uint32_t* get_address_of_U3CPriorityU3Ek__BackingField_2() { return &___U3CPriorityU3Ek__BackingField_2; }
	inline void set_U3CPriorityU3Ek__BackingField_2(uint32_t value)
	{
		___U3CPriorityU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CConfigurationProfileU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseService_tC02B92B66649511F83A73CD8A2A569521EAC0248, ___U3CConfigurationProfileU3Ek__BackingField_3)); }
	inline BaseMixedRealityProfile_t94F8622EEDD7F13CFA936C16501EDC6ADE26A95B * get_U3CConfigurationProfileU3Ek__BackingField_3() const { return ___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline BaseMixedRealityProfile_t94F8622EEDD7F13CFA936C16501EDC6ADE26A95B ** get_address_of_U3CConfigurationProfileU3Ek__BackingField_3() { return &___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline void set_U3CConfigurationProfileU3Ek__BackingField_3(BaseMixedRealityProfile_t94F8622EEDD7F13CFA936C16501EDC6ADE26A95B * value)
	{
		___U3CConfigurationProfileU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConfigurationProfileU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_disposed_4() { return static_cast<int32_t>(offsetof(BaseService_tC02B92B66649511F83A73CD8A2A569521EAC0248, ___disposed_4)); }
	inline bool get_disposed_4() const { return ___disposed_4; }
	inline bool* get_address_of_disposed_4() { return &___disposed_4; }
	inline void set_disposed_4(bool value)
	{
		___disposed_4 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem_<>c
struct  U3CU3Ec_tC079DC849FD558F5A392DBED4FEC5A94C3956213  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tC079DC849FD558F5A392DBED4FEC5A94C3956213_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem_<>c Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem_<>c::<>9
	U3CU3Ec_tC079DC849FD558F5A392DBED4FEC5A94C3956213 * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC079DC849FD558F5A392DBED4FEC5A94C3956213_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tC079DC849FD558F5A392DBED4FEC5A94C3956213 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tC079DC849FD558F5A392DBED4FEC5A94C3956213 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tC079DC849FD558F5A392DBED4FEC5A94C3956213 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Boundary.Edge>
struct  List_1_tF107DDA4D2B267D6DB271286F269CBC499CB1672  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	EdgeU5BU5D_t7E044B25C942823DE9859802DCB5083603078A84* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tF107DDA4D2B267D6DB271286F269CBC499CB1672, ____items_1)); }
	inline EdgeU5BU5D_t7E044B25C942823DE9859802DCB5083603078A84* get__items_1() const { return ____items_1; }
	inline EdgeU5BU5D_t7E044B25C942823DE9859802DCB5083603078A84** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(EdgeU5BU5D_t7E044B25C942823DE9859802DCB5083603078A84* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tF107DDA4D2B267D6DB271286F269CBC499CB1672, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tF107DDA4D2B267D6DB271286F269CBC499CB1672, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tF107DDA4D2B267D6DB271286F269CBC499CB1672, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tF107DDA4D2B267D6DB271286F269CBC499CB1672_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	EdgeU5BU5D_t7E044B25C942823DE9859802DCB5083603078A84* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tF107DDA4D2B267D6DB271286F269CBC499CB1672_StaticFields, ____emptyArray_5)); }
	inline EdgeU5BU5D_t7E044B25C942823DE9859802DCB5083603078A84* get__emptyArray_5() const { return ____emptyArray_5; }
	inline EdgeU5BU5D_t7E044B25C942823DE9859802DCB5083603078A84** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(EdgeU5BU5D_t7E044B25C942823DE9859802DCB5083603078A84* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct  List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5, ____items_1)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get__items_1() const { return ____items_1; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5_StaticFields, ____emptyArray_5)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.EmptyArray`1<Microsoft.MixedReality.Toolkit.Boundary.Edge>
struct  EmptyArray_1_t8D3EC30EF47B0D8A0F4A4A5CEABECA556CB6835E  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_t8D3EC30EF47B0D8A0F4A4A5CEABECA556CB6835E_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	EdgeU5BU5D_t7E044B25C942823DE9859802DCB5083603078A84* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_t8D3EC30EF47B0D8A0F4A4A5CEABECA556CB6835E_StaticFields, ___Value_0)); }
	inline EdgeU5BU5D_t7E044B25C942823DE9859802DCB5083603078A84* get_Value_0() const { return ___Value_0; }
	inline EdgeU5BU5D_t7E044B25C942823DE9859802DCB5083603078A84** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(EdgeU5BU5D_t7E044B25C942823DE9859802DCB5083603078A84* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


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
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// UnityEngine.EventSystems.AbstractEventData
struct  AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};


// Microsoft.MixedReality.Toolkit.BaseEventSystem
struct  BaseEventSystem_tC4ADB21EAC9DA95E3A19A458B5CA298A1D51707A  : public BaseService_tC02B92B66649511F83A73CD8A2A569521EAC0248
{
public:
	// System.Type Microsoft.MixedReality.Toolkit.BaseEventSystem::eventSystemHandlerType
	Type_t * ___eventSystemHandlerType_7;
	// System.Collections.Generic.List`1<System.Tuple`3<Microsoft.MixedReality.Toolkit.BaseEventSystem_Action,System.Type,UnityEngine.EventSystems.IEventSystemHandler>> Microsoft.MixedReality.Toolkit.BaseEventSystem::postponedActions
	List_1_t1F1B688CCCBE76E073C576F58A5558AB95C3187A * ___postponedActions_8;
	// System.Collections.Generic.List`1<System.Tuple`2<Microsoft.MixedReality.Toolkit.BaseEventSystem_Action,UnityEngine.GameObject>> Microsoft.MixedReality.Toolkit.BaseEventSystem::postponedObjectActions
	List_1_t14CC06CC2142256D6066B9B737B042E972799633 * ___postponedObjectActions_9;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.BaseEventSystem_EventHandlerEntry>> Microsoft.MixedReality.Toolkit.BaseEventSystem::<EventHandlersByType>k__BackingField
	Dictionary_2_t6CAFAD6E74E812BB153AF6AC7727B33761F3933E * ___U3CEventHandlersByTypeU3Ek__BackingField_10;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Microsoft.MixedReality.Toolkit.BaseEventSystem::<EventListeners>k__BackingField
	List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * ___U3CEventListenersU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_eventSystemHandlerType_7() { return static_cast<int32_t>(offsetof(BaseEventSystem_tC4ADB21EAC9DA95E3A19A458B5CA298A1D51707A, ___eventSystemHandlerType_7)); }
	inline Type_t * get_eventSystemHandlerType_7() const { return ___eventSystemHandlerType_7; }
	inline Type_t ** get_address_of_eventSystemHandlerType_7() { return &___eventSystemHandlerType_7; }
	inline void set_eventSystemHandlerType_7(Type_t * value)
	{
		___eventSystemHandlerType_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventSystemHandlerType_7), (void*)value);
	}

	inline static int32_t get_offset_of_postponedActions_8() { return static_cast<int32_t>(offsetof(BaseEventSystem_tC4ADB21EAC9DA95E3A19A458B5CA298A1D51707A, ___postponedActions_8)); }
	inline List_1_t1F1B688CCCBE76E073C576F58A5558AB95C3187A * get_postponedActions_8() const { return ___postponedActions_8; }
	inline List_1_t1F1B688CCCBE76E073C576F58A5558AB95C3187A ** get_address_of_postponedActions_8() { return &___postponedActions_8; }
	inline void set_postponedActions_8(List_1_t1F1B688CCCBE76E073C576F58A5558AB95C3187A * value)
	{
		___postponedActions_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___postponedActions_8), (void*)value);
	}

	inline static int32_t get_offset_of_postponedObjectActions_9() { return static_cast<int32_t>(offsetof(BaseEventSystem_tC4ADB21EAC9DA95E3A19A458B5CA298A1D51707A, ___postponedObjectActions_9)); }
	inline List_1_t14CC06CC2142256D6066B9B737B042E972799633 * get_postponedObjectActions_9() const { return ___postponedObjectActions_9; }
	inline List_1_t14CC06CC2142256D6066B9B737B042E972799633 ** get_address_of_postponedObjectActions_9() { return &___postponedObjectActions_9; }
	inline void set_postponedObjectActions_9(List_1_t14CC06CC2142256D6066B9B737B042E972799633 * value)
	{
		___postponedObjectActions_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___postponedObjectActions_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEventHandlersByTypeU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(BaseEventSystem_tC4ADB21EAC9DA95E3A19A458B5CA298A1D51707A, ___U3CEventHandlersByTypeU3Ek__BackingField_10)); }
	inline Dictionary_2_t6CAFAD6E74E812BB153AF6AC7727B33761F3933E * get_U3CEventHandlersByTypeU3Ek__BackingField_10() const { return ___U3CEventHandlersByTypeU3Ek__BackingField_10; }
	inline Dictionary_2_t6CAFAD6E74E812BB153AF6AC7727B33761F3933E ** get_address_of_U3CEventHandlersByTypeU3Ek__BackingField_10() { return &___U3CEventHandlersByTypeU3Ek__BackingField_10; }
	inline void set_U3CEventHandlersByTypeU3Ek__BackingField_10(Dictionary_2_t6CAFAD6E74E812BB153AF6AC7727B33761F3933E * value)
	{
		___U3CEventHandlersByTypeU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEventHandlersByTypeU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEventListenersU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(BaseEventSystem_tC4ADB21EAC9DA95E3A19A458B5CA298A1D51707A, ___U3CEventListenersU3Ek__BackingField_11)); }
	inline List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * get_U3CEventListenersU3Ek__BackingField_11() const { return ___U3CEventListenersU3Ek__BackingField_11; }
	inline List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 ** get_address_of_U3CEventListenersU3Ek__BackingField_11() { return &___U3CEventListenersU3Ek__BackingField_11; }
	inline void set_U3CEventListenersU3Ek__BackingField_11(List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * value)
	{
		___U3CEventListenersU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEventListenersU3Ek__BackingField_11), (void*)value);
	}
};

struct BaseEventSystem_tC4ADB21EAC9DA95E3A19A458B5CA298A1D51707A_StaticFields
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseEventSystem::enableDanglingHandlerDiagnostics
	bool ___enableDanglingHandlerDiagnostics_5;
	// System.Int32 Microsoft.MixedReality.Toolkit.BaseEventSystem::eventExecutionDepth
	int32_t ___eventExecutionDepth_6;

public:
	inline static int32_t get_offset_of_enableDanglingHandlerDiagnostics_5() { return static_cast<int32_t>(offsetof(BaseEventSystem_tC4ADB21EAC9DA95E3A19A458B5CA298A1D51707A_StaticFields, ___enableDanglingHandlerDiagnostics_5)); }
	inline bool get_enableDanglingHandlerDiagnostics_5() const { return ___enableDanglingHandlerDiagnostics_5; }
	inline bool* get_address_of_enableDanglingHandlerDiagnostics_5() { return &___enableDanglingHandlerDiagnostics_5; }
	inline void set_enableDanglingHandlerDiagnostics_5(bool value)
	{
		___enableDanglingHandlerDiagnostics_5 = value;
	}

	inline static int32_t get_offset_of_eventExecutionDepth_6() { return static_cast<int32_t>(offsetof(BaseEventSystem_tC4ADB21EAC9DA95E3A19A458B5CA298A1D51707A_StaticFields, ___eventExecutionDepth_6)); }
	inline int32_t get_eventExecutionDepth_6() const { return ___eventExecutionDepth_6; }
	inline int32_t* get_address_of_eventExecutionDepth_6() { return &___eventExecutionDepth_6; }
	inline void set_eventExecutionDepth_6(int32_t value)
	{
		___eventExecutionDepth_6 = value;
	}
};


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
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


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
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

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


// System.Nullable`1<System.Single>
struct  Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 
{
public:
	// T System.Nullable`1::value
	float ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777, ___value_0)); }
	inline float get_value_0() const { return ___value_0; }
	inline float* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(float value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


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


// UnityEngine.EventSystems.BaseEventData
struct  BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5  : public AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5, ___m_EventSystem_1)); }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_1), (void*)value);
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// Microsoft.MixedReality.Toolkit.BaseCoreSystem
struct  BaseCoreSystem_t1B04DCFA7545A86EAA41A8085969CD32B674EF7F  : public BaseEventSystem_tC4ADB21EAC9DA95E3A19A458B5CA298A1D51707A
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseCoreSystem::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_12;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(BaseCoreSystem_t1B04DCFA7545A86EAA41A8085969CD32B674EF7F, ___U3CRegistrarU3Ek__BackingField_12)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_12() const { return ___U3CRegistrarU3Ek__BackingField_12; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_12() { return &___U3CRegistrarU3Ek__BackingField_12; }
	inline void set_U3CRegistrarU3Ek__BackingField_12(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_12), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Boundary.BoundaryType
struct  BoundaryType_t69AAF360035C6C7B72B1163291EFF91DAF95E8F7 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.BoundaryType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BoundaryType_t69AAF360035C6C7B72B1163291EFF91DAF95E8F7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Boundary.Edge
struct  Edge_tDDBEEDA96F6415F4ACED33A74B60C2A60692A89D 
{
public:
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Boundary.Edge::PointA
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___PointA_0;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Boundary.Edge::PointB
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___PointB_1;

public:
	inline static int32_t get_offset_of_PointA_0() { return static_cast<int32_t>(offsetof(Edge_tDDBEEDA96F6415F4ACED33A74B60C2A60692A89D, ___PointA_0)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_PointA_0() const { return ___PointA_0; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_PointA_0() { return &___PointA_0; }
	inline void set_PointA_0(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___PointA_0 = value;
	}

	inline static int32_t get_offset_of_PointB_1() { return static_cast<int32_t>(offsetof(Edge_tDDBEEDA96F6415F4ACED33A74B60C2A60692A89D, ___PointB_1)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_PointB_1() const { return ___PointB_1; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_PointB_1() { return &___PointB_1; }
	inline void set_PointB_1(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___PointB_1 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Boundary.InscribedRectangle
struct  InscribedRectangle_t8C3D61D1D8B9DEC50CAF5879190AFE6DECCF9269  : public RuntimeObject
{
public:
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Boundary.InscribedRectangle::<Center>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CCenterU3Ek__BackingField_4;
	// System.Single Microsoft.MixedReality.Toolkit.Boundary.InscribedRectangle::<Width>k__BackingField
	float ___U3CWidthU3Ek__BackingField_5;
	// System.Single Microsoft.MixedReality.Toolkit.Boundary.InscribedRectangle::<Height>k__BackingField
	float ___U3CHeightU3Ek__BackingField_6;
	// System.Single Microsoft.MixedReality.Toolkit.Boundary.InscribedRectangle::<Angle>k__BackingField
	float ___U3CAngleU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CCenterU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(InscribedRectangle_t8C3D61D1D8B9DEC50CAF5879190AFE6DECCF9269, ___U3CCenterU3Ek__BackingField_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CCenterU3Ek__BackingField_4() const { return ___U3CCenterU3Ek__BackingField_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CCenterU3Ek__BackingField_4() { return &___U3CCenterU3Ek__BackingField_4; }
	inline void set_U3CCenterU3Ek__BackingField_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CCenterU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CWidthU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(InscribedRectangle_t8C3D61D1D8B9DEC50CAF5879190AFE6DECCF9269, ___U3CWidthU3Ek__BackingField_5)); }
	inline float get_U3CWidthU3Ek__BackingField_5() const { return ___U3CWidthU3Ek__BackingField_5; }
	inline float* get_address_of_U3CWidthU3Ek__BackingField_5() { return &___U3CWidthU3Ek__BackingField_5; }
	inline void set_U3CWidthU3Ek__BackingField_5(float value)
	{
		___U3CWidthU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CHeightU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(InscribedRectangle_t8C3D61D1D8B9DEC50CAF5879190AFE6DECCF9269, ___U3CHeightU3Ek__BackingField_6)); }
	inline float get_U3CHeightU3Ek__BackingField_6() const { return ___U3CHeightU3Ek__BackingField_6; }
	inline float* get_address_of_U3CHeightU3Ek__BackingField_6() { return &___U3CHeightU3Ek__BackingField_6; }
	inline void set_U3CHeightU3Ek__BackingField_6(float value)
	{
		___U3CHeightU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CAngleU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(InscribedRectangle_t8C3D61D1D8B9DEC50CAF5879190AFE6DECCF9269, ___U3CAngleU3Ek__BackingField_7)); }
	inline float get_U3CAngleU3Ek__BackingField_7() const { return ___U3CAngleU3Ek__BackingField_7; }
	inline float* get_address_of_U3CAngleU3Ek__BackingField_7() { return &___U3CAngleU3Ek__BackingField_7; }
	inline void set_U3CAngleU3Ek__BackingField_7(float value)
	{
		___U3CAngleU3Ek__BackingField_7 = value;
	}
};

struct InscribedRectangle_t8C3D61D1D8B9DEC50CAF5879190AFE6DECCF9269_StaticFields
{
public:
	// System.Single[] Microsoft.MixedReality.Toolkit.Boundary.InscribedRectangle::fitAngles
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___fitAngles_2;
	// System.Single[] Microsoft.MixedReality.Toolkit.Boundary.InscribedRectangle::aspectRatios
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___aspectRatios_3;

public:
	inline static int32_t get_offset_of_fitAngles_2() { return static_cast<int32_t>(offsetof(InscribedRectangle_t8C3D61D1D8B9DEC50CAF5879190AFE6DECCF9269_StaticFields, ___fitAngles_2)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_fitAngles_2() const { return ___fitAngles_2; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_fitAngles_2() { return &___fitAngles_2; }
	inline void set_fitAngles_2(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___fitAngles_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fitAngles_2), (void*)value);
	}

	inline static int32_t get_offset_of_aspectRatios_3() { return static_cast<int32_t>(offsetof(InscribedRectangle_t8C3D61D1D8B9DEC50CAF5879190AFE6DECCF9269_StaticFields, ___aspectRatios_3)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_aspectRatios_3() const { return ___aspectRatios_3; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_aspectRatios_3() { return &___aspectRatios_3; }
	inline void set_aspectRatios_3(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___aspectRatios_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___aspectRatios_3), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.GenericBaseEventData
struct  GenericBaseEventData_tEA0E1734B03537CE98E90174C5AB272EDCADB73F  : public BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityEventSource Microsoft.MixedReality.Toolkit.GenericBaseEventData::<EventSource>k__BackingField
	RuntimeObject* ___U3CEventSourceU3Ek__BackingField_2;
	// System.DateTime Microsoft.MixedReality.Toolkit.GenericBaseEventData::<EventTime>k__BackingField
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___U3CEventTimeU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CEventSourceU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(GenericBaseEventData_tEA0E1734B03537CE98E90174C5AB272EDCADB73F, ___U3CEventSourceU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CEventSourceU3Ek__BackingField_2() const { return ___U3CEventSourceU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CEventSourceU3Ek__BackingField_2() { return &___U3CEventSourceU3Ek__BackingField_2; }
	inline void set_U3CEventSourceU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CEventSourceU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEventSourceU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEventTimeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(GenericBaseEventData_tEA0E1734B03537CE98E90174C5AB272EDCADB73F, ___U3CEventTimeU3Ek__BackingField_3)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_U3CEventTimeU3Ek__BackingField_3() const { return ___U3CEventTimeU3Ek__BackingField_3; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_U3CEventTimeU3Ek__BackingField_3() { return &___U3CEventTimeU3Ek__BackingField_3; }
	inline void set_U3CEventTimeU3Ek__BackingField_3(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___U3CEventTimeU3Ek__BackingField_3 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.EdgeUtilities
struct  EdgeUtilities_t7ED49A615EAAE779B786E14621834709DCC0C330  : public RuntimeObject
{
public:

public:
};

struct EdgeUtilities_t7ED49A615EAAE779B786E14621834709DCC0C330_StaticFields
{
public:
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.EdgeUtilities::maxWidth
	float ___maxWidth_0;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Utilities.EdgeUtilities::InvalidPoint
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___InvalidPoint_1;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Utilities.EdgeUtilities::intersectionPoint
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___intersectionPoint_2;

public:
	inline static int32_t get_offset_of_maxWidth_0() { return static_cast<int32_t>(offsetof(EdgeUtilities_t7ED49A615EAAE779B786E14621834709DCC0C330_StaticFields, ___maxWidth_0)); }
	inline float get_maxWidth_0() const { return ___maxWidth_0; }
	inline float* get_address_of_maxWidth_0() { return &___maxWidth_0; }
	inline void set_maxWidth_0(float value)
	{
		___maxWidth_0 = value;
	}

	inline static int32_t get_offset_of_InvalidPoint_1() { return static_cast<int32_t>(offsetof(EdgeUtilities_t7ED49A615EAAE779B786E14621834709DCC0C330_StaticFields, ___InvalidPoint_1)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_InvalidPoint_1() const { return ___InvalidPoint_1; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_InvalidPoint_1() { return &___InvalidPoint_1; }
	inline void set_InvalidPoint_1(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___InvalidPoint_1 = value;
	}

	inline static int32_t get_offset_of_intersectionPoint_2() { return static_cast<int32_t>(offsetof(EdgeUtilities_t7ED49A615EAAE779B786E14621834709DCC0C330_StaticFields, ___intersectionPoint_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_intersectionPoint_2() const { return ___intersectionPoint_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_intersectionPoint_2() { return &___intersectionPoint_2; }
	inline void set_intersectionPoint_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___intersectionPoint_2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.ExperienceScale
struct  ExperienceScale_t42774BD3768AE650313816FAF28F0199C186381F 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.ExperienceScale::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ExperienceScale_t42774BD3768AE650313816FAF28F0199C186381F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


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
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
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

// UnityEngine.Bounds
struct  Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890, ___m_Center_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890, ___m_Extents_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Extents_1 = value;
	}
};


// UnityEngine.Experimental.XR.Boundary_Type
struct  Type_t94CEB95ABED1654F7AF6B2CACCA1769C4061A288 
{
public:
	// System.Int32 UnityEngine.Experimental.XR.Boundary_Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_t94CEB95ABED1654F7AF6B2CACCA1769C4061A288, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.PrimitiveType
struct  PrimitiveType_t37F0056BA9C61594039522E27426D4D52D0943DE 
{
public:
	// System.Int32 UnityEngine.PrimitiveType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PrimitiveType_t37F0056BA9C61594039522E27426D4D52D0943DE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.TrackingSpaceType
struct  TrackingSpaceType_tDFAE75A41ADEB2EC330998CCC63202F4A4889C2B 
{
public:
	// System.Int32 UnityEngine.XR.TrackingSpaceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingSpaceType_tDFAE75A41ADEB2EC330998CCC63202F4A4889C2B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Boundary.BoundaryEventData
struct  BoundaryEventData_tC9F73BC3895F31B9819342ECF498A94527AFF755  : public GenericBaseEventData_tEA0E1734B03537CE98E90174C5AB272EDCADB73F
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.BoundaryEventData::<IsFloorVisualized>k__BackingField
	bool ___U3CIsFloorVisualizedU3Ek__BackingField_4;
	// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.BoundaryEventData::<IsPlayAreaVisualized>k__BackingField
	bool ___U3CIsPlayAreaVisualizedU3Ek__BackingField_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.BoundaryEventData::<IsTrackedAreaVisualized>k__BackingField
	bool ___U3CIsTrackedAreaVisualizedU3Ek__BackingField_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.BoundaryEventData::<AreBoundaryWallsVisualized>k__BackingField
	bool ___U3CAreBoundaryWallsVisualizedU3Ek__BackingField_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.BoundaryEventData::<IsCeilingVisualized>k__BackingField
	bool ___U3CIsCeilingVisualizedU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_U3CIsFloorVisualizedU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(BoundaryEventData_tC9F73BC3895F31B9819342ECF498A94527AFF755, ___U3CIsFloorVisualizedU3Ek__BackingField_4)); }
	inline bool get_U3CIsFloorVisualizedU3Ek__BackingField_4() const { return ___U3CIsFloorVisualizedU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CIsFloorVisualizedU3Ek__BackingField_4() { return &___U3CIsFloorVisualizedU3Ek__BackingField_4; }
	inline void set_U3CIsFloorVisualizedU3Ek__BackingField_4(bool value)
	{
		___U3CIsFloorVisualizedU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CIsPlayAreaVisualizedU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(BoundaryEventData_tC9F73BC3895F31B9819342ECF498A94527AFF755, ___U3CIsPlayAreaVisualizedU3Ek__BackingField_5)); }
	inline bool get_U3CIsPlayAreaVisualizedU3Ek__BackingField_5() const { return ___U3CIsPlayAreaVisualizedU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CIsPlayAreaVisualizedU3Ek__BackingField_5() { return &___U3CIsPlayAreaVisualizedU3Ek__BackingField_5; }
	inline void set_U3CIsPlayAreaVisualizedU3Ek__BackingField_5(bool value)
	{
		___U3CIsPlayAreaVisualizedU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CIsTrackedAreaVisualizedU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(BoundaryEventData_tC9F73BC3895F31B9819342ECF498A94527AFF755, ___U3CIsTrackedAreaVisualizedU3Ek__BackingField_6)); }
	inline bool get_U3CIsTrackedAreaVisualizedU3Ek__BackingField_6() const { return ___U3CIsTrackedAreaVisualizedU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CIsTrackedAreaVisualizedU3Ek__BackingField_6() { return &___U3CIsTrackedAreaVisualizedU3Ek__BackingField_6; }
	inline void set_U3CIsTrackedAreaVisualizedU3Ek__BackingField_6(bool value)
	{
		___U3CIsTrackedAreaVisualizedU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CAreBoundaryWallsVisualizedU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(BoundaryEventData_tC9F73BC3895F31B9819342ECF498A94527AFF755, ___U3CAreBoundaryWallsVisualizedU3Ek__BackingField_7)); }
	inline bool get_U3CAreBoundaryWallsVisualizedU3Ek__BackingField_7() const { return ___U3CAreBoundaryWallsVisualizedU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CAreBoundaryWallsVisualizedU3Ek__BackingField_7() { return &___U3CAreBoundaryWallsVisualizedU3Ek__BackingField_7; }
	inline void set_U3CAreBoundaryWallsVisualizedU3Ek__BackingField_7(bool value)
	{
		___U3CAreBoundaryWallsVisualizedU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CIsCeilingVisualizedU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(BoundaryEventData_tC9F73BC3895F31B9819342ECF498A94527AFF755, ___U3CIsCeilingVisualizedU3Ek__BackingField_8)); }
	inline bool get_U3CIsCeilingVisualizedU3Ek__BackingField_8() const { return ___U3CIsCeilingVisualizedU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CIsCeilingVisualizedU3Ek__BackingField_8() { return &___U3CIsCeilingVisualizedU3Ek__BackingField_8; }
	inline void set_U3CIsCeilingVisualizedU3Ek__BackingField_8(bool value)
	{
		___U3CIsCeilingVisualizedU3Ek__BackingField_8 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem
struct  MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896  : public BaseCoreSystem_t1B04DCFA7545A86EAA41A8085969CD32B674EF7F
{
public:
	// Microsoft.MixedReality.Toolkit.Boundary.BoundaryEventData Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::boundaryEventData
	BoundaryEventData_tC9F73BC3895F31B9819342ECF498A94527AFF755 * ___boundaryEventData_13;
	// System.String Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_14;
	// System.UInt32 Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::<SourceId>k__BackingField
	uint32_t ___U3CSourceIdU3Ek__BackingField_16;
	// System.String Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::<SourceName>k__BackingField
	String_t* ___U3CSourceNameU3Ek__BackingField_17;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::boundaryVisualizationParent
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___boundaryVisualizationParent_20;
	// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::ignoreRaycastLayerValue
	int32_t ___ignoreRaycastLayerValue_21;
	// Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::boundaryVisualizationProfile
	MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 * ___boundaryVisualizationProfile_22;
	// Microsoft.MixedReality.Toolkit.Utilities.ExperienceScale Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::<Scale>k__BackingField
	int32_t ___U3CScaleU3Ek__BackingField_23;
	// System.Single Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::<BoundaryHeight>k__BackingField
	float ___U3CBoundaryHeightU3Ek__BackingField_24;
	// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::showFloor
	bool ___showFloor_25;
	// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::showPlayArea
	bool ___showPlayArea_26;
	// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::floorPhysicsLayer
	int32_t ___floorPhysicsLayer_27;
	// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::showTrackedArea
	bool ___showTrackedArea_28;
	// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::playAreaPhysicsLayer
	int32_t ___playAreaPhysicsLayer_29;
	// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::showBoundaryWalls
	bool ___showBoundaryWalls_30;
	// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::trackedAreaPhysicsLayer
	int32_t ___trackedAreaPhysicsLayer_31;
	// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::showCeiling
	bool ___showCeiling_32;
	// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::boundaryWallsPhysicsLayer
	int32_t ___boundaryWallsPhysicsLayer_33;
	// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::ceilingPhysicsLayer
	int32_t ___ceilingPhysicsLayer_34;
	// Microsoft.MixedReality.Toolkit.Boundary.Edge[] Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::<Bounds>k__BackingField
	EdgeU5BU5D_t7E044B25C942823DE9859802DCB5083603078A84* ___U3CBoundsU3Ek__BackingField_35;
	// System.Nullable`1<System.Single> Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::<FloorHeight>k__BackingField
	Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777  ___U3CFloorHeightU3Ek__BackingField_36;
	// Microsoft.MixedReality.Toolkit.Boundary.InscribedRectangle Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::rectangularBounds
	InscribedRectangle_t8C3D61D1D8B9DEC50CAF5879190AFE6DECCF9269 * ___rectangularBounds_37;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::currentFloorObject
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___currentFloorObject_38;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::currentPlayAreaObject
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___currentPlayAreaObject_39;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::currentTrackedAreaObject
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___currentTrackedAreaObject_40;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::currentBoundaryWallObject
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___currentBoundaryWallObject_41;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::currentCeilingObject
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___currentCeilingObject_42;

public:
	inline static int32_t get_offset_of_boundaryEventData_13() { return static_cast<int32_t>(offsetof(MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896, ___boundaryEventData_13)); }
	inline BoundaryEventData_tC9F73BC3895F31B9819342ECF498A94527AFF755 * get_boundaryEventData_13() const { return ___boundaryEventData_13; }
	inline BoundaryEventData_tC9F73BC3895F31B9819342ECF498A94527AFF755 ** get_address_of_boundaryEventData_13() { return &___boundaryEventData_13; }
	inline void set_boundaryEventData_13(BoundaryEventData_tC9F73BC3895F31B9819342ECF498A94527AFF755 * value)
	{
		___boundaryEventData_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundaryEventData_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896, ___U3CNameU3Ek__BackingField_14)); }
	inline String_t* get_U3CNameU3Ek__BackingField_14() const { return ___U3CNameU3Ek__BackingField_14; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_14() { return &___U3CNameU3Ek__BackingField_14; }
	inline void set_U3CNameU3Ek__BackingField_14(String_t* value)
	{
		___U3CNameU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSourceIdU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896, ___U3CSourceIdU3Ek__BackingField_16)); }
	inline uint32_t get_U3CSourceIdU3Ek__BackingField_16() const { return ___U3CSourceIdU3Ek__BackingField_16; }
	inline uint32_t* get_address_of_U3CSourceIdU3Ek__BackingField_16() { return &___U3CSourceIdU3Ek__BackingField_16; }
	inline void set_U3CSourceIdU3Ek__BackingField_16(uint32_t value)
	{
		___U3CSourceIdU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CSourceNameU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896, ___U3CSourceNameU3Ek__BackingField_17)); }
	inline String_t* get_U3CSourceNameU3Ek__BackingField_17() const { return ___U3CSourceNameU3Ek__BackingField_17; }
	inline String_t** get_address_of_U3CSourceNameU3Ek__BackingField_17() { return &___U3CSourceNameU3Ek__BackingField_17; }
	inline void set_U3CSourceNameU3Ek__BackingField_17(String_t* value)
	{
		___U3CSourceNameU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSourceNameU3Ek__BackingField_17), (void*)value);
	}

	inline static int32_t get_offset_of_boundaryVisualizationParent_20() { return static_cast<int32_t>(offsetof(MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896, ___boundaryVisualizationParent_20)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_boundaryVisualizationParent_20() const { return ___boundaryVisualizationParent_20; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_boundaryVisualizationParent_20() { return &___boundaryVisualizationParent_20; }
	inline void set_boundaryVisualizationParent_20(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___boundaryVisualizationParent_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundaryVisualizationParent_20), (void*)value);
	}

	inline static int32_t get_offset_of_ignoreRaycastLayerValue_21() { return static_cast<int32_t>(offsetof(MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896, ___ignoreRaycastLayerValue_21)); }
	inline int32_t get_ignoreRaycastLayerValue_21() const { return ___ignoreRaycastLayerValue_21; }
	inline int32_t* get_address_of_ignoreRaycastLayerValue_21() { return &___ignoreRaycastLayerValue_21; }
	inline void set_ignoreRaycastLayerValue_21(int32_t value)
	{
		___ignoreRaycastLayerValue_21 = value;
	}

	inline static int32_t get_offset_of_boundaryVisualizationProfile_22() { return static_cast<int32_t>(offsetof(MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896, ___boundaryVisualizationProfile_22)); }
	inline MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 * get_boundaryVisualizationProfile_22() const { return ___boundaryVisualizationProfile_22; }
	inline MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 ** get_address_of_boundaryVisualizationProfile_22() { return &___boundaryVisualizationProfile_22; }
	inline void set_boundaryVisualizationProfile_22(MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 * value)
	{
		___boundaryVisualizationProfile_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundaryVisualizationProfile_22), (void*)value);
	}

	inline static int32_t get_offset_of_U3CScaleU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896, ___U3CScaleU3Ek__BackingField_23)); }
	inline int32_t get_U3CScaleU3Ek__BackingField_23() const { return ___U3CScaleU3Ek__BackingField_23; }
	inline int32_t* get_address_of_U3CScaleU3Ek__BackingField_23() { return &___U3CScaleU3Ek__BackingField_23; }
	inline void set_U3CScaleU3Ek__BackingField_23(int32_t value)
	{
		___U3CScaleU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_U3CBoundaryHeightU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896, ___U3CBoundaryHeightU3Ek__BackingField_24)); }
	inline float get_U3CBoundaryHeightU3Ek__BackingField_24() const { return ___U3CBoundaryHeightU3Ek__BackingField_24; }
	inline float* get_address_of_U3CBoundaryHeightU3Ek__BackingField_24() { return &___U3CBoundaryHeightU3Ek__BackingField_24; }
	inline void set_U3CBoundaryHeightU3Ek__BackingField_24(float value)
	{
		___U3CBoundaryHeightU3Ek__BackingField_24 = value;
	}

	inline static int32_t get_offset_of_showFloor_25() { return static_cast<int32_t>(offsetof(MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896, ___showFloor_25)); }
	inline bool get_showFloor_25() const { return ___showFloor_25; }
	inline bool* get_address_of_showFloor_25() { return &___showFloor_25; }
	inline void set_showFloor_25(bool value)
	{
		___showFloor_25 = value;
	}

	inline static int32_t get_offset_of_showPlayArea_26() { return static_cast<int32_t>(offsetof(MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896, ___showPlayArea_26)); }
	inline bool get_showPlayArea_26() const { return ___showPlayArea_26; }
	inline bool* get_address_of_showPlayArea_26() { return &___showPlayArea_26; }
	inline void set_showPlayArea_26(bool value)
	{
		___showPlayArea_26 = value;
	}

	inline static int32_t get_offset_of_floorPhysicsLayer_27() { return static_cast<int32_t>(offsetof(MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896, ___floorPhysicsLayer_27)); }
	inline int32_t get_floorPhysicsLayer_27() const { return ___floorPhysicsLayer_27; }
	inline int32_t* get_address_of_floorPhysicsLayer_27() { return &___floorPhysicsLayer_27; }
	inline void set_floorPhysicsLayer_27(int32_t value)
	{
		___floorPhysicsLayer_27 = value;
	}

	inline static int32_t get_offset_of_showTrackedArea_28() { return static_cast<int32_t>(offsetof(MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896, ___showTrackedArea_28)); }
	inline bool get_showTrackedArea_28() const { return ___showTrackedArea_28; }
	inline bool* get_address_of_showTrackedArea_28() { return &___showTrackedArea_28; }
	inline void set_showTrackedArea_28(bool value)
	{
		___showTrackedArea_28 = value;
	}

	inline static int32_t get_offset_of_playAreaPhysicsLayer_29() { return static_cast<int32_t>(offsetof(MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896, ___playAreaPhysicsLayer_29)); }
	inline int32_t get_playAreaPhysicsLayer_29() const { return ___playAreaPhysicsLayer_29; }
	inline int32_t* get_address_of_playAreaPhysicsLayer_29() { return &___playAreaPhysicsLayer_29; }
	inline void set_playAreaPhysicsLayer_29(int32_t value)
	{
		___playAreaPhysicsLayer_29 = value;
	}

	inline static int32_t get_offset_of_showBoundaryWalls_30() { return static_cast<int32_t>(offsetof(MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896, ___showBoundaryWalls_30)); }
	inline bool get_showBoundaryWalls_30() const { return ___showBoundaryWalls_30; }
	inline bool* get_address_of_showBoundaryWalls_30() { return &___showBoundaryWalls_30; }
	inline void set_showBoundaryWalls_30(bool value)
	{
		___showBoundaryWalls_30 = value;
	}

	inline static int32_t get_offset_of_trackedAreaPhysicsLayer_31() { return static_cast<int32_t>(offsetof(MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896, ___trackedAreaPhysicsLayer_31)); }
	inline int32_t get_trackedAreaPhysicsLayer_31() const { return ___trackedAreaPhysicsLayer_31; }
	inline int32_t* get_address_of_trackedAreaPhysicsLayer_31() { return &___trackedAreaPhysicsLayer_31; }
	inline void set_trackedAreaPhysicsLayer_31(int32_t value)
	{
		___trackedAreaPhysicsLayer_31 = value;
	}

	inline static int32_t get_offset_of_showCeiling_32() { return static_cast<int32_t>(offsetof(MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896, ___showCeiling_32)); }
	inline bool get_showCeiling_32() const { return ___showCeiling_32; }
	inline bool* get_address_of_showCeiling_32() { return &___showCeiling_32; }
	inline void set_showCeiling_32(bool value)
	{
		___showCeiling_32 = value;
	}

	inline static int32_t get_offset_of_boundaryWallsPhysicsLayer_33() { return static_cast<int32_t>(offsetof(MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896, ___boundaryWallsPhysicsLayer_33)); }
	inline int32_t get_boundaryWallsPhysicsLayer_33() const { return ___boundaryWallsPhysicsLayer_33; }
	inline int32_t* get_address_of_boundaryWallsPhysicsLayer_33() { return &___boundaryWallsPhysicsLayer_33; }
	inline void set_boundaryWallsPhysicsLayer_33(int32_t value)
	{
		___boundaryWallsPhysicsLayer_33 = value;
	}

	inline static int32_t get_offset_of_ceilingPhysicsLayer_34() { return static_cast<int32_t>(offsetof(MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896, ___ceilingPhysicsLayer_34)); }
	inline int32_t get_ceilingPhysicsLayer_34() const { return ___ceilingPhysicsLayer_34; }
	inline int32_t* get_address_of_ceilingPhysicsLayer_34() { return &___ceilingPhysicsLayer_34; }
	inline void set_ceilingPhysicsLayer_34(int32_t value)
	{
		___ceilingPhysicsLayer_34 = value;
	}

	inline static int32_t get_offset_of_U3CBoundsU3Ek__BackingField_35() { return static_cast<int32_t>(offsetof(MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896, ___U3CBoundsU3Ek__BackingField_35)); }
	inline EdgeU5BU5D_t7E044B25C942823DE9859802DCB5083603078A84* get_U3CBoundsU3Ek__BackingField_35() const { return ___U3CBoundsU3Ek__BackingField_35; }
	inline EdgeU5BU5D_t7E044B25C942823DE9859802DCB5083603078A84** get_address_of_U3CBoundsU3Ek__BackingField_35() { return &___U3CBoundsU3Ek__BackingField_35; }
	inline void set_U3CBoundsU3Ek__BackingField_35(EdgeU5BU5D_t7E044B25C942823DE9859802DCB5083603078A84* value)
	{
		___U3CBoundsU3Ek__BackingField_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBoundsU3Ek__BackingField_35), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFloorHeightU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896, ___U3CFloorHeightU3Ek__BackingField_36)); }
	inline Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777  get_U3CFloorHeightU3Ek__BackingField_36() const { return ___U3CFloorHeightU3Ek__BackingField_36; }
	inline Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 * get_address_of_U3CFloorHeightU3Ek__BackingField_36() { return &___U3CFloorHeightU3Ek__BackingField_36; }
	inline void set_U3CFloorHeightU3Ek__BackingField_36(Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777  value)
	{
		___U3CFloorHeightU3Ek__BackingField_36 = value;
	}

	inline static int32_t get_offset_of_rectangularBounds_37() { return static_cast<int32_t>(offsetof(MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896, ___rectangularBounds_37)); }
	inline InscribedRectangle_t8C3D61D1D8B9DEC50CAF5879190AFE6DECCF9269 * get_rectangularBounds_37() const { return ___rectangularBounds_37; }
	inline InscribedRectangle_t8C3D61D1D8B9DEC50CAF5879190AFE6DECCF9269 ** get_address_of_rectangularBounds_37() { return &___rectangularBounds_37; }
	inline void set_rectangularBounds_37(InscribedRectangle_t8C3D61D1D8B9DEC50CAF5879190AFE6DECCF9269 * value)
	{
		___rectangularBounds_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rectangularBounds_37), (void*)value);
	}

	inline static int32_t get_offset_of_currentFloorObject_38() { return static_cast<int32_t>(offsetof(MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896, ___currentFloorObject_38)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_currentFloorObject_38() const { return ___currentFloorObject_38; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_currentFloorObject_38() { return &___currentFloorObject_38; }
	inline void set_currentFloorObject_38(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___currentFloorObject_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentFloorObject_38), (void*)value);
	}

	inline static int32_t get_offset_of_currentPlayAreaObject_39() { return static_cast<int32_t>(offsetof(MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896, ___currentPlayAreaObject_39)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_currentPlayAreaObject_39() const { return ___currentPlayAreaObject_39; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_currentPlayAreaObject_39() { return &___currentPlayAreaObject_39; }
	inline void set_currentPlayAreaObject_39(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___currentPlayAreaObject_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentPlayAreaObject_39), (void*)value);
	}

	inline static int32_t get_offset_of_currentTrackedAreaObject_40() { return static_cast<int32_t>(offsetof(MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896, ___currentTrackedAreaObject_40)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_currentTrackedAreaObject_40() const { return ___currentTrackedAreaObject_40; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_currentTrackedAreaObject_40() { return &___currentTrackedAreaObject_40; }
	inline void set_currentTrackedAreaObject_40(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___currentTrackedAreaObject_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentTrackedAreaObject_40), (void*)value);
	}

	inline static int32_t get_offset_of_currentBoundaryWallObject_41() { return static_cast<int32_t>(offsetof(MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896, ___currentBoundaryWallObject_41)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_currentBoundaryWallObject_41() const { return ___currentBoundaryWallObject_41; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_currentBoundaryWallObject_41() { return &___currentBoundaryWallObject_41; }
	inline void set_currentBoundaryWallObject_41(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___currentBoundaryWallObject_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentBoundaryWallObject_41), (void*)value);
	}

	inline static int32_t get_offset_of_currentCeilingObject_42() { return static_cast<int32_t>(offsetof(MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896, ___currentCeilingObject_42)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_currentCeilingObject_42() const { return ___currentCeilingObject_42; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_currentCeilingObject_42() { return &___currentCeilingObject_42; }
	inline void set_currentCeilingObject_42(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___currentCeilingObject_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentCeilingObject_42), (void*)value);
	}
};

struct MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896_StaticFields
{
public:
	// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<Microsoft.MixedReality.Toolkit.Boundary.IMixedRealityBoundaryHandler> Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::OnVisualizationChanged
	EventFunction_1_t97D0C3B1C38BD8910A6C8BA1C38B402288281E1D * ___OnVisualizationChanged_15;

public:
	inline static int32_t get_offset_of_OnVisualizationChanged_15() { return static_cast<int32_t>(offsetof(MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896_StaticFields, ___OnVisualizationChanged_15)); }
	inline EventFunction_1_t97D0C3B1C38BD8910A6C8BA1C38B402288281E1D * get_OnVisualizationChanged_15() const { return ___OnVisualizationChanged_15; }
	inline EventFunction_1_t97D0C3B1C38BD8910A6C8BA1C38B402288281E1D ** get_address_of_OnVisualizationChanged_15() { return &___OnVisualizationChanged_15; }
	inline void set_OnVisualizationChanged_15(EventFunction_1_t97D0C3B1C38BD8910A6C8BA1C38B402288281E1D * value)
	{
		___OnVisualizationChanged_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnVisualizationChanged_15), (void*)value);
	}
};


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

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Material
struct  Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.ScriptableObject
struct  ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_pinvoke : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_com : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
};

// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct  BaseMixedRealityProfile_t94F8622EEDD7F13CFA936C16501EDC6ADE26A95B  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile::isCustomProfile
	bool ___isCustomProfile_4;

public:
	inline static int32_t get_offset_of_isCustomProfile_4() { return static_cast<int32_t>(offsetof(BaseMixedRealityProfile_t94F8622EEDD7F13CFA936C16501EDC6ADE26A95B, ___isCustomProfile_4)); }
	inline bool get_isCustomProfile_4() const { return ___isCustomProfile_4; }
	inline bool* get_address_of_isCustomProfile_4() { return &___isCustomProfile_4; }
	inline void set_isCustomProfile_4(bool value)
	{
		___isCustomProfile_4 = value;
	}
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.EventSystems.ExecuteEvents_EventFunction`1<Microsoft.MixedReality.Toolkit.Boundary.IMixedRealityBoundaryHandler>
struct  EventFunction_1_t97D0C3B1C38BD8910A6C8BA1C38B402288281E1D  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Renderer
struct  Renderer_t0556D67DD582620D1F495627EDE30D03284151F4  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile
struct  MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55  : public BaseMixedRealityProfile_t94F8622EEDD7F13CFA936C16501EDC6ADE26A95B
{
public:
	// System.Single Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::boundaryHeight
	float ___boundaryHeight_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::showFloor
	bool ___showFloor_6;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::floorMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___floorMaterial_7;
	// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::floorPhysicsLayer
	int32_t ___floorPhysicsLayer_8;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::floorScale
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___floorScale_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::showPlayArea
	bool ___showPlayArea_10;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::playAreaMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___playAreaMaterial_11;
	// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::playAreaPhysicsLayer
	int32_t ___playAreaPhysicsLayer_12;
	// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::showTrackedArea
	bool ___showTrackedArea_13;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::trackedAreaMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___trackedAreaMaterial_14;
	// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::trackedAreaPhysicsLayer
	int32_t ___trackedAreaPhysicsLayer_15;
	// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::showBoundaryWalls
	bool ___showBoundaryWalls_16;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::boundaryWallMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___boundaryWallMaterial_17;
	// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::boundaryWallsPhysicsLayer
	int32_t ___boundaryWallsPhysicsLayer_18;
	// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::showBoundaryCeiling
	bool ___showBoundaryCeiling_19;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::boundaryCeilingMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___boundaryCeilingMaterial_20;
	// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::ceilingPhysicsLayer
	int32_t ___ceilingPhysicsLayer_21;

public:
	inline static int32_t get_offset_of_boundaryHeight_5() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55, ___boundaryHeight_5)); }
	inline float get_boundaryHeight_5() const { return ___boundaryHeight_5; }
	inline float* get_address_of_boundaryHeight_5() { return &___boundaryHeight_5; }
	inline void set_boundaryHeight_5(float value)
	{
		___boundaryHeight_5 = value;
	}

	inline static int32_t get_offset_of_showFloor_6() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55, ___showFloor_6)); }
	inline bool get_showFloor_6() const { return ___showFloor_6; }
	inline bool* get_address_of_showFloor_6() { return &___showFloor_6; }
	inline void set_showFloor_6(bool value)
	{
		___showFloor_6 = value;
	}

	inline static int32_t get_offset_of_floorMaterial_7() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55, ___floorMaterial_7)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_floorMaterial_7() const { return ___floorMaterial_7; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_floorMaterial_7() { return &___floorMaterial_7; }
	inline void set_floorMaterial_7(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___floorMaterial_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___floorMaterial_7), (void*)value);
	}

	inline static int32_t get_offset_of_floorPhysicsLayer_8() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55, ___floorPhysicsLayer_8)); }
	inline int32_t get_floorPhysicsLayer_8() const { return ___floorPhysicsLayer_8; }
	inline int32_t* get_address_of_floorPhysicsLayer_8() { return &___floorPhysicsLayer_8; }
	inline void set_floorPhysicsLayer_8(int32_t value)
	{
		___floorPhysicsLayer_8 = value;
	}

	inline static int32_t get_offset_of_floorScale_9() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55, ___floorScale_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_floorScale_9() const { return ___floorScale_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_floorScale_9() { return &___floorScale_9; }
	inline void set_floorScale_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___floorScale_9 = value;
	}

	inline static int32_t get_offset_of_showPlayArea_10() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55, ___showPlayArea_10)); }
	inline bool get_showPlayArea_10() const { return ___showPlayArea_10; }
	inline bool* get_address_of_showPlayArea_10() { return &___showPlayArea_10; }
	inline void set_showPlayArea_10(bool value)
	{
		___showPlayArea_10 = value;
	}

	inline static int32_t get_offset_of_playAreaMaterial_11() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55, ___playAreaMaterial_11)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_playAreaMaterial_11() const { return ___playAreaMaterial_11; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_playAreaMaterial_11() { return &___playAreaMaterial_11; }
	inline void set_playAreaMaterial_11(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___playAreaMaterial_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playAreaMaterial_11), (void*)value);
	}

	inline static int32_t get_offset_of_playAreaPhysicsLayer_12() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55, ___playAreaPhysicsLayer_12)); }
	inline int32_t get_playAreaPhysicsLayer_12() const { return ___playAreaPhysicsLayer_12; }
	inline int32_t* get_address_of_playAreaPhysicsLayer_12() { return &___playAreaPhysicsLayer_12; }
	inline void set_playAreaPhysicsLayer_12(int32_t value)
	{
		___playAreaPhysicsLayer_12 = value;
	}

	inline static int32_t get_offset_of_showTrackedArea_13() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55, ___showTrackedArea_13)); }
	inline bool get_showTrackedArea_13() const { return ___showTrackedArea_13; }
	inline bool* get_address_of_showTrackedArea_13() { return &___showTrackedArea_13; }
	inline void set_showTrackedArea_13(bool value)
	{
		___showTrackedArea_13 = value;
	}

	inline static int32_t get_offset_of_trackedAreaMaterial_14() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55, ___trackedAreaMaterial_14)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_trackedAreaMaterial_14() const { return ___trackedAreaMaterial_14; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_trackedAreaMaterial_14() { return &___trackedAreaMaterial_14; }
	inline void set_trackedAreaMaterial_14(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___trackedAreaMaterial_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackedAreaMaterial_14), (void*)value);
	}

	inline static int32_t get_offset_of_trackedAreaPhysicsLayer_15() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55, ___trackedAreaPhysicsLayer_15)); }
	inline int32_t get_trackedAreaPhysicsLayer_15() const { return ___trackedAreaPhysicsLayer_15; }
	inline int32_t* get_address_of_trackedAreaPhysicsLayer_15() { return &___trackedAreaPhysicsLayer_15; }
	inline void set_trackedAreaPhysicsLayer_15(int32_t value)
	{
		___trackedAreaPhysicsLayer_15 = value;
	}

	inline static int32_t get_offset_of_showBoundaryWalls_16() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55, ___showBoundaryWalls_16)); }
	inline bool get_showBoundaryWalls_16() const { return ___showBoundaryWalls_16; }
	inline bool* get_address_of_showBoundaryWalls_16() { return &___showBoundaryWalls_16; }
	inline void set_showBoundaryWalls_16(bool value)
	{
		___showBoundaryWalls_16 = value;
	}

	inline static int32_t get_offset_of_boundaryWallMaterial_17() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55, ___boundaryWallMaterial_17)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_boundaryWallMaterial_17() const { return ___boundaryWallMaterial_17; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_boundaryWallMaterial_17() { return &___boundaryWallMaterial_17; }
	inline void set_boundaryWallMaterial_17(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___boundaryWallMaterial_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundaryWallMaterial_17), (void*)value);
	}

	inline static int32_t get_offset_of_boundaryWallsPhysicsLayer_18() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55, ___boundaryWallsPhysicsLayer_18)); }
	inline int32_t get_boundaryWallsPhysicsLayer_18() const { return ___boundaryWallsPhysicsLayer_18; }
	inline int32_t* get_address_of_boundaryWallsPhysicsLayer_18() { return &___boundaryWallsPhysicsLayer_18; }
	inline void set_boundaryWallsPhysicsLayer_18(int32_t value)
	{
		___boundaryWallsPhysicsLayer_18 = value;
	}

	inline static int32_t get_offset_of_showBoundaryCeiling_19() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55, ___showBoundaryCeiling_19)); }
	inline bool get_showBoundaryCeiling_19() const { return ___showBoundaryCeiling_19; }
	inline bool* get_address_of_showBoundaryCeiling_19() { return &___showBoundaryCeiling_19; }
	inline void set_showBoundaryCeiling_19(bool value)
	{
		___showBoundaryCeiling_19 = value;
	}

	inline static int32_t get_offset_of_boundaryCeilingMaterial_20() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55, ___boundaryCeilingMaterial_20)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_boundaryCeilingMaterial_20() const { return ___boundaryCeilingMaterial_20; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_boundaryCeilingMaterial_20() { return &___boundaryCeilingMaterial_20; }
	inline void set_boundaryCeilingMaterial_20(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___boundaryCeilingMaterial_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundaryCeilingMaterial_20), (void*)value);
	}

	inline static int32_t get_offset_of_ceilingPhysicsLayer_21() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55, ___ceilingPhysicsLayer_21)); }
	inline int32_t get_ceilingPhysicsLayer_21() const { return ___ceilingPhysicsLayer_21; }
	inline int32_t* get_address_of_ceilingPhysicsLayer_21() { return &___ceilingPhysicsLayer_21; }
	inline void set_ceilingPhysicsLayer_21(int32_t value)
	{
		___ceilingPhysicsLayer_21 = value;
	}
};


// UnityEngine.LineRenderer
struct  LineRenderer_tD225C480F28F28A4D737866474F21001B803B7C3  : public Renderer_t0556D67DD582620D1F495627EDE30D03284151F4
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// UnityEngine.EventSystems.EventSystem
struct  EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_t4FB5BF302DAD74D690156A022C4FA4D4081E9B26 * ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939 * ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * ___m_DummyData_13;

public:
	inline static int32_t get_offset_of_m_SystemInputModules_4() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_SystemInputModules_4)); }
	inline List_1_t4FB5BF302DAD74D690156A022C4FA4D4081E9B26 * get_m_SystemInputModules_4() const { return ___m_SystemInputModules_4; }
	inline List_1_t4FB5BF302DAD74D690156A022C4FA4D4081E9B26 ** get_address_of_m_SystemInputModules_4() { return &___m_SystemInputModules_4; }
	inline void set_m_SystemInputModules_4(List_1_t4FB5BF302DAD74D690156A022C4FA4D4081E9B26 * value)
	{
		___m_SystemInputModules_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SystemInputModules_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentInputModule_5() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_CurrentInputModule_5)); }
	inline BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939 * get_m_CurrentInputModule_5() const { return ___m_CurrentInputModule_5; }
	inline BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939 ** get_address_of_m_CurrentInputModule_5() { return &___m_CurrentInputModule_5; }
	inline void set_m_CurrentInputModule_5(BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939 * value)
	{
		___m_CurrentInputModule_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentInputModule_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_FirstSelected_7() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_FirstSelected_7)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_FirstSelected_7() const { return ___m_FirstSelected_7; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_FirstSelected_7() { return &___m_FirstSelected_7; }
	inline void set_m_FirstSelected_7(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_FirstSelected_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FirstSelected_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_sendNavigationEvents_8() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_sendNavigationEvents_8)); }
	inline bool get_m_sendNavigationEvents_8() const { return ___m_sendNavigationEvents_8; }
	inline bool* get_address_of_m_sendNavigationEvents_8() { return &___m_sendNavigationEvents_8; }
	inline void set_m_sendNavigationEvents_8(bool value)
	{
		___m_sendNavigationEvents_8 = value;
	}

	inline static int32_t get_offset_of_m_DragThreshold_9() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_DragThreshold_9)); }
	inline int32_t get_m_DragThreshold_9() const { return ___m_DragThreshold_9; }
	inline int32_t* get_address_of_m_DragThreshold_9() { return &___m_DragThreshold_9; }
	inline void set_m_DragThreshold_9(int32_t value)
	{
		___m_DragThreshold_9 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelected_10() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_CurrentSelected_10)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_CurrentSelected_10() const { return ___m_CurrentSelected_10; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_CurrentSelected_10() { return &___m_CurrentSelected_10; }
	inline void set_m_CurrentSelected_10(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_CurrentSelected_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentSelected_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_HasFocus_11() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_HasFocus_11)); }
	inline bool get_m_HasFocus_11() const { return ___m_HasFocus_11; }
	inline bool* get_address_of_m_HasFocus_11() { return &___m_HasFocus_11; }
	inline void set_m_HasFocus_11(bool value)
	{
		___m_HasFocus_11 = value;
	}

	inline static int32_t get_offset_of_m_SelectionGuard_12() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_SelectionGuard_12)); }
	inline bool get_m_SelectionGuard_12() const { return ___m_SelectionGuard_12; }
	inline bool* get_address_of_m_SelectionGuard_12() { return &___m_SelectionGuard_12; }
	inline void set_m_SelectionGuard_12(bool value)
	{
		___m_SelectionGuard_12 = value;
	}

	inline static int32_t get_offset_of_m_DummyData_13() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_DummyData_13)); }
	inline BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * get_m_DummyData_13() const { return ___m_DummyData_13; }
	inline BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 ** get_address_of_m_DummyData_13() { return &___m_DummyData_13; }
	inline void set_m_DummyData_13(BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * value)
	{
		___m_DummyData_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DummyData_13), (void*)value);
	}
};

struct EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_t882412D5BE0B5BFC1900366319F8B2EB544BDD8B * ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t32541D3F4C935BBA3800256BD21A7CA8148AAC13 * ___s_RaycastComparer_14;

public:
	inline static int32_t get_offset_of_m_EventSystems_6() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_StaticFields, ___m_EventSystems_6)); }
	inline List_1_t882412D5BE0B5BFC1900366319F8B2EB544BDD8B * get_m_EventSystems_6() const { return ___m_EventSystems_6; }
	inline List_1_t882412D5BE0B5BFC1900366319F8B2EB544BDD8B ** get_address_of_m_EventSystems_6() { return &___m_EventSystems_6; }
	inline void set_m_EventSystems_6(List_1_t882412D5BE0B5BFC1900366319F8B2EB544BDD8B * value)
	{
		___m_EventSystems_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystems_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_RaycastComparer_14() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_StaticFields, ___s_RaycastComparer_14)); }
	inline Comparison_1_t32541D3F4C935BBA3800256BD21A7CA8148AAC13 * get_s_RaycastComparer_14() const { return ___s_RaycastComparer_14; }
	inline Comparison_1_t32541D3F4C935BBA3800256BD21A7CA8148AAC13 ** get_address_of_s_RaycastComparer_14() { return &___s_RaycastComparer_14; }
	inline void set_s_RaycastComparer_14(Comparison_1_t32541D3F4C935BBA3800256BD21A7CA8148AAC13 * value)
	{
		___s_RaycastComparer_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_RaycastComparer_14), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Microsoft.MixedReality.Toolkit.Boundary.Edge[]
struct EdgeU5BU5D_t7E044B25C942823DE9859802DCB5083603078A84  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Edge_tDDBEEDA96F6415F4ACED33A74B60C2A60692A89D  m_Items[1];

public:
	inline Edge_tDDBEEDA96F6415F4ACED33A74B60C2A60692A89D  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Edge_tDDBEEDA96F6415F4ACED33A74B60C2A60692A89D * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Edge_tDDBEEDA96F6415F4ACED33A74B60C2A60692A89D  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Edge_tDDBEEDA96F6415F4ACED33A74B60C2A60692A89D  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Edge_tDDBEEDA96F6415F4ACED33A74B60C2A60692A89D * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Edge_tDDBEEDA96F6415F4ACED33A74B60C2A60692A89D  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  m_Items[1];

public:
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		m_Items[index] = value;
	}
};


// !!0[] System.Array::Empty<Microsoft.MixedReality.Toolkit.Boundary.Edge>()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR EdgeU5BU5D_t7E044B25C942823DE9859802DCB5083603078A84* Array_Empty_TisEdge_tDDBEEDA96F6415F4ACED33A74B60C2A60692A89D_mFF8B95EB1BF1B5982472F2DB99A769D71F32259F_gshared_inline (const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Single>::get_HasValue()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC3A17DB301190693522F552F6CB7BC525F3E1F88_gshared_inline (Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Single>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Nullable_1_get_Value_m1EE8221CA0BA4F2442E7B9859AC5A1351199E4A9_gshared (Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m6834ABFBD98D5EFE53A4BD01EA25BC516F24B171_gshared (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mD9F028AEE5C43737BEB50A8DAA8CA939CE314002_gshared (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  List_1_get_Item_mB9D869619B30FC5432E5F514D166A02AE8E8D626_gshared_inline (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, int32_t ___index0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mE053F7A95F30AFF07D69F0DED3DA13AE2EC25E03_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m2E29D30C43F78ABB30F6C7881652C11852FD4D6F_gshared_inline (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<UnityEngine.Vector3>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* List_1_ToArray_m88791B9062762F4E67F8D4233708EF1BF3D50386_gshared (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m9C166B12F3436C88C895D68CE856D15BD1BDF0A2_gshared (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Boundary.Edge>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m78B74AF0F514D366E27B61FFC2DBDDFCDE856A57_gshared (List_1_tF107DDA4D2B267D6DB271286F269CBC499CB1672 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Boundary.Edge>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m0D49B1F3C7C5BFFF75472217A0AF38100D121154_gshared (List_1_tF107DDA4D2B267D6DB271286F269CBC499CB1672 * __this, Edge_tDDBEEDA96F6415F4ACED33A74B60C2A60692A89D  ___item0, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Single>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m7684344C547C49122B242D657ED4F2CA1C5C6B9F_gshared (Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 * __this, float ___value0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Boundary.Edge>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EdgeU5BU5D_t7E044B25C942823DE9859802DCB5083603078A84* List_1_ToArray_m98C9EE2091A054D534779BCEEDFFF9E8E0131060_gshared (List_1_tF107DDA4D2B267D6DB271286F269CBC499CB1672 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventFunction_1__ctor_mC3690E11086D102EEB1BCC561DCA0ACD61D055D1_gshared (EventFunction_1_tCDB8D379DD3CEC56B7828A86C5DCF113D208CF8D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<System.Object>(UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ExecuteEvents_ValidateEventData_TisRuntimeObject_m6AC645E74FA8C753DD50130438B2D226EF2478E4_gshared (BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * ___data0, const RuntimeMethod* method);

// System.Void Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::.ctor(Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile,Microsoft.MixedReality.Toolkit.Utilities.ExperienceScale)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem__ctor_mDBE0558D05EE9D91A93431BC7F18DABF0CD099BF (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 * ___profile0, int32_t ___scale1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseCoreSystem::set_Registrar(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BaseCoreSystem_set_Registrar_m51BB7ED2653C7ED7495E44EB63D4AC94EEF0E24A_inline (BaseCoreSystem_t1B04DCFA7545A86EAA41A8085969CD32B674EF7F * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// !!0[] System.Array::Empty<Microsoft.MixedReality.Toolkit.Boundary.Edge>()
inline EdgeU5BU5D_t7E044B25C942823DE9859802DCB5083603078A84* Array_Empty_TisEdge_tDDBEEDA96F6415F4ACED33A74B60C2A60692A89D_mFF8B95EB1BF1B5982472F2DB99A769D71F32259F_inline (const RuntimeMethod* method)
{
	return ((  EdgeU5BU5D_t7E044B25C942823DE9859802DCB5083603078A84* (*) (const RuntimeMethod*))Array_Empty_TisEdge_tDDBEEDA96F6415F4ACED33A74B60C2A60692A89D_mFF8B95EB1BF1B5982472F2DB99A769D71F32259F_gshared_inline)(method);
}
// System.Void Microsoft.MixedReality.Toolkit.BaseCoreSystem::.ctor(Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseCoreSystem__ctor_mB56B9851E089020ADA019F403720939BA02A6DF2 (BaseCoreSystem_t1B04DCFA7545A86EAA41A8085969CD32B674EF7F * __this, BaseMixedRealityProfile_t94F8622EEDD7F13CFA936C16501EDC6ADE26A95B * ___profile0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::set_Scale(Microsoft.MixedReality.Toolkit.Utilities.ExperienceScale)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_set_Scale_mA4D8467D7B79221EC1ED617AD4169BF831C74BA4_inline (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5 (const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRDevice::get_isPresent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRDevice_get_isPresent_m5B3D1AC4D4D14CB1AEA0FC3625B6ADE05915DDA0 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * EventSystem_get_current_m3151477735829089F66A3E46AD6DAB14CFDDE7BD (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Boundary.BoundaryEventData::.ctor(UnityEngine.EventSystems.EventSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundaryEventData__ctor_mCC1AAAC187AF2A6D9848F29E7AD4E46EF4E7630E (BoundaryEventData_tC9F73BC3895F31B9819342ECF498A94527AFF755 * __this, EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * ___eventSystem0, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::get_BoundaryHeight()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityBoundaryVisualizationProfile_get_BoundaryHeight_m1AF2D3C885258424F883D082B298D90F96346C0B_inline (MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::set_BoundaryHeight(System.Single)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_set_BoundaryHeight_m04A6077170F57BF49D5C39B567DDA8615DA8F12F_inline (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, float ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::SetTrackingSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_SetTrackingSpace_m0A0E4971372B6BFF7C9C2B8AD535B3C7C4399AA2 (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::CalculateBoundaryBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_CalculateBoundaryBounds_mADBFEBD7C538C1AECFF288339D59418DBD64A982 (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.XR.Boundary::set_visible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boundary_set_visible_m02D4A783411F0DC2C2794B45EB8015CA0A447D50 (bool ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::get_ShowFloor()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool MixedRealityBoundaryVisualizationProfile_get_ShowFloor_m0F000AAFE96D76A3B2A9E6A21E4A9152CE3C3C74_inline (MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::set_ShowFloor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_set_ShowFloor_m60A62834B3CAF453D66402D79E7A2CC3248D0442 (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, bool ___value0, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::get_FloorPhysicsLayer()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityBoundaryVisualizationProfile_get_FloorPhysicsLayer_mBA4B353BF01B1BC00D971BB0EB3C20125B487DCF_inline (MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::set_FloorPhysicsLayer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_set_FloorPhysicsLayer_mF88CB1D05522E259D8B87602188A766941FE8EE8 (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::get_ShowPlayArea()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool MixedRealityBoundaryVisualizationProfile_get_ShowPlayArea_m21176B4212C844000EBFB32A1E5F2DBFAF9C6337_inline (MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::set_ShowPlayArea(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_set_ShowPlayArea_m4AB7CD398E88EE5D4F2DA7C816556109D8EE6323 (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, bool ___value0, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::get_PlayAreaPhysicsLayer()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityBoundaryVisualizationProfile_get_PlayAreaPhysicsLayer_m2931F1E59FC513D0A15390C08E423CBAA752750C_inline (MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::set_PlayAreaPhysicsLayer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_set_PlayAreaPhysicsLayer_mF318EB9E1B096CA5384A896F8DE33E82CCE89C03 (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::get_ShowTrackedArea()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool MixedRealityBoundaryVisualizationProfile_get_ShowTrackedArea_mC8B80FEF3661AF824CAFDCFD9745F291892CDBA0_inline (MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::set_ShowTrackedArea(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_set_ShowTrackedArea_m91A480BC0C5276845A028B3E91D8A771BD58C35E (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, bool ___value0, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::get_TrackedAreaPhysicsLayer()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityBoundaryVisualizationProfile_get_TrackedAreaPhysicsLayer_mA59B9EAC98386867EC5B2D1E7EA978892CADC2C9_inline (MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::set_TrackedAreaPhysicsLayer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_set_TrackedAreaPhysicsLayer_m2D11844AEFA0E8B70AC7FAC4E8DFA500739AB0FD (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::get_ShowBoundaryWalls()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool MixedRealityBoundaryVisualizationProfile_get_ShowBoundaryWalls_m756604C3E726D1C2D1429D7B10F530D2A537148C_inline (MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::set_ShowBoundaryWalls(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_set_ShowBoundaryWalls_m020E1CB6E680F0A57276D85397A825B72CFBFB09 (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, bool ___value0, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::get_BoundaryWallsPhysicsLayer()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityBoundaryVisualizationProfile_get_BoundaryWallsPhysicsLayer_m88B8B9C37E535D69260DB1470D4C297FE9C791E2_inline (MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::set_BoundaryWallsPhysicsLayer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_set_BoundaryWallsPhysicsLayer_m12A637C4BFACAAB8D6525140D67A6DD3AEE49F1B (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::get_ShowBoundaryCeiling()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool MixedRealityBoundaryVisualizationProfile_get_ShowBoundaryCeiling_mD781B0FAAC31B25596DC7A093E3532F1EAF44EC9_inline (MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::set_ShowBoundaryCeiling(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_set_ShowBoundaryCeiling_mA404992D09835DA063D8EDBE71D57BA6EB924981 (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, bool ___value0, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::get_CeilingPhysicsLayer()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityBoundaryVisualizationProfile_get_CeilingPhysicsLayer_mC08A4DEB095B3360F9BB97B787F3B35642FB0DB7_inline (MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::set_CeilingPhysicsLayer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_set_CeilingPhysicsLayer_m330D371B781BC6680F6CE1A939D00AE5A7A93D16 (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::get_ShowFloor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityBoundarySystem_get_ShowFloor_m43E4E45E1EB4AE86A611DC497870D9D2A06FF3ED (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::GetFloorVisualization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * MixedRealityBoundarySystem_GetFloorVisualization_mB86E831CC25BE2E7829B0C245A0E227AAEB029DE (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::get_ShowPlayArea()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityBoundarySystem_get_ShowPlayArea_mFB7655411A9940A707A42DACAC0836723E812AF8 (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::GetPlayAreaVisualization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * MixedRealityBoundarySystem_GetPlayAreaVisualization_m74708BC496EFE9FB6F819BE40C9CD56EC5716DD8 (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::get_ShowTrackedArea()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityBoundarySystem_get_ShowTrackedArea_m54DC9CDBCF0F7521101BE53FCAC21A05AD3DC369 (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::GetTrackedAreaVisualization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * MixedRealityBoundarySystem_GetTrackedAreaVisualization_m258989AB14CB56316B1D40B51D31869BDD6D4442 (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::get_ShowBoundaryWalls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityBoundarySystem_get_ShowBoundaryWalls_m595F81167026728E61A9528F7C256414E2ACEF1F (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::GetBoundaryWallVisualization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * MixedRealityBoundarySystem_GetBoundaryWallVisualization_m58C553AE9582810EA6183F0807767E21D051D49C (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::GetBoundaryCeilingVisualization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * MixedRealityBoundarySystem_GetBoundaryCeilingVisualization_m6714940F88E1A3124ADDFF4F584E2C9D3371ED16 (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::RaiseBoundaryVisualizationChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_RaiseBoundaryVisualizationChanged_mD9F8E0F28B5D454E8852ABACC1A715632B753477 (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isEditor_m347E6EE16E5109EF613C83ED98DB1EC6E3EF5E26 (const RuntimeMethod* method);
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_mF6F4415EF22249D6E650FAA40E403283F19B7446 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___obj0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::DetachChildren()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_DetachChildren_m33C6052FA253DC8781DAD266726587B8DCB61A23 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___obj0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::get_ShowBoundaryCeiling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityBoundarySystem_get_ShowBoundaryCeiling_m26A759BD2C347AB4819A488FFE8B0D6C7949E251 (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Boundary.BoundaryEventData::Initialize(Microsoft.MixedReality.Toolkit.Boundary.IMixedRealityBoundarySystem,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundaryEventData_Initialize_mEBB48D20A7CFD13BED76AC4E69679F04B80995E8 (BoundaryEventData_tC9F73BC3895F31B9819342ECF498A94527AFF755 * __this, RuntimeObject* ___boundarySystem0, bool ___isFloorVisualized1, bool ___isPlayAreaVisualized2, bool ___isTrackedAreaVisualized3, bool ___areBoundaryWallsVisualized4, bool ___isCeilingVisualized5, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseEventSystem::Register(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseEventSystem_Register_m3C6D59CB5C008CC21267A15B150E65BFFB5A9E54 (BaseEventSystem_tC4ADB21EAC9DA95E3A19A458B5CA298A1D51707A * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___listener0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseEventSystem::Unregister(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseEventSystem_Unregister_mEE164C5952D9BE5BABB5C12200732981B13BDA1F (BaseEventSystem_tC4ADB21EAC9DA95E3A19A458B5CA298A1D51707A * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___listener0, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::get_SourceName()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* MixedRealityBoundarySystem_get_SourceName_m2B2EDEBBEFB7164E259BDF6E77F88DCC28948ABF_inline (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Abs(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Abs_mC7DD2FB3789B5409055836D0E7D8227AD2099FDC (int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::AddChild(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityPlayspace_AddChild_m7FEC1E034FC123BFD5DA6FB733031B614B428641 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___transform0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, bool ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.GameObject::get_layer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameObject_get_layer_m0DE90D8A3D3AA80497A3A80FBEAC2D207C16B9C8 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_layer_mDAC8037FCFD0CE62DB66004C4342EA20CF604907 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___v0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.EdgeUtilities::IsValidPoint(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EdgeUtilities_IsValidPoint_m4870A2BEB35D12805D74CAA94265154E600A3526 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___point0, const RuntimeMethod* method);
// System.Nullable`1<System.Single> Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::get_FloorHeight()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777  MixedRealityBoundarySystem_get_FloorHeight_mDB6B5C6FDBC0F1B03558D1FDBD439E71D5E1EE26_inline (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Single>::get_HasValue()
inline bool Nullable_1_get_HasValue_mC3A17DB301190693522F552F6CB7BC525F3E1F88_inline (Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 *, const RuntimeMethod*))Nullable_1_get_HasValue_mC3A17DB301190693522F552F6CB7BC525F3E1F88_gshared_inline)(__this, method);
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::InverseTransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  MixedRealityPlayspace_InverseTransformPoint_mD635B5B8B0E441ADF4C9ACF0DF8F1ED5C2459260 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldPosition0, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Single>::get_Value()
inline float Nullable_1_get_Value_m1EE8221CA0BA4F2442E7B9859AC5A1351199E4A9 (Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 * __this, const RuntimeMethod* method)
{
	return ((  float (*) (Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 *, const RuntimeMethod*))Nullable_1_get_Value_m1EE8221CA0BA4F2442E7B9859AC5A1351199E4A9_gshared)(__this, method);
}
// System.Single Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::get_BoundaryHeight()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityBoundarySystem_get_BoundaryHeight_m0EFFD679DFF7030BF815CB9B1DB12B023E6E59D9_inline (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.InscribedRectangle::IsInsideBoundary(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InscribedRectangle_IsInsideBoundary_m31E95FB66FA62E3F575513976C8CF72E0E1F29F1 (InscribedRectangle_t8C3D61D1D8B9DEC50CAF5879190AFE6DECCF9269 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___point0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Boundary.Edge[] Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::get_Bounds()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR EdgeU5BU5D_t7E044B25C942823DE9859802DCB5083603078A84* MixedRealityBoundarySystem_get_Bounds_m8756733AA980CB8658FCD453BBF77F9DD99395D2_inline (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.EdgeUtilities::IsInsideBoundary(Microsoft.MixedReality.Toolkit.Boundary.Edge[],UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EdgeUtilities_IsInsideBoundary_m0B4EC1A10E49BE3FC5321F913ABC556D567ADF58 (EdgeU5BU5D_t7E044B25C942823DE9859802DCB5083603078A84* ___geometryEdges0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___point1, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.InscribedRectangle::get_IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InscribedRectangle_get_IsValid_m859862B26ED72101CC6100DD94964E3946837503 (InscribedRectangle_t8C3D61D1D8B9DEC50CAF5879190AFE6DECCF9269 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Boundary.InscribedRectangle::get_Center()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  InscribedRectangle_get_Center_m6BDE2BB150FD45D7C8053C43970F61D08AA57855_inline (InscribedRectangle_t8C3D61D1D8B9DEC50CAF5879190AFE6DECCF9269 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  MixedRealityPlayspace_TransformPoint_m02AC3DAA560770C3F715EB47AB15E1E30651E757 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___localPosition0, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Boundary.InscribedRectangle::get_Angle()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float InscribedRectangle_get_Angle_mAF48DF73900FB1BE8980907124A98340A7EEA457_inline (InscribedRectangle_t8C3D61D1D8B9DEC50CAF5879190AFE6DECCF9269 * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Boundary.InscribedRectangle::get_Width()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float InscribedRectangle_get_Width_mF3C20F5ECC024AE86815BE064C29EB2BD05FDB52_inline (InscribedRectangle_t8C3D61D1D8B9DEC50CAF5879190AFE6DECCF9269 * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Boundary.InscribedRectangle::get_Height()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float InscribedRectangle_get_Height_m704CE700CAEDB553AD13D87FB40EE112A28C0C21_inline (InscribedRectangle_t8C3D61D1D8B9DEC50CAF5879190AFE6DECCF9269 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::get_FloorScale()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  MixedRealityBoundaryVisualizationProfile_get_FloorScale_m5F332DE19CC5E2009D0294C213BE04F731ADDFC8_inline (MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::CreatePrimitive(UnityEngine.PrimitiveType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GameObject_CreatePrimitive_mA4D35085D817369E4A513FF31D745CEB27B07F6A (int32_t ___type0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  MixedRealityPlayspace_get_Position_mAEFF61ED17A0062DB92AD9F96AB5DAA82E938105 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m0F354939D5084DDFF6B9902E62D3DCA7A3B53EA3 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___translation0, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::get_FloorPhysicsLayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MixedRealityBoundarySystem_get_FloorPhysicsLayer_m69CF905D524F44296D1185F14F11090F4132E0D3 (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared)(__this, method);
}
// UnityEngine.Material Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::get_FloorMaterial()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * MixedRealityBoundaryVisualizationProfile_get_FloorMaterial_m16C6CD262450A416DDF7C20B5472EA44C648F2B2_inline (MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_sharedMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sharedMaterial_mC94A354D9B0FCA081754A7CB51AEE5A9AD3946A3 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::TryGetRectangularBoundsParams(UnityEngine.Vector2&,System.Single&,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityBoundarySystem_TryGetRectangularBoundsParams_mB30F43AB0B74E51D936FB28B96496C3CAF10EB27 (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * ___center0, float* ___angle1, float* ___width2, float* ___height3, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::get_PlayAreaPhysicsLayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MixedRealityBoundarySystem_get_PlayAreaPhysicsLayer_mA8BDD4B6096D301ED2BD95FC8C2A2ACA46369294 (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m610B6793DCC2F987290D328942E649B5B7DE0F9A (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___eulers0, const RuntimeMethod* method);
// UnityEngine.Material Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::get_PlayAreaMaterial()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * MixedRealityBoundaryVisualizationProfile_get_PlayAreaMaterial_m41B9FAA14CC167996AF10FA1B7D9B07A8DF0DA50_inline (MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::get_BoundaryVisualizationParent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * MixedRealityBoundarySystem_get_BoundaryVisualizationParent_m0E284C16B1206119552E3B664D8304AF377824D9 (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
inline void List_1__ctor_m6834ABFBD98D5EFE53A4BD01EA25BC516F24B171 (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *, const RuntimeMethod*))List_1__ctor_m6834ABFBD98D5EFE53A4BD01EA25BC516F24B171_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
inline void List_1_Add_mD9F028AEE5C43737BEB50A8DAA8CA939CE314002 (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , const RuntimeMethod*))List_1_Add_mD9F028AEE5C43737BEB50A8DAA8CA939CE314002_gshared)(__this, ___item0, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  List_1_get_Item_mB9D869619B30FC5432E5F514D166A02AE8E8D626_inline (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  (*) (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *, int32_t, const RuntimeMethod*))List_1_get_Item_mB9D869619B30FC5432E5F514D166A02AE8E8D626_gshared_inline)(__this, ___index0, method);
}
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.LineRenderer>()
inline LineRenderer_tD225C480F28F28A4D737866474F21001B803B7C3 * GameObject_AddComponent_TisLineRenderer_tD225C480F28F28A4D737866474F21001B803B7C3_m6F360048E08E499FB2BFEB8E3428AAF7C16CF7DA (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  LineRenderer_tD225C480F28F28A4D737866474F21001B803B7C3 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mE053F7A95F30AFF07D69F0DED3DA13AE2EC25E03_gshared)(__this, method);
}
// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::get_TrackedAreaPhysicsLayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MixedRealityBoundarySystem_get_TrackedAreaPhysicsLayer_m0D3BA2671879F1EEF76323BB18F5298358D46C1E (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.LineRenderer>()
inline LineRenderer_tD225C480F28F28A4D737866474F21001B803B7C3 * GameObject_GetComponent_TisLineRenderer_tD225C480F28F28A4D737866474F21001B803B7C3_mA7B9D3113E801CA31D9A0A4E9607E4ADC99EF5CA (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  LineRenderer_tD225C480F28F28A4D737866474F21001B803B7C3 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared)(__this, method);
}
// UnityEngine.Material Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::get_TrackedAreaMaterial()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * MixedRealityBoundaryVisualizationProfile_get_TrackedAreaMaterial_m9EE5B8193F00FF40C0AE17DC939A5932B4E9B342_inline (MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.LineRenderer::set_useWorldSpace(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_useWorldSpace_m9D28E9592B6FD74DB5E0C605488732C0E678A69D (LineRenderer_tD225C480F28F28A4D737866474F21001B803B7C3 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.LineRenderer::set_startWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_startWidth_mD680DED793DDE30025DD85C9058E8AC2E5E50ED6 (LineRenderer_tD225C480F28F28A4D737866474F21001B803B7C3 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.LineRenderer::set_endWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_endWidth_mFB8DD50957A4A3767F571D47403298E2AE257A48 (LineRenderer_tD225C480F28F28A4D737866474F21001B803B7C3 * __this, float ___value0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
inline int32_t List_1_get_Count_m2E29D30C43F78ABB30F6C7881652C11852FD4D6F_inline (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *, const RuntimeMethod*))List_1_get_Count_m2E29D30C43F78ABB30F6C7881652C11852FD4D6F_gshared_inline)(__this, method);
}
// System.Void UnityEngine.LineRenderer::set_positionCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_positionCount_mFE47D750AF310FE3073C3F7A46FF116354EDA49F (LineRenderer_tD225C480F28F28A4D737866474F21001B803B7C3 * __this, int32_t ___value0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<UnityEngine.Vector3>::ToArray()
inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* List_1_ToArray_m88791B9062762F4E67F8D4233708EF1BF3D50386 (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, const RuntimeMethod* method)
{
	return ((  Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* (*) (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *, const RuntimeMethod*))List_1_ToArray_m88791B9062762F4E67F8D4233708EF1BF3D50386_gshared)(__this, method);
}
// System.Void UnityEngine.LineRenderer::SetPositions(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_SetPositions_m069643046EDA4A1B749155B5C8A9C94C4EFC27C2 (LineRenderer_tD225C480F28F28A4D737866474F21001B803B7C3 * __this, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___positions0, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::get_BoundaryWallsPhysicsLayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MixedRealityBoundarySystem_get_BoundaryWallsPhysicsLayer_m22D37858D35302CDC8572F0B4779E14123EF745C (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// UnityEngine.Material Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::get_BoundaryWallMaterial()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * MixedRealityBoundaryVisualizationProfile_get_BoundaryWallMaterial_mEB43C47FB57FD4C0DA2FC68CCD4567EFA1E9E6EA_inline (MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Subtraction_m2B347E4311EDBBBF27573E34899D2492E6B063C0 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___a0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m66097AFDF9696BD3E88467D4398D4F82B8A4C7DF (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::Lerp(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_Lerp_m85DD66409D128B4F175627F89FA9D8751B75589F (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___a0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Utilities.MathUtilities::GetAngleBetween(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MathUtilities_GetAngleBetween_mEC425DE0BB56A2FA6B21009A2D23A3718EE60EC3 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___pointA0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___pointB1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Bounds::Encapsulate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds_Encapsulate_mD1F1DAC416D7147E07BF54D87CA7FF84C1088D8D (Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___point0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Bounds_get_size_m0739F2686AE2D3416A33AEF892653091347FD4A6 (Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Bounds::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Bounds_get_center_m4FB6E99F0533EE2D432988B08474D6DC9B8B744B (Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * __this, const RuntimeMethod* method);
// UnityEngine.Material Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile::get_BoundaryCeilingMaterial()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * MixedRealityBoundaryVisualizationProfile_get_BoundaryCeilingMaterial_m7393966652E09608F547DD7BD3BF36BD46CA38A0_inline (MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 * __this, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::get_CeilingPhysicsLayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MixedRealityBoundarySystem_get_CeilingPhysicsLayer_mE0B843EDF4375229AA0C275AEC74C1B88380C627 (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::set_Bounds(Microsoft.MixedReality.Toolkit.Boundary.Edge[])
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_set_Bounds_m668A25F9BE4B9C96BF34677FDBB6EA04DEB04FE9_inline (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, EdgeU5BU5D_t7E044B25C942823DE9859802DCB5083603078A84* ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::set_FloorHeight(System.Nullable`1<System.Single>)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_set_FloorHeight_m74B795A86BD729571567DB9CE53970BF507DD447_inline (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777  ___value0, const RuntimeMethod* method);
// UnityEngine.XR.TrackingSpaceType UnityEngine.XR.XRDevice::GetTrackingSpaceType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRDevice_GetTrackingSpaceType_m075417BECBBFCE6554D24E91F0E2E0264F18826C (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor(System.Int32)
inline void List_1__ctor_m9C166B12F3436C88C895D68CE856D15BD1BDF0A2 (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *, int32_t, const RuntimeMethod*))List_1__ctor_m9C166B12F3436C88C895D68CE856D15BD1BDF0A2_gshared)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Boundary.Edge>::.ctor(System.Int32)
inline void List_1__ctor_m78B74AF0F514D366E27B61FFC2DBDDFCDE856A57 (List_1_tF107DDA4D2B267D6DB271286F269CBC499CB1672 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF107DDA4D2B267D6DB271286F269CBC499CB1672 *, int32_t, const RuntimeMethod*))List_1__ctor_m78B74AF0F514D366E27B61FFC2DBDDFCDE856A57_gshared)(__this, ___capacity0, method);
}
// System.Boolean UnityEngine.Experimental.XR.Boundary::TryGetGeometry(System.Collections.Generic.List`1<UnityEngine.Vector3>,UnityEngine.Experimental.XR.Boundary/Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Boundary_TryGetGeometry_mE516ABC521F94493B6D911938A953FBF44CC8B0F (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * ___geometry0, int32_t ___boundaryType1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Boundary.Edge::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge__ctor_m71D34BDCC1A8CC77E6E3F5B4E5671579E8C5D5A3 (Edge_tDDBEEDA96F6415F4ACED33A74B60C2A60692A89D * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___pointA0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___pointB1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Boundary.Edge>::Add(!0)
inline void List_1_Add_m0D49B1F3C7C5BFFF75472217A0AF38100D121154 (List_1_tF107DDA4D2B267D6DB271286F269CBC499CB1672 * __this, Edge_tDDBEEDA96F6415F4ACED33A74B60C2A60692A89D  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF107DDA4D2B267D6DB271286F269CBC499CB1672 *, Edge_tDDBEEDA96F6415F4ACED33A74B60C2A60692A89D , const RuntimeMethod*))List_1_Add_m0D49B1F3C7C5BFFF75472217A0AF38100D121154_gshared)(__this, ___item0, method);
}
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Min_mCF9BE0E9CAC9F18D207692BB2DAC7F3E1D4E1CB7 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Single>::.ctor(!0)
inline void Nullable_1__ctor_m7684344C547C49122B242D657ED4F2CA1C5C6B9F (Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 * __this, float ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 *, float, const RuntimeMethod*))Nullable_1__ctor_m7684344C547C49122B242D657ED4F2CA1C5C6B9F_gshared)(__this, ___value0, method);
}
// !0[] System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Boundary.Edge>::ToArray()
inline EdgeU5BU5D_t7E044B25C942823DE9859802DCB5083603078A84* List_1_ToArray_m98C9EE2091A054D534779BCEEDFFF9E8E0131060 (List_1_tF107DDA4D2B267D6DB271286F269CBC499CB1672 * __this, const RuntimeMethod* method)
{
	return ((  EdgeU5BU5D_t7E044B25C942823DE9859802DCB5083603078A84* (*) (List_1_tF107DDA4D2B267D6DB271286F269CBC499CB1672 *, const RuntimeMethod*))List_1_ToArray_m98C9EE2091A054D534779BCEEDFFF9E8E0131060_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::CreateInscribedBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_CreateInscribedBounds_m115CC815EC0C5523FC14CC96ACD5E131E02BFFE3 (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Boundary.InscribedRectangle::.ctor(Microsoft.MixedReality.Toolkit.Boundary.Edge[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InscribedRectangle__ctor_mBDD666F20E8802FB4727F25E006142EF0986D02B (InscribedRectangle_t8C3D61D1D8B9DEC50CAF5879190AFE6DECCF9269 * __this, EdgeU5BU5D_t7E044B25C942823DE9859802DCB5083603078A84* ___geometryEdges0, int32_t ___randomSeed1, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.ExperienceScale Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::get_Scale()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityBoundarySystem_get_Scale_m6D97920BD86A0F3ADAF9B799C1ADF1EBEB2B91FC_inline (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRDevice::SetTrackingSpaceType(UnityEngine.XR.TrackingSpaceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRDevice_SetTrackingSpaceType_m76C173A76AD74AF048561FCEC0704F6A2E476B88 (int32_t ___trackingSpaceType0, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Boundary.IMixedRealityBoundaryHandler>::.ctor(System.Object,System.IntPtr)
inline void EventFunction_1__ctor_m3C9317BE669D592331E1C2AAAC8D33E17792DC34 (EventFunction_1_t97D0C3B1C38BD8910A6C8BA1C38B402288281E1D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventFunction_1_t97D0C3B1C38BD8910A6C8BA1C38B402288281E1D *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventFunction_1__ctor_mC3690E11086D102EEB1BCC561DCA0ACD61D055D1_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m33B88BE993CB89F732F8B624F4F468B434D0C1E3 (U3CU3Ec_tC079DC849FD558F5A392DBED4FEC5A94C3956213 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// !!0 UnityEngine.EventSystems.ExecuteEvents::ValidateEventData<Microsoft.MixedReality.Toolkit.Boundary.BoundaryEventData>(UnityEngine.EventSystems.BaseEventData)
inline BoundaryEventData_tC9F73BC3895F31B9819342ECF498A94527AFF755 * ExecuteEvents_ValidateEventData_TisBoundaryEventData_tC9F73BC3895F31B9819342ECF498A94527AFF755_m25DF805CFF0C7C87990D589B6A24C5426752E5FF (BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * ___data0, const RuntimeMethod* method)
{
	return ((  BoundaryEventData_tC9F73BC3895F31B9819342ECF498A94527AFF755 * (*) (BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 *, const RuntimeMethod*))ExecuteEvents_ValidateEventData_TisRuntimeObject_m6AC645E74FA8C753DD50130438B2D226EF2478E4_gshared)(___data0, method);
}
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550 (const RuntimeMethod* method);
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
// System.Void Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::.ctor(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar,Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile,Microsoft.MixedReality.Toolkit.Utilities.ExperienceScale)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem__ctor_m052A50BF07D05E987A1A5D11192C734975762125 (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, RuntimeObject* ___registrar0, MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 * ___profile1, int32_t ___scale2, const RuntimeMethod* method)
{
	{
		// ExperienceScale scale) : this(profile, scale)
		MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 * L_0 = ___profile1;
		int32_t L_1 = ___scale2;
		MixedRealityBoundarySystem__ctor_mDBE0558D05EE9D91A93431BC7F18DABF0CD099BF(__this, L_0, L_1, /*hidden argument*/NULL);
		// Registrar = registrar;
		RuntimeObject* L_2 = ___registrar0;
		BaseCoreSystem_set_Registrar_m51BB7ED2653C7ED7495E44EB63D4AC94EEF0E24A_inline(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::.ctor(Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile,Microsoft.MixedReality.Toolkit.Utilities.ExperienceScale)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem__ctor_mDBE0558D05EE9D91A93431BC7F18DABF0CD099BF (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 * ___profile0, int32_t ___scale1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityBoundarySystem__ctor_mDBE0558D05EE9D91A93431BC7F18DABF0CD099BF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private BoundaryEventData boundaryEventData = null;
		__this->set_boundaryEventData_13((BoundaryEventData_tC9F73BC3895F31B9819342ECF498A94527AFF755 *)NULL);
		// public override string Name { get; protected set; } = "Mixed Reality Boundary System";
		__this->set_U3CNameU3Ek__BackingField_14(_stringLiteral8B9DE5633EA0FF1587D63358C4EEB4B549D20B42);
		// public uint SourceId { get; } = 0;
		__this->set_U3CSourceIdU3Ek__BackingField_16(0);
		// public string SourceName { get; } = "Mixed Reality Boundary System";
		__this->set_U3CSourceNameU3Ek__BackingField_17(_stringLiteral8B9DE5633EA0FF1587D63358C4EEB4B549D20B42);
		// private int ignoreRaycastLayerValue = 2;
		__this->set_ignoreRaycastLayerValue_21(2);
		// private MixedRealityBoundaryVisualizationProfile boundaryVisualizationProfile = null;
		__this->set_boundaryVisualizationProfile_22((MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 *)NULL);
		// public float BoundaryHeight { get; set; } = 3f;
		__this->set_U3CBoundaryHeightU3Ek__BackingField_24((3.0f));
		// private bool showFloor = false;
		__this->set_showFloor_25((bool)0);
		// private bool showPlayArea = false;
		__this->set_showPlayArea_26((bool)0);
		// private bool showTrackedArea = false;
		__this->set_showTrackedArea_28((bool)0);
		// private bool showBoundaryWalls = false;
		__this->set_showBoundaryWalls_30((bool)0);
		// private bool showCeiling = false;
		__this->set_showCeiling_32((bool)0);
		// public Edge[] Bounds { get; private set; } = System.Array.Empty<Edge>();
		EdgeU5BU5D_t7E044B25C942823DE9859802DCB5083603078A84* L_0 = Array_Empty_TisEdge_tDDBEEDA96F6415F4ACED33A74B60C2A60692A89D_mFF8B95EB1BF1B5982472F2DB99A769D71F32259F_inline(/*hidden argument*/Array_Empty_TisEdge_tDDBEEDA96F6415F4ACED33A74B60C2A60692A89D_mFF8B95EB1BF1B5982472F2DB99A769D71F32259F_RuntimeMethod_var);
		__this->set_U3CBoundsU3Ek__BackingField_35(L_0);
		// public float? FloorHeight { get; private set; } = null;
		Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 * L_1 = __this->get_address_of_U3CFloorHeightU3Ek__BackingField_36();
		il2cpp_codegen_initobj(L_1, sizeof(Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 ));
		// private InscribedRectangle rectangularBounds = null;
		__this->set_rectangularBounds_37((InscribedRectangle_t8C3D61D1D8B9DEC50CAF5879190AFE6DECCF9269 *)NULL);
		// private GameObject currentFloorObject = null;
		__this->set_currentFloorObject_38((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL);
		// private GameObject currentPlayAreaObject = null;
		__this->set_currentPlayAreaObject_39((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL);
		// private GameObject currentTrackedAreaObject = null;
		__this->set_currentTrackedAreaObject_40((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL);
		// private GameObject currentBoundaryWallObject = null;
		__this->set_currentBoundaryWallObject_41((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL);
		// private GameObject currentCeilingObject = null;
		__this->set_currentCeilingObject_42((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL);
		// ExperienceScale scale) : base(profile)
		MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 * L_2 = ___profile0;
		BaseCoreSystem__ctor_mB56B9851E089020ADA019F403720939BA02A6DF2(__this, L_2, /*hidden argument*/NULL);
		// Scale = scale;
		int32_t L_3 = ___scale1;
		MixedRealityBoundarySystem_set_Scale_mA4D8467D7B79221EC1ED617AD4169BF831C74BA4_inline(__this, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MixedRealityBoundarySystem_get_Name_mBEBFF9F0F564F1BE941D68C1B2B3B7EA0ACD2887 (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, const RuntimeMethod* method)
{
	{
		// public override string Name { get; protected set; } = "Mixed Reality Boundary System";
		String_t* L_0 = __this->get_U3CNameU3Ek__BackingField_14();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_set_Name_m6DD4247C120E9DE07CC31523B155AE2F122035AE (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public override string Name { get; protected set; } = "Mixed Reality Boundary System";
		String_t* L_0 = ___value0;
		__this->set_U3CNameU3Ek__BackingField_14(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_Initialize_m5C96FBB4FAB590FAEBE64D97A72229837C2EEAE0 (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityBoundarySystem_Initialize_m5C96FBB4FAB590FAEBE64D97A72229837C2EEAE0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B3_0 = 0;
	{
		// if (!Application.isPlaying || !XRDevice.isPresent) { return; }
		bool L_0 = Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_il2cpp_TypeInfo_var);
		bool L_1 = XRDevice_get_isPresent_m5B3D1AC4D4D14CB1AEA0FC3625B6ADE05915DDA0(/*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 1;
	}

IL_0013:
	{
		V_1 = (bool)G_B3_0;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// if (!Application.isPlaying || !XRDevice.isPresent) { return; }
		goto IL_015c;
	}

IL_001d:
	{
		// MixedRealityBoundaryVisualizationProfile profile = ConfigurationProfile as MixedRealityBoundaryVisualizationProfile;
		BaseMixedRealityProfile_t94F8622EEDD7F13CFA936C16501EDC6ADE26A95B * L_3 = VirtFuncInvoker0< BaseMixedRealityProfile_t94F8622EEDD7F13CFA936C16501EDC6ADE26A95B * >::Invoke(19 /* Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::get_ConfigurationProfile() */, __this);
		V_0 = ((MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 *)IsInstClass((RuntimeObject*)L_3, MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55_il2cpp_TypeInfo_var));
		// if (profile == null) { return; }
		MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_2 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003a;
		}
	}
	{
		// if (profile == null) { return; }
		goto IL_015c;
	}

IL_003a:
	{
		// boundaryEventData = new BoundaryEventData(EventSystem.current);
		IL2CPP_RUNTIME_CLASS_INIT(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_il2cpp_TypeInfo_var);
		EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * L_7 = EventSystem_get_current_m3151477735829089F66A3E46AD6DAB14CFDDE7BD(/*hidden argument*/NULL);
		BoundaryEventData_tC9F73BC3895F31B9819342ECF498A94527AFF755 * L_8 = (BoundaryEventData_tC9F73BC3895F31B9819342ECF498A94527AFF755 *)il2cpp_codegen_object_new(BoundaryEventData_tC9F73BC3895F31B9819342ECF498A94527AFF755_il2cpp_TypeInfo_var);
		BoundaryEventData__ctor_mCC1AAAC187AF2A6D9848F29E7AD4E46EF4E7630E(L_8, L_7, /*hidden argument*/NULL);
		__this->set_boundaryEventData_13(L_8);
		// BoundaryHeight = profile.BoundaryHeight;
		MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 * L_9 = V_0;
		NullCheck(L_9);
		float L_10 = MixedRealityBoundaryVisualizationProfile_get_BoundaryHeight_m1AF2D3C885258424F883D082B298D90F96346C0B_inline(L_9, /*hidden argument*/NULL);
		MixedRealityBoundarySystem_set_BoundaryHeight_m04A6077170F57BF49D5C39B567DDA8615DA8F12F_inline(__this, L_10, /*hidden argument*/NULL);
		// SetTrackingSpace();
		MixedRealityBoundarySystem_SetTrackingSpace_m0A0E4971372B6BFF7C9C2B8AD535B3C7C4399AA2(__this, /*hidden argument*/NULL);
		// CalculateBoundaryBounds();
		MixedRealityBoundarySystem_CalculateBoundaryBounds_mADBFEBD7C538C1AECFF288339D59418DBD64A982(__this, /*hidden argument*/NULL);
		// UnityBoundary.visible = true;
		Boundary_set_visible_m02D4A783411F0DC2C2794B45EB8015CA0A447D50((bool)1, /*hidden argument*/NULL);
		// ShowFloor = profile.ShowFloor;
		MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 * L_11 = V_0;
		NullCheck(L_11);
		bool L_12 = MixedRealityBoundaryVisualizationProfile_get_ShowFloor_m0F000AAFE96D76A3B2A9E6A21E4A9152CE3C3C74_inline(L_11, /*hidden argument*/NULL);
		MixedRealityBoundarySystem_set_ShowFloor_m60A62834B3CAF453D66402D79E7A2CC3248D0442(__this, L_12, /*hidden argument*/NULL);
		// FloorPhysicsLayer = profile.FloorPhysicsLayer;
		MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 * L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = MixedRealityBoundaryVisualizationProfile_get_FloorPhysicsLayer_mBA4B353BF01B1BC00D971BB0EB3C20125B487DCF_inline(L_13, /*hidden argument*/NULL);
		MixedRealityBoundarySystem_set_FloorPhysicsLayer_mF88CB1D05522E259D8B87602188A766941FE8EE8(__this, L_14, /*hidden argument*/NULL);
		// ShowPlayArea = profile.ShowPlayArea;
		MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 * L_15 = V_0;
		NullCheck(L_15);
		bool L_16 = MixedRealityBoundaryVisualizationProfile_get_ShowPlayArea_m21176B4212C844000EBFB32A1E5F2DBFAF9C6337_inline(L_15, /*hidden argument*/NULL);
		MixedRealityBoundarySystem_set_ShowPlayArea_m4AB7CD398E88EE5D4F2DA7C816556109D8EE6323(__this, L_16, /*hidden argument*/NULL);
		// PlayAreaPhysicsLayer = profile.PlayAreaPhysicsLayer;
		MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 * L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18 = MixedRealityBoundaryVisualizationProfile_get_PlayAreaPhysicsLayer_m2931F1E59FC513D0A15390C08E423CBAA752750C_inline(L_17, /*hidden argument*/NULL);
		MixedRealityBoundarySystem_set_PlayAreaPhysicsLayer_mF318EB9E1B096CA5384A896F8DE33E82CCE89C03(__this, L_18, /*hidden argument*/NULL);
		// ShowTrackedArea = profile.ShowTrackedArea;
		MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 * L_19 = V_0;
		NullCheck(L_19);
		bool L_20 = MixedRealityBoundaryVisualizationProfile_get_ShowTrackedArea_mC8B80FEF3661AF824CAFDCFD9745F291892CDBA0_inline(L_19, /*hidden argument*/NULL);
		MixedRealityBoundarySystem_set_ShowTrackedArea_m91A480BC0C5276845A028B3E91D8A771BD58C35E(__this, L_20, /*hidden argument*/NULL);
		// TrackedAreaPhysicsLayer = profile.TrackedAreaPhysicsLayer;
		MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 * L_21 = V_0;
		NullCheck(L_21);
		int32_t L_22 = MixedRealityBoundaryVisualizationProfile_get_TrackedAreaPhysicsLayer_mA59B9EAC98386867EC5B2D1E7EA978892CADC2C9_inline(L_21, /*hidden argument*/NULL);
		MixedRealityBoundarySystem_set_TrackedAreaPhysicsLayer_m2D11844AEFA0E8B70AC7FAC4E8DFA500739AB0FD(__this, L_22, /*hidden argument*/NULL);
		// ShowBoundaryWalls = profile.ShowBoundaryWalls;
		MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 * L_23 = V_0;
		NullCheck(L_23);
		bool L_24 = MixedRealityBoundaryVisualizationProfile_get_ShowBoundaryWalls_m756604C3E726D1C2D1429D7B10F530D2A537148C_inline(L_23, /*hidden argument*/NULL);
		MixedRealityBoundarySystem_set_ShowBoundaryWalls_m020E1CB6E680F0A57276D85397A825B72CFBFB09(__this, L_24, /*hidden argument*/NULL);
		// BoundaryWallsPhysicsLayer = profile.BoundaryWallsPhysicsLayer;
		MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 * L_25 = V_0;
		NullCheck(L_25);
		int32_t L_26 = MixedRealityBoundaryVisualizationProfile_get_BoundaryWallsPhysicsLayer_m88B8B9C37E535D69260DB1470D4C297FE9C791E2_inline(L_25, /*hidden argument*/NULL);
		MixedRealityBoundarySystem_set_BoundaryWallsPhysicsLayer_m12A637C4BFACAAB8D6525140D67A6DD3AEE49F1B(__this, L_26, /*hidden argument*/NULL);
		// ShowBoundaryCeiling = profile.ShowBoundaryCeiling;
		MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 * L_27 = V_0;
		NullCheck(L_27);
		bool L_28 = MixedRealityBoundaryVisualizationProfile_get_ShowBoundaryCeiling_mD781B0FAAC31B25596DC7A093E3532F1EAF44EC9_inline(L_27, /*hidden argument*/NULL);
		MixedRealityBoundarySystem_set_ShowBoundaryCeiling_mA404992D09835DA063D8EDBE71D57BA6EB924981(__this, L_28, /*hidden argument*/NULL);
		// CeilingPhysicsLayer = profile.CeilingPhysicsLayer;
		MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 * L_29 = V_0;
		NullCheck(L_29);
		int32_t L_30 = MixedRealityBoundaryVisualizationProfile_get_CeilingPhysicsLayer_mC08A4DEB095B3360F9BB97B787F3B35642FB0DB7_inline(L_29, /*hidden argument*/NULL);
		MixedRealityBoundarySystem_set_CeilingPhysicsLayer_m330D371B781BC6680F6CE1A939D00AE5A7A93D16(__this, L_30, /*hidden argument*/NULL);
		// if (ShowFloor)
		bool L_31 = MixedRealityBoundarySystem_get_ShowFloor_m43E4E45E1EB4AE86A611DC497870D9D2A06FF3ED(__this, /*hidden argument*/NULL);
		V_3 = L_31;
		bool L_32 = V_3;
		if (!L_32)
		{
			goto IL_0101;
		}
	}
	{
		// GetFloorVisualization();
		MixedRealityBoundarySystem_GetFloorVisualization_mB86E831CC25BE2E7829B0C245A0E227AAEB029DE(__this, /*hidden argument*/NULL);
	}

IL_0101:
	{
		// if (ShowPlayArea)
		bool L_33 = MixedRealityBoundarySystem_get_ShowPlayArea_mFB7655411A9940A707A42DACAC0836723E812AF8(__this, /*hidden argument*/NULL);
		V_4 = L_33;
		bool L_34 = V_4;
		if (!L_34)
		{
			goto IL_0116;
		}
	}
	{
		// GetPlayAreaVisualization();
		MixedRealityBoundarySystem_GetPlayAreaVisualization_m74708BC496EFE9FB6F819BE40C9CD56EC5716DD8(__this, /*hidden argument*/NULL);
	}

IL_0116:
	{
		// if (ShowTrackedArea)
		bool L_35 = MixedRealityBoundarySystem_get_ShowTrackedArea_m54DC9CDBCF0F7521101BE53FCAC21A05AD3DC369(__this, /*hidden argument*/NULL);
		V_5 = L_35;
		bool L_36 = V_5;
		if (!L_36)
		{
			goto IL_012b;
		}
	}
	{
		// GetTrackedAreaVisualization();
		MixedRealityBoundarySystem_GetTrackedAreaVisualization_m258989AB14CB56316B1D40B51D31869BDD6D4442(__this, /*hidden argument*/NULL);
	}

IL_012b:
	{
		// if (ShowBoundaryWalls)
		bool L_37 = MixedRealityBoundarySystem_get_ShowBoundaryWalls_m595F81167026728E61A9528F7C256414E2ACEF1F(__this, /*hidden argument*/NULL);
		V_6 = L_37;
		bool L_38 = V_6;
		if (!L_38)
		{
			goto IL_0140;
		}
	}
	{
		// GetBoundaryWallVisualization();
		MixedRealityBoundarySystem_GetBoundaryWallVisualization_m58C553AE9582810EA6183F0807767E21D051D49C(__this, /*hidden argument*/NULL);
	}

IL_0140:
	{
		// if (ShowBoundaryWalls)
		bool L_39 = MixedRealityBoundarySystem_get_ShowBoundaryWalls_m595F81167026728E61A9528F7C256414E2ACEF1F(__this, /*hidden argument*/NULL);
		V_7 = L_39;
		bool L_40 = V_7;
		if (!L_40)
		{
			goto IL_0155;
		}
	}
	{
		// GetBoundaryCeilingVisualization();
		MixedRealityBoundarySystem_GetBoundaryCeilingVisualization_m6714940F88E1A3124ADDFF4F584E2C9D3371ED16(__this, /*hidden argument*/NULL);
	}

IL_0155:
	{
		// RaiseBoundaryVisualizationChanged();
		MixedRealityBoundarySystem_RaiseBoundaryVisualizationChanged_mD9F8E0F28B5D454E8852ABACC1A715632B753477(__this, /*hidden argument*/NULL);
	}

IL_015c:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_Destroy_mE0339A9287D1D8384E35B1FBF648A37CD2A1C432 (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityBoundarySystem_Destroy_mE0339A9287D1D8384E35B1FBF648A37CD2A1C432_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	{
		// if (boundaryVisualizationParent != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_boundaryVisualizationParent_20();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0052;
		}
	}
	{
		// if (Application.isEditor)
		bool L_3 = Application_get_isEditor_m347E6EE16E5109EF613C83ED98DB1EC6E3EF5E26(/*hidden argument*/NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		// Object.DestroyImmediate(boundaryVisualizationParent);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = __this->get_boundaryVisualizationParent_20();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mF6F4415EF22249D6E650FAA40E403283F19B7446(L_5, /*hidden argument*/NULL);
		goto IL_004a;
	}

IL_002b:
	{
		// boundaryVisualizationParent.transform.DetachChildren();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = __this->get_boundaryVisualizationParent_20();
		NullCheck(L_6);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_DetachChildren_m33C6052FA253DC8781DAD266726587B8DCB61A23(L_7, /*hidden argument*/NULL);
		// Object.Destroy(boundaryVisualizationParent);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = __this->get_boundaryVisualizationParent_20();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_8, /*hidden argument*/NULL);
	}

IL_004a:
	{
		// boundaryVisualizationParent = null;
		__this->set_boundaryVisualizationParent_20((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL);
	}

IL_0052:
	{
		// if (currentFloorObject != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = __this->get_currentFloorObject_38();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_10 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_9, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_2 = L_10;
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_0092;
		}
	}
	{
		// if (Application.isEditor)
		bool L_12 = Application_get_isEditor_m347E6EE16E5109EF613C83ED98DB1EC6E3EF5E26(/*hidden argument*/NULL);
		V_3 = L_12;
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_007c;
		}
	}
	{
		// Object.DestroyImmediate(currentFloorObject);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_14 = __this->get_currentFloorObject_38();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mF6F4415EF22249D6E650FAA40E403283F19B7446(L_14, /*hidden argument*/NULL);
		goto IL_008a;
	}

IL_007c:
	{
		// Object.Destroy(currentFloorObject);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_15 = __this->get_currentFloorObject_38();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_15, /*hidden argument*/NULL);
	}

IL_008a:
	{
		// currentFloorObject = null;
		__this->set_currentFloorObject_38((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL);
	}

IL_0092:
	{
		// if (currentPlayAreaObject != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_16 = __this->get_currentPlayAreaObject_39();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_17 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_16, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_4 = L_17;
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_00d6;
		}
	}
	{
		// if (Application.isEditor)
		bool L_19 = Application_get_isEditor_m347E6EE16E5109EF613C83ED98DB1EC6E3EF5E26(/*hidden argument*/NULL);
		V_5 = L_19;
		bool L_20 = V_5;
		if (!L_20)
		{
			goto IL_00c0;
		}
	}
	{
		// Object.DestroyImmediate(currentPlayAreaObject);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_21 = __this->get_currentPlayAreaObject_39();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mF6F4415EF22249D6E650FAA40E403283F19B7446(L_21, /*hidden argument*/NULL);
		goto IL_00ce;
	}

IL_00c0:
	{
		// Object.Destroy(currentPlayAreaObject);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_22 = __this->get_currentPlayAreaObject_39();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_22, /*hidden argument*/NULL);
	}

IL_00ce:
	{
		// currentPlayAreaObject = null;
		__this->set_currentPlayAreaObject_39((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL);
	}

IL_00d6:
	{
		// if (currentTrackedAreaObject != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_23 = __this->get_currentTrackedAreaObject_40();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_24 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_23, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_6 = L_24;
		bool L_25 = V_6;
		if (!L_25)
		{
			goto IL_011a;
		}
	}
	{
		// if (Application.isEditor)
		bool L_26 = Application_get_isEditor_m347E6EE16E5109EF613C83ED98DB1EC6E3EF5E26(/*hidden argument*/NULL);
		V_7 = L_26;
		bool L_27 = V_7;
		if (!L_27)
		{
			goto IL_0104;
		}
	}
	{
		// Object.DestroyImmediate(currentTrackedAreaObject);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_28 = __this->get_currentTrackedAreaObject_40();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mF6F4415EF22249D6E650FAA40E403283F19B7446(L_28, /*hidden argument*/NULL);
		goto IL_0112;
	}

IL_0104:
	{
		// Object.Destroy(currentTrackedAreaObject);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_29 = __this->get_currentTrackedAreaObject_40();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_29, /*hidden argument*/NULL);
	}

IL_0112:
	{
		// currentTrackedAreaObject = null;
		__this->set_currentTrackedAreaObject_40((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL);
	}

IL_011a:
	{
		// if (currentBoundaryWallObject != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_30 = __this->get_currentBoundaryWallObject_41();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_31 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_30, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_8 = L_31;
		bool L_32 = V_8;
		if (!L_32)
		{
			goto IL_015e;
		}
	}
	{
		// if (Application.isEditor)
		bool L_33 = Application_get_isEditor_m347E6EE16E5109EF613C83ED98DB1EC6E3EF5E26(/*hidden argument*/NULL);
		V_9 = L_33;
		bool L_34 = V_9;
		if (!L_34)
		{
			goto IL_0148;
		}
	}
	{
		// Object.DestroyImmediate(currentBoundaryWallObject);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_35 = __this->get_currentBoundaryWallObject_41();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mF6F4415EF22249D6E650FAA40E403283F19B7446(L_35, /*hidden argument*/NULL);
		goto IL_0156;
	}

IL_0148:
	{
		// Object.Destroy(currentBoundaryWallObject);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_36 = __this->get_currentBoundaryWallObject_41();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_36, /*hidden argument*/NULL);
	}

IL_0156:
	{
		// currentBoundaryWallObject = null;
		__this->set_currentBoundaryWallObject_41((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL);
	}

IL_015e:
	{
		// if (currentCeilingObject != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_37 = __this->get_currentCeilingObject_42();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_38 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_37, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_10 = L_38;
		bool L_39 = V_10;
		if (!L_39)
		{
			goto IL_01a2;
		}
	}
	{
		// if (Application.isEditor)
		bool L_40 = Application_get_isEditor_m347E6EE16E5109EF613C83ED98DB1EC6E3EF5E26(/*hidden argument*/NULL);
		V_11 = L_40;
		bool L_41 = V_11;
		if (!L_41)
		{
			goto IL_018c;
		}
	}
	{
		// Object.DestroyImmediate(currentCeilingObject);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_42 = __this->get_currentCeilingObject_42();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mF6F4415EF22249D6E650FAA40E403283F19B7446(L_42, /*hidden argument*/NULL);
		goto IL_019a;
	}

IL_018c:
	{
		// Object.Destroy(currentCeilingObject);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_43 = __this->get_currentCeilingObject_42();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_43, /*hidden argument*/NULL);
	}

IL_019a:
	{
		// currentCeilingObject = null;
		__this->set_currentCeilingObject_42((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL);
	}

IL_01a2:
	{
		// showFloor = false;
		__this->set_showFloor_25((bool)0);
		// showPlayArea = false;
		__this->set_showPlayArea_26((bool)0);
		// showTrackedArea = false;
		__this->set_showTrackedArea_28((bool)0);
		// showBoundaryWalls = false;
		__this->set_showBoundaryWalls_30((bool)0);
		// showCeiling = false;
		__this->set_showCeiling_32((bool)0);
		// RaiseBoundaryVisualizationChanged();
		MixedRealityBoundarySystem_RaiseBoundaryVisualizationChanged_mD9F8E0F28B5D454E8852ABACC1A715632B753477(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::RaiseBoundaryVisualizationChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_RaiseBoundaryVisualizationChanged_mD9F8E0F28B5D454E8852ABACC1A715632B753477 (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityBoundarySystem_RaiseBoundaryVisualizationChanged_mD9F8E0F28B5D454E8852ABACC1A715632B753477_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (!Application.isPlaying || boundaryEventData == null) { return; }
		bool L_0 = Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		BoundaryEventData_tC9F73BC3895F31B9819342ECF498A94527AFF755 * L_1 = __this->get_boundaryEventData_13();
		G_B3_0 = ((((RuntimeObject*)(BoundaryEventData_tC9F73BC3895F31B9819342ECF498A94527AFF755 *)L_1) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// if (!Application.isPlaying || boundaryEventData == null) { return; }
		goto IL_0058;
	}

IL_001b:
	{
		// boundaryEventData.Initialize(this, ShowFloor, ShowPlayArea, ShowTrackedArea, ShowBoundaryWalls, ShowBoundaryCeiling);
		BoundaryEventData_tC9F73BC3895F31B9819342ECF498A94527AFF755 * L_3 = __this->get_boundaryEventData_13();
		bool L_4 = MixedRealityBoundarySystem_get_ShowFloor_m43E4E45E1EB4AE86A611DC497870D9D2A06FF3ED(__this, /*hidden argument*/NULL);
		bool L_5 = MixedRealityBoundarySystem_get_ShowPlayArea_mFB7655411A9940A707A42DACAC0836723E812AF8(__this, /*hidden argument*/NULL);
		bool L_6 = MixedRealityBoundarySystem_get_ShowTrackedArea_m54DC9CDBCF0F7521101BE53FCAC21A05AD3DC369(__this, /*hidden argument*/NULL);
		bool L_7 = MixedRealityBoundarySystem_get_ShowBoundaryWalls_m595F81167026728E61A9528F7C256414E2ACEF1F(__this, /*hidden argument*/NULL);
		bool L_8 = MixedRealityBoundarySystem_get_ShowBoundaryCeiling_m26A759BD2C347AB4819A488FFE8B0D6C7949E251(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		BoundaryEventData_Initialize_mEBB48D20A7CFD13BED76AC4E69679F04B80995E8(L_3, __this, L_4, L_5, L_6, L_7, L_8, /*hidden argument*/NULL);
		// HandleEvent(boundaryEventData, OnVisualizationChanged);
		BoundaryEventData_tC9F73BC3895F31B9819342ECF498A94527AFF755 * L_9 = __this->get_boundaryEventData_13();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896_il2cpp_TypeInfo_var);
		EventFunction_1_t97D0C3B1C38BD8910A6C8BA1C38B402288281E1D * L_10 = ((MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896_il2cpp_TypeInfo_var))->get_OnVisualizationChanged_15();
		GenericVirtActionInvoker2< BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 *, EventFunction_1_t97D0C3B1C38BD8910A6C8BA1C38B402288281E1D * >::Invoke(BaseEventSystem_HandleEvent_TisIMixedRealityBoundaryHandler_tE213C770656488AA0EDEA72965C40CC4EA050CB4_m2D029D35765A000A13CC696B1A1CB69E2775AE56_RuntimeMethod_var, __this, L_9, L_10);
	}

IL_0058:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::Register(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_Register_m1B3372BEC419EC1AC5FE0CC1ABA9BC20BAF29B5B (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___listener0, const RuntimeMethod* method)
{
	{
		// base.Register(listener);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___listener0;
		BaseEventSystem_Register_m3C6D59CB5C008CC21267A15B150E65BFFB5A9E54(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::Unregister(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_Unregister_mD7B927F6681795E0B6173563B7BFA7AD7C57C956 (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___listener0, const RuntimeMethod* method)
{
	{
		// base.Unregister(listener);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___listener0;
		BaseEventSystem_Unregister_mEE164C5952D9BE5BABB5C12200732981B13BDA1F(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityBoundarySystem_System_Collections_IEqualityComparer_Equals_mECFD5662CB20FE3DBC106B5491AF92541A82FA71 (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, RuntimeObject * ___x0, RuntimeObject * ___y1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return false;
		V_0 = (bool)0;
		goto IL_0005;
	}

IL_0005:
	{
		// }
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::GetHashCode(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MixedRealityBoundarySystem_GetHashCode_m95AE819839DC04517F16F68F06C85827300184FD (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityBoundarySystem_GetHashCode_m95AE819839DC04517F16F68F06C85827300184FD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// return Mathf.Abs(SourceName.GetHashCode());
		String_t* L_0 = MixedRealityBoundarySystem_get_SourceName_m2B2EDEBBEFB7164E259BDF6E77F88DCC28948ABF_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		int32_t L_2 = Mathf_Abs_mC7DD2FB3789B5409055836D0E7D8227AD2099FDC(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		// }
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.UInt32 Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::get_SourceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t MixedRealityBoundarySystem_get_SourceId_m4AB58F31F8D28B44335A74455F44B39D59C2E4EE (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, const RuntimeMethod* method)
{
	{
		// public uint SourceId { get; } = 0;
		uint32_t L_0 = __this->get_U3CSourceIdU3Ek__BackingField_16();
		return L_0;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::get_SourceName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MixedRealityBoundarySystem_get_SourceName_m2B2EDEBBEFB7164E259BDF6E77F88DCC28948ABF (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, const RuntimeMethod* method)
{
	{
		// public string SourceName { get; } = "Mixed Reality Boundary System";
		String_t* L_0 = __this->get_U3CSourceNameU3Ek__BackingField_17();
		return L_0;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::get_BoundaryVisualizationParent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * MixedRealityBoundarySystem_get_BoundaryVisualizationParent_m0E284C16B1206119552E3B664D8304AF377824D9 (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityBoundarySystem_get_BoundaryVisualizationParent_m0E284C16B1206119552E3B664D8304AF377824D9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	bool V_1 = false;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_2 = NULL;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_3 = NULL;
	{
		// if (boundaryVisualizationParent != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_boundaryVisualizationParent_20();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// return boundaryVisualizationParent;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = __this->get_boundaryVisualizationParent_20();
		V_2 = L_3;
		goto IL_003f;
	}

IL_001b:
	{
		// var visualizationParent = new GameObject("Boundary System Visualizations");
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686(L_4, _stringLiteral8B86287AB9462502DBA9CAE10FBC19B0FFECCF0A, /*hidden argument*/NULL);
		V_0 = L_4;
		// MixedRealityPlayspace.AddChild(visualizationParent.transform);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = V_0;
		NullCheck(L_5);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPlayspace_tCAEF92B588B4F24DA4609183191F7F8576C1A609_il2cpp_TypeInfo_var);
		MixedRealityPlayspace_AddChild_m7FEC1E034FC123BFD5DA6FB733031B614B428641(L_6, /*hidden argument*/NULL);
		// return boundaryVisualizationParent = visualizationParent;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = V_0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = L_7;
		V_3 = L_8;
		__this->set_boundaryVisualizationParent_20(L_8);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = V_3;
		V_2 = L_9;
		goto IL_003f;
	}

IL_003f:
	{
		// }
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_10 = V_2;
		return L_10;
	}
}
// Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::get_BoundaryVisualizationProfile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 * MixedRealityBoundarySystem_get_BoundaryVisualizationProfile_m5948FD82F0C66FB7ED6EF7EAAD60D6F610FF5245 (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityBoundarySystem_get_BoundaryVisualizationProfile_m5948FD82F0C66FB7ED6EF7EAAD60D6F610FF5245_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 * V_1 = NULL;
	{
		// if (boundaryVisualizationProfile == null)
		MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 * L_0 = __this->get_boundaryVisualizationProfile_22();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// boundaryVisualizationProfile = ConfigurationProfile as MixedRealityBoundaryVisualizationProfile;
		BaseMixedRealityProfile_t94F8622EEDD7F13CFA936C16501EDC6ADE26A95B * L_3 = VirtFuncInvoker0< BaseMixedRealityProfile_t94F8622EEDD7F13CFA936C16501EDC6ADE26A95B * >::Invoke(19 /* Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::get_ConfigurationProfile() */, __this);
		__this->set_boundaryVisualizationProfile_22(((MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 *)IsInstClass((RuntimeObject*)L_3, MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55_il2cpp_TypeInfo_var)));
	}

IL_0024:
	{
		// return boundaryVisualizationProfile;
		MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 * L_4 = __this->get_boundaryVisualizationProfile_22();
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		// }
		MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 * L_5 = V_1;
		return L_5;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.ExperienceScale Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::get_Scale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MixedRealityBoundarySystem_get_Scale_m6D97920BD86A0F3ADAF9B799C1ADF1EBEB2B91FC (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, const RuntimeMethod* method)
{
	{
		// public ExperienceScale Scale { get; set; }
		int32_t L_0 = __this->get_U3CScaleU3Ek__BackingField_23();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::set_Scale(Microsoft.MixedReality.Toolkit.Utilities.ExperienceScale)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_set_Scale_mA4D8467D7B79221EC1ED617AD4169BF831C74BA4 (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public ExperienceScale Scale { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CScaleU3Ek__BackingField_23(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::get_BoundaryHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MixedRealityBoundarySystem_get_BoundaryHeight_m0EFFD679DFF7030BF815CB9B1DB12B023E6E59D9 (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, const RuntimeMethod* method)
{
	{
		// public float BoundaryHeight { get; set; } = 3f;
		float L_0 = __this->get_U3CBoundaryHeightU3Ek__BackingField_24();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::set_BoundaryHeight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_set_BoundaryHeight_m04A6077170F57BF49D5C39B567DDA8615DA8F12F (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float BoundaryHeight { get; set; } = 3f;
		float L_0 = ___value0;
		__this->set_U3CBoundaryHeightU3Ek__BackingField_24(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::get_ShowFloor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityBoundarySystem_get_ShowFloor_m43E4E45E1EB4AE86A611DC497870D9D2A06FF3ED (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// get { return showFloor; }
		bool L_0 = __this->get_showFloor_25();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return showFloor; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::set_ShowFloor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_set_ShowFloor_m60A62834B3CAF453D66402D79E7A2CC3248D0442 (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityBoundarySystem_set_ShowFloor_m60A62834B3CAF453D66402D79E7A2CC3248D0442_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B4_0 = 0;
	{
		// if (showFloor != value)
		bool L_0 = __this->get_showFloor_25();
		bool L_1 = ___value0;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_005f;
		}
	}
	{
		// showFloor = value;
		bool L_3 = ___value0;
		__this->set_showFloor_25(L_3);
		// if (value && (currentFloorObject == null))
		bool L_4 = ___value0;
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = __this->get_currentFloorObject_38();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_5, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		G_B4_0 = ((int32_t)(L_6));
		goto IL_002b;
	}

IL_002a:
	{
		G_B4_0 = 0;
	}

IL_002b:
	{
		V_1 = (bool)G_B4_0;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0038;
		}
	}
	{
		// GetFloorVisualization();
		MixedRealityBoundarySystem_GetFloorVisualization_mB86E831CC25BE2E7829B0C245A0E227AAEB029DE(__this, /*hidden argument*/NULL);
	}

IL_0038:
	{
		// if (currentFloorObject != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = __this->get_currentFloorObject_38();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_8, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_2 = L_9;
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0057;
		}
	}
	{
		// currentFloorObject.SetActive(value);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = __this->get_currentFloorObject_38();
		bool L_12 = ___value0;
		NullCheck(L_11);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_11, L_12, /*hidden argument*/NULL);
	}

IL_0057:
	{
		// RaiseBoundaryVisualizationChanged();
		MixedRealityBoundarySystem_RaiseBoundaryVisualizationChanged_mD9F8E0F28B5D454E8852ABACC1A715632B753477(__this, /*hidden argument*/NULL);
	}

IL_005f:
	{
		// }
		return;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::get_FloorPhysicsLayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MixedRealityBoundarySystem_get_FloorPhysicsLayer_m69CF905D524F44296D1185F14F11090F4132E0D3 (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityBoundarySystem_get_FloorPhysicsLayer_m69CF905D524F44296D1185F14F11090F4132E0D3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// if (currentFloorObject != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_currentFloorObject_38();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// floorPhysicsLayer = currentFloorObject.layer;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = __this->get_currentFloorObject_38();
		NullCheck(L_3);
		int32_t L_4 = GameObject_get_layer_m0DE90D8A3D3AA80497A3A80FBEAC2D207C16B9C8(L_3, /*hidden argument*/NULL);
		__this->set_floorPhysicsLayer_27(L_4);
	}

IL_0024:
	{
		// return floorPhysicsLayer;
		int32_t L_5 = __this->get_floorPhysicsLayer_27();
		V_1 = L_5;
		goto IL_002d;
	}

IL_002d:
	{
		// }
		int32_t L_6 = V_1;
		return L_6;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::set_FloorPhysicsLayer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_set_FloorPhysicsLayer_mF88CB1D05522E259D8B87602188A766941FE8EE8 (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityBoundarySystem_set_FloorPhysicsLayer_mF88CB1D05522E259D8B87602188A766941FE8EE8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// floorPhysicsLayer = value;
		int32_t L_0 = ___value0;
		__this->set_floorPhysicsLayer_27(L_0);
		// if (currentFloorObject != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get_currentFloorObject_38();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		// currentFloorObject.layer = floorPhysicsLayer;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = __this->get_currentFloorObject_38();
		int32_t L_5 = __this->get_floorPhysicsLayer_27();
		NullCheck(L_4);
		GameObject_set_layer_mDAC8037FCFD0CE62DB66004C4342EA20CF604907(L_4, L_5, /*hidden argument*/NULL);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::get_ShowPlayArea()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityBoundarySystem_get_ShowPlayArea_mFB7655411A9940A707A42DACAC0836723E812AF8 (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// get { return showPlayArea; }
		bool L_0 = __this->get_showPlayArea_26();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return showPlayArea; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::set_ShowPlayArea(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_set_ShowPlayArea_m4AB7CD398E88EE5D4F2DA7C816556109D8EE6323 (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityBoundarySystem_set_ShowPlayArea_m4AB7CD398E88EE5D4F2DA7C816556109D8EE6323_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B4_0 = 0;
	{
		// if (showPlayArea != value)
		bool L_0 = __this->get_showPlayArea_26();
		bool L_1 = ___value0;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_005f;
		}
	}
	{
		// showPlayArea = value;
		bool L_3 = ___value0;
		__this->set_showPlayArea_26(L_3);
		// if (value && (currentPlayAreaObject == null))
		bool L_4 = ___value0;
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = __this->get_currentPlayAreaObject_39();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_5, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		G_B4_0 = ((int32_t)(L_6));
		goto IL_002b;
	}

IL_002a:
	{
		G_B4_0 = 0;
	}

IL_002b:
	{
		V_1 = (bool)G_B4_0;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0038;
		}
	}
	{
		// GetPlayAreaVisualization();
		MixedRealityBoundarySystem_GetPlayAreaVisualization_m74708BC496EFE9FB6F819BE40C9CD56EC5716DD8(__this, /*hidden argument*/NULL);
	}

IL_0038:
	{
		// if (currentPlayAreaObject != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = __this->get_currentPlayAreaObject_39();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_8, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_2 = L_9;
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0057;
		}
	}
	{
		// currentPlayAreaObject.SetActive(value);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = __this->get_currentPlayAreaObject_39();
		bool L_12 = ___value0;
		NullCheck(L_11);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_11, L_12, /*hidden argument*/NULL);
	}

IL_0057:
	{
		// RaiseBoundaryVisualizationChanged();
		MixedRealityBoundarySystem_RaiseBoundaryVisualizationChanged_mD9F8E0F28B5D454E8852ABACC1A715632B753477(__this, /*hidden argument*/NULL);
	}

IL_005f:
	{
		// }
		return;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::get_PlayAreaPhysicsLayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MixedRealityBoundarySystem_get_PlayAreaPhysicsLayer_mA8BDD4B6096D301ED2BD95FC8C2A2ACA46369294 (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityBoundarySystem_get_PlayAreaPhysicsLayer_mA8BDD4B6096D301ED2BD95FC8C2A2ACA46369294_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// if (currentPlayAreaObject != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_currentPlayAreaObject_39();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// playAreaPhysicsLayer = currentPlayAreaObject.layer;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = __this->get_currentPlayAreaObject_39();
		NullCheck(L_3);
		int32_t L_4 = GameObject_get_layer_m0DE90D8A3D3AA80497A3A80FBEAC2D207C16B9C8(L_3, /*hidden argument*/NULL);
		__this->set_playAreaPhysicsLayer_29(L_4);
	}

IL_0024:
	{
		// return playAreaPhysicsLayer;
		int32_t L_5 = __this->get_playAreaPhysicsLayer_29();
		V_1 = L_5;
		goto IL_002d;
	}

IL_002d:
	{
		// }
		int32_t L_6 = V_1;
		return L_6;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::set_PlayAreaPhysicsLayer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_set_PlayAreaPhysicsLayer_mF318EB9E1B096CA5384A896F8DE33E82CCE89C03 (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityBoundarySystem_set_PlayAreaPhysicsLayer_mF318EB9E1B096CA5384A896F8DE33E82CCE89C03_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// playAreaPhysicsLayer = value;
		int32_t L_0 = ___value0;
		__this->set_playAreaPhysicsLayer_29(L_0);
		// if (currentPlayAreaObject != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get_currentPlayAreaObject_39();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		// currentPlayAreaObject.layer = playAreaPhysicsLayer;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = __this->get_currentPlayAreaObject_39();
		int32_t L_5 = __this->get_playAreaPhysicsLayer_29();
		NullCheck(L_4);
		GameObject_set_layer_mDAC8037FCFD0CE62DB66004C4342EA20CF604907(L_4, L_5, /*hidden argument*/NULL);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::get_ShowTrackedArea()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityBoundarySystem_get_ShowTrackedArea_m54DC9CDBCF0F7521101BE53FCAC21A05AD3DC369 (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// get { return showTrackedArea; }
		bool L_0 = __this->get_showTrackedArea_28();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return showTrackedArea; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::set_ShowTrackedArea(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_set_ShowTrackedArea_m91A480BC0C5276845A028B3E91D8A771BD58C35E (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityBoundarySystem_set_ShowTrackedArea_m91A480BC0C5276845A028B3E91D8A771BD58C35E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B4_0 = 0;
	{
		// if (showTrackedArea != value)
		bool L_0 = __this->get_showTrackedArea_28();
		bool L_1 = ___value0;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_005f;
		}
	}
	{
		// showTrackedArea = value;
		bool L_3 = ___value0;
		__this->set_showTrackedArea_28(L_3);
		// if (value && (currentTrackedAreaObject == null))
		bool L_4 = ___value0;
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = __this->get_currentTrackedAreaObject_40();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_5, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		G_B4_0 = ((int32_t)(L_6));
		goto IL_002b;
	}

IL_002a:
	{
		G_B4_0 = 0;
	}

IL_002b:
	{
		V_1 = (bool)G_B4_0;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0038;
		}
	}
	{
		// GetTrackedAreaVisualization();
		MixedRealityBoundarySystem_GetTrackedAreaVisualization_m258989AB14CB56316B1D40B51D31869BDD6D4442(__this, /*hidden argument*/NULL);
	}

IL_0038:
	{
		// if (currentTrackedAreaObject != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = __this->get_currentTrackedAreaObject_40();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_8, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_2 = L_9;
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0057;
		}
	}
	{
		// currentTrackedAreaObject.SetActive(value);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = __this->get_currentTrackedAreaObject_40();
		bool L_12 = ___value0;
		NullCheck(L_11);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_11, L_12, /*hidden argument*/NULL);
	}

IL_0057:
	{
		// RaiseBoundaryVisualizationChanged();
		MixedRealityBoundarySystem_RaiseBoundaryVisualizationChanged_mD9F8E0F28B5D454E8852ABACC1A715632B753477(__this, /*hidden argument*/NULL);
	}

IL_005f:
	{
		// }
		return;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::get_TrackedAreaPhysicsLayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MixedRealityBoundarySystem_get_TrackedAreaPhysicsLayer_m0D3BA2671879F1EEF76323BB18F5298358D46C1E (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityBoundarySystem_get_TrackedAreaPhysicsLayer_m0D3BA2671879F1EEF76323BB18F5298358D46C1E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// if (currentTrackedAreaObject != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_currentTrackedAreaObject_40();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// trackedAreaPhysicsLayer = currentTrackedAreaObject.layer;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = __this->get_currentTrackedAreaObject_40();
		NullCheck(L_3);
		int32_t L_4 = GameObject_get_layer_m0DE90D8A3D3AA80497A3A80FBEAC2D207C16B9C8(L_3, /*hidden argument*/NULL);
		__this->set_trackedAreaPhysicsLayer_31(L_4);
	}

IL_0024:
	{
		// return trackedAreaPhysicsLayer;
		int32_t L_5 = __this->get_trackedAreaPhysicsLayer_31();
		V_1 = L_5;
		goto IL_002d;
	}

IL_002d:
	{
		// }
		int32_t L_6 = V_1;
		return L_6;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::set_TrackedAreaPhysicsLayer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_set_TrackedAreaPhysicsLayer_m2D11844AEFA0E8B70AC7FAC4E8DFA500739AB0FD (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityBoundarySystem_set_TrackedAreaPhysicsLayer_m2D11844AEFA0E8B70AC7FAC4E8DFA500739AB0FD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// trackedAreaPhysicsLayer = value;
		int32_t L_0 = ___value0;
		__this->set_trackedAreaPhysicsLayer_31(L_0);
		// if (currentTrackedAreaObject != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get_currentTrackedAreaObject_40();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		// currentTrackedAreaObject.layer = trackedAreaPhysicsLayer;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = __this->get_currentTrackedAreaObject_40();
		int32_t L_5 = __this->get_trackedAreaPhysicsLayer_31();
		NullCheck(L_4);
		GameObject_set_layer_mDAC8037FCFD0CE62DB66004C4342EA20CF604907(L_4, L_5, /*hidden argument*/NULL);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::get_ShowBoundaryWalls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityBoundarySystem_get_ShowBoundaryWalls_m595F81167026728E61A9528F7C256414E2ACEF1F (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// get { return showBoundaryWalls; }
		bool L_0 = __this->get_showBoundaryWalls_30();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return showBoundaryWalls; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::set_ShowBoundaryWalls(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_set_ShowBoundaryWalls_m020E1CB6E680F0A57276D85397A825B72CFBFB09 (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityBoundarySystem_set_ShowBoundaryWalls_m020E1CB6E680F0A57276D85397A825B72CFBFB09_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B4_0 = 0;
	{
		// if (showBoundaryWalls != value)
		bool L_0 = __this->get_showBoundaryWalls_30();
		bool L_1 = ___value0;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_005f;
		}
	}
	{
		// showBoundaryWalls = value;
		bool L_3 = ___value0;
		__this->set_showBoundaryWalls_30(L_3);
		// if (value && (currentBoundaryWallObject == null))
		bool L_4 = ___value0;
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = __this->get_currentBoundaryWallObject_41();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_5, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		G_B4_0 = ((int32_t)(L_6));
		goto IL_002b;
	}

IL_002a:
	{
		G_B4_0 = 0;
	}

IL_002b:
	{
		V_1 = (bool)G_B4_0;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0038;
		}
	}
	{
		// GetBoundaryWallVisualization();
		MixedRealityBoundarySystem_GetBoundaryWallVisualization_m58C553AE9582810EA6183F0807767E21D051D49C(__this, /*hidden argument*/NULL);
	}

IL_0038:
	{
		// if (currentBoundaryWallObject != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = __this->get_currentBoundaryWallObject_41();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_8, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_2 = L_9;
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0057;
		}
	}
	{
		// currentBoundaryWallObject.SetActive(value);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = __this->get_currentBoundaryWallObject_41();
		bool L_12 = ___value0;
		NullCheck(L_11);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_11, L_12, /*hidden argument*/NULL);
	}

IL_0057:
	{
		// RaiseBoundaryVisualizationChanged();
		MixedRealityBoundarySystem_RaiseBoundaryVisualizationChanged_mD9F8E0F28B5D454E8852ABACC1A715632B753477(__this, /*hidden argument*/NULL);
	}

IL_005f:
	{
		// }
		return;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::get_BoundaryWallsPhysicsLayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MixedRealityBoundarySystem_get_BoundaryWallsPhysicsLayer_m22D37858D35302CDC8572F0B4779E14123EF745C (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityBoundarySystem_get_BoundaryWallsPhysicsLayer_m22D37858D35302CDC8572F0B4779E14123EF745C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// if (currentBoundaryWallObject != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_currentBoundaryWallObject_41();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// boundaryWallsPhysicsLayer = currentBoundaryWallObject.layer;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = __this->get_currentBoundaryWallObject_41();
		NullCheck(L_3);
		int32_t L_4 = GameObject_get_layer_m0DE90D8A3D3AA80497A3A80FBEAC2D207C16B9C8(L_3, /*hidden argument*/NULL);
		__this->set_boundaryWallsPhysicsLayer_33(L_4);
	}

IL_0024:
	{
		// return boundaryWallsPhysicsLayer;
		int32_t L_5 = __this->get_boundaryWallsPhysicsLayer_33();
		V_1 = L_5;
		goto IL_002d;
	}

IL_002d:
	{
		// }
		int32_t L_6 = V_1;
		return L_6;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::set_BoundaryWallsPhysicsLayer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_set_BoundaryWallsPhysicsLayer_m12A637C4BFACAAB8D6525140D67A6DD3AEE49F1B (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityBoundarySystem_set_BoundaryWallsPhysicsLayer_m12A637C4BFACAAB8D6525140D67A6DD3AEE49F1B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// boundaryWallsPhysicsLayer = value;
		int32_t L_0 = ___value0;
		__this->set_boundaryWallsPhysicsLayer_33(L_0);
		// if (currentBoundaryWallObject != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get_currentBoundaryWallObject_41();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		// currentBoundaryWallObject.layer = boundaryWallsPhysicsLayer;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = __this->get_currentBoundaryWallObject_41();
		int32_t L_5 = __this->get_boundaryWallsPhysicsLayer_33();
		NullCheck(L_4);
		GameObject_set_layer_mDAC8037FCFD0CE62DB66004C4342EA20CF604907(L_4, L_5, /*hidden argument*/NULL);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::get_ShowBoundaryCeiling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityBoundarySystem_get_ShowBoundaryCeiling_m26A759BD2C347AB4819A488FFE8B0D6C7949E251 (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// get { return showCeiling; }
		bool L_0 = __this->get_showCeiling_32();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return showCeiling; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::set_ShowBoundaryCeiling(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_set_ShowBoundaryCeiling_mA404992D09835DA063D8EDBE71D57BA6EB924981 (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityBoundarySystem_set_ShowBoundaryCeiling_mA404992D09835DA063D8EDBE71D57BA6EB924981_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B4_0 = 0;
	{
		// if (showCeiling != value)
		bool L_0 = __this->get_showCeiling_32();
		bool L_1 = ___value0;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_005f;
		}
	}
	{
		// showCeiling = value;
		bool L_3 = ___value0;
		__this->set_showCeiling_32(L_3);
		// if (value && (currentCeilingObject == null))
		bool L_4 = ___value0;
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = __this->get_currentCeilingObject_42();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_5, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		G_B4_0 = ((int32_t)(L_6));
		goto IL_002b;
	}

IL_002a:
	{
		G_B4_0 = 0;
	}

IL_002b:
	{
		V_1 = (bool)G_B4_0;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0038;
		}
	}
	{
		// GetBoundaryCeilingVisualization();
		MixedRealityBoundarySystem_GetBoundaryCeilingVisualization_m6714940F88E1A3124ADDFF4F584E2C9D3371ED16(__this, /*hidden argument*/NULL);
	}

IL_0038:
	{
		// if (currentCeilingObject != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = __this->get_currentCeilingObject_42();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_8, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_2 = L_9;
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0057;
		}
	}
	{
		// currentCeilingObject.SetActive(value);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = __this->get_currentCeilingObject_42();
		bool L_12 = ___value0;
		NullCheck(L_11);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_11, L_12, /*hidden argument*/NULL);
	}

IL_0057:
	{
		// RaiseBoundaryVisualizationChanged();
		MixedRealityBoundarySystem_RaiseBoundaryVisualizationChanged_mD9F8E0F28B5D454E8852ABACC1A715632B753477(__this, /*hidden argument*/NULL);
	}

IL_005f:
	{
		// }
		return;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::get_CeilingPhysicsLayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MixedRealityBoundarySystem_get_CeilingPhysicsLayer_mE0B843EDF4375229AA0C275AEC74C1B88380C627 (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityBoundarySystem_get_CeilingPhysicsLayer_mE0B843EDF4375229AA0C275AEC74C1B88380C627_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// if (currentCeilingObject != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_currentCeilingObject_42();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// ceilingPhysicsLayer = currentCeilingObject.layer;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = __this->get_currentCeilingObject_42();
		NullCheck(L_3);
		int32_t L_4 = GameObject_get_layer_m0DE90D8A3D3AA80497A3A80FBEAC2D207C16B9C8(L_3, /*hidden argument*/NULL);
		__this->set_ceilingPhysicsLayer_34(L_4);
	}

IL_0024:
	{
		// return ceilingPhysicsLayer;
		int32_t L_5 = __this->get_ceilingPhysicsLayer_34();
		V_1 = L_5;
		goto IL_002d;
	}

IL_002d:
	{
		// }
		int32_t L_6 = V_1;
		return L_6;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::set_CeilingPhysicsLayer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_set_CeilingPhysicsLayer_m330D371B781BC6680F6CE1A939D00AE5A7A93D16 (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityBoundarySystem_set_CeilingPhysicsLayer_m330D371B781BC6680F6CE1A939D00AE5A7A93D16_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// ceilingPhysicsLayer = value;
		int32_t L_0 = ___value0;
		__this->set_ceilingPhysicsLayer_34(L_0);
		// if (currentCeilingObject != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get_currentCeilingObject_42();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		// currentFloorObject.layer = ceilingPhysicsLayer;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = __this->get_currentFloorObject_38();
		int32_t L_5 = __this->get_ceilingPhysicsLayer_34();
		NullCheck(L_4);
		GameObject_set_layer_mDAC8037FCFD0CE62DB66004C4342EA20CF604907(L_4, L_5, /*hidden argument*/NULL);
	}

IL_002c:
	{
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Boundary.Edge[] Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::get_Bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EdgeU5BU5D_t7E044B25C942823DE9859802DCB5083603078A84* MixedRealityBoundarySystem_get_Bounds_m8756733AA980CB8658FCD453BBF77F9DD99395D2 (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, const RuntimeMethod* method)
{
	{
		// public Edge[] Bounds { get; private set; } = System.Array.Empty<Edge>();
		EdgeU5BU5D_t7E044B25C942823DE9859802DCB5083603078A84* L_0 = __this->get_U3CBoundsU3Ek__BackingField_35();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::set_Bounds(Microsoft.MixedReality.Toolkit.Boundary.Edge[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_set_Bounds_m668A25F9BE4B9C96BF34677FDBB6EA04DEB04FE9 (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, EdgeU5BU5D_t7E044B25C942823DE9859802DCB5083603078A84* ___value0, const RuntimeMethod* method)
{
	{
		// public Edge[] Bounds { get; private set; } = System.Array.Empty<Edge>();
		EdgeU5BU5D_t7E044B25C942823DE9859802DCB5083603078A84* L_0 = ___value0;
		__this->set_U3CBoundsU3Ek__BackingField_35(L_0);
		return;
	}
}
// System.Nullable`1<System.Single> Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::get_FloorHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777  MixedRealityBoundarySystem_get_FloorHeight_mDB6B5C6FDBC0F1B03558D1FDBD439E71D5E1EE26 (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, const RuntimeMethod* method)
{
	{
		// public float? FloorHeight { get; private set; } = null;
		Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777  L_0 = __this->get_U3CFloorHeightU3Ek__BackingField_36();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::set_FloorHeight(System.Nullable`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_set_FloorHeight_m74B795A86BD729571567DB9CE53970BF507DD447 (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777  ___value0, const RuntimeMethod* method)
{
	{
		// public float? FloorHeight { get; private set; } = null;
		Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777  L_0 = ___value0;
		__this->set_U3CFloorHeightU3Ek__BackingField_36(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::Contains(UnityEngine.Vector3,Microsoft.MixedReality.Toolkit.Boundary.BoundaryType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityBoundarySystem_Contains_m97F3BD756AEF5BE84B26728E1D1C3A560227961E (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___location0, int32_t ___boundaryType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityBoundarySystem_Contains_m97F3BD756AEF5BE84B26728E1D1C3A560227961E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777  V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	int32_t G_B7_0 = 0;
	{
		// if (!EdgeUtilities.IsValidPoint(location))
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___location0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(EdgeUtilities_t7ED49A615EAAE779B786E14621834709DCC0C330_il2cpp_TypeInfo_var);
		bool L_2 = EdgeUtilities_IsValidPoint_m4870A2BEB35D12805D74CAA94265154E600A3526(L_1, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		// return false;
		V_2 = (bool)0;
		goto IL_00d2;
	}

IL_001b:
	{
		// if (!FloorHeight.HasValue)
		Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777  L_4 = MixedRealityBoundarySystem_get_FloorHeight_mDB6B5C6FDBC0F1B03558D1FDBD439E71D5E1EE26_inline(__this, /*hidden argument*/NULL);
		V_4 = L_4;
		bool L_5 = Nullable_1_get_HasValue_mC3A17DB301190693522F552F6CB7BC525F3E1F88_inline((Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 *)(&V_4), /*hidden argument*/Nullable_1_get_HasValue_mC3A17DB301190693522F552F6CB7BC525F3E1F88_RuntimeMethod_var);
		V_3 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0039;
		}
	}
	{
		// return false;
		V_2 = (bool)0;
		goto IL_00d2;
	}

IL_0039:
	{
		// location = MixedRealityPlayspace.InverseTransformPoint(location);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = ___location0;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPlayspace_tCAEF92B588B4F24DA4609183191F7F8576C1A609_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = MixedRealityPlayspace_InverseTransformPoint_mD635B5B8B0E441ADF4C9ACF0DF8F1ED5C2459260(L_7, /*hidden argument*/NULL);
		___location0 = L_8;
		// if (FloorHeight.Value > location.y ||
		//     BoundaryHeight < location.y)
		Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777  L_9 = MixedRealityBoundarySystem_get_FloorHeight_mDB6B5C6FDBC0F1B03558D1FDBD439E71D5E1EE26_inline(__this, /*hidden argument*/NULL);
		V_4 = L_9;
		float L_10 = Nullable_1_get_Value_m1EE8221CA0BA4F2442E7B9859AC5A1351199E4A9((Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 *)(&V_4), /*hidden argument*/Nullable_1_get_Value_m1EE8221CA0BA4F2442E7B9859AC5A1351199E4A9_RuntimeMethod_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = ___location0;
		float L_12 = L_11.get_y_3();
		if ((((float)L_10) > ((float)L_12)))
		{
			goto IL_0068;
		}
	}
	{
		float L_13 = MixedRealityBoundarySystem_get_BoundaryHeight_m0EFFD679DFF7030BF815CB9B1DB12B023E6E59D9_inline(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = ___location0;
		float L_15 = L_14.get_y_3();
		G_B7_0 = ((((float)L_13) < ((float)L_15))? 1 : 0);
		goto IL_0069;
	}

IL_0068:
	{
		G_B7_0 = 1;
	}

IL_0069:
	{
		V_5 = (bool)G_B7_0;
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_0074;
		}
	}
	{
		// return false;
		V_2 = (bool)0;
		goto IL_00d2;
	}

IL_0074:
	{
		// Vector2 point = new Vector2(location.x, location.z);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = ___location0;
		float L_18 = L_17.get_x_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = ___location0;
		float L_20 = L_19.get_z_4();
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_0), L_18, L_20, /*hidden argument*/NULL);
		// if (boundaryType == BoundaryType.PlayArea)
		int32_t L_21 = ___boundaryType1;
		V_6 = (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_6;
		if (!L_22)
		{
			goto IL_00b4;
		}
	}
	{
		// if (rectangularBounds != null)
		InscribedRectangle_t8C3D61D1D8B9DEC50CAF5879190AFE6DECCF9269 * L_23 = __this->get_rectangularBounds_37();
		V_7 = (bool)((!(((RuntimeObject*)(InscribedRectangle_t8C3D61D1D8B9DEC50CAF5879190AFE6DECCF9269 *)L_23) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_24 = V_7;
		if (!L_24)
		{
			goto IL_00b1;
		}
	}
	{
		// return rectangularBounds.IsInsideBoundary(point);
		InscribedRectangle_t8C3D61D1D8B9DEC50CAF5879190AFE6DECCF9269 * L_25 = __this->get_rectangularBounds_37();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_26 = V_0;
		NullCheck(L_25);
		bool L_27 = InscribedRectangle_IsInsideBoundary_m31E95FB66FA62E3F575513976C8CF72E0E1F29F1(L_25, L_26, /*hidden argument*/NULL);
		V_2 = L_27;
		goto IL_00d2;
	}

IL_00b1:
	{
		goto IL_00ce;
	}

IL_00b4:
	{
		// else if (boundaryType == BoundaryType.TrackedArea)
		int32_t L_28 = ___boundaryType1;
		V_8 = (bool)((((int32_t)L_28) == ((int32_t)1))? 1 : 0);
		bool L_29 = V_8;
		if (!L_29)
		{
			goto IL_00ce;
		}
	}
	{
		// return EdgeUtilities.IsInsideBoundary(Bounds, point);
		EdgeU5BU5D_t7E044B25C942823DE9859802DCB5083603078A84* L_30 = MixedRealityBoundarySystem_get_Bounds_m8756733AA980CB8658FCD453BBF77F9DD99395D2_inline(__this, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_31 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(EdgeUtilities_t7ED49A615EAAE779B786E14621834709DCC0C330_il2cpp_TypeInfo_var);
		bool L_32 = EdgeUtilities_IsInsideBoundary_m0B4EC1A10E49BE3FC5321F913ABC556D567ADF58(L_30, L_31, /*hidden argument*/NULL);
		V_2 = L_32;
		goto IL_00d2;
	}

IL_00ce:
	{
		// return false;
		V_2 = (bool)0;
		goto IL_00d2;
	}

IL_00d2:
	{
		// }
		bool L_33 = V_2;
		return L_33;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::TryGetRectangularBoundsParams(UnityEngine.Vector2&,System.Single&,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityBoundarySystem_TryGetRectangularBoundsParams_mB30F43AB0B74E51D936FB28B96496C3CAF10EB27 (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * ___center0, float* ___angle1, float* ___width2, float* ___height3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityBoundarySystem_TryGetRectangularBoundsParams_mB30F43AB0B74E51D936FB28B96496C3CAF10EB27_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	{
		// if (rectangularBounds == null || !rectangularBounds.IsValid)
		InscribedRectangle_t8C3D61D1D8B9DEC50CAF5879190AFE6DECCF9269 * L_0 = __this->get_rectangularBounds_37();
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		InscribedRectangle_t8C3D61D1D8B9DEC50CAF5879190AFE6DECCF9269 * L_1 = __this->get_rectangularBounds_37();
		NullCheck(L_1);
		bool L_2 = InscribedRectangle_get_IsValid_m859862B26ED72101CC6100DD94964E3946837503(L_1, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 1;
	}

IL_001a:
	{
		V_1 = (bool)G_B3_0;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0044;
		}
	}
	{
		// center = EdgeUtilities.InvalidPoint;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_4 = ___center0;
		IL2CPP_RUNTIME_CLASS_INIT(EdgeUtilities_t7ED49A615EAAE779B786E14621834709DCC0C330_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_5 = ((EdgeUtilities_t7ED49A615EAAE779B786E14621834709DCC0C330_StaticFields*)il2cpp_codegen_static_fields_for(EdgeUtilities_t7ED49A615EAAE779B786E14621834709DCC0C330_il2cpp_TypeInfo_var))->get_InvalidPoint_1();
		*(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)L_4 = L_5;
		// angle = 0f;
		float* L_6 = ___angle1;
		*((float*)L_6) = (float)(0.0f);
		// width = 0f;
		float* L_7 = ___width2;
		*((float*)L_7) = (float)(0.0f);
		// height = 0f;
		float* L_8 = ___height3;
		*((float*)L_8) = (float)(0.0f);
		// return false;
		V_2 = (bool)0;
		goto IL_00b7;
	}

IL_0044:
	{
		// Vector3 transformedCenter = MixedRealityPlayspace.TransformPoint(
		//     new Vector3(rectangularBounds.Center.x, 0f, rectangularBounds.Center.y));
		InscribedRectangle_t8C3D61D1D8B9DEC50CAF5879190AFE6DECCF9269 * L_9 = __this->get_rectangularBounds_37();
		NullCheck(L_9);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_10 = InscribedRectangle_get_Center_m6BDE2BB150FD45D7C8053C43970F61D08AA57855_inline(L_9, /*hidden argument*/NULL);
		float L_11 = L_10.get_x_0();
		InscribedRectangle_t8C3D61D1D8B9DEC50CAF5879190AFE6DECCF9269 * L_12 = __this->get_rectangularBounds_37();
		NullCheck(L_12);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_13 = InscribedRectangle_get_Center_m6BDE2BB150FD45D7C8053C43970F61D08AA57855_inline(L_12, /*hidden argument*/NULL);
		float L_14 = L_13.get_y_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_15), L_11, (0.0f), L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPlayspace_tCAEF92B588B4F24DA4609183191F7F8576C1A609_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = MixedRealityPlayspace_TransformPoint_m02AC3DAA560770C3F715EB47AB15E1E30651E757(L_15, /*hidden argument*/NULL);
		V_0 = L_16;
		// center = new Vector2(transformedCenter.x, transformedCenter.z);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_17 = ___center0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = V_0;
		float L_19 = L_18.get_x_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = V_0;
		float L_21 = L_20.get_z_4();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_22), L_19, L_21, /*hidden argument*/NULL);
		*(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)L_17 = L_22;
		// angle = rectangularBounds.Angle;
		float* L_23 = ___angle1;
		InscribedRectangle_t8C3D61D1D8B9DEC50CAF5879190AFE6DECCF9269 * L_24 = __this->get_rectangularBounds_37();
		NullCheck(L_24);
		float L_25 = InscribedRectangle_get_Angle_mAF48DF73900FB1BE8980907124A98340A7EEA457_inline(L_24, /*hidden argument*/NULL);
		*((float*)L_23) = (float)L_25;
		// width = rectangularBounds.Width;
		float* L_26 = ___width2;
		InscribedRectangle_t8C3D61D1D8B9DEC50CAF5879190AFE6DECCF9269 * L_27 = __this->get_rectangularBounds_37();
		NullCheck(L_27);
		float L_28 = InscribedRectangle_get_Width_mF3C20F5ECC024AE86815BE064C29EB2BD05FDB52_inline(L_27, /*hidden argument*/NULL);
		*((float*)L_26) = (float)L_28;
		// height = rectangularBounds.Height;
		float* L_29 = ___height3;
		InscribedRectangle_t8C3D61D1D8B9DEC50CAF5879190AFE6DECCF9269 * L_30 = __this->get_rectangularBounds_37();
		NullCheck(L_30);
		float L_31 = InscribedRectangle_get_Height_m704CE700CAEDB553AD13D87FB40EE112A28C0C21_inline(L_30, /*hidden argument*/NULL);
		*((float*)L_29) = (float)L_31;
		// return true;
		V_2 = (bool)1;
		goto IL_00b7;
	}

IL_00b7:
	{
		// }
		bool L_32 = V_2;
		return L_32;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::GetFloorVisualization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * MixedRealityBoundarySystem_GetFloorVisualization_mB86E831CC25BE2E7829B0C245A0E227AAEB029DE (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityBoundarySystem_GetFloorVisualization_mB86E831CC25BE2E7829B0C245A0E227AAEB029DE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 * V_0 = NULL;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777  V_7;
	memset((&V_7), 0, sizeof(V_7));
	{
		// if (!Application.isPlaying) { return null; }
		bool L_0 = Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5(/*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// if (!Application.isPlaying) { return null; }
		V_3 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
		goto IL_0147;
	}

IL_0015:
	{
		// if (currentFloorObject != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = __this->get_currentFloorObject_38();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_4 = L_3;
		bool L_4 = V_4;
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		// return currentFloorObject;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = __this->get_currentFloorObject_38();
		V_3 = L_5;
		goto IL_0147;
	}

IL_0034:
	{
		// MixedRealityBoundaryVisualizationProfile profile = ConfigurationProfile as MixedRealityBoundaryVisualizationProfile;
		BaseMixedRealityProfile_t94F8622EEDD7F13CFA936C16501EDC6ADE26A95B * L_6 = VirtFuncInvoker0< BaseMixedRealityProfile_t94F8622EEDD7F13CFA936C16501EDC6ADE26A95B * >::Invoke(19 /* Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::get_ConfigurationProfile() */, __this);
		V_0 = ((MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 *)IsInstClass((RuntimeObject*)L_6, MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55_il2cpp_TypeInfo_var));
		// if (profile == null) { return null; }
		MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 * L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_7, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_5 = L_8;
		bool L_9 = V_5;
		if (!L_9)
		{
			goto IL_0055;
		}
	}
	{
		// if (profile == null) { return null; }
		V_3 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
		goto IL_0147;
	}

IL_0055:
	{
		// if (!FloorHeight.HasValue)
		Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777  L_10 = MixedRealityBoundarySystem_get_FloorHeight_mDB6B5C6FDBC0F1B03558D1FDBD439E71D5E1EE26_inline(__this, /*hidden argument*/NULL);
		V_7 = L_10;
		bool L_11 = Nullable_1_get_HasValue_mC3A17DB301190693522F552F6CB7BC525F3E1F88_inline((Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 *)(&V_7), /*hidden argument*/Nullable_1_get_HasValue_mC3A17DB301190693522F552F6CB7BC525F3E1F88_RuntimeMethod_var);
		V_6 = (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_6;
		if (!L_12)
		{
			goto IL_0075;
		}
	}
	{
		// return null;
		V_3 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
		goto IL_0147;
	}

IL_0075:
	{
		// Vector2 floorScale = profile.FloorScale;
		MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 * L_13 = V_0;
		NullCheck(L_13);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_14 = MixedRealityBoundaryVisualizationProfile_get_FloorScale_m5F332DE19CC5E2009D0294C213BE04F731ADDFC8_inline(L_13, /*hidden argument*/NULL);
		V_1 = L_14;
		// currentFloorObject = GameObject.CreatePrimitive(PrimitiveType.Cube);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_15 = GameObject_CreatePrimitive_mA4D35085D817369E4A513FF31D745CEB27B07F6A(3, /*hidden argument*/NULL);
		__this->set_currentFloorObject_38(L_15);
		// currentFloorObject.name = "Boundary System Floor";
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_16 = __this->get_currentFloorObject_38();
		NullCheck(L_16);
		Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826(L_16, _stringLiteral7FB5E88B95F6DD67982580DA8160B05C3AE91AE3, /*hidden argument*/NULL);
		// currentFloorObject.transform.localScale = new Vector3(floorScale.x, boundaryObjectThickness, floorScale.y);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_17 = __this->get_currentFloorObject_38();
		NullCheck(L_17);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_18 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_17, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_19 = V_1;
		float L_20 = L_19.get_x_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_21 = V_1;
		float L_22 = L_21.get_y_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_23), L_20, (0.005f), L_22, /*hidden argument*/NULL);
		NullCheck(L_18);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_18, L_23, /*hidden argument*/NULL);
		// currentFloorObject.transform.Translate(new Vector3(
		//     MixedRealityPlayspace.Position.x,
		//     FloorHeight.Value - (currentFloorObject.transform.localScale.y * 0.5f),
		//     MixedRealityPlayspace.Position.z));
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_24 = __this->get_currentFloorObject_38();
		NullCheck(L_24);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_25 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_24, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPlayspace_tCAEF92B588B4F24DA4609183191F7F8576C1A609_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = MixedRealityPlayspace_get_Position_mAEFF61ED17A0062DB92AD9F96AB5DAA82E938105(/*hidden argument*/NULL);
		float L_27 = L_26.get_x_2();
		Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777  L_28 = MixedRealityBoundarySystem_get_FloorHeight_mDB6B5C6FDBC0F1B03558D1FDBD439E71D5E1EE26_inline(__this, /*hidden argument*/NULL);
		V_7 = L_28;
		float L_29 = Nullable_1_get_Value_m1EE8221CA0BA4F2442E7B9859AC5A1351199E4A9((Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 *)(&V_7), /*hidden argument*/Nullable_1_get_Value_m1EE8221CA0BA4F2442E7B9859AC5A1351199E4A9_RuntimeMethod_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_30 = __this->get_currentFloorObject_38();
		NullCheck(L_30);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_31 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_30, /*hidden argument*/NULL);
		NullCheck(L_31);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_31, /*hidden argument*/NULL);
		float L_33 = L_32.get_y_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_34 = MixedRealityPlayspace_get_Position_mAEFF61ED17A0062DB92AD9F96AB5DAA82E938105(/*hidden argument*/NULL);
		float L_35 = L_34.get_z_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_36;
		memset((&L_36), 0, sizeof(L_36));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_36), L_27, ((float)il2cpp_codegen_subtract((float)L_29, (float)((float)il2cpp_codegen_multiply((float)L_33, (float)(0.5f))))), L_35, /*hidden argument*/NULL);
		NullCheck(L_25);
		Transform_Translate_m0F354939D5084DDFF6B9902E62D3DCA7A3B53EA3(L_25, L_36, /*hidden argument*/NULL);
		// currentFloorObject.layer = FloorPhysicsLayer;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_37 = __this->get_currentFloorObject_38();
		int32_t L_38 = MixedRealityBoundarySystem_get_FloorPhysicsLayer_m69CF905D524F44296D1185F14F11090F4132E0D3(__this, /*hidden argument*/NULL);
		NullCheck(L_37);
		GameObject_set_layer_mDAC8037FCFD0CE62DB66004C4342EA20CF604907(L_37, L_38, /*hidden argument*/NULL);
		// currentFloorObject.GetComponent<Renderer>().sharedMaterial = profile.FloorMaterial;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_39 = __this->get_currentFloorObject_38();
		NullCheck(L_39);
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_40 = GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85(L_39, /*hidden argument*/GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85_RuntimeMethod_var);
		MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 * L_41 = V_0;
		NullCheck(L_41);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_42 = MixedRealityBoundaryVisualizationProfile_get_FloorMaterial_m16C6CD262450A416DDF7C20B5472EA44C648F2B2_inline(L_41, /*hidden argument*/NULL);
		NullCheck(L_40);
		Renderer_set_sharedMaterial_mC94A354D9B0FCA081754A7CB51AEE5A9AD3946A3(L_40, L_42, /*hidden argument*/NULL);
		// return currentFloorObject;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_43 = __this->get_currentFloorObject_38();
		V_3 = L_43;
		goto IL_0147;
	}

IL_0147:
	{
		// }
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_44 = V_3;
		return L_44;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::GetPlayAreaVisualization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * MixedRealityBoundarySystem_GetPlayAreaVisualization_m74708BC496EFE9FB6F819BE40C9CD56EC5716DD8 (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityBoundarySystem_GetPlayAreaVisualization_m74708BC496EFE9FB6F819BE40C9CD56EC5716DD8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 * V_0 = NULL;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	{
		// if (!Application.isPlaying) { return null; }
		bool L_0 = Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5(/*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_5;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// if (!Application.isPlaying) { return null; }
		V_6 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
		goto IL_0165;
	}

IL_0018:
	{
		// if (currentPlayAreaObject != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = __this->get_currentPlayAreaObject_39();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_7 = L_3;
		bool L_4 = V_7;
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		// return currentPlayAreaObject;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = __this->get_currentPlayAreaObject_39();
		V_6 = L_5;
		goto IL_0165;
	}

IL_0038:
	{
		// MixedRealityBoundaryVisualizationProfile profile = ConfigurationProfile as MixedRealityBoundaryVisualizationProfile;
		BaseMixedRealityProfile_t94F8622EEDD7F13CFA936C16501EDC6ADE26A95B * L_6 = VirtFuncInvoker0< BaseMixedRealityProfile_t94F8622EEDD7F13CFA936C16501EDC6ADE26A95B * >::Invoke(19 /* Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::get_ConfigurationProfile() */, __this);
		V_0 = ((MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 *)IsInstClass((RuntimeObject*)L_6, MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55_il2cpp_TypeInfo_var));
		// if (profile == null) { return null; }
		MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 * L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_7, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_8 = L_8;
		bool L_9 = V_8;
		if (!L_9)
		{
			goto IL_005a;
		}
	}
	{
		// if (profile == null) { return null; }
		V_6 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
		goto IL_0165;
	}

IL_005a:
	{
		// if (!TryGetRectangularBoundsParams(out center, out angle, out width, out height))
		bool L_10 = MixedRealityBoundarySystem_TryGetRectangularBoundsParams_mB30F43AB0B74E51D936FB28B96496C3CAF10EB27(__this, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_1), (float*)(&V_2), (float*)(&V_3), (float*)(&V_4), /*hidden argument*/NULL);
		V_9 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_9;
		if (!L_11)
		{
			goto IL_007a;
		}
	}
	{
		// return null;
		V_6 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
		goto IL_0165;
	}

IL_007a:
	{
		// if (!EdgeUtilities.IsValidPoint(center))
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_12 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(EdgeUtilities_t7ED49A615EAAE779B786E14621834709DCC0C330_il2cpp_TypeInfo_var);
		bool L_13 = EdgeUtilities_IsValidPoint_m4870A2BEB35D12805D74CAA94265154E600A3526(L_12, /*hidden argument*/NULL);
		V_10 = (bool)((((int32_t)L_13) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_10;
		if (!L_14)
		{
			goto IL_0092;
		}
	}
	{
		// return null;
		V_6 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
		goto IL_0165;
	}

IL_0092:
	{
		// currentPlayAreaObject = GameObject.CreatePrimitive(PrimitiveType.Quad);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_15 = GameObject_CreatePrimitive_mA4D35085D817369E4A513FF31D745CEB27B07F6A(5, /*hidden argument*/NULL);
		__this->set_currentPlayAreaObject_39(L_15);
		// currentPlayAreaObject.name = "Play Area";
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_16 = __this->get_currentPlayAreaObject_39();
		NullCheck(L_16);
		Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826(L_16, _stringLiteral0F2870EE42AB42B214B04B6E021F9E37E4876948, /*hidden argument*/NULL);
		// currentPlayAreaObject.layer = PlayAreaPhysicsLayer;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_17 = __this->get_currentPlayAreaObject_39();
		int32_t L_18 = MixedRealityBoundarySystem_get_PlayAreaPhysicsLayer_mA8BDD4B6096D301ED2BD95FC8C2A2ACA46369294(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		GameObject_set_layer_mDAC8037FCFD0CE62DB66004C4342EA20CF604907(L_17, L_18, /*hidden argument*/NULL);
		// currentPlayAreaObject.transform.Translate(new Vector3(center.x, boundaryObjectRenderOffset, center.y));
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_19 = __this->get_currentPlayAreaObject_39();
		NullCheck(L_19);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_20 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_19, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_21 = V_1;
		float L_22 = L_21.get_x_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_23 = V_1;
		float L_24 = L_23.get_y_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_25), L_22, (0.001f), L_24, /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_Translate_m0F354939D5084DDFF6B9902E62D3DCA7A3B53EA3(L_20, L_25, /*hidden argument*/NULL);
		// currentPlayAreaObject.transform.Rotate(new Vector3(90, -angle, 0));
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_26 = __this->get_currentPlayAreaObject_39();
		NullCheck(L_26);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_27 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_26, /*hidden argument*/NULL);
		float L_28 = V_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29;
		memset((&L_29), 0, sizeof(L_29));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_29), (90.0f), ((-L_28)), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_27);
		Transform_Rotate_m610B6793DCC2F987290D328942E649B5B7DE0F9A(L_27, L_29, /*hidden argument*/NULL);
		// currentPlayAreaObject.transform.localScale = new Vector3(width, height, 1.0f);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_30 = __this->get_currentPlayAreaObject_39();
		NullCheck(L_30);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_31 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_30, /*hidden argument*/NULL);
		float L_32 = V_3;
		float L_33 = V_4;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_34;
		memset((&L_34), 0, sizeof(L_34));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_34), L_32, L_33, (1.0f), /*hidden argument*/NULL);
		NullCheck(L_31);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_31, L_34, /*hidden argument*/NULL);
		// currentPlayAreaObject.GetComponent<Renderer>().sharedMaterial = profile.PlayAreaMaterial;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_35 = __this->get_currentPlayAreaObject_39();
		NullCheck(L_35);
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_36 = GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85(L_35, /*hidden argument*/GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85_RuntimeMethod_var);
		MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 * L_37 = V_0;
		NullCheck(L_37);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_38 = MixedRealityBoundaryVisualizationProfile_get_PlayAreaMaterial_m41B9FAA14CC167996AF10FA1B7D9B07A8DF0DA50_inline(L_37, /*hidden argument*/NULL);
		NullCheck(L_36);
		Renderer_set_sharedMaterial_mC94A354D9B0FCA081754A7CB51AEE5A9AD3946A3(L_36, L_38, /*hidden argument*/NULL);
		// currentPlayAreaObject.transform.parent = BoundaryVisualizationParent.transform;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_39 = __this->get_currentPlayAreaObject_39();
		NullCheck(L_39);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_40 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_39, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_41 = MixedRealityBoundarySystem_get_BoundaryVisualizationParent_m0E284C16B1206119552E3B664D8304AF377824D9(__this, /*hidden argument*/NULL);
		NullCheck(L_41);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_42 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_41, /*hidden argument*/NULL);
		NullCheck(L_40);
		Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E(L_40, L_42, /*hidden argument*/NULL);
		// return currentPlayAreaObject;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_43 = __this->get_currentPlayAreaObject_39();
		V_6 = L_43;
		goto IL_0165;
	}

IL_0165:
	{
		// }
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_44 = V_6;
		return L_44;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::GetTrackedAreaVisualization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * MixedRealityBoundarySystem_GetTrackedAreaVisualization_m258989AB14CB56316B1D40B51D31869BDD6D4442 (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityBoundarySystem_GetTrackedAreaVisualization_m258989AB14CB56316B1D40B51D31869BDD6D4442_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 * V_0 = NULL;
	List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * V_1 = NULL;
	float V_2 = 0.0f;
	LineRenderer_tD225C480F28F28A4D737866474F21001B803B7C3 * V_3 = NULL;
	bool V_4 = false;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	int32_t V_9 = 0;
	bool V_10 = false;
	{
		// if (!Application.isPlaying) { return null; }
		bool L_0 = Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5(/*hidden argument*/NULL);
		V_4 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_4;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// if (!Application.isPlaying) { return null; }
		V_5 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
		goto IL_01cb;
	}

IL_0018:
	{
		// if (currentTrackedAreaObject != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = __this->get_currentTrackedAreaObject_40();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_6 = L_3;
		bool L_4 = V_6;
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		// return currentTrackedAreaObject;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = __this->get_currentTrackedAreaObject_40();
		V_5 = L_5;
		goto IL_01cb;
	}

IL_0038:
	{
		// MixedRealityBoundaryVisualizationProfile profile = ConfigurationProfile as MixedRealityBoundaryVisualizationProfile;
		BaseMixedRealityProfile_t94F8622EEDD7F13CFA936C16501EDC6ADE26A95B * L_6 = VirtFuncInvoker0< BaseMixedRealityProfile_t94F8622EEDD7F13CFA936C16501EDC6ADE26A95B * >::Invoke(19 /* Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::get_ConfigurationProfile() */, __this);
		V_0 = ((MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 *)IsInstClass((RuntimeObject*)L_6, MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55_il2cpp_TypeInfo_var));
		// if (profile == null) { return null; }
		MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 * L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_7, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_7 = L_8;
		bool L_9 = V_7;
		if (!L_9)
		{
			goto IL_005a;
		}
	}
	{
		// if (profile == null) { return null; }
		V_5 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
		goto IL_01cb;
	}

IL_005a:
	{
		// if (Bounds.Length == 0)
		EdgeU5BU5D_t7E044B25C942823DE9859802DCB5083603078A84* L_10 = MixedRealityBoundarySystem_get_Bounds_m8756733AA980CB8658FCD453BBF77F9DD99395D2_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		V_8 = (bool)((((int32_t)(((RuntimeArray*)L_10)->max_length)) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_8;
		if (!L_11)
		{
			goto IL_0073;
		}
	}
	{
		// return null;
		V_5 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
		goto IL_01cb;
	}

IL_0073:
	{
		// List<Vector3> lineVertices = new List<Vector3>();
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_12 = (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *)il2cpp_codegen_object_new(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5_il2cpp_TypeInfo_var);
		List_1__ctor_m6834ABFBD98D5EFE53A4BD01EA25BC516F24B171(L_12, /*hidden argument*/List_1__ctor_m6834ABFBD98D5EFE53A4BD01EA25BC516F24B171_RuntimeMethod_var);
		V_1 = L_12;
		// for (int i = 0; i < Bounds.Length; i++)
		V_9 = 0;
		goto IL_00c5;
	}

IL_007e:
	{
		// lineVertices.Add(new Vector3(Bounds[i].PointA.x, 0f, Bounds[i].PointA.y));
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_13 = V_1;
		EdgeU5BU5D_t7E044B25C942823DE9859802DCB5083603078A84* L_14 = MixedRealityBoundarySystem_get_Bounds_m8756733AA980CB8658FCD453BBF77F9DD99395D2_inline(__this, /*hidden argument*/NULL);
		int32_t L_15 = V_9;
		NullCheck(L_14);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->get_address_of_PointA_0();
		float L_17 = L_16->get_x_0();
		EdgeU5BU5D_t7E044B25C942823DE9859802DCB5083603078A84* L_18 = MixedRealityBoundarySystem_get_Bounds_m8756733AA980CB8658FCD453BBF77F9DD99395D2_inline(__this, /*hidden argument*/NULL);
		int32_t L_19 = V_9;
		NullCheck(L_18);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_20 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->get_address_of_PointA_0();
		float L_21 = L_20->get_y_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_22), L_17, (0.0f), L_21, /*hidden argument*/NULL);
		NullCheck(L_13);
		List_1_Add_mD9F028AEE5C43737BEB50A8DAA8CA939CE314002(L_13, L_22, /*hidden argument*/List_1_Add_mD9F028AEE5C43737BEB50A8DAA8CA939CE314002_RuntimeMethod_var);
		// for (int i = 0; i < Bounds.Length; i++)
		int32_t L_23 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_00c5:
	{
		// for (int i = 0; i < Bounds.Length; i++)
		int32_t L_24 = V_9;
		EdgeU5BU5D_t7E044B25C942823DE9859802DCB5083603078A84* L_25 = MixedRealityBoundarySystem_get_Bounds_m8756733AA980CB8658FCD453BBF77F9DD99395D2_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_25);
		V_10 = (bool)((((int32_t)L_24) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length))))))? 1 : 0);
		bool L_26 = V_10;
		if (L_26)
		{
			goto IL_007e;
		}
	}
	{
		// lineVertices.Add(lineVertices[0]);
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_27 = V_1;
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_28 = V_1;
		NullCheck(L_28);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = List_1_get_Item_mB9D869619B30FC5432E5F514D166A02AE8E8D626_inline(L_28, 0, /*hidden argument*/List_1_get_Item_mB9D869619B30FC5432E5F514D166A02AE8E8D626_RuntimeMethod_var);
		NullCheck(L_27);
		List_1_Add_mD9F028AEE5C43737BEB50A8DAA8CA939CE314002(L_27, L_29, /*hidden argument*/List_1_Add_mD9F028AEE5C43737BEB50A8DAA8CA939CE314002_RuntimeMethod_var);
		// currentTrackedAreaObject = new GameObject("Tracked Area");
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_30 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686(L_30, _stringLiteral3D03E038C14AF03724AFC2F297DEDBF0191D35C0, /*hidden argument*/NULL);
		__this->set_currentTrackedAreaObject_40(L_30);
		// currentTrackedAreaObject.layer = ignoreRaycastLayerValue;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_31 = __this->get_currentTrackedAreaObject_40();
		int32_t L_32 = __this->get_ignoreRaycastLayerValue_21();
		NullCheck(L_31);
		GameObject_set_layer_mDAC8037FCFD0CE62DB66004C4342EA20CF604907(L_31, L_32, /*hidden argument*/NULL);
		// currentTrackedAreaObject.AddComponent<LineRenderer>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_33 = __this->get_currentTrackedAreaObject_40();
		NullCheck(L_33);
		GameObject_AddComponent_TisLineRenderer_tD225C480F28F28A4D737866474F21001B803B7C3_m6F360048E08E499FB2BFEB8E3428AAF7C16CF7DA(L_33, /*hidden argument*/GameObject_AddComponent_TisLineRenderer_tD225C480F28F28A4D737866474F21001B803B7C3_m6F360048E08E499FB2BFEB8E3428AAF7C16CF7DA_RuntimeMethod_var);
		// currentTrackedAreaObject.transform.Translate(new Vector3(
		//     MixedRealityPlayspace.Position.x,
		//     boundaryObjectRenderOffset,
		//     MixedRealityPlayspace.Position.z));
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_34 = __this->get_currentTrackedAreaObject_40();
		NullCheck(L_34);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_35 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_34, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPlayspace_tCAEF92B588B4F24DA4609183191F7F8576C1A609_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_36 = MixedRealityPlayspace_get_Position_mAEFF61ED17A0062DB92AD9F96AB5DAA82E938105(/*hidden argument*/NULL);
		float L_37 = L_36.get_x_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_38 = MixedRealityPlayspace_get_Position_mAEFF61ED17A0062DB92AD9F96AB5DAA82E938105(/*hidden argument*/NULL);
		float L_39 = L_38.get_z_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_40;
		memset((&L_40), 0, sizeof(L_40));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_40), L_37, (0.001f), L_39, /*hidden argument*/NULL);
		NullCheck(L_35);
		Transform_Translate_m0F354939D5084DDFF6B9902E62D3DCA7A3B53EA3(L_35, L_40, /*hidden argument*/NULL);
		// currentPlayAreaObject.layer = TrackedAreaPhysicsLayer;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_41 = __this->get_currentPlayAreaObject_39();
		int32_t L_42 = MixedRealityBoundarySystem_get_TrackedAreaPhysicsLayer_m0D3BA2671879F1EEF76323BB18F5298358D46C1E(__this, /*hidden argument*/NULL);
		NullCheck(L_41);
		GameObject_set_layer_mDAC8037FCFD0CE62DB66004C4342EA20CF604907(L_41, L_42, /*hidden argument*/NULL);
		// float lineWidth = 0.01f;
		V_2 = (0.01f);
		// LineRenderer lineRenderer = currentTrackedAreaObject.GetComponent<LineRenderer>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_43 = __this->get_currentTrackedAreaObject_40();
		NullCheck(L_43);
		LineRenderer_tD225C480F28F28A4D737866474F21001B803B7C3 * L_44 = GameObject_GetComponent_TisLineRenderer_tD225C480F28F28A4D737866474F21001B803B7C3_mA7B9D3113E801CA31D9A0A4E9607E4ADC99EF5CA(L_43, /*hidden argument*/GameObject_GetComponent_TisLineRenderer_tD225C480F28F28A4D737866474F21001B803B7C3_mA7B9D3113E801CA31D9A0A4E9607E4ADC99EF5CA_RuntimeMethod_var);
		V_3 = L_44;
		// lineRenderer.sharedMaterial = profile.TrackedAreaMaterial;
		LineRenderer_tD225C480F28F28A4D737866474F21001B803B7C3 * L_45 = V_3;
		MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 * L_46 = V_0;
		NullCheck(L_46);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_47 = MixedRealityBoundaryVisualizationProfile_get_TrackedAreaMaterial_m9EE5B8193F00FF40C0AE17DC939A5932B4E9B342_inline(L_46, /*hidden argument*/NULL);
		NullCheck(L_45);
		Renderer_set_sharedMaterial_mC94A354D9B0FCA081754A7CB51AEE5A9AD3946A3(L_45, L_47, /*hidden argument*/NULL);
		// lineRenderer.useWorldSpace = false;
		LineRenderer_tD225C480F28F28A4D737866474F21001B803B7C3 * L_48 = V_3;
		NullCheck(L_48);
		LineRenderer_set_useWorldSpace_m9D28E9592B6FD74DB5E0C605488732C0E678A69D(L_48, (bool)0, /*hidden argument*/NULL);
		// lineRenderer.startWidth = lineWidth;
		LineRenderer_tD225C480F28F28A4D737866474F21001B803B7C3 * L_49 = V_3;
		float L_50 = V_2;
		NullCheck(L_49);
		LineRenderer_set_startWidth_mD680DED793DDE30025DD85C9058E8AC2E5E50ED6(L_49, L_50, /*hidden argument*/NULL);
		// lineRenderer.endWidth = lineWidth;
		LineRenderer_tD225C480F28F28A4D737866474F21001B803B7C3 * L_51 = V_3;
		float L_52 = V_2;
		NullCheck(L_51);
		LineRenderer_set_endWidth_mFB8DD50957A4A3767F571D47403298E2AE257A48(L_51, L_52, /*hidden argument*/NULL);
		// lineRenderer.positionCount = lineVertices.Count;
		LineRenderer_tD225C480F28F28A4D737866474F21001B803B7C3 * L_53 = V_3;
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_54 = V_1;
		NullCheck(L_54);
		int32_t L_55 = List_1_get_Count_m2E29D30C43F78ABB30F6C7881652C11852FD4D6F_inline(L_54, /*hidden argument*/List_1_get_Count_m2E29D30C43F78ABB30F6C7881652C11852FD4D6F_RuntimeMethod_var);
		NullCheck(L_53);
		LineRenderer_set_positionCount_mFE47D750AF310FE3073C3F7A46FF116354EDA49F(L_53, L_55, /*hidden argument*/NULL);
		// lineRenderer.SetPositions(lineVertices.ToArray());
		LineRenderer_tD225C480F28F28A4D737866474F21001B803B7C3 * L_56 = V_3;
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_57 = V_1;
		NullCheck(L_57);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_58 = List_1_ToArray_m88791B9062762F4E67F8D4233708EF1BF3D50386(L_57, /*hidden argument*/List_1_ToArray_m88791B9062762F4E67F8D4233708EF1BF3D50386_RuntimeMethod_var);
		NullCheck(L_56);
		LineRenderer_SetPositions_m069643046EDA4A1B749155B5C8A9C94C4EFC27C2(L_56, L_58, /*hidden argument*/NULL);
		// currentTrackedAreaObject.transform.parent = BoundaryVisualizationParent.transform;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_59 = __this->get_currentTrackedAreaObject_40();
		NullCheck(L_59);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_60 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_59, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_61 = MixedRealityBoundarySystem_get_BoundaryVisualizationParent_m0E284C16B1206119552E3B664D8304AF377824D9(__this, /*hidden argument*/NULL);
		NullCheck(L_61);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_62 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_61, /*hidden argument*/NULL);
		NullCheck(L_60);
		Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E(L_60, L_62, /*hidden argument*/NULL);
		// return currentTrackedAreaObject;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_63 = __this->get_currentTrackedAreaObject_40();
		V_5 = L_63;
		goto IL_01cb;
	}

IL_01cb:
	{
		// }
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_64 = V_5;
		return L_64;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::GetBoundaryWallVisualization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * MixedRealityBoundarySystem_GetBoundaryWallVisualization_m58C553AE9582810EA6183F0807767E21D051D49C (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityBoundarySystem_GetBoundaryWallVisualization_m58C553AE9582810EA6183F0807767E21D051D49C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 * V_0 = NULL;
	float V_1 = 0.0f;
	bool V_2 = false;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777  V_7;
	memset((&V_7), 0, sizeof(V_7));
	bool V_8 = false;
	int32_t V_9 = 0;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_10 = NULL;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_11;
	memset((&V_11), 0, sizeof(V_11));
	float V_12 = 0.0f;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_13;
	memset((&V_13), 0, sizeof(V_13));
	bool V_14 = false;
	{
		// if (!Application.isPlaying) { return null; }
		bool L_0 = Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5(/*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// if (!Application.isPlaying) { return null; }
		V_3 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
		goto IL_024a;
	}

IL_0015:
	{
		// if (currentBoundaryWallObject != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = __this->get_currentBoundaryWallObject_41();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_4 = L_3;
		bool L_4 = V_4;
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		// return currentBoundaryWallObject;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = __this->get_currentBoundaryWallObject_41();
		V_3 = L_5;
		goto IL_024a;
	}

IL_0034:
	{
		// MixedRealityBoundaryVisualizationProfile profile = ConfigurationProfile as MixedRealityBoundaryVisualizationProfile;
		BaseMixedRealityProfile_t94F8622EEDD7F13CFA936C16501EDC6ADE26A95B * L_6 = VirtFuncInvoker0< BaseMixedRealityProfile_t94F8622EEDD7F13CFA936C16501EDC6ADE26A95B * >::Invoke(19 /* Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::get_ConfigurationProfile() */, __this);
		V_0 = ((MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 *)IsInstClass((RuntimeObject*)L_6, MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55_il2cpp_TypeInfo_var));
		// if (profile == null) { return null; }
		MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 * L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_7, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_5 = L_8;
		bool L_9 = V_5;
		if (!L_9)
		{
			goto IL_0055;
		}
	}
	{
		// if (profile == null) { return null; }
		V_3 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
		goto IL_024a;
	}

IL_0055:
	{
		// if (!FloorHeight.HasValue)
		Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777  L_10 = MixedRealityBoundarySystem_get_FloorHeight_mDB6B5C6FDBC0F1B03558D1FDBD439E71D5E1EE26_inline(__this, /*hidden argument*/NULL);
		V_7 = L_10;
		bool L_11 = Nullable_1_get_HasValue_mC3A17DB301190693522F552F6CB7BC525F3E1F88_inline((Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 *)(&V_7), /*hidden argument*/Nullable_1_get_HasValue_mC3A17DB301190693522F552F6CB7BC525F3E1F88_RuntimeMethod_var);
		V_6 = (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_6;
		if (!L_12)
		{
			goto IL_0075;
		}
	}
	{
		// return null;
		V_3 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
		goto IL_024a;
	}

IL_0075:
	{
		// if (Bounds.Length == 0)
		EdgeU5BU5D_t7E044B25C942823DE9859802DCB5083603078A84* L_13 = MixedRealityBoundarySystem_get_Bounds_m8756733AA980CB8658FCD453BBF77F9DD99395D2_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		V_8 = (bool)((((int32_t)(((RuntimeArray*)L_13)->max_length)) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_8;
		if (!L_14)
		{
			goto IL_008d;
		}
	}
	{
		// return null;
		V_3 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
		goto IL_024a;
	}

IL_008d:
	{
		// currentBoundaryWallObject = new GameObject("Tracked Area Walls");
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_15 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686(L_15, _stringLiteral7383576ECCAB0349555823F261126B8965950B1D, /*hidden argument*/NULL);
		__this->set_currentBoundaryWallObject_41(L_15);
		// currentBoundaryWallObject.layer = BoundaryWallsPhysicsLayer;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_16 = __this->get_currentBoundaryWallObject_41();
		int32_t L_17 = MixedRealityBoundarySystem_get_BoundaryWallsPhysicsLayer_m22D37858D35302CDC8572F0B4779E14123EF745C(__this, /*hidden argument*/NULL);
		NullCheck(L_16);
		GameObject_set_layer_mDAC8037FCFD0CE62DB66004C4342EA20CF604907(L_16, L_17, /*hidden argument*/NULL);
		// float wallDepth = boundaryObjectThickness;
		V_1 = (0.005f);
		// for (int i = 0; i < Bounds.Length; i++)
		V_9 = 0;
		goto IL_0210;
	}

IL_00bd:
	{
		// GameObject wall = GameObject.CreatePrimitive(PrimitiveType.Cube);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_18 = GameObject_CreatePrimitive_mA4D35085D817369E4A513FF31D745CEB27B07F6A(3, /*hidden argument*/NULL);
		V_10 = L_18;
		// wall.name = $"Wall {i}";
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_19 = V_10;
		int32_t L_20 = V_9;
		int32_t L_21 = L_20;
		RuntimeObject * L_22 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_21);
		String_t* L_23 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral7C4826711A870DDC870DF57BDC7A2709822EA3D4, L_22, /*hidden argument*/NULL);
		NullCheck(L_19);
		Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826(L_19, L_23, /*hidden argument*/NULL);
		// wall.GetComponent<Renderer>().sharedMaterial = profile.BoundaryWallMaterial;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_24 = V_10;
		NullCheck(L_24);
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_25 = GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85(L_24, /*hidden argument*/GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85_RuntimeMethod_var);
		MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 * L_26 = V_0;
		NullCheck(L_26);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_27 = MixedRealityBoundaryVisualizationProfile_get_BoundaryWallMaterial_mEB43C47FB57FD4C0DA2FC68CCD4567EFA1E9E6EA_inline(L_26, /*hidden argument*/NULL);
		NullCheck(L_25);
		Renderer_set_sharedMaterial_mC94A354D9B0FCA081754A7CB51AEE5A9AD3946A3(L_25, L_27, /*hidden argument*/NULL);
		// wall.transform.localScale = new Vector3((Bounds[i].PointB - Bounds[i].PointA).magnitude, BoundaryHeight, wallDepth);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_28 = V_10;
		NullCheck(L_28);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_29 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_28, /*hidden argument*/NULL);
		EdgeU5BU5D_t7E044B25C942823DE9859802DCB5083603078A84* L_30 = MixedRealityBoundarySystem_get_Bounds_m8756733AA980CB8658FCD453BBF77F9DD99395D2_inline(__this, /*hidden argument*/NULL);
		int32_t L_31 = V_9;
		NullCheck(L_30);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->get_PointB_1();
		EdgeU5BU5D_t7E044B25C942823DE9859802DCB5083603078A84* L_33 = MixedRealityBoundarySystem_get_Bounds_m8756733AA980CB8658FCD453BBF77F9DD99395D2_inline(__this, /*hidden argument*/NULL);
		int32_t L_34 = V_9;
		NullCheck(L_33);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_35 = ((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->get_PointA_0();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_36 = Vector2_op_Subtraction_m2B347E4311EDBBBF27573E34899D2492E6B063C0(L_32, L_35, /*hidden argument*/NULL);
		V_13 = L_36;
		float L_37 = Vector2_get_magnitude_m66097AFDF9696BD3E88467D4398D4F82B8A4C7DF((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_13), /*hidden argument*/NULL);
		float L_38 = MixedRealityBoundarySystem_get_BoundaryHeight_m0EFFD679DFF7030BF815CB9B1DB12B023E6E59D9_inline(__this, /*hidden argument*/NULL);
		float L_39 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_40;
		memset((&L_40), 0, sizeof(L_40));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_40), L_37, L_38, L_39, /*hidden argument*/NULL);
		NullCheck(L_29);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_29, L_40, /*hidden argument*/NULL);
		// wall.layer = ignoreRaycastLayerValue;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_41 = V_10;
		int32_t L_42 = __this->get_ignoreRaycastLayerValue_21();
		NullCheck(L_41);
		GameObject_set_layer_mDAC8037FCFD0CE62DB66004C4342EA20CF604907(L_41, L_42, /*hidden argument*/NULL);
		// Vector2 mid = Vector2.Lerp(Bounds[i].PointA, Bounds[i].PointB, 0.5f);
		EdgeU5BU5D_t7E044B25C942823DE9859802DCB5083603078A84* L_43 = MixedRealityBoundarySystem_get_Bounds_m8756733AA980CB8658FCD453BBF77F9DD99395D2_inline(__this, /*hidden argument*/NULL);
		int32_t L_44 = V_9;
		NullCheck(L_43);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_45 = ((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))->get_PointA_0();
		EdgeU5BU5D_t7E044B25C942823DE9859802DCB5083603078A84* L_46 = MixedRealityBoundarySystem_get_Bounds_m8756733AA980CB8658FCD453BBF77F9DD99395D2_inline(__this, /*hidden argument*/NULL);
		int32_t L_47 = V_9;
		NullCheck(L_46);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->get_PointB_1();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_49 = Vector2_Lerp_m85DD66409D128B4F175627F89FA9D8751B75589F(L_45, L_48, (0.5f), /*hidden argument*/NULL);
		V_11 = L_49;
		// wall.transform.position = new Vector3(mid.x, (BoundaryHeight * 0.5f), mid.y);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_50 = V_10;
		NullCheck(L_50);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_51 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_50, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_52 = V_11;
		float L_53 = L_52.get_x_0();
		float L_54 = MixedRealityBoundarySystem_get_BoundaryHeight_m0EFFD679DFF7030BF815CB9B1DB12B023E6E59D9_inline(__this, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_55 = V_11;
		float L_56 = L_55.get_y_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_57;
		memset((&L_57), 0, sizeof(L_57));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_57), L_53, ((float)il2cpp_codegen_multiply((float)L_54, (float)(0.5f))), L_56, /*hidden argument*/NULL);
		NullCheck(L_51);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_51, L_57, /*hidden argument*/NULL);
		// float rotationAngle = MathUtilities.GetAngleBetween(Bounds[i].PointB, Bounds[i].PointA);
		EdgeU5BU5D_t7E044B25C942823DE9859802DCB5083603078A84* L_58 = MixedRealityBoundarySystem_get_Bounds_m8756733AA980CB8658FCD453BBF77F9DD99395D2_inline(__this, /*hidden argument*/NULL);
		int32_t L_59 = V_9;
		NullCheck(L_58);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_60 = ((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->get_PointB_1();
		EdgeU5BU5D_t7E044B25C942823DE9859802DCB5083603078A84* L_61 = MixedRealityBoundarySystem_get_Bounds_m8756733AA980CB8658FCD453BBF77F9DD99395D2_inline(__this, /*hidden argument*/NULL);
		int32_t L_62 = V_9;
		NullCheck(L_61);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_63 = ((L_61)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_62)))->get_PointA_0();
		float L_64 = MathUtilities_GetAngleBetween_mEC425DE0BB56A2FA6B21009A2D23A3718EE60EC3(L_60, L_63, /*hidden argument*/NULL);
		V_12 = L_64;
		// wall.transform.rotation = Quaternion.Euler(0.0f, -rotationAngle, 0.0f);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_65 = V_10;
		NullCheck(L_65);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_66 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_65, /*hidden argument*/NULL);
		float L_67 = V_12;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_68 = Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05((0.0f), ((-L_67)), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_66);
		Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_66, L_68, /*hidden argument*/NULL);
		// wall.transform.parent = currentBoundaryWallObject.transform;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_69 = V_10;
		NullCheck(L_69);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_70 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_69, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_71 = __this->get_currentBoundaryWallObject_41();
		NullCheck(L_71);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_72 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_71, /*hidden argument*/NULL);
		NullCheck(L_70);
		Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E(L_70, L_72, /*hidden argument*/NULL);
		// for (int i = 0; i < Bounds.Length; i++)
		int32_t L_73 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_73, (int32_t)1));
	}

IL_0210:
	{
		// for (int i = 0; i < Bounds.Length; i++)
		int32_t L_74 = V_9;
		EdgeU5BU5D_t7E044B25C942823DE9859802DCB5083603078A84* L_75 = MixedRealityBoundarySystem_get_Bounds_m8756733AA980CB8658FCD453BBF77F9DD99395D2_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_75);
		V_14 = (bool)((((int32_t)L_74) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))? 1 : 0);
		bool L_76 = V_14;
		if (L_76)
		{
			goto IL_00bd;
		}
	}
	{
		// currentBoundaryWallObject.transform.parent = BoundaryVisualizationParent.transform;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_77 = __this->get_currentBoundaryWallObject_41();
		NullCheck(L_77);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_78 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_77, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_79 = MixedRealityBoundarySystem_get_BoundaryVisualizationParent_m0E284C16B1206119552E3B664D8304AF377824D9(__this, /*hidden argument*/NULL);
		NullCheck(L_79);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_80 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_79, /*hidden argument*/NULL);
		NullCheck(L_78);
		Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E(L_78, L_80, /*hidden argument*/NULL);
		// return currentBoundaryWallObject;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_81 = __this->get_currentBoundaryWallObject_41();
		V_3 = L_81;
		goto IL_024a;
	}

IL_024a:
	{
		// }
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_82 = V_3;
		return L_82;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::GetBoundaryCeilingVisualization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * MixedRealityBoundarySystem_GetBoundaryCeilingVisualization_m6714940F88E1A3124ADDFF4F584E2C9D3371ED16 (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityBoundarySystem_GetBoundaryCeilingVisualization_m6714940F88E1A3124ADDFF4F584E2C9D3371ED16_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 * V_0 = NULL;
	Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	bool V_3 = false;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	bool V_9 = false;
	{
		// if (!Application.isPlaying) { return null; }
		bool L_0 = Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5(/*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_3;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// if (!Application.isPlaying) { return null; }
		V_4 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
		goto IL_01e2;
	}

IL_0016:
	{
		// if (currentCeilingObject != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = __this->get_currentCeilingObject_42();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_5 = L_3;
		bool L_4 = V_5;
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		// return currentCeilingObject;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = __this->get_currentCeilingObject_42();
		V_4 = L_5;
		goto IL_01e2;
	}

IL_0036:
	{
		// MixedRealityBoundaryVisualizationProfile profile = ConfigurationProfile as MixedRealityBoundaryVisualizationProfile;
		BaseMixedRealityProfile_t94F8622EEDD7F13CFA936C16501EDC6ADE26A95B * L_6 = VirtFuncInvoker0< BaseMixedRealityProfile_t94F8622EEDD7F13CFA936C16501EDC6ADE26A95B * >::Invoke(19 /* Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::get_ConfigurationProfile() */, __this);
		V_0 = ((MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 *)IsInstClass((RuntimeObject*)L_6, MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55_il2cpp_TypeInfo_var));
		// if (profile == null) { return null; }
		MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 * L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_7, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_6 = L_8;
		bool L_9 = V_6;
		if (!L_9)
		{
			goto IL_0058;
		}
	}
	{
		// if (profile == null) { return null; }
		V_4 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
		goto IL_01e2;
	}

IL_0058:
	{
		// if (Bounds.Length == 0)
		EdgeU5BU5D_t7E044B25C942823DE9859802DCB5083603078A84* L_10 = MixedRealityBoundarySystem_get_Bounds_m8756733AA980CB8658FCD453BBF77F9DD99395D2_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		V_7 = (bool)((((int32_t)(((RuntimeArray*)L_10)->max_length)) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_7;
		if (!L_11)
		{
			goto IL_0071;
		}
	}
	{
		// return null;
		V_4 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
		goto IL_01e2;
	}

IL_0071:
	{
		// Bounds boundaryBoundingBox = new Bounds();
		il2cpp_codegen_initobj((&V_1), sizeof(Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 ));
		// for (int i = 0; i < Bounds.Length; i++)
		V_8 = 0;
		goto IL_00cd;
	}

IL_007e:
	{
		// boundaryBoundingBox.Encapsulate(new Vector3(Bounds[i].PointA.x, BoundaryHeight * 0.5f, Bounds[i].PointA.y));
		EdgeU5BU5D_t7E044B25C942823DE9859802DCB5083603078A84* L_12 = MixedRealityBoundarySystem_get_Bounds_m8756733AA980CB8658FCD453BBF77F9DD99395D2_inline(__this, /*hidden argument*/NULL);
		int32_t L_13 = V_8;
		NullCheck(L_12);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->get_address_of_PointA_0();
		float L_15 = L_14->get_x_0();
		float L_16 = MixedRealityBoundarySystem_get_BoundaryHeight_m0EFFD679DFF7030BF815CB9B1DB12B023E6E59D9_inline(__this, /*hidden argument*/NULL);
		EdgeU5BU5D_t7E044B25C942823DE9859802DCB5083603078A84* L_17 = MixedRealityBoundarySystem_get_Bounds_m8756733AA980CB8658FCD453BBF77F9DD99395D2_inline(__this, /*hidden argument*/NULL);
		int32_t L_18 = V_8;
		NullCheck(L_17);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->get_address_of_PointA_0();
		float L_20 = L_19->get_y_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_21), L_15, ((float)il2cpp_codegen_multiply((float)L_16, (float)(0.5f))), L_20, /*hidden argument*/NULL);
		Bounds_Encapsulate_mD1F1DAC416D7147E07BF54D87CA7FF84C1088D8D((Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)(&V_1), L_21, /*hidden argument*/NULL);
		// for (int i = 0; i < Bounds.Length; i++)
		int32_t L_22 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_00cd:
	{
		// for (int i = 0; i < Bounds.Length; i++)
		int32_t L_23 = V_8;
		EdgeU5BU5D_t7E044B25C942823DE9859802DCB5083603078A84* L_24 = MixedRealityBoundarySystem_get_Bounds_m8756733AA980CB8658FCD453BBF77F9DD99395D2_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_24);
		V_9 = (bool)((((int32_t)L_23) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length))))))? 1 : 0);
		bool L_25 = V_9;
		if (L_25)
		{
			goto IL_007e;
		}
	}
	{
		// float ceilingDepth = boundaryObjectThickness;
		V_2 = (0.005f);
		// currentCeilingObject = GameObject.CreatePrimitive(PrimitiveType.Cube);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_26 = GameObject_CreatePrimitive_mA4D35085D817369E4A513FF31D745CEB27B07F6A(3, /*hidden argument*/NULL);
		__this->set_currentCeilingObject_42(L_26);
		// currentCeilingObject.name = "Ceiling";
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_27 = __this->get_currentCeilingObject_42();
		NullCheck(L_27);
		Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826(L_27, _stringLiteralE29DB923E25B51AC8B5CE56FF91A58B6A8D895B4, /*hidden argument*/NULL);
		// currentCeilingObject.layer = ignoreRaycastLayerValue;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_28 = __this->get_currentCeilingObject_42();
		int32_t L_29 = __this->get_ignoreRaycastLayerValue_21();
		NullCheck(L_28);
		GameObject_set_layer_mDAC8037FCFD0CE62DB66004C4342EA20CF604907(L_28, L_29, /*hidden argument*/NULL);
		// currentCeilingObject.transform.localScale = new Vector3(boundaryBoundingBox.size.x, ceilingDepth, boundaryBoundingBox.size.z);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_30 = __this->get_currentCeilingObject_42();
		NullCheck(L_30);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_31 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_30, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = Bounds_get_size_m0739F2686AE2D3416A33AEF892653091347FD4A6((Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)(&V_1), /*hidden argument*/NULL);
		float L_33 = L_32.get_x_2();
		float L_34 = V_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35 = Bounds_get_size_m0739F2686AE2D3416A33AEF892653091347FD4A6((Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)(&V_1), /*hidden argument*/NULL);
		float L_36 = L_35.get_z_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_37;
		memset((&L_37), 0, sizeof(L_37));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_37), L_33, L_34, L_36, /*hidden argument*/NULL);
		NullCheck(L_31);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_31, L_37, /*hidden argument*/NULL);
		// currentCeilingObject.transform.Translate(new Vector3(
		//     boundaryBoundingBox.center.x,
		//     BoundaryHeight + (currentCeilingObject.transform.localScale.y * 0.5f),
		//     boundaryBoundingBox.center.z));
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_38 = __this->get_currentCeilingObject_42();
		NullCheck(L_38);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_39 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_38, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_40 = Bounds_get_center_m4FB6E99F0533EE2D432988B08474D6DC9B8B744B((Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)(&V_1), /*hidden argument*/NULL);
		float L_41 = L_40.get_x_2();
		float L_42 = MixedRealityBoundarySystem_get_BoundaryHeight_m0EFFD679DFF7030BF815CB9B1DB12B023E6E59D9_inline(__this, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_43 = __this->get_currentCeilingObject_42();
		NullCheck(L_43);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_44 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_43, /*hidden argument*/NULL);
		NullCheck(L_44);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_45 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_44, /*hidden argument*/NULL);
		float L_46 = L_45.get_y_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_47 = Bounds_get_center_m4FB6E99F0533EE2D432988B08474D6DC9B8B744B((Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)(&V_1), /*hidden argument*/NULL);
		float L_48 = L_47.get_z_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_49;
		memset((&L_49), 0, sizeof(L_49));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_49), L_41, ((float)il2cpp_codegen_add((float)L_42, (float)((float)il2cpp_codegen_multiply((float)L_46, (float)(0.5f))))), L_48, /*hidden argument*/NULL);
		NullCheck(L_39);
		Transform_Translate_m0F354939D5084DDFF6B9902E62D3DCA7A3B53EA3(L_39, L_49, /*hidden argument*/NULL);
		// currentCeilingObject.GetComponent<Renderer>().sharedMaterial = profile.BoundaryCeilingMaterial;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_50 = __this->get_currentCeilingObject_42();
		NullCheck(L_50);
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_51 = GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85(L_50, /*hidden argument*/GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85_RuntimeMethod_var);
		MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 * L_52 = V_0;
		NullCheck(L_52);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_53 = MixedRealityBoundaryVisualizationProfile_get_BoundaryCeilingMaterial_m7393966652E09608F547DD7BD3BF36BD46CA38A0_inline(L_52, /*hidden argument*/NULL);
		NullCheck(L_51);
		Renderer_set_sharedMaterial_mC94A354D9B0FCA081754A7CB51AEE5A9AD3946A3(L_51, L_53, /*hidden argument*/NULL);
		// currentCeilingObject.layer = CeilingPhysicsLayer;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_54 = __this->get_currentCeilingObject_42();
		int32_t L_55 = MixedRealityBoundarySystem_get_CeilingPhysicsLayer_mE0B843EDF4375229AA0C275AEC74C1B88380C627(__this, /*hidden argument*/NULL);
		NullCheck(L_54);
		GameObject_set_layer_mDAC8037FCFD0CE62DB66004C4342EA20CF604907(L_54, L_55, /*hidden argument*/NULL);
		// currentCeilingObject.transform.parent = BoundaryVisualizationParent.transform;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_56 = __this->get_currentCeilingObject_42();
		NullCheck(L_56);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_57 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_56, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_58 = MixedRealityBoundarySystem_get_BoundaryVisualizationParent_m0E284C16B1206119552E3B664D8304AF377824D9(__this, /*hidden argument*/NULL);
		NullCheck(L_58);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_59 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_58, /*hidden argument*/NULL);
		NullCheck(L_57);
		Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E(L_57, L_59, /*hidden argument*/NULL);
		// return currentCeilingObject;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_60 = __this->get_currentCeilingObject_42();
		V_4 = L_60;
		goto IL_01e2;
	}

IL_01e2:
	{
		// }
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_61 = V_4;
		return L_61;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::CalculateBoundaryBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_CalculateBoundaryBounds_mADBFEBD7C538C1AECFF288339D59418DBD64A982 (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityBoundarySystem_CalculateBoundaryBounds_mADBFEBD7C538C1AECFF288339D59418DBD64A982_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * V_0 = NULL;
	List_1_tF107DDA4D2B267D6DB271286F269CBC499CB1672 * V_1 = NULL;
	Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777  V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	bool V_4 = false;
	float V_5 = 0.0f;
	int32_t V_6 = 0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	int32_t G_B5_0 = 0;
	{
		// Bounds = System.Array.Empty<Edge>();
		EdgeU5BU5D_t7E044B25C942823DE9859802DCB5083603078A84* L_0 = Array_Empty_TisEdge_tDDBEEDA96F6415F4ACED33A74B60C2A60692A89D_mFF8B95EB1BF1B5982472F2DB99A769D71F32259F_inline(/*hidden argument*/Array_Empty_TisEdge_tDDBEEDA96F6415F4ACED33A74B60C2A60692A89D_mFF8B95EB1BF1B5982472F2DB99A769D71F32259F_RuntimeMethod_var);
		MixedRealityBoundarySystem_set_Bounds_m668A25F9BE4B9C96BF34677FDBB6EA04DEB04FE9_inline(__this, L_0, /*hidden argument*/NULL);
		// FloorHeight = null;
		il2cpp_codegen_initobj((&V_2), sizeof(Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 ));
		Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777  L_1 = V_2;
		MixedRealityBoundarySystem_set_FloorHeight_m74B795A86BD729571567DB9CE53970BF507DD447_inline(__this, L_1, /*hidden argument*/NULL);
		// rectangularBounds = null;
		__this->set_rectangularBounds_37((InscribedRectangle_t8C3D61D1D8B9DEC50CAF5879190AFE6DECCF9269 *)NULL);
		// if (XRDevice.GetTrackingSpaceType() != TrackingSpaceType.RoomScale)
		IL2CPP_RUNTIME_CLASS_INIT(XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_il2cpp_TypeInfo_var);
		int32_t L_2 = XRDevice_GetTrackingSpaceType_m075417BECBBFCE6554D24E91F0E2E0264F18826C(/*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		// return;
		goto IL_00ff;
	}

IL_0039:
	{
		// var boundaryGeometry = new List<Vector3>(0);
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_4 = (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *)il2cpp_codegen_object_new(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5_il2cpp_TypeInfo_var);
		List_1__ctor_m9C166B12F3436C88C895D68CE856D15BD1BDF0A2(L_4, 0, /*hidden argument*/List_1__ctor_m9C166B12F3436C88C895D68CE856D15BD1BDF0A2_RuntimeMethod_var);
		V_0 = L_4;
		// var boundaryEdges = new List<Edge>(0);
		List_1_tF107DDA4D2B267D6DB271286F269CBC499CB1672 * L_5 = (List_1_tF107DDA4D2B267D6DB271286F269CBC499CB1672 *)il2cpp_codegen_object_new(List_1_tF107DDA4D2B267D6DB271286F269CBC499CB1672_il2cpp_TypeInfo_var);
		List_1__ctor_m78B74AF0F514D366E27B61FFC2DBDDFCDE856A57(L_5, 0, /*hidden argument*/List_1__ctor_m78B74AF0F514D366E27B61FFC2DBDDFCDE856A57_RuntimeMethod_var);
		V_1 = L_5;
		// if (UnityBoundary.TryGetGeometry(boundaryGeometry, UnityBoundary.Type.TrackedArea) && boundaryGeometry.Count > 0)
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_6 = V_0;
		bool L_7 = Boundary_TryGetGeometry_mE516ABC521F94493B6D911938A953FBF44CC8B0F(L_6, 1, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_005b;
		}
	}
	{
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = List_1_get_Count_m2E29D30C43F78ABB30F6C7881652C11852FD4D6F_inline(L_8, /*hidden argument*/List_1_get_Count_m2E29D30C43F78ABB30F6C7881652C11852FD4D6F_RuntimeMethod_var);
		G_B5_0 = ((((int32_t)L_9) > ((int32_t)0))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 0;
	}

IL_005c:
	{
		V_4 = (bool)G_B5_0;
		bool L_10 = V_4;
		if (!L_10)
		{
			goto IL_00f2;
		}
	}
	{
		// float floorHeight = float.MaxValue;
		V_5 = ((std::numeric_limits<float>::max)());
		// for (int i = 0; i < boundaryGeometry.Count; i++)
		V_6 = 0;
		goto IL_00bd;
	}

IL_0072:
	{
		// Vector3 pointA = boundaryGeometry[i];
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_11 = V_0;
		int32_t L_12 = V_6;
		NullCheck(L_11);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = List_1_get_Item_mB9D869619B30FC5432E5F514D166A02AE8E8D626_inline(L_11, L_12, /*hidden argument*/List_1_get_Item_mB9D869619B30FC5432E5F514D166A02AE8E8D626_RuntimeMethod_var);
		V_7 = L_13;
		// Vector3 pointB = boundaryGeometry[(i + 1) % boundaryGeometry.Count];
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_14 = V_0;
		int32_t L_15 = V_6;
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17 = List_1_get_Count_m2E29D30C43F78ABB30F6C7881652C11852FD4D6F_inline(L_16, /*hidden argument*/List_1_get_Count_m2E29D30C43F78ABB30F6C7881652C11852FD4D6F_RuntimeMethod_var);
		NullCheck(L_14);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = List_1_get_Item_mB9D869619B30FC5432E5F514D166A02AE8E8D626_inline(L_14, ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1))%(int32_t)L_17)), /*hidden argument*/List_1_get_Item_mB9D869619B30FC5432E5F514D166A02AE8E8D626_RuntimeMethod_var);
		V_8 = L_18;
		// boundaryEdges.Add(new Edge(pointA, pointB));
		List_1_tF107DDA4D2B267D6DB271286F269CBC499CB1672 * L_19 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = V_7;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = V_8;
		Edge_tDDBEEDA96F6415F4ACED33A74B60C2A60692A89D  L_22;
		memset((&L_22), 0, sizeof(L_22));
		Edge__ctor_m71D34BDCC1A8CC77E6E3F5B4E5671579E8C5D5A3((&L_22), L_20, L_21, /*hidden argument*/NULL);
		NullCheck(L_19);
		List_1_Add_m0D49B1F3C7C5BFFF75472217A0AF38100D121154(L_19, L_22, /*hidden argument*/List_1_Add_m0D49B1F3C7C5BFFF75472217A0AF38100D121154_RuntimeMethod_var);
		// floorHeight = Mathf.Min(floorHeight, boundaryGeometry[i].y);
		float L_23 = V_5;
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_24 = V_0;
		int32_t L_25 = V_6;
		NullCheck(L_24);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = List_1_get_Item_mB9D869619B30FC5432E5F514D166A02AE8E8D626_inline(L_24, L_25, /*hidden argument*/List_1_get_Item_mB9D869619B30FC5432E5F514D166A02AE8E8D626_RuntimeMethod_var);
		float L_27 = L_26.get_y_3();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_28 = Mathf_Min_mCF9BE0E9CAC9F18D207692BB2DAC7F3E1D4E1CB7(L_23, L_27, /*hidden argument*/NULL);
		V_5 = L_28;
		// for (int i = 0; i < boundaryGeometry.Count; i++)
		int32_t L_29 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
	}

IL_00bd:
	{
		// for (int i = 0; i < boundaryGeometry.Count; i++)
		int32_t L_30 = V_6;
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_31 = V_0;
		NullCheck(L_31);
		int32_t L_32 = List_1_get_Count_m2E29D30C43F78ABB30F6C7881652C11852FD4D6F_inline(L_31, /*hidden argument*/List_1_get_Count_m2E29D30C43F78ABB30F6C7881652C11852FD4D6F_RuntimeMethod_var);
		V_9 = (bool)((((int32_t)L_30) < ((int32_t)L_32))? 1 : 0);
		bool L_33 = V_9;
		if (L_33)
		{
			goto IL_0072;
		}
	}
	{
		// FloorHeight = floorHeight;
		float L_34 = V_5;
		Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777  L_35;
		memset((&L_35), 0, sizeof(L_35));
		Nullable_1__ctor_m7684344C547C49122B242D657ED4F2CA1C5C6B9F((&L_35), L_34, /*hidden argument*/Nullable_1__ctor_m7684344C547C49122B242D657ED4F2CA1C5C6B9F_RuntimeMethod_var);
		MixedRealityBoundarySystem_set_FloorHeight_m74B795A86BD729571567DB9CE53970BF507DD447_inline(__this, L_35, /*hidden argument*/NULL);
		// Bounds = boundaryEdges.ToArray();
		List_1_tF107DDA4D2B267D6DB271286F269CBC499CB1672 * L_36 = V_1;
		NullCheck(L_36);
		EdgeU5BU5D_t7E044B25C942823DE9859802DCB5083603078A84* L_37 = List_1_ToArray_m98C9EE2091A054D534779BCEEDFFF9E8E0131060(L_36, /*hidden argument*/List_1_ToArray_m98C9EE2091A054D534779BCEEDFFF9E8E0131060_RuntimeMethod_var);
		MixedRealityBoundarySystem_set_Bounds_m668A25F9BE4B9C96BF34677FDBB6EA04DEB04FE9_inline(__this, L_37, /*hidden argument*/NULL);
		// CreateInscribedBounds();
		MixedRealityBoundarySystem_CreateInscribedBounds_m115CC815EC0C5523FC14CC96ACD5E131E02BFFE3(__this, /*hidden argument*/NULL);
		goto IL_00ff;
	}

IL_00f2:
	{
		// Debug.LogWarning("Failed to calculate boundary bounds.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteral89F18224F9872BC3FEDC818D630C509C663DA4E6, /*hidden argument*/NULL);
	}

IL_00ff:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::CreateInscribedBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_CreateInscribedBounds_m115CC815EC0C5523FC14CC96ACD5E131E02BFFE3 (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityBoundarySystem_CreateInscribedBounds_m115CC815EC0C5523FC14CC96ACD5E131E02BFFE3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rectangularBounds = new InscribedRectangle(Bounds, Mathf.Abs("Mixed Reality Toolkit".GetHashCode()));
		EdgeU5BU5D_t7E044B25C942823DE9859802DCB5083603078A84* L_0 = MixedRealityBoundarySystem_get_Bounds_m8756733AA980CB8658FCD453BBF77F9DD99395D2_inline(__this, /*hidden argument*/NULL);
		NullCheck(_stringLiteral336225A8A8C2A59DF2453949ECE78E8F6011DF11);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, _stringLiteral336225A8A8C2A59DF2453949ECE78E8F6011DF11);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		int32_t L_2 = Mathf_Abs_mC7DD2FB3789B5409055836D0E7D8227AD2099FDC(L_1, /*hidden argument*/NULL);
		InscribedRectangle_t8C3D61D1D8B9DEC50CAF5879190AFE6DECCF9269 * L_3 = (InscribedRectangle_t8C3D61D1D8B9DEC50CAF5879190AFE6DECCF9269 *)il2cpp_codegen_object_new(InscribedRectangle_t8C3D61D1D8B9DEC50CAF5879190AFE6DECCF9269_il2cpp_TypeInfo_var);
		InscribedRectangle__ctor_mBDD666F20E8802FB4727F25E006142EF0986D02B(L_3, L_0, L_2, /*hidden argument*/NULL);
		__this->set_rectangularBounds_37(L_3);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::SetTrackingSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_SetTrackingSpace_m0A0E4971372B6BFF7C9C2B8AD535B3C7C4399AA2 (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityBoundarySystem_SetTrackingSpace_m0A0E4971372B6BFF7C9C2B8AD535B3C7C4399AA2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	{
		// switch (Scale)
		int32_t L_0 = MixedRealityBoundarySystem_get_Scale_m6D97920BD86A0F3ADAF9B799C1ADF1EBEB2B91FC_inline(__this, /*hidden argument*/NULL);
		V_2 = L_0;
		int32_t L_1 = V_2;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0028;
			}
			case 1:
			{
				goto IL_0028;
			}
			case 2:
			{
				goto IL_0024;
			}
			case 3:
			{
				goto IL_0024;
			}
			case 4:
			{
				goto IL_0028;
			}
		}
	}
	{
		goto IL_002c;
	}

IL_0024:
	{
		// trackingSpace = TrackingSpaceType.RoomScale;
		V_0 = 1;
		// break;
		goto IL_003b;
	}

IL_0028:
	{
		// trackingSpace = TrackingSpaceType.Stationary;
		V_0 = 0;
		// break;
		goto IL_003b;
	}

IL_002c:
	{
		// trackingSpace = TrackingSpaceType.Stationary;
		V_0 = 0;
		// Debug.LogWarning("Unknown / unsupported ExperienceScale. Defaulting to Stationary tracking space.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteral08F4C85E3C7B3015A1D6AE49E918EEF4724AA3A2, /*hidden argument*/NULL);
		// break;
		goto IL_003b;
	}

IL_003b:
	{
		// bool trackingSpaceSet = XRDevice.SetTrackingSpaceType(trackingSpace);
		int32_t L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_il2cpp_TypeInfo_var);
		bool L_3 = XRDevice_SetTrackingSpaceType_m76C173A76AD74AF048561FCEC0704F6A2E476B88(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		// if (!trackingSpaceSet)
		bool L_4 = V_1;
		V_3 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_004c;
		}
	}
	{
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem__cctor_m8B1B94DF70939DBA699F7FD114C5CF08D471FBFE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityBoundarySystem__cctor_m8B1B94DF70939DBA699F7FD114C5CF08D471FBFE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ExecuteEvents.EventFunction<IMixedRealityBoundaryHandler> OnVisualizationChanged =
		//     delegate (IMixedRealityBoundaryHandler handler, BaseEventData eventData)
		// {
		//     var boundaryEventData = ExecuteEvents.ValidateEventData<BoundaryEventData>(eventData);
		//     handler.OnBoundaryVisualizationChanged(boundaryEventData);
		// };
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tC079DC849FD558F5A392DBED4FEC5A94C3956213_il2cpp_TypeInfo_var);
		U3CU3Ec_tC079DC849FD558F5A392DBED4FEC5A94C3956213 * L_0 = ((U3CU3Ec_tC079DC849FD558F5A392DBED4FEC5A94C3956213_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC079DC849FD558F5A392DBED4FEC5A94C3956213_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		EventFunction_1_t97D0C3B1C38BD8910A6C8BA1C38B402288281E1D * L_1 = (EventFunction_1_t97D0C3B1C38BD8910A6C8BA1C38B402288281E1D *)il2cpp_codegen_object_new(EventFunction_1_t97D0C3B1C38BD8910A6C8BA1C38B402288281E1D_il2cpp_TypeInfo_var);
		EventFunction_1__ctor_m3C9317BE669D592331E1C2AAAC8D33E17792DC34(L_1, L_0, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__103_0_m14429B5E1DE3283E4761C2F0CB8E68CE09A9825A_RuntimeMethod_var), /*hidden argument*/EventFunction_1__ctor_m3C9317BE669D592331E1C2AAAC8D33E17792DC34_RuntimeMethod_var);
		((MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896_il2cpp_TypeInfo_var))->set_OnVisualizationChanged_15(L_1);
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
// System.Void Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m02970FEC5074B8C499F11DF959AA75001596CE64 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m02970FEC5074B8C499F11DF959AA75001596CE64_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tC079DC849FD558F5A392DBED4FEC5A94C3956213 * L_0 = (U3CU3Ec_tC079DC849FD558F5A392DBED4FEC5A94C3956213 *)il2cpp_codegen_object_new(U3CU3Ec_tC079DC849FD558F5A392DBED4FEC5A94C3956213_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m33B88BE993CB89F732F8B624F4F468B434D0C1E3(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tC079DC849FD558F5A392DBED4FEC5A94C3956213_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC079DC849FD558F5A392DBED4FEC5A94C3956213_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m33B88BE993CB89F732F8B624F4F468B434D0C1E3 (U3CU3Ec_tC079DC849FD558F5A392DBED4FEC5A94C3956213 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundarySystem_<>c::<.cctor>b__103_0(Microsoft.MixedReality.Toolkit.Boundary.IMixedRealityBoundaryHandler,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__103_0_m14429B5E1DE3283E4761C2F0CB8E68CE09A9825A (U3CU3Ec_tC079DC849FD558F5A392DBED4FEC5A94C3956213 * __this, RuntimeObject* ___handler0, BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__103_0_m14429B5E1DE3283E4761C2F0CB8E68CE09A9825A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BoundaryEventData_tC9F73BC3895F31B9819342ECF498A94527AFF755 * V_0 = NULL;
	{
		// var boundaryEventData = ExecuteEvents.ValidateEventData<BoundaryEventData>(eventData);
		BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * L_0 = ___eventData1;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var);
		BoundaryEventData_tC9F73BC3895F31B9819342ECF498A94527AFF755 * L_1 = ExecuteEvents_ValidateEventData_TisBoundaryEventData_tC9F73BC3895F31B9819342ECF498A94527AFF755_m25DF805CFF0C7C87990D589B6A24C5426752E5FF(L_0, /*hidden argument*/ExecuteEvents_ValidateEventData_TisBoundaryEventData_tC9F73BC3895F31B9819342ECF498A94527AFF755_m25DF805CFF0C7C87990D589B6A24C5426752E5FF_RuntimeMethod_var);
		V_0 = L_1;
		// handler.OnBoundaryVisualizationChanged(boundaryEventData);
		RuntimeObject* L_2 = ___handler0;
		BoundaryEventData_tC9F73BC3895F31B9819342ECF498A94527AFF755 * L_3 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< BoundaryEventData_tC9F73BC3895F31B9819342ECF498A94527AFF755 * >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Boundary.IMixedRealityBoundaryHandler::OnBoundaryVisualizationChanged(Microsoft.MixedReality.Toolkit.Boundary.BoundaryEventData) */, IMixedRealityBoundaryHandler_tE213C770656488AA0EDEA72965C40CC4EA050CB4_il2cpp_TypeInfo_var, L_2, L_3);
		// };
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BaseCoreSystem_set_Registrar_m51BB7ED2653C7ED7495E44EB63D4AC94EEF0E24A_inline (BaseCoreSystem_t1B04DCFA7545A86EAA41A8085969CD32B674EF7F * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// protected IMixedRealityServiceRegistrar Registrar { get; set; } = null;
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CRegistrarU3Ek__BackingField_12(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_set_Scale_mA4D8467D7B79221EC1ED617AD4169BF831C74BA4_inline (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public ExperienceScale Scale { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CScaleU3Ek__BackingField_23(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityBoundaryVisualizationProfile_get_BoundaryHeight_m1AF2D3C885258424F883D082B298D90F96346C0B_inline (MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 * __this, const RuntimeMethod* method)
{
	{
		// public float BoundaryHeight => boundaryHeight;
		float L_0 = __this->get_boundaryHeight_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_set_BoundaryHeight_m04A6077170F57BF49D5C39B567DDA8615DA8F12F_inline (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float BoundaryHeight { get; set; } = 3f;
		float L_0 = ___value0;
		__this->set_U3CBoundaryHeightU3Ek__BackingField_24(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool MixedRealityBoundaryVisualizationProfile_get_ShowFloor_m0F000AAFE96D76A3B2A9E6A21E4A9152CE3C3C74_inline (MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 * __this, const RuntimeMethod* method)
{
	{
		// public bool ShowFloor => showFloor;
		bool L_0 = __this->get_showFloor_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityBoundaryVisualizationProfile_get_FloorPhysicsLayer_mBA4B353BF01B1BC00D971BB0EB3C20125B487DCF_inline (MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 * __this, const RuntimeMethod* method)
{
	{
		// public int FloorPhysicsLayer => floorPhysicsLayer;
		int32_t L_0 = __this->get_floorPhysicsLayer_8();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool MixedRealityBoundaryVisualizationProfile_get_ShowPlayArea_m21176B4212C844000EBFB32A1E5F2DBFAF9C6337_inline (MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 * __this, const RuntimeMethod* method)
{
	{
		// public bool ShowPlayArea => showPlayArea;
		bool L_0 = __this->get_showPlayArea_10();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityBoundaryVisualizationProfile_get_PlayAreaPhysicsLayer_m2931F1E59FC513D0A15390C08E423CBAA752750C_inline (MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 * __this, const RuntimeMethod* method)
{
	{
		// public int PlayAreaPhysicsLayer => playAreaPhysicsLayer;
		int32_t L_0 = __this->get_playAreaPhysicsLayer_12();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool MixedRealityBoundaryVisualizationProfile_get_ShowTrackedArea_mC8B80FEF3661AF824CAFDCFD9745F291892CDBA0_inline (MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 * __this, const RuntimeMethod* method)
{
	{
		// public bool ShowTrackedArea => showTrackedArea;
		bool L_0 = __this->get_showTrackedArea_13();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityBoundaryVisualizationProfile_get_TrackedAreaPhysicsLayer_mA59B9EAC98386867EC5B2D1E7EA978892CADC2C9_inline (MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 * __this, const RuntimeMethod* method)
{
	{
		// public int TrackedAreaPhysicsLayer => trackedAreaPhysicsLayer;
		int32_t L_0 = __this->get_trackedAreaPhysicsLayer_15();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool MixedRealityBoundaryVisualizationProfile_get_ShowBoundaryWalls_m756604C3E726D1C2D1429D7B10F530D2A537148C_inline (MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 * __this, const RuntimeMethod* method)
{
	{
		// public bool ShowBoundaryWalls => showBoundaryWalls;
		bool L_0 = __this->get_showBoundaryWalls_16();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityBoundaryVisualizationProfile_get_BoundaryWallsPhysicsLayer_m88B8B9C37E535D69260DB1470D4C297FE9C791E2_inline (MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 * __this, const RuntimeMethod* method)
{
	{
		// public int BoundaryWallsPhysicsLayer => boundaryWallsPhysicsLayer;
		int32_t L_0 = __this->get_boundaryWallsPhysicsLayer_18();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool MixedRealityBoundaryVisualizationProfile_get_ShowBoundaryCeiling_mD781B0FAAC31B25596DC7A093E3532F1EAF44EC9_inline (MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 * __this, const RuntimeMethod* method)
{
	{
		// public bool ShowBoundaryCeiling => showBoundaryCeiling;
		bool L_0 = __this->get_showBoundaryCeiling_19();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityBoundaryVisualizationProfile_get_CeilingPhysicsLayer_mC08A4DEB095B3360F9BB97B787F3B35642FB0DB7_inline (MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 * __this, const RuntimeMethod* method)
{
	{
		// public int CeilingPhysicsLayer => ceilingPhysicsLayer;
		int32_t L_0 = __this->get_ceilingPhysicsLayer_21();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* MixedRealityBoundarySystem_get_SourceName_m2B2EDEBBEFB7164E259BDF6E77F88DCC28948ABF_inline (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, const RuntimeMethod* method)
{
	{
		// public string SourceName { get; } = "Mixed Reality Boundary System";
		String_t* L_0 = __this->get_U3CSourceNameU3Ek__BackingField_17();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777  MixedRealityBoundarySystem_get_FloorHeight_mDB6B5C6FDBC0F1B03558D1FDBD439E71D5E1EE26_inline (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, const RuntimeMethod* method)
{
	{
		// public float? FloorHeight { get; private set; } = null;
		Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777  L_0 = __this->get_U3CFloorHeightU3Ek__BackingField_36();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityBoundarySystem_get_BoundaryHeight_m0EFFD679DFF7030BF815CB9B1DB12B023E6E59D9_inline (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, const RuntimeMethod* method)
{
	{
		// public float BoundaryHeight { get; set; } = 3f;
		float L_0 = __this->get_U3CBoundaryHeightU3Ek__BackingField_24();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR EdgeU5BU5D_t7E044B25C942823DE9859802DCB5083603078A84* MixedRealityBoundarySystem_get_Bounds_m8756733AA980CB8658FCD453BBF77F9DD99395D2_inline (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, const RuntimeMethod* method)
{
	{
		// public Edge[] Bounds { get; private set; } = System.Array.Empty<Edge>();
		EdgeU5BU5D_t7E044B25C942823DE9859802DCB5083603078A84* L_0 = __this->get_U3CBoundsU3Ek__BackingField_35();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  InscribedRectangle_get_Center_m6BDE2BB150FD45D7C8053C43970F61D08AA57855_inline (InscribedRectangle_t8C3D61D1D8B9DEC50CAF5879190AFE6DECCF9269 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2 Center { get; private set; } = EdgeUtilities.InvalidPoint;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = __this->get_U3CCenterU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float InscribedRectangle_get_Angle_mAF48DF73900FB1BE8980907124A98340A7EEA457_inline (InscribedRectangle_t8C3D61D1D8B9DEC50CAF5879190AFE6DECCF9269 * __this, const RuntimeMethod* method)
{
	{
		// public float Angle { get; private set; } = 0f;
		float L_0 = __this->get_U3CAngleU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float InscribedRectangle_get_Width_mF3C20F5ECC024AE86815BE064C29EB2BD05FDB52_inline (InscribedRectangle_t8C3D61D1D8B9DEC50CAF5879190AFE6DECCF9269 * __this, const RuntimeMethod* method)
{
	{
		// public float Width { get; private set; } = 0f;
		float L_0 = __this->get_U3CWidthU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float InscribedRectangle_get_Height_m704CE700CAEDB553AD13D87FB40EE112A28C0C21_inline (InscribedRectangle_t8C3D61D1D8B9DEC50CAF5879190AFE6DECCF9269 * __this, const RuntimeMethod* method)
{
	{
		// public float Height { get; private set; } = 0f;
		float L_0 = __this->get_U3CHeightU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  MixedRealityBoundaryVisualizationProfile_get_FloorScale_m5F332DE19CC5E2009D0294C213BE04F731ADDFC8_inline (MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2 FloorScale => floorScale;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = __this->get_floorScale_9();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * MixedRealityBoundaryVisualizationProfile_get_FloorMaterial_m16C6CD262450A416DDF7C20B5472EA44C648F2B2_inline (MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 * __this, const RuntimeMethod* method)
{
	{
		// public Material FloorMaterial => floorMaterial;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = __this->get_floorMaterial_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * MixedRealityBoundaryVisualizationProfile_get_PlayAreaMaterial_m41B9FAA14CC167996AF10FA1B7D9B07A8DF0DA50_inline (MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 * __this, const RuntimeMethod* method)
{
	{
		// public Material PlayAreaMaterial => playAreaMaterial;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = __this->get_playAreaMaterial_11();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * MixedRealityBoundaryVisualizationProfile_get_TrackedAreaMaterial_m9EE5B8193F00FF40C0AE17DC939A5932B4E9B342_inline (MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 * __this, const RuntimeMethod* method)
{
	{
		// public Material TrackedAreaMaterial => trackedAreaMaterial;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = __this->get_trackedAreaMaterial_14();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * MixedRealityBoundaryVisualizationProfile_get_BoundaryWallMaterial_mEB43C47FB57FD4C0DA2FC68CCD4567EFA1E9E6EA_inline (MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 * __this, const RuntimeMethod* method)
{
	{
		// public Material BoundaryWallMaterial => boundaryWallMaterial;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = __this->get_boundaryWallMaterial_17();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * MixedRealityBoundaryVisualizationProfile_get_BoundaryCeilingMaterial_m7393966652E09608F547DD7BD3BF36BD46CA38A0_inline (MixedRealityBoundaryVisualizationProfile_t6DACC19AB1525605BECA678B0BBDD5BD6F958D55 * __this, const RuntimeMethod* method)
{
	{
		// public Material BoundaryCeilingMaterial => boundaryCeilingMaterial;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_0 = __this->get_boundaryCeilingMaterial_20();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_set_Bounds_m668A25F9BE4B9C96BF34677FDBB6EA04DEB04FE9_inline (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, EdgeU5BU5D_t7E044B25C942823DE9859802DCB5083603078A84* ___value0, const RuntimeMethod* method)
{
	{
		// public Edge[] Bounds { get; private set; } = System.Array.Empty<Edge>();
		EdgeU5BU5D_t7E044B25C942823DE9859802DCB5083603078A84* L_0 = ___value0;
		__this->set_U3CBoundsU3Ek__BackingField_35(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MixedRealityBoundarySystem_set_FloorHeight_m74B795A86BD729571567DB9CE53970BF507DD447_inline (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777  ___value0, const RuntimeMethod* method)
{
	{
		// public float? FloorHeight { get; private set; } = null;
		Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777  L_0 = ___value0;
		__this->set_U3CFloorHeightU3Ek__BackingField_36(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityBoundarySystem_get_Scale_m6D97920BD86A0F3ADAF9B799C1ADF1EBEB2B91FC_inline (MixedRealityBoundarySystem_t8F27087AD324C9F20658EC439D920D34D5438896 * __this, const RuntimeMethod* method)
{
	{
		// public ExperienceScale Scale { get; set; }
		int32_t L_0 = __this->get_U3CScaleU3Ek__BackingField_23();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR EdgeU5BU5D_t7E044B25C942823DE9859802DCB5083603078A84* Array_Empty_TisEdge_tDDBEEDA96F6415F4ACED33A74B60C2A60692A89D_mFF8B95EB1BF1B5982472F2DB99A769D71F32259F_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		EdgeU5BU5D_t7E044B25C942823DE9859802DCB5083603078A84* L_0 = ((EmptyArray_1_t8D3EC30EF47B0D8A0F4A4A5CEABECA556CB6835E_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC3A17DB301190693522F552F6CB7BC525F3E1F88_gshared_inline (Nullable_1_t96A9DB0CC70D8F236B20E8A1F00B8FE74850F777 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  List_1_get_Item_mB9D869619B30FC5432E5F514D166A02AE8E8D626_gshared_inline (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, int32_t ___index0, const RuntimeMethod* method)
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
		ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550(/*hidden argument*/NULL);
	}

IL_000e:
	{
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_2 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)__this->get__items_1();
		int32_t L_3 = ___index0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)L_2, (int32_t)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m2E29D30C43F78ABB30F6C7881652C11852FD4D6F_gshared_inline (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
