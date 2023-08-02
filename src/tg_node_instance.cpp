
#include "tg_node_instance.hpp"

using namespace godot;

TG_NodeInstance::TG_NodeInstance()
{
    offset_ratio = 0.f;
}

TG_NodeInstance::~TG_NodeInstance()
{
}

int TG_NodeInstance::getChildCount() const
{
    return static_cast<int>( children.size() );
}
Ref<TG_NodeInstance> TG_NodeInstance::getChildAt( int i )
{
    ERR_FAIL_INDEX_V( i, children.size(), Ref<TG_NodeInstance>() );
    return children[i];
}
int TG_NodeInstance::getPathSize() const
{
    return static_cast<int>( path.size() );
}
Transform3D TG_NodeInstance::getPathTransform( int i ) const
{
    ERR_FAIL_INDEX_V( i, path.size(), Transform3D() );
    return path[i];
}
const Transform3D &TG_NodeInstance::getLocalTransform() const
{
    return local_transform;
}
void TG_NodeInstance::setLocalTransform( const Transform3D &localTransform )
{
    local_transform = localTransform;
}
const std::vector<TG_SurfaceData> &TG_NodeInstance::getSurfaces() const
{
    return surfaces;
}
void TG_NodeInstance::setSurfaces( const std::vector<TG_SurfaceData> &surfs )
{
    TG_NodeInstance::surfaces = surfs;
}
float TG_NodeInstance::getOffsetRatio() const
{
    return offset_ratio;
}
void TG_NodeInstance::setOffsetRatio( float offsetRatio )
{
    offset_ratio = offsetRatio;
}
const std::vector<Transform3D> &TG_NodeInstance::getPath() const
{
    return path;
}
void TG_NodeInstance::setPath( const std::vector<Transform3D> &p )
{
    TG_NodeInstance::path = p;
}
const std::vector<float> &TG_NodeInstance::getPathDistances() const
{
    return path_distances;
}
void TG_NodeInstance::setPathDistances( const std::vector<float> &pathDistances )
{
    path_distances = pathDistances;
}
const std::vector<float> &TG_NodeInstance::getPathRadii() const
{
    return path_radii;
}
void TG_NodeInstance::setPathRadii( const std::vector<float> &pathRadii )
{
    path_radii = pathRadii;
}
const std::vector<Ref<TG_NodeInstance>> &TG_NodeInstance::getChildren() const
{
    return children;
}
void TG_NodeInstance::setChildren( const std::vector<Ref<TG_NodeInstance>> &cs )
{
    TG_NodeInstance::children = cs;
}

void TG_NodeInstance::_bind_methods()
{
    ClassDB::bind_method( D_METHOD( "getChildCount" ), &TG_NodeInstance::getChildCount );
    ClassDB::bind_method( D_METHOD( "getChildAt" ), &TG_NodeInstance::getChildAt );
    ClassDB::bind_method( D_METHOD( "getPathSize" ), &TG_NodeInstance::getPathSize );

    ClassDB::bind_method( D_METHOD( "getPathTransform" ), &TG_NodeInstance::getPathTransform );

    ClassDB::bind_method( D_METHOD( "getLocalTransform" ), &TG_NodeInstance::getLocalTransform );
    ClassDB::bind_method( D_METHOD( "setLocalTransform", "local_transform" ), &TG_NodeInstance::setLocalTransform );
    ADD_PROPERTY( PropertyInfo( Variant::OBJECT, "local_transform" ), "setLocalTransform", "getLocalTransform" );
}
void TG_NodeInstance::addChild( godot::Ref<TG_NodeInstance> param )
{
    children.push_back(param);
}
