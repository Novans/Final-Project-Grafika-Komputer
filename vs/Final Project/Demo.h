#pragma once
#include "RenderEngine.h"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtx/vector_angle.hpp>
#include <SOIL/SOIL.h>

class Demo :
	public RenderEngine
{
public:
	Demo();
	~Demo();
private:
	GLuint shaderProgram, VBO, VAO, EBO, texture, VBO2, VAO2, EBO2, texture2, VBO3, VAO3, EBO3, texture3, VBO4, VAO4, EBO4, texture4, VBO5, VAO5, EBO5, texture5, VBO6, VAO6, EBO6, texture6, VBO7, VAO7, EBO7, texture7, VBO8, VAO8, EBO8, texture8, VBO9, VAO9, EBO9, texture9, VBO10, VAO10, EBO10, texture10, VBO11, VAO11, EBO11, texture11, VBO12, VAO12, EBO12, texture12, VBO13, VAO13, EBO13, texture13, VBO14, VAO14, EBO14, texture14, VBO15, VAO15, EBO15, texture15, VBO16, VAO16, EBO16, texture16;
	float viewCamX, viewCamY, viewCamZ, upCamX, upCamY, upCamZ, posCamX, posCamY, posCamZ, CAMERA_SPEED, fovy;
	float angle = 0;
	virtual void Init();
	virtual void DeInit();
	virtual void Update(double deltaTime);
	virtual void Render();
	virtual void ProcessInput(GLFWwindow* window);
	void BuildLukisanADepan();
	void BuildLukisanBDepan();
	void BuildLukisanCDepan();
	void BuildLukisanBingkai();
	void BuildPilar();
	void BuildDindingA();
	void BuildDindingB();
	void BuildDindingC();
	void BuildDindingKananA();
	void BuildDindingKananB();
	void BuildDindingKananC();
	void BuildPapanTulis();
	void BuildPapanTulisBorder();
	void BuildPintuBingkai();
	void BuildLantai();
	void BuildPintu();
	void DrawLukisanADepan();
	void DrawLukisanBDepan();
	void DrawLukisanCDepan();
	void DrawLukisanABingkai();
	void DrawLukisanBBingkai();
	void DrawLukisanCBingkai();
	void DrawPilarDepanKiri();
	void DrawPilarDepanKanan();
	void DrawPilarKiriDepan();
	void DrawPilarKiriBelakang();
	void DrawPilarKananDepan();
	void DrawPilarKananBelakang();
	void DrawPilarBelakangKiri();
	void DrawPilarBelakangKanan();
	void DrawDindingKiriPapan();
	void DrawDindingKananPapan();
	void DrawDindingBelakangPapan();
	void DrawDindingKiri();
	void DrawDindingKananA();
	void DrawDindingKananB();
	void DrawDindingKananC();
	void DrawPapanTulis();
	void DrawPapanTulisBorder();
	void DrawPintuBingkai();
	void DrawLantai();
	void DrawPintu();
	void MoveCamera(float speed);
	void StrafeCamera(float speed);
	void VerticalCamera(float speed);
	void RotateCamera(float speed);
	void InitCamera();
};

