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

// WidgetBlueprintGeneratedClass W_Grid_ActionList_FT.W_Grid_ActionList_FT_C
// 0x0000 (FullSize[0x0298] - InheritedSize[0x0298])
// LastOffsetWithSize(0x0298)
class UW_Grid_ActionList_FT_C : public UW_Grid_ActionList_C
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_Grid_ActionList_FT.W_Grid_ActionList_FT_C");
		return ptr;
	}


	void Get_Fireteam_ID(int* ID);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif