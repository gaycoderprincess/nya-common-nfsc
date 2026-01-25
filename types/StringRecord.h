struct StringRecord {
	uint32_t Hash;
	char* PackedString;
};

auto NumStringRecords = (uint32_t*)0xA95384;
auto RecordTables = (StringRecord**)0xA95378;
auto GetLocalizedString = (const char*(__cdecl*)(uint32_t stringLabel))0x578830;