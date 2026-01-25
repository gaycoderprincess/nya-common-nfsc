struct StringRecord {
	uint32_t Hash;
	char* PackedString;
};

auto NumStringRecords = (uint32_t*)0xA95384;
auto RecordTables = (StringRecord**)0xA95378;
auto GetLocalizedString = (const char*(*)(uint32_t stringLabel))0x578830;
auto ReplaceHashLabel = (uint32_t(*)(uint32_t))0x5786B0;