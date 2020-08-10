#pragma once

// Name: Sq, Version: b21


#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

/*!!HELPER_DEF!!*/

/*!!DEFINE!!*/

namespace UFT
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass W_Grid_Action.W_Grid_Action_C
// 0x0098 (FullSize[0x0278] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_0CB9 - 0x0000 // Minimum to subtract -> (0050)
class UW_Grid_Action_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_0CB9, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0CB9, class UButton*,                                                        Button_Action);                                            // 0x0238(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_0CB9, class UHorizontalBox*,                                                 HorizontalBox_1);                                          // 0x0240(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_0CB9, class UImage*,                                                         MainImage);                                                // 0x0248(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_0CB9, class UTextBlock*,                                                     TB_Name);                                                  // 0x0250(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_0CB9, class UClass*,                                                         OptionData);                                               // 0x0258(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_0CB9, class UW_Grid_ActionList_C*,                                           Option_Parent);                                            // 0x0260(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0088 PADDING_0CB9, int,                                                                   Fireteam_ID);                                              // 0x0268(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x008C PADDING_0CB9, int,                                                                   Squad_ID);                                                 // 0x026C(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0090 PADDING_0CB9, class ASQPlayerController*,                                            My_PC);                                                    // 0x0270(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_Grid_Action.W_Grid_Action_C");
		return ptr;
	}


	class UWidget* Get_Tooltip();
	void Get_Color(struct FLinearColor* Tint);
	void Get_Fireteam_ID(int* Fireteam_ID);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature();
	void Action_Button_Pressed();
	void Construct();
	void ExecuteUbergraph_W_Grid_Action(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif