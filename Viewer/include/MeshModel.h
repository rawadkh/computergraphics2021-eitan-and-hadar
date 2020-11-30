#pragma once
#include <glm/glm.hpp>
#include <string>
#include "Face.h"
#include <stdio.h>
#include <iostream>



class MeshModel
{
public:
	MeshModel(std::vector<Face> faces, std::vector<glm::vec3> vertices, std::vector<glm::vec3> normals, const std::string& model_name);
	virtual ~MeshModel();
	const Face& GetFace(int index) const;
	int GetFacesCount() const;
	const std::string& GetModelName() const;
	glm::vec3& getVerticeAtIndex(int index) {
		return vertices_[index];
	}
	std::vector<glm::vec3>& getVertices() {
		return vertices_;
	}
	int getVerticesSize() {
		return vertices_.size();
	}
	glm::mat4x4 GetTransform();
	glm::mat4x4 GetTranslateTransform();
	glm::mat4x4 GetScaleTransform();

	std::vector<glm::vec3> GetNormals();
	std::vector<Face> GetFaces();



	
	void SetModelName(std::string name);
	void SetScaleBarValue(float value);
	float& GetScaleBarValue();
	void SetRotateBarValue(float value);

	void MeshModel::GETlocal();
	void MeshModel::GETworld();

	void LocalRotationTransform_X(const float alfa);
	void LocalRotationTransform_Y(const float alfa);
	void LocalRotationTransform_Z(const float alfa);
	void WorldRotationTransform_Z(const float alfa);
	void WorldRotationTransform_Y(const float alfa);
	void WorldRotationTransform_X(const float alfa);
	void MeshModel::LocalTranslateTransform(const float x, const float y, const float z);
	void MeshModel::WorldTranslateTransform(const float x, const float y, const float z);
	void MeshModel::LocalScaleTransform(const float x, const float y, const float z);
	void MeshModel::WorldScaleTransform(const float x, const float y, const float z);
	void Reset();
	glm::vec3 GetcCenter();
	glm::vec3& getPosition();
	
	float position;
	glm::vec3 objPosition;
	float localRotateBarValue_X;
	float localRotateBarValue_Y;
	float localRotateBarValue_Z;
	float worldRotateBarValue_X;
	float worldRotateBarValue_Y;
	float worldRotateBarValue_Z;
	float localScaleBarValue;
	float localTranslateBarValue_Z;
	float localTranslateBarValue_X;
	float localTranslateBarValue_Y;
	float worldScaleBarValue;
	float worldTranslateBarValue_Z;
	float worldTranslateBarValue_Y;
	float worldTranslateBarValue_X;

protected:
	glm::mat4x4 objectTransform;
	glm::mat4x4 localRotationTransform_Z;
	glm::mat4x4 localRotationTransform_Y;
	glm::mat4x4 localRotationTransform_X;
	glm::mat4x4 worldRotationTransform_Z;
	glm::mat4x4 worldRotationTransform_Y;
	glm::mat4x4 worldRotationTransform_X;
	glm::mat4x4 localTranslateTransform;
	glm::mat4x4 localScaleTransform;

	glm::mat4x4 worldTransform;
	glm::mat4x4 worldRotationTransform;
	glm::mat4x4 worldTranslateTransform;
	glm::mat4x4 worldScaleTransform;
	//
	//
	std::vector<Face> faces_;
	std::vector<glm::vec3> vertices_;
	std::vector<glm::vec3> normals_;
	std::string model_name_;

	

	float worldRotateBarValue;

};
