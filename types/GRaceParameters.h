class GRaceIndexData;
class GVault;

class GRaceParameters {
public:
	GRaceIndexData* mIndex;
	Attrib::Instance* mRaceRecord;
	GVault* mParentVault;
	GVault* mChildVault;

	static inline auto GetRaceType = (int(__thiscall*)(GRaceParameters*))0x6136A0;
	static inline auto GetChallengeType = (int(__thiscall*)(GRaceParameters*))0x63C420;
	static inline auto GetNumLaps = (int(__thiscall*)(GRaceParameters*))0x63F450;
	static inline auto GetIsLoopingRace = (bool(__thiscall*)(GRaceParameters*))0x63E2A0;
	static inline auto GetIsPursuitRace = (bool(__thiscall*)(GRaceParameters*))0x63E240;
	static inline auto GetEventID = (const char*(__thiscall*)(GRaceParameters*))0x613590;
	static inline auto GetNumOpponents = (int(__thiscall*)(GRaceParameters*))0x63C660;
	static inline auto GetPlayerCarType = (const char*(__thiscall*)(GRaceParameters*))0x63E990;
	static inline auto GetUsePresetRide = (bool(__thiscall*)(GRaceParameters*))0x63E660;
	static inline auto GetIsChallengeSeriesRace = (bool(__thiscall*)(GRaceParameters*))0x63E540;
};