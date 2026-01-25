#include <vector>

namespace NyaHooks {
	namespace D3DEndSceneHook {
		std::vector<void(*)()> aFunctions;

		auto OrigFunction = (void(*)(void*))nullptr;
		void HookedFunction(void* a1) {
			OrigFunction(a1);
			for (auto& func : aFunctions) {
				func();
			}
		}

		void Init() {
			if (OrigFunction) return;
			OrigFunction = (void(*)(void*))NyaHookLib::PatchRelative(NyaHookLib::CALL, 0x7313DF, &HookedFunction);
		}
	}

	namespace D3DResetHook {
		std::vector<void(*)()> aFunctions;

		auto OrigFunction = (void(*)())nullptr;
		void HookedFunction() {
			for (auto& func : aFunctions) {
				func();
			}
			OrigFunction();
		}

		void Init() {
			if (OrigFunction) return;
			OrigFunction = (void(*)())NyaHookLib::PatchRelative(NyaHookLib::CALL, 0x72B373, &HookedFunction);
		}
	}

	void PlaceD3DHooks() {
		D3DEndSceneHook::Init();
		D3DResetHook::Init();
	}

	namespace InputBlockerHook {
		bool bInputsBlocked = false;

		std::vector<void(*)()> aFunctions;

		auto OrigFunction = (bool(*)())nullptr;
		bool HookedFunction() {
			if (bInputsBlocked) return true;
			return OrigFunction();
		}

		void Init() {
			if (OrigFunction) return;
			OrigFunction = (bool(*)())NyaHookLib::PatchRelative(NyaHookLib::CALL, 0x696B6D, &HookedFunction);
		}
	}

	namespace WndProcHook {
		std::vector<void(*)(HWND, UINT, WPARAM, LPARAM)> aFunctions;

		auto OrigFunction = (LRESULT(__stdcall*)(HWND, UINT, WPARAM, LPARAM))nullptr;
		LRESULT __stdcall HookedFunction(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam) {
			for (auto& func : aFunctions) {
				func(hWnd, msg, wParam, lParam);
			}
			return OrigFunction(hWnd, msg, wParam, lParam);
		}
		
		void Init() {
			if (OrigFunction) return;
			OrigFunction = (LRESULT(__stdcall*)(HWND, UINT, WPARAM, LPARAM))(*(uintptr_t*)0x730941);
			NyaHookLib::Patch(0x730941, &HookedFunction);
		}
	}

	namespace LateInitHook {		
		std::vector<void(*)()> aFunctions;

		auto OrigFunction = (void(*)(int, char**))nullptr;
		void HookedFunction(int a1, char** a2) {
			OrigFunction(a1, a2);
			for (auto& func : aFunctions) {
				func();
			}
		}
		
		void Init() {
			if (OrigFunction) return;
			OrigFunction = (void(*)(int, char**))NyaHookLib::PatchRelative(NyaHookLib::CALL, 0x6B8EBC, &HookedFunction);
		}
	}

	namespace SimServiceHook {
		std::vector<void(*)()> aFunctions;

		auto OrigFunction = (void(__thiscall*)(void*))nullptr;
		void __thiscall HookedFunction(void* a1) {
			for (auto& func : aFunctions) {
				func();
			}
			OrigFunction(a1);
		}

		void Init() {
			if (OrigFunction) return;
			OrigFunction = (void(__thiscall*)(void*))NyaHookLib::PatchRelative(NyaHookLib::CALL, 0x67E3C3, &HookedFunction);
		}
	}
}