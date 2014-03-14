#include "GameObject.h"

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