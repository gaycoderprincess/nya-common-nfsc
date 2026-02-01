#include <d3d9.h>

struct UCrc32 {
	uint32_t mCRC;
};

typedef uint32_t HSIMABLE;
typedef uint32_t HCAUSE;
typedef uint32_t HMODEL;
typedef uint32_t HSIMPROFILE;
typedef uint32_t HSIMTASK;

class FECustomizationRecord;
class VehicleCustomizations;
class eView;

#include "types/bNode.h"
#include "types/UMath.h"
#include "types/GameFlowManager.h"
#include "types/UCOM.h"
#include "types/Attrib.h"
#include "types/Physics.h"
#include "types/cFEng.h"
#include "types/ListableSet.h"
#include "types/WWorldPos.h"
#include "types/Camera.h"
#include "types/eView.h"
#include "types/IPlayer.h"
#include "types/ISimable.h"
#include "types/IVehicle.h"
#include "types/IEngine.h"
#include "types/ITransmission.h"
#include "types/IRigidBody.h"
#include "types/IRBVehicle.h"
#include "types/IInput.h"
#include "types/IHumanAI.h"
#include "types/IVehicleCache.h"
#include "types/INIS.h"
#include "types/GRaceParameters.h"
#include "types/GRaceStatus.h"
#include "types/PresetCar.h"
#include "types/UserProfile.h"
#include "types/FEManager.h"
#include "types/ICopMgr.h"
#include "types/SimSystem.h"
#include "types/PVehicle.h"
#include "types/StringRecord.h"
#include "types/FeGarageMain.h"

class GStartGrid {
public:
	static inline auto GetGrid = (bool(*)(int index, UMath::Vector3* pos, UMath::Vector3* dir, void* startMarker))0x648510;
};

class DriftScoreReport {
public:
	uint8_t _0[0xC];
	int totalPoints;
};

class DALRacer {
public:
	static inline auto GetName = (bool(__thiscall*)(DALRacer*, char*, int, int))0x4CB1A0;
	static inline auto GetRaceTime = (bool(__thiscall*)(DALRacer*, float*, GRacerInfo*))0x4CEBA0;
	static inline auto GetRacerPosition = (bool*(__thiscall*)(DALRacer*, int*, int))0x4CAFC0;
	static inline auto GetRacerInfo = (GRacerInfo*(__thiscall*)(DALRacer*, int))0x4CA220;
	static inline auto GetDriftScoreReport = (DriftScoreReport*(__thiscall*)(DALRacer*, int))0x4A6890;
};

class DALOptions {
public:
	static inline auto SetJumpCamOn = (void(__thiscall*)(DALOptions*, int))0x4A4F60;
};

class DALPauseStates {
public:
	static inline auto& mPauseRequest = *(uint32_t*)0xA8AD18;
};

auto FEHashUpper = (uint32_t(*)(const char*))0x5EA6A0;
auto bStringHashUpper = (uint32_t(*)(const char*))0x4710B0;
auto bInitTicker = (void(*)(float))0x46CE30;
auto GetRacingResolution = (void(__stdcall*)(int*, int*))0x712AC0; // technically a thiscall but ecx is never used!

auto& gMoviePlayer = *(void**)0xA97BB4;

auto LZCompress = (uint32_t(*)(uint8_t *pSrc, uint32_t sourceSize, uint8_t *pDst))0x6AA910;
auto LZDecompress = (uint32_t(*)(uint8_t* pSrc, uint8_t* pDst))0x69EDE0;
auto JLZCompress = (uint32_t(*)(uint8_t *pSrc, uint32_t sourceSize, uint8_t *pDst))0x6AA5B0;
auto JLZDecompress = (uint32_t(*)(uint8_t* pSrc, uint8_t* pDst))0x69C5D0;
auto HUFFCompress = (uint32_t(*)(uint8_t *pSrc, uint32_t sourceSize, uint8_t *pDst))0x69EBB0;

auto& UnlockAllThings = *(bool*)0xA9E6C0;

auto& AugmentedDriftWithEBrake = *(bool*)0xA9E65B;
auto& Tweak_DriftRaceCollisionThreshold = *(float*)0xA62F10;

auto& GameWindow = *(HWND*)0xAB0AD8;

#include "nfschooks.h"