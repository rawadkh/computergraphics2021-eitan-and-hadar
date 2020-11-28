#pragma once
#include <glm/glm.hpp>

class Camera 
{
public:
	Camera();
	virtual ~Camera();
	
	
	void Camera::SetCameraLookAt(const glm::vec3& eye, const glm::vec3& at, const glm::vec3& up);
	void Camera::Translate(const glm::vec4& v);
	const glm::mat4x4& Camera::GetProjectionTransformation() const;
	const glm::mat4x4& Camera::GetViewTransformation() const;
	glm::mat4x4 Camera::LookAt(const glm::vec4& eye, const glm::vec4& at, const glm::vec4& up);
	glm::vec4 Camera::normalization(const glm::vec3& v);
	glm::vec4 Camera::crossproduct(const glm::vec4& v1, const glm::vec4& v2);
	void Camera::TranslateSpace(float x, float y, float z);
	void Camera::TranslateWorld(float x, float y, float z);
	void Camera::TranslatLocal(float x, float y, float z);
	glm::mat4x4 GetTransform();
	void SetDistance(double value);
	glm::mat4x4 GetPerspectiveNormalization();
	glm::mat4x4 GetOrthoNormalization();
	glm::vec3 GetViewPortTransformation(glm::vec3 vec, float width, float height);
	glm::vec4 GetFrustum();
	int GetActiveProjection();
	void SetActiveProjection(bool value);
	float& GetScaleBarValue();
	void SetScaleBarValue(float value);
	void LocalRotationTransform_X(const float alfa);
	void LocalRotationTransform_Y(const float alfa);
	void LocalRotationTransform_Z(const float alfa);

	void SetFrustum(glm::vec4 tempFrus);


	
	void Camera::RotateLocal(float x);
	void Camera::ScaleLocal(float x, float y, float z);

	void Camera::RotateWorld(float x, float y, float z);
	void Camera::ScaleWorld(float x, float y, float z);

	void Camera::RotateWorld(float x);

	glm::mat4x4 c;
	glm::mat4x4 cinv;

	glm::mat4x4 view_transformation__;
	glm::mat4x4 view_transformation_;
	glm::mat4x4 projection_transformation_;
	glm::mat4x4 objectTransform;
	glm::mat4x4 localTranslateTransform;
	glm::mat4x4 localScaleTransform;
	float scaleBarTransform;
	double distance;

	float viewport_width_;
	float viewport_height_;
	float fovy;
	float aspect;
	float zNear;
	float zFar;
	float right;
	float left;
	float bottom;
	float top;
	int activeProjection;

	glm::mat4x4 worldTransform;
	static glm::mat4x4 worldRotationTransform;
	static glm::mat4x4 worldTranslateTransform;
	static glm::mat4x4 worldScaleTransform;
	//s
	float localRotateBarValue_X = 0;
	float localRotateBarValue_Y = 0;
	float localRotateBarValue_Z = 0;
	glm::mat4x4 localRotationTransform_Z;
	glm::mat4x4 localRotationTransform_Y;
	glm::mat4x4 localRotationTransform_X;
};