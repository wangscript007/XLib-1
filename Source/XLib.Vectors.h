#pragma once

#include "XLib.Types.h"

template <typename type>
struct vec2
{
	type x, y;

	inline vec2() = default;
	constexpr inline vec2(type _x, type _y) : x(_x), y(_y) {}
	inline void set(type _x, type _y) { x = _x; y = _y; }
};

template <typename type>
struct vec3
{
	type x, y, z;

	inline vec3() = default;
	constexpr inline vec3(type _x, type _y, type _z) : x(_x), y(_y), z(_z) {}
	inline void set(type _x, type _y, type _z) { x = _x; y = _y; z = _z; }
};

template <typename type>
struct vec4
{
	type x, y, z, w;

	inline vec4() = default;
	constexpr inline vec4(type _x, type _y, type _z, type _w) : x(_x), y(_y), z(_z), w(_w) {}
	inline void set(type _x, type _y, type _z, type _w) { x = _x; y = _y; z = _z; w = _w; }
};

template <typename type1, typename type2> constexpr inline bool operator == (const vec2<type1>& a, const vec2<type2>& b) { return a.x == b.x && a.y == b.y; }
template <typename type1, typename type2> constexpr inline bool operator == (const vec3<type1>& a, const vec3<type2>& b) { return a.x == b.x && a.y == b.y && a.z == b.z; }
template <typename type1, typename type2> constexpr inline bool operator == (const vec4<type1>& a, const vec4<type2>& b) { return a.x == b.x && a.y == b.y && a.z == b.z && a.w == b.w }

template <typename type>
struct rectvar
{
	type left, top, right, bottom;

	inline rectvar() = default;
	constexpr inline rectvar(type _left, type _top, type _right, type _bottom) : left(_left), top(_top), right(_right), bottom(_bottom) {}

	inline void set(type _left, type _top, type _right, type _bottom) { left = _left; top = _top; right = _right; bottom = _bottom; }
};

using uint8x2 = vec2<uint8>;
using uint8x3 = vec3<uint8>;
using uint8x4 = vec4<uint8>;
using uint16x2 = vec2<uint16>;
using uint16x3 = vec3<uint16>;
using uint16x4 = vec4<uint16>;
using uint32x2 = vec2<uint32>;
using uint32x3 = vec3<uint32>;
using uint32x4 = vec4<uint32>;
using uint64x2 = vec2<uint64>;
using uint64x3 = vec3<uint64>;
using uint64x4 = vec4<uint64>;

using sint8x2 = vec2<sint8>;
using sint8x3 = vec3<sint8>;
using sint8x4 = vec4<sint8>;
using sint16x2 = vec2<sint16>;
using sint16x3 = vec3<sint16>;
using sint16x4 = vec4<sint16>;
using sint32x2 = vec2<sint32>;
using sint32x3 = vec3<sint32>;
using sint32x4 = vec4<sint32>;
using sint64x2 = vec2<sint64>;
using sint64x3 = vec3<sint64>;
using sint64x4 = vec4<sint64>;

using float32x2 = vec2<float32>;
using float32x3 = vec3<float32>;
using float32x4 = vec4<float32>;
using float64x2 = vec2<float64>;
using float64x3 = vec3<float64>;
using float64x4 = vec4<float64>;

using rectu8 = rectvar<uint8>;
using rectu16 = rectvar<uint16>;
using rectu32 = rectvar<uint32>;
using rectu64 = rectvar<uint64>;
using rects8 = rectvar<sint8>;
using rects16 = rectvar<sint16>;
using rects32 = rectvar<sint32>;
using rects64 = rectvar<sint64>;
using rectf32 = rectvar<float32>;
using rectf64 = rectvar<float64>;