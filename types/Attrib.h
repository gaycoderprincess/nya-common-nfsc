namespace Attrib {
	class Vault;
	class Collection;

	class Class {
	public:
		static inline auto GetFirstCollection = (uint32_t(__thiscall*)(Class*))0x4652E0;
		static inline auto GetNextCollection = (uint32_t(__thiscall*)(Class*, uint32_t))0x465300;
	};

	class Collection {
	public:
		uint8_t _mTable[0x10];
		Collection* mParent;
		Class* mClass;
		void* mLayout;
		uint32_t mRefCount;
		uint32_t mKey;
		Vault* mSource;
		char* mNamePtr;

		static inline auto GetData = (void*(__thiscall*)(Collection*, uint32_t attributeKey, uint32_t index))0x463480;
	};
	static_assert(sizeof(Collection) == 0x2C);

	class Instance {
	public:
		Collection* mCollection;
		void* mLayoutPtr;
		uint32_t mMsgPort;
		uint32_t mFlags;

		Instance() {}

		Instance(const Collection* collection, uint32_t msgPort, void* pInterface) {
			((Instance*(__thiscall*)(Instance*, const Collection*, uint32_t, void*))0x461340)(this, collection, msgPort, pInterface);
		}
		//~Instance() {
		//	((void(__thiscall*)(Instance*))0x469870)(this);
		//}

		static inline auto GetAttributePointer = (void*(__thiscall*)(Instance*, uint32_t attributeKey, uint32_t index))0x463A80;
		static inline auto GetCollection = (uint32_t(__thiscall*)(Instance*))0x4613E0;
	};
	static_assert(sizeof(Instance) == 0x10);

	class Database {
	public:
		static inline auto& sThis = *(Database**)0xA8499C;

		static inline auto GetClass = (Class*(__thiscall*)(Database*, uint32_t))0x4655E0;
	};

	auto FindCollection = (Collection*(__cdecl*)(uint32_t classKey, uint32_t collectionKey))0x465930;
	auto StringHash32 = (uint32_t(__cdecl*)(const char*))0x4609B0;

	struct RefSpec {
		unsigned int mClassKey;
		unsigned int mCollectionKey;
		const Collection* mCollectionPtr;
	};
	static_assert(sizeof(RefSpec) == 0xC);
};