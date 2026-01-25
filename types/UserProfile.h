class UserProfile {
public:
	char m_aProfileName[32];
	bool m_bNamed;
};
//static_assert(sizeof(UserProfile) == 0x414+sizeof(FEPlayerCarDB));