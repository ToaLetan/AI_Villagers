#include "GameObject.h"

std::string GameObject::GetName()
{
	return name;
}

void GameObject::SetName(std::string objName)
{
	name = objName;
}

int GameObject::GetLayer()
{
	return layer;
}

void GameObject::SetLayer(int value)
{
	layer = value;
}

GameObject::GameObject()
{
	layer = 0;
}

GameObject::~GameObject()
{

}