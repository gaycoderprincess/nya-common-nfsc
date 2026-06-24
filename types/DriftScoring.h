enum DrifterID : int32_t {
	LOCAL_PLAYER_1 = 0x0,
	LOCAL_PLAYER_2 = 0x1,
	AI_OPPONENT_1 = 0x2,
	AI_OPPONENT_2 = 0x3,
	AI_OPPONENT_3 = 0x4,
	REMOTE_PLAYER_1 = 0x5,
	REMOTE_PLAYER_2 = 0x6,
	REMOTE_PLAYER_3 = 0x7,
	REMOTE_PLAYER_4 = 0x8,
	REMOTE_PLAYER_5 = 0x9,
	REMOTE_PLAYER_6 = 0xA,
	REMOTE_PLAYER_7 = 0xB,
	REMOTE_PLAYER_8 = 0xC,
	NOONE = 0xD,
};

enum DrifterType : int32_t {
	PLAYER_DRIFTER = 0x0,
	REMOTE_DRIFTER = 0x1,
	AI_DRIFTER = 0x2,
};

enum DrifterRank : int32_t {
	FIRST_PLACE = 0x0,
	SECOND_PLACE = 0x1,
	THIRD_PLACE = 0x2,
	FOURTH_PLACE = 0x3,
	FIFTH_PLACE = 0x4,
	SIXTH_PLACE = 0x5,
	SEVENTH_PLACE = 0x6,
	EIGHTH_PLACE = 0x7,
};

class DriftChainInfo;
class DriftScoreReport {
public:
	DrifterType drifterType;
	DrifterID drifterID;
	DrifterRank drifterRank;
	unsigned int totalPoints;
	DriftChainInfo *bestDriftInDuration;
	DriftChainInfo *bestDriftInLength;
	DriftChainInfo *bestDriftInScore;
	unsigned int averageDriftScore;
	float averageDriftLength;
	float averageDriftDuration;
	unsigned int numberOfSpinOuts;
	unsigned int numberOfWallsHit;
	unsigned int numberOfDriftChains;
	unsigned int externalPoints;
	char racerName[256];
	//eastl::map<unsigned int,DriftLapReport,eastl::less<std::size_t>,bstl::allocator> driftLapReports;
};