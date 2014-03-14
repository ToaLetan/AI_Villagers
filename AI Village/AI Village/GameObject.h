#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

class GameObject
{
	protected:
		virtual int GetLayer();
		virtual void SetLayer(int layerNum);

		GameObject();
		~GameObject();

		virtual void Update(double deltaTime) = 0;
		virtual void Render() = 0;

	private:
		int layer;
};

#endif