#include"GameObject.h"

namespace mea
{
    GameObject::GameObject(std::string tagName)
        :tagName(tagName)
        ,mPos()
    {
       // this->tagName = tagName;
    }

    GameObject::~GameObject(){}

    
    void GameObject::Update(float deltatime)
    {

    }

    void GameObject::Draw()
    {

    }
    void GameObject::Input()
    {

    }

    std::string GameObject::GetTag()
    {
        return tagName;
    }
}