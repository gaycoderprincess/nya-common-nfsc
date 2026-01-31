class ResourceFile;

enum eGarageType {
	GARAGETYPE_NONE = 0,
	GARAGETYPE_MAIN_FE = 1,
	GARAGETYPE_CAREER_SAFEHOUSE = 2,
	GARAGETYPE_CUSTOMIZATION_SHOP = 3,
	GARAGETYPE_CUSTOMIZATION_SHOP_BACKROOM = 4,
	GARAGETYPE_CAR_LOT = 5,
};

class FEStateManager {
public:
	static inline auto IsGameMode = (bool(__thiscall*)(FEStateManager*, int))0x5792A0;
};

class FEManager : public FEStateManager {
public:
	static inline auto& mInstance = *(FEManager**)0xA97A7C;

	static inline auto GetUserProfile = (UserProfile*(__thiscall*)(FEManager*, int))0x572B90;
};

class FeChallengeSeries {
public:
	static inline auto& sInstance = *(FeChallengeSeries**)0xBBAA5C;
};

class FeQuickRaceOptions {
public:
	static inline auto& sInstance = *(FeQuickRaceOptions**)0xBBAA54;
};