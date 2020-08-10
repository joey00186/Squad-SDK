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

// BlueprintGeneratedClass BP_RearmWeaponDynamicModel.BP_RearmWeaponDynamicModel_C
// 0x0014 (FullSize[0x00B4] - InheritedSize[0x00A0])
// LastOffsetWithSize(0x00A0)
#define PADDING_03EC - 0x0000 // Minimum to subtract -> (0000)
class UBP_RearmWeaponDynamicModel_C : public UBP_RadialActionModel_C
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_03EC, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x00A0(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_03EC, class ASQEquipableItem*,                                               Equippable);                                               // 0x00A8(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_03EC, float,                                                                 Cost);                                                     // 0x00B0(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_RearmWeaponDynamicModel.BP_RearmWeaponDynamicModel_C");
		return ptr;
	}


	void OnClicked(class UBaseRadialMenu_C* Radial);
	void ExecuteUbergraph_BP_RearmWeaponDynamicModel(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif