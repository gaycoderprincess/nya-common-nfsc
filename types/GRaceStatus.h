class GCharacter;

class GRacerInfo {
public:
	HSIMABLE mhSimable; // +0
	GCharacter* mGameCharacter; // +4
	char mName[32]; // +8
	uint8_t _28[0x14];
	float mPctRaceComplete; // +3C
	uint8_t _40[0x344];

	static inline auto GetHudPctRaceComplete = (float(__thiscall*)(GRacerInfo*))0x644730;
};
static_assert(sizeof(GRacerInfo) == 0x384);

class GRaceStatus : public UCOM::Object, IVehicleCache {
public:
	GRacerInfo mRacerInfo[30]; // +18
	int mLazyRankingInfo[30]; // +6990
	int mRacerCount; // +6A08
	uint8_t _6A0C[0x10];
	GRaceParameters* mRaceParms; // +6A1C

	static inline auto& fObj = *(GRaceStatus**)0xA98284;

	static inline auto IsCrewRace = (bool(__thiscall*)(GRaceStatus*))0x61BA70;
};
static_assert(sizeof(GRaceStatus) == 0x6A20);