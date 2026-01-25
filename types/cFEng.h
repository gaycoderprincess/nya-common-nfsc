class cFEng {
public:
	static inline auto& mInstance = *(cFEng**)0xA97A78;

	static inline auto IsPackagePushed = (bool(__thiscall*)(cFEng*, const char* pPackageName))0x598460;
};