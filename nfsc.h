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

#include "types/UMath.h"
#include "types/GameFlowManager.h"
#include "types/UCOM.h"
#include "types/Attrib.h"
#include "types/Physics.h"
#include "types/cFEng.h"
#include "types/ListableSet.h"
#include "types/IPlayer.h"
#include "types/ISimable.h"
#include "types/IVehicle.h"
#include "types/IEngine.h"
#include "types/ITransmission.h"
#include "types/IRigidBody.h"
#include "types/IRBVehicle.h"
#include "types/IInput.h"
#include "types/IHumanAI.h"
#include "types/INIS.h"
#include "types/GRaceParameters.h"
#include "types/GRaceStatus.h"
#include "types/UserProfile.h"
#include "types/FEManager.h"
#include "types/ICopMgr.h"
#include "types/SimSystem.h"
#include "types/PVehicle.h"
#include "types/StringRecord.h"

class DALPauseStates {
public:
	static inline auto& mPauseRequest = *(uint32_t*)0xA8AD18;
};

auto GetRacingResolution = (void(__stdcall*)(int*, int*))0x712AC0; // technically a thiscall but ecx is never used!

auto& UnlockAllThings = *(bool*)0xA9E6C0;

auto& GameWindow = *(HWND*)0xAB0AD8;

#include "nfschooks.h"