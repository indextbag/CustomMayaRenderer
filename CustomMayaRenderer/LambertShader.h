#pragma once

#include <Maya/MPxSurfaceShadingNodeOverride.h>

class LambertShader : public MHWRender::MPxSurfaceShadingNodeOverride
{
public:
	static MHWRender::MPxSurfaceShadingNodeOverride *creator(const MObject &obj);

	~LambertShader() override;

	MHWRender::DrawAPI supportedDrawAPIs() const override;

	MString fragmentName() const override;
	void getCustomMappings(MHWRender::MAttributeParameterMappingList &mappings) override;

	MString primaryColorParameter() const override;
	MString bumpAttribute() const override;

private:
	LambertShader(const MObject &obj);
};