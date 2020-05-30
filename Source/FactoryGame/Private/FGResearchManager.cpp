// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGResearchManager.h"

AFGResearchManager::AFGResearchManager() : Super() {
	this->bAlwaysRelevant = true;
	this->bReplicates = true;
}
void AFGResearchManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
void AFGResearchManager::PreInitializeComponents(){ }
AFGResearchManager* AFGResearchManager::Get( UObject* worldContext){ return nullptr; }
void AFGResearchManager::PreSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGResearchManager::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
bool AFGResearchManager::NeedTransform_Implementation(){ return bool(); }
bool AFGResearchManager::ShouldSave_Implementation() const{ return bool(); }
void AFGResearchManager::GetAllResearchTrees(TArray<TSubclassOf<class UFGResearchTree>>& out_ResearchTrees) const{ }
bool AFGResearchManager::IsResesearchTreeUnlocked(TSubclassOf<class UFGResearchTree> researchTree) const{ return bool(); }
bool AFGResearchManager::InitiateResearch(UFGInventoryComponent* playerInventory, TSubclassOf<class UFGSchematic> schematic, TSubclassOf<class UFGResearchTree> initiatingResearchTree){ return bool(); }
bool AFGResearchManager::CanResearchBeInitiated(TSubclassOf<class UFGSchematic> schematic) const{ return bool(); }
bool AFGResearchManager::IsResearchBeingConducted(TSubclassOf<class UFGSchematic> schematic) const{ return bool(); }
bool AFGResearchManager::IsResearchComplete(TSubclassOf<class UFGSchematic> schematic) const{ return bool(); }
bool AFGResearchManager::ContainsAnyCompletedResearch() const{ return bool(); }
void AFGResearchManager::GetAllCompletedResearch(TArray< TSubclassOf< UFGSchematic > >& out_schematics) const{ }
float AFGResearchManager::GetOngoingResearchTimeLeft(TSubclassOf<class UFGSchematic> schematic) const{ return float(); }
TSubclassOf< class UFGSchematic > AFGResearchManager::GetResearchBeingConducted() const{ return TSubclassOf<class UFGSchematic>(); }
bool AFGResearchManager::ClaimResearchResults( AFGCharacterPlayer* instigatorPlayer, TSubclassOf<class UFGSchematic> schematic, int32 selectedRewardIndex){ return bool(); }
bool AFGResearchManager::CanAffordResearch(UFGInventoryComponent* playerInventory, TSubclassOf<class UFGSchematic> schematic) const{ return bool(); }
TSubclassOf<class UFGResearchTree> AFGResearchManager::GetInitiatingResearchTree(TSubclassOf<class UFGSchematic> schematic) const{ return TSubclassOf<class UFGResearchTree>(); }
void AFGResearchManager::GetPendingRewards(TSubclassOf<class UFGSchematic> schematic, TArray< TSubclassOf< UFGSchematic > >& out_rewards) const{ }
void AFGResearchManager::UpdateUnlockedResearchTrees(){ }
void AFGResearchManager::UnlockResearchTree(TSubclassOf<class UFGResearchTree> researchTree){ }
void AFGResearchManager::OnRep_OngoingResearch(){ }
void AFGResearchManager::Client_NewResearchStarted_Implementation(TSubclassOf<  UFGSchematic > research){ }
void AFGResearchManager::PopulateResearchTreeList(){ }
void AFGResearchManager::StartResearch(TSubclassOf<class UFGSchematic> schematic, TSubclassOf<  UFGResearchTree> initiatingResearchTree){ }
void AFGResearchManager::GeneratePendingReward(FResearchData& researchData){ }
void AFGResearchManager::OnResearchTimerComplete(TSubclassOf<class UFGSchematic> schematic){ }
bool AFGResearchManager::PayForResearch(UFGInventoryComponent* playerInventory, TSubclassOf<class UFGSchematic> schematic) const{ return bool(); }
void AFGResearchManager::ClaimPendingRewards(AFGCharacterPlayer* instigatorPlayer, TSubclassOf<UFGSchematic> schematic, int32 selectedRewardIndex){ }
bool AFGResearchManager::AreResearchTreeUnlockDependeciesMet(TSubclassOf <UFGResearchTree> inClass){ return bool(); }
