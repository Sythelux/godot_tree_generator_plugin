#ifndef TG_TREE_H
#define TG_TREE_H

#include <godot_cpp/classes/curve.hpp>
#include <godot_cpp/classes/fast_noise_lite.hpp>
#include <godot_cpp/classes/mesh.hpp>
#include <godot_cpp/classes/random_number_generator.hpp>
#include <godot_cpp/variant/transform3d.hpp>
#include <godot_cpp/variant/vector3.hpp>

#include "tg_node.hpp"
#include "tg_node_instance.hpp"

// Note:
// I would have loved using namespaces but `GODOT_CLASS` registers the class without it,
// and in that case it would conflict with existing Godot classes...

class TG_Tree : public godot::RefCounted
{
    GDCLASS( TG_Tree, godot::RefCounted )
public:
    TG_Tree();
    ~TG_Tree() override;

    static const int MAX_MATERIALS = 32;

    void _init();

    int get_global_seed() const;
    void set_global_seed( int p_seed );

    float get_mesh_divisions_per_unit() const;
    void set_mesh_divisions_per_unit( float d );

    float get_branch_segments_per_unit() const;
    void set_branch_segments_per_unit( float b );

    bool get_constant_mesh_divisions() const;
    void set_constant_mesh_divisions( bool b );

    godot::Ref<TG_Node> get_root_node() const;
    void set_root_node( godot::Ref<TG_Node> node );

    godot::Ref<TG_NodeInstance> get_root_node_instance() const;

    godot::Array generate();

    // Internal

protected:
    static void _bind_methods();

private:
    void process_node( const TG_Node &node, TG_NodeInstance &node_instance,
                       godot::Vector3 sun_dir_local, godot::RandomNumberGenerator &rng );

    void generate_node_path( const TG_Node &node, TG_NodeInstance &node_instance,
                             godot::Vector3 sun_dir_local, godot::RandomNumberGenerator &rng );

    struct SpawnInfo
    {
        float offset_ratio;
        godot::Basis basis;
    };

    static void generate_spawns( std::vector<TG_Tree::SpawnInfo> &transforms,
                                 const TG_SpawnParams &params, godot::RandomNumberGenerator &rng,
                                 float parent_length );

    int _global_seed = 1337;

    float _mesh_divisions_per_unit = 1.f;
    float _branch_segments_per_unit = 1.f;
    bool _constant_mesh_divisions = false;

    godot::Ref<TG_Node> _root_node;
    godot::Ref<TG_NodeInstance> _root_instance;
};

#endif // TG_TREE_H
