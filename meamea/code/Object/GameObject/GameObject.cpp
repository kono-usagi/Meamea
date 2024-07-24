#include"GameObject.h"

namespace mea
{
    GameObject::GameObject(std::string tagName)
        :mTag(tagName)
        ,mPos(VGet(0, 0, 0))
    {
    }

    GameObject::~GameObject(){}
}