#pragma once

class ITextural {
public:
	ITextural() {};

	virtual Material* GetTexture() = 0;
	virtual void SetTexture(Material* material) = 0;

};