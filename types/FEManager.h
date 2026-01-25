class ResourceFile;

enum eGarageType {
	GARAGETYPE_NONE = 0,
	GARAGETYPE_MAIN_FE = 1,
	GARAGETYPE_CAREER_SAFEHOUSE = 2,
	GARAGETYPE_CUSTOMIZATION_SHOP = 3,
	GARAGETYPE_CUSTOMIZATION_SHOP_BACKROOM = 4,
	GARAGETYPE_CAR_LOT = 5,
};

class FEManager {
public:

	static inline auto& mInstance = *(FEManager**)0xA97A7C;

	static inline auto GetUserProfile = (UserProfile*(__stdcall*)(FEManager*, int))0x572B90;
};