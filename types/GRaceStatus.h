class GRaceStatus {
public:
	uint8_t _0[0x6A1C];
	GRaceParameters* mRaceParms; // +6A1C

	static inline auto& fObj = *(GRaceStatus**)0xA98284;
};