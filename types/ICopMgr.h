class IPursuit;
class ICopMgr : public UCOM::IUnknown {
public:
	static inline uint32_t IHandle = 0x403D40;

	static inline auto& mInstance = *(ICopMgr**)0xA9E874;
	static inline auto& mDisableCops = *(bool*)0xA83A50;

	virtual bool VehicleSpawningEnabled(bool) = 0;
	virtual void ResetCopsForRestart(bool) = 0;
	virtual void SetAllBustedTimersToZero() = 0;
	virtual bool PursuitIsEvaded(IPursuit*) = 0;
	virtual bool IsCopRequestPending() = 0;
	virtual bool IsCopSpawnPending() = 0;
	virtual void SpawnCop(const UMath::Vector3* InitialPos, const UMath::Vector3* InitialVec, const char* VehicleName, bool InPursuit, bool RoadBlock) = 0;
	virtual bool PlayerPursuitHasCop() = 0;
	virtual bool CanPursueRacers() = 0;
	virtual bool IsPlayerPursuitActive() = 0;
	virtual void LockoutCops(bool) = 0;
	virtual bool NoNewPursuitsOrCops() = 0;
	virtual void PursueAtHeatLevel(int) = 0;
	virtual float GetLockoutTimeRemaining() = 0;
};