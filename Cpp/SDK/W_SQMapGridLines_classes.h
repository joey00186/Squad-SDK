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

// WidgetBlueprintGeneratedClass W_SQMapGridLines.W_SQMapGridLines_C
// 0x0078 (FullSize[0x0258] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_0026 - 0x0000 // Minimum to subtract -> (0050)
class UW_SQMapGridLines_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_0026, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0026, class UBorder*,                                                        Border_1);                                                 // 0x0238(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_0026, class UOverlay*,                                                       GridOverlay);                                              // 0x0240(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_0026, TArray<struct FGridLinesPerZoomLevel>,                                 GridLineLevels);                                           // 0x0248(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_SQMapGridLines.W_SQMapGridLines_C");
		return ptr;
	}


	void InitializeTexture(const struct FVector2D& GridNumbers, float StartingZoom);
	void UpdateZoom(float ZoomAmount);
	void Update_Grid_Opacity();
	void Construct();
	void ExecuteUbergraph_W_SQMapGridLines(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif