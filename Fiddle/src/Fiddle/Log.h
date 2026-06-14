#pragma once
#include "Core.h"
#include <memory>
#include "spdlog/spdlog.h"

namespace Fiddle {
	class FIDDLE_API Log
	{
	public:
		static void init();
		inline static std::shared_ptr<spdlog::logger>& coreLogger() { return s_coreLogger; }
		inline static std::shared_ptr<spdlog::logger>& clientLogger() { return s_clientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_coreLogger;
		static std::shared_ptr<spdlog::logger> s_clientLogger;
	};
}

#define FDL_CORE_ERROR(...) ::Fiddle::Log::coreLogger()->error(__VA_ARGS__)
#define FDL_CORE_WARN(...)  ::Fiddle::Log::coreLogger()->warn(__VA_ARGS__)
#define FDL_CORE_INFO(...)  ::Fiddle::Log::coreLogger()->info(__VA_ARGS__)
#define FDL_CORE_TRACE(...) ::Fiddle::Log::coreLogger()->trace(__VA_ARGS__)

#define FDL_ERROR(...) ::Fiddle::Log::clientLogger()->error(__VA_ARGS__)
#define FDL_WARN(...)  ::Fiddle::Log::clientLogger()->warn(__VA_ARGS__)
#define FDL_INFO(...)  ::Fiddle::Log::clientLogger()->info(__VA_ARGS__)
#define FDL_TRACE(...) ::Fiddle::Log::clientLogger()->trace(__VA_ARGS__)