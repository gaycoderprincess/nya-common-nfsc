namespace Sim {
	class Param {
	public:
		UCrc32 mType;
		void* mSource;
		unsigned int pad;
		unsigned int pad1;
	};
}

class IVehicleCache;

class VehicleParams : public Sim::Param {
public:
	DriverClass carClass;
	Attrib::Instance pvehicle;
	const UMath::Vector3* initialVec;
	const UMath::Vector3* initialPos;
	VehicleCustomizations* customization;
	IVehicleCache* VehicleCache = nullptr;
	Physics::Info::Performance* matched = nullptr;
	unsigned int Flags = 0;

	VehicleParams() {
		mType.mCRC = Attrib::StringHash32("VehicleParams");
		mSource = this;
	}
};
static_assert(sizeof(VehicleParams) == 0x3C);

class PVehicle {
public:

	static inline auto Construct = (ISimable*(__cdecl*)(Sim::Param params))0x6DAA80;
};