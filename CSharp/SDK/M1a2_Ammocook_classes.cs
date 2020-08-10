// Name: Sq, Version: b21

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace UFT
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass M1a2_Ammocook.M1a2_Ammocook_C
// 0x0050 (0x0370 - 0x0320)
public class AM1a2_Ammocook_C : ABP_GenericDestroyedVehicleWreck_C
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0320, false); // 0x0320(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UStaticMeshComponent>              _offCollisionMesh                                              = new ExternalOffset<UStaticMeshComponent>(0x0328, true);      // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UAudioComponent>                   _offFlamesAudio                                                = new ExternalOffset<UAudioComponent>(0x0330, true);           // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<URadialForceComponent>             _offRadialForce                                                = new ExternalOffset<URadialForceComponent>(0x0338, true);     // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMeshComponent>              _offPanel2                                                     = new ExternalOffset<UStaticMeshComponent>(0x0340, true);      // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMeshComponent>              _offPanel1                                                     = new ExternalOffset<UStaticMeshComponent>(0x0348, true);      // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UParticleSystemComponent>          _offExploshiom                                                 = new ExternalOffset<UParticleSystemComponent>(0x0350, true);  // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UParticleSystemComponent>          _offParticleSystem                                             = new ExternalOffset<UParticleSystemComponent>(0x0358, true);  // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMeshComponent>              _offbarrel                                                     = new ExternalOffset<UStaticMeshComponent>(0x0360, true);      // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMeshComponent>              _offTurret                                                     = new ExternalOffset<UStaticMeshComponent>(0x0368, true);      // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UStaticMeshComponent                               CollisionMesh                                                  => _offCollisionMesh.GetValue();
	public UAudioComponent                                    FlamesAudio                                                    => _offFlamesAudio.GetValue();
	public URadialForceComponent                              RadialForce                                                    => _offRadialForce.GetValue();
	public UStaticMeshComponent                               Panel2                                                         => _offPanel2.GetValue();
	public UStaticMeshComponent                               Panel1                                                         => _offPanel1.GetValue();
	public UParticleSystemComponent                           Exploshiom                                                     => _offExploshiom.GetValue();
	public UParticleSystemComponent                           ParticleSystem                                                 => _offParticleSystem.GetValue();
	public UStaticMeshComponent                               barrel                                                         => _offbarrel.GetValue();
	public UStaticMeshComponent                               Turret                                                         => _offTurret.GetValue();
	#endregion


}


}