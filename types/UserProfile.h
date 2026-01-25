class FECarRecord {
public:
	uint32_t Handle; // +0
	uint32_t FEKey; // +4
	uint32_t VehicleKey; // +8
	uint32_t FilterBits; // +C
	int8_t Customization; // +10
	int8_t CareerHandle; // +11
	uint16_t Padd; // +12

	static inline auto Default = (void(__thiscall*)(FECarRecord*))0x4AE060;
	static inline auto GetDebugName = (const char*(__thiscall*)(FECarRecord*))0x4AE320;
	static inline auto GetNameHash = (uint32_t(__thiscall*)(FECarRecord*))0x4BA9C0;
	static inline auto GetType = (uint32_t(__thiscall*)(FECarRecord*))0x4AE150;
};
static_assert(sizeof(FECarRecord) == 0x14);

class FEPlayerCarDB {
public:
	FECarRecord CarTable[200]; // +0
	//FECustomizationRecord Customizations[75]; // +FA0

	static inline auto CreateCar = (FECarRecord*(__thiscall*)(FEPlayerCarDB*, uint32_t fromCar, uint32_t filterBits))0x4CCBA0;
	static inline auto CreateNewCareerCar = (FECarRecord*(__thiscall*)(FEPlayerCarDB*, uint32_t fromCar))0x4D1620;
	static inline auto CreateNewPresetCar = (FECarRecord*(__thiscall*)(FEPlayerCarDB*, uint32_t))0x4D1700;
};

class UserProfile {
public:
	uint8_t _0[0x10];
	char mName[32]; // +10
	uint8_t _30[0x204];
	FEPlayerCarDB PlayersCarStable; // +234
};