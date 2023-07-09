# SPDX-License-Identifier: Unlicense

target_sources( ${PROJECT_NAME}
    PRIVATE
        RegisterExtension.cpp
        tg_leaf_params.cpp
        tg_path_params.cpp
        tg_tree.cpp
        tg_node.cpp
        tg_node_instance.cpp
)

target_include_directories( ${PROJECT_NAME}
    PRIVATE
        "src"
)
