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

// BlueprintGeneratedClass minsk_Burn.minsk_Burn_C
// 0x000C (FullSize[0x0318] - InheritedSize[0x030C])
// LastOffsetWithSize(0x030C)
#define PADDING_0254 - 0x0000 // Minimum to subtract -> (0004)
class Aminsk_Burn_C : public ASQDestroyedVehicle
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0004 PADDING_0254, class UParticleSystemComponent*,                                       explosion);                                                // 0x0310(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass minsk_Burn.minsk_Burn_C");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif