#pragma once

#include "Utils.h"

class EntityList {
public:
    constexpr auto getEntity(int index) noexcept
    {
        return callVirtualFunction<class Entity*(__thiscall*)(void*, int)>(this, 3)(this, index);
    }

    constexpr auto getClientEntityFromHandle(int handle) noexcept
    {
        return callVirtualFunction<class Entity*(__thiscall*)(void*, int)>(this, 4)(this, handle);
    }

    constexpr auto getHighestEntityIndex() noexcept
    {
        return callVirtualFunction<int(__thiscall*)(void*)>(this, 6)(this);
    }
};
