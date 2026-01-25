class PresetCar : public bTNode<PresetCar> {
public:
	char CarTypeName[32];
	char PresetName[32];
	uint64_t FEKey;
	uint64_t VehicleKey;
	uint32_t FilterBits;
	int PhysicsLevel;
	int PartNameHashes[139];
};
auto& PresetCarList = *(bList<PresetCar>*)0xB77004;

auto FindFEPresetCar = (PresetCar*(__cdecl*)(uint32_t))0x7C3050;