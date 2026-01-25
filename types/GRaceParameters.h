class GRaceIndexData;
class GVault;

namespace GRace {
	enum Type {
		kRaceType_P2P = 0,
		kRaceType_Circuit = 1,
		kRaceType_Drag = 2,
		kRaceType_Knockout = 3,
		kRaceType_Tollbooth = 4,
		kRaceType_SpeedTrap = 5,
		kRaceType_Checkpoint = 6,
		kRaceType_CashGrab = 7,
		kRaceType_Challenge = 8,
		kRaceType_JumpToSpeedTrap = 9,
		kRaceType_JumpToMilestone = 10,
		kRaceType_DriftRace = 11,
		kRaceType_CanyonDrift = 12,
		kRaceType_Canyon = 13,
		kRaceType_PursuitTag = 14,
		kRaceType_PursuitKnockout = 15,
		kRaceType_Encounter = 16,
		kRaceType_NumTypes = 17,
		kRaceType_None = -1,
	};
}

class GRaceParameters {
public:
	GRaceIndexData* mIndex;
	Attrib::Instance* mRaceRecord;
	GVault* mParentVault;
	GVault* mChildVault;

	static inline auto GetRaceType = (GRace::Type(__thiscall*)(GRaceParameters*))0x6136A0;
	static inline auto GetChallengeType = (int(__thiscall*)(GRaceParameters*))0x63C420;
	static inline auto GetNumLaps = (int(__thiscall*)(GRaceParameters*))0x63F450;
	static inline auto GetIsLoopingRace = (bool(__thiscall*)(GRaceParameters*))0x63E2A0;
	static inline auto GetIsPursuitRace = (bool(__thiscall*)(GRaceParameters*))0x63E240;
	static inline auto GetEventID = (const char*(__thiscall*)(GRaceParameters*))0x613590;
	static inline auto GetNumOpponents = (int(__thiscall*)(GRaceParameters*))0x63C660;
	static inline auto GetPlayerCarType = (const char*(__thiscall*)(GRaceParameters*))0x63E990;
	static inline auto GetPlayerCarTypeHash = (uint32_t(__thiscall*)(GRaceParameters*))0x63F4B0;
	static inline auto GetPlayerCarPerformance = (float(__thiscall*)(GRaceParameters*))0x63E9E0;
	static inline auto GetUsePresetRide = (bool(__thiscall*)(GRaceParameters*))0x63E660;
	static inline auto GetIsChallengeSeriesRace = (bool(__thiscall*)(GRaceParameters*))0x63E540;
};