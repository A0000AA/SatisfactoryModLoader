#include "stdafx.h"
#include "ModInfo.h"
#include "Utility.h"
#include "ModEvents.h"
#include <iostream>
#include <cstdint>

#include "FoliagePickupEvent.h"
#include "TakeDamageEvent.h"

// Custom Events
// - Create events you want to hook into the game here
// - To find out when events are called, please check the Event enum.
void OnPlayerTakenDamage(std::vector<void*>& args) {
	log_mod("Taken damage");
	/*float base = *(float*)args[2];
	float dmg = 10;
	args[2] = &dmg;*/
}

EXTERN_DLL_EXPORT void setup() {
	dispatcher.subscribe(TakeDamageEvent::descriptor, OnPlayerTakenDamage);
}

EXTERN_DLL_EXPORT void run_event(const Event& event, std::vector<void*>& args) {
	dispatcher.post(event, args);
}