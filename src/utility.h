#ifndef TG_UTILITY_H
#define TG_UTILITY_H

#include <godot_cpp/variant/array.hpp>
#include <vector>

template <typename T> T max( T a, T b )
{
    return a > b ? a : b;
}

template <typename T>
inline godot::Array to_Packed_real_array_reinterpret( const std::vector<T> &src )
{
    godot::Array dst;
    for ( const auto &item : src )
    {
        dst.push_back( item );
    }
    return dst;
}

inline godot::PackedVector3Array to_packed_array( const std::vector<godot::Vector3> &src )
{
    godot::PackedVector3Array dst;
    for ( const auto &item : src )
    {
        dst.push_back( item );
    }
    return dst;
}

inline godot::PackedVector2Array to_packed_array( const std::vector<godot::Vector2> &src )
{
    godot::PackedVector2Array dst;
    for ( const auto &item : src )
    {
        dst.push_back( item );
    }
    return dst;
}

inline godot::PackedInt32Array to_packed_array( const std::vector<int> &src )
{
    godot::PackedInt32Array dst;
    for ( const auto &item : src )
    {
        dst.push_back( item );
    }
    return dst;
}

template <typename T> void raw_append_to( std::vector<T> &dst, const std::vector<T> &src )
{
    const size_t begin_pos = dst.size();
    dst.resize( dst.size() + src.size() );
    memcpy( dst.data() + begin_pos, src.data(), src.size() * sizeof( T ) );
}

#endif // TG_UTILITY_H
