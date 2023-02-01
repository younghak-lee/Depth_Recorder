#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
template <typename T1, typename T2>
struct InvokerActionInvoker2
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2)
	{
		void* params[2] = { &p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<System.Byte[]>
struct Action_1_t300D9A559311CF7D2AE5D29B63E8C4DE0D49BCD8;
// System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>
struct Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735;
// System.Action`1<UnityEngine.XR.ARFoundation.AROcclusionFrameEventArgs>
struct Action_1_tFE8396A8376FE78B5494249C8A294967E81C927C;
// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457;
// System.Func`1<UnityEngine.XR.ARSubsystems.Supported>
struct Func_1_t778056BE8A070F696DB064AC7FBD1F996A928ED2;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Func`2<UnityEngine.GameObject,System.Boolean>
struct Func_2_tD5855DA3DC1C614C29762075E12B0B72B8B1F51C;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject>
struct IEnumerable_1_t73E24A3585FE00B560A12D422A7066F996ACD0A0;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.List`1<System.ValueTuple`2<System.Int32,System.Byte[]>>
struct List_1_tF88145309D90E96C94637CEE6C76DF92A4E8AA7F;
// System.Collections.Generic.List`1<System.ValueTuple`2<System.Int32,System.Object>>
struct List_1_t907DB8AD76E5F78DD0F5BA1DFFA98419DAFC2562;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTextureInfo>
struct List_1_tBEE41A3C84ED348850866AD76B66E9D9B19767FF;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<UnityEngine.Texture2D>
struct List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRCameraSubsystem>
struct List_1_t1C988AEFF3BCCFEF103EACA601923CD56DBB593C;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor>
struct List_1_tB62E7DBB1A743CF013D1542F79F59C2BB105B7AC;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XROcclusionSubsystem>
struct List_1_t411E4ADEB151FAA7346742CBC666CC242E4DACCB;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XROcclusionSubsystemDescriptor>
struct List_1_t3D09B5A317B11F9E075244885D17EC10AF3301C2;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem>
struct List_1_t89B39292AD45371F7FDCB295AAE956D33588BC6E;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<System.Object,System.Object,System.Object>
struct SubsystemLifecycleManager_3_t499D76783B0F91C52B19F7183F077FAD1985AD55;
// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XROcclusionSubsystem,UnityEngine.XR.ARSubsystems.XROcclusionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XROcclusionSubsystem/Provider>
struct SubsystemLifecycleManager_3_t1892B8E9DF20D5A95CB7E5B2AAA38CF6DD9711CF;
// System.Threading.Tasks.TaskFactory`1<System.Net.HttpListenerContext>
struct TaskFactory_1_tC0BB9633EDDB72940A75C39F67D074DAFBE019D4;
// System.Threading.Tasks.Task`1<System.Net.HttpListenerContext>
struct Task_1_t7B1A2F201CBB48A5FE2574C4F589450D6731403D;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>
struct TweenRunner_1_t830EC096236A3CEC7189DFA6E0B2E74C5C97780B;
// System.ValueTuple`2<System.Int32,System.Byte[]>[]
struct ValueTuple_2U5BU5D_t2F6726A7B27A60B8F94DF2072C0C23EFDE7EF7F9;
// System.ValueTuple`2<System.Int32,System.Object>[]
struct ValueTuple_2U5BU5D_tED54EDCEE1089B223CCE6E9AE4EC797AEB71B322;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.XR.ARFoundation.ARCameraManager
struct ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F;
// UnityEngine.XR.ARFoundation.AROcclusionManager
struct AROcclusionManager_t9EDE9F76050AF892E2AC6704D0F76EDAC370609D;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// System.Collections.ArrayList
struct ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// System.Net.AuthenticationSchemeSelector
struct AuthenticationSchemeSelector_tF0DDA5A5A05EDB1A9B42FF58391E36E1AAD01FDF;
// ButtonManager
struct ButtonManager_tB4A98DF10074AA9CF8B331C8AB41A791E21A6AD8;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Net.CookieCollection
struct CookieCollection_tB62B610A8E70C48DC8854F3D27BA916AF21D6608;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.XR.ARFoundation.Samples.DepthManager
struct DepthManager_t844D33D06E2618F752DF8065710556E6051B435C;
// UnityEngine.UI.Dropdown
struct Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Exception
struct Exception_t;
// System.Threading.ExecutionContext
struct ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710;
// System.Security.Authentication.ExtendedProtection.ExtendedProtectionPolicy
struct ExtendedProtectionPolicy_t50F460D31056608D80176DD66F24EE5ACEA54F99;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// VideoCreator.H264Streamer
struct H264Streamer_t9CBF5E9FD96523B590AECD382062F761B2500328;
// H264StreamerTest
struct H264StreamerTest_t48DACFECF405CD58FD607862E183D3A33AA36BFD;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// HlsSample
struct HlsSample_tCDA44A9069ED217B74AF3E14319FC5C196682862;
// HlsServer
struct HlsServer_tA907BA96BB7103CCBA09278E37D13C6BB9864400;
// System.Net.HttpConnection
struct HttpConnection_tAA1DA73AA1D39D03237022305791474A193E0308;
// System.Net.HttpListener
struct HttpListener_t64CDB1E1A5227C151C7A271A8747DBC88EBC8F01;
// System.Net.HttpListenerContext
struct HttpListenerContext_tCD5824B5A03F644280D1F171203A2A03F7377412;
// System.Net.HttpListenerPrefixCollection
struct HttpListenerPrefixCollection_tC33808D167E85BCF19C8EA7B02709F95FC604897;
// System.Net.HttpListenerRequest
struct HttpListenerRequest_t30206889F6CB705A9774EAD0C76C905096237FA8;
// System.Net.HttpListenerResponse
struct HttpListenerResponse_tE2A3F65DF2E0B73D19CE1FBDCFE622CADE7B38B1;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Security.Principal.IPrincipal
struct IPrincipal_tE7AF5096287F6C3472585E124CB38FF2A51EAB5F;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// ImageSample
struct ImageSample_tEF6237A690E8F432E6662F4BE787C67762FF10E5;
// System.Threading.InternalThread
struct InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687;
// LivePhotsSample
struct LivePhotsSample_tB672C2B983EAFBD7CEE8E821052C4B118A4A3F29;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E;
// MainFlow
struct MainFlow_t8B7290D017A0FF7C68F7E7BD48480C0C4E2BFAB2;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// VideoCreator.MediaCreator
struct MediaCreator_tC4FC5D37813942FAD35708E170E68E9885658216;
// VideoCreator.MediaSaver
struct MediaSaver_t9DC461C8D024C41DFBF7086E8103B70BC4710BB3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Mono.Security.Interface.MonoTlsProvider
struct MonoTlsProvider_t39C898CDC9458EEAD7C019B4B23701EAF9E24F7E;
// Mono.Security.Interface.MonoTlsSettings
struct MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0;
// MovSample
struct MovSample_t3E7C6F955219CECFCAF6529664C0FA9954109EDD;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.UI.RawImage
struct RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179;
// RecordingController
struct RecordingController_t98BBC80C535D6BCFDF598B1F70807E72845B5B4B;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
// System.Net.ResponseStream
struct ResponseStream_t8E2B4FE038D63D87A22401FD4ED8267BA284AEDD;
// RotCube
struct RotCube_t0548BD60E2B76610C4F251D2F86BEBF09274AC61;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// System.Net.ServiceNameStore
struct ServiceNameStore_t58D68EFA9BC0DF88B9FA9940086DCE0DEF08D843;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F;
// System.Threading.ThreadStart
struct ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.UriParser
struct UriParser_t920B0868286118827C08B08A15A9456AF6C19D81;
// System.Version
struct Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_tAF1CF77FB39D8E1EB782174E30566BAF55F71AE8;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4;
// UnityEngine.XR.ARSubsystems.XRCameraSubsystem
struct XRCameraSubsystem_t1F15E4BAEF03223F63AB57E49D1B5DE06749D140;
// UnityEngine.XR.ARSubsystems.XROcclusionSubsystem
struct XROcclusionSubsystem_tAA1BB69ACF188D778FBC8EF5E7B427C6EB2F0C3C;
// UnityEngine.XR.ARSubsystems.XROcclusionSubsystemDescriptor
struct XROcclusionSubsystemDescriptor_t25944D13CC0A207D206577F9A91D445526B4930F;
// depth_viewer
struct depth_viewer_tFF0E9DE91C8A38978DCC68D56BE449CB0D54A79A;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.UI.Dropdown/DropdownEvent
struct DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059;
// UnityEngine.UI.Dropdown/OptionData
struct OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F;
// UnityEngine.UI.Dropdown/OptionDataList
struct OptionDataList_t53255477D0A9C6980AB48693A520EFBC94DFFB96;
// System.Net.HttpListener/ExtendedProtectionSelector
struct ExtendedProtectionSelector_t92B47BADD9172C82C0FCB8DBE510911774DE632F;
// ImageSample/<>c
struct U3CU3Ec_t09E14DD342CDB1E94E7BE5E5EF4040745D94AFCC;
// ImageSample/<Start>d__1
struct U3CStartU3Ed__1_tA0D84298332D91D319528B7493F7E68643340186;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// VideoCreator.MediaCreator/UnityMediaCreator_setOnSegmentData_delegate
struct UnityMediaCreator_setOnSegmentData_delegate_tCE3B71DFB24ADDB8E286DEF8B4AE0E5B847BA2B7;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// System.Uri/UriInfo
struct UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t300D9A559311CF7D2AE5D29B63E8C4DE0D49BCD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DepthManager_t844D33D06E2618F752DF8065710556E6051B435C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tD5855DA3DC1C614C29762075E12B0B72B8B1F51C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HttpListener_t64CDB1E1A5227C151C7A271A8747DBC88EBC8F01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF88145309D90E96C94637CEE6C76DF92A4E8AA7F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MediaCreator_tC4FC5D37813942FAD35708E170E68E9885658216_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextureFormat_t87A73E4A3850D3410DC211676FC14B94226C1C1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartU3Ed__1_tA0D84298332D91D319528B7493F7E68643340186_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t09E14DD342CDB1E94E7BE5E5EF4040745D94AFCC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityMediaCreator_setOnSegmentData_delegate_tCE3B71DFB24ADDB8E286DEF8B4AE0E5B847BA2B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* depth_viewer_tFF0E9DE91C8A38978DCC68D56BE449CB0D54A79A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0124DE84305C971D728D47F99E798C6ECA76FEBA;
IL2CPP_EXTERN_C String_t* _stringLiteral0C3AAD5EAE3E5377E06AE46457E724CA5BFEF82A;
IL2CPP_EXTERN_C String_t* _stringLiteral0EF21E84294589A3D94AC0A938BBC3DC53C23E4B;
IL2CPP_EXTERN_C String_t* _stringLiteral195C4B21EB0FC3934D3C3A40524EB6F3CB7962F8;
IL2CPP_EXTERN_C String_t* _stringLiteral1ADA49DB1F06975314D080DCAEB46A68F8E74B0A;
IL2CPP_EXTERN_C String_t* _stringLiteral1C38AF0604C5FEC6D60CA93A5BC7BB7742B9BCF5;
IL2CPP_EXTERN_C String_t* _stringLiteral1EACC1AAB2AAA9C40A8E6675C763EFEDA177D44F;
IL2CPP_EXTERN_C String_t* _stringLiteral2026278668172106C99246EA0DD41FBB2A8221AB;
IL2CPP_EXTERN_C String_t* _stringLiteral207F960B12EFC3B5FF77BD499A31467E6BD0F868;
IL2CPP_EXTERN_C String_t* _stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA;
IL2CPP_EXTERN_C String_t* _stringLiteral2DBBB911B84E1F474C66F5D74E3DF9D66CFF8C48;
IL2CPP_EXTERN_C String_t* _stringLiteral2EA0B36A7611A22F5C547762189946F4734DE38F;
IL2CPP_EXTERN_C String_t* _stringLiteral3833F7AEC492E9B13522CC39BB90E8300610029F;
IL2CPP_EXTERN_C String_t* _stringLiteral3B5B4700DFFCE53FFB81288D310D59921A9F8493;
IL2CPP_EXTERN_C String_t* _stringLiteral3C58AA52B98ED0F59B39CB0E2D08D9447FA0C61C;
IL2CPP_EXTERN_C String_t* _stringLiteral3E617CA1F0B8FED4868367D2FE9CD0CA3C417403;
IL2CPP_EXTERN_C String_t* _stringLiteral4795A79F6F24DEF034533DEBDE661F34D2092C65;
IL2CPP_EXTERN_C String_t* _stringLiteral49AD57107D3E31CF494530FD1C8ED366367C2FFC;
IL2CPP_EXTERN_C String_t* _stringLiteral537FFA4677C3012810F3AAAC6D89BB2919ADD36F;
IL2CPP_EXTERN_C String_t* _stringLiteral559CB0B38B3B278B8D6BD7435BA5F03B501E2555;
IL2CPP_EXTERN_C String_t* _stringLiteral56DF299140515D2C54518CD1383D3A16FAF03DC0;
IL2CPP_EXTERN_C String_t* _stringLiteral57FB2278678E53AB41C5D8980C828216B4C95510;
IL2CPP_EXTERN_C String_t* _stringLiteral5D5BF8D43680B3B44672FAB47B49CF5B3E76A905;
IL2CPP_EXTERN_C String_t* _stringLiteral5D77E1FA5EB8D34AD587C66E5BB1B2A71934D03D;
IL2CPP_EXTERN_C String_t* _stringLiteral5FE071A3028A8566B3EDC14F46865A3A79627078;
IL2CPP_EXTERN_C String_t* _stringLiteral60A2622AAE9547559E1D04B8A59B9361B25C22E0;
IL2CPP_EXTERN_C String_t* _stringLiteral67184A92CF8F6E59BA82AAF4A94C237CF2E0EB48;
IL2CPP_EXTERN_C String_t* _stringLiteral6756EA689713671AE1B09B8923EF7CD0F2DDBBA3;
IL2CPP_EXTERN_C String_t* _stringLiteral6A38F565B8EF45A8FBD7DBC4865031810564E4AE;
IL2CPP_EXTERN_C String_t* _stringLiteral6B49C8BD74FCDF8EB27C6B88C1BE82FAF2B8081F;
IL2CPP_EXTERN_C String_t* _stringLiteral6FC8D85B901E1475B2AC83E120B3086644F00018;
IL2CPP_EXTERN_C String_t* _stringLiteral72EFACF900BC379F438ADCAFE83E83F9FB213AAB;
IL2CPP_EXTERN_C String_t* _stringLiteral768E38B1BDEA08C080A72630AFBAB740C59F66DE;
IL2CPP_EXTERN_C String_t* _stringLiteral7DC4C31B245CD41375F335129254627919ABE02C;
IL2CPP_EXTERN_C String_t* _stringLiteral82DEF55E59F42D82D5AD3B0266DA00F585B73768;
IL2CPP_EXTERN_C String_t* _stringLiteral83FC2FCBE893CCAF9A5E4FEB29B98F1324611780;
IL2CPP_EXTERN_C String_t* _stringLiteral8439A013FB563DD28126E2D0A3F9A1949660BF07;
IL2CPP_EXTERN_C String_t* _stringLiteral9474B95CD8752E69D7525D4C0C308443A88C0386;
IL2CPP_EXTERN_C String_t* _stringLiteral98769C553CE355D263A8D46CD916587352847B45;
IL2CPP_EXTERN_C String_t* _stringLiteral99FB2CA8ECC184C488939F14EB30E1A0CFFFFAFF;
IL2CPP_EXTERN_C String_t* _stringLiteral9BF2B472FE72751B79DF19DACB029743CC2CFBF1;
IL2CPP_EXTERN_C String_t* _stringLiteralA6C72E55EB048670BF4DF5E76CAC1BA978F656D6;
IL2CPP_EXTERN_C String_t* _stringLiteralA88B25D4A56D146C6C0EBC6F8736BE9FC45CB875;
IL2CPP_EXTERN_C String_t* _stringLiteralB0B68BBCFBF976FB803E3C0C6D0BEF35FCC5EC23;
IL2CPP_EXTERN_C String_t* _stringLiteralB56FD2D02571A001AEE35B4B7445C73192FFD483;
IL2CPP_EXTERN_C String_t* _stringLiteralB866B1475E89C37E80AF3C6C1E4719DE61BB44CF;
IL2CPP_EXTERN_C String_t* _stringLiteralBA08D1FCD83B14CA95CD94CB1DEEA6C8066A4B45;
IL2CPP_EXTERN_C String_t* _stringLiteralBA5A0EBA82FBBD6FE260815A6D5FCF9437251E93;
IL2CPP_EXTERN_C String_t* _stringLiteralBB8B8DA240F884A364B6D0CEBA4061439C6CD109;
IL2CPP_EXTERN_C String_t* _stringLiteralC055DB97A8CB945C23D5BE817C4D23CB04DB040F;
IL2CPP_EXTERN_C String_t* _stringLiteralC11E0F40C5BF980937012B6DCBD0A3C31075CA82;
IL2CPP_EXTERN_C String_t* _stringLiteralC205ECCCB1FFBBE52451FCF85932ED52E1FFC476;
IL2CPP_EXTERN_C String_t* _stringLiteralC6231899D1D58A70C2C2BA36F55CB3F10A973862;
IL2CPP_EXTERN_C String_t* _stringLiteralC878B06C14D746964E019AA936BBE3810F23CBAF;
IL2CPP_EXTERN_C String_t* _stringLiteralC99EB2E179755C32BB45CC6AB718380EC175392F;
IL2CPP_EXTERN_C String_t* _stringLiteralD8270C67B438EB1CEB5DAA2BF9B7E661F78A48EC;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE194554FBBE094E6BB2F4ED40B7F7BBDB26F4A96;
IL2CPP_EXTERN_C String_t* _stringLiteralE325840393D6103BF8FC1AE7F93FD2447DE4A265;
IL2CPP_EXTERN_C String_t* _stringLiteralE79A57728C480641EDCF8A6D49BF9838AEB33ABA;
IL2CPP_EXTERN_C String_t* _stringLiteralE8B822DBFEE46FBF5CB3EC85801381D72B45367D;
IL2CPP_EXTERN_C String_t* _stringLiteralEDA3AEF0EE544404EE4F51968B6001D72E3023E0;
IL2CPP_EXTERN_C String_t* _stringLiteralF74A9504F6C3A6B14D25FE38A22DEC43CBFA9C2B;
IL2CPP_EXTERN_C String_t* _stringLiteralF9CE3C46E0F06A5133F58886BFD393D5D9AD8C06;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2E68D3DCE6F297E6D87BB498EABE5984B167C244_TisU3CListenU3Ed__5_t1A5103CF2B74AC0FE9019A69C9F3A37AC77A0891_m3EC557B6B0665752AC6E8402ADA3E52263484FAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CListenU3Ed__5_t1A5103CF2B74AC0FE9019A69C9F3A37AC77A0891_m54C0A9F3519E9E11799ADAB8C6BE7A6EB1DD874B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DepthManager_OnCameraFrameEventReceived_m5E7E39367B099C34CC05562BA4681882ECFA16A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_First_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m38F24F6829515308854F931277CF249C5CBC0E7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HlsSample_U3CStartHlsU3Eb__9_0_mC3B97477CA7D9A65E431570B5BCF8DADFB79B795_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HlsServer_Listen_mEE6513632BA84126513D8DF89BB2106B97100D15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m9A99F7A6ECAD7201B314A3716B62373BEA8AB6F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m31C56A5163FA7F8AAFB67B4866F20C60FE7DED18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m4255D203B6AE5F17C8AE7DDCBF09A44DA12F2034_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m820E3E3C8FA49AD0B87DECE0A0977FD9C54C1526_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mC5A8474F902E701534877BEE5EAF67E94B196D8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MediaCreator_OnSegmentDataCallback_m72988744F68CF206906341BA454F67217D13D708_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m8FE543F7461F1646151BD30E8B67831C4D527343_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m02B13D9F8C2777CA6CCA386F24619C7A4CC97515_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RecordingController_U3CStartHlsU3Eb__20_0_mD370D42A06BC83465CC0C859E0A9E72270C71291_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemLifecycleManager_3_get_descriptor_mFCC2B929205B70121157536075F522DF0476AAB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m4E623469DBC622CCB30DE7E88C667BC22C283966_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mCA8E9C93BE8FE9E005F2DCE8BB2318C17A828753_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m06273776173B037954DB1617C708AAB1A91F95D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartU3Ed__1_System_Collections_IEnumerator_Reset_m9910BC80915185661BCB2DEABCDEC75931E50BFF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__1_0_mF3A557BC5EA5F7466B4C2B3874863A0DF4282580_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_2__ctor_mF4E1D57C8E8BCBBEDFFBC7CC789FAB7867E56D09_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ValueTuple_2U5BU5D_tED54EDCEE1089B223CCE6E9AE4EC797AEB71B322;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<System.ValueTuple`2<System.Int32,System.Byte[]>>
struct List_1_tF88145309D90E96C94637CEE6C76DF92A4E8AA7F  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ValueTuple_2U5BU5D_t2F6726A7B27A60B8F94DF2072C0C23EFDE7EF7F9* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.ValueTuple`2<System.Int32,System.Object>>
struct List_1_t907DB8AD76E5F78DD0F5BA1DFFA98419DAFC2562  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ValueTuple_2U5BU5D_tED54EDCEE1089B223CCE6E9AE4EC797AEB71B322* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9  : public RuntimeObject
{
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

// VideoCreator.H264Streamer
struct H264Streamer_t9CBF5E9FD96523B590AECD382062F761B2500328  : public RuntimeObject
{
};

// System.Net.HttpListener
struct HttpListener_t64CDB1E1A5227C151C7A271A8747DBC88EBC8F01  : public RuntimeObject
{
	// Mono.Security.Interface.MonoTlsProvider System.Net.HttpListener::tlsProvider
	MonoTlsProvider_t39C898CDC9458EEAD7C019B4B23701EAF9E24F7E* ___tlsProvider_0;
	// Mono.Security.Interface.MonoTlsSettings System.Net.HttpListener::tlsSettings
	MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* ___tlsSettings_1;
	// System.Security.Cryptography.X509Certificates.X509Certificate System.Net.HttpListener::certificate
	X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___certificate_2;
	// System.Net.AuthenticationSchemes System.Net.HttpListener::auth_schemes
	int32_t ___auth_schemes_3;
	// System.Net.HttpListenerPrefixCollection System.Net.HttpListener::prefixes
	HttpListenerPrefixCollection_tC33808D167E85BCF19C8EA7B02709F95FC604897* ___prefixes_4;
	// System.Net.AuthenticationSchemeSelector System.Net.HttpListener::auth_selector
	AuthenticationSchemeSelector_tF0DDA5A5A05EDB1A9B42FF58391E36E1AAD01FDF* ___auth_selector_5;
	// System.String System.Net.HttpListener::realm
	String_t* ___realm_6;
	// System.Boolean System.Net.HttpListener::ignore_write_exceptions
	bool ___ignore_write_exceptions_7;
	// System.Boolean System.Net.HttpListener::unsafe_ntlm_auth
	bool ___unsafe_ntlm_auth_8;
	// System.Boolean System.Net.HttpListener::listening
	bool ___listening_9;
	// System.Boolean System.Net.HttpListener::disposed
	bool ___disposed_10;
	// System.Object System.Net.HttpListener::_internalLock
	RuntimeObject* ____internalLock_11;
	// System.Collections.Hashtable System.Net.HttpListener::registry
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___registry_12;
	// System.Collections.ArrayList System.Net.HttpListener::ctx_queue
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___ctx_queue_13;
	// System.Collections.ArrayList System.Net.HttpListener::wait_queue
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___wait_queue_14;
	// System.Collections.Hashtable System.Net.HttpListener::connections
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___connections_15;
	// System.Net.ServiceNameStore System.Net.HttpListener::defaultServiceNames
	ServiceNameStore_t58D68EFA9BC0DF88B9FA9940086DCE0DEF08D843* ___defaultServiceNames_16;
	// System.Security.Authentication.ExtendedProtection.ExtendedProtectionPolicy System.Net.HttpListener::extendedProtectionPolicy
	ExtendedProtectionPolicy_t50F460D31056608D80176DD66F24EE5ACEA54F99* ___extendedProtectionPolicy_17;
	// System.Net.HttpListener/ExtendedProtectionSelector System.Net.HttpListener::extendedProtectionSelectorDelegate
	ExtendedProtectionSelector_t92B47BADD9172C82C0FCB8DBE510911774DE632F* ___extendedProtectionSelectorDelegate_18;
};

// System.Net.HttpListenerContext
struct HttpListenerContext_tCD5824B5A03F644280D1F171203A2A03F7377412  : public RuntimeObject
{
	// System.Net.HttpListenerRequest System.Net.HttpListenerContext::request
	HttpListenerRequest_t30206889F6CB705A9774EAD0C76C905096237FA8* ___request_0;
	// System.Net.HttpListenerResponse System.Net.HttpListenerContext::response
	HttpListenerResponse_tE2A3F65DF2E0B73D19CE1FBDCFE622CADE7B38B1* ___response_1;
	// System.Security.Principal.IPrincipal System.Net.HttpListenerContext::user
	RuntimeObject* ___user_2;
	// System.Net.HttpConnection System.Net.HttpListenerContext::cnc
	HttpConnection_tAA1DA73AA1D39D03237022305791474A193E0308* ___cnc_3;
	// System.String System.Net.HttpListenerContext::error
	String_t* ___error_4;
	// System.Int32 System.Net.HttpListenerContext::err_status
	int32_t ___err_status_5;
	// System.Net.HttpListener System.Net.HttpListenerContext::Listener
	HttpListener_t64CDB1E1A5227C151C7A271A8747DBC88EBC8F01* ___Listener_6;
};

// System.Net.HttpListenerPrefixCollection
struct HttpListenerPrefixCollection_tC33808D167E85BCF19C8EA7B02709F95FC604897  : public RuntimeObject
{
	// System.Collections.Generic.List`1<System.String> System.Net.HttpListenerPrefixCollection::prefixes
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___prefixes_0;
	// System.Net.HttpListener System.Net.HttpListenerPrefixCollection::listener
	HttpListener_t64CDB1E1A5227C151C7A271A8747DBC88EBC8F01* ___listener_1;
};

// System.Net.HttpListenerRequest
struct HttpListenerRequest_t30206889F6CB705A9774EAD0C76C905096237FA8  : public RuntimeObject
{
	// System.String[] System.Net.HttpListenerRequest::accept_types
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___accept_types_0;
	// System.Int64 System.Net.HttpListenerRequest::content_length
	int64_t ___content_length_1;
	// System.Boolean System.Net.HttpListenerRequest::cl_set
	bool ___cl_set_2;
	// System.Net.CookieCollection System.Net.HttpListenerRequest::cookies
	CookieCollection_tB62B610A8E70C48DC8854F3D27BA916AF21D6608* ___cookies_3;
	// System.Net.WebHeaderCollection System.Net.HttpListenerRequest::headers
	WebHeaderCollection_tAF1CF77FB39D8E1EB782174E30566BAF55F71AE8* ___headers_4;
	// System.String System.Net.HttpListenerRequest::method
	String_t* ___method_5;
	// System.IO.Stream System.Net.HttpListenerRequest::input_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___input_stream_6;
	// System.Version System.Net.HttpListenerRequest::version
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___version_7;
	// System.Collections.Specialized.NameValueCollection System.Net.HttpListenerRequest::query_string
	NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* ___query_string_8;
	// System.String System.Net.HttpListenerRequest::raw_url
	String_t* ___raw_url_9;
	// System.Uri System.Net.HttpListenerRequest::url
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___url_10;
	// System.Uri System.Net.HttpListenerRequest::referrer
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___referrer_11;
	// System.String[] System.Net.HttpListenerRequest::user_languages
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___user_languages_12;
	// System.Net.HttpListenerContext System.Net.HttpListenerRequest::context
	HttpListenerContext_tCD5824B5A03F644280D1F171203A2A03F7377412* ___context_13;
	// System.Boolean System.Net.HttpListenerRequest::is_chunked
	bool ___is_chunked_14;
	// System.Boolean System.Net.HttpListenerRequest::ka_set
	bool ___ka_set_15;
	// System.Boolean System.Net.HttpListenerRequest::keep_alive
	bool ___keep_alive_16;
};

// System.Net.HttpListenerResponse
struct HttpListenerResponse_tE2A3F65DF2E0B73D19CE1FBDCFE622CADE7B38B1  : public RuntimeObject
{
	// System.Boolean System.Net.HttpListenerResponse::disposed
	bool ___disposed_0;
	// System.Text.Encoding System.Net.HttpListenerResponse::content_encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___content_encoding_1;
	// System.Int64 System.Net.HttpListenerResponse::content_length
	int64_t ___content_length_2;
	// System.Boolean System.Net.HttpListenerResponse::cl_set
	bool ___cl_set_3;
	// System.String System.Net.HttpListenerResponse::content_type
	String_t* ___content_type_4;
	// System.Net.CookieCollection System.Net.HttpListenerResponse::cookies
	CookieCollection_tB62B610A8E70C48DC8854F3D27BA916AF21D6608* ___cookies_5;
	// System.Net.WebHeaderCollection System.Net.HttpListenerResponse::headers
	WebHeaderCollection_tAF1CF77FB39D8E1EB782174E30566BAF55F71AE8* ___headers_6;
	// System.Boolean System.Net.HttpListenerResponse::keep_alive
	bool ___keep_alive_7;
	// System.Net.ResponseStream System.Net.HttpListenerResponse::output_stream
	ResponseStream_t8E2B4FE038D63D87A22401FD4ED8267BA284AEDD* ___output_stream_8;
	// System.Version System.Net.HttpListenerResponse::version
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___version_9;
	// System.String System.Net.HttpListenerResponse::location
	String_t* ___location_10;
	// System.Int32 System.Net.HttpListenerResponse::status_code
	int32_t ___status_code_11;
	// System.String System.Net.HttpListenerResponse::status_description
	String_t* ___status_description_12;
	// System.Boolean System.Net.HttpListenerResponse::chunked
	bool ___chunked_13;
	// System.Net.HttpListenerContext System.Net.HttpListenerResponse::context
	HttpListenerContext_tCD5824B5A03F644280D1F171203A2A03F7377412* ___context_14;
	// System.Boolean System.Net.HttpListenerResponse::HeadersSent
	bool ___HeadersSent_15;
	// System.Object System.Net.HttpListenerResponse::headers_lock
	RuntimeObject* ___headers_lock_16;
	// System.Boolean System.Net.HttpListenerResponse::force_close_chunked
	bool ___force_close_chunked_17;
};

// VideoCreator.MediaCreator
struct MediaCreator_tC4FC5D37813942FAD35708E170E68E9885658216  : public RuntimeObject
{
};

// VideoCreator.MediaSaver
struct MediaSaver_t9DC461C8D024C41DFBF7086E8103B70BC4710BB3  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
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

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider
struct SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5  : public RuntimeObject
{
	// System.String UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::<providerType>k__BackingField
	Type_t* ___U3CproviderTypeU3Ek__BackingField_1;
	// System.Type UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::<subsystemTypeOverride>k__BackingField
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_7;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_10;
};

// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E  : public RuntimeObject
{
	// System.String System.Uri::m_String
	String_t* ___m_String_13;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_14;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t920B0868286118827C08B08A15A9456AF6C19D81* ___m_Syntax_15;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_16;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_17;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09* ___m_Info_18;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_19;
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// ImageSample/<>c
struct U3CU3Ec_t09E14DD342CDB1E94E7BE5E5EF4040745D94AFCC  : public RuntimeObject
{
};

// ImageSample/<Start>d__1
struct U3CStartU3Ed__1_tA0D84298332D91D319528B7493F7E68643340186  : public RuntimeObject
{
	// System.Int32 ImageSample/<Start>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ImageSample/<Start>d__1::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// ImageSample ImageSample/<Start>d__1::<>4__this
	ImageSample_tEF6237A690E8F432E6662F4BE787C67762FF10E5* ___U3CU3E4__this_2;
	// UnityEngine.AsyncOperation ImageSample/<Start>d__1::<asyncLoad>5__2
	AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ___U3CasyncLoadU3E5__2_3;
};

// System.Nullable`1<System.Double>
struct Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	double ___value_1;
};

// System.Nullable`1<System.Int64>
struct Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int64_t ___value_1;
};

// System.Nullable`1<System.Single>
struct Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	float ___value_1;
};

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XROcclusionSubsystem,UnityEngine.XR.ARSubsystems.XROcclusionSubsystem/Provider>
struct SubsystemDescriptorWithProvider_2_t79EDF938C4BE84AF066C781C2FCA09FE74BFF8FE  : public SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5
{
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.HttpListenerContext>
struct TaskAwaiter_1_t2E68D3DCE6F297E6D87BB498EABE5984B167C244 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t7B1A2F201CBB48A5FE2574C4F589450D6731403D* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_0;
};

// System.Threading.Tasks.Task`1<System.Net.HttpListenerContext>
struct Task_1_t7B1A2F201CBB48A5FE2574C4F589450D6731403D  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	HttpListenerContext_tCD5824B5A03F644280D1F171203A2A03F7377412* ___m_result_22;
};

// System.ValueTuple`2<System.Int32,System.Byte[]>
struct ValueTuple_2_t1D84412EF5C4A681CACB9E8C0BC858743D4C63CA 
{
	// T1 System.ValueTuple`2::Item1
	int32_t ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Item2_1;
};

// System.ValueTuple`2<System.Int32,System.Object>
struct ValueTuple_2_tD9DCD90C6490444503B936F72B6882564ED11825 
{
	// T1 System.ValueTuple`2::Item1
	int32_t ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	RuntimeObject* ___Item2_1;
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
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

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682 
{
	union
	{
		struct
		{
		};
		uint8_t Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682__padding[1];
	};
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Rendering.SphericalHarmonicsL2
struct SphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2 
{
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr0
	float ___shr0_0;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr1
	float ___shr1_1;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr2
	float ___shr2_2;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr3
	float ___shr3_3;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr4
	float ___shr4_4;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr5
	float ___shr5_5;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr6
	float ___shr6_6;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr7
	float ___shr7_7;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shr8
	float ___shr8_8;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg0
	float ___shg0_9;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg1
	float ___shg1_10;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg2
	float ___shg2_11;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg3
	float ___shg3_12;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg4
	float ___shg4_13;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg5
	float ___shg5_14;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg6
	float ___shg6_15;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg7
	float ___shg7_16;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shg8
	float ___shg8_17;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb0
	float ___shb0_18;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb1
	float ___shb1_19;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb2
	float ___shb2_20;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb3
	float ___shb3_21;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb4
	float ___shb4_22;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb5
	float ___shb5_23;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb6
	float ___shb6_24;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb7
	float ___shb7_25;
	// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::shb8
	float ___shb8_26;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F  : public CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9
{
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687* ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject* ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject* ___pending_exception_8;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t* ___m_Delegate_10;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___m_ExecutionContext_11;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_12;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_13;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_14;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
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

// System.Nullable`1<UnityEngine.Color>
struct Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value_1;
};

// System.Nullable`1<UnityEngine.Matrix4x4>
struct Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___value_1;
};

// System.Nullable`1<UnityEngine.Rendering.SphericalHarmonicsL2>
struct Nullable_1_t4C9CB95ACA9906A61C759884064F60858BF7E798 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	SphericalHarmonicsL2_tCBFB646455D2069E738976E5B745C6DF023B6BA2 ___value_1;
};

// System.Nullable`1<UnityEngine.Vector3>
struct Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value_1;
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D 
{
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshaled_pinvoke
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke ___m_coreState_1;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshaled_com
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com ___m_coreState_1;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
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

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.XR.ARSubsystems.XROcclusionSubsystemDescriptor
struct XROcclusionSubsystemDescriptor_t25944D13CC0A207D206577F9A91D445526B4930F  : public SubsystemDescriptorWithProvider_2_t79EDF938C4BE84AF066C781C2FCA09FE74BFF8FE
{
	// System.Func`1<System.Boolean> UnityEngine.XR.ARSubsystems.XROcclusionSubsystemDescriptor::m_QueryForSupportsEnvironmentDepthImage
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___m_QueryForSupportsEnvironmentDepthImage_3;
	// System.Func`1<UnityEngine.XR.ARSubsystems.Supported> UnityEngine.XR.ARSubsystems.XROcclusionSubsystemDescriptor::m_EnvironmentDepthImageSupportedDelegate
	Func_1_t778056BE8A070F696DB064AC7FBD1F996A928ED2* ___m_EnvironmentDepthImageSupportedDelegate_4;
	// System.Func`1<System.Boolean> UnityEngine.XR.ARSubsystems.XROcclusionSubsystemDescriptor::m_QueryForSupportsEnvironmentDepthConfidenceImage
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___m_QueryForSupportsEnvironmentDepthConfidenceImage_5;
	// System.Func`1<UnityEngine.XR.ARSubsystems.Supported> UnityEngine.XR.ARSubsystems.XROcclusionSubsystemDescriptor::m_EnvironmentDepthConfidenceImageSupportedDelegate
	Func_1_t778056BE8A070F696DB064AC7FBD1F996A928ED2* ___m_EnvironmentDepthConfidenceImageSupportedDelegate_6;
	// System.Boolean UnityEngine.XR.ARSubsystems.XROcclusionSubsystemDescriptor::m_SupportsHumanSegmentationStencilImage
	bool ___m_SupportsHumanSegmentationStencilImage_7;
	// System.Func`1<UnityEngine.XR.ARSubsystems.Supported> UnityEngine.XR.ARSubsystems.XROcclusionSubsystemDescriptor::m_HumanSegmentationStencilImageSupportedDelegate
	Func_1_t778056BE8A070F696DB064AC7FBD1F996A928ED2* ___m_HumanSegmentationStencilImageSupportedDelegate_8;
	// System.Boolean UnityEngine.XR.ARSubsystems.XROcclusionSubsystemDescriptor::m_SupportsHumanSegmentationDepthImage
	bool ___m_SupportsHumanSegmentationDepthImage_9;
	// System.Func`1<UnityEngine.XR.ARSubsystems.Supported> UnityEngine.XR.ARSubsystems.XROcclusionSubsystemDescriptor::m_HumanSegmentationDepthImageSupportedDelegate
	Func_1_t778056BE8A070F696DB064AC7FBD1F996A928ED2* ___m_HumanSegmentationDepthImageSupportedDelegate_10;
	// System.Func`1<UnityEngine.XR.ARSubsystems.Supported> UnityEngine.XR.ARSubsystems.XROcclusionSubsystemDescriptor::m_EnvironmentDepthTemporalSmoothingSupportedDelegate
	Func_1_t778056BE8A070F696DB064AC7FBD1F996A928ED2* ___m_EnvironmentDepthTemporalSmoothingSupportedDelegate_11;
};

// UnityEngine.XR.ARSubsystems.XRTextureDescriptor
struct XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 
{
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_NativeTexture
	intptr_t ___m_NativeTexture_0;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Width
	int32_t ___m_Width_1;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Height
	int32_t ___m_Height_2;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_MipmapCount
	int32_t ___m_MipmapCount_3;
	// UnityEngine.TextureFormat UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Format
	int32_t ___m_Format_4;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_PropertyNameId
	int32_t ___m_PropertyNameId_5;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Depth
	int32_t ___m_Depth_6;
	// UnityEngine.Rendering.TextureDimension UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Dimension
	int32_t ___m_Dimension_7;
};

// UnityEngine.XR.ARFoundation.ARLightEstimationData
struct ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7 
{
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARLightEstimationData::<averageColorTemperature>k__BackingField
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CaverageColorTemperatureU3Ek__BackingField_0;
	// System.Nullable`1<UnityEngine.Color> UnityEngine.XR.ARFoundation.ARLightEstimationData::<colorCorrection>k__BackingField
	Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___U3CcolorCorrectionU3Ek__BackingField_1;
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARLightEstimationData::<mainLightIntensityLumens>k__BackingField
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CmainLightIntensityLumensU3Ek__BackingField_2;
	// System.Nullable`1<UnityEngine.Color> UnityEngine.XR.ARFoundation.ARLightEstimationData::<mainLightColor>k__BackingField
	Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___U3CmainLightColorU3Ek__BackingField_3;
	// System.Nullable`1<UnityEngine.Vector3> UnityEngine.XR.ARFoundation.ARLightEstimationData::<mainLightDirection>k__BackingField
	Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE ___U3CmainLightDirectionU3Ek__BackingField_4;
	// System.Nullable`1<UnityEngine.Rendering.SphericalHarmonicsL2> UnityEngine.XR.ARFoundation.ARLightEstimationData::<ambientSphericalHarmonics>k__BackingField
	Nullable_1_t4C9CB95ACA9906A61C759884064F60858BF7E798 ___U3CambientSphericalHarmonicsU3Ek__BackingField_5;
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARLightEstimationData::m_AverageBrightness
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_AverageBrightness_6;
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARLightEstimationData::m_AverageIntensityInLumens
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_AverageIntensityInLumens_7;
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARLightEstimationData::m_MainLightBrightness
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_MainLightBrightness_8;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARLightEstimationData
struct ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7_marshaled_pinvoke
{
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CaverageColorTemperatureU3Ek__BackingField_0;
	Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___U3CcolorCorrectionU3Ek__BackingField_1;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CmainLightIntensityLumensU3Ek__BackingField_2;
	Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___U3CmainLightColorU3Ek__BackingField_3;
	Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE ___U3CmainLightDirectionU3Ek__BackingField_4;
	Nullable_1_t4C9CB95ACA9906A61C759884064F60858BF7E798 ___U3CambientSphericalHarmonicsU3Ek__BackingField_5;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_AverageBrightness_6;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_AverageIntensityInLumens_7;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_MainLightBrightness_8;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARLightEstimationData
struct ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7_marshaled_com
{
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CaverageColorTemperatureU3Ek__BackingField_0;
	Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___U3CcolorCorrectionU3Ek__BackingField_1;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CmainLightIntensityLumensU3Ek__BackingField_2;
	Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___U3CmainLightColorU3Ek__BackingField_3;
	Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE ___U3CmainLightDirectionU3Ek__BackingField_4;
	Nullable_1_t4C9CB95ACA9906A61C759884064F60858BF7E798 ___U3CambientSphericalHarmonicsU3Ek__BackingField_5;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_AverageBrightness_6;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_AverageIntensityInLumens_7;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_MainLightBrightness_8;
};

// UnityEngine.XR.ARFoundation.ARTextureInfo
struct ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261 
{
	// UnityEngine.XR.ARSubsystems.XRTextureDescriptor UnityEngine.XR.ARFoundation.ARTextureInfo::m_Descriptor
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___m_Descriptor_1;
	// UnityEngine.Texture UnityEngine.XR.ARFoundation.ARTextureInfo::m_Texture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Texture_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARTextureInfo
struct ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261_marshaled_pinvoke
{
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___m_Descriptor_1;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Texture_2;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARTextureInfo
struct ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261_marshaled_com
{
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___m_Descriptor_1;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Texture_2;
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// HlsServer/<Listen>d__5
struct U3CListenU3Ed__5_t1A5103CF2B74AC0FE9019A69C9F3A37AC77A0891 
{
	// System.Int32 HlsServer/<Listen>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder HlsServer/<Listen>d__5::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// HlsServer HlsServer/<Listen>d__5::<>4__this
	HlsServer_tA907BA96BB7103CCBA09278E37D13C6BB9864400* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.HttpListenerContext> HlsServer/<Listen>d__5::<>u__1
	TaskAwaiter_1_t2E68D3DCE6F297E6D87BB498EABE5984B167C244 ___U3CU3Eu__1_3;
};

// System.Action`1<System.Byte[]>
struct Action_1_t300D9A559311CF7D2AE5D29B63E8C4DE0D49BCD8  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.GameObject,System.Boolean>
struct Func_2_tD5855DA3DC1C614C29762075E12B0B72B8B1F51C  : public MulticastDelegate_t
{
};

// UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs
struct ARCameraFrameEventArgs_t4060608C37C2B7248AFC908876309CC36D53E0EC 
{
	// UnityEngine.XR.ARFoundation.ARLightEstimationData UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<lightEstimation>k__BackingField
	ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7 ___U3ClightEstimationU3Ek__BackingField_0;
	// System.Nullable`1<System.Int64> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<timestampNs>k__BackingField
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___U3CtimestampNsU3Ek__BackingField_1;
	// System.Nullable`1<UnityEngine.Matrix4x4> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<projectionMatrix>k__BackingField
	Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA ___U3CprojectionMatrixU3Ek__BackingField_2;
	// System.Nullable`1<UnityEngine.Matrix4x4> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<displayMatrix>k__BackingField
	Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA ___U3CdisplayMatrixU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<UnityEngine.Texture2D> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<textures>k__BackingField
	List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* ___U3CtexturesU3Ek__BackingField_4;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<propertyNameIds>k__BackingField
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___U3CpropertyNameIdsU3Ek__BackingField_5;
	// System.Nullable`1<System.Double> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<exposureDuration>k__BackingField
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CexposureDurationU3Ek__BackingField_6;
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<exposureOffset>k__BackingField
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CexposureOffsetU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<System.String> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<enabledMaterialKeywords>k__BackingField
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CenabledMaterialKeywordsU3Ek__BackingField_8;
	// System.Collections.Generic.List`1<System.String> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<disabledMaterialKeywords>k__BackingField
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CdisabledMaterialKeywordsU3Ek__BackingField_9;
	// UnityEngine.Texture UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<cameraGrainTexture>k__BackingField
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___U3CcameraGrainTextureU3Ek__BackingField_10;
	// System.Single UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::<noiseIntensity>k__BackingField
	float ___U3CnoiseIntensityU3Ek__BackingField_11;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs
struct ARCameraFrameEventArgs_t4060608C37C2B7248AFC908876309CC36D53E0EC_marshaled_pinvoke
{
	ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7_marshaled_pinvoke ___U3ClightEstimationU3Ek__BackingField_0;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___U3CtimestampNsU3Ek__BackingField_1;
	Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA ___U3CprojectionMatrixU3Ek__BackingField_2;
	Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA ___U3CdisplayMatrixU3Ek__BackingField_3;
	List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* ___U3CtexturesU3Ek__BackingField_4;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___U3CpropertyNameIdsU3Ek__BackingField_5;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CexposureDurationU3Ek__BackingField_6;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CexposureOffsetU3Ek__BackingField_7;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CenabledMaterialKeywordsU3Ek__BackingField_8;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CdisabledMaterialKeywordsU3Ek__BackingField_9;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___U3CcameraGrainTextureU3Ek__BackingField_10;
	float ___U3CnoiseIntensityU3Ek__BackingField_11;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs
struct ARCameraFrameEventArgs_t4060608C37C2B7248AFC908876309CC36D53E0EC_marshaled_com
{
	ARLightEstimationData_tE622C47E05EBA84E05326E72C9D258F0200D5CE7_marshaled_com ___U3ClightEstimationU3Ek__BackingField_0;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___U3CtimestampNsU3Ek__BackingField_1;
	Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA ___U3CprojectionMatrixU3Ek__BackingField_2;
	Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA ___U3CdisplayMatrixU3Ek__BackingField_3;
	List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* ___U3CtexturesU3Ek__BackingField_4;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___U3CpropertyNameIdsU3Ek__BackingField_5;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CexposureDurationU3Ek__BackingField_6;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CexposureOffsetU3Ek__BackingField_7;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CenabledMaterialKeywordsU3Ek__BackingField_8;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CdisabledMaterialKeywordsU3Ek__BackingField_9;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___U3CcameraGrainTextureU3Ek__BackingField_10;
	float ___U3CnoiseIntensityU3Ek__BackingField_11;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// System.Threading.ThreadStart
struct ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2  : public MulticastDelegate_t
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// VideoCreator.MediaCreator/UnityMediaCreator_setOnSegmentData_delegate
struct UnityMediaCreator_setOnSegmentData_delegate_tCE3B71DFB24ADDB8E286DEF8B4AE0E5B847BA2B7  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>
struct Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735  : public MulticastDelegate_t
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRCameraSubsystem,UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRCameraSubsystem/Provider>
struct SubsystemLifecycleManager_3_t2810F2EBBCBEAEE830830E20CF311EBAD8EA983B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRCameraSubsystem_t1F15E4BAEF03223F63AB57E49D1B5DE06749D140* ___U3CsubsystemU3Ek__BackingField_4;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XROcclusionSubsystem,UnityEngine.XR.ARSubsystems.XROcclusionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XROcclusionSubsystem/Provider>
struct SubsystemLifecycleManager_3_t1892B8E9DF20D5A95CB7E5B2AAA38CF6DD9711CF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XROcclusionSubsystem_tAA1BB69ACF188D778FBC8EF5E7B427C6EB2F0C3C* ___U3CsubsystemU3Ek__BackingField_4;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// ButtonManager
struct ButtonManager_tB4A98DF10074AA9CF8B331C8AB41A791E21A6AD8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject ButtonManager::image
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___image_4;
};

// UnityEngine.XR.ARFoundation.Samples.DepthManager
struct DepthManager_t844D33D06E2618F752DF8065710556E6051B435C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single UnityEngine.XR.ARFoundation.Samples.DepthManager::long_length
	float ___long_length_4;
	// UnityEngine.UI.Text UnityEngine.XR.ARFoundation.Samples.DepthManager::pixcelDepth
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___pixcelDepth_5;
	// System.Text.StringBuilder UnityEngine.XR.ARFoundation.Samples.DepthManager::m_StringBuilder
	StringBuilder_t* ___m_StringBuilder_11;
	// UnityEngine.ScreenOrientation UnityEngine.XR.ARFoundation.Samples.DepthManager::m_CurrentScreenOrientation
	int32_t ___m_CurrentScreenOrientation_12;
	// System.Single UnityEngine.XR.ARFoundation.Samples.DepthManager::m_TextureAspectRatio
	float ___m_TextureAspectRatio_13;
	// UnityEngine.XR.ARFoundation.Samples.DepthManager/DisplayMode UnityEngine.XR.ARFoundation.Samples.DepthManager::m_DisplayMode
	int32_t ___m_DisplayMode_14;
	// UnityEngine.Matrix4x4 UnityEngine.XR.ARFoundation.Samples.DepthManager::m_DisplayRotationMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_DisplayRotationMatrix_15;
	// UnityEngine.XR.ARFoundation.AROcclusionManager UnityEngine.XR.ARFoundation.Samples.DepthManager::m_OcclusionManager
	AROcclusionManager_t9EDE9F76050AF892E2AC6704D0F76EDAC370609D* ___m_OcclusionManager_16;
	// UnityEngine.XR.ARFoundation.ARCameraManager UnityEngine.XR.ARFoundation.Samples.DepthManager::m_CameraManager
	ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* ___m_CameraManager_17;
	// UnityEngine.UI.RawImage UnityEngine.XR.ARFoundation.Samples.DepthManager::m_RawImage
	RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* ___m_RawImage_18;
	// UnityEngine.UI.Text UnityEngine.XR.ARFoundation.Samples.DepthManager::m_ImageInfo
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_ImageInfo_19;
	// UnityEngine.Material UnityEngine.XR.ARFoundation.Samples.DepthManager::m_DepthMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_DepthMaterial_20;
	// UnityEngine.Material UnityEngine.XR.ARFoundation.Samples.DepthManager::m_StencilMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_StencilMaterial_21;
	// System.Single UnityEngine.XR.ARFoundation.Samples.DepthManager::m_MaxEnvironmentDistance
	float ___m_MaxEnvironmentDistance_22;
	// System.Single UnityEngine.XR.ARFoundation.Samples.DepthManager::m_MaxHumanDistance
	float ___m_MaxHumanDistance_23;
};

// H264StreamerTest
struct H264StreamerTest_t48DACFECF405CD58FD607862E183D3A33AA36BFD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.RenderTexture H264StreamerTest::texture
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___texture_4;
	// System.Single H264StreamerTest::startTime
	float ___startTime_5;
};

// HlsSample
struct HlsSample_tCDA44A9069ED217B74AF3E14319FC5C196682862  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.RenderTexture HlsSample::texture
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___texture_4;
	// HlsServer HlsSample::hlsServer
	HlsServer_tA907BA96BB7103CCBA09278E37D13C6BB9864400* ___hlsServer_5;
	// System.Int64 HlsSample::startTimeOffset
	int64_t ___startTimeOffset_6;
	// System.Boolean HlsSample::isRecording
	bool ___isRecording_7;
	// System.String HlsSample::cachePath
	String_t* ___cachePath_8;
	// System.Single HlsSample::startTime
	float ___startTime_9;
};

// HlsServer
struct HlsServer_tA907BA96BB7103CCBA09278E37D13C6BB9864400  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Threading.Thread HlsServer::listenerThread
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___listenerThread_4;
	// System.Net.HttpListener HlsServer::httpListener
	HttpListener_t64CDB1E1A5227C151C7A271A8747DBC88EBC8F01* ___httpListener_5;
	// System.Int32 HlsServer::sequence
	int32_t ___sequence_6;
	// System.Byte[] HlsServer::initData
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___initData_7;
	// System.Collections.Generic.List`1<System.ValueTuple`2<System.Int32,System.Byte[]>> HlsServer::sequences
	List_1_tF88145309D90E96C94637CEE6C76DF92A4E8AA7F* ___sequences_8;
};

// ImageSample
struct ImageSample_tEF6237A690E8F432E6662F4BE787C67762FF10E5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.RenderTexture ImageSample::texture
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___texture_4;
};

// LivePhotsSample
struct LivePhotsSample_tB672C2B983EAFBD7CEE8E821052C4B118A4A3F29  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.RenderTexture LivePhotsSample::texture
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___texture_4;
	// System.Int64 LivePhotsSample::startTimeOffset
	int64_t ___startTimeOffset_5;
	// System.Boolean LivePhotsSample::isRecording
	bool ___isRecording_6;
	// System.String LivePhotsSample::cachePath
	String_t* ___cachePath_7;
	// System.String LivePhotsSample::uuid
	String_t* ___uuid_8;
	// System.Single LivePhotsSample::startTime
	float ___startTime_9;
};

// MainFlow
struct MainFlow_t8B7290D017A0FF7C68F7E7BD48480C0C4E2BFAB2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// MovSample
struct MovSample_t3E7C6F955219CECFCAF6529664C0FA9954109EDD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.RenderTexture MovSample::texture
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___texture_4;
	// UnityEngine.AudioSource MovSample::audioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioSource_5;
	// System.Int64 MovSample::startTimeOffset
	int64_t ___startTimeOffset_6;
	// System.Boolean MovSample::isRecording
	bool ___isRecording_7;
	// System.Boolean MovSample::recordAudio
	bool ___recordAudio_8;
	// System.String MovSample::cachePath
	String_t* ___cachePath_9;
	// System.Single MovSample::startTime
	float ___startTime_10;
	// System.Int64 MovSample::amountAudioFrame
	int64_t ___amountAudioFrame_11;
	// System.Int32 MovSample::fps
	int32_t ___fps_12;
};

// RecordingController
struct RecordingController_t98BBC80C535D6BCFDF598B1F70807E72845B5B4B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.RenderTexture RecordingController::texture
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___texture_4;
	// UnityEngine.UI.Text RecordingController::text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___text_5;
	// HlsServer RecordingController::hlsServer
	HlsServer_tA907BA96BB7103CCBA09278E37D13C6BB9864400* ___hlsServer_6;
	// System.Boolean RecordingController::isRecording
	bool ___isRecording_7;
	// System.Boolean RecordingController::recordTexture
	bool ___recordTexture_8;
	// System.Boolean RecordingController::recordAudio
	bool ___recordAudio_9;
	// System.Boolean RecordingController::saveAfterFinish
	bool ___saveAfterFinish_10;
	// System.Int32 RecordingController::livePhotosRecording
	int32_t ___livePhotosRecording_11;
	// System.String RecordingController::uuid
	String_t* ___uuid_12;
	// System.String RecordingController::cachePath
	String_t* ___cachePath_13;
	// System.Int64 RecordingController::amountFrame
	int64_t ___amountFrame_14;
	// System.Single RecordingController::startTime
	float ___startTime_15;
	// System.Int64 RecordingController::startTimeOffset
	int64_t ___startTimeOffset_16;
};

// RotCube
struct RotCube_t0548BD60E2B76610C4F251D2F86BEBF09274AC61  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single RotCube::vy
	float ___vy_4;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// depth_viewer
struct depth_viewer_tFF0E9DE91C8A38978DCC68D56BE449CB0D54A79A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Matrix4x4 depth_viewer::m_DisplayRotationMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_DisplayRotationMatrix_8;
	// UnityEngine.XR.ARFoundation.AROcclusionManager depth_viewer::m_OcclusionManager
	AROcclusionManager_t9EDE9F76050AF892E2AC6704D0F76EDAC370609D* ___m_OcclusionManager_9;
	// UnityEngine.Material depth_viewer::depth_material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___depth_material_10;
	// UnityEngine.RenderTexture depth_viewer::rt
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___rt_11;
	// System.Single depth_viewer::MaxDistance
	float ___MaxDistance_12;
};

// UnityEngine.XR.ARFoundation.ARCameraManager
struct ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F  : public SubsystemLifecycleManager_3_t2810F2EBBCBEAEE830830E20CF311EBAD8EA983B
{
	// UnityEngine.XR.ARSubsystems.CameraFocusMode UnityEngine.XR.ARFoundation.ARCameraManager::m_FocusMode
	int32_t ___m_FocusMode_7;
	// UnityEngine.XR.ARSubsystems.LightEstimationMode UnityEngine.XR.ARFoundation.ARCameraManager::m_LightEstimationMode
	int32_t ___m_LightEstimationMode_8;
	// System.Boolean UnityEngine.XR.ARFoundation.ARCameraManager::m_AutoFocus
	bool ___m_AutoFocus_9;
	// UnityEngine.XR.ARFoundation.LightEstimation UnityEngine.XR.ARFoundation.ARCameraManager::m_LightEstimation
	int32_t ___m_LightEstimation_10;
	// UnityEngine.XR.ARFoundation.CameraFacingDirection UnityEngine.XR.ARFoundation.ARCameraManager::m_FacingDirection
	int32_t ___m_FacingDirection_11;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs> UnityEngine.XR.ARFoundation.ARCameraManager::frameReceived
	Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735* ___frameReceived_12;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTextureInfo> UnityEngine.XR.ARFoundation.ARCameraManager::m_TextureInfos
	List_1_tBEE41A3C84ED348850866AD76B66E9D9B19767FF* ___m_TextureInfos_15;
	// UnityEngine.Camera UnityEngine.XR.ARFoundation.ARCameraManager::m_Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_Camera_16;
	// System.Boolean UnityEngine.XR.ARFoundation.ARCameraManager::m_PreRenderInvertCullingValue
	bool ___m_PreRenderInvertCullingValue_17;
	// UnityEngine.XR.ARFoundation.ARTextureInfo UnityEngine.XR.ARFoundation.ARCameraManager::m_CameraGrainInfo
	ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261 ___m_CameraGrainInfo_18;
};

// UnityEngine.XR.ARFoundation.AROcclusionManager
struct AROcclusionManager_t9EDE9F76050AF892E2AC6704D0F76EDAC370609D  : public SubsystemLifecycleManager_3_t1892B8E9DF20D5A95CB7E5B2AAA38CF6DD9711CF
{
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTextureInfo> UnityEngine.XR.ARFoundation.AROcclusionManager::m_TextureInfos
	List_1_tBEE41A3C84ED348850866AD76B66E9D9B19767FF* ___m_TextureInfos_7;
	// System.Collections.Generic.List`1<UnityEngine.Texture2D> UnityEngine.XR.ARFoundation.AROcclusionManager::m_Textures
	List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* ___m_Textures_8;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.XR.ARFoundation.AROcclusionManager::m_TexturePropertyIds
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___m_TexturePropertyIds_9;
	// UnityEngine.XR.ARFoundation.ARTextureInfo UnityEngine.XR.ARFoundation.AROcclusionManager::m_HumanStencilTextureInfo
	ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261 ___m_HumanStencilTextureInfo_10;
	// UnityEngine.XR.ARFoundation.ARTextureInfo UnityEngine.XR.ARFoundation.AROcclusionManager::m_HumanDepthTextureInfo
	ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261 ___m_HumanDepthTextureInfo_11;
	// UnityEngine.XR.ARFoundation.ARTextureInfo UnityEngine.XR.ARFoundation.AROcclusionManager::m_EnvironmentDepthTextureInfo
	ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261 ___m_EnvironmentDepthTextureInfo_12;
	// UnityEngine.XR.ARFoundation.ARTextureInfo UnityEngine.XR.ARFoundation.AROcclusionManager::m_EnvironmentDepthConfidenceTextureInfo
	ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261 ___m_EnvironmentDepthConfidenceTextureInfo_13;
	// System.Action`1<UnityEngine.XR.ARFoundation.AROcclusionFrameEventArgs> UnityEngine.XR.ARFoundation.AROcclusionManager::frameReceived
	Action_1_tFE8396A8376FE78B5494249C8A294967E81C927C* ___frameReceived_14;
	// UnityEngine.XR.ARSubsystems.HumanSegmentationStencilMode UnityEngine.XR.ARFoundation.AROcclusionManager::m_HumanSegmentationStencilMode
	int32_t ___m_HumanSegmentationStencilMode_15;
	// UnityEngine.XR.ARSubsystems.HumanSegmentationDepthMode UnityEngine.XR.ARFoundation.AROcclusionManager::m_HumanSegmentationDepthMode
	int32_t ___m_HumanSegmentationDepthMode_16;
	// UnityEngine.XR.ARSubsystems.EnvironmentDepthMode UnityEngine.XR.ARFoundation.AROcclusionManager::m_EnvironmentDepthMode
	int32_t ___m_EnvironmentDepthMode_17;
	// System.Boolean UnityEngine.XR.ARFoundation.AROcclusionManager::m_EnvironmentDepthTemporalSmoothing
	bool ___m_EnvironmentDepthTemporalSmoothing_18;
	// UnityEngine.XR.ARSubsystems.OcclusionPreferenceMode UnityEngine.XR.ARFoundation.AROcclusionManager::m_OcclusionPreferenceMode
	int32_t ___m_OcclusionPreferenceMode_19;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

// UnityEngine.UI.Dropdown
struct Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Dropdown::m_Template
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Template_20;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_CaptionText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_CaptionText_21;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_CaptionImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_CaptionImage_22;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_ItemText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_ItemText_23;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_ItemImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_ItemImage_24;
	// System.Int32 UnityEngine.UI.Dropdown::m_Value
	int32_t ___m_Value_25;
	// UnityEngine.UI.Dropdown/OptionDataList UnityEngine.UI.Dropdown::m_Options
	OptionDataList_t53255477D0A9C6980AB48693A520EFBC94DFFB96* ___m_Options_26;
	// UnityEngine.UI.Dropdown/DropdownEvent UnityEngine.UI.Dropdown::m_OnValueChanged
	DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059* ___m_OnValueChanged_27;
	// System.Single UnityEngine.UI.Dropdown::m_AlphaFadeSpeed
	float ___m_AlphaFadeSpeed_28;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Dropdown
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Dropdown_29;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Blocker
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Blocker_30;
	// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem> UnityEngine.UI.Dropdown::m_Items
	List_1_t89B39292AD45371F7FDCB295AAE956D33588BC6E* ___m_Items_31;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween> UnityEngine.UI.Dropdown::m_AlphaTweenRunner
	TweenRunner_1_t830EC096236A3CEC7189DFA6E0B2E74C5C97780B* ___m_AlphaTweenRunner_32;
	// System.Boolean UnityEngine.UI.Dropdown::validTemplate
	bool ___validTemplate_33;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.RawImage
struct RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Texture UnityEngine.UI.RawImage::m_Texture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Texture_37;
	// UnityEngine.Rect UnityEngine.UI.RawImage::m_UVRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_UVRect_38;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_37;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_39;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_40;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_43;
};

// <Module>

// <Module>

// System.Collections.Generic.List`1<System.ValueTuple`2<System.Int32,System.Byte[]>>
struct List_1_tF88145309D90E96C94637CEE6C76DF92A4E8AA7F_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ValueTuple_2U5BU5D_t2F6726A7B27A60B8F94DF2072C0C23EFDE7EF7F9* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.ValueTuple`2<System.Int32,System.Byte[]>>

// System.Collections.Generic.List`1<System.ValueTuple`2<System.Int32,System.Object>>
struct List_1_t907DB8AD76E5F78DD0F5BA1DFFA98419DAFC2562_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ValueTuple_2U5BU5D_tED54EDCEE1089B223CCE6E9AE4EC797AEB71B322* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.ValueTuple`2<System.Int32,System.Object>>

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// System.Text.Encoding

// VideoCreator.H264Streamer

// VideoCreator.H264Streamer

// System.Net.HttpListener

// System.Net.HttpListener

// System.Net.HttpListenerContext

// System.Net.HttpListenerContext

// System.Net.HttpListenerPrefixCollection

// System.Net.HttpListenerPrefixCollection

// System.Net.HttpListenerRequest
struct HttpListenerRequest_t30206889F6CB705A9774EAD0C76C905096237FA8_StaticFields
{
	// System.Byte[] System.Net.HttpListenerRequest::_100continue
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____100continue_17;
	// System.Char[] System.Net.HttpListenerRequest::separators
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___separators_18;
};

// System.Net.HttpListenerRequest

// System.Net.HttpListenerResponse
struct HttpListenerResponse_tE2A3F65DF2E0B73D19CE1FBDCFE622CADE7B38B1_StaticFields
{
	// System.String System.Net.HttpListenerResponse::tspecials
	String_t* ___tspecials_18;
};

// System.Net.HttpListenerResponse

// VideoCreator.MediaCreator
struct MediaCreator_tC4FC5D37813942FAD35708E170E68E9885658216_StaticFields
{
	// System.Action`1<System.Byte[]> VideoCreator.MediaCreator::onSegmentDataAction
	Action_1_t300D9A559311CF7D2AE5D29B63E8C4DE0D49BCD8* ___onSegmentDataAction_0;
};

// VideoCreator.MediaCreator

// VideoCreator.MediaSaver

// VideoCreator.MediaSaver

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Text.StringBuilder

// System.Text.StringBuilder

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_8;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_9;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_11;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_14;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_15;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_16;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_17;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_18;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_19;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_20;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_21;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_12;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_13;
};

// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_StaticFields
{
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_20;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_21;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_22;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_23;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_24;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_25;
	// System.Object System.Uri::s_initLock
	RuntimeObject* ___s_initLock_26;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___HexLowerChars_27;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____WSchars_28;
};

// System.Uri

// System.ValueType

// System.ValueType

// UnityEngine.YieldInstruction

// UnityEngine.YieldInstruction

// ImageSample/<>c
struct U3CU3Ec_t09E14DD342CDB1E94E7BE5E5EF4040745D94AFCC_StaticFields
{
	// ImageSample/<>c ImageSample/<>c::<>9
	U3CU3Ec_t09E14DD342CDB1E94E7BE5E5EF4040745D94AFCC* ___U3CU3E9_0;
	// System.Func`2<UnityEngine.GameObject,System.Boolean> ImageSample/<>c::<>9__1_0
	Func_2_tD5855DA3DC1C614C29762075E12B0B72B8B1F51C* ___U3CU3E9__1_0_1;
};

// ImageSample/<>c

// ImageSample/<Start>d__1

// ImageSample/<Start>d__1

// System.Nullable`1<System.Double>

// System.Nullable`1<System.Double>

// System.Nullable`1<System.Int64>

// System.Nullable`1<System.Int64>

// System.Nullable`1<System.Single>

// System.Nullable`1<System.Single>

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XROcclusionSubsystem,UnityEngine.XR.ARSubsystems.XROcclusionSubsystem/Provider>

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XROcclusionSubsystem,UnityEngine.XR.ARSubsystems.XROcclusionSubsystem/Provider>

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.HttpListenerContext>

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.HttpListenerContext>

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>

// System.Threading.Tasks.Task`1<System.Net.HttpListenerContext>
struct Task_1_t7B1A2F201CBB48A5FE2574C4F589450D6731403D_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tC0BB9633EDDB72940A75C39F67D074DAFBE019D4* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<System.Net.HttpListenerContext>

// System.ValueTuple`2<System.Int32,System.Byte[]>

// System.ValueTuple`2<System.Int32,System.Byte[]>

// System.ValueTuple`2<System.Int32,System.Object>

// System.ValueTuple`2<System.Int32,System.Object>

// System.Runtime.CompilerServices.AsyncMethodBuilderCore

// System.Runtime.CompilerServices.AsyncMethodBuilderCore

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// UnityEngine.Color

// UnityEngine.Color

// System.Double

// System.Double

// System.Guid
struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Guid

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields
{
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;
};

// UnityEngine.Mathf

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Matrix4x4

// UnityEngine.UI.Navigation

// UnityEngine.UI.Navigation

// UnityEngine.Rect

// UnityEngine.Rect

// UnityEngine.SceneManagement.Scene

// UnityEngine.SceneManagement.Scene

// System.Single

// System.Single

// UnityEngine.Rendering.SphericalHarmonicsL2

// UnityEngine.Rendering.SphericalHarmonicsL2

// UnityEngine.UI.SpriteState

// UnityEngine.UI.SpriteState

// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_StaticFields
{
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E* ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentUICulture_5;
};

// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_ThreadStaticFields
{
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F* ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___current_thread_9;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// UnityEngine.Vector4

// System.Void

// System.Void

// System.Nullable`1<UnityEngine.Color>

// System.Nullable`1<UnityEngine.Color>

// System.Nullable`1<UnityEngine.Matrix4x4>

// System.Nullable`1<UnityEngine.Matrix4x4>

// System.Nullable`1<UnityEngine.Rendering.SphericalHarmonicsL2>

// System.Nullable`1<UnityEngine.Rendering.SphericalHarmonicsL2>

// System.Nullable`1<UnityEngine.Vector3>

// System.Nullable`1<UnityEngine.Vector3>

// UnityEngine.AsyncOperation

// UnityEngine.AsyncOperation

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.UI.ColorBlock

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.XR.ARSubsystems.XROcclusionSubsystemDescriptor

// UnityEngine.XR.ARSubsystems.XROcclusionSubsystemDescriptor

// UnityEngine.XR.ARSubsystems.XRTextureDescriptor

// UnityEngine.XR.ARSubsystems.XRTextureDescriptor

// UnityEngine.XR.ARFoundation.ARLightEstimationData

// UnityEngine.XR.ARFoundation.ARLightEstimationData

// UnityEngine.XR.ARFoundation.ARTextureInfo

// UnityEngine.XR.ARFoundation.ARTextureInfo

// UnityEngine.AudioClip

// UnityEngine.AudioClip

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Material

// UnityEngine.Material

// System.MulticastDelegate

// System.MulticastDelegate

// System.SystemException

// System.SystemException

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.Texture

// HlsServer/<Listen>d__5

// HlsServer/<Listen>d__5

// System.Action`1<System.Byte[]>

// System.Action`1<System.Byte[]>

// System.Action`1<System.Object>

// System.Action`1<System.Object>

// System.Func`2<UnityEngine.GameObject,System.Boolean>

// System.Func`2<UnityEngine.GameObject,System.Boolean>

// UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs

// UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs

// System.AsyncCallback

// System.AsyncCallback

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.RenderTexture

// UnityEngine.RenderTexture

// UnityEngine.Texture2D

// UnityEngine.Texture2D

// System.Threading.ThreadStart

// System.Threading.ThreadStart

// UnityEngine.Transform

// UnityEngine.Transform

// VideoCreator.MediaCreator/UnityMediaCreator_setOnSegmentData_delegate

// VideoCreator.MediaCreator/UnityMediaCreator_setOnSegmentData_delegate

// System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>

// System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>

// UnityEngine.AudioBehaviour

// UnityEngine.AudioBehaviour

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Camera

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.RectTransform

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRCameraSubsystem,UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRCameraSubsystem/Provider>
struct SubsystemLifecycleManager_3_t2810F2EBBCBEAEE830830E20CF311EBAD8EA983B_StaticFields
{
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_tB62E7DBB1A743CF013D1542F79F59C2BB105B7AC* ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t1C988AEFF3BCCFEF103EACA601923CD56DBB593C* ___s_SubsystemInstances_6;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRCameraSubsystem,UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRCameraSubsystem/Provider>

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XROcclusionSubsystem,UnityEngine.XR.ARSubsystems.XROcclusionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XROcclusionSubsystem/Provider>
struct SubsystemLifecycleManager_3_t1892B8E9DF20D5A95CB7E5B2AAA38CF6DD9711CF_StaticFields
{
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_t3D09B5A317B11F9E075244885D17EC10AF3301C2* ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t411E4ADEB151FAA7346742CBC666CC242E4DACCB* ___s_SubsystemInstances_6;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XROcclusionSubsystem,UnityEngine.XR.ARSubsystems.XROcclusionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XROcclusionSubsystem/Provider>

// UnityEngine.AudioSource

// UnityEngine.AudioSource

// ButtonManager

// ButtonManager

// UnityEngine.XR.ARFoundation.Samples.DepthManager
struct DepthManager_t844D33D06E2618F752DF8065710556E6051B435C_StaticFields
{
	// System.Int32 UnityEngine.XR.ARFoundation.Samples.DepthManager::k_MaxDistanceId
	int32_t ___k_MaxDistanceId_9;
	// System.Int32 UnityEngine.XR.ARFoundation.Samples.DepthManager::k_DisplayRotationPerFrameId
	int32_t ___k_DisplayRotationPerFrameId_10;
};

// UnityEngine.XR.ARFoundation.Samples.DepthManager

// H264StreamerTest

// H264StreamerTest

// HlsSample

// HlsSample

// HlsServer

// HlsServer

// ImageSample

// ImageSample

// LivePhotsSample

// LivePhotsSample

// MainFlow

// MainFlow

// MovSample

// MovSample

// RecordingController

// RecordingController

// RotCube

// RotCube

// UnityEngine.EventSystems.UIBehaviour

// UnityEngine.EventSystems.UIBehaviour

// depth_viewer
struct depth_viewer_tFF0E9DE91C8A38978DCC68D56BE449CB0D54A79A_StaticFields
{
	// System.Int32 depth_viewer::k_MaxDistanceId
	int32_t ___k_MaxDistanceId_6;
	// System.Int32 depth_viewer::k_DisplayRotationPerFrameId
	int32_t ___k_DisplayRotationPerFrameId_7;
};

// depth_viewer

// UnityEngine.XR.ARFoundation.ARCameraManager
struct ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.Texture2D> UnityEngine.XR.ARFoundation.ARCameraManager::s_Textures
	List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* ___s_Textures_13;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.XR.ARFoundation.ARCameraManager::s_PropertyIds
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___s_PropertyIds_14;
};

// UnityEngine.XR.ARFoundation.ARCameraManager

// UnityEngine.XR.ARFoundation.AROcclusionManager

// UnityEngine.XR.ARFoundation.AROcclusionManager

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.Graphic

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Selectable

// UnityEngine.UI.Dropdown
struct Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89_StaticFields
{
	// UnityEngine.UI.Dropdown/OptionData UnityEngine.UI.Dropdown::s_NoOptionData
	OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* ___s_NoOptionData_35;
};

// UnityEngine.UI.Dropdown

// UnityEngine.UI.MaskableGraphic

// UnityEngine.UI.MaskableGraphic

// UnityEngine.UI.RawImage

// UnityEngine.UI.RawImage

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_41;
};

// UnityEngine.UI.Text
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
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
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.ValueTuple`2<System.Int32,System.Object>[]
struct ValueTuple_2U5BU5D_tED54EDCEE1089B223CCE6E9AE4EC797AEB71B322  : public RuntimeArray
{
	ALIGN_FIELD (8) ValueTuple_2_tD9DCD90C6490444503B936F72B6882564ED11825 m_Items[1];

	inline ValueTuple_2_tD9DCD90C6490444503B936F72B6882564ED11825 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ValueTuple_2_tD9DCD90C6490444503B936F72B6882564ED11825* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ValueTuple_2_tD9DCD90C6490444503B936F72B6882564ED11825 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Item2_1), (void*)NULL);
	}
	inline ValueTuple_2_tD9DCD90C6490444503B936F72B6882564ED11825 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ValueTuple_2_tD9DCD90C6490444503B936F72B6882564ED11825* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ValueTuple_2_tD9DCD90C6490444503B936F72B6882564ED11825 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Item2_1), (void*)NULL);
	}
};


// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<HlsServer/<Listen>d__5>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CListenU3Ed__5_t1A5103CF2B74AC0FE9019A69C9F3A37AC77A0891_m54C0A9F3519E9E11799ADAB8C6BE7A6EB1DD874B_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CListenU3Ed__5_t1A5103CF2B74AC0FE9019A69C9F3A37AC77A0891* ___0_stateMachine, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.ValueTuple`2<System.Int32,System.Object>>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_tD9DCD90C6490444503B936F72B6882564ED11825 List_1_get_Item_m7B69A4F68A4613067639767206AA6D69D28E3C2C_gshared (List_1_t907DB8AD76E5F78DD0F5BA1DFFA98419DAFC2562* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.ValueTuple`2<System.Int32,System.Object>>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mEFFF128BA00882F673D7CC76760B4E941B294A2B_gshared_inline (List_1_t907DB8AD76E5F78DD0F5BA1DFFA98419DAFC2562* __this, const RuntimeMethod* method) ;
// System.Void System.ValueTuple`2<System.Int32,System.Object>::.ctor(T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_2__ctor_m6B6C0A6A3D8BF4D7D400B729024BB5A32A3314ED_gshared (ValueTuple_2_tD9DCD90C6490444503B936F72B6882564ED11825* __this, int32_t ___0_item1, RuntimeObject* ___1_item2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.ValueTuple`2<System.Int32,System.Object>>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0C956EDFF88FAC9E60885D2AB07769743E59B606_gshared_inline (List_1_t907DB8AD76E5F78DD0F5BA1DFFA98419DAFC2562* __this, ValueTuple_2_tD9DCD90C6490444503B936F72B6882564ED11825 ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.ValueTuple`2<System.Int32,System.Object>>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mE3942E53A6872B3D4D819A9998D3F5947CC40975_gshared (List_1_t907DB8AD76E5F78DD0F5BA1DFFA98419DAFC2562* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.ValueTuple`2<System.Int32,System.Object>>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m339B3DCFFA0529DC71BA1ADB65D6FDEA1048E5CA_gshared (List_1_t907DB8AD76E5F78DD0F5BA1DFFA98419DAFC2562* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,HlsServer/<Listen>d__5>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CListenU3Ed__5_t1A5103CF2B74AC0FE9019A69C9F3A37AC77A0891_mF4692818F10A23439C97F0C96007ED3A018F2ACA_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___0_awaiter, U3CListenU3Ed__5_t1A5103CF2B74AC0FE9019A69C9F3A37AC77A0891* ___1_stateMachine, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::First<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_First_TisRuntimeObject_mC6FA107934316BE28EA02DDB9EADA7AE8DD1916B_gshared (RuntimeObject* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mDFD48034EFC4DF74EEB44B18C74DD7BAF391814E_gshared (Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// TSubsystemDescriptor UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<System.Object,System.Object,System.Object>::get_descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SubsystemLifecycleManager_3_get_descriptor_m55ACAFBB8D8273993E410BEFD978F09ABCF7CDA7_gshared (SubsystemLifecycleManager_3_t499D76783B0F91C52B19F7183F077FAD1985AD55* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.Matrix4x4>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m02B13D9F8C2777CA6CCA386F24619C7A4CC97515_gshared_inline (Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<UnityEngine.Matrix4x4>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Nullable_1_GetValueOrDefault_m8FE543F7461F1646151BD30E8B67831C4D527343_gshared_inline (Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA* __this, const RuntimeMethod* method) ;

// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetFloat(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_m3ECFD92072347A8620254F014865984FA68211A8 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___0_nameID, float ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetMatrix(System.Int32,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetMatrix_m668579C6402F88BFEF769D39E484BAD4CE6B0067 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___0_nameID, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_value, const RuntimeMethod* method) ;
// UnityEngine.Texture2D UnityEngine.XR.ARFoundation.AROcclusionManager::get_environmentDepthTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* AROcclusionManager_get_environmentDepthTexture_m8D961A8DB1023D5B4340A2020C51D75A21C5D454 (AROcclusionManager_t9EDE9F76050AF892E2AC6704D0F76EDAC370609D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Blit_m8DFE1C855FA028398E5072592582721D5DA6253F (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_source, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___1_dest, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___2_mat, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA (String_t* ___0_name, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, float ___0_xAngle, float ___1_yAngle, float ___2_zAngle, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::set_targetFrameRate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_set_targetFrameRate_mB90EEA60DAE55CD71C38D4B7DFDBE2B34EA6B46F (int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void VideoCreator.H264Streamer::Start(System.String,System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void H264Streamer_Start_m44C8835DE554915983402564CDCC1551320FD92E (String_t* ___0_url, int64_t ___1_width, int64_t ___2_height, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void VideoCreator.H264Streamer::Enqueue(UnityEngine.Texture,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void H264Streamer_Enqueue_m56AD9225151993CF16018B74B8771E0FA37F2B93 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_texture, int64_t ___1_microSec, const RuntimeMethod* method) ;
// System.Void VideoCreator.H264Streamer::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void H264Streamer_Close_mC73324144D6FB4D4D818EF91E1920857B691F038 (const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.AudioSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Boolean VideoCreator.MediaCreator::IsRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MediaCreator_IsRecording_mC17CE0706006D1D86CB190C0D16F18B82ABCA4E4 (const RuntimeMethod* method) ;
// System.Void VideoCreator.MediaCreator::WriteVideo(UnityEngine.Texture,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaCreator_WriteVideo_m45A87F553A4997213C3335858CFEA8D94B45DA29 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_texture, int64_t ___1_microSec, const RuntimeMethod* method) ;
// System.Void RecordingController::FinishRec()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordingController_FinishRec_m92CAF3B55BC5CE7B0D5E1EBE364168D33837795B (RecordingController_t98BBC80C535D6BCFDF598B1F70807E72845B5B4B* __this, const RuntimeMethod* method) ;
// System.Void VideoCreator.MediaSaver::SaveImage(UnityEngine.Texture,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaSaver_SaveImage_m74F2C109B13794850FA9B92944C7377DD763E4EE (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_texture, String_t* ___1_type, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_temporaryCachePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_temporaryCachePath_mE4483A939988E69570C19F8B31AB9FB17B0FD97D (const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
// System.Guid System.Guid::NewGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD (const RuntimeMethod* method) ;
// System.String System.Guid::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C (Guid_t* __this, const RuntimeMethod* method) ;
// System.Void VideoCreator.MediaCreator::InitAsMovWithNoAudio(System.String,System.String,System.Int64,System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaCreator_InitAsMovWithNoAudio_mB1F8DC8FB83AAE5E311C571DE4806FA4F6052B43 (String_t* ___0_url, String_t* ___1_codec, int64_t ___2_width, int64_t ___3_height, String_t* ___4_contentIdentifier, const RuntimeMethod* method) ;
// System.Void VideoCreator.MediaCreator::Start(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaCreator_Start_m1EC0961030105976024D6AB29986012EACC84E00 (int64_t ___0_microSec, const RuntimeMethod* method) ;
// UnityEngine.AudioClip UnityEngine.Microphone::Start(System.String,System.Boolean,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* Microphone_Start_mDA38C5376D122F27D9DEFD2AE811BAE460F2242E (String_t* ___0_deviceName, bool ___1_loop, int32_t ___2_lengthSec, int32_t ___3_frequency, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_loop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_loop_m834A590939D8456008C0F897FD80B0ECFFB7FE56 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Microphone::GetPosition(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Microphone_GetPosition_m13F4C8EBE8536893D9AD8388B0E5B46D62E6A459 (String_t* ___0_deviceName, const RuntimeMethod* method) ;
// System.Void VideoCreator.MediaCreator::InitAsMovWithAudio(System.String,System.String,System.Int64,System.Int64,System.Int64,System.Single,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaCreator_InitAsMovWithAudio_mFCCB3B0D8F08E625A910B360FECC13578B8D66CD (String_t* ___0_url, String_t* ___1_codec, int64_t ___2_width, int64_t ___3_height, int64_t ___4_channel, float ___5_samplingRate, String_t* ___6_contentIdentifier, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void VideoCreator.MediaCreator::InitAsWav(System.String,System.Int64,System.Single,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaCreator_InitAsWav_m472956D41C3C2092C830940247A6689365F7ABF4 (String_t* ___0_url, int64_t ___1_channel, float ___2_samplingRate, int64_t ___3_bitDepth, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Byte[]>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mB3AA0B58E50AA1F32FD3B49CFF3441AEECF837FA (Action_1_t300D9A559311CF7D2AE5D29B63E8C4DE0D49BCD8* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t300D9A559311CF7D2AE5D29B63E8C4DE0D49BCD8*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void VideoCreator.MediaCreator::SetOnSegmentDataAction(System.Action`1<System.Byte[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaCreator_SetOnSegmentDataAction_m81F897D07A7C8F14C58A4373B4CEE5EA70D812C7 (Action_1_t300D9A559311CF7D2AE5D29B63E8C4DE0D49BCD8* ___0_action, const RuntimeMethod* method) ;
// System.Void VideoCreator.MediaCreator::InitAsHlsWithNoAudio(System.String,System.String,System.Int64,System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaCreator_InitAsHlsWithNoAudio_m86CEF407F110E4A3428E2944E28BEDECD43B0EA5 (String_t* ___0_url, String_t* ___1_codec, int64_t ___2_width, int64_t ___3_height, int64_t ___4_segmentDurationMicroSec, const RuntimeMethod* method) ;
// System.Void VideoCreator.MediaCreator::FinishSync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaCreator_FinishSync_m18727CE9C575F42B169A046071CF8957C9310B14 (const RuntimeMethod* method) ;
// System.Void VideoCreator.MediaSaver::SaveVideo(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaSaver_SaveVideo_mBE8311DA6821EBE6F930A5994F3587E6C99665A7 (String_t* ___0_url, const RuntimeMethod* method) ;
// System.Void VideoCreator.MediaSaver::SaveLivePhotos(UnityEngine.Texture,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaSaver_SaveLivePhotos_mB7FE75D507E486B3E8CC5E6BB17075A7A77C703B (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_texture, String_t* ___1_contentIdentifier, String_t* ___2_url, const RuntimeMethod* method) ;
// System.Void RecordingController::writeAudio(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordingController_writeAudio_m7FD1F963F79F93E05A29DBDA0F1405ECF124F9C0 (RecordingController_t98BBC80C535D6BCFDF598B1F70807E72845B5B4B* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_data, int32_t ___1_channels, const RuntimeMethod* method) ;
// System.Void VideoCreator.MediaCreator::WriteAudio(System.Single[],System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaCreator_WriteAudio_mD03BA182124B566301E7014CAA3737173F669721 (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_pcm, int64_t ___1_microSec, const RuntimeMethod* method) ;
// System.Void HlsServer::OnSegmentData(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HlsServer_OnSegmentData_m6222020DADF0B039EAFF7FA2B7F9F75E8AB9693A (HlsServer_tA907BA96BB7103CCBA09278E37D13C6BB9864400* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m2841705C02C450E42A44B5EEE2A6A2C4261FA3AF (String_t* ___0_sceneName, int32_t ___1_mode, const RuntimeMethod* method) ;
// System.Void HlsSample::StopHls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HlsSample_StopHls_m00609AD620711E707EC830480F2D18A770A6C902 (HlsSample_tCDA44A9069ED217B74AF3E14319FC5C196682862* __this, const RuntimeMethod* method) ;
// System.Net.HttpListenerPrefixCollection System.Net.HttpListener::get_Prefixes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpListenerPrefixCollection_tC33808D167E85BCF19C8EA7B02709F95FC604897* HttpListener_get_Prefixes_mBDE4ABFC6DE6A06BBDF436459FFB84276AC7BD21 (HttpListener_t64CDB1E1A5227C151C7A271A8747DBC88EBC8F01* __this, const RuntimeMethod* method) ;
// System.Void System.Net.HttpListenerPrefixCollection::Add(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpListenerPrefixCollection_Add_mB373ADD97AF3D45A7C6DC3E6E9119A4F1AE84713 (HttpListenerPrefixCollection_tC33808D167E85BCF19C8EA7B02709F95FC604897* __this, String_t* ___0_uriPrefix, const RuntimeMethod* method) ;
// System.Void HlsServer::StartServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HlsServer_StartServer_m65FB64491234058234FCD61FCA68D2B13289A7BD (HlsServer_tA907BA96BB7103CCBA09278E37D13C6BB9864400* __this, const RuntimeMethod* method) ;
// System.Void System.Net.HttpListener::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpListener_Start_mFFF59C04274FCAA5F9C86A1908DDBE1FDC48D867 (HttpListener_t64CDB1E1A5227C151C7A271A8747DBC88EBC8F01* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.ThreadStart::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadStart__ctor_m35CE51F76358F20E4A0C8F2963C3AE14E5FF7E71 (ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::.ctor(System.Threading.ThreadStart)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread__ctor_m1FA23A179DF4F5B659689D6FA40DE903086212E2 (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2* ___0_start, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::Start()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Thread_Start_m2230799AA331CA9ACEF49D5500281D0C1A9F72FA (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncVoidMethodBuilder System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D AsyncVoidMethodBuilder_Create_m13D0B23DD350C14035918384E10AF641E6B9EE67 (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<HlsServer/<Listen>d__5>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3CListenU3Ed__5_t1A5103CF2B74AC0FE9019A69C9F3A37AC77A0891_m54C0A9F3519E9E11799ADAB8C6BE7A6EB1DD874B (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CListenU3Ed__5_t1A5103CF2B74AC0FE9019A69C9F3A37AC77A0891* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3CListenU3Ed__5_t1A5103CF2B74AC0FE9019A69C9F3A37AC77A0891*, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CListenU3Ed__5_t1A5103CF2B74AC0FE9019A69C9F3A37AC77A0891_m54C0A9F3519E9E11799ADAB8C6BE7A6EB1DD874B_gshared)(__this, ___0_stateMachine, method);
}
// System.Void System.Threading.Thread::Join()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_Join_mB756581AAF5EB028081256E0517892BC8867779F (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, const RuntimeMethod* method) ;
// System.Void System.Net.HttpListener::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpListener_Stop_mCE62183FF81F99305C3AB6E30B79B3A457DDC350 (HttpListener_t64CDB1E1A5227C151C7A271A8747DBC88EBC8F01* __this, const RuntimeMethod* method) ;
// System.Void HlsServer::StopServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HlsServer_StopServer_m6E147032FFB99E0E02434F83642F217308BB4B72 (HlsServer_tA907BA96BB7103CCBA09278E37D13C6BB9864400* __this, const RuntimeMethod* method) ;
// System.Net.HttpListenerResponse System.Net.HttpListenerContext::get_Response()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HttpListenerResponse_tE2A3F65DF2E0B73D19CE1FBDCFE622CADE7B38B1* HttpListenerContext_get_Response_m64CA8756CB54BE4A08A336ACCAC5EED26EF42867_inline (HttpListenerContext_tCD5824B5A03F644280D1F171203A2A03F7377412* __this, const RuntimeMethod* method) ;
// System.Void System.Net.HttpListenerResponse::set_StatusCode(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpListenerResponse_set_StatusCode_m5A3C3995DC618FBA6347ACA9544BD3C5F54DB627 (HttpListenerResponse_tE2A3F65DF2E0B73D19CE1FBDCFE622CADE7B38B1* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.Net.HttpListenerRequest System.Net.HttpListenerContext::get_Request()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HttpListenerRequest_t30206889F6CB705A9774EAD0C76C905096237FA8* HttpListenerContext_get_Request_m12CFD433DD5D32D9A72388BEBE6256C7BABE1808_inline (HttpListenerContext_tCD5824B5A03F644280D1F171203A2A03F7377412* __this, const RuntimeMethod* method) ;
// System.Uri System.Net.HttpListenerRequest::get_Url()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* HttpListenerRequest_get_Url_mAFF6E2EA7A69C8FC3A86DC63CD0F1CBACB3B9831_inline (HttpListenerRequest_t30206889F6CB705A9774EAD0C76C905096237FA8* __this, const RuntimeMethod* method) ;
// System.String System.Uri::get_LocalPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_LocalPath_m60EE736E6F601238CBC20CE7DBB647C61F16DB0E (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.String HlsServer::get_Html()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HlsServer_get_Html_mC403306F60DAAD4033291A871106C4AF13AE4717 (HlsServer_tA907BA96BB7103CCBA09278E37D13C6BB9864400* __this, const RuntimeMethod* method) ;
// System.String HlsServer::get_M3U8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HlsServer_get_M3U8_mE708EDFC42FDE4666659BABED353648F3772F175 (HlsServer_tA907BA96BB7103CCBA09278E37D13C6BB9864400* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0 (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.ValueTuple`2<System.Int32,System.Byte[]>>::get_Item(System.Int32)
inline ValueTuple_2_t1D84412EF5C4A681CACB9E8C0BC858743D4C63CA List_1_get_Item_mC5A8474F902E701534877BEE5EAF67E94B196D8F (List_1_tF88145309D90E96C94637CEE6C76DF92A4E8AA7F* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_t1D84412EF5C4A681CACB9E8C0BC858743D4C63CA (*) (List_1_tF88145309D90E96C94637CEE6C76DF92A4E8AA7F*, int32_t, const RuntimeMethod*))List_1_get_Item_m7B69A4F68A4613067639767206AA6D69D28E3C2C_gshared)(__this, ___0_index, method);
}
// System.Int32 System.Collections.Generic.List`1<System.ValueTuple`2<System.Int32,System.Byte[]>>::get_Count()
inline int32_t List_1_get_Count_m820E3E3C8FA49AD0B87DECE0A0977FD9C54C1526_inline (List_1_tF88145309D90E96C94637CEE6C76DF92A4E8AA7F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF88145309D90E96C94637CEE6C76DF92A4E8AA7F*, const RuntimeMethod*))List_1_get_Count_mEFFF128BA00882F673D7CC76760B4E941B294A2B_gshared_inline)(__this, method);
}
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
// System.Void System.Net.HttpListenerResponse::set_ContentType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpListenerResponse_set_ContentType_mE9EAD119EC0397DF8D7C95EA7F5F3B734679D1F0 (HttpListenerResponse_tE2A3F65DF2E0B73D19CE1FBDCFE622CADE7B38B1* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Net.HttpListenerResponse::Close(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpListenerResponse_Close_m0F93E1AB7C64F67D9D305C4169BA649602AE8013 (HttpListenerResponse_tE2A3F65DF2E0B73D19CE1FBDCFE622CADE7B38B1* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_responseEntity, bool ___1_willBlock, const RuntimeMethod* method) ;
// System.Void System.ValueTuple`2<System.Int32,System.Byte[]>::.ctor(T1,T2)
inline void ValueTuple_2__ctor_mF4E1D57C8E8BCBBEDFFBC7CC789FAB7867E56D09 (ValueTuple_2_t1D84412EF5C4A681CACB9E8C0BC858743D4C63CA* __this, int32_t ___0_item1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_item2, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_2_t1D84412EF5C4A681CACB9E8C0BC858743D4C63CA*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))ValueTuple_2__ctor_m6B6C0A6A3D8BF4D7D400B729024BB5A32A3314ED_gshared)(__this, ___0_item1, ___1_item2, method);
}
// System.Void System.Collections.Generic.List`1<System.ValueTuple`2<System.Int32,System.Byte[]>>::Add(T)
inline void List_1_Add_m9A99F7A6ECAD7201B314A3716B62373BEA8AB6F8_inline (List_1_tF88145309D90E96C94637CEE6C76DF92A4E8AA7F* __this, ValueTuple_2_t1D84412EF5C4A681CACB9E8C0BC858743D4C63CA ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF88145309D90E96C94637CEE6C76DF92A4E8AA7F*, ValueTuple_2_t1D84412EF5C4A681CACB9E8C0BC858743D4C63CA, const RuntimeMethod*))List_1_Add_m0C956EDFF88FAC9E60885D2AB07769743E59B606_gshared_inline)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.List`1<System.ValueTuple`2<System.Int32,System.Byte[]>>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m31C56A5163FA7F8AAFB67B4866F20C60FE7DED18 (List_1_tF88145309D90E96C94637CEE6C76DF92A4E8AA7F* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF88145309D90E96C94637CEE6C76DF92A4E8AA7F*, int32_t, const RuntimeMethod*))List_1_RemoveAt_mE3942E53A6872B3D4D819A9998D3F5947CC40975_gshared)(__this, ___0_index, method);
}
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Void System.Net.HttpListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpListener__ctor_m16577B4C2A3E2D5CA19F2CB38EEEC6DE3DD70463 (HttpListener_t64CDB1E1A5227C151C7A271A8747DBC88EBC8F01* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.ValueTuple`2<System.Int32,System.Byte[]>>::.ctor()
inline void List_1__ctor_m4255D203B6AE5F17C8AE7DDCBF09A44DA12F2034 (List_1_tF88145309D90E96C94637CEE6C76DF92A4E8AA7F* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF88145309D90E96C94637CEE6C76DF92A4E8AA7F*, const RuntimeMethod*))List_1__ctor_m339B3DCFFA0529DC71BA1ADB65D6FDEA1048E5CA_gshared)(__this, method);
}
// System.Threading.Tasks.Task`1<System.Net.HttpListenerContext> System.Net.HttpListener::GetContextAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t7B1A2F201CBB48A5FE2574C4F589450D6731403D* HttpListener_GetContextAsync_m839A198FEE991B0D94967BD12F51B88D70BD7AD0 (HttpListener_t64CDB1E1A5227C151C7A271A8747DBC88EBC8F01* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Net.HttpListenerContext>::GetAwaiter()
inline TaskAwaiter_1_t2E68D3DCE6F297E6D87BB498EABE5984B167C244 Task_1_GetAwaiter_m06273776173B037954DB1617C708AAB1A91F95D7 (Task_1_t7B1A2F201CBB48A5FE2574C4F589450D6731403D* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t2E68D3DCE6F297E6D87BB498EABE5984B167C244 (*) (Task_1_t7B1A2F201CBB48A5FE2574C4F589450D6731403D*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.HttpListenerContext>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mCA8E9C93BE8FE9E005F2DCE8BB2318C17A828753 (TaskAwaiter_1_t2E68D3DCE6F297E6D87BB498EABE5984B167C244* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t2E68D3DCE6F297E6D87BB498EABE5984B167C244*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.HttpListenerContext>,HlsServer/<Listen>d__5>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2E68D3DCE6F297E6D87BB498EABE5984B167C244_TisU3CListenU3Ed__5_t1A5103CF2B74AC0FE9019A69C9F3A37AC77A0891_m3EC557B6B0665752AC6E8402ADA3E52263484FAF (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_t2E68D3DCE6F297E6D87BB498EABE5984B167C244* ___0_awaiter, U3CListenU3Ed__5_t1A5103CF2B74AC0FE9019A69C9F3A37AC77A0891* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_1_t2E68D3DCE6F297E6D87BB498EABE5984B167C244*, U3CListenU3Ed__5_t1A5103CF2B74AC0FE9019A69C9F3A37AC77A0891*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CListenU3Ed__5_t1A5103CF2B74AC0FE9019A69C9F3A37AC77A0891_mF4692818F10A23439C97F0C96007ED3A018F2ACA_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.HttpListenerContext>::GetResult()
inline HttpListenerContext_tCD5824B5A03F644280D1F171203A2A03F7377412* TaskAwaiter_1_GetResult_m4E623469DBC622CCB30DE7E88C667BC22C283966 (TaskAwaiter_1_t2E68D3DCE6F297E6D87BB498EABE5984B167C244* __this, const RuntimeMethod* method)
{
	return ((  HttpListenerContext_tCD5824B5A03F644280D1F171203A2A03F7377412* (*) (TaskAwaiter_1_t2E68D3DCE6F297E6D87BB498EABE5984B167C244*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Void HlsServer::ProcessRequest(System.Net.HttpListenerContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HlsServer_ProcessRequest_mEAB88BECC368D9D6AF78C31DF84558391576BE42 (HlsServer_tA907BA96BB7103CCBA09278E37D13C6BB9864400* __this, HttpListenerContext_tCD5824B5A03F644280D1F171203A2A03F7377412* ___0_context, const RuntimeMethod* method) ;
// System.Boolean System.Net.HttpListener::get_IsListening()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool HttpListener_get_IsListening_mC1F9EA4B9283855225AA2895C03DAA3E383D505C_inline (HttpListener_t64CDB1E1A5227C151C7A271A8747DBC88EBC8F01* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, const RuntimeMethod* method) ;
// System.Void HlsServer/<Listen>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CListenU3Ed__5_MoveNext_m4B72445A6A5FF53E881D1683A341E0B82624FF45 (U3CListenU3Ed__5_t1A5103CF2B74AC0FE9019A69C9F3A37AC77A0891* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void HlsServer/<Listen>d__5::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CListenU3Ed__5_SetStateMachine_m9A1DA7530058D1E2AB4D2C95B8288983CE3D2C58 (U3CListenU3Ed__5_t1A5103CF2B74AC0FE9019A69C9F3A37AC77A0891* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void ImageSample/<Start>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__1__ctor_m29158B63A0DEB08D82E6B0CC5A46B8E82FED1E3A (U3CStartU3Ed__1_tA0D84298332D91D319528B7493F7E68643340186* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void ImageSample/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mAFF73E14A118DC694A529356A16FC391E969D0DC (U3CU3Ec_t09E14DD342CDB1E94E7BE5E5EF4040745D94AFCC* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::LoadSceneAsync(System.String,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* SceneManager_LoadSceneAsync_m29D55D2C6CB7A019B26DA3F44C0881FF6AC491EC (String_t* ___0_sceneName, int32_t ___1_mode, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AsyncOperation::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperation_get_isDone_m68A0682777E2132FC033182E9F50303566AA354D (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* __this, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetSceneByName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetSceneByName_m2A70CB2D1C586ED6747E82693785CA86F99FA9B9 (String_t* ___0_name, const RuntimeMethod* method) ;
// UnityEngine.GameObject[] UnityEngine.SceneManagement.Scene::GetRootGameObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* Scene_GetRootGameObjects_mFDE0BF9EA926F30EC9AE71F33E0AE4D5D4EC5C5B (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<UnityEngine.GameObject,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m9EDB1EDE49108C1136C6B0DD3DD5D2F843F5936E (Func_2_tD5855DA3DC1C614C29762075E12B0B72B8B1F51C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tD5855DA3DC1C614C29762075E12B0B72B8B1F51C*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___0_object, ___1_method, method);
}
// TSource System.Linq.Enumerable::First<UnityEngine.GameObject>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Enumerable_First_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m38F24F6829515308854F931277CF249C5CBC0E7E (RuntimeObject* ___0_source, Func_2_tD5855DA3DC1C614C29762075E12B0B72B8B1F51C* ___1_predicate, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (RuntimeObject*, Func_2_tD5855DA3DC1C614C29762075E12B0B72B8B1F51C*, const RuntimeMethod*))Enumerable_First_TisRuntimeObject_mC6FA107934316BE28EA02DDB9EADA7AE8DD1916B_gshared)(___0_source, ___1_predicate, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.RenderTexture UnityEngine.Camera::get_targetTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* Camera_get_targetTexture_mC856D7FF8351476068D04E245E4F08F5C56A55BD (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void LivePhotsSample::StopRec()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LivePhotsSample_StopRec_mB90E2F8B156BE9A942B31EC5DE843BAE6F928136 (LivePhotsSample_tB672C2B983EAFBD7CEE8E821052C4B118A4A3F29* __this, const RuntimeMethod* method) ;
// System.Void MovSample::WriteAudio(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovSample_WriteAudio_mCADCEF5C565D8449EF27AFD3EB3C6B60A8AA98A8 (MovSample_t3E7C6F955219CECFCAF6529664C0FA9954109EDD* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_data, int32_t ___1_channels, const RuntimeMethod* method) ;
// System.Void MovSample::StopRec()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovSample_StopRec_m9D6B5D07FC0D243433A4EF5C787E35779B65D9C5 (MovSample_t3E7C6F955219CECFCAF6529664C0FA9954109EDD* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Microphone::End(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Microphone_End_mB368877FCC9EA1522914006671E637848A0F7CC6 (String_t* ___0_deviceName, const RuntimeMethod* method) ;
// System.Void VideoCreator.MediaCreator::OnSegmentDataCallback(System.IntPtr,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaCreator_OnSegmentDataCallback_m72988744F68CF206906341BA454F67217D13D708 (intptr_t ___0_data, int64_t ___1_len, const RuntimeMethod* method) ;
// System.Void VideoCreator.MediaCreator::UnityMediaCreator_initAsMovWithNoAudio(System.String,System.String,System.Int64,System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaCreator_UnityMediaCreator_initAsMovWithNoAudio_m73CCCF4E877565A82B6E9159D24B04A994DE0205 (String_t* ___0_url, String_t* ___1_codec, int64_t ___2_width, int64_t ___3_height, String_t* ___4_contentIdentifier, const RuntimeMethod* method) ;
// System.Void VideoCreator.MediaCreator::UnityMediaCreator_initAsMovWithAudio(System.String,System.String,System.Int64,System.Int64,System.Int64,System.Single,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaCreator_UnityMediaCreator_initAsMovWithAudio_m7EADDE0CBCB27AB7014E2659BC768CE55894AEE5 (String_t* ___0_url, String_t* ___1_codec, int64_t ___2_width, int64_t ___3_height, int64_t ___4_channel, float ___5_samplingRate, String_t* ___6_contentIdentifier, const RuntimeMethod* method) ;
// System.Void VideoCreator.MediaCreator::UnityMediaCreator_initAsWav(System.String,System.Int64,System.Single,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaCreator_UnityMediaCreator_initAsWav_mFFC5AC7740398874C458F5C377DB4B97829E9199 (String_t* ___0_url, int64_t ___1_channel, float ___2_samplingRate, int64_t ___3_bitDepth, const RuntimeMethod* method) ;
// System.Void VideoCreator.MediaCreator::UnityMediaCreator_initAsHlsWithNoAudio(System.String,System.String,System.Int64,System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaCreator_UnityMediaCreator_initAsHlsWithNoAudio_m4520B537811EBF1B036595355A86FF3F151DE570 (String_t* ___0_url, String_t* ___1_codec, int64_t ___2_width, int64_t ___3_height, int64_t ___4_segmentDurationMicroSec, const RuntimeMethod* method) ;
// System.Void VideoCreator.MediaCreator::UnityMediaCreator_start(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaCreator_UnityMediaCreator_start_m8E82572899E696B67EC528C89DD9D478E0094FC3 (int64_t ___0_microSec, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_mF7402FFDB520EA1B8D1C32B368DBEE4B13F1BE77 (intptr_t ___0_source, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_destination, int32_t ___2_startIndex, int32_t ___3_length, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Byte[]>::Invoke(T)
inline void Action_1_Invoke_m7B78C4449D43643629C94054D9354AA39696C0F8_inline (Action_1_t300D9A559311CF7D2AE5D29B63E8C4DE0D49BCD8* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t300D9A559311CF7D2AE5D29B63E8C4DE0D49BCD8*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___0_obj, method);
}
// System.Void VideoCreator.MediaCreator/UnityMediaCreator_setOnSegmentData_delegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMediaCreator_setOnSegmentData_delegate__ctor_m854824DA119D7BF5121A9BCCE24BCB8D873FE768 (UnityMediaCreator_setOnSegmentData_delegate_tCE3B71DFB24ADDB8E286DEF8B4AE0E5B847BA2B7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void VideoCreator.MediaCreator::UnityMediaCreator_setOnSegmentData(VideoCreator.MediaCreator/UnityMediaCreator_setOnSegmentData_delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaCreator_UnityMediaCreator_setOnSegmentData_mEAA0F389E5C5947D58D78BC28B68C560D96CE139 (UnityMediaCreator_setOnSegmentData_delegate_tCE3B71DFB24ADDB8E286DEF8B4AE0E5B847BA2B7* ___0_handler, const RuntimeMethod* method) ;
// System.Void VideoCreator.MediaCreator::UnityMediaCreator_finishSync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaCreator_UnityMediaCreator_finishSync_m29571C3550CC5BCD5E44AE569A976D3C60AB5936 (const RuntimeMethod* method) ;
// System.Boolean VideoCreator.MediaCreator::UnityMediaCreator_isRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MediaCreator_UnityMediaCreator_isRecording_mD3D9AC1580E915FB6B7F92B9024396BDA5B62BCF (const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.Texture::GetNativeTexturePtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Texture_GetNativeTexturePtr_mD3019CC9461338665885D431B86C03D3063867EE (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, const RuntimeMethod* method) ;
// System.Void VideoCreator.MediaCreator::UnityMediaCreator_writeVideo(System.IntPtr,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaCreator_UnityMediaCreator_writeVideo_m782E476EB379F5E24DB861EF1539B0A4F29E2840 (intptr_t ___0_texturePtr, int64_t ___1_microSec, const RuntimeMethod* method) ;
// System.Void VideoCreator.MediaCreator::UnityMediaCreator_writeAudio(System.Single[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaCreator_UnityMediaCreator_writeAudio_m7B2744A566FCF90FF5BA27E4C4E458F080A44F56 (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_pcm, int64_t ___1_frame, int64_t ___2_microSec, const RuntimeMethod* method) ;
// System.Void VideoCreator.MediaSaver::UnityMediaSaver_saveVideo(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaSaver_UnityMediaSaver_saveVideo_m7C4413DDE5651AE5BA21E2CE69653E822835660C (String_t* ___0_url, const RuntimeMethod* method) ;
// System.Void VideoCreator.MediaSaver::UnityMediaSaver_saveLivePhotos(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaSaver_UnityMediaSaver_saveLivePhotos_m3A8F583D574578A2BD737D7994B6DAA42616B79D (intptr_t ___0_texturePtr, String_t* ___1_contentIdentifier, String_t* ___2_url, const RuntimeMethod* method) ;
// System.Void VideoCreator.MediaSaver::UnityMediaSaver_saveImage(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaSaver_UnityMediaSaver_saveImage_mE9C02BF47E4E118D5F62DE1BA606BDD3885C1162 (intptr_t ___0_texturePtr, String_t* ___1_type, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mDFD48034EFC4DF74EEB44B18C74DD7BAF391814E (Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mDFD48034EFC4DF74EEB44B18C74DD7BAF391814E_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.XR.ARFoundation.ARCameraManager::add_frameReceived(System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCameraManager_add_frameReceived_mB30CD73DB7A25A6E7BC486BA289DBB99CBA3B7A1 (ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* __this, Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.ScreenOrientation UnityEngine.Screen::get_orientation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_orientation_mA6B22A441187D50831B2B18CA48A8F64BD1BD89E (const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARFoundation.Samples.DepthManager::UpdateRawImage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthManager_UpdateRawImage_m2CE512103AB9EF145227965EFB6501D54FC4396C (DepthManager_t844D33D06E2618F752DF8065710556E6051B435C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARFoundation.ARCameraManager::remove_frameReceived(System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCameraManager_remove_frameReceived_m8D9C301201B5079323169510656821F0286AA67D (ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* __this, Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735* ___0_value, const RuntimeMethod* method) ;
// TSubsystemDescriptor UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XROcclusionSubsystem,UnityEngine.XR.ARSubsystems.XROcclusionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XROcclusionSubsystem/Provider>::get_descriptor()
inline XROcclusionSubsystemDescriptor_t25944D13CC0A207D206577F9A91D445526B4930F* SubsystemLifecycleManager_3_get_descriptor_mFCC2B929205B70121157536075F522DF0476AAB9 (SubsystemLifecycleManager_3_t1892B8E9DF20D5A95CB7E5B2AAA38CF6DD9711CF* __this, const RuntimeMethod* method)
{
	return ((  XROcclusionSubsystemDescriptor_t25944D13CC0A207D206577F9A91D445526B4930F* (*) (SubsystemLifecycleManager_3_t1892B8E9DF20D5A95CB7E5B2AAA38CF6DD9711CF*, const RuntimeMethod*))SubsystemLifecycleManager_3_get_descriptor_m55ACAFBB8D8273993E410BEFD978F09ABCF7CDA7_gshared)(__this, method);
}
// UnityEngine.Texture2D UnityEngine.XR.ARFoundation.AROcclusionManager::get_humanStencilTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* AROcclusionManager_get_humanStencilTexture_m4F81CA6ABBFE6326872B0545E826766F58ADC86F (AROcclusionManager_t9EDE9F76050AF892E2AC6704D0F76EDAC370609D* __this, const RuntimeMethod* method) ;
// UnityEngine.Texture2D UnityEngine.XR.ARFoundation.AROcclusionManager::get_humanDepthTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* AROcclusionManager_get_humanDepthTexture_mF9B84E503E3B394AAE1544B07BD3BEB1FE3EFEDB (AROcclusionManager_t9EDE9F76050AF892E2AC6704D0F76EDAC370609D* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.Supported UnityEngine.XR.ARSubsystems.XROcclusionSubsystemDescriptor::get_humanSegmentationDepthImageSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XROcclusionSubsystemDescriptor_get_humanSegmentationDepthImageSupported_m4B58731FE66946A339E57D07B4970286F3FAC61C (XROcclusionSubsystemDescriptor_t25944D13CC0A207D206577F9A91D445526B4930F* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.Supported UnityEngine.XR.ARSubsystems.XROcclusionSubsystemDescriptor::get_humanSegmentationStencilImageSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XROcclusionSubsystemDescriptor_get_humanSegmentationStencilImageSupported_mFD38298D6EE716F04F941DDC4970DE420C19BEC8 (XROcclusionSubsystemDescriptor_t25944D13CC0A207D206577F9A91D445526B4930F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARFoundation.Samples.DepthManager::LogText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthManager_LogText_mFB6D2CC5F1C734002DD7721018519273370C1E6C (DepthManager_t844D33D06E2618F752DF8065710556E6051B435C* __this, String_t* ___0_text, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.RawImage::set_texture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RawImage_set_texture_mC016318C95CC17A826D57DD219DBCB6DFD295C02 (RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.Supported UnityEngine.XR.ARSubsystems.XROcclusionSubsystemDescriptor::get_environmentDepthImageSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XROcclusionSubsystemDescriptor_get_environmentDepthImageSupported_mCD6A87F2AE78B41341FABE82E85BB0331CF8433A (XROcclusionSubsystemDescriptor_t25944D13CC0A207D206577F9A91D445526B4930F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARFoundation.AROcclusionManager::set_environmentDepthTemporalSmoothingRequested(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AROcclusionManager_set_environmentDepthTemporalSmoothingRequested_m3E5C48FEB03F83D916D060B8F6940006EC2FB621 (AROcclusionManager_t9EDE9F76050AF892E2AC6704D0F76EDAC370609D* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6 (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARFoundation.Samples.DepthManager::BuildTextureInfo(System.Text.StringBuilder,System.String,UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthManager_BuildTextureInfo_mFB4498349184DB8A99896FE1728CA254864CC2BE (DepthManager_t844D33D06E2618F752DF8065710556E6051B435C* __this, StringBuilder_t* ___0_stringBuilder, String_t* ___1_textureName, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___2_texture, const RuntimeMethod* method) ;
// UnityEngine.Texture UnityEngine.UI.RawImage::get_texture()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* RawImage_get_texture_m84CCFDF78F6886F73EBE5A7C78D6E9C3CA903813_inline (RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARFoundation.Samples.DepthManager::print_depth(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthManager_print_depth_m9042901E0ADB0A36962AD0DED4BD1F72BF71E5C1 (DepthManager_t844D33D06E2618F752DF8065710556E6051B435C* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_texture, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Nullable`1<UnityEngine.Matrix4x4> UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs::get_displayMatrix()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA ARCameraFrameEventArgs_get_displayMatrix_m3354FFAEF054F0A8F4D19BFD506468A06F3AD65F_inline (ARCameraFrameEventArgs_t4060608C37C2B7248AFC908876309CC36D53E0EC* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.Matrix4x4>::get_HasValue()
inline bool Nullable_1_get_HasValue_m02B13D9F8C2777CA6CCA386F24619C7A4CC97515_inline (Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA*, const RuntimeMethod*))Nullable_1_get_HasValue_m02B13D9F8C2777CA6CCA386F24619C7A4CC97515_gshared_inline)(__this, method);
}
// T System.Nullable`1<UnityEngine.Matrix4x4>::GetValueOrDefault()
inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Nullable_1_GetValueOrDefault_m8FE543F7461F1646151BD30E8B67831C4D527343_inline (Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA* __this, const RuntimeMethod* method)
{
	return ((  Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 (*) (Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m8FE543F7461F1646151BD30E8B67831C4D527343_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// System.Single UnityEngine.Matrix4x4::get_Item(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Matrix4x4_get_Item_mE4D45E661CAD3C54A02156B25F5D10585F250227_inline (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, int32_t ___0_row, int32_t ___1_column, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Matrix4x4::set_Item(System.Int32,System.Int32,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Matrix4x4_set_Item_mE84FC43629907DD1872E3100BCFF4A8EB671B603_inline (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, int32_t ___0_row, int32_t ___1_column, float ___2_value, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::AppendLine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88 (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.TextureFormat UnityEngine.Texture2D::get_format()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Texture2D_get_format_mE39DD922F83CA1097383309278BB6F20636A7D9D (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Texture::get_mipmapCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Texture_get_mipmapCount_m9E68435BC8E30B9821525BFC8121C34A53774023 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, const RuntimeMethod* method) ;
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat,UnityEngine.RenderTextureReadWrite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* RenderTexture_GetTemporary_mA6619EA324AAE80B6892107C6968092F6F1B4C45 (int32_t ___0_width, int32_t ___1_height, int32_t ___2_depthBuffer, int32_t ___3_format, int32_t ___4_readWrite, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Blit_m8D99E16B74C7D3C8F79F4F142C59DB6B38114504 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_source, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___1_dest, const RuntimeMethod* method) ;
// UnityEngine.RenderTexture UnityEngine.RenderTexture::get_active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* RenderTexture_get_active_mA4434B3E79DEF2C01CAE0A53061598B16443C9E7 (const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::set_active(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_active_m5EE8E2327EF9B306C1425014CC34C41A8384E7AB (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_m3BA82E87442B7F69E118477069AE11101B9DF796 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___0_width, int32_t ___1_height, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___0_x, float ___1_y, float ___2_width, float ___3_height, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::ReadPixels(UnityEngine.Rect,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_ReadPixels_m6B45DF7C051BF599C72ED09691F21A6C769EEBD9 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_source, int32_t ___1_destX, int32_t ___2_destY, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::ReleaseTemporary(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___0_temp, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Texture2D::GetPixel(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Texture2D_GetPixel_m69A17FE5CC220F438C7421DCB50A9E22AAB4A415 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// UnityEngine.RectTransform UnityEngine.UI.Graphic::get_rectTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_sizeDelta(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.UI.Dropdown::get_value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Dropdown_get_value_m386913162D5E273B762657FE5156DC567602BC3C_inline (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9 (const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
// System.Single UnityEngine.Matrix4x4::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Matrix4x4_get_Item_m771C2EE3A3BFFBAC9F2AD07FFCAAF6146C1BE92A (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Matrix4x4::set_Item(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix4x4_set_Item_m47C4DDBFAE6578D6008AEF433777D4B2FACB62B0 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, int32_t ___0_index, float ___1_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C void DEFAULT_CALL UnityMediaCreator_initAsMovWithNoAudio(char*, char*, int64_t, int64_t, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityMediaCreator_initAsMovWithAudio(char*, char*, int64_t, int64_t, int64_t, float, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityMediaCreator_initAsWav(char*, int64_t, float, int64_t);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityMediaCreator_initAsHlsWithNoAudio(char*, char*, int64_t, int64_t, int64_t);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityMediaCreator_setOnSegmentData(Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityMediaCreator_start(int64_t);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityMediaCreator_finishSync();
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityMediaCreator_isRecording();
IL2CPP_EXTERN_C void DEFAULT_CALL UnityMediaCreator_writeVideo(intptr_t, int64_t);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityMediaCreator_writeAudio(float*, int64_t, int64_t);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityMediaSaver_saveVideo(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityMediaSaver_saveLivePhotos(intptr_t, char*, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL UnityMediaSaver_saveImage(intptr_t, char*);
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
// System.Void ButtonManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonManager_Start_m1031E938A2FB8D85F993AA7DF29D06DAF0CDF930 (ButtonManager_tB4A98DF10074AA9CF8B331C8AB41A791E21A6AD8* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ButtonManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonManager_Update_m8A6A02F642A23DDDD0D1C1B1EB563E144AE12590 (ButtonManager_tB4A98DF10074AA9CF8B331C8AB41A791E21A6AD8* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ButtonManager::change_screen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonManager_change_screen_m8088A97E882E0B040F2AEE2C1C613D55C465965F (ButtonManager_tB4A98DF10074AA9CF8B331C8AB41A791E21A6AD8* __this, const RuntimeMethod* method) 
{
	{
		// if(image.activeSelf == true)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___image_4;
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_0, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// image.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___image_4;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		return;
	}

IL_001a:
	{
		// image.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___image_4;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void ButtonManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonManager__ctor_m7DBD91D2AF27494F6AC7DC74DE679919AB1DD71F (ButtonManager_tB4A98DF10074AA9CF8B331C8AB41A791E21A6AD8* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void depth_viewer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void depth_viewer_Start_m09A4385A9B1FCE5048C4ED5AB5184A0BE26EA319 (depth_viewer_tFF0E9DE91C8A38978DCC68D56BE449CB0D54A79A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&depth_viewer_tFF0E9DE91C8A38978DCC68D56BE449CB0D54A79A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// depth_material.SetFloat(k_MaxDistanceId, MaxDistance);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___depth_material_10;
		il2cpp_codegen_runtime_class_init_inline(depth_viewer_tFF0E9DE91C8A38978DCC68D56BE449CB0D54A79A_il2cpp_TypeInfo_var);
		int32_t L_1 = ((depth_viewer_tFF0E9DE91C8A38978DCC68D56BE449CB0D54A79A_StaticFields*)il2cpp_codegen_static_fields_for(depth_viewer_tFF0E9DE91C8A38978DCC68D56BE449CB0D54A79A_il2cpp_TypeInfo_var))->___k_MaxDistanceId_6;
		float L_2 = __this->___MaxDistance_12;
		NullCheck(L_0);
		Material_SetFloat_m3ECFD92072347A8620254F014865984FA68211A8(L_0, L_1, L_2, NULL);
		// depth_material.SetMatrix(k_DisplayRotationPerFrameId, m_DisplayRotationMatrix);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = __this->___depth_material_10;
		int32_t L_4 = ((depth_viewer_tFF0E9DE91C8A38978DCC68D56BE449CB0D54A79A_StaticFields*)il2cpp_codegen_static_fields_for(depth_viewer_tFF0E9DE91C8A38978DCC68D56BE449CB0D54A79A_il2cpp_TypeInfo_var))->___k_DisplayRotationPerFrameId_7;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_5 = __this->___m_DisplayRotationMatrix_8;
		NullCheck(L_3);
		Material_SetMatrix_m668579C6402F88BFEF769D39E484BAD4CE6B0067(L_3, L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void depth_viewer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void depth_viewer_Update_mDC9E3D841050647C8BC34FDA9C300BFA18A41A55 (depth_viewer_tFF0E9DE91C8A38978DCC68D56BE449CB0D54A79A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Texture2D envDepth = m_OcclusionManager.environmentDepthTexture;
		AROcclusionManager_t9EDE9F76050AF892E2AC6704D0F76EDAC370609D* L_0 = __this->___m_OcclusionManager_9;
		NullCheck(L_0);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_1;
		L_1 = AROcclusionManager_get_environmentDepthTexture_m8D961A8DB1023D5B4340A2020C51D75A21C5D454(L_0, NULL);
		// Graphics.Blit(envDepth, rt, depth_material);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2 = __this->___rt_11;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = __this->___depth_material_10;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8DFE1C855FA028398E5072592582721D5DA6253F(L_1, L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void depth_viewer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void depth_viewer__ctor_m17EEFBEEEFE555D44D6631A17383229E4ED52A95 (depth_viewer_tFF0E9DE91C8A38978DCC68D56BE449CB0D54A79A* __this, const RuntimeMethod* method) 
{
	{
		// Matrix4x4 m_DisplayRotationMatrix = Matrix4x4.identity;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0;
		L_0 = Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline(NULL);
		__this->___m_DisplayRotationMatrix_8 = L_0;
		// public float MaxDistance = 4;
		__this->___MaxDistance_12 = (4.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void depth_viewer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void depth_viewer__cctor_m986F0BC7CEBF016DFF1EF0136F6B310ED2842AC1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2026278668172106C99246EA0DD41FBB2A8221AB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72EFACF900BC379F438ADCAFE83E83F9FB213AAB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&depth_viewer_tFF0E9DE91C8A38978DCC68D56BE449CB0D54A79A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly int k_MaxDistanceId = Shader.PropertyToID(k_MaxDistanceName);
		int32_t L_0;
		L_0 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteral2026278668172106C99246EA0DD41FBB2A8221AB, NULL);
		((depth_viewer_tFF0E9DE91C8A38978DCC68D56BE449CB0D54A79A_StaticFields*)il2cpp_codegen_static_fields_for(depth_viewer_tFF0E9DE91C8A38978DCC68D56BE449CB0D54A79A_il2cpp_TypeInfo_var))->___k_MaxDistanceId_6 = L_0;
		// static readonly int k_DisplayRotationPerFrameId = Shader.PropertyToID(k_DisplayRotationPerFrameName);
		int32_t L_1;
		L_1 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteral72EFACF900BC379F438ADCAFE83E83F9FB213AAB, NULL);
		((depth_viewer_tFF0E9DE91C8A38978DCC68D56BE449CB0D54A79A_StaticFields*)il2cpp_codegen_static_fields_for(depth_viewer_tFF0E9DE91C8A38978DCC68D56BE449CB0D54A79A_il2cpp_TypeInfo_var))->___k_DisplayRotationPerFrameId_7 = L_1;
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
// System.Void RotCube::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotCube_Start_m56F71EE1EA08ACE7F0EC76E59A1127534E9FC8C9 (RotCube_t0548BD60E2B76610C4F251D2F86BEBF09274AC61* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void RotCube::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotCube_Update_mFAC1BFBBE0C63131A1657E81E80F88428691EA82 (RotCube_t0548BD60E2B76610C4F251D2F86BEBF09274AC61* __this, const RuntimeMethod* method) 
{
	{
		// if (this.transform.position.y < 0)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = L_1.___y_3;
		if ((!(((float)L_2) < ((float)(0.0f)))))
		{
			goto IL_0043;
		}
	}
	{
		// vy = 0.0f;
		__this->___vy_4 = (0.0f);
		// this.transform.position = new Vector3(0, 0, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_3, L_4, NULL);
		goto IL_0080;
	}

IL_0043:
	{
		// vy -= 0.006f;
		float L_5 = __this->___vy_4;
		__this->___vy_4 = ((float)il2cpp_codegen_subtract(L_5, (0.00600000005f)));
		// this.transform.position += new Vector3(0, vy, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = L_6;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		float L_9 = __this->___vy_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_10), (0.0f), L_9, (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_8, L_10, NULL);
		NullCheck(L_7);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_7, L_11, NULL);
	}

IL_0080:
	{
		// this.transform.Rotate(2, -3, 4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_12);
		Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2(L_12, (2.0f), (-3.0f), (4.0f), NULL);
		// }
		return;
	}
}
// System.Void RotCube::Jump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotCube_Jump_m3F3BF901779F7694F2BE2E745F74221EF3D7985D (RotCube_t0548BD60E2B76610C4F251D2F86BEBF09274AC61* __this, const RuntimeMethod* method) 
{
	{
		// vy += 0.1f;
		float L_0 = __this->___vy_4;
		__this->___vy_4 = ((float)il2cpp_codegen_add(L_0, (0.100000001f)));
		// this.transform.position += new Vector3(0, vy, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = L_1;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		float L_4 = __this->___vy_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), (0.0f), L_4, (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_3, L_5, NULL);
		NullCheck(L_2);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_2, L_6, NULL);
		// }
		return;
	}
}
// System.Void RotCube::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotCube__ctor_m1B8B8CD4AB98E3A19AE39E5A16EEB7BC6BC3A351 (RotCube_t0548BD60E2B76610C4F251D2F86BEBF09274AC61* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void H264StreamerTest::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void H264StreamerTest_Start_mE4CE9512355C9D093BEA63A95C96B8818C25B43A (H264StreamerTest_t48DACFECF405CD58FD607862E183D3A33AA36BFD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0124DE84305C971D728D47F99E798C6ECA76FEBA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Application.targetFrameRate = 30;
		Application_set_targetFrameRate_mB90EEA60DAE55CD71C38D4B7DFDBE2B34EA6B46F(((int32_t)30), NULL);
		// H264Streamer.Start("ws://localhost:8080", 640, 480);
		H264Streamer_Start_m44C8835DE554915983402564CDCC1551320FD92E(_stringLiteral0124DE84305C971D728D47F99E798C6ECA76FEBA, ((int64_t)((int32_t)640)), ((int64_t)((int32_t)480)), NULL);
		// startTime = Time.time;
		float L_0;
		L_0 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime_5 = L_0;
		// }
		return;
	}
}
// System.Void H264StreamerTest::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void H264StreamerTest_Update_mA554499065EE6EBECEBBBD81027ED8EB59E44270 (H264StreamerTest_t48DACFECF405CD58FD607862E183D3A33AA36BFD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A38F565B8EF45A8FBD7DBC4865031810564E4AE);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	{
		// long time = (long)((Time.time - startTime) * 1_000_000);
		float L_0;
		L_0 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_1 = __this->___startTime_5;
		V_0 = il2cpp_codegen_cast_double_to_int<int64_t>(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_0, L_1)), (1000000.0f))));
		// Debug.Log($"enqueue texture: {time}");
		int64_t L_2 = V_0;
		int64_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5;
		L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral6A38F565B8EF45A8FBD7DBC4865031810564E4AE, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_5, NULL);
		// H264Streamer.Enqueue(texture, time);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_6 = __this->___texture_4;
		int64_t L_7 = V_0;
		H264Streamer_Enqueue_m56AD9225151993CF16018B74B8771E0FA37F2B93(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void H264StreamerTest::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void H264StreamerTest_OnDestroy_mF24373B0A59BFC61E091B63467E6CB5460FFE86A (H264StreamerTest_t48DACFECF405CD58FD607862E183D3A33AA36BFD* __this, const RuntimeMethod* method) 
{
	{
		// H264Streamer.Close();
		H264Streamer_Close_mC73324144D6FB4D4D818EF91E1920857B691F038(NULL);
		// }
		return;
	}
}
// System.Void H264StreamerTest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void H264StreamerTest__ctor_m1F12E77D18E3B35CFD456A3E5FF4096FD2256536 (H264StreamerTest_t48DACFECF405CD58FD607862E183D3A33AA36BFD* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void RecordingController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordingController_Start_m8E895F6F288A1A60127F4C1EB5D54E2205ADE5AA (RecordingController_t98BBC80C535D6BCFDF598B1F70807E72845B5B4B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Application.targetFrameRate = 30;
		Application_set_targetFrameRate_mB90EEA60DAE55CD71C38D4B7DFDBE2B34EA6B46F(((int32_t)30), NULL);
		// var source = gameObject.AddComponent<AudioSource>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1;
		L_1 = GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14(L_0, GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14_RuntimeMethod_var);
		// source.Stop();
		NullCheck(L_1);
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_1, NULL);
		// }
		return;
	}
}
// System.Void RecordingController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordingController_Update_mA9C8E4F2F6CE463BC82BCC82DAEADA58FCA1F6B0 (RecordingController_t98BBC80C535D6BCFDF598B1F70807E72845B5B4B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98769C553CE355D263A8D46CD916587352847B45);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	{
		// if (!recordTexture) return;
		bool L_0 = __this->___recordTexture_8;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!recordTexture) return;
		return;
	}

IL_0009:
	{
		// if (!MediaCreator.IsRecording()) return;
		bool L_1;
		L_1 = MediaCreator_IsRecording_mC17CE0706006D1D86CB190C0D16F18B82ABCA4E4(NULL);
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		// if (!MediaCreator.IsRecording()) return;
		return;
	}

IL_0011:
	{
		// long time = (long)((Time.time - startTime) * 1_000_000) + startTimeOffset;
		float L_2;
		L_2 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_3 = __this->___startTime_15;
		int64_t L_4 = __this->___startTimeOffset_16;
		V_0 = ((int64_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int64_t>(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_2, L_3)), (1000000.0f)))), L_4));
		// Debug.Log($"write texture: {time}");
		int64_t L_5 = V_0;
		int64_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8;
		L_8 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral98769C553CE355D263A8D46CD916587352847B45, L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_8, NULL);
		// MediaCreator.WriteVideo(texture, time);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_9 = __this->___texture_4;
		int64_t L_10 = V_0;
		MediaCreator_WriteVideo_m45A87F553A4997213C3335858CFEA8D94B45DA29(L_9, L_10, NULL);
		// if (livePhotosRecording < 0) return;
		int32_t L_11 = __this->___livePhotosRecording_11;
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0057;
		}
	}
	{
		// if (livePhotosRecording < 0) return;
		return;
	}

IL_0057:
	{
		// livePhotosRecording += 1;
		int32_t L_12 = __this->___livePhotosRecording_11;
		__this->___livePhotosRecording_11 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		// if (livePhotosRecording > 60) FinishRec();
		int32_t L_13 = __this->___livePhotosRecording_11;
		if ((((int32_t)L_13) <= ((int32_t)((int32_t)60))))
		{
			goto IL_0075;
		}
	}
	{
		// if (livePhotosRecording > 60) FinishRec();
		RecordingController_FinishRec_m92CAF3B55BC5CE7B0D5E1EBE364168D33837795B(__this, NULL);
	}

IL_0075:
	{
		// }
		return;
	}
}
// System.Void RecordingController::TakeFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordingController_TakeFrame_mBAB8937CAA11B665E106C13AE775CC8C390D4112 (RecordingController_t98BBC80C535D6BCFDF598B1F70807E72845B5B4B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3833F7AEC492E9B13522CC39BB90E8300610029F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MediaSaver.SaveImage(texture, "png");
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = __this->___texture_4;
		MediaSaver_SaveImage_m74F2C109B13794850FA9B92944C7377DD763E4EE(L_0, _stringLiteral3833F7AEC492E9B13522CC39BB90E8300610029F, NULL);
		// }
		return;
	}
}
// System.Void RecordingController::RecLivePhotos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordingController_RecLivePhotos_m36DE94D7BE2260D4CEE3A66BF734B1ED08B1AAB2 (RecordingController_t98BBC80C535D6BCFDF598B1F70807E72845B5B4B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3AAD5EAE3E5377E06AE46457E724CA5BFEF82A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4795A79F6F24DEF034533DEBDE661F34D2092C65);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DC4C31B245CD41375F335129254627919ABE02C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83FC2FCBE893CCAF9A5E4FEB29B98F1324611780);
		s_Il2CppMethodInitialized = true;
	}
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (isRecording) return;
		bool L_0 = __this->___isRecording_7;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (isRecording) return;
		return;
	}

IL_0009:
	{
		// text.text = "start rec live photo!";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___text_5;
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, _stringLiteral7DC4C31B245CD41375F335129254627919ABE02C);
		// cachePath = "file://" + Application.temporaryCachePath + "/tmp.mov";
		String_t* L_2;
		L_2 = Application_get_temporaryCachePath_mE4483A939988E69570C19F8B31AB9FB17B0FD97D(NULL);
		String_t* L_3;
		L_3 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA, L_2, _stringLiteral4795A79F6F24DEF034533DEBDE661F34D2092C65, NULL);
		__this->___cachePath_13 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cachePath_13), (void*)L_3);
		// Debug.Log($"cachePath: {cachePath}, {texture.width}x{texture.height}");
		String_t* L_4 = __this->___cachePath_13;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_5 = __this->___texture_4;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_5);
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_7);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_9 = __this->___texture_4;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_9);
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_11);
		String_t* L_13;
		L_13 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral83FC2FCBE893CCAF9A5E4FEB29B98F1324611780, L_4, L_8, L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_13, NULL);
		// uuid = System.Guid.NewGuid().ToString();
		Guid_t L_14;
		L_14 = Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD(NULL);
		V_0 = L_14;
		String_t* L_15;
		L_15 = Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C((&V_0), NULL);
		__this->___uuid_12 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___uuid_12), (void*)L_15);
		// MediaCreator.InitAsMovWithNoAudio(cachePath, "h264", texture.width, texture.height, uuid);
		String_t* L_16 = __this->___cachePath_13;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_17 = __this->___texture_4;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_17);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_19 = __this->___texture_4;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_19);
		String_t* L_21 = __this->___uuid_12;
		MediaCreator_InitAsMovWithNoAudio_mB1F8DC8FB83AAE5E311C571DE4806FA4F6052B43(L_16, _stringLiteral0C3AAD5EAE3E5377E06AE46457E724CA5BFEF82A, ((int64_t)L_18), ((int64_t)L_20), L_21, NULL);
		// MediaCreator.Start(startTimeOffset);
		int64_t L_22 = __this->___startTimeOffset_16;
		MediaCreator_Start_m1EC0961030105976024D6AB29986012EACC84E00(L_22, NULL);
		// startTime = Time.time;
		float L_23;
		L_23 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime_15 = L_23;
		// isRecording = true;
		__this->___isRecording_7 = (bool)1;
		// recordTexture = true;
		__this->___recordTexture_8 = (bool)1;
		// recordAudio = false;
		__this->___recordAudio_9 = (bool)0;
		// saveAfterFinish = false;
		__this->___saveAfterFinish_10 = (bool)0;
		// amountFrame = 0;
		__this->___amountFrame_14 = ((int64_t)0);
		// livePhotosRecording = 1;
		__this->___livePhotosRecording_11 = 1;
		// }
		return;
	}
}
// System.Void RecordingController::StartRecMovWithAudio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordingController_StartRecMovWithAudio_mB49C401AF050AAD288254CD4F4D879E289BFAC30 (RecordingController_t98BBC80C535D6BCFDF598B1F70807E72845B5B4B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3AAD5EAE3E5377E06AE46457E724CA5BFEF82A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral195C4B21EB0FC3934D3C3A40524EB6F3CB7962F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4795A79F6F24DEF034533DEBDE661F34D2092C65);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83FC2FCBE893CCAF9A5E4FEB29B98F1324611780);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* V_0 = NULL;
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* V_1 = NULL;
	{
		// if (isRecording) return;
		bool L_0 = __this->___isRecording_7;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (isRecording) return;
		return;
	}

IL_0009:
	{
		// text.text = "start rec mov with audio!";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___text_5;
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, _stringLiteral195C4B21EB0FC3934D3C3A40524EB6F3CB7962F8);
		// var source = gameObject.AddComponent<AudioSource>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3;
		L_3 = GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14(L_2, GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14_RuntimeMethod_var);
		V_0 = L_3;
		// var clip = Microphone.Start(null, true, 1, 48_000);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_4;
		L_4 = Microphone_Start_mDA38C5376D122F27D9DEFD2AE811BAE460F2242E((String_t*)NULL, (bool)1, 1, ((int32_t)48000), NULL);
		V_1 = L_4;
		// source.clip = clip;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_5 = V_0;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_6 = V_1;
		NullCheck(L_5);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_5, L_6, NULL);
		// source.loop = true;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_7 = V_0;
		NullCheck(L_7);
		AudioSource_set_loop_m834A590939D8456008C0F897FD80B0ECFFB7FE56(L_7, (bool)1, NULL);
	}

IL_0041:
	{
		// while (Microphone.GetPosition(null) < 0) { }
		int32_t L_8;
		L_8 = Microphone_GetPosition_m13F4C8EBE8536893D9AD8388B0E5B46D62E6A459((String_t*)NULL, NULL);
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		// cachePath = "file://" + Application.temporaryCachePath + "/tmp.mov";
		String_t* L_9;
		L_9 = Application_get_temporaryCachePath_mE4483A939988E69570C19F8B31AB9FB17B0FD97D(NULL);
		String_t* L_10;
		L_10 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA, L_9, _stringLiteral4795A79F6F24DEF034533DEBDE661F34D2092C65, NULL);
		__this->___cachePath_13 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cachePath_13), (void*)L_10);
		// Debug.Log($"cachePath: {cachePath}, {texture.width}x{texture.height}");
		String_t* L_11 = __this->___cachePath_13;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_12 = __this->___texture_4;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_12);
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_14);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_16 = __this->___texture_4;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_16);
		int32_t L_18 = L_17;
		RuntimeObject* L_19 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_18);
		String_t* L_20;
		L_20 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral83FC2FCBE893CCAF9A5E4FEB29B98F1324611780, L_11, L_15, L_19, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_20, NULL);
		// MediaCreator.InitAsMovWithAudio(cachePath, "h264", texture.width, texture.height, 1, 48_000);
		String_t* L_21 = __this->___cachePath_13;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_22 = __this->___texture_4;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_22);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_24 = __this->___texture_4;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_24);
		MediaCreator_InitAsMovWithAudio_mFCCB3B0D8F08E625A910B360FECC13578B8D66CD(L_21, _stringLiteral0C3AAD5EAE3E5377E06AE46457E724CA5BFEF82A, ((int64_t)L_23), ((int64_t)L_25), ((int64_t)1), (48000.0f), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		// MediaCreator.Start(startTimeOffset);
		int64_t L_26 = __this->___startTimeOffset_16;
		MediaCreator_Start_m1EC0961030105976024D6AB29986012EACC84E00(L_26, NULL);
		// startTime = Time.time;
		float L_27;
		L_27 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime_15 = L_27;
		// uuid = "";
		__this->___uuid_12 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___uuid_12), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// isRecording = true;
		__this->___isRecording_7 = (bool)1;
		// recordTexture = true;
		__this->___recordTexture_8 = (bool)1;
		// recordAudio = true;
		__this->___recordAudio_9 = (bool)1;
		// saveAfterFinish = true;
		__this->___saveAfterFinish_10 = (bool)1;
		// amountFrame = 0;
		__this->___amountFrame_14 = ((int64_t)0);
		// livePhotosRecording = -1;
		__this->___livePhotosRecording_11 = (-1);
		// source.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_28 = V_0;
		NullCheck(L_28);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_28, NULL);
		// }
		return;
	}
}
// System.Void RecordingController::StartRecMovWithNoAudio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordingController_StartRecMovWithNoAudio_mECFEE8724EA03D42DA92D299A59C11C9FD31E0D4 (RecordingController_t98BBC80C535D6BCFDF598B1F70807E72845B5B4B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3AAD5EAE3E5377E06AE46457E724CA5BFEF82A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4795A79F6F24DEF034533DEBDE661F34D2092C65);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83FC2FCBE893CCAF9A5E4FEB29B98F1324611780);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9474B95CD8752E69D7525D4C0C308443A88C0386);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isRecording) return;
		bool L_0 = __this->___isRecording_7;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (isRecording) return;
		return;
	}

IL_0009:
	{
		// text.text = "start rec mov with no audio!";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___text_5;
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, _stringLiteral9474B95CD8752E69D7525D4C0C308443A88C0386);
		// cachePath = "file://" + Application.temporaryCachePath + "/tmp.mov";
		String_t* L_2;
		L_2 = Application_get_temporaryCachePath_mE4483A939988E69570C19F8B31AB9FB17B0FD97D(NULL);
		String_t* L_3;
		L_3 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA, L_2, _stringLiteral4795A79F6F24DEF034533DEBDE661F34D2092C65, NULL);
		__this->___cachePath_13 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cachePath_13), (void*)L_3);
		// Debug.Log($"cachePath: {cachePath}, {texture.width}x{texture.height}");
		String_t* L_4 = __this->___cachePath_13;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_5 = __this->___texture_4;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_5);
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_7);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_9 = __this->___texture_4;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_9);
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_11);
		String_t* L_13;
		L_13 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral83FC2FCBE893CCAF9A5E4FEB29B98F1324611780, L_4, L_8, L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_13, NULL);
		// MediaCreator.InitAsMovWithNoAudio(cachePath, "h264", texture.width, texture.height);
		String_t* L_14 = __this->___cachePath_13;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_15 = __this->___texture_4;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_15);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_17 = __this->___texture_4;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_17);
		MediaCreator_InitAsMovWithNoAudio_mB1F8DC8FB83AAE5E311C571DE4806FA4F6052B43(L_14, _stringLiteral0C3AAD5EAE3E5377E06AE46457E724CA5BFEF82A, ((int64_t)L_16), ((int64_t)L_18), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		// MediaCreator.Start(startTimeOffset);
		int64_t L_19 = __this->___startTimeOffset_16;
		MediaCreator_Start_m1EC0961030105976024D6AB29986012EACC84E00(L_19, NULL);
		// startTime = Time.time;
		float L_20;
		L_20 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime_15 = L_20;
		// uuid = "";
		__this->___uuid_12 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___uuid_12), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// isRecording = true;
		__this->___isRecording_7 = (bool)1;
		// recordTexture = true;
		__this->___recordTexture_8 = (bool)1;
		// recordAudio = false;
		__this->___recordAudio_9 = (bool)0;
		// saveAfterFinish = true;
		__this->___saveAfterFinish_10 = (bool)1;
		// amountFrame = 0;
		__this->___amountFrame_14 = ((int64_t)0);
		// livePhotosRecording = -1;
		__this->___livePhotosRecording_11 = (-1);
		// }
		return;
	}
}
// System.Void RecordingController::StartRecWav()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordingController_StartRecWav_m86365D0A5D30BE0C555D8FD6EC9398E143085AC5 (RecordingController_t98BBC80C535D6BCFDF598B1F70807E72845B5B4B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C58AA52B98ED0F59B39CB0E2D08D9447FA0C61C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82DEF55E59F42D82D5AD3B0266DA00F585B73768);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDA3AEF0EE544404EE4F51968B6001D72E3023E0);
		s_Il2CppMethodInitialized = true;
	}
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* V_0 = NULL;
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* V_1 = NULL;
	{
		// if (isRecording) return;
		bool L_0 = __this->___isRecording_7;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (isRecording) return;
		return;
	}

IL_0009:
	{
		// text.text = "start rec wav!";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___text_5;
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, _stringLiteral3C58AA52B98ED0F59B39CB0E2D08D9447FA0C61C);
		// var source = gameObject.AddComponent<AudioSource>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3;
		L_3 = GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14(L_2, GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14_RuntimeMethod_var);
		V_0 = L_3;
		// var clip = Microphone.Start(null, true, 1, 48_000);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_4;
		L_4 = Microphone_Start_mDA38C5376D122F27D9DEFD2AE811BAE460F2242E((String_t*)NULL, (bool)1, 1, ((int32_t)48000), NULL);
		V_1 = L_4;
		// source.clip = clip;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_5 = V_0;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_6 = V_1;
		NullCheck(L_5);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_5, L_6, NULL);
		// source.loop = true;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_7 = V_0;
		NullCheck(L_7);
		AudioSource_set_loop_m834A590939D8456008C0F897FD80B0ECFFB7FE56(L_7, (bool)1, NULL);
	}

IL_0041:
	{
		// while (Microphone.GetPosition(null) < 0) { }
		int32_t L_8;
		L_8 = Microphone_GetPosition_m13F4C8EBE8536893D9AD8388B0E5B46D62E6A459((String_t*)NULL, NULL);
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		// cachePath = "file://" + Application.temporaryCachePath + "/tmp.wav";
		String_t* L_9;
		L_9 = Application_get_temporaryCachePath_mE4483A939988E69570C19F8B31AB9FB17B0FD97D(NULL);
		String_t* L_10;
		L_10 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA, L_9, _stringLiteral82DEF55E59F42D82D5AD3B0266DA00F585B73768, NULL);
		__this->___cachePath_13 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cachePath_13), (void*)L_10);
		// Debug.Log($"cachePath: {cachePath}");
		String_t* L_11 = __this->___cachePath_13;
		String_t* L_12;
		L_12 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralEDA3AEF0EE544404EE4F51968B6001D72E3023E0, L_11, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_12, NULL);
		// MediaCreator.InitAsWav(cachePath, 1, 48000, 32);
		String_t* L_13 = __this->___cachePath_13;
		MediaCreator_InitAsWav_m472956D41C3C2092C830940247A6689365F7ABF4(L_13, ((int64_t)1), (48000.0f), ((int64_t)((int32_t)32)), NULL);
		// MediaCreator.Start(startTimeOffset);
		int64_t L_14 = __this->___startTimeOffset_16;
		MediaCreator_Start_m1EC0961030105976024D6AB29986012EACC84E00(L_14, NULL);
		// startTime = Time.time;
		float L_15;
		L_15 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime_15 = L_15;
		// uuid = "";
		__this->___uuid_12 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___uuid_12), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// isRecording = true;
		__this->___isRecording_7 = (bool)1;
		// recordTexture = false;
		__this->___recordTexture_8 = (bool)0;
		// recordAudio = true;
		__this->___recordAudio_9 = (bool)1;
		// saveAfterFinish = false;
		__this->___saveAfterFinish_10 = (bool)0;
		// amountFrame = 0;
		__this->___amountFrame_14 = ((int64_t)0);
		// livePhotosRecording = -1;
		__this->___livePhotosRecording_11 = (-1);
		// source.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_16 = V_0;
		NullCheck(L_16);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_16, NULL);
		// }
		return;
	}
}
// System.Void RecordingController::StartHls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordingController_StartHls_m22DA87FFD6C23742B769AD3C28DD702AE479E01D (RecordingController_t98BBC80C535D6BCFDF598B1F70807E72845B5B4B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t300D9A559311CF7D2AE5D29B63E8C4DE0D49BCD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecordingController_U3CStartHlsU3Eb__20_0_mD370D42A06BC83465CC0C859E0A9E72270C71291_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3AAD5EAE3E5377E06AE46457E724CA5BFEF82A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4795A79F6F24DEF034533DEBDE661F34D2092C65);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83FC2FCBE893CCAF9A5E4FEB29B98F1324611780);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA5A0EBA82FBBD6FE260815A6D5FCF9437251E93);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isRecording) return;
		bool L_0 = __this->___isRecording_7;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (isRecording) return;
		return;
	}

IL_0009:
	{
		// text.text = "start hls!";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___text_5;
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, _stringLiteralBA5A0EBA82FBBD6FE260815A6D5FCF9437251E93);
		// cachePath = "file://" + Application.temporaryCachePath + "/tmp.mov";
		String_t* L_2;
		L_2 = Application_get_temporaryCachePath_mE4483A939988E69570C19F8B31AB9FB17B0FD97D(NULL);
		String_t* L_3;
		L_3 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA, L_2, _stringLiteral4795A79F6F24DEF034533DEBDE661F34D2092C65, NULL);
		__this->___cachePath_13 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cachePath_13), (void*)L_3);
		// Debug.Log($"cachePath: {cachePath}, {texture.width}x{texture.height}");
		String_t* L_4 = __this->___cachePath_13;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_5 = __this->___texture_4;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_5);
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_7);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_9 = __this->___texture_4;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_9);
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_11);
		String_t* L_13;
		L_13 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral83FC2FCBE893CCAF9A5E4FEB29B98F1324611780, L_4, L_8, L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_13, NULL);
		// MediaCreator.SetOnSegmentDataAction((data) =>
		// {
		//     Debug.Log($"on segment: {data.Length}");
		//     hlsServer.OnSegmentData(data);
		// });
		Action_1_t300D9A559311CF7D2AE5D29B63E8C4DE0D49BCD8* L_14 = (Action_1_t300D9A559311CF7D2AE5D29B63E8C4DE0D49BCD8*)il2cpp_codegen_object_new(Action_1_t300D9A559311CF7D2AE5D29B63E8C4DE0D49BCD8_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		Action_1__ctor_mB3AA0B58E50AA1F32FD3B49CFF3441AEECF837FA(L_14, __this, (intptr_t)((void*)RecordingController_U3CStartHlsU3Eb__20_0_mD370D42A06BC83465CC0C859E0A9E72270C71291_RuntimeMethod_var), NULL);
		MediaCreator_SetOnSegmentDataAction_m81F897D07A7C8F14C58A4373B4CEE5EA70D812C7(L_14, NULL);
		// MediaCreator.InitAsHlsWithNoAudio(cachePath, "h264", texture.width, texture.height, 1_000_000);
		String_t* L_15 = __this->___cachePath_13;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_16 = __this->___texture_4;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_16);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_18 = __this->___texture_4;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_18);
		MediaCreator_InitAsHlsWithNoAudio_m86CEF407F110E4A3428E2944E28BEDECD43B0EA5(L_15, _stringLiteral0C3AAD5EAE3E5377E06AE46457E724CA5BFEF82A, ((int64_t)L_17), ((int64_t)L_19), ((int64_t)((int32_t)1000000)), NULL);
		// MediaCreator.Start(startTimeOffset);
		int64_t L_20 = __this->___startTimeOffset_16;
		MediaCreator_Start_m1EC0961030105976024D6AB29986012EACC84E00(L_20, NULL);
		// startTime = Time.time;
		float L_21;
		L_21 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime_15 = L_21;
		// uuid = "";
		__this->___uuid_12 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___uuid_12), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// isRecording = true;
		__this->___isRecording_7 = (bool)1;
		// recordTexture = true;
		__this->___recordTexture_8 = (bool)1;
		// recordAudio = false;
		__this->___recordAudio_9 = (bool)0;
		// saveAfterFinish = false;
		__this->___saveAfterFinish_10 = (bool)0;
		// amountFrame = 0;
		__this->___amountFrame_14 = ((int64_t)0);
		// livePhotosRecording = -1;
		__this->___livePhotosRecording_11 = (-1);
		// }
		return;
	}
}
// System.Void RecordingController::FinishRec()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordingController_FinishRec_m92CAF3B55BC5CE7B0D5E1EBE364168D33837795B (RecordingController_t98BBC80C535D6BCFDF598B1F70807E72845B5B4B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC99EB2E179755C32BB45CC6AB718380EC175392F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!isRecording) return;
		bool L_0 = __this->___isRecording_7;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!isRecording) return;
		return;
	}

IL_0009:
	{
		// text.text = "finish recording";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___text_5;
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, _stringLiteralC99EB2E179755C32BB45CC6AB718380EC175392F);
		// var source = gameObject.AddComponent<AudioSource>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3;
		L_3 = GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14(L_2, GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14_RuntimeMethod_var);
		// source.Stop();
		NullCheck(L_3);
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_3, NULL);
		// MediaCreator.FinishSync();
		MediaCreator_FinishSync_m18727CE9C575F42B169A046071CF8957C9310B14(NULL);
		// if (saveAfterFinish)
		bool L_4 = __this->___saveAfterFinish_10;
		if (!L_4)
		{
			goto IL_0041;
		}
	}
	{
		// MediaSaver.SaveVideo(cachePath);
		String_t* L_5 = __this->___cachePath_13;
		MediaSaver_SaveVideo_mBE8311DA6821EBE6F930A5994F3587E6C99665A7(L_5, NULL);
	}

IL_0041:
	{
		// if (livePhotosRecording > 0)
		int32_t L_6 = __this->___livePhotosRecording_11;
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0061;
		}
	}
	{
		// MediaSaver.SaveLivePhotos(texture, uuid, cachePath);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_7 = __this->___texture_4;
		String_t* L_8 = __this->___uuid_12;
		String_t* L_9 = __this->___cachePath_13;
		MediaSaver_SaveLivePhotos_mB7FE75D507E486B3E8CC5E6BB17075A7A77C703B(L_7, L_8, L_9, NULL);
	}

IL_0061:
	{
		// isRecording = false;
		__this->___isRecording_7 = (bool)0;
		// recordTexture = false;
		__this->___recordTexture_8 = (bool)0;
		// recordAudio = false;
		__this->___recordAudio_9 = (bool)0;
		// saveAfterFinish = false;
		__this->___saveAfterFinish_10 = (bool)0;
		// livePhotosRecording = -1;
		__this->___livePhotosRecording_11 = (-1);
		// }
		return;
	}
}
// System.Void RecordingController::OnAudioFilterRead(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordingController_OnAudioFilterRead_mEAFF59E905A8848B460332291C92AE826F1C6933 (RecordingController_t98BBC80C535D6BCFDF598B1F70807E72845B5B4B* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_data, int32_t ___1_channels, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// writeAudio(data, channels);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___0_data;
		int32_t L_1 = ___1_channels;
		RecordingController_writeAudio_m7FD1F963F79F93E05A29DBDA0F1405ECF124F9C0(__this, L_0, L_1, NULL);
		// for (int i = 0; i < data.Length; i++)
		V_0 = 0;
		goto IL_0018;
	}

IL_000c:
	{
		// data[i] = 0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = ___0_data;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (float)(0.0f));
		// for (int i = 0; i < data.Length; i++)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0018:
	{
		// for (int i = 0; i < data.Length; i++)
		int32_t L_5 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = ___0_data;
		NullCheck(L_6);
		if ((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void RecordingController::writeAudio(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordingController_writeAudio_m7FD1F963F79F93E05A29DBDA0F1405ECF124F9C0 (RecordingController_t98BBC80C535D6BCFDF598B1F70807E72845B5B4B* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_data, int32_t ___1_channels, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1EACC1AAB2AAA9C40A8E6675C763EFEDA177D44F);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	{
		// if (!recordAudio) return;
		bool L_0 = __this->___recordAudio_9;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!recordAudio) return;
		return;
	}

IL_0009:
	{
		// if (!MediaCreator.IsRecording()) return;
		bool L_1;
		L_1 = MediaCreator_IsRecording_mC17CE0706006D1D86CB190C0D16F18B82ABCA4E4(NULL);
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		// if (!MediaCreator.IsRecording()) return;
		return;
	}

IL_0011:
	{
		// long time = (amountFrame * 1_000_000 / 48_000) + startTimeOffset;
		int64_t L_2 = __this->___amountFrame_14;
		int64_t L_3 = __this->___startTimeOffset_16;
		V_0 = ((int64_t)il2cpp_codegen_add(((int64_t)(((int64_t)il2cpp_codegen_multiply(L_2, ((int64_t)((int32_t)1000000))))/((int64_t)((int32_t)48000)))), L_3));
		// Debug.Log($"write audio: {time}");
		int64_t L_4 = V_0;
		int64_t L_5 = L_4;
		RuntimeObject* L_6 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7;
		L_7 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral1EACC1AAB2AAA9C40A8E6675C763EFEDA177D44F, L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_7, NULL);
		// MediaCreator.WriteAudio(data, time);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_8 = ___0_data;
		int64_t L_9 = V_0;
		MediaCreator_WriteAudio_mD03BA182124B566301E7014CAA3737173F669721(L_8, L_9, NULL);
		// amountFrame += data.Length;
		int64_t L_10 = __this->___amountFrame_14;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_11 = ___0_data;
		NullCheck(L_11);
		__this->___amountFrame_14 = ((int64_t)il2cpp_codegen_add(L_10, ((int64_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))));
		// }
		return;
	}
}
// System.Void RecordingController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordingController__ctor_mF829DDFBE7BBEA4C4822FA6C90CB60EF66C14B12 (RecordingController_t98BBC80C535D6BCFDF598B1F70807E72845B5B4B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private int livePhotosRecording = -1;
		__this->___livePhotosRecording_11 = (-1);
		// private string uuid = "";
		__this->___uuid_12 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___uuid_12), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// private string cachePath = "";
		__this->___cachePath_13 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cachePath_13), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// private long startTimeOffset = 6_000_000;
		__this->___startTimeOffset_16 = ((int64_t)((int32_t)6000000));
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void RecordingController::<StartHls>b__20_0(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordingController_U3CStartHlsU3Eb__20_0_mD370D42A06BC83465CC0C859E0A9E72270C71291 (RecordingController_t98BBC80C535D6BCFDF598B1F70807E72845B5B4B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA6C72E55EB048670BF4DF5E76CAC1BA978F656D6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"on segment: {data.Length}");
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_data;
		NullCheck(L_0);
		int32_t L_1 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		RuntimeObject* L_2 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralA6C72E55EB048670BF4DF5E76CAC1BA978F656D6, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// hlsServer.OnSegmentData(data);
		HlsServer_tA907BA96BB7103CCBA09278E37D13C6BB9864400* L_4 = __this->___hlsServer_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___0_data;
		NullCheck(L_4);
		HlsServer_OnSegmentData_m6222020DADF0B039EAFF7FA2B7F9F75E8AB9693A(L_4, L_5, NULL);
		// });
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
// System.Void MainFlow::PresentImageSample()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainFlow_PresentImageSample_mB3C87DE00DABD3116AE8602E2A5253F97E4DB4E4 (MainFlow_t8B7290D017A0FF7C68F7E7BD48480C0C4E2BFAB2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA08D1FCD83B14CA95CD94CB1DEEA6C8066A4B45);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("VideoCreator/Demo/Scenes/ImageSample", LoadSceneMode.Single);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m2841705C02C450E42A44B5EEE2A6A2C4261FA3AF(_stringLiteralBA08D1FCD83B14CA95CD94CB1DEEA6C8066A4B45, 0, NULL);
		// }
		return;
	}
}
// System.Void MainFlow::PresentMovSample()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainFlow_PresentMovSample_mBA23124D5C22CEC87762E09F1DB753A968770936 (MainFlow_t8B7290D017A0FF7C68F7E7BD48480C0C4E2BFAB2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral768E38B1BDEA08C080A72630AFBAB740C59F66DE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("VideoCreator/Demo/Scenes/MovSample", LoadSceneMode.Single);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m2841705C02C450E42A44B5EEE2A6A2C4261FA3AF(_stringLiteral768E38B1BDEA08C080A72630AFBAB740C59F66DE, 0, NULL);
		// }
		return;
	}
}
// System.Void MainFlow::PresentLivePhotosSample()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainFlow_PresentLivePhotosSample_mA8DBAEDB99A438613D5ACBBA16E1C387D8BA3332 (MainFlow_t8B7290D017A0FF7C68F7E7BD48480C0C4E2BFAB2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49AD57107D3E31CF494530FD1C8ED366367C2FFC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("VideoCreator/Demo/Scenes/LivePhotosSample", LoadSceneMode.Single);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m2841705C02C450E42A44B5EEE2A6A2C4261FA3AF(_stringLiteral49AD57107D3E31CF494530FD1C8ED366367C2FFC, 0, NULL);
		// }
		return;
	}
}
// System.Void MainFlow::PresentHlsSample()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainFlow_PresentHlsSample_m12579AF3ADB9BAC946F8538E872A99E2DC0D1AFE (MainFlow_t8B7290D017A0FF7C68F7E7BD48480C0C4E2BFAB2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2EA0B36A7611A22F5C547762189946F4734DE38F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("VideoCreator/Demo/Scenes/HlsSample", LoadSceneMode.Single);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m2841705C02C450E42A44B5EEE2A6A2C4261FA3AF(_stringLiteral2EA0B36A7611A22F5C547762189946F4734DE38F, 0, NULL);
		// }
		return;
	}
}
// System.Void MainFlow::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainFlow_Close_m7BE393D42C9210010E8E17720CBF87D27FF7CF2B (MainFlow_t8B7290D017A0FF7C68F7E7BD48480C0C4E2BFAB2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D5BF8D43680B3B44672FAB47B49CF5B3E76A905);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("VideoCreator/Demo/Scenes/Main", LoadSceneMode.Single);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m2841705C02C450E42A44B5EEE2A6A2C4261FA3AF(_stringLiteral5D5BF8D43680B3B44672FAB47B49CF5B3E76A905, 0, NULL);
		// }
		return;
	}
}
// System.Void MainFlow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainFlow__ctor_m7A17BED93A6A32D1622BCA95F7F1B84D01FDB679 (MainFlow_t8B7290D017A0FF7C68F7E7BD48480C0C4E2BFAB2* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void HlsSample::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HlsSample_Start_m8C53059361228D50EE34900B5F40DCDC4BE6CEC0 (HlsSample_tCDA44A9069ED217B74AF3E14319FC5C196682862* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4795A79F6F24DEF034533DEBDE661F34D2092C65);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FE071A3028A8566B3EDC14F46865A3A79627078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60A2622AAE9547559E1D04B8A59B9361B25C22E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83FC2FCBE893CCAF9A5E4FEB29B98F1324611780);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Application.targetFrameRate = 30;
		Application_set_targetFrameRate_mB90EEA60DAE55CD71C38D4B7DFDBE2B34EA6B46F(((int32_t)30), NULL);
		// SceneManager.LoadScene("Common", LoadSceneMode.Additive);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m2841705C02C450E42A44B5EEE2A6A2C4261FA3AF(_stringLiteral60A2622AAE9547559E1D04B8A59B9361B25C22E0, 1, NULL);
		// cachePath = "file://" + Application.temporaryCachePath + "/tmp.mov";
		String_t* L_0;
		L_0 = Application_get_temporaryCachePath_mE4483A939988E69570C19F8B31AB9FB17B0FD97D(NULL);
		String_t* L_1;
		L_1 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA, L_0, _stringLiteral4795A79F6F24DEF034533DEBDE661F34D2092C65, NULL);
		__this->___cachePath_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cachePath_8), (void*)L_1);
		// Debug.Log($"cachePath: {cachePath}, {texture.width}x{texture.height}");
		String_t* L_2 = __this->___cachePath_8;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_3 = __this->___texture_4;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_3);
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_5);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_7 = __this->___texture_4;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_7);
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_9);
		String_t* L_11;
		L_11 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral83FC2FCBE893CCAF9A5E4FEB29B98F1324611780, L_2, L_6, L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_11, NULL);
		// Debug.Log("access http://XXX.XXX.XXX.XXX:8080/index");
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral5FE071A3028A8566B3EDC14F46865A3A79627078, NULL);
		// }
		return;
	}
}
// System.Void HlsSample::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HlsSample_Update_m5DB9807D808F95FD4F21330CC1D562F9F71A28D8 (HlsSample_tCDA44A9069ED217B74AF3E14319FC5C196682862* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98769C553CE355D263A8D46CD916587352847B45);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	{
		// if (!isRecording || !MediaCreator.IsRecording()) return;
		bool L_0 = __this->___isRecording_7;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		bool L_1;
		L_1 = MediaCreator_IsRecording_mC17CE0706006D1D86CB190C0D16F18B82ABCA4E4(NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}

IL_000f:
	{
		// if (!isRecording || !MediaCreator.IsRecording()) return;
		return;
	}

IL_0010:
	{
		// long time = (long)((Time.time - startTime) * 1_000_000) + startTimeOffset;
		float L_2;
		L_2 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_3 = __this->___startTime_9;
		int64_t L_4 = __this->___startTimeOffset_6;
		V_0 = ((int64_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int64_t>(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_2, L_3)), (1000000.0f)))), L_4));
		// Debug.Log($"write texture: {time}");
		int64_t L_5 = V_0;
		int64_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8;
		L_8 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral98769C553CE355D263A8D46CD916587352847B45, L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_8, NULL);
		// MediaCreator.WriteVideo(texture, time);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_9 = __this->___texture_4;
		int64_t L_10 = V_0;
		MediaCreator_WriteVideo_m45A87F553A4997213C3335858CFEA8D94B45DA29(L_9, L_10, NULL);
		// }
		return;
	}
}
// System.Void HlsSample::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HlsSample_OnDestroy_m3EE9E78AC59268B5CBB2762684942832A37C15B0 (HlsSample_tCDA44A9069ED217B74AF3E14319FC5C196682862* __this, const RuntimeMethod* method) 
{
	{
		// StopHls();
		HlsSample_StopHls_m00609AD620711E707EC830480F2D18A770A6C902(__this, NULL);
		// }
		return;
	}
}
// System.Void HlsSample::StartHls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HlsSample_StartHls_mDAAFD7FE4F2B4F284F06B28F15D915C5F796CF90 (HlsSample_tCDA44A9069ED217B74AF3E14319FC5C196682862* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t300D9A559311CF7D2AE5D29B63E8C4DE0D49BCD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HlsSample_U3CStartHlsU3Eb__9_0_mC3B97477CA7D9A65E431570B5BCF8DADFB79B795_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3AAD5EAE3E5377E06AE46457E724CA5BFEF82A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isRecording) return;
		bool L_0 = __this->___isRecording_7;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (isRecording) return;
		return;
	}

IL_0009:
	{
		// MediaCreator.SetOnSegmentDataAction((data) =>
		// {
		//     Debug.Log($"on segment: {data.Length}");
		//     hlsServer.OnSegmentData(data);
		// });
		Action_1_t300D9A559311CF7D2AE5D29B63E8C4DE0D49BCD8* L_1 = (Action_1_t300D9A559311CF7D2AE5D29B63E8C4DE0D49BCD8*)il2cpp_codegen_object_new(Action_1_t300D9A559311CF7D2AE5D29B63E8C4DE0D49BCD8_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_mB3AA0B58E50AA1F32FD3B49CFF3441AEECF837FA(L_1, __this, (intptr_t)((void*)HlsSample_U3CStartHlsU3Eb__9_0_mC3B97477CA7D9A65E431570B5BCF8DADFB79B795_RuntimeMethod_var), NULL);
		MediaCreator_SetOnSegmentDataAction_m81F897D07A7C8F14C58A4373B4CEE5EA70D812C7(L_1, NULL);
		// MediaCreator.InitAsHlsWithNoAudio(cachePath, "h264", texture.width, texture.height, 1_000_000);
		String_t* L_2 = __this->___cachePath_8;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_3 = __this->___texture_4;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_3);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_5 = __this->___texture_4;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_5);
		MediaCreator_InitAsHlsWithNoAudio_m86CEF407F110E4A3428E2944E28BEDECD43B0EA5(L_2, _stringLiteral0C3AAD5EAE3E5377E06AE46457E724CA5BFEF82A, ((int64_t)L_4), ((int64_t)L_6), ((int64_t)((int32_t)1000000)), NULL);
		// MediaCreator.Start(startTimeOffset);
		int64_t L_7 = __this->___startTimeOffset_6;
		MediaCreator_Start_m1EC0961030105976024D6AB29986012EACC84E00(L_7, NULL);
		// startTime = Time.time;
		float L_8;
		L_8 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime_9 = L_8;
		// isRecording = true;
		__this->___isRecording_7 = (bool)1;
		// }
		return;
	}
}
// System.Void HlsSample::StopHls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HlsSample_StopHls_m00609AD620711E707EC830480F2D18A770A6C902 (HlsSample_tCDA44A9069ED217B74AF3E14319FC5C196682862* __this, const RuntimeMethod* method) 
{
	{
		// if (!isRecording) return;
		bool L_0 = __this->___isRecording_7;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!isRecording) return;
		return;
	}

IL_0009:
	{
		// MediaCreator.FinishSync();
		MediaCreator_FinishSync_m18727CE9C575F42B169A046071CF8957C9310B14(NULL);
		// isRecording = false;
		__this->___isRecording_7 = (bool)0;
		// }
		return;
	}
}
// System.Void HlsSample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HlsSample__ctor_m5345429AF5E417C00F593E9E178F36D9C86E0C54 (HlsSample_tCDA44A9069ED217B74AF3E14319FC5C196682862* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly long startTimeOffset = 6_000_000;
		__this->___startTimeOffset_6 = ((int64_t)((int32_t)6000000));
		// private string cachePath = "";
		__this->___cachePath_8 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cachePath_8), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void HlsSample::<StartHls>b__9_0(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HlsSample_U3CStartHlsU3Eb__9_0_mC3B97477CA7D9A65E431570B5BCF8DADFB79B795 (HlsSample_tCDA44A9069ED217B74AF3E14319FC5C196682862* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA6C72E55EB048670BF4DF5E76CAC1BA978F656D6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"on segment: {data.Length}");
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_data;
		NullCheck(L_0);
		int32_t L_1 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		RuntimeObject* L_2 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralA6C72E55EB048670BF4DF5E76CAC1BA978F656D6, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// hlsServer.OnSegmentData(data);
		HlsServer_tA907BA96BB7103CCBA09278E37D13C6BB9864400* L_4 = __this->___hlsServer_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___0_data;
		NullCheck(L_4);
		HlsServer_OnSegmentData_m6222020DADF0B039EAFF7FA2B7F9F75E8AB9693A(L_4, L_5, NULL);
		// });
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
// System.Void HlsServer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HlsServer_Start_mD43803146D59DDED9F0DAEC3FC0EB6FCC31FD4A0 (HlsServer_tA907BA96BB7103CCBA09278E37D13C6BB9864400* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C38AF0604C5FEC6D60CA93A5BC7BB7742B9BCF5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// httpListener.Prefixes.Add("http://*:8080/");
		HttpListener_t64CDB1E1A5227C151C7A271A8747DBC88EBC8F01* L_0 = __this->___httpListener_5;
		NullCheck(L_0);
		HttpListenerPrefixCollection_tC33808D167E85BCF19C8EA7B02709F95FC604897* L_1;
		L_1 = HttpListener_get_Prefixes_mBDE4ABFC6DE6A06BBDF436459FFB84276AC7BD21(L_0, NULL);
		NullCheck(L_1);
		HttpListenerPrefixCollection_Add_mB373ADD97AF3D45A7C6DC3E6E9119A4F1AE84713(L_1, _stringLiteral1C38AF0604C5FEC6D60CA93A5BC7BB7742B9BCF5, NULL);
		// StartServer();
		HlsServer_StartServer_m65FB64491234058234FCD61FCA68D2B13289A7BD(__this, NULL);
		// }
		return;
	}
}
// System.Void HlsServer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HlsServer_Update_m0D738870059148F367F1F4D8BE78871E334CE1F7 (HlsServer_tA907BA96BB7103CCBA09278E37D13C6BB9864400* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void HlsServer::StartServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HlsServer_StartServer_m65FB64491234058234FCD61FCA68D2B13289A7BD (HlsServer_tA907BA96BB7103CCBA09278E37D13C6BB9864400* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HlsServer_Listen_mEE6513632BA84126513D8DF89BB2106B97100D15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// httpListener.Start();
		HttpListener_t64CDB1E1A5227C151C7A271A8747DBC88EBC8F01* L_0 = __this->___httpListener_5;
		NullCheck(L_0);
		HttpListener_Start_mFFF59C04274FCAA5F9C86A1908DDBE1FDC48D867(L_0, NULL);
		// listenerThread = new Thread(Listen);
		ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2* L_1 = (ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2*)il2cpp_codegen_object_new(ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ThreadStart__ctor_m35CE51F76358F20E4A0C8F2963C3AE14E5FF7E71(L_1, __this, (intptr_t)((void*)HlsServer_Listen_mEE6513632BA84126513D8DF89BB2106B97100D15_RuntimeMethod_var), NULL);
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_2 = (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F*)il2cpp_codegen_object_new(Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Thread__ctor_m1FA23A179DF4F5B659689D6FA40DE903086212E2(L_2, L_1, NULL);
		__this->___listenerThread_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___listenerThread_4), (void*)L_2);
		// listenerThread.Start();
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_3 = __this->___listenerThread_4;
		NullCheck(L_3);
		Thread_Start_m2230799AA331CA9ACEF49D5500281D0C1A9F72FA(L_3, NULL);
		// }
		return;
	}
}
// System.Void HlsServer::Listen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HlsServer_Listen_mEE6513632BA84126513D8DF89BB2106B97100D15 (HlsServer_tA907BA96BB7103CCBA09278E37D13C6BB9864400* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CListenU3Ed__5_t1A5103CF2B74AC0FE9019A69C9F3A37AC77A0891_m54C0A9F3519E9E11799ADAB8C6BE7A6EB1DD874B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CListenU3Ed__5_t1A5103CF2B74AC0FE9019A69C9F3A37AC77A0891 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_0;
		L_0 = AsyncVoidMethodBuilder_Create_m13D0B23DD350C14035918384E10AF641E6B9EE67(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3CListenU3Ed__5_t1A5103CF2B74AC0FE9019A69C9F3A37AC77A0891_m54C0A9F3519E9E11799ADAB8C6BE7A6EB1DD874B(L_1, (&V_0), AsyncVoidMethodBuilder_Start_TisU3CListenU3Ed__5_t1A5103CF2B74AC0FE9019A69C9F3A37AC77A0891_m54C0A9F3519E9E11799ADAB8C6BE7A6EB1DD874B_RuntimeMethod_var);
		return;
	}
}
// System.Void HlsServer::StopServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HlsServer_StopServer_m6E147032FFB99E0E02434F83642F217308BB4B72 (HlsServer_tA907BA96BB7103CCBA09278E37D13C6BB9864400* __this, const RuntimeMethod* method) 
{
	{
		// listenerThread.Join();
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_0 = __this->___listenerThread_4;
		NullCheck(L_0);
		Thread_Join_mB756581AAF5EB028081256E0517892BC8867779F(L_0, NULL);
		// httpListener.Stop();
		HttpListener_t64CDB1E1A5227C151C7A271A8747DBC88EBC8F01* L_1 = __this->___httpListener_5;
		NullCheck(L_1);
		HttpListener_Stop_mCE62183FF81F99305C3AB6E30B79B3A457DDC350(L_1, NULL);
		// }
		return;
	}
}
// System.Void HlsServer::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HlsServer_OnDestroy_m50D34C9240F7E9BC3AEF36C12BB7CCBEDC188D7B (HlsServer_tA907BA96BB7103CCBA09278E37D13C6BB9864400* __this, const RuntimeMethod* method) 
{
	{
		// StopServer();
		HlsServer_StopServer_m6E147032FFB99E0E02434F83642F217308BB4B72(__this, NULL);
		// }
		return;
	}
}
// System.Void HlsServer::ProcessRequest(System.Net.HttpListenerContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HlsServer_ProcessRequest_mEAB88BECC368D9D6AF78C31DF84558391576BE42 (HlsServer_tA907BA96BB7103CCBA09278E37D13C6BB9864400* __this, HttpListenerContext_tCD5824B5A03F644280D1F171203A2A03F7377412* ___0_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m820E3E3C8FA49AD0B87DECE0A0977FD9C54C1526_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mC5A8474F902E701534877BEE5EAF67E94B196D8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1ADA49DB1F06975314D080DCAEB46A68F8E74B0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral207F960B12EFC3B5FF77BD499A31467E6BD0F868);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DBBB911B84E1F474C66F5D74E3DF9D66CFF8C48);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56DF299140515D2C54518CD1383D3A16FAF03DC0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FE071A3028A8566B3EDC14F46865A3A79627078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67184A92CF8F6E59BA82AAF4A94C237CF2E0EB48);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8439A013FB563DD28126E2D0A3F9A1949660BF07);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99FB2CA8ECC184C488939F14EB30E1A0CFFFFAFF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0B68BBCFBF976FB803E3C0C6D0BEF35FCC5EC23);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB56FD2D02571A001AEE35B4B7445C73192FFD483);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB8B8DA240F884A364B6D0CEBA4061439C6CD109);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC11E0F40C5BF980937012B6DCBD0A3C31075CA82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6231899D1D58A70C2C2BA36F55CB3F10A973862);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// context.Response.StatusCode = 200;
		HttpListenerContext_tCD5824B5A03F644280D1F171203A2A03F7377412* L_0 = ___0_context;
		NullCheck(L_0);
		HttpListenerResponse_tE2A3F65DF2E0B73D19CE1FBDCFE622CADE7B38B1* L_1;
		L_1 = HttpListenerContext_get_Response_m64CA8756CB54BE4A08A336ACCAC5EED26EF42867_inline(L_0, NULL);
		NullCheck(L_1);
		HttpListenerResponse_set_StatusCode_m5A3C3995DC618FBA6347ACA9544BD3C5F54DB627(L_1, ((int32_t)200), NULL);
		// byte[] data = System.Text.Encoding.UTF8.GetBytes("access http://XXX.XXX.XXX.XXX:8080/index");
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_2;
		L_2 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		NullCheck(L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_2, _stringLiteral5FE071A3028A8566B3EDC14F46865A3A79627078);
		V_0 = L_3;
		// string contentType = "text/plain";
		V_1 = _stringLiteral67184A92CF8F6E59BA82AAF4A94C237CF2E0EB48;
		// var path = context.Request.Url.LocalPath;
		HttpListenerContext_tCD5824B5A03F644280D1F171203A2A03F7377412* L_4 = ___0_context;
		NullCheck(L_4);
		HttpListenerRequest_t30206889F6CB705A9774EAD0C76C905096237FA8* L_5;
		L_5 = HttpListenerContext_get_Request_m12CFD433DD5D32D9A72388BEBE6256C7BABE1808_inline(L_4, NULL);
		NullCheck(L_5);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_6;
		L_6 = HttpListenerRequest_get_Url_mAFF6E2EA7A69C8FC3A86DC63CD0F1CBACB3B9831_inline(L_5, NULL);
		NullCheck(L_6);
		String_t* L_7;
		L_7 = Uri_get_LocalPath_m60EE736E6F601238CBC20CE7DBB647C61F16DB0E(L_6, NULL);
		V_2 = L_7;
		String_t* L_8 = V_2;
		bool L_9;
		L_9 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_8, _stringLiteralC6231899D1D58A70C2C2BA36F55CB3F10A973862, NULL);
		if (L_9)
		{
			goto IL_0060;
		}
	}
	{
		String_t* L_10 = V_2;
		bool L_11;
		L_11 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_10, _stringLiteral2DBBB911B84E1F474C66F5D74E3DF9D66CFF8C48, NULL);
		if (L_11)
		{
			goto IL_0079;
		}
	}
	{
		String_t* L_12 = V_2;
		bool L_13;
		L_13 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_12, _stringLiteral56DF299140515D2C54518CD1383D3A16FAF03DC0, NULL);
		if (L_13)
		{
			goto IL_0092;
		}
	}
	{
		goto IL_009f;
	}

IL_0060:
	{
		// data = System.Text.Encoding.UTF8.GetBytes(Html);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_14;
		L_14 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_15;
		L_15 = HlsServer_get_Html_mC403306F60DAAD4033291A871106C4AF13AE4717(__this, NULL);
		NullCheck(L_14);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16;
		L_16 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_14, L_15);
		V_0 = L_16;
		// contentType = "text/html";
		V_1 = _stringLiteralBB8B8DA240F884A364B6D0CEBA4061439C6CD109;
		// break;
		goto IL_009f;
	}

IL_0079:
	{
		// data = System.Text.Encoding.UTF8.GetBytes(M3U8);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_17;
		L_17 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_18;
		L_18 = HlsServer_get_M3U8_mE708EDFC42FDE4666659BABED353648F3772F175(__this, NULL);
		NullCheck(L_17);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19;
		L_19 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_17, L_18);
		V_0 = L_19;
		// contentType = "application/x-mpegURL";
		V_1 = _stringLiteral207F960B12EFC3B5FF77BD499A31467E6BD0F868;
		// break;
		goto IL_009f;
	}

IL_0092:
	{
		// data = initData;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = __this->___initData_7;
		V_0 = L_20;
		// contentType = "video/mp4";
		V_1 = _stringLiteral1ADA49DB1F06975314D080DCAEB46A68F8E74B0A;
	}

IL_009f:
	{
		// if(path.StartsWith("/files/sequence"))
		String_t* L_21 = V_2;
		NullCheck(L_21);
		bool L_22;
		L_22 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_21, _stringLiteralB0B68BBCFBF976FB803E3C0C6D0BEF35FCC5EC23, NULL);
		if (!L_22)
		{
			goto IL_0104;
		}
	}
	{
		// for(int i = 0; i < sequences.Count; i++)
		V_3 = 0;
		goto IL_00f6;
	}

IL_00b0:
	{
		// if (!path.StartsWith($"/files/sequence{sequences[i].sequence}")) continue;
		String_t* L_23 = V_2;
		List_1_tF88145309D90E96C94637CEE6C76DF92A4E8AA7F* L_24 = __this->___sequences_8;
		int32_t L_25 = V_3;
		NullCheck(L_24);
		ValueTuple_2_t1D84412EF5C4A681CACB9E8C0BC858743D4C63CA L_26;
		L_26 = List_1_get_Item_mC5A8474F902E701534877BEE5EAF67E94B196D8F(L_24, L_25, List_1_get_Item_mC5A8474F902E701534877BEE5EAF67E94B196D8F_RuntimeMethod_var);
		int32_t L_27 = L_26.___Item1_0;
		int32_t L_28 = L_27;
		RuntimeObject* L_29 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_28);
		String_t* L_30;
		L_30 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral8439A013FB563DD28126E2D0A3F9A1949660BF07, L_29, NULL);
		NullCheck(L_23);
		bool L_31;
		L_31 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_23, L_30, NULL);
		if (!L_31)
		{
			goto IL_00f2;
		}
	}
	{
		// data = sequences[i].data;
		List_1_tF88145309D90E96C94637CEE6C76DF92A4E8AA7F* L_32 = __this->___sequences_8;
		int32_t L_33 = V_3;
		NullCheck(L_32);
		ValueTuple_2_t1D84412EF5C4A681CACB9E8C0BC858743D4C63CA L_34;
		L_34 = List_1_get_Item_mC5A8474F902E701534877BEE5EAF67E94B196D8F(L_32, L_33, List_1_get_Item_mC5A8474F902E701534877BEE5EAF67E94B196D8F_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = L_34.___Item2_1;
		V_0 = L_35;
		// contentType = "video/iso.segment";
		V_1 = _stringLiteralC11E0F40C5BF980937012B6DCBD0A3C31075CA82;
		// break;
		goto IL_0104;
	}

IL_00f2:
	{
		// for(int i = 0; i < sequences.Count; i++)
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00f6:
	{
		// for(int i = 0; i < sequences.Count; i++)
		int32_t L_37 = V_3;
		List_1_tF88145309D90E96C94637CEE6C76DF92A4E8AA7F* L_38 = __this->___sequences_8;
		NullCheck(L_38);
		int32_t L_39;
		L_39 = List_1_get_Count_m820E3E3C8FA49AD0B87DECE0A0977FD9C54C1526_inline(L_38, List_1_get_Count_m820E3E3C8FA49AD0B87DECE0A0977FD9C54C1526_RuntimeMethod_var);
		if ((((int32_t)L_37) < ((int32_t)L_39)))
		{
			goto IL_00b0;
		}
	}

IL_0104:
	{
		// Debug.Log($"path: {path}, contentType: {contentType}");
		String_t* L_40 = V_2;
		String_t* L_41 = V_1;
		String_t* L_42;
		L_42 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteralB56FD2D02571A001AEE35B4B7445C73192FFD483, L_40, _stringLiteral99FB2CA8ECC184C488939F14EB30E1A0CFFFFAFF, L_41, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_42, NULL);
		// context.Response.ContentType = contentType;
		HttpListenerContext_tCD5824B5A03F644280D1F171203A2A03F7377412* L_43 = ___0_context;
		NullCheck(L_43);
		HttpListenerResponse_tE2A3F65DF2E0B73D19CE1FBDCFE622CADE7B38B1* L_44;
		L_44 = HttpListenerContext_get_Response_m64CA8756CB54BE4A08A336ACCAC5EED26EF42867_inline(L_43, NULL);
		String_t* L_45 = V_1;
		NullCheck(L_44);
		HttpListenerResponse_set_ContentType_mE9EAD119EC0397DF8D7C95EA7F5F3B734679D1F0(L_44, L_45, NULL);
		// context.Response.Close(data, false);
		HttpListenerContext_tCD5824B5A03F644280D1F171203A2A03F7377412* L_46 = ___0_context;
		NullCheck(L_46);
		HttpListenerResponse_tE2A3F65DF2E0B73D19CE1FBDCFE622CADE7B38B1* L_47;
		L_47 = HttpListenerContext_get_Response_m64CA8756CB54BE4A08A336ACCAC5EED26EF42867_inline(L_46, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48 = V_0;
		NullCheck(L_47);
		HttpListenerResponse_Close_m0F93E1AB7C64F67D9D305C4169BA649602AE8013(L_47, L_48, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void HlsServer::OnSegmentData(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HlsServer_OnSegmentData_m6222020DADF0B039EAFF7FA2B7F9F75E8AB9693A (HlsServer_tA907BA96BB7103CCBA09278E37D13C6BB9864400* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9A99F7A6ECAD7201B314A3716B62373BEA8AB6F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m31C56A5163FA7F8AAFB67B4866F20C60FE7DED18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m820E3E3C8FA49AD0B87DECE0A0977FD9C54C1526_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_2__ctor_mF4E1D57C8E8BCBBEDFFBC7CC789FAB7867E56D09_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// sequence++;
		int32_t L_0 = __this->___sequence_6;
		__this->___sequence_6 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// if(sequence == 0)
		int32_t L_1 = __this->___sequence_6;
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		// initData = data;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_data;
		__this->___initData_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___initData_7), (void*)L_2);
		// return;
		return;
	}

IL_001e:
	{
		// sequences.Add((sequence, data));
		List_1_tF88145309D90E96C94637CEE6C76DF92A4E8AA7F* L_3 = __this->___sequences_8;
		int32_t L_4 = __this->___sequence_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___0_data;
		ValueTuple_2_t1D84412EF5C4A681CACB9E8C0BC858743D4C63CA L_6;
		memset((&L_6), 0, sizeof(L_6));
		ValueTuple_2__ctor_mF4E1D57C8E8BCBBEDFFBC7CC789FAB7867E56D09((&L_6), L_4, L_5, /*hidden argument*/ValueTuple_2__ctor_mF4E1D57C8E8BCBBEDFFBC7CC789FAB7867E56D09_RuntimeMethod_var);
		NullCheck(L_3);
		List_1_Add_m9A99F7A6ECAD7201B314A3716B62373BEA8AB6F8_inline(L_3, L_6, List_1_Add_m9A99F7A6ECAD7201B314A3716B62373BEA8AB6F8_RuntimeMethod_var);
		// if(sequences.Count > 5)
		List_1_tF88145309D90E96C94637CEE6C76DF92A4E8AA7F* L_7 = __this->___sequences_8;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_m820E3E3C8FA49AD0B87DECE0A0977FD9C54C1526_inline(L_7, List_1_get_Count_m820E3E3C8FA49AD0B87DECE0A0977FD9C54C1526_RuntimeMethod_var);
		if ((((int32_t)L_8) <= ((int32_t)5)))
		{
			goto IL_004f;
		}
	}
	{
		// sequences.RemoveAt(0);
		List_1_tF88145309D90E96C94637CEE6C76DF92A4E8AA7F* L_9 = __this->___sequences_8;
		NullCheck(L_9);
		List_1_RemoveAt_m31C56A5163FA7F8AAFB67B4866F20C60FE7DED18(L_9, 0, List_1_RemoveAt_m31C56A5163FA7F8AAFB67B4866F20C60FE7DED18_RuntimeMethod_var);
	}

IL_004f:
	{
		// }
		return;
	}
}
// System.String HlsServer::get_Html()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HlsServer_get_Html_mC403306F60DAAD4033291A871106C4AF13AE4717 (HlsServer_tA907BA96BB7103CCBA09278E37D13C6BB9864400* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E617CA1F0B8FED4868367D2FE9CD0CA3C417403);
		s_Il2CppMethodInitialized = true;
	}
	{
		//             var body = @"
		// <script src=""https://cdn.jsdelivr.net/npm/hls.js@latest""></script>
		// <head>
		// <title> VideoCreator </title>
		// </ head >
		// <video id = ""video"" width = ""360"" height = ""240"" autoplay muted></video>
		// <script>
		//     var video = document.getElementById('video');
		//     var videoSrc = 'hls.m3u8';
		//     if (Hls.isSupported())
		//     {
		//         var hls = new Hls();
		//         hls.loadSource(videoSrc);
		//         hls.attachMedia(video);
		//     }
		//     else if (video.canPlayType('application/vnd.apple.mpegurl'))
		//     {
		//         video.src = videoSrc;
		//     }
		// </script>
		// ";
		// return body;
		return _stringLiteral3E617CA1F0B8FED4868367D2FE9CD0CA3C417403;
	}
}
// System.String HlsServer::get_M3U8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HlsServer_get_M3U8_mE708EDFC42FDE4666659BABED353648F3772F175 (HlsServer_tA907BA96BB7103CCBA09278E37D13C6BB9864400* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EF21E84294589A3D94AC0A938BBC3DC53C23E4B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BF2B472FE72751B79DF19DACB029743CC2CFBF1);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// var durationStr = "1.000";
		V_0 = _stringLiteral9BF2B472FE72751B79DF19DACB029743CC2CFBF1;
		//             string body = @$"#EXTM3U
		// #EXT-X-TARGETDURATION:1
		// #EXT-X-VERSION:9
		// #EXT-X-MEDIA-SEQUENCE:{sequence - 2}
		// #EXT-X-MAP:URI=""init.mp4""
		// #EXTINF:{durationStr},
		// files/sequence{sequence - 2}.m4s
		// #EXTINF:{durationStr},
		// files/sequence{sequence - 1}.m4s
		// #EXTINF:{durationStr},
		// files/sequence{sequence}.m4s";
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		int32_t L_2 = __this->___sequence_6;
		int32_t L_3 = ((int32_t)il2cpp_codegen_subtract(L_2, 2));
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_1;
		String_t* L_6 = V_0;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		int32_t L_8 = __this->___sequence_6;
		int32_t L_9 = ((int32_t)il2cpp_codegen_subtract(L_8, 2));
		RuntimeObject* L_10 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_7;
		String_t* L_12 = V_0;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_11;
		int32_t L_14 = __this->___sequence_6;
		int32_t L_15 = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_13;
		String_t* L_18 = V_0;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_18);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = L_17;
		int32_t L_20 = __this->___sequence_6;
		int32_t L_21 = L_20;
		RuntimeObject* L_22 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_21);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_22);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteral0EF21E84294589A3D94AC0A938BBC3DC53C23E4B, L_19, NULL);
		// return body;
		return L_23;
	}
}
// System.Void HlsServer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HlsServer__ctor_m24C6498796F6EBE109E2070D7C36031A18BDE802 (HlsServer_tA907BA96BB7103CCBA09278E37D13C6BB9864400* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpListener_t64CDB1E1A5227C151C7A271A8747DBC88EBC8F01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m4255D203B6AE5F17C8AE7DDCBF09A44DA12F2034_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF88145309D90E96C94637CEE6C76DF92A4E8AA7F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly HttpListener httpListener = new HttpListener();
		HttpListener_t64CDB1E1A5227C151C7A271A8747DBC88EBC8F01* L_0 = (HttpListener_t64CDB1E1A5227C151C7A271A8747DBC88EBC8F01*)il2cpp_codegen_object_new(HttpListener_t64CDB1E1A5227C151C7A271A8747DBC88EBC8F01_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		HttpListener__ctor_m16577B4C2A3E2D5CA19F2CB38EEEC6DE3DD70463(L_0, NULL);
		__this->___httpListener_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___httpListener_5), (void*)L_0);
		// private int sequence = -1;
		__this->___sequence_6 = (-1);
		// private readonly List<(int sequence, byte[] data)> sequences = new List<(int sequence, byte[] data)>();
		List_1_tF88145309D90E96C94637CEE6C76DF92A4E8AA7F* L_1 = (List_1_tF88145309D90E96C94637CEE6C76DF92A4E8AA7F*)il2cpp_codegen_object_new(List_1_tF88145309D90E96C94637CEE6C76DF92A4E8AA7F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m4255D203B6AE5F17C8AE7DDCBF09A44DA12F2034(L_1, List_1__ctor_m4255D203B6AE5F17C8AE7DDCBF09A44DA12F2034_RuntimeMethod_var);
		__this->___sequences_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sequences_8), (void*)L_1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void HlsServer/<Listen>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CListenU3Ed__5_MoveNext_m4B72445A6A5FF53E881D1683A341E0B82624FF45 (U3CListenU3Ed__5_t1A5103CF2B74AC0FE9019A69C9F3A37AC77A0891* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2E68D3DCE6F297E6D87BB498EABE5984B167C244_TisU3CListenU3Ed__5_t1A5103CF2B74AC0FE9019A69C9F3A37AC77A0891_m3EC557B6B0665752AC6E8402ADA3E52263484FAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m4E623469DBC622CCB30DE7E88C667BC22C283966_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mCA8E9C93BE8FE9E005F2DCE8BB2318C17A828753_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m06273776173B037954DB1617C708AAB1A91F95D7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	HlsServer_tA907BA96BB7103CCBA09278E37D13C6BB9864400* V_1 = NULL;
	HttpListenerContext_tCD5824B5A03F644280D1F171203A2A03F7377412* V_2 = NULL;
	TaskAwaiter_1_t2E68D3DCE6F297E6D87BB498EABE5984B167C244 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		HlsServer_tA907BA96BB7103CCBA09278E37D13C6BB9864400* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_004d_1;
			}
		}
		{
			goto IL_0078_1;
		}

IL_0013_1:
		{
			// var context = await httpListener.GetContextAsync();
			HlsServer_tA907BA96BB7103CCBA09278E37D13C6BB9864400* L_3 = V_1;
			NullCheck(L_3);
			HttpListener_t64CDB1E1A5227C151C7A271A8747DBC88EBC8F01* L_4 = L_3->___httpListener_5;
			NullCheck(L_4);
			Task_1_t7B1A2F201CBB48A5FE2574C4F589450D6731403D* L_5;
			L_5 = HttpListener_GetContextAsync_m839A198FEE991B0D94967BD12F51B88D70BD7AD0(L_4, NULL);
			NullCheck(L_5);
			TaskAwaiter_1_t2E68D3DCE6F297E6D87BB498EABE5984B167C244 L_6;
			L_6 = Task_1_GetAwaiter_m06273776173B037954DB1617C708AAB1A91F95D7(L_5, Task_1_GetAwaiter_m06273776173B037954DB1617C708AAB1A91F95D7_RuntimeMethod_var);
			V_3 = L_6;
			bool L_7;
			L_7 = TaskAwaiter_1_get_IsCompleted_mCA8E9C93BE8FE9E005F2DCE8BB2318C17A828753((&V_3), TaskAwaiter_1_get_IsCompleted_mCA8E9C93BE8FE9E005F2DCE8BB2318C17A828753_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_0069_1;
			}
		}
		{
			int32_t L_8 = 0;
			V_0 = L_8;
			__this->___U3CU3E1__state_0 = L_8;
			TaskAwaiter_1_t2E68D3DCE6F297E6D87BB498EABE5984B167C244 L_9 = V_3;
			__this->___U3CU3Eu__1_3 = L_9;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_10 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2E68D3DCE6F297E6D87BB498EABE5984B167C244_TisU3CListenU3Ed__5_t1A5103CF2B74AC0FE9019A69C9F3A37AC77A0891_m3EC557B6B0665752AC6E8402ADA3E52263484FAF(L_10, (&V_3), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2E68D3DCE6F297E6D87BB498EABE5984B167C244_TisU3CListenU3Ed__5_t1A5103CF2B74AC0FE9019A69C9F3A37AC77A0891_m3EC557B6B0665752AC6E8402ADA3E52263484FAF_RuntimeMethod_var);
			goto IL_00b3;
		}

IL_004d_1:
		{
			TaskAwaiter_1_t2E68D3DCE6F297E6D87BB498EABE5984B167C244 L_11 = __this->___U3CU3Eu__1_3;
			V_3 = L_11;
			TaskAwaiter_1_t2E68D3DCE6F297E6D87BB498EABE5984B167C244* L_12 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_12, sizeof(TaskAwaiter_1_t2E68D3DCE6F297E6D87BB498EABE5984B167C244));
			int32_t L_13 = (-1);
			V_0 = L_13;
			__this->___U3CU3E1__state_0 = L_13;
		}

IL_0069_1:
		{
			HttpListenerContext_tCD5824B5A03F644280D1F171203A2A03F7377412* L_14;
			L_14 = TaskAwaiter_1_GetResult_m4E623469DBC622CCB30DE7E88C667BC22C283966((&V_3), TaskAwaiter_1_GetResult_m4E623469DBC622CCB30DE7E88C667BC22C283966_RuntimeMethod_var);
			V_2 = L_14;
			// ProcessRequest(context);
			HlsServer_tA907BA96BB7103CCBA09278E37D13C6BB9864400* L_15 = V_1;
			HttpListenerContext_tCD5824B5A03F644280D1F171203A2A03F7377412* L_16 = V_2;
			NullCheck(L_15);
			HlsServer_ProcessRequest_mEAB88BECC368D9D6AF78C31DF84558391576BE42(L_15, L_16, NULL);
		}

IL_0078_1:
		{
			// while (httpListener.IsListening)
			HlsServer_tA907BA96BB7103CCBA09278E37D13C6BB9864400* L_17 = V_1;
			NullCheck(L_17);
			HttpListener_t64CDB1E1A5227C151C7A271A8747DBC88EBC8F01* L_18 = L_17->___httpListener_5;
			NullCheck(L_18);
			bool L_19;
			L_19 = HttpListener_get_IsListening_mC1F9EA4B9283855225AA2895C03DAA3E383D505C_inline(L_18, NULL);
			if (L_19)
			{
				goto IL_0013_1;
			}
		}
		{
			goto IL_00a0;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0087;
		}
		throw e;
	}

CATCH_0087:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_20 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_21 = V_4;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_20, L_21, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00b3;
	}// end catch (depth: 1)

IL_00a0:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_22 = (&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_22, NULL);
	}

IL_00b3:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CListenU3Ed__5_MoveNext_m4B72445A6A5FF53E881D1683A341E0B82624FF45_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CListenU3Ed__5_t1A5103CF2B74AC0FE9019A69C9F3A37AC77A0891* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CListenU3Ed__5_t1A5103CF2B74AC0FE9019A69C9F3A37AC77A0891*>(__this + _offset);
	U3CListenU3Ed__5_MoveNext_m4B72445A6A5FF53E881D1683A341E0B82624FF45(_thisAdjusted, method);
}
// System.Void HlsServer/<Listen>d__5::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CListenU3Ed__5_SetStateMachine_m9A1DA7530058D1E2AB4D2C95B8288983CE3D2C58 (U3CListenU3Ed__5_t1A5103CF2B74AC0FE9019A69C9F3A37AC77A0891* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CListenU3Ed__5_SetStateMachine_m9A1DA7530058D1E2AB4D2C95B8288983CE3D2C58_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CListenU3Ed__5_t1A5103CF2B74AC0FE9019A69C9F3A37AC77A0891* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CListenU3Ed__5_t1A5103CF2B74AC0FE9019A69C9F3A37AC77A0891*>(__this + _offset);
	U3CListenU3Ed__5_SetStateMachine_m9A1DA7530058D1E2AB4D2C95B8288983CE3D2C58(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.IEnumerator ImageSample::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ImageSample_Start_mE651A7756C91C596B0C1C9B70A5ECD420F446E8F (ImageSample_tEF6237A690E8F432E6662F4BE787C67762FF10E5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartU3Ed__1_tA0D84298332D91D319528B7493F7E68643340186_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartU3Ed__1_tA0D84298332D91D319528B7493F7E68643340186* L_0 = (U3CStartU3Ed__1_tA0D84298332D91D319528B7493F7E68643340186*)il2cpp_codegen_object_new(U3CStartU3Ed__1_tA0D84298332D91D319528B7493F7E68643340186_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CStartU3Ed__1__ctor_m29158B63A0DEB08D82E6B0CC5A46B8E82FED1E3A(L_0, 0, NULL);
		U3CStartU3Ed__1_tA0D84298332D91D319528B7493F7E68643340186* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void ImageSample::TakePng()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageSample_TakePng_m64BE02D2DAC84782312548407049DE3D2F5B2D41 (ImageSample_tEF6237A690E8F432E6662F4BE787C67762FF10E5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3833F7AEC492E9B13522CC39BB90E8300610029F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MediaSaver.SaveImage(texture, "png");
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = __this->___texture_4;
		MediaSaver_SaveImage_m74F2C109B13794850FA9B92944C7377DD763E4EE(L_0, _stringLiteral3833F7AEC492E9B13522CC39BB90E8300610029F, NULL);
		// }
		return;
	}
}
// System.Void ImageSample::TakeJpeg()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageSample_TakeJpeg_mEA41B40C05FCB8ACD1DE60337F51EDAC996F48FD (ImageSample_tEF6237A690E8F432E6662F4BE787C67762FF10E5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B5B4700DFFCE53FFB81288D310D59921A9F8493);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MediaSaver.SaveImage(texture, "jpeg");
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = __this->___texture_4;
		MediaSaver_SaveImage_m74F2C109B13794850FA9B92944C7377DD763E4EE(L_0, _stringLiteral3B5B4700DFFCE53FFB81288D310D59921A9F8493, NULL);
		// }
		return;
	}
}
// System.Void ImageSample::TakeHeif()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageSample_TakeHeif_m3B346D787B33D89244E7FEA0F3230CFBAF5FE594 (ImageSample_tEF6237A690E8F432E6662F4BE787C67762FF10E5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8B822DBFEE46FBF5CB3EC85801381D72B45367D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MediaSaver.SaveImage(texture, "heif");
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = __this->___texture_4;
		MediaSaver_SaveImage_m74F2C109B13794850FA9B92944C7377DD763E4EE(L_0, _stringLiteralE8B822DBFEE46FBF5CB3EC85801381D72B45367D, NULL);
		// }
		return;
	}
}
// System.Void ImageSample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageSample__ctor_m3609194AD534C95A601C2A8AD4D35FF7EA87F570 (ImageSample_tEF6237A690E8F432E6662F4BE787C67762FF10E5* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ImageSample/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m535CF80CEA386D5606AF53B70E6920A197AC7C02 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t09E14DD342CDB1E94E7BE5E5EF4040745D94AFCC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t09E14DD342CDB1E94E7BE5E5EF4040745D94AFCC* L_0 = (U3CU3Ec_t09E14DD342CDB1E94E7BE5E5EF4040745D94AFCC*)il2cpp_codegen_object_new(U3CU3Ec_t09E14DD342CDB1E94E7BE5E5EF4040745D94AFCC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mAFF73E14A118DC694A529356A16FC391E969D0DC(L_0, NULL);
		((U3CU3Ec_t09E14DD342CDB1E94E7BE5E5EF4040745D94AFCC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t09E14DD342CDB1E94E7BE5E5EF4040745D94AFCC_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t09E14DD342CDB1E94E7BE5E5EF4040745D94AFCC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t09E14DD342CDB1E94E7BE5E5EF4040745D94AFCC_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void ImageSample/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mAFF73E14A118DC694A529356A16FC391E969D0DC (U3CU3Ec_t09E14DD342CDB1E94E7BE5E5EF4040745D94AFCC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean ImageSample/<>c::<Start>b__1_0(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CStartU3Eb__1_0_mF3A557BC5EA5F7466B4C2B3874863A0DF4282580 (U3CU3Ec_t09E14DD342CDB1E94E7BE5E5EF4040745D94AFCC* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE325840393D6103BF8FC1AE7F93FD2447DE4A265);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var cameraObj = scene.GetRootGameObjects().First(obj => obj.name == "RecordingCamera");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_obj;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralE325840393D6103BF8FC1AE7F93FD2447DE4A265, NULL);
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
// System.Void ImageSample/<Start>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__1__ctor_m29158B63A0DEB08D82E6B0CC5A46B8E82FED1E3A (U3CStartU3Ed__1_tA0D84298332D91D319528B7493F7E68643340186* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void ImageSample/<Start>d__1::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__1_System_IDisposable_Dispose_m13CDF068D40FB1484869EC85BC87E20AF269A33E (U3CStartU3Ed__1_tA0D84298332D91D319528B7493F7E68643340186* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean ImageSample/<Start>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartU3Ed__1_MoveNext_m179B571C20A7CA46833A195368B189E05E8862FF (U3CStartU3Ed__1_tA0D84298332D91D319528B7493F7E68643340186* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_First_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m38F24F6829515308854F931277CF249C5CBC0E7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tD5855DA3DC1C614C29762075E12B0B72B8B1F51C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartU3Eb__1_0_mF3A557BC5EA5F7466B4C2B3874863A0DF4282580_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t09E14DD342CDB1E94E7BE5E5EF4040745D94AFCC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D77E1FA5EB8D34AD587C66E5BB1B2A71934D03D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60A2622AAE9547559E1D04B8A59B9361B25C22E0);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ImageSample_tEF6237A690E8F432E6662F4BE787C67762FF10E5* V_1 = NULL;
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* V_3 = NULL;
	Func_2_tD5855DA3DC1C614C29762075E12B0B72B8B1F51C* G_B9_0 = NULL;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* G_B9_1 = NULL;
	Func_2_tD5855DA3DC1C614C29762075E12B0B72B8B1F51C* G_B8_0 = NULL;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* G_B8_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ImageSample_tEF6237A690E8F432E6662F4BE787C67762FF10E5* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0048;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Application.targetFrameRate = 30;
		Application_set_targetFrameRate_mB90EEA60DAE55CD71C38D4B7DFDBE2B34EA6B46F(((int32_t)30), NULL);
		// AsyncOperation asyncLoad = SceneManager.LoadSceneAsync("Common", LoadSceneMode.Additive);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_4;
		L_4 = SceneManager_LoadSceneAsync_m29D55D2C6CB7A019B26DA3F44C0881FF6AC491EC(_stringLiteral60A2622AAE9547559E1D04B8A59B9361B25C22E0, 1, NULL);
		__this->___U3CasyncLoadU3E5__2_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CasyncLoadU3E5__2_3), (void*)L_4);
		goto IL_004f;
	}

IL_0038:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0048:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_004f:
	{
		// while (!asyncLoad.isDone)
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_5 = __this->___U3CasyncLoadU3E5__2_3;
		NullCheck(L_5);
		bool L_6;
		L_6 = AsyncOperation_get_isDone_m68A0682777E2132FC033182E9F50303566AA354D(L_5, NULL);
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		// Scene scene = SceneManager.GetSceneByName("Common");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_7;
		L_7 = SceneManager_GetSceneByName_m2A70CB2D1C586ED6747E82693785CA86F99FA9B9(_stringLiteral60A2622AAE9547559E1D04B8A59B9361B25C22E0, NULL);
		V_2 = L_7;
		// var cameraObj = scene.GetRootGameObjects().First(obj => obj.name == "RecordingCamera");
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_8;
		L_8 = Scene_GetRootGameObjects_mFDE0BF9EA926F30EC9AE71F33E0AE4D5D4EC5C5B((&V_2), NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t09E14DD342CDB1E94E7BE5E5EF4040745D94AFCC_il2cpp_TypeInfo_var);
		Func_2_tD5855DA3DC1C614C29762075E12B0B72B8B1F51C* L_9 = ((U3CU3Ec_t09E14DD342CDB1E94E7BE5E5EF4040745D94AFCC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t09E14DD342CDB1E94E7BE5E5EF4040745D94AFCC_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_1;
		Func_2_tD5855DA3DC1C614C29762075E12B0B72B8B1F51C* L_10 = L_9;
		G_B8_0 = L_10;
		G_B8_1 = L_8;
		if (L_10)
		{
			G_B9_0 = L_10;
			G_B9_1 = L_8;
			goto IL_008d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t09E14DD342CDB1E94E7BE5E5EF4040745D94AFCC_il2cpp_TypeInfo_var);
		U3CU3Ec_t09E14DD342CDB1E94E7BE5E5EF4040745D94AFCC* L_11 = ((U3CU3Ec_t09E14DD342CDB1E94E7BE5E5EF4040745D94AFCC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t09E14DD342CDB1E94E7BE5E5EF4040745D94AFCC_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tD5855DA3DC1C614C29762075E12B0B72B8B1F51C* L_12 = (Func_2_tD5855DA3DC1C614C29762075E12B0B72B8B1F51C*)il2cpp_codegen_object_new(Func_2_tD5855DA3DC1C614C29762075E12B0B72B8B1F51C_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Func_2__ctor_m9EDB1EDE49108C1136C6B0DD3DD5D2F843F5936E(L_12, L_11, (intptr_t)((void*)U3CU3Ec_U3CStartU3Eb__1_0_mF3A557BC5EA5F7466B4C2B3874863A0DF4282580_RuntimeMethod_var), NULL);
		Func_2_tD5855DA3DC1C614C29762075E12B0B72B8B1F51C* L_13 = L_12;
		((U3CU3Ec_t09E14DD342CDB1E94E7BE5E5EF4040745D94AFCC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t09E14DD342CDB1E94E7BE5E5EF4040745D94AFCC_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_1 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t09E14DD342CDB1E94E7BE5E5EF4040745D94AFCC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t09E14DD342CDB1E94E7BE5E5EF4040745D94AFCC_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_1), (void*)L_13);
		G_B9_0 = L_13;
		G_B9_1 = G_B8_1;
	}

IL_008d:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Enumerable_First_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m38F24F6829515308854F931277CF249C5CBC0E7E((RuntimeObject*)G_B9_1, G_B9_0, Enumerable_First_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m38F24F6829515308854F931277CF249C5CBC0E7E_RuntimeMethod_var);
		// var camera = cameraObj.GetComponent<Camera>();
		NullCheck(L_14);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_15;
		L_15 = GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6(L_14, GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6_RuntimeMethod_var);
		V_3 = L_15;
		// texture = camera.targetTexture;
		ImageSample_tEF6237A690E8F432E6662F4BE787C67762FF10E5* L_16 = V_1;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_17 = V_3;
		NullCheck(L_17);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_18;
		L_18 = Camera_get_targetTexture_mC856D7FF8351476068D04E245E4F08F5C56A55BD(L_17, NULL);
		NullCheck(L_16);
		L_16->___texture_4 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&L_16->___texture_4), (void*)L_18);
		// Debug.Log($"texture: {texture}");
		ImageSample_tEF6237A690E8F432E6662F4BE787C67762FF10E5* L_19 = V_1;
		NullCheck(L_19);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_20 = L_19->___texture_4;
		String_t* L_21;
		L_21 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral5D77E1FA5EB8D34AD587C66E5BB1B2A71934D03D, L_20, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_21, NULL);
		// }
		return (bool)0;
	}
}
// System.Object ImageSample/<Start>d__1::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartU3Ed__1_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4661E1FB48564323A17ADA618582F09093A4EF76 (U3CStartU3Ed__1_tA0D84298332D91D319528B7493F7E68643340186* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void ImageSample/<Start>d__1::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__1_System_Collections_IEnumerator_Reset_m9910BC80915185661BCB2DEABCDEC75931E50BFF (U3CStartU3Ed__1_tA0D84298332D91D319528B7493F7E68643340186* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartU3Ed__1_System_Collections_IEnumerator_Reset_m9910BC80915185661BCB2DEABCDEC75931E50BFF_RuntimeMethod_var)));
	}
}
// System.Object ImageSample/<Start>d__1::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartU3Ed__1_System_Collections_IEnumerator_get_Current_m0D9EB17AF4245949C72DC222F6B0B563E6B32FFB (U3CStartU3Ed__1_tA0D84298332D91D319528B7493F7E68643340186* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void LivePhotsSample::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LivePhotsSample_Start_m95964DAD7E48018860002971653A581328B708B6 (LivePhotsSample_tB672C2B983EAFBD7CEE8E821052C4B118A4A3F29* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4795A79F6F24DEF034533DEBDE661F34D2092C65);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60A2622AAE9547559E1D04B8A59B9361B25C22E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83FC2FCBE893CCAF9A5E4FEB29B98F1324611780);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Application.targetFrameRate = 30;
		Application_set_targetFrameRate_mB90EEA60DAE55CD71C38D4B7DFDBE2B34EA6B46F(((int32_t)30), NULL);
		// SceneManager.LoadScene("Common", LoadSceneMode.Additive);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m2841705C02C450E42A44B5EEE2A6A2C4261FA3AF(_stringLiteral60A2622AAE9547559E1D04B8A59B9361B25C22E0, 1, NULL);
		// cachePath = "file://" + Application.temporaryCachePath + "/tmp.mov";
		String_t* L_0;
		L_0 = Application_get_temporaryCachePath_mE4483A939988E69570C19F8B31AB9FB17B0FD97D(NULL);
		String_t* L_1;
		L_1 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA, L_0, _stringLiteral4795A79F6F24DEF034533DEBDE661F34D2092C65, NULL);
		__this->___cachePath_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cachePath_7), (void*)L_1);
		// Debug.Log($"cachePath: {cachePath}, {texture.width}x{texture.height}");
		String_t* L_2 = __this->___cachePath_7;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_3 = __this->___texture_4;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_3);
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_5);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_7 = __this->___texture_4;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_7);
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_9);
		String_t* L_11;
		L_11 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral83FC2FCBE893CCAF9A5E4FEB29B98F1324611780, L_2, L_6, L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_11, NULL);
		// }
		return;
	}
}
// System.Void LivePhotsSample::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LivePhotsSample_Update_m56FE2EEE2DAE31A3380BA1CC9EF76CB945114A1B (LivePhotsSample_tB672C2B983EAFBD7CEE8E821052C4B118A4A3F29* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98769C553CE355D263A8D46CD916587352847B45);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	{
		// if (!isRecording || !MediaCreator.IsRecording()) return;
		bool L_0 = __this->___isRecording_6;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		bool L_1;
		L_1 = MediaCreator_IsRecording_mC17CE0706006D1D86CB190C0D16F18B82ABCA4E4(NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}

IL_000f:
	{
		// if (!isRecording || !MediaCreator.IsRecording()) return;
		return;
	}

IL_0010:
	{
		// long time = (long)((Time.time - startTime) * 1_000_000) + startTimeOffset;
		float L_2;
		L_2 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_3 = __this->___startTime_9;
		int64_t L_4 = __this->___startTimeOffset_5;
		V_0 = ((int64_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int64_t>(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_2, L_3)), (1000000.0f)))), L_4));
		// Debug.Log($"write texture: {time}");
		int64_t L_5 = V_0;
		int64_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8;
		L_8 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral98769C553CE355D263A8D46CD916587352847B45, L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_8, NULL);
		// MediaCreator.WriteVideo(texture, time);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_9 = __this->___texture_4;
		int64_t L_10 = V_0;
		MediaCreator_WriteVideo_m45A87F553A4997213C3335858CFEA8D94B45DA29(L_9, L_10, NULL);
		// if (Time.time - startTime > 0.9) StopRec();
		float L_11;
		L_11 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_12 = __this->___startTime_9;
		if ((!(((double)((double)((float)il2cpp_codegen_subtract(L_11, L_12)))) > ((double)(0.90000000000000002)))))
		{
			goto IL_006a;
		}
	}
	{
		// if (Time.time - startTime > 0.9) StopRec();
		LivePhotsSample_StopRec_mB90E2F8B156BE9A942B31EC5DE843BAE6F928136(__this, NULL);
	}

IL_006a:
	{
		// }
		return;
	}
}
// System.Void LivePhotsSample::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LivePhotsSample_OnDestroy_m16272A2D1AF625701103946AEB86589950BD946F (LivePhotsSample_tB672C2B983EAFBD7CEE8E821052C4B118A4A3F29* __this, const RuntimeMethod* method) 
{
	{
		// StopRec();
		LivePhotsSample_StopRec_mB90E2F8B156BE9A942B31EC5DE843BAE6F928136(__this, NULL);
		// }
		return;
	}
}
// System.Void LivePhotsSample::StartRecLivePhotos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LivePhotsSample_StartRecLivePhotos_mCF7075D41A1CF4CF97DB6B3E7AB3D3039C22BB7F (LivePhotsSample_tB672C2B983EAFBD7CEE8E821052C4B118A4A3F29* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3AAD5EAE3E5377E06AE46457E724CA5BFEF82A);
		s_Il2CppMethodInitialized = true;
	}
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (isRecording) return;
		bool L_0 = __this->___isRecording_6;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (isRecording) return;
		return;
	}

IL_0009:
	{
		// uuid = System.Guid.NewGuid().ToString();
		Guid_t L_1;
		L_1 = Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD(NULL);
		V_0 = L_1;
		String_t* L_2;
		L_2 = Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C((&V_0), NULL);
		__this->___uuid_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___uuid_8), (void*)L_2);
		// MediaCreator.InitAsMovWithNoAudio(cachePath, "h264", texture.width, texture.height, uuid);
		String_t* L_3 = __this->___cachePath_7;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_4 = __this->___texture_4;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_4);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_6 = __this->___texture_4;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_6);
		String_t* L_8 = __this->___uuid_8;
		MediaCreator_InitAsMovWithNoAudio_mB1F8DC8FB83AAE5E311C571DE4806FA4F6052B43(L_3, _stringLiteral0C3AAD5EAE3E5377E06AE46457E724CA5BFEF82A, ((int64_t)L_5), ((int64_t)L_7), L_8, NULL);
		// MediaCreator.Start(startTimeOffset);
		int64_t L_9 = __this->___startTimeOffset_5;
		MediaCreator_Start_m1EC0961030105976024D6AB29986012EACC84E00(L_9, NULL);
		// startTime = Time.time;
		float L_10;
		L_10 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime_9 = L_10;
		// isRecording = true;
		__this->___isRecording_6 = (bool)1;
		// }
		return;
	}
}
// System.Void LivePhotsSample::StopRec()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LivePhotsSample_StopRec_mB90E2F8B156BE9A942B31EC5DE843BAE6F928136 (LivePhotsSample_tB672C2B983EAFBD7CEE8E821052C4B118A4A3F29* __this, const RuntimeMethod* method) 
{
	{
		// if (!isRecording) return;
		bool L_0 = __this->___isRecording_6;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!isRecording) return;
		return;
	}

IL_0009:
	{
		// MediaCreator.FinishSync();
		MediaCreator_FinishSync_m18727CE9C575F42B169A046071CF8957C9310B14(NULL);
		// MediaSaver.SaveLivePhotos(texture, uuid, cachePath);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_1 = __this->___texture_4;
		String_t* L_2 = __this->___uuid_8;
		String_t* L_3 = __this->___cachePath_7;
		MediaSaver_SaveLivePhotos_mB7FE75D507E486B3E8CC5E6BB17075A7A77C703B(L_1, L_2, L_3, NULL);
		// isRecording = false;
		__this->___isRecording_6 = (bool)0;
		// }
		return;
	}
}
// System.Void LivePhotsSample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LivePhotsSample__ctor_m54FEAA0F6E4CBC361ED4FEE071D60F0222498B28 (LivePhotsSample_tB672C2B983EAFBD7CEE8E821052C4B118A4A3F29* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly long startTimeOffset = 6_000_000;
		__this->___startTimeOffset_5 = ((int64_t)((int32_t)6000000));
		// private string cachePath = "";
		__this->___cachePath_7 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cachePath_7), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// private string uuid = "";
		__this->___uuid_8 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___uuid_8), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void MovSample::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovSample_Start_m9F33A70B5BF288980223BA21970803CD6EDAB5B7 (MovSample_t3E7C6F955219CECFCAF6529664C0FA9954109EDD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4795A79F6F24DEF034533DEBDE661F34D2092C65);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60A2622AAE9547559E1D04B8A59B9361B25C22E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83FC2FCBE893CCAF9A5E4FEB29B98F1324611780);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Application.targetFrameRate = fps;
		int32_t L_0 = __this->___fps_12;
		Application_set_targetFrameRate_mB90EEA60DAE55CD71C38D4B7DFDBE2B34EA6B46F(L_0, NULL);
		// SceneManager.LoadSceneAsync("Common", LoadSceneMode.Additive);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_1;
		L_1 = SceneManager_LoadSceneAsync_m29D55D2C6CB7A019B26DA3F44C0881FF6AC491EC(_stringLiteral60A2622AAE9547559E1D04B8A59B9361B25C22E0, 1, NULL);
		// audioSource.Stop();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->___audioSource_5;
		NullCheck(L_2);
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_2, NULL);
		// cachePath = "file://" + Application.temporaryCachePath + "/tmp.mov";
		String_t* L_3;
		L_3 = Application_get_temporaryCachePath_mE4483A939988E69570C19F8B31AB9FB17B0FD97D(NULL);
		String_t* L_4;
		L_4 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA, L_3, _stringLiteral4795A79F6F24DEF034533DEBDE661F34D2092C65, NULL);
		__this->___cachePath_9 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cachePath_9), (void*)L_4);
		// Debug.Log($"cachePath: {cachePath}, {texture.width}x{texture.height}");
		String_t* L_5 = __this->___cachePath_9;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_6 = __this->___texture_4;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_6);
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_8);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_10 = __this->___texture_4;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_10);
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_12);
		String_t* L_14;
		L_14 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral83FC2FCBE893CCAF9A5E4FEB29B98F1324611780, L_5, L_9, L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_14, NULL);
		// }
		return;
	}
}
// System.Void MovSample::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovSample_Update_m8A0AA51991422DE7021E0B67611CCE246F84FECC (MovSample_t3E7C6F955219CECFCAF6529664C0FA9954109EDD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98769C553CE355D263A8D46CD916587352847B45);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	{
		// if (!isRecording || !MediaCreator.IsRecording()) return;
		bool L_0 = __this->___isRecording_7;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		bool L_1;
		L_1 = MediaCreator_IsRecording_mC17CE0706006D1D86CB190C0D16F18B82ABCA4E4(NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}

IL_000f:
	{
		// if (!isRecording || !MediaCreator.IsRecording()) return;
		return;
	}

IL_0010:
	{
		// long time = (long)((Time.time - startTime) * 1_000_000) + startTimeOffset;
		float L_2;
		L_2 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_3 = __this->___startTime_10;
		int64_t L_4 = __this->___startTimeOffset_6;
		V_0 = ((int64_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int64_t>(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_2, L_3)), (1000000.0f)))), L_4));
		// Debug.Log($"write texture: {time}");
		int64_t L_5 = V_0;
		int64_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8;
		L_8 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral98769C553CE355D263A8D46CD916587352847B45, L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_8, NULL);
		// MediaCreator.WriteVideo(texture, time);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_9 = __this->___texture_4;
		int64_t L_10 = V_0;
		MediaCreator_WriteVideo_m45A87F553A4997213C3335858CFEA8D94B45DA29(L_9, L_10, NULL);
		// }
		return;
	}
}
// System.Void MovSample::OnAudioFilterRead(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovSample_OnAudioFilterRead_m84E610249CB436A86BA5295653781D01510A4A49 (MovSample_t3E7C6F955219CECFCAF6529664C0FA9954109EDD* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_data, int32_t ___1_channels, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// WriteAudio(data, channels);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___0_data;
		int32_t L_1 = ___1_channels;
		MovSample_WriteAudio_mCADCEF5C565D8449EF27AFD3EB3C6B60A8AA98A8(__this, L_0, L_1, NULL);
		// for (int i = 0; i < data.Length; i++)
		V_0 = 0;
		goto IL_0018;
	}

IL_000c:
	{
		// data[i] = 0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = ___0_data;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (float)(0.0f));
		// for (int i = 0; i < data.Length; i++)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0018:
	{
		// for (int i = 0; i < data.Length; i++)
		int32_t L_5 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = ___0_data;
		NullCheck(L_6);
		if ((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void MovSample::WriteAudio(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovSample_WriteAudio_mCADCEF5C565D8449EF27AFD3EB3C6B60A8AA98A8 (MovSample_t3E7C6F955219CECFCAF6529664C0FA9954109EDD* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_data, int32_t ___1_channels, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1EACC1AAB2AAA9C40A8E6675C763EFEDA177D44F);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	{
		// if (!isRecording || !recordAudio || !MediaCreator.IsRecording()) return;
		bool L_0 = __this->___isRecording_7;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		bool L_1 = __this->___recordAudio_8;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		bool L_2;
		L_2 = MediaCreator_IsRecording_mC17CE0706006D1D86CB190C0D16F18B82ABCA4E4(NULL);
		if (L_2)
		{
			goto IL_0018;
		}
	}

IL_0017:
	{
		// if (!isRecording || !recordAudio || !MediaCreator.IsRecording()) return;
		return;
	}

IL_0018:
	{
		// long time = (amountAudioFrame * 1_000_000 / 48_000) + startTimeOffset;
		int64_t L_3 = __this->___amountAudioFrame_11;
		int64_t L_4 = __this->___startTimeOffset_6;
		V_0 = ((int64_t)il2cpp_codegen_add(((int64_t)(((int64_t)il2cpp_codegen_multiply(L_3, ((int64_t)((int32_t)1000000))))/((int64_t)((int32_t)48000)))), L_4));
		// Debug.Log($"write audio: {time}");
		int64_t L_5 = V_0;
		int64_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8;
		L_8 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral1EACC1AAB2AAA9C40A8E6675C763EFEDA177D44F, L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_8, NULL);
		// MediaCreator.WriteAudio(data, time);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = ___0_data;
		int64_t L_10 = V_0;
		MediaCreator_WriteAudio_mD03BA182124B566301E7014CAA3737173F669721(L_9, L_10, NULL);
		// amountAudioFrame += data.Length;
		int64_t L_11 = __this->___amountAudioFrame_11;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_12 = ___0_data;
		NullCheck(L_12);
		__this->___amountAudioFrame_11 = ((int64_t)il2cpp_codegen_add(L_11, ((int64_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))));
		// }
		return;
	}
}
// System.Void MovSample::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovSample_OnDestroy_m702423CB8B4EE61187E776F5A7BB59FC28757DCF (MovSample_t3E7C6F955219CECFCAF6529664C0FA9954109EDD* __this, const RuntimeMethod* method) 
{
	{
		// StopRec();
		MovSample_StopRec_m9D6B5D07FC0D243433A4EF5C787E35779B65D9C5(__this, NULL);
		// }
		return;
	}
}
// System.Void MovSample::StartRecMovWithAudio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovSample_StartRecMovWithAudio_mAE7DF90E5D124643C1129C50016C8167A2BDD6AF (MovSample_t3E7C6F955219CECFCAF6529664C0FA9954109EDD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3AAD5EAE3E5377E06AE46457E724CA5BFEF82A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* V_0 = NULL;
	{
		// if (isRecording) return;
		bool L_0 = __this->___isRecording_7;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (isRecording) return;
		return;
	}

IL_0009:
	{
		// var clip = Microphone.Start(null, true, 1, 48_000);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1;
		L_1 = Microphone_Start_mDA38C5376D122F27D9DEFD2AE811BAE460F2242E((String_t*)NULL, (bool)1, 1, ((int32_t)48000), NULL);
		V_0 = L_1;
		// audioSource.clip = clip;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->___audioSource_5;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_3 = V_0;
		NullCheck(L_2);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_2, L_3, NULL);
		// audioSource.loop = true;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4 = __this->___audioSource_5;
		NullCheck(L_4);
		AudioSource_set_loop_m834A590939D8456008C0F897FD80B0ECFFB7FE56(L_4, (bool)1, NULL);
	}

IL_002f:
	{
		// while (Microphone.GetPosition(null) < 0) { }
		int32_t L_5;
		L_5 = Microphone_GetPosition_m13F4C8EBE8536893D9AD8388B0E5B46D62E6A459((String_t*)NULL, NULL);
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		// MediaCreator.InitAsMovWithAudio(cachePath, "h264", texture.width, texture.height, 1, 48_000);
		String_t* L_6 = __this->___cachePath_9;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_7 = __this->___texture_4;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_7);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_9 = __this->___texture_4;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_9);
		MediaCreator_InitAsMovWithAudio_mFCCB3B0D8F08E625A910B360FECC13578B8D66CD(L_6, _stringLiteral0C3AAD5EAE3E5377E06AE46457E724CA5BFEF82A, ((int64_t)L_8), ((int64_t)L_10), ((int64_t)1), (48000.0f), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		// MediaCreator.Start(startTimeOffset);
		int64_t L_11 = __this->___startTimeOffset_6;
		MediaCreator_Start_m1EC0961030105976024D6AB29986012EACC84E00(L_11, NULL);
		// startTime = Time.time;
		float L_12;
		L_12 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime_10 = L_12;
		// isRecording = true;
		__this->___isRecording_7 = (bool)1;
		// recordAudio = true;
		__this->___recordAudio_8 = (bool)1;
		// amountAudioFrame = 0;
		__this->___amountAudioFrame_11 = ((int64_t)0);
		// audioSource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_13 = __this->___audioSource_5;
		NullCheck(L_13);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_13, NULL);
		// }
		return;
	}
}
// System.Void MovSample::StartRecMovWithNoAudio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovSample_StartRecMovWithNoAudio_mE8993CEE813A4B6EA616E9EEAD0D88C36D045782 (MovSample_t3E7C6F955219CECFCAF6529664C0FA9954109EDD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3AAD5EAE3E5377E06AE46457E724CA5BFEF82A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isRecording) return;
		bool L_0 = __this->___isRecording_7;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (isRecording) return;
		return;
	}

IL_0009:
	{
		// MediaCreator.InitAsMovWithNoAudio(cachePath, "h264", texture.width, texture.height);
		String_t* L_1 = __this->___cachePath_9;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2 = __this->___texture_4;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_2);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_4 = __this->___texture_4;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_4);
		MediaCreator_InitAsMovWithNoAudio_mB1F8DC8FB83AAE5E311C571DE4806FA4F6052B43(L_1, _stringLiteral0C3AAD5EAE3E5377E06AE46457E724CA5BFEF82A, ((int64_t)L_3), ((int64_t)L_5), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		// MediaCreator.Start(startTimeOffset);
		int64_t L_6 = __this->___startTimeOffset_6;
		MediaCreator_Start_m1EC0961030105976024D6AB29986012EACC84E00(L_6, NULL);
		// startTime = Time.time;
		float L_7;
		L_7 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime_10 = L_7;
		// isRecording = true;
		__this->___isRecording_7 = (bool)1;
		// recordAudio = false;
		__this->___recordAudio_8 = (bool)0;
		// }
		return;
	}
}
// System.Void MovSample::StopRec()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovSample_StopRec_m9D6B5D07FC0D243433A4EF5C787E35779B65D9C5 (MovSample_t3E7C6F955219CECFCAF6529664C0FA9954109EDD* __this, const RuntimeMethod* method) 
{
	{
		// if (!isRecording) return;
		bool L_0 = __this->___isRecording_7;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!isRecording) return;
		return;
	}

IL_0009:
	{
		// audioSource.Stop();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = __this->___audioSource_5;
		NullCheck(L_1);
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_1, NULL);
		// Microphone.End(null);
		Microphone_End_mB368877FCC9EA1522914006671E637848A0F7CC6((String_t*)NULL, NULL);
		// MediaCreator.FinishSync();
		MediaCreator_FinishSync_m18727CE9C575F42B169A046071CF8957C9310B14(NULL);
		// MediaSaver.SaveVideo(cachePath);
		String_t* L_2 = __this->___cachePath_9;
		MediaSaver_SaveVideo_mBE8311DA6821EBE6F930A5994F3587E6C99665A7(L_2, NULL);
		// isRecording = false;
		__this->___isRecording_7 = (bool)0;
		// }
		return;
	}
}
// System.Void MovSample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovSample__ctor_m13322949B6D4D4F429582FC736DEF7B129C9B119 (MovSample_t3E7C6F955219CECFCAF6529664C0FA9954109EDD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly long startTimeOffset = 6_000_000;
		__this->___startTimeOffset_6 = ((int64_t)((int32_t)6000000));
		// private string cachePath = "";
		__this->___cachePath_9 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cachePath_9), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public int fps = 30;
		__this->___fps_12 = ((int32_t)30);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void VideoCreator.H264Streamer::Start(System.String,System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void H264Streamer_Start_m44C8835DE554915983402564CDCC1551320FD92E (String_t* ___0_url, int64_t ___1_width, int64_t ___2_height, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6FC8D85B901E1475B2AC83E120B3086644F00018);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("This platform is not supported.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral6FC8D85B901E1475B2AC83E120B3086644F00018, NULL);
		// }
		return;
	}
}
// System.Void VideoCreator.H264Streamer::Enqueue(UnityEngine.Texture,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void H264Streamer_Enqueue_m56AD9225151993CF16018B74B8771E0FA37F2B93 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_texture, int64_t ___1_microSec, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6FC8D85B901E1475B2AC83E120B3086644F00018);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("This platform is not supported.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral6FC8D85B901E1475B2AC83E120B3086644F00018, NULL);
		// }
		return;
	}
}
// System.Void VideoCreator.H264Streamer::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void H264Streamer_Close_mC73324144D6FB4D4D818EF91E1920857B691F038 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6FC8D85B901E1475B2AC83E120B3086644F00018);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("This platform is not supported.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral6FC8D85B901E1475B2AC83E120B3086644F00018, NULL);
		// }
		return;
	}
}
// System.Void VideoCreator.H264Streamer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void H264Streamer__ctor_m8F984B8454CB7AADC8F6E1AA27CF22E9FE21B58D (H264Streamer_t9CBF5E9FD96523B590AECD382062F761B2500328* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
extern "C" void CDECL ReversePInvokeWrapper_MediaCreator_OnSegmentDataCallback_m72988744F68CF206906341BA454F67217D13D708(intptr_t ___0_data, int64_t ___1_len)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	MediaCreator_OnSegmentDataCallback_m72988744F68CF206906341BA454F67217D13D708(___0_data, ___1_len, NULL);

}
// System.Void VideoCreator.MediaCreator::UnityMediaCreator_initAsMovWithNoAudio(System.String,System.String,System.Int64,System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaCreator_UnityMediaCreator_initAsMovWithNoAudio_m73CCCF4E877565A82B6E9159D24B04A994DE0205 (String_t* ___0_url, String_t* ___1_codec, int64_t ___2_width, int64_t ___3_height, String_t* ___4_contentIdentifier, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*, int64_t, int64_t, char*);

	// Marshaling of parameter '___0_url' to native representation
	char* ____0_url_marshaled = NULL;
	____0_url_marshaled = il2cpp_codegen_marshal_string(___0_url);

	// Marshaling of parameter '___1_codec' to native representation
	char* ____1_codec_marshaled = NULL;
	____1_codec_marshaled = il2cpp_codegen_marshal_string(___1_codec);

	// Marshaling of parameter '___4_contentIdentifier' to native representation
	char* ____4_contentIdentifier_marshaled = NULL;
	____4_contentIdentifier_marshaled = il2cpp_codegen_marshal_string(___4_contentIdentifier);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityMediaCreator_initAsMovWithNoAudio)(____0_url_marshaled, ____1_codec_marshaled, ___2_width, ___3_height, ____4_contentIdentifier_marshaled);

	// Marshaling cleanup of parameter '___0_url' native representation
	il2cpp_codegen_marshal_free(____0_url_marshaled);
	____0_url_marshaled = NULL;

	// Marshaling cleanup of parameter '___1_codec' native representation
	il2cpp_codegen_marshal_free(____1_codec_marshaled);
	____1_codec_marshaled = NULL;

	// Marshaling cleanup of parameter '___4_contentIdentifier' native representation
	il2cpp_codegen_marshal_free(____4_contentIdentifier_marshaled);
	____4_contentIdentifier_marshaled = NULL;

}
// System.Void VideoCreator.MediaCreator::UnityMediaCreator_initAsMovWithAudio(System.String,System.String,System.Int64,System.Int64,System.Int64,System.Single,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaCreator_UnityMediaCreator_initAsMovWithAudio_m7EADDE0CBCB27AB7014E2659BC768CE55894AEE5 (String_t* ___0_url, String_t* ___1_codec, int64_t ___2_width, int64_t ___3_height, int64_t ___4_channel, float ___5_samplingRate, String_t* ___6_contentIdentifier, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*, int64_t, int64_t, int64_t, float, char*);

	// Marshaling of parameter '___0_url' to native representation
	char* ____0_url_marshaled = NULL;
	____0_url_marshaled = il2cpp_codegen_marshal_string(___0_url);

	// Marshaling of parameter '___1_codec' to native representation
	char* ____1_codec_marshaled = NULL;
	____1_codec_marshaled = il2cpp_codegen_marshal_string(___1_codec);

	// Marshaling of parameter '___6_contentIdentifier' to native representation
	char* ____6_contentIdentifier_marshaled = NULL;
	____6_contentIdentifier_marshaled = il2cpp_codegen_marshal_string(___6_contentIdentifier);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityMediaCreator_initAsMovWithAudio)(____0_url_marshaled, ____1_codec_marshaled, ___2_width, ___3_height, ___4_channel, ___5_samplingRate, ____6_contentIdentifier_marshaled);

	// Marshaling cleanup of parameter '___0_url' native representation
	il2cpp_codegen_marshal_free(____0_url_marshaled);
	____0_url_marshaled = NULL;

	// Marshaling cleanup of parameter '___1_codec' native representation
	il2cpp_codegen_marshal_free(____1_codec_marshaled);
	____1_codec_marshaled = NULL;

	// Marshaling cleanup of parameter '___6_contentIdentifier' native representation
	il2cpp_codegen_marshal_free(____6_contentIdentifier_marshaled);
	____6_contentIdentifier_marshaled = NULL;

}
// System.Void VideoCreator.MediaCreator::UnityMediaCreator_initAsWav(System.String,System.Int64,System.Single,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaCreator_UnityMediaCreator_initAsWav_mFFC5AC7740398874C458F5C377DB4B97829E9199 (String_t* ___0_url, int64_t ___1_channel, float ___2_samplingRate, int64_t ___3_bitDepth, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int64_t, float, int64_t);

	// Marshaling of parameter '___0_url' to native representation
	char* ____0_url_marshaled = NULL;
	____0_url_marshaled = il2cpp_codegen_marshal_string(___0_url);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityMediaCreator_initAsWav)(____0_url_marshaled, ___1_channel, ___2_samplingRate, ___3_bitDepth);

	// Marshaling cleanup of parameter '___0_url' native representation
	il2cpp_codegen_marshal_free(____0_url_marshaled);
	____0_url_marshaled = NULL;

}
// System.Void VideoCreator.MediaCreator::UnityMediaCreator_initAsHlsWithNoAudio(System.String,System.String,System.Int64,System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaCreator_UnityMediaCreator_initAsHlsWithNoAudio_m4520B537811EBF1B036595355A86FF3F151DE570 (String_t* ___0_url, String_t* ___1_codec, int64_t ___2_width, int64_t ___3_height, int64_t ___4_segmentDurationMicroSec, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*, int64_t, int64_t, int64_t);

	// Marshaling of parameter '___0_url' to native representation
	char* ____0_url_marshaled = NULL;
	____0_url_marshaled = il2cpp_codegen_marshal_string(___0_url);

	// Marshaling of parameter '___1_codec' to native representation
	char* ____1_codec_marshaled = NULL;
	____1_codec_marshaled = il2cpp_codegen_marshal_string(___1_codec);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityMediaCreator_initAsHlsWithNoAudio)(____0_url_marshaled, ____1_codec_marshaled, ___2_width, ___3_height, ___4_segmentDurationMicroSec);

	// Marshaling cleanup of parameter '___0_url' native representation
	il2cpp_codegen_marshal_free(____0_url_marshaled);
	____0_url_marshaled = NULL;

	// Marshaling cleanup of parameter '___1_codec' native representation
	il2cpp_codegen_marshal_free(____1_codec_marshaled);
	____1_codec_marshaled = NULL;

}
// System.Void VideoCreator.MediaCreator::UnityMediaCreator_setOnSegmentData(VideoCreator.MediaCreator/UnityMediaCreator_setOnSegmentData_delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaCreator_UnityMediaCreator_setOnSegmentData_mEAA0F389E5C5947D58D78BC28B68C560D96CE139 (UnityMediaCreator_setOnSegmentData_delegate_tCE3B71DFB24ADDB8E286DEF8B4AE0E5B847BA2B7* ___0_handler, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___0_handler' to native representation
	Il2CppMethodPointer ____0_handler_marshaled = NULL;
	____0_handler_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___0_handler));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityMediaCreator_setOnSegmentData)(____0_handler_marshaled);

}
// System.Void VideoCreator.MediaCreator::UnityMediaCreator_start(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaCreator_UnityMediaCreator_start_m8E82572899E696B67EC528C89DD9D478E0094FC3 (int64_t ___0_microSec, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int64_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityMediaCreator_start)(___0_microSec);

}
// System.Void VideoCreator.MediaCreator::UnityMediaCreator_finishSync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaCreator_UnityMediaCreator_finishSync_m29571C3550CC5BCD5E44AE569A976D3C60AB5936 (const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityMediaCreator_finishSync)();

}
// System.Boolean VideoCreator.MediaCreator::UnityMediaCreator_isRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MediaCreator_UnityMediaCreator_isRecording_mD3D9AC1580E915FB6B7F92B9024396BDA5B62BCF (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityMediaCreator_isRecording)();

	return static_cast<bool>(returnValue);
}
// System.Void VideoCreator.MediaCreator::UnityMediaCreator_writeVideo(System.IntPtr,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaCreator_UnityMediaCreator_writeVideo_m782E476EB379F5E24DB861EF1539B0A4F29E2840 (intptr_t ___0_texturePtr, int64_t ___1_microSec, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, int64_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityMediaCreator_writeVideo)(___0_texturePtr, ___1_microSec);

}
// System.Void VideoCreator.MediaCreator::UnityMediaCreator_writeAudio(System.Single[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaCreator_UnityMediaCreator_writeAudio_m7B2744A566FCF90FF5BA27E4C4E458F080A44F56 (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_pcm, int64_t ___1_frame, int64_t ___2_microSec, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (float*, int64_t, int64_t);

	// Marshaling of parameter '___0_pcm' to native representation
	float* ____0_pcm_marshaled = NULL;
	if (___0_pcm != NULL)
	{
		____0_pcm_marshaled = reinterpret_cast<float*>((___0_pcm)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityMediaCreator_writeAudio)(____0_pcm_marshaled, ___1_frame, ___2_microSec);

}
// System.Void VideoCreator.MediaCreator::InitAsMovWithNoAudio(System.String,System.String,System.Int64,System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaCreator_InitAsMovWithNoAudio_mB1F8DC8FB83AAE5E311C571DE4806FA4F6052B43 (String_t* ___0_url, String_t* ___1_codec, int64_t ___2_width, int64_t ___3_height, String_t* ___4_contentIdentifier, const RuntimeMethod* method) 
{
	{
		// UnityMediaCreator_initAsMovWithNoAudio(url, codec, width, height, contentIdentifier);
		String_t* L_0 = ___0_url;
		String_t* L_1 = ___1_codec;
		int64_t L_2 = ___2_width;
		int64_t L_3 = ___3_height;
		String_t* L_4 = ___4_contentIdentifier;
		MediaCreator_UnityMediaCreator_initAsMovWithNoAudio_m73CCCF4E877565A82B6E9159D24B04A994DE0205(L_0, L_1, L_2, L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void VideoCreator.MediaCreator::InitAsMovWithAudio(System.String,System.String,System.Int64,System.Int64,System.Int64,System.Single,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaCreator_InitAsMovWithAudio_mFCCB3B0D8F08E625A910B360FECC13578B8D66CD (String_t* ___0_url, String_t* ___1_codec, int64_t ___2_width, int64_t ___3_height, int64_t ___4_channel, float ___5_samplingRate, String_t* ___6_contentIdentifier, const RuntimeMethod* method) 
{
	{
		// UnityMediaCreator_initAsMovWithAudio(url, codec, width, height, channel, samplingRate, contentIdentifier);
		String_t* L_0 = ___0_url;
		String_t* L_1 = ___1_codec;
		int64_t L_2 = ___2_width;
		int64_t L_3 = ___3_height;
		int64_t L_4 = ___4_channel;
		float L_5 = ___5_samplingRate;
		String_t* L_6 = ___6_contentIdentifier;
		MediaCreator_UnityMediaCreator_initAsMovWithAudio_m7EADDE0CBCB27AB7014E2659BC768CE55894AEE5(L_0, L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void VideoCreator.MediaCreator::InitAsWav(System.String,System.Int64,System.Single,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaCreator_InitAsWav_m472956D41C3C2092C830940247A6689365F7ABF4 (String_t* ___0_url, int64_t ___1_channel, float ___2_samplingRate, int64_t ___3_bitDepth, const RuntimeMethod* method) 
{
	{
		// UnityMediaCreator_initAsWav(url, channel, samplingRate, bitDepth);
		String_t* L_0 = ___0_url;
		int64_t L_1 = ___1_channel;
		float L_2 = ___2_samplingRate;
		int64_t L_3 = ___3_bitDepth;
		MediaCreator_UnityMediaCreator_initAsWav_mFFC5AC7740398874C458F5C377DB4B97829E9199(L_0, L_1, L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void VideoCreator.MediaCreator::InitAsHlsWithNoAudio(System.String,System.String,System.Int64,System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaCreator_InitAsHlsWithNoAudio_m86CEF407F110E4A3428E2944E28BEDECD43B0EA5 (String_t* ___0_url, String_t* ___1_codec, int64_t ___2_width, int64_t ___3_height, int64_t ___4_segmentDurationMicroSec, const RuntimeMethod* method) 
{
	{
		// UnityMediaCreator_initAsHlsWithNoAudio(url, codec, width, height, segmentDurationMicroSec);
		String_t* L_0 = ___0_url;
		String_t* L_1 = ___1_codec;
		int64_t L_2 = ___2_width;
		int64_t L_3 = ___3_height;
		int64_t L_4 = ___4_segmentDurationMicroSec;
		MediaCreator_UnityMediaCreator_initAsHlsWithNoAudio_m4520B537811EBF1B036595355A86FF3F151DE570(L_0, L_1, L_2, L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void VideoCreator.MediaCreator::Start(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaCreator_Start_m1EC0961030105976024D6AB29986012EACC84E00 (int64_t ___0_microSec, const RuntimeMethod* method) 
{
	{
		// UnityMediaCreator_start(microSec);
		int64_t L_0 = ___0_microSec;
		MediaCreator_UnityMediaCreator_start_m8E82572899E696B67EC528C89DD9D478E0094FC3(L_0, NULL);
		// }
		return;
	}
}
// System.Void VideoCreator.MediaCreator::OnSegmentDataCallback(System.IntPtr,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaCreator_OnSegmentDataCallback_m72988744F68CF206906341BA454F67217D13D708 (intptr_t ___0_data, int64_t ___1_len, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MediaCreator_OnSegmentDataCallback_m72988744F68CF206906341BA454F67217D13D708_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MediaCreator_tC4FC5D37813942FAD35708E170E68E9885658216_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// byte[] result = new byte[len];
		int64_t L_0 = ___1_len;
		if ((int64_t)(L_0) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), MediaCreator_OnSegmentDataCallback_m72988744F68CF206906341BA454F67217D13D708_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((intptr_t)L_0));
		V_0 = L_1;
		// Marshal.Copy(data, result, 0, (int)len);
		intptr_t L_2 = ___0_data;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		int64_t L_4 = ___1_len;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_Copy_mF7402FFDB520EA1B8D1C32B368DBEE4B13F1BE77(L_2, L_3, 0, ((int32_t)L_4), NULL);
		// onSegmentDataAction(result);
		Action_1_t300D9A559311CF7D2AE5D29B63E8C4DE0D49BCD8* L_5 = ((MediaCreator_tC4FC5D37813942FAD35708E170E68E9885658216_StaticFields*)il2cpp_codegen_static_fields_for(MediaCreator_tC4FC5D37813942FAD35708E170E68E9885658216_il2cpp_TypeInfo_var))->___onSegmentDataAction_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		NullCheck(L_5);
		Action_1_Invoke_m7B78C4449D43643629C94054D9354AA39696C0F8_inline(L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void VideoCreator.MediaCreator::SetOnSegmentDataAction(System.Action`1<System.Byte[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaCreator_SetOnSegmentDataAction_m81F897D07A7C8F14C58A4373B4CEE5EA70D812C7 (Action_1_t300D9A559311CF7D2AE5D29B63E8C4DE0D49BCD8* ___0_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MediaCreator_OnSegmentDataCallback_m72988744F68CF206906341BA454F67217D13D708_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MediaCreator_tC4FC5D37813942FAD35708E170E68E9885658216_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMediaCreator_setOnSegmentData_delegate_tCE3B71DFB24ADDB8E286DEF8B4AE0E5B847BA2B7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// onSegmentDataAction = action;
		Action_1_t300D9A559311CF7D2AE5D29B63E8C4DE0D49BCD8* L_0 = ___0_action;
		((MediaCreator_tC4FC5D37813942FAD35708E170E68E9885658216_StaticFields*)il2cpp_codegen_static_fields_for(MediaCreator_tC4FC5D37813942FAD35708E170E68E9885658216_il2cpp_TypeInfo_var))->___onSegmentDataAction_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((MediaCreator_tC4FC5D37813942FAD35708E170E68E9885658216_StaticFields*)il2cpp_codegen_static_fields_for(MediaCreator_tC4FC5D37813942FAD35708E170E68E9885658216_il2cpp_TypeInfo_var))->___onSegmentDataAction_0), (void*)L_0);
		// UnityMediaCreator_setOnSegmentData(OnSegmentDataCallback);
		UnityMediaCreator_setOnSegmentData_delegate_tCE3B71DFB24ADDB8E286DEF8B4AE0E5B847BA2B7* L_1 = (UnityMediaCreator_setOnSegmentData_delegate_tCE3B71DFB24ADDB8E286DEF8B4AE0E5B847BA2B7*)il2cpp_codegen_object_new(UnityMediaCreator_setOnSegmentData_delegate_tCE3B71DFB24ADDB8E286DEF8B4AE0E5B847BA2B7_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityMediaCreator_setOnSegmentData_delegate__ctor_m854824DA119D7BF5121A9BCCE24BCB8D873FE768(L_1, NULL, (intptr_t)((void*)MediaCreator_OnSegmentDataCallback_m72988744F68CF206906341BA454F67217D13D708_RuntimeMethod_var), NULL);
		MediaCreator_UnityMediaCreator_setOnSegmentData_mEAA0F389E5C5947D58D78BC28B68C560D96CE139(L_1, NULL);
		// }
		return;
	}
}
// System.Void VideoCreator.MediaCreator::FinishSync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaCreator_FinishSync_m18727CE9C575F42B169A046071CF8957C9310B14 (const RuntimeMethod* method) 
{
	{
		// UnityMediaCreator_finishSync();
		MediaCreator_UnityMediaCreator_finishSync_m29571C3550CC5BCD5E44AE569A976D3C60AB5936(NULL);
		// }
		return;
	}
}
// System.Boolean VideoCreator.MediaCreator::IsRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MediaCreator_IsRecording_mC17CE0706006D1D86CB190C0D16F18B82ABCA4E4 (const RuntimeMethod* method) 
{
	{
		// return UnityMediaCreator_isRecording();
		bool L_0;
		L_0 = MediaCreator_UnityMediaCreator_isRecording_mD3D9AC1580E915FB6B7F92B9024396BDA5B62BCF(NULL);
		return L_0;
	}
}
// System.Void VideoCreator.MediaCreator::WriteVideo(UnityEngine.Texture,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaCreator_WriteVideo_m45A87F553A4997213C3335858CFEA8D94B45DA29 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_texture, int64_t ___1_microSec, const RuntimeMethod* method) 
{
	{
		// UnityMediaCreator_writeVideo(texture.GetNativeTexturePtr(), microSec);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = ___0_texture;
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = Texture_GetNativeTexturePtr_mD3019CC9461338665885D431B86C03D3063867EE(L_0, NULL);
		int64_t L_2 = ___1_microSec;
		MediaCreator_UnityMediaCreator_writeVideo_m782E476EB379F5E24DB861EF1539B0A4F29E2840(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void VideoCreator.MediaCreator::WriteAudio(System.Single[],System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaCreator_WriteAudio_mD03BA182124B566301E7014CAA3737173F669721 (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_pcm, int64_t ___1_microSec, const RuntimeMethod* method) 
{
	{
		// UnityMediaCreator_writeAudio(pcm, pcm.Length, microSec);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___0_pcm;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = ___0_pcm;
		NullCheck(L_1);
		int64_t L_2 = ___1_microSec;
		MediaCreator_UnityMediaCreator_writeAudio_m7B2744A566FCF90FF5BA27E4C4E458F080A44F56(L_0, ((int64_t)((int32_t)(((RuntimeArray*)L_1)->max_length))), L_2, NULL);
		// }
		return;
	}
}
// System.Void VideoCreator.MediaCreator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaCreator__ctor_m882ED2DA11524D4F40F63F0A272D279052D691E6 (MediaCreator_tC4FC5D37813942FAD35708E170E68E9885658216* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
void UnityMediaCreator_setOnSegmentData_delegate_Invoke_mC642C02E3050D760E15BE89EDFD73BD13AC35739_Multicast(UnityMediaCreator_setOnSegmentData_delegate_tCE3B71DFB24ADDB8E286DEF8B4AE0E5B847BA2B7* __this, intptr_t ___0_data, int64_t ___1_len, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		UnityMediaCreator_setOnSegmentData_delegate_tCE3B71DFB24ADDB8E286DEF8B4AE0E5B847BA2B7* currentDelegate = reinterpret_cast<UnityMediaCreator_setOnSegmentData_delegate_tCE3B71DFB24ADDB8E286DEF8B4AE0E5B847BA2B7*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int64_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_data, ___1_len, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void UnityMediaCreator_setOnSegmentData_delegate_Invoke_mC642C02E3050D760E15BE89EDFD73BD13AC35739_OpenInst(UnityMediaCreator_setOnSegmentData_delegate_tCE3B71DFB24ADDB8E286DEF8B4AE0E5B847BA2B7* __this, intptr_t ___0_data, int64_t ___1_len, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, int64_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_data, ___1_len, method);
}
void UnityMediaCreator_setOnSegmentData_delegate_Invoke_mC642C02E3050D760E15BE89EDFD73BD13AC35739_OpenStatic(UnityMediaCreator_setOnSegmentData_delegate_tCE3B71DFB24ADDB8E286DEF8B4AE0E5B847BA2B7* __this, intptr_t ___0_data, int64_t ___1_len, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, int64_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_data, ___1_len, method);
}
void UnityMediaCreator_setOnSegmentData_delegate_Invoke_mC642C02E3050D760E15BE89EDFD73BD13AC35739_OpenStaticInvoker(UnityMediaCreator_setOnSegmentData_delegate_tCE3B71DFB24ADDB8E286DEF8B4AE0E5B847BA2B7* __this, intptr_t ___0_data, int64_t ___1_len, const RuntimeMethod* method)
{
	InvokerActionInvoker2< intptr_t, int64_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_data, ___1_len);
}
void UnityMediaCreator_setOnSegmentData_delegate_Invoke_mC642C02E3050D760E15BE89EDFD73BD13AC35739_ClosedStaticInvoker(UnityMediaCreator_setOnSegmentData_delegate_tCE3B71DFB24ADDB8E286DEF8B4AE0E5B847BA2B7* __this, intptr_t ___0_data, int64_t ___1_len, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, intptr_t, int64_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_data, ___1_len);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_UnityMediaCreator_setOnSegmentData_delegate_tCE3B71DFB24ADDB8E286DEF8B4AE0E5B847BA2B7 (UnityMediaCreator_setOnSegmentData_delegate_tCE3B71DFB24ADDB8E286DEF8B4AE0E5B847BA2B7* __this, intptr_t ___0_data, int64_t ___1_len, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, int64_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_data, ___1_len);

}
// System.Void VideoCreator.MediaCreator/UnityMediaCreator_setOnSegmentData_delegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMediaCreator_setOnSegmentData_delegate__ctor_m854824DA119D7BF5121A9BCCE24BCB8D873FE768 (UnityMediaCreator_setOnSegmentData_delegate_tCE3B71DFB24ADDB8E286DEF8B4AE0E5B847BA2B7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&UnityMediaCreator_setOnSegmentData_delegate_Invoke_mC642C02E3050D760E15BE89EDFD73BD13AC35739_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&UnityMediaCreator_setOnSegmentData_delegate_Invoke_mC642C02E3050D760E15BE89EDFD73BD13AC35739_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&UnityMediaCreator_setOnSegmentData_delegate_Invoke_mC642C02E3050D760E15BE89EDFD73BD13AC35739_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&UnityMediaCreator_setOnSegmentData_delegate_Invoke_mC642C02E3050D760E15BE89EDFD73BD13AC35739_Multicast;
}
// System.Void VideoCreator.MediaCreator/UnityMediaCreator_setOnSegmentData_delegate::Invoke(System.IntPtr,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMediaCreator_setOnSegmentData_delegate_Invoke_mC642C02E3050D760E15BE89EDFD73BD13AC35739 (UnityMediaCreator_setOnSegmentData_delegate_tCE3B71DFB24ADDB8E286DEF8B4AE0E5B847BA2B7* __this, intptr_t ___0_data, int64_t ___1_len, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int64_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_data, ___1_len, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult VideoCreator.MediaCreator/UnityMediaCreator_setOnSegmentData_delegate::BeginInvoke(System.IntPtr,System.Int64,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityMediaCreator_setOnSegmentData_delegate_BeginInvoke_mA9C673B63C429E056B6119E35E1C5BB6236AAFD4 (UnityMediaCreator_setOnSegmentData_delegate_tCE3B71DFB24ADDB8E286DEF8B4AE0E5B847BA2B7* __this, intptr_t ___0_data, int64_t ___1_len, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___0_data);
	__d_args[1] = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &___1_len);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Void VideoCreator.MediaCreator/UnityMediaCreator_setOnSegmentData_delegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMediaCreator_setOnSegmentData_delegate_EndInvoke_mA1430FAE4D1591AA37E07452EA3C84DD747D8CBC (UnityMediaCreator_setOnSegmentData_delegate_tCE3B71DFB24ADDB8E286DEF8B4AE0E5B847BA2B7* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VideoCreator.MediaSaver::UnityMediaSaver_saveVideo(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaSaver_UnityMediaSaver_saveVideo_m7C4413DDE5651AE5BA21E2CE69653E822835660C (String_t* ___0_url, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___0_url' to native representation
	char* ____0_url_marshaled = NULL;
	____0_url_marshaled = il2cpp_codegen_marshal_string(___0_url);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityMediaSaver_saveVideo)(____0_url_marshaled);

	// Marshaling cleanup of parameter '___0_url' native representation
	il2cpp_codegen_marshal_free(____0_url_marshaled);
	____0_url_marshaled = NULL;

}
// System.Void VideoCreator.MediaSaver::UnityMediaSaver_saveLivePhotos(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaSaver_UnityMediaSaver_saveLivePhotos_m3A8F583D574578A2BD737D7994B6DAA42616B79D (intptr_t ___0_texturePtr, String_t* ___1_contentIdentifier, String_t* ___2_url, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*, char*);

	// Marshaling of parameter '___1_contentIdentifier' to native representation
	char* ____1_contentIdentifier_marshaled = NULL;
	____1_contentIdentifier_marshaled = il2cpp_codegen_marshal_string(___1_contentIdentifier);

	// Marshaling of parameter '___2_url' to native representation
	char* ____2_url_marshaled = NULL;
	____2_url_marshaled = il2cpp_codegen_marshal_string(___2_url);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityMediaSaver_saveLivePhotos)(___0_texturePtr, ____1_contentIdentifier_marshaled, ____2_url_marshaled);

	// Marshaling cleanup of parameter '___1_contentIdentifier' native representation
	il2cpp_codegen_marshal_free(____1_contentIdentifier_marshaled);
	____1_contentIdentifier_marshaled = NULL;

	// Marshaling cleanup of parameter '___2_url' native representation
	il2cpp_codegen_marshal_free(____2_url_marshaled);
	____2_url_marshaled = NULL;

}
// System.Void VideoCreator.MediaSaver::UnityMediaSaver_saveImage(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaSaver_UnityMediaSaver_saveImage_mE9C02BF47E4E118D5F62DE1BA606BDD3885C1162 (intptr_t ___0_texturePtr, String_t* ___1_type, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*);

	// Marshaling of parameter '___1_type' to native representation
	char* ____1_type_marshaled = NULL;
	____1_type_marshaled = il2cpp_codegen_marshal_string(___1_type);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityMediaSaver_saveImage)(___0_texturePtr, ____1_type_marshaled);

	// Marshaling cleanup of parameter '___1_type' native representation
	il2cpp_codegen_marshal_free(____1_type_marshaled);
	____1_type_marshaled = NULL;

}
// System.Void VideoCreator.MediaSaver::SaveVideo(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaSaver_SaveVideo_mBE8311DA6821EBE6F930A5994F3587E6C99665A7 (String_t* ___0_url, const RuntimeMethod* method) 
{
	{
		// UnityMediaSaver_saveVideo(url);
		String_t* L_0 = ___0_url;
		MediaSaver_UnityMediaSaver_saveVideo_m7C4413DDE5651AE5BA21E2CE69653E822835660C(L_0, NULL);
		// }
		return;
	}
}
// System.Void VideoCreator.MediaSaver::SaveLivePhotos(UnityEngine.Texture,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaSaver_SaveLivePhotos_mB7FE75D507E486B3E8CC5E6BB17075A7A77C703B (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_texture, String_t* ___1_contentIdentifier, String_t* ___2_url, const RuntimeMethod* method) 
{
	{
		// UnityMediaSaver_saveLivePhotos(texture.GetNativeTexturePtr(), contentIdentifier, url);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = ___0_texture;
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = Texture_GetNativeTexturePtr_mD3019CC9461338665885D431B86C03D3063867EE(L_0, NULL);
		String_t* L_2 = ___1_contentIdentifier;
		String_t* L_3 = ___2_url;
		MediaSaver_UnityMediaSaver_saveLivePhotos_m3A8F583D574578A2BD737D7994B6DAA42616B79D(L_1, L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void VideoCreator.MediaSaver::SaveImage(UnityEngine.Texture,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaSaver_SaveImage_m74F2C109B13794850FA9B92944C7377DD763E4EE (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_texture, String_t* ___1_type, const RuntimeMethod* method) 
{
	{
		// UnityMediaSaver_saveImage(texture.GetNativeTexturePtr(), type);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = ___0_texture;
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = Texture_GetNativeTexturePtr_mD3019CC9461338665885D431B86C03D3063867EE(L_0, NULL);
		String_t* L_2 = ___1_type;
		MediaSaver_UnityMediaSaver_saveImage_mE9C02BF47E4E118D5F62DE1BA606BDD3885C1162(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void VideoCreator.MediaSaver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaSaver__ctor_m1D3340CD8AC40B42E087674A340F3CB6CAF9F4DF (MediaSaver_t9DC461C8D024C41DFBF7086E8103B70BC4710BB3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// UnityEngine.XR.ARFoundation.AROcclusionManager UnityEngine.XR.ARFoundation.Samples.DepthManager::get_occlusionManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AROcclusionManager_t9EDE9F76050AF892E2AC6704D0F76EDAC370609D* DepthManager_get_occlusionManager_m10C7AB8657D9B67EBACE92BBC0857E00ED66F356 (DepthManager_t844D33D06E2618F752DF8065710556E6051B435C* __this, const RuntimeMethod* method) 
{
	{
		// get => m_OcclusionManager;
		AROcclusionManager_t9EDE9F76050AF892E2AC6704D0F76EDAC370609D* L_0 = __this->___m_OcclusionManager_16;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.DepthManager::set_occlusionManager(UnityEngine.XR.ARFoundation.AROcclusionManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthManager_set_occlusionManager_mF693718A4A2DCEC05C88F6078BEEE7F30F0665CA (DepthManager_t844D33D06E2618F752DF8065710556E6051B435C* __this, AROcclusionManager_t9EDE9F76050AF892E2AC6704D0F76EDAC370609D* ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_OcclusionManager = value;
		AROcclusionManager_t9EDE9F76050AF892E2AC6704D0F76EDAC370609D* L_0 = ___0_value;
		__this->___m_OcclusionManager_16 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OcclusionManager_16), (void*)L_0);
		return;
	}
}
// UnityEngine.XR.ARFoundation.ARCameraManager UnityEngine.XR.ARFoundation.Samples.DepthManager::get_cameraManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* DepthManager_get_cameraManager_mF9059CC8515509F12498B49F8B008645597DB773 (DepthManager_t844D33D06E2618F752DF8065710556E6051B435C* __this, const RuntimeMethod* method) 
{
	{
		// get => m_CameraManager;
		ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* L_0 = __this->___m_CameraManager_17;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.DepthManager::set_cameraManager(UnityEngine.XR.ARFoundation.ARCameraManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthManager_set_cameraManager_m8FD7607CF6298D778B671EFA4A81177E706ECA9B (DepthManager_t844D33D06E2618F752DF8065710556E6051B435C* __this, ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_CameraManager = value;
		ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* L_0 = ___0_value;
		__this->___m_CameraManager_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CameraManager_17), (void*)L_0);
		return;
	}
}
// UnityEngine.UI.RawImage UnityEngine.XR.ARFoundation.Samples.DepthManager::get_rawImage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* DepthManager_get_rawImage_m72B0CD7002D21B382A92FDBB9FD522790CDE2089 (DepthManager_t844D33D06E2618F752DF8065710556E6051B435C* __this, const RuntimeMethod* method) 
{
	{
		// get => m_RawImage;
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_0 = __this->___m_RawImage_18;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.DepthManager::set_rawImage(UnityEngine.UI.RawImage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthManager_set_rawImage_m7B62A270538DD09866627D5044F1BD1F67E65273 (DepthManager_t844D33D06E2618F752DF8065710556E6051B435C* __this, RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_RawImage = value;
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_0 = ___0_value;
		__this->___m_RawImage_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_RawImage_18), (void*)L_0);
		return;
	}
}
// UnityEngine.UI.Text UnityEngine.XR.ARFoundation.Samples.DepthManager::get_imageInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* DepthManager_get_imageInfo_m7DBCF5182B94E71736643310FF9FAF1E1A7065AC (DepthManager_t844D33D06E2618F752DF8065710556E6051B435C* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ImageInfo;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___m_ImageInfo_19;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.DepthManager::set_imageInfo(UnityEngine.UI.Text)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthManager_set_imageInfo_m21B2B9A55C637F3A4EDA4DE3A2BBEF784AB34A63 (DepthManager_t844D33D06E2618F752DF8065710556E6051B435C* __this, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_ImageInfo = value;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = ___0_value;
		__this->___m_ImageInfo_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ImageInfo_19), (void*)L_0);
		return;
	}
}
// UnityEngine.Material UnityEngine.XR.ARFoundation.Samples.DepthManager::get_depthMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* DepthManager_get_depthMaterial_m3472FCE760812720761AC0DD694F5B765E5B37BE (DepthManager_t844D33D06E2618F752DF8065710556E6051B435C* __this, const RuntimeMethod* method) 
{
	{
		// get => m_DepthMaterial;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___m_DepthMaterial_20;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.DepthManager::set_depthMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthManager_set_depthMaterial_m8273186759380A101B2A8A3E0D38164D26968187 (DepthManager_t844D33D06E2618F752DF8065710556E6051B435C* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_DepthMaterial = value;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ___0_value;
		__this->___m_DepthMaterial_20 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DepthMaterial_20), (void*)L_0);
		return;
	}
}
// UnityEngine.Material UnityEngine.XR.ARFoundation.Samples.DepthManager::get_stencilMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* DepthManager_get_stencilMaterial_mF39903F4EAC5D27D5566B9FD57865CAD888DB45D (DepthManager_t844D33D06E2618F752DF8065710556E6051B435C* __this, const RuntimeMethod* method) 
{
	{
		// get => m_StencilMaterial;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___m_StencilMaterial_21;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.DepthManager::set_stencilMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthManager_set_stencilMaterial_m79DE9BACEE0DF5C45714BBC4BC84208E8C2F03B1 (DepthManager_t844D33D06E2618F752DF8065710556E6051B435C* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_StencilMaterial = value;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ___0_value;
		__this->___m_StencilMaterial_21 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_StencilMaterial_21), (void*)L_0);
		return;
	}
}
// System.Single UnityEngine.XR.ARFoundation.Samples.DepthManager::get_maxEnvironmentDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DepthManager_get_maxEnvironmentDistance_mB96FDA7B00B213FFB4EE0E8BE3305C6FE975CC70 (DepthManager_t844D33D06E2618F752DF8065710556E6051B435C* __this, const RuntimeMethod* method) 
{
	{
		// get => m_MaxEnvironmentDistance;
		float L_0 = __this->___m_MaxEnvironmentDistance_22;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.DepthManager::set_maxEnvironmentDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthManager_set_maxEnvironmentDistance_m29F0AE1F55DC0D41166CAF311CDB64542ACE5A4C (DepthManager_t844D33D06E2618F752DF8065710556E6051B435C* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_MaxEnvironmentDistance = value;
		float L_0 = ___0_value;
		__this->___m_MaxEnvironmentDistance_22 = L_0;
		return;
	}
}
// System.Single UnityEngine.XR.ARFoundation.Samples.DepthManager::get_maxHumanDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DepthManager_get_maxHumanDistance_mFE4E3AA4965EC0502F9930C685B4DE8F8378C532 (DepthManager_t844D33D06E2618F752DF8065710556E6051B435C* __this, const RuntimeMethod* method) 
{
	{
		// get => m_MaxHumanDistance;
		float L_0 = __this->___m_MaxHumanDistance_23;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.DepthManager::set_maxHumanDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthManager_set_maxHumanDistance_m2FF287BFA6C96065F212BC6043A67E9DBF4CE185 (DepthManager_t844D33D06E2618F752DF8065710556E6051B435C* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_MaxHumanDistance = value;
		float L_0 = ___0_value;
		__this->___m_MaxHumanDistance_23 = L_0;
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.DepthManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthManager_Awake_m6642F2563D28CB822A0404D76FA76E9AD4357D13 (DepthManager_t844D33D06E2618F752DF8065710556E6051B435C* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.DepthManager::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthManager_OnEnable_m5550C8B4A2757F3580CFDD215CEED8F03A5E8735 (DepthManager_t844D33D06E2618F752DF8065710556E6051B435C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthManager_OnCameraFrameEventReceived_m5E7E39367B099C34CC05562BA4681882ECFA16A4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_CameraManager.frameReceived += OnCameraFrameEventReceived;
		ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* L_0 = __this->___m_CameraManager_17;
		Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735* L_1 = (Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735*)il2cpp_codegen_object_new(Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_mDFD48034EFC4DF74EEB44B18C74DD7BAF391814E(L_1, __this, (intptr_t)((void*)DepthManager_OnCameraFrameEventReceived_m5E7E39367B099C34CC05562BA4681882ECFA16A4_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		ARCameraManager_add_frameReceived_mB30CD73DB7A25A6E7BC486BA289DBB99CBA3B7A1(L_0, L_1, NULL);
		// m_DisplayRotationMatrix = Matrix4x4.identity;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_2;
		L_2 = Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline(NULL);
		__this->___m_DisplayRotationMatrix_15 = L_2;
		// m_CurrentScreenOrientation = Screen.orientation;
		int32_t L_3;
		L_3 = Screen_get_orientation_mA6B22A441187D50831B2B18CA48A8F64BD1BD89E(NULL);
		__this->___m_CurrentScreenOrientation_12 = L_3;
		// UpdateRawImage();
		DepthManager_UpdateRawImage_m2CE512103AB9EF145227965EFB6501D54FC4396C(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.DepthManager::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthManager_OnDisable_m735EA6A3E93B88345DDA4FE46ACA590FB51ECB5A (DepthManager_t844D33D06E2618F752DF8065710556E6051B435C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthManager_OnCameraFrameEventReceived_m5E7E39367B099C34CC05562BA4681882ECFA16A4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_CameraManager.frameReceived -= OnCameraFrameEventReceived;
		ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* L_0 = __this->___m_CameraManager_17;
		Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735* L_1 = (Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735*)il2cpp_codegen_object_new(Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_mDFD48034EFC4DF74EEB44B18C74DD7BAF391814E(L_1, __this, (intptr_t)((void*)DepthManager_OnCameraFrameEventReceived_m5E7E39367B099C34CC05562BA4681882ECFA16A4_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		ARCameraManager_remove_frameReceived_m8D9C301201B5079323169510656821F0286AA67D(L_0, L_1, NULL);
		// m_DisplayRotationMatrix = Matrix4x4.identity;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_2;
		L_2 = Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline(NULL);
		__this->___m_DisplayRotationMatrix_15 = L_2;
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.DepthManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthManager_Update_m773953B351FA30DD9CF34CCF1F5591FD78AB051B (DepthManager_t844D33D06E2618F752DF8065710556E6051B435C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_3_get_descriptor_mFCC2B929205B70121157536075F522DF0476AAB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral537FFA4677C3012810F3AAAC6D89BB2919ADD36F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral559CB0B38B3B278B8D6BD7435BA5F03B501E2555);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA88B25D4A56D146C6C0EBC6F8736BE9FC45CB875);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC055DB97A8CB945C23D5BE817C4D23CB04DB040F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE194554FBBE094E6BB2F4ED40B7F7BBDB26F4A96);
		s_Il2CppMethodInitialized = true;
	}
	XROcclusionSubsystemDescriptor_t25944D13CC0A207D206577F9A91D445526B4930F* V_0 = NULL;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_1 = NULL;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_2 = NULL;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_3 = NULL;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_4 = NULL;
	float V_5 = 0.0f;
	int32_t V_6 = 0;
	float G_B31_0 = 0.0f;
	{
		// var descriptor = m_OcclusionManager.descriptor;
		AROcclusionManager_t9EDE9F76050AF892E2AC6704D0F76EDAC370609D* L_0 = __this->___m_OcclusionManager_16;
		NullCheck(L_0);
		XROcclusionSubsystemDescriptor_t25944D13CC0A207D206577F9A91D445526B4930F* L_1;
		L_1 = SubsystemLifecycleManager_3_get_descriptor_mFCC2B929205B70121157536075F522DF0476AAB9(L_0, SubsystemLifecycleManager_3_get_descriptor_mFCC2B929205B70121157536075F522DF0476AAB9_RuntimeMethod_var);
		V_0 = L_1;
		// Texture2D humanStencil = m_OcclusionManager.humanStencilTexture;
		AROcclusionManager_t9EDE9F76050AF892E2AC6704D0F76EDAC370609D* L_2 = __this->___m_OcclusionManager_16;
		NullCheck(L_2);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_3;
		L_3 = AROcclusionManager_get_humanStencilTexture_m4F81CA6ABBFE6326872B0545E826766F58ADC86F(L_2, NULL);
		V_1 = L_3;
		// Texture2D humanDepth = m_OcclusionManager.humanDepthTexture;
		AROcclusionManager_t9EDE9F76050AF892E2AC6704D0F76EDAC370609D* L_4 = __this->___m_OcclusionManager_16;
		NullCheck(L_4);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_5;
		L_5 = AROcclusionManager_get_humanDepthTexture_mF9B84E503E3B394AAE1544B07BD3BEB1FE3EFEDB(L_4, NULL);
		V_2 = L_5;
		// Texture2D envDepth = m_OcclusionManager.environmentDepthTexture;
		AROcclusionManager_t9EDE9F76050AF892E2AC6704D0F76EDAC370609D* L_6 = __this->___m_OcclusionManager_16;
		NullCheck(L_6);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_7;
		L_7 = AROcclusionManager_get_environmentDepthTexture_m8D961A8DB1023D5B4340A2020C51D75A21C5D454(L_6, NULL);
		V_3 = L_7;
		// switch (m_DisplayMode)
		int32_t L_8 = __this->___m_DisplayMode_14;
		V_6 = L_8;
		int32_t L_9 = V_6;
		if ((!(((uint32_t)L_9) > ((uint32_t)1))))
		{
			goto IL_00ba;
		}
	}
	{
		int32_t L_10 = V_6;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_10, 2))) <= ((uint32_t)1))))
		{
			goto IL_00ba;
		}
	}
	{
		// if (descriptor != null &&
		//     (descriptor.humanSegmentationDepthImageSupported == Supported.Supported ||
		//     descriptor.humanSegmentationStencilImageSupported == Supported.Supported))
		XROcclusionSubsystemDescriptor_t25944D13CC0A207D206577F9A91D445526B4930F* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005f;
		}
	}
	{
		XROcclusionSubsystemDescriptor_t25944D13CC0A207D206577F9A91D445526B4930F* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = XROcclusionSubsystemDescriptor_get_humanSegmentationDepthImageSupported_m4B58731FE66946A339E57D07B4970286F3FAC61C(L_12, NULL);
		if ((((int32_t)L_13) == ((int32_t)2)))
		{
			goto IL_0137;
		}
	}
	{
		XROcclusionSubsystemDescriptor_t25944D13CC0A207D206577F9A91D445526B4930F* L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = XROcclusionSubsystemDescriptor_get_humanSegmentationStencilImageSupported_mFD38298D6EE716F04F941DDC4970DE420C19BEC8(L_14, NULL);
		if ((((int32_t)L_15) == ((int32_t)2)))
		{
			goto IL_0137;
		}
	}

IL_005f:
	{
		// if (descriptor != null &&
		//     (descriptor.humanSegmentationStencilImageSupported == Supported.Unknown ||
		//      descriptor.humanSegmentationDepthImageSupported == Supported.Unknown))
		XROcclusionSubsystemDescriptor_t25944D13CC0A207D206577F9A91D445526B4930F* L_16 = V_0;
		if (!L_16)
		{
			goto IL_007f;
		}
	}
	{
		XROcclusionSubsystemDescriptor_t25944D13CC0A207D206577F9A91D445526B4930F* L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = XROcclusionSubsystemDescriptor_get_humanSegmentationStencilImageSupported_mFD38298D6EE716F04F941DDC4970DE420C19BEC8(L_17, NULL);
		if (!L_18)
		{
			goto IL_0072;
		}
	}
	{
		XROcclusionSubsystemDescriptor_t25944D13CC0A207D206577F9A91D445526B4930F* L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = XROcclusionSubsystemDescriptor_get_humanSegmentationDepthImageSupported_m4B58731FE66946A339E57D07B4970286F3FAC61C(L_19, NULL);
		if (L_20)
		{
			goto IL_007f;
		}
	}

IL_0072:
	{
		// LogText("Determining human segmentation support...");
		DepthManager_LogText_mFB6D2CC5F1C734002DD7721018519273370C1E6C(__this, _stringLiteralE194554FBBE094E6BB2F4ED40B7F7BBDB26F4A96, NULL);
		goto IL_008a;
	}

IL_007f:
	{
		// LogText("Human segmentation is not supported on this device.");
		DepthManager_LogText_mFB6D2CC5F1C734002DD7721018519273370C1E6C(__this, _stringLiteralC055DB97A8CB945C23D5BE817C4D23CB04DB040F, NULL);
	}

IL_008a:
	{
		// m_RawImage.texture = null;
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_21 = __this->___m_RawImage_18;
		NullCheck(L_21);
		RawImage_set_texture_mC016318C95CC17A826D57DD219DBCB6DFD295C02(L_21, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)NULL, NULL);
		// if (!Mathf.Approximately(m_TextureAspectRatio, k_DefaultTextureAspectRadio))
		float L_22 = __this->___m_TextureAspectRatio_13;
		bool L_23;
		L_23 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_22, (1.0f), NULL);
		if (L_23)
		{
			goto IL_00b9;
		}
	}
	{
		// m_TextureAspectRatio = k_DefaultTextureAspectRadio;
		__this->___m_TextureAspectRatio_13 = (1.0f);
		// UpdateRawImage();
		DepthManager_UpdateRawImage_m2CE512103AB9EF145227965EFB6501D54FC4396C(__this, NULL);
	}

IL_00b9:
	{
		// return;
		return;
	}

IL_00ba:
	{
		// if (descriptor == null || descriptor.environmentDepthImageSupported == Supported.Unsupported)
		XROcclusionSubsystemDescriptor_t25944D13CC0A207D206577F9A91D445526B4930F* L_24 = V_0;
		if (!L_24)
		{
			goto IL_00c6;
		}
	}
	{
		XROcclusionSubsystemDescriptor_t25944D13CC0A207D206577F9A91D445526B4930F* L_25 = V_0;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = XROcclusionSubsystemDescriptor_get_environmentDepthImageSupported_mCD6A87F2AE78B41341FABE82E85BB0331CF8433A(L_25, NULL);
		if ((!(((uint32_t)L_26) == ((uint32_t)1))))
		{
			goto IL_00d3;
		}
	}

IL_00c6:
	{
		// LogText("Environment depth is not supported on this device.");
		DepthManager_LogText_mFB6D2CC5F1C734002DD7721018519273370C1E6C(__this, _stringLiteral559CB0B38B3B278B8D6BD7435BA5F03B501E2555, NULL);
		goto IL_0107;
	}

IL_00d3:
	{
		// else if (descriptor.environmentDepthImageSupported == Supported.Unknown)
		XROcclusionSubsystemDescriptor_t25944D13CC0A207D206577F9A91D445526B4930F* L_27 = V_0;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = XROcclusionSubsystemDescriptor_get_environmentDepthImageSupported_mCD6A87F2AE78B41341FABE82E85BB0331CF8433A(L_27, NULL);
		if (L_28)
		{
			goto IL_00e8;
		}
	}
	{
		// LogText("Determining environment depth support...");
		DepthManager_LogText_mFB6D2CC5F1C734002DD7721018519273370C1E6C(__this, _stringLiteralA88B25D4A56D146C6C0EBC6F8736BE9FC45CB875, NULL);
		goto IL_0107;
	}

IL_00e8:
	{
		// else if (descriptor.environmentDepthImageSupported == Supported.Supported)
		XROcclusionSubsystemDescriptor_t25944D13CC0A207D206577F9A91D445526B4930F* L_29 = V_0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = XROcclusionSubsystemDescriptor_get_environmentDepthImageSupported_mCD6A87F2AE78B41341FABE82E85BB0331CF8433A(L_29, NULL);
		if ((!(((uint32_t)L_30) == ((uint32_t)2))))
		{
			goto IL_0107;
		}
	}
	{
		// m_OcclusionManager.environmentDepthTemporalSmoothingRequested = m_DisplayMode == DisplayMode.EnvironmentDepthSmooth;
		AROcclusionManager_t9EDE9F76050AF892E2AC6704D0F76EDAC370609D* L_31 = __this->___m_OcclusionManager_16;
		int32_t L_32 = __this->___m_DisplayMode_14;
		NullCheck(L_31);
		AROcclusionManager_set_environmentDepthTemporalSmoothingRequested_m3E5C48FEB03F83D916D060B8F6940006EC2FB621(L_31, (bool)((((int32_t)L_32) == ((int32_t)1))? 1 : 0), NULL);
		// break;
		goto IL_0137;
	}

IL_0107:
	{
		// m_RawImage.texture = null;
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_33 = __this->___m_RawImage_18;
		NullCheck(L_33);
		RawImage_set_texture_mC016318C95CC17A826D57DD219DBCB6DFD295C02(L_33, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)NULL, NULL);
		// if (!Mathf.Approximately(m_TextureAspectRatio, k_DefaultTextureAspectRadio))
		float L_34 = __this->___m_TextureAspectRatio_13;
		bool L_35;
		L_35 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_34, (1.0f), NULL);
		if (L_35)
		{
			goto IL_0136;
		}
	}
	{
		// m_TextureAspectRatio = k_DefaultTextureAspectRadio;
		__this->___m_TextureAspectRatio_13 = (1.0f);
		// UpdateRawImage();
		DepthManager_UpdateRawImage_m2CE512103AB9EF145227965EFB6501D54FC4396C(__this, NULL);
	}

IL_0136:
	{
		// return;
		return;
	}

IL_0137:
	{
		// m_StringBuilder.Clear();
		StringBuilder_t* L_36 = __this->___m_StringBuilder_11;
		NullCheck(L_36);
		StringBuilder_t* L_37;
		L_37 = StringBuilder_Clear_m2D76F6533574F40A4E3E2DC4E730277CBD0AF8F6(L_36, NULL);
		// BuildTextureInfo(m_StringBuilder, "env", envDepth);
		StringBuilder_t* L_38 = __this->___m_StringBuilder_11;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_39 = V_3;
		DepthManager_BuildTextureInfo_mFB4498349184DB8A99896FE1728CA254864CC2BE(__this, L_38, _stringLiteral537FFA4677C3012810F3AAAC6D89BB2919ADD36F, L_39, NULL);
		// LogText(m_StringBuilder.ToString());
		StringBuilder_t* L_40 = __this->___m_StringBuilder_11;
		NullCheck(L_40);
		String_t* L_41;
		L_41 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_40);
		DepthManager_LogText_mFB6D2CC5F1C734002DD7721018519273370C1E6C(__this, L_41, NULL);
		// switch (m_DisplayMode)
		int32_t L_42 = __this->___m_DisplayMode_14;
		V_6 = L_42;
		int32_t L_43 = V_6;
		switch (L_43)
		{
			case 0:
			{
				goto IL_0191;
			}
			case 1:
			{
				goto IL_0191;
			}
			case 2:
			{
				goto IL_018c;
			}
			case 3:
			{
				goto IL_0187;
			}
		}
	}
	{
		goto IL_0191;
	}

IL_0187:
	{
		// displayTexture = humanStencil;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_44 = V_1;
		V_4 = L_44;
		// break;
		goto IL_0194;
	}

IL_018c:
	{
		// displayTexture = humanDepth;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_45 = V_2;
		V_4 = L_45;
		// break;
		goto IL_0194;
	}

IL_0191:
	{
		// displayTexture = envDepth;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_46 = V_3;
		V_4 = L_46;
	}

IL_0194:
	{
		// m_RawImage.texture = displayTexture;
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_47 = __this->___m_RawImage_18;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_48 = V_4;
		NullCheck(L_47);
		RawImage_set_texture_mC016318C95CC17A826D57DD219DBCB6DFD295C02(L_47, L_48, NULL);
		// print_depth((Texture2D)m_RawImage.texture);
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_49 = __this->___m_RawImage_18;
		NullCheck(L_49);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_50;
		L_50 = RawImage_get_texture_m84CCFDF78F6886F73EBE5A7C78D6E9C3CA903813_inline(L_49, NULL);
		DepthManager_print_depth_m9042901E0ADB0A36962AD0DED4BD1F72BF71E5C1(__this, ((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)CastclassSealed((RuntimeObject*)L_50, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var)), NULL);
		// float textureAspectRatio = (displayTexture == null) ? 1.0f : ((float)displayTexture.height/ (float)displayTexture.width);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_51 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_52;
		L_52 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_51, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_52)
		{
			goto IL_01d4;
		}
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_53 = V_4;
		NullCheck(L_53);
		int32_t L_54;
		L_54 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_53);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_55 = V_4;
		NullCheck(L_55);
		int32_t L_56;
		L_56 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_55);
		G_B31_0 = ((float)(((float)L_54)/((float)L_56)));
		goto IL_01d9;
	}

IL_01d4:
	{
		G_B31_0 = (1.0f);
	}

IL_01d9:
	{
		V_5 = G_B31_0;
		// if ((m_CurrentScreenOrientation != Screen.orientation)
		//     || !Mathf.Approximately(m_TextureAspectRatio, textureAspectRatio))
		int32_t L_57 = __this->___m_CurrentScreenOrientation_12;
		int32_t L_58;
		L_58 = Screen_get_orientation_mA6B22A441187D50831B2B18CA48A8F64BD1BD89E(NULL);
		if ((!(((uint32_t)L_57) == ((uint32_t)L_58))))
		{
			goto IL_01f7;
		}
	}
	{
		float L_59 = __this->___m_TextureAspectRatio_13;
		float L_60 = V_5;
		bool L_61;
		L_61 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_59, L_60, NULL);
		if (L_61)
		{
			goto IL_0210;
		}
	}

IL_01f7:
	{
		// m_CurrentScreenOrientation = Screen.orientation;
		int32_t L_62;
		L_62 = Screen_get_orientation_mA6B22A441187D50831B2B18CA48A8F64BD1BD89E(NULL);
		__this->___m_CurrentScreenOrientation_12 = L_62;
		// m_TextureAspectRatio = textureAspectRatio;
		float L_63 = V_5;
		__this->___m_TextureAspectRatio_13 = L_63;
		// UpdateRawImage();
		DepthManager_UpdateRawImage_m2CE512103AB9EF145227965EFB6501D54FC4396C(__this, NULL);
	}

IL_0210:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.DepthManager::OnCameraFrameEventReceived(UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthManager_OnCameraFrameEventReceived_m5E7E39367B099C34CC05562BA4681882ECFA16A4 (DepthManager_t844D33D06E2618F752DF8065710556E6051B435C* __this, ARCameraFrameEventArgs_t4060608C37C2B7248AFC908876309CC36D53E0EC ___0_cameraFrameEventArgs, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthManager_t844D33D06E2618F752DF8065710556E6051B435C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m8FE543F7461F1646151BD30E8B67831C4D527343_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m02B13D9F8C2777CA6CCA386F24619C7A4CC97515_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA V_4;
	memset((&V_4), 0, sizeof(V_4));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	{
		// if (m_RawImage.material != null)
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_0 = __this->___m_RawImage_18;
		NullCheck(L_0);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1;
		L_1 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_0);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0167;
		}
	}
	{
		// Matrix4x4 cameraMatrix = cameraFrameEventArgs.displayMatrix ?? Matrix4x4.identity;
		Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA L_3;
		L_3 = ARCameraFrameEventArgs_get_displayMatrix_m3354FFAEF054F0A8F4D19BFD506468A06F3AD65F_inline((&___0_cameraFrameEventArgs), NULL);
		V_4 = L_3;
		bool L_4;
		L_4 = Nullable_1_get_HasValue_m02B13D9F8C2777CA6CCA386F24619C7A4CC97515_inline((&V_4), Nullable_1_get_HasValue_m02B13D9F8C2777CA6CCA386F24619C7A4CC97515_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_002f;
		}
	}
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_5;
		L_5 = Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline(NULL);
		G_B4_0 = L_5;
		goto IL_0036;
	}

IL_002f:
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_6;
		L_6 = Nullable_1_GetValueOrDefault_m8FE543F7461F1646151BD30E8B67831C4D527343_inline((&V_4), Nullable_1_GetValueOrDefault_m8FE543F7461F1646151BD30E8B67831C4D527343_RuntimeMethod_var);
		G_B4_0 = L_6;
	}

IL_0036:
	{
		V_0 = G_B4_0;
		// Vector2 affineBasisX = new Vector2(1.0f, 0.0f);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_1), (1.0f), (0.0f), NULL);
		// Vector2 affineBasisY = new Vector2(0.0f, 1.0f);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_2), (0.0f), (1.0f), NULL);
		// Vector2 affineTranslation = new Vector2(0.0f, 0.0f);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_3), (0.0f), (0.0f), NULL);
		// affineBasisX = new Vector2(cameraMatrix[0, 0], cameraMatrix[1, 0]);
		float L_7;
		L_7 = Matrix4x4_get_Item_mE4D45E661CAD3C54A02156B25F5D10585F250227_inline((&V_0), 0, 0, NULL);
		float L_8;
		L_8 = Matrix4x4_get_Item_mE4D45E661CAD3C54A02156B25F5D10585F250227_inline((&V_0), 1, 0, NULL);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_1), L_7, L_8, NULL);
		// affineBasisY = new Vector2(cameraMatrix[0, 1], cameraMatrix[1, 1]);
		float L_9;
		L_9 = Matrix4x4_get_Item_mE4D45E661CAD3C54A02156B25F5D10585F250227_inline((&V_0), 0, 1, NULL);
		float L_10;
		L_10 = Matrix4x4_get_Item_mE4D45E661CAD3C54A02156B25F5D10585F250227_inline((&V_0), 1, 1, NULL);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_2), L_9, L_10, NULL);
		// affineTranslation = new Vector2(cameraMatrix[2, 0], cameraMatrix[2, 1]);
		float L_11;
		L_11 = Matrix4x4_get_Item_mE4D45E661CAD3C54A02156B25F5D10585F250227_inline((&V_0), 2, 0, NULL);
		float L_12;
		L_12 = Matrix4x4_get_Item_mE4D45E661CAD3C54A02156B25F5D10585F250227_inline((&V_0), 2, 1, NULL);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_3), L_11, L_12, NULL);
		// affineBasisX = affineBasisX.normalized;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline((&V_1), NULL);
		V_1 = L_13;
		// affineBasisY = affineBasisY.normalized;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline((&V_2), NULL);
		V_2 = L_14;
		// m_DisplayRotationMatrix = Matrix4x4.identity;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_15;
		L_15 = Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline(NULL);
		__this->___m_DisplayRotationMatrix_15 = L_15;
		// m_DisplayRotationMatrix[0,0] = affineBasisX.x;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_16 = (&__this->___m_DisplayRotationMatrix_15);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = V_1;
		float L_18 = L_17.___x_0;
		Matrix4x4_set_Item_mE84FC43629907DD1872E3100BCFF4A8EB671B603_inline(L_16, 0, 0, L_18, NULL);
		// m_DisplayRotationMatrix[0,1] = affineBasisY.x;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_19 = (&__this->___m_DisplayRotationMatrix_15);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20 = V_2;
		float L_21 = L_20.___x_0;
		Matrix4x4_set_Item_mE84FC43629907DD1872E3100BCFF4A8EB671B603_inline(L_19, 0, 1, L_21, NULL);
		// m_DisplayRotationMatrix[1,0] = affineBasisX.y;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_22 = (&__this->___m_DisplayRotationMatrix_15);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23 = V_1;
		float L_24 = L_23.___y_1;
		Matrix4x4_set_Item_mE84FC43629907DD1872E3100BCFF4A8EB671B603_inline(L_22, 1, 0, L_24, NULL);
		// m_DisplayRotationMatrix[1,1] = affineBasisY.y;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_25 = (&__this->___m_DisplayRotationMatrix_15);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26 = V_2;
		float L_27 = L_26.___y_1;
		Matrix4x4_set_Item_mE84FC43629907DD1872E3100BCFF4A8EB671B603_inline(L_25, 1, 1, L_27, NULL);
		// m_DisplayRotationMatrix[2,0] = Mathf.Round(affineTranslation.x);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_28 = (&__this->___m_DisplayRotationMatrix_15);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29 = V_3;
		float L_30 = L_29.___x_0;
		float L_31;
		L_31 = bankers_roundf(L_30);
		Matrix4x4_set_Item_mE84FC43629907DD1872E3100BCFF4A8EB671B603_inline(L_28, 2, 0, L_31, NULL);
		// m_DisplayRotationMatrix[2,1] = Mathf.Round(affineTranslation.y);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_32 = (&__this->___m_DisplayRotationMatrix_15);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33 = V_3;
		float L_34 = L_33.___y_1;
		float L_35;
		L_35 = bankers_roundf(L_34);
		Matrix4x4_set_Item_mE84FC43629907DD1872E3100BCFF4A8EB671B603_inline(L_32, 2, 1, L_35, NULL);
		// m_RawImage.material.SetMatrix(k_DisplayRotationPerFrameId, m_DisplayRotationMatrix);
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_36 = __this->___m_RawImage_18;
		NullCheck(L_36);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_37;
		L_37 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_36);
		il2cpp_codegen_runtime_class_init_inline(DepthManager_t844D33D06E2618F752DF8065710556E6051B435C_il2cpp_TypeInfo_var);
		int32_t L_38 = ((DepthManager_t844D33D06E2618F752DF8065710556E6051B435C_StaticFields*)il2cpp_codegen_static_fields_for(DepthManager_t844D33D06E2618F752DF8065710556E6051B435C_il2cpp_TypeInfo_var))->___k_DisplayRotationPerFrameId_10;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_39 = __this->___m_DisplayRotationMatrix_15;
		NullCheck(L_37);
		Material_SetMatrix_m668579C6402F88BFEF769D39E484BAD4CE6B0067(L_37, L_38, L_39, NULL);
	}

IL_0167:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.DepthManager::BuildTextureInfo(System.Text.StringBuilder,System.String,UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthManager_BuildTextureInfo_mFB4498349184DB8A99896FE1728CA254864CC2BE (DepthManager_t844D33D06E2618F752DF8065710556E6051B435C* __this, StringBuilder_t* ___0_stringBuilder, String_t* ___1_textureName, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___2_texture, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureFormat_t87A73E4A3850D3410DC211676FC14B94226C1C1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral57FB2278678E53AB41C5D8980C828216B4C95510);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6756EA689713671AE1B09B8923EF7CD0F2DDBBA3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B49C8BD74FCDF8EB27C6B88C1BE82FAF2B8081F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB866B1475E89C37E80AF3C6C1E4719DE61BB44CF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC878B06C14D746964E019AA936BBE3810F23CBAF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF74A9504F6C3A6B14D25FE38A22DEC43CBFA9C2B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// stringBuilder.AppendLine($"texture : {textureName}");
		StringBuilder_t* L_0 = ___0_stringBuilder;
		String_t* L_1 = ___1_textureName;
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral6756EA689713671AE1B09B8923EF7CD0F2DDBBA3, L_1, NULL);
		NullCheck(L_0);
		StringBuilder_t* L_3;
		L_3 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_0, L_2, NULL);
		// if (texture == null)
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_4 = ___2_texture;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0028;
		}
	}
	{
		// stringBuilder.AppendLine("   <null>");
		StringBuilder_t* L_6 = ___0_stringBuilder;
		NullCheck(L_6);
		StringBuilder_t* L_7;
		L_7 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_6, _stringLiteralF74A9504F6C3A6B14D25FE38A22DEC43CBFA9C2B, NULL);
		return;
	}

IL_0028:
	{
		// stringBuilder.AppendLine($"   format : {texture.format}");
		StringBuilder_t* L_8 = ___0_stringBuilder;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_9 = ___2_texture;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Texture2D_get_format_mE39DD922F83CA1097383309278BB6F20636A7D9D(L_9, NULL);
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(TextureFormat_t87A73E4A3850D3410DC211676FC14B94226C1C1D_il2cpp_TypeInfo_var, &L_11);
		String_t* L_13;
		L_13 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralC878B06C14D746964E019AA936BBE3810F23CBAF, L_12, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_14;
		L_14 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_8, L_13, NULL);
		// stringBuilder.AppendLine($"   width  : {texture.width}");
		StringBuilder_t* L_15 = ___0_stringBuilder;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_16 = ___2_texture;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_16);
		int32_t L_18 = L_17;
		RuntimeObject* L_19 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_18);
		String_t* L_20;
		L_20 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralB866B1475E89C37E80AF3C6C1E4719DE61BB44CF, L_19, NULL);
		NullCheck(L_15);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_15, L_20, NULL);
		// stringBuilder.AppendLine($"   height : {texture.height}");
		StringBuilder_t* L_22 = ___0_stringBuilder;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_23 = ___2_texture;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_23);
		int32_t L_25 = L_24;
		RuntimeObject* L_26 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_25);
		String_t* L_27;
		L_27 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral6B49C8BD74FCDF8EB27C6B88C1BE82FAF2B8081F, L_26, NULL);
		NullCheck(L_22);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_22, L_27, NULL);
		// stringBuilder.AppendLine($"   mipmap : {texture.mipmapCount}");
		StringBuilder_t* L_29 = ___0_stringBuilder;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_30 = ___2_texture;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = Texture_get_mipmapCount_m9E68435BC8E30B9821525BFC8121C34A53774023(L_30, NULL);
		int32_t L_32 = L_31;
		RuntimeObject* L_33 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_32);
		String_t* L_34;
		L_34 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral57FB2278678E53AB41C5D8980C828216B4C95510, L_33, NULL);
		NullCheck(L_29);
		StringBuilder_t* L_35;
		L_35 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_29, L_34, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.DepthManager::print_depth(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthManager_print_depth_m9042901E0ADB0A36962AD0DED4BD1F72BF71E5C1 (DepthManager_t844D33D06E2618F752DF8065710556E6051B435C* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_texture, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC205ECCCB1FFBBE52451FCF85932ED52E1FFC476);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8270C67B438EB1CEB5DAA2BF9B7E661F78A48EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE79A57728C480641EDCF8A6D49BF9838AEB33ABA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9CE3C46E0F06A5133F58886BFD393D5D9AD8C06);
		s_Il2CppMethodInitialized = true;
	}
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_0 = NULL;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_1 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	{
		// RenderTexture tmp = RenderTexture.GetTemporary(
		//         texture.width,
		//         texture.height,
		//         0,
		//         RenderTextureFormat.Default,
		//         RenderTextureReadWrite.Linear);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = ___0_texture;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_0);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = ___0_texture;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_2);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_4;
		L_4 = RenderTexture_GetTemporary_mA6619EA324AAE80B6892107C6968092F6F1B4C45(L_1, L_3, 0, 7, 1, NULL);
		V_0 = L_4;
		// Graphics.Blit(texture, tmp);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_5 = ___0_texture;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8D99E16B74C7D3C8F79F4F142C59DB6B38114504(L_5, L_6, NULL);
		// RenderTexture previous = RenderTexture.active;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_7;
		L_7 = RenderTexture_get_active_mA4434B3E79DEF2C01CAE0A53061598B16443C9E7(NULL);
		// RenderTexture.active = tmp;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_8 = V_0;
		RenderTexture_set_active_m5EE8E2327EF9B306C1425014CC34C41A8384E7AB(L_8, NULL);
		// Texture2D myTexture2D = new Texture2D(texture.width, texture.height);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_9 = ___0_texture;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_9);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_11 = ___0_texture;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_11);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_13 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		Texture2D__ctor_m3BA82E87442B7F69E118477069AE11101B9DF796(L_13, L_10, L_12, NULL);
		V_1 = L_13;
		// myTexture2D.ReadPixels(new Rect(0, 0, tmp.width, tmp.height), 0, 0);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_14 = V_1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_15);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_17);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_19;
		memset((&L_19), 0, sizeof(L_19));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_19), (0.0f), (0.0f), ((float)L_16), ((float)L_18), /*hidden argument*/NULL);
		NullCheck(L_14);
		Texture2D_ReadPixels_m6B45DF7C051BF599C72ED09691F21A6C769EEBD9(L_14, L_19, 0, 0, NULL);
		// myTexture2D.Apply();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_20 = V_1;
		NullCheck(L_20);
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_20, NULL);
		// RenderTexture.active = previous;
		RenderTexture_set_active_m5EE8E2327EF9B306C1425014CC34C41A8384E7AB(L_7, NULL);
		// RenderTexture.ReleaseTemporary(tmp);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_21 = V_0;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_21, NULL);
		// Color pixel = myTexture2D.GetPixel(myTexture2D.width/2, myTexture2D.height/2);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_22 = V_1;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_23 = V_1;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_23);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_25 = V_1;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_25);
		NullCheck(L_22);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27;
		L_27 = Texture2D_GetPixel_m69A17FE5CC220F438C7421DCB50A9E22AAB4A415(L_22, ((int32_t)(L_24/2)), ((int32_t)(L_26/2)), NULL);
		V_2 = L_27;
		// pixcelDepth.text = "Pixcel Depth: " + pixel.r.ToString() + "  xy: ( " + myTexture2D.width / 2 + " , " + myTexture2D.height / 2 + " )" ;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_28 = __this->___pixcelDepth_5;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_29 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30 = L_29;
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, _stringLiteralE79A57728C480641EDCF8A6D49BF9838AEB33ABA);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralE79A57728C480641EDCF8A6D49BF9838AEB33ABA);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = L_30;
		float* L_32 = (&(&V_2)->___r_0);
		String_t* L_33;
		L_33 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_32, NULL);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_33);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_33);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_34 = L_31;
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, _stringLiteralF9CE3C46E0F06A5133F58886BFD393D5D9AD8C06);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralF9CE3C46E0F06A5133F58886BFD393D5D9AD8C06);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_35 = L_34;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_36 = V_1;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_36);
		V_3 = ((int32_t)(L_37/2));
		String_t* L_38;
		L_38 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_3), NULL);
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_38);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_38);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_39 = L_35;
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, _stringLiteralC205ECCCB1FFBBE52451FCF85932ED52E1FFC476);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralC205ECCCB1FFBBE52451FCF85932ED52E1FFC476);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = L_39;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_41 = V_1;
		NullCheck(L_41);
		int32_t L_42;
		L_42 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_41);
		V_3 = ((int32_t)(L_42/2));
		String_t* L_43;
		L_43 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_3), NULL);
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, L_43);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_43);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_44 = L_40;
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, _stringLiteralD8270C67B438EB1CEB5DAA2BF9B7E661F78A48EC);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralD8270C67B438EB1CEB5DAA2BF9B7E661F78A48EC);
		String_t* L_45;
		L_45 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_44, NULL);
		NullCheck(L_28);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_28, L_45);
		// DestroyImmediate(myTexture2D);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_46 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_46, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.DepthManager::LogText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthManager_LogText_mFB6D2CC5F1C734002DD7721018519273370C1E6C (DepthManager_t844D33D06E2618F752DF8065710556E6051B435C* __this, String_t* ___0_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_ImageInfo != null)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___m_ImageInfo_19;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// m_ImageInfo.text = text;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___m_ImageInfo_19;
		String_t* L_3 = ___0_text;
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_3);
		return;
	}

IL_001b:
	{
		// Debug.Log(text);
		String_t* L_4 = ___0_text;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_4, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.DepthManager::UpdateRawImage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthManager_UpdateRawImage_m2CE512103AB9EF145227965EFB6501D54FC4396C (DepthManager_t844D33D06E2618F752DF8065710556E6051B435C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthManager_t844D33D06E2618F752DF8065710556E6051B435C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		// float maxDimension = long_length;
		float L_0 = __this->___long_length_4;
		V_0 = L_0;
		// float minDimension = Mathf.Round(maxDimension * m_TextureAspectRatio);
		float L_1 = V_0;
		float L_2 = __this->___m_TextureAspectRatio_13;
		float L_3;
		L_3 = bankers_roundf(((float)il2cpp_codegen_multiply(L_1, L_2)));
		V_1 = L_3;
		// switch (m_CurrentScreenOrientation)
		int32_t L_4 = __this->___m_CurrentScreenOrientation_12;
		V_5 = L_4;
		int32_t L_5 = V_5;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, 1))) > ((uint32_t)1))))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_6 = V_5;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_6, 3))) <= ((uint32_t)1))))
		{
			goto IL_0036;
		}
	}
	{
		// rectSize = new Vector2(maxDimension, minDimension);
		float L_7 = V_0;
		float L_8 = V_1;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_2), L_7, L_8, NULL);
		// break;
		goto IL_003f;
	}

IL_0036:
	{
		// rectSize = new Vector2(minDimension, maxDimension);
		float L_9 = V_1;
		float L_10 = V_0;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_2), L_9, L_10, NULL);
	}

IL_003f:
	{
		// switch (m_DisplayMode)
		int32_t L_11 = __this->___m_DisplayMode_14;
		V_6 = L_11;
		int32_t L_12 = V_6;
		switch (L_12)
		{
			case 0:
			{
				goto IL_0082;
			}
			case 1:
			{
				goto IL_0082;
			}
			case 2:
			{
				goto IL_0071;
			}
			case 3:
			{
				goto IL_0060;
			}
		}
	}
	{
		goto IL_0082;
	}

IL_0060:
	{
		// material = m_StencilMaterial;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = __this->___m_StencilMaterial_21;
		V_4 = L_13;
		// maxDistance = m_MaxHumanDistance;
		float L_14 = __this->___m_MaxHumanDistance_23;
		V_3 = L_14;
		// break;
		goto IL_0091;
	}

IL_0071:
	{
		// material = m_DepthMaterial;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15 = __this->___m_DepthMaterial_20;
		V_4 = L_15;
		// maxDistance = m_MaxHumanDistance;
		float L_16 = __this->___m_MaxHumanDistance_23;
		V_3 = L_16;
		// break;
		goto IL_0091;
	}

IL_0082:
	{
		// material = m_DepthMaterial;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = __this->___m_DepthMaterial_20;
		V_4 = L_17;
		// maxDistance = m_MaxEnvironmentDistance;
		float L_18 = __this->___m_MaxEnvironmentDistance_22;
		V_3 = L_18;
	}

IL_0091:
	{
		// m_RawImage.rectTransform.sizeDelta = rectSize;
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_19 = __this->___m_RawImage_18;
		NullCheck(L_19);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_20;
		L_20 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_19, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21 = V_2;
		NullCheck(L_20);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_20, L_21, NULL);
		// material.SetFloat(k_MaxDistanceId, maxDistance);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_22 = V_4;
		il2cpp_codegen_runtime_class_init_inline(DepthManager_t844D33D06E2618F752DF8065710556E6051B435C_il2cpp_TypeInfo_var);
		int32_t L_23 = ((DepthManager_t844D33D06E2618F752DF8065710556E6051B435C_StaticFields*)il2cpp_codegen_static_fields_for(DepthManager_t844D33D06E2618F752DF8065710556E6051B435C_il2cpp_TypeInfo_var))->___k_MaxDistanceId_9;
		float L_24 = V_3;
		NullCheck(L_22);
		Material_SetFloat_m3ECFD92072347A8620254F014865984FA68211A8(L_22, L_23, L_24, NULL);
		// material.SetMatrix(k_DisplayRotationPerFrameId, m_DisplayRotationMatrix);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_25 = V_4;
		int32_t L_26 = ((DepthManager_t844D33D06E2618F752DF8065710556E6051B435C_StaticFields*)il2cpp_codegen_static_fields_for(DepthManager_t844D33D06E2618F752DF8065710556E6051B435C_il2cpp_TypeInfo_var))->___k_DisplayRotationPerFrameId_10;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_27 = __this->___m_DisplayRotationMatrix_15;
		NullCheck(L_25);
		Material_SetMatrix_m668579C6402F88BFEF769D39E484BAD4CE6B0067(L_25, L_26, L_27, NULL);
		// m_RawImage.material = material;
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_28 = __this->___m_RawImage_18;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_29 = V_4;
		NullCheck(L_28);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_28, L_29);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.DepthManager::OnDepthModeDropdownValueChanged(UnityEngine.UI.Dropdown)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthManager_OnDepthModeDropdownValueChanged_m52664A22DA47AB726817FC9B52475C4515BEBAE5 (DepthManager_t844D33D06E2618F752DF8065710556E6051B435C* __this, Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* ___0_dropdown, const RuntimeMethod* method) 
{
	{
		// m_DisplayMode = (DisplayMode)dropdown.value;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_0 = ___0_dropdown;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Dropdown_get_value_m386913162D5E273B762657FE5156DC567602BC3C_inline(L_0, NULL);
		__this->___m_DisplayMode_14 = L_1;
		// UpdateRawImage();
		DepthManager_UpdateRawImage_m2CE512103AB9EF145227965EFB6501D54FC4396C(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.DepthManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthManager__ctor_m238B6762E62F57EA6D6FD933582BC4F37DF1DB44 (DepthManager_t844D33D06E2618F752DF8065710556E6051B435C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DepthManager_t844D33D06E2618F752DF8065710556E6051B435C* G_B2_0 = NULL;
	DepthManager_t844D33D06E2618F752DF8065710556E6051B435C* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	DepthManager_t844D33D06E2618F752DF8065710556E6051B435C* G_B3_1 = NULL;
	{
		// private float long_length = Screen.width > Screen.height ? Screen.width : Screen.height;
		int32_t L_0;
		L_0 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		int32_t L_1;
		L_1 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		G_B1_0 = __this;
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			G_B2_0 = __this;
			goto IL_0014;
		}
	}
	{
		int32_t L_2;
		L_2 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_0019;
	}

IL_0014:
	{
		int32_t L_3;
		L_3 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_0019:
	{
		NullCheck(G_B3_1);
		G_B3_1->___long_length_4 = ((float)G_B3_0);
		// readonly StringBuilder m_StringBuilder = new StringBuilder();
		StringBuilder_t* L_4 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_4, NULL);
		__this->___m_StringBuilder_11 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_StringBuilder_11), (void*)L_4);
		// float m_TextureAspectRatio = k_DefaultTextureAspectRadio;
		__this->___m_TextureAspectRatio_13 = (1.0f);
		// Matrix4x4 m_DisplayRotationMatrix = Matrix4x4.identity;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_5;
		L_5 = Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline(NULL);
		__this->___m_DisplayRotationMatrix_15 = L_5;
		// float m_MaxEnvironmentDistance = 8.0f;
		__this->___m_MaxEnvironmentDistance_22 = (8.0f);
		// float m_MaxHumanDistance = 3.0f;
		__this->___m_MaxHumanDistance_23 = (3.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.DepthManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthManager__cctor_m12B559CFB26D1DDF8179DCE60CFAECCCE3F742E9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthManager_t844D33D06E2618F752DF8065710556E6051B435C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2026278668172106C99246EA0DD41FBB2A8221AB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72EFACF900BC379F438ADCAFE83E83F9FB213AAB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly int k_MaxDistanceId = Shader.PropertyToID(k_MaxDistanceName);
		int32_t L_0;
		L_0 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteral2026278668172106C99246EA0DD41FBB2A8221AB, NULL);
		((DepthManager_t844D33D06E2618F752DF8065710556E6051B435C_StaticFields*)il2cpp_codegen_static_fields_for(DepthManager_t844D33D06E2618F752DF8065710556E6051B435C_il2cpp_TypeInfo_var))->___k_MaxDistanceId_9 = L_0;
		// static readonly int k_DisplayRotationPerFrameId = Shader.PropertyToID(k_DisplayRotationPerFrameName);
		int32_t L_1;
		L_1 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteral72EFACF900BC379F438ADCAFE83E83F9FB213AAB, NULL);
		((DepthManager_t844D33D06E2618F752DF8065710556E6051B435C_StaticFields*)il2cpp_codegen_static_fields_for(DepthManager_t844D33D06E2618F752DF8065710556E6051B435C_il2cpp_TypeInfo_var))->___k_DisplayRotationPerFrameId_10 = L_1;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = ((Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields*)il2cpp_codegen_static_fields_for(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var))->___identityMatrix_17;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HttpListenerResponse_tE2A3F65DF2E0B73D19CE1FBDCFE622CADE7B38B1* HttpListenerContext_get_Response_m64CA8756CB54BE4A08A336ACCAC5EED26EF42867_inline (HttpListenerContext_tCD5824B5A03F644280D1F171203A2A03F7377412* __this, const RuntimeMethod* method) 
{
	{
		HttpListenerResponse_tE2A3F65DF2E0B73D19CE1FBDCFE622CADE7B38B1* L_0 = __this->___response_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HttpListenerRequest_t30206889F6CB705A9774EAD0C76C905096237FA8* HttpListenerContext_get_Request_m12CFD433DD5D32D9A72388BEBE6256C7BABE1808_inline (HttpListenerContext_tCD5824B5A03F644280D1F171203A2A03F7377412* __this, const RuntimeMethod* method) 
{
	{
		HttpListenerRequest_t30206889F6CB705A9774EAD0C76C905096237FA8* L_0 = __this->___request_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* HttpListenerRequest_get_Url_mAFF6E2EA7A69C8FC3A86DC63CD0F1CBACB3B9831_inline (HttpListenerRequest_t30206889F6CB705A9774EAD0C76C905096237FA8* __this, const RuntimeMethod* method) 
{
	{
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_0 = __this->___url_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool HttpListener_get_IsListening_mC1F9EA4B9283855225AA2895C03DAA3E383D505C_inline (HttpListener_t64CDB1E1A5227C151C7A271A8747DBC88EBC8F01* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___listening_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		float L_0 = ___1_b;
		float L_1 = ___0_a;
		float L_2;
		L_2 = fabsf(((float)il2cpp_codegen_subtract(L_0, L_1)));
		float L_3 = ___0_a;
		float L_4;
		L_4 = fabsf(L_3);
		float L_5 = ___1_b;
		float L_6;
		L_6 = fabsf(L_5);
		float L_7;
		L_7 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_4, L_6, NULL);
		float L_8 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		float L_9;
		L_9 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(((float)il2cpp_codegen_multiply((9.99999997E-07f), L_7)), ((float)il2cpp_codegen_multiply(L_8, (8.0f))), NULL);
		V_0 = (bool)((((float)L_2) < ((float)L_9))? 1 : 0);
		goto IL_0035;
	}

IL_0035:
	{
		bool L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* RawImage_get_texture_m84CCFDF78F6886F73EBE5A7C78D6E9C3CA903813_inline (RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* __this, const RuntimeMethod* method) 
{
	{
		// return m_Texture;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = __this->___m_Texture_37;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA ARCameraFrameEventArgs_get_displayMatrix_m3354FFAEF054F0A8F4D19BFD506468A06F3AD65F_inline (ARCameraFrameEventArgs_t4060608C37C2B7248AFC908876309CC36D53E0EC* __this, const RuntimeMethod* method) 
{
	{
		// public Matrix4x4? displayMatrix { get; set; }
		Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA L_0 = __this->___U3CdisplayMatrixU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Matrix4x4_get_Item_mE4D45E661CAD3C54A02156B25F5D10585F250227_inline (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, int32_t ___0_row, int32_t ___1_column, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		int32_t L_0 = ___0_row;
		int32_t L_1 = ___1_column;
		float L_2;
		L_2 = Matrix4x4_get_Item_m771C2EE3A3BFFBAC9F2AD07FFCAAF6146C1BE92A(__this, ((int32_t)il2cpp_codegen_add(L_0, ((int32_t)il2cpp_codegen_multiply(L_1, 4)))), NULL);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		float L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___y_1;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), L_0, L_1, NULL);
		Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = V_0;
		V_1 = L_2;
		goto IL_0020;
	}

IL_0020:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = V_1;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Matrix4x4_set_Item_mE84FC43629907DD1872E3100BCFF4A8EB671B603_inline (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, int32_t ___0_row, int32_t ___1_column, float ___2_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_row;
		int32_t L_1 = ___1_column;
		float L_2 = ___2_value;
		Matrix4x4_set_Item_m47C4DDBFAE6578D6008AEF433777D4B2FACB62B0(__this, ((int32_t)il2cpp_codegen_add(L_0, ((int32_t)il2cpp_codegen_multiply(L_1, 4)))), L_2, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Dropdown_get_value_m386913162D5E273B762657FE5156DC567602BC3C_inline (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, const RuntimeMethod* method) 
{
	{
		// return m_Value;
		int32_t L_0 = __this->___m_Value_25;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mEFFF128BA00882F673D7CC76760B4E941B294A2B_gshared_inline (List_1_t907DB8AD76E5F78DD0F5BA1DFFA98419DAFC2562* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0C956EDFF88FAC9E60885D2AB07769743E59B606_gshared_inline (List_1_t907DB8AD76E5F78DD0F5BA1DFFA98419DAFC2562* __this, ValueTuple_2_tD9DCD90C6490444503B936F72B6882564ED11825 ___0_item, const RuntimeMethod* method) 
{
	ValueTuple_2U5BU5D_tED54EDCEE1089B223CCE6E9AE4EC797AEB71B322* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ValueTuple_2U5BU5D_tED54EDCEE1089B223CCE6E9AE4EC797AEB71B322* L_1 = (ValueTuple_2U5BU5D_tED54EDCEE1089B223CCE6E9AE4EC797AEB71B322*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ValueTuple_2U5BU5D_tED54EDCEE1089B223CCE6E9AE4EC797AEB71B322* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ValueTuple_2U5BU5D_tED54EDCEE1089B223CCE6E9AE4EC797AEB71B322* L_6 = V_0;
		int32_t L_7 = V_1;
		ValueTuple_2_tD9DCD90C6490444503B936F72B6882564ED11825 L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (ValueTuple_2_tD9DCD90C6490444503B936F72B6882564ED11825)L_8);
		return;
	}

IL_0034:
	{
		ValueTuple_2_tD9DCD90C6490444503B936F72B6882564ED11825 L_9 = ___0_item;
		((  void (*) (List_1_t907DB8AD76E5F78DD0F5BA1DFFA98419DAFC2562*, ValueTuple_2_tD9DCD90C6490444503B936F72B6882564ED11825, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m02B13D9F8C2777CA6CCA386F24619C7A4CC97515_gshared_inline (Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Nullable_1_GetValueOrDefault_m8FE543F7461F1646151BD30E8B67831C4D527343_gshared_inline (Nullable_1_t4DE2D2A1D2B73B95E813201AC08E1041435836AA* __this, const RuntimeMethod* method) 
{
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		float L_0;
		L_0 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(__this, NULL);
		V_0 = L_0;
		float L_1 = V_0;
		V_1 = (bool)((((float)L_1) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this);
		float L_4 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline(L_3, L_4, NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_5;
		goto IL_0033;
	}

IL_0028:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_6;
	}

IL_0033:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))))));
		V_0 = ((float)L_4);
		goto IL_0026;
	}

IL_0026:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		float L_2 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___0_a;
		float L_4 = L_3.___y_1;
		float L_5 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)(L_1/L_2)), ((float)(L_4/L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
