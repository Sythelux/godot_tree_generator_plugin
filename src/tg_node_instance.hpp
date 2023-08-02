#ifndef TG_NODE_INSTANCE_H
#define TG_NODE_INSTANCE_H

#include "godot_cpp/core/binder_common.hpp"
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/transform3d.hpp>

#include <vector>

// Godot expects 4 floats per tangent. This struct should match the same layout.
struct TG_Tangents
{
    godot::Vector3 tangent;
    float binormal_sign;
};

struct TG_SurfaceData
{
    std::vector<godot::Vector3> positions;
    std::vector<godot::Vector3> normals;
    std::vector<godot::Vector2> uvs;
    std::vector<TG_Tangents> tangents;
    std::vector<int> indices;
};

class TG_NodeInstance : public godot::RefCounted
{
    GDCLASS( TG_NodeInstance, godot::RefCounted )
    void addChild( godot::Ref<TG_NodeInstance> param );

public:
    TG_NodeInstance();
    ~TG_NodeInstance() override;

    int getChildCount() const;
    godot::Ref<TG_NodeInstance> getChildAt( int i );
    int getPathSize() const;
    godot::Transform3D getPathTransform( int i ) const;
    const godot::Transform3D &getLocalTransform() const;
    void setLocalTransform( const godot::Transform3D &localTransform );
    const std::vector<TG_SurfaceData> &getSurfaces() const;
    void setSurfaces( const std::vector<TG_SurfaceData> &surfaces );
    float getOffsetRatio() const;
    void setOffsetRatio( float offsetRatio );
    const std::vector<godot::Transform3D> &getPath() const;
    void setPath( const std::vector<godot::Transform3D> &path );
    const std::vector<float> &getPathDistances() const;
    void setPathDistances( const std::vector<float> &pathDistances );
    const std::vector<float> &getPathRadii() const;
    void setPathRadii( const std::vector<float> &pathRadii );
    const std::vector<godot::Ref<TG_NodeInstance>> &getChildren() const;
    void setChildren( const std::vector<godot::Ref<TG_NodeInstance>> &children );

private:
    godot::Transform3D local_transform;
    std::vector<TG_SurfaceData> surfaces;

    // Where is the node instance along its parent, as a 0 to 1 ratio
    float offset_ratio;

    std::vector<godot::Transform3D> path;
    std::vector<float> path_distances;
    std::vector<float> path_radii;

    std::vector<godot::Ref<TG_NodeInstance>> children;

protected:
    static void _bind_methods();
};

#endif // TG_NODE_INSTANCE_H
