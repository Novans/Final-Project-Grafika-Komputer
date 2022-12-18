#include "Demo.h"

Demo::Demo() {

}

Demo::~Demo() {
}

void Demo::Init() {
	// build and compile our shader program
	// ------------------------------------
	shaderProgram = BuildShader("vertexShader.vert", "fragmentShader.frag", nullptr);

	BuildLukisanADepan();

	BuildLukisanBDepan();

	BuildLukisanCDepan();

	BuildLukisanBingkai();

	BuildPilar();

	BuildDindingA();

	BuildDindingB();

	BuildDindingC();

	BuildDindingKanan();

	BuildLukisanKananA();

	BuildLukisanKananB();

	BuildPapanTulis();

	BuildPapanTulisBorder();

	BuildPintuBingkai();

	BuildLantai();

	BuildPintu();

	BuildLukisanKananC();

	BuildLukisanKananBingkai();

	BuildSaklar();

	BuildSaklarBorder();

	BuildDindingBelakang();

	BuildAtap();

	BuildVentilasiDepan();

	BuildVentilasiBorder();

	BuildLampuDepan();

	BuildLampuBorder();

	BuildKanopiKipas();

	BuildLeherKipas();

	BuildKipas();

	BuildMeja();

	BuildKakiKursi();

	BuildKursi();

	BuildLaptop();

	BuildLaptopDepan();

	InitCamera();
}

void Demo::DeInit() {
	// optional: de-allocate all resources once they've outlived their purpose:
	// ------------------------------------------------------------------------
	glDeleteVertexArrays(1, &VAO);
	glDeleteBuffers(1, &VBO);
	glDeleteBuffers(1, &EBO);
	glDeleteVertexArrays(1, &VAO2);
	glDeleteBuffers(1, &VBO2);
	glDeleteBuffers(1, &EBO2);
	glDeleteVertexArrays(1, &VAO3);
	glDeleteBuffers(1, &VBO3);
	glDeleteBuffers(1, &EBO3);
	glDeleteVertexArrays(1, &VAO4);
	glDeleteBuffers(1, &VBO4);
	glDeleteBuffers(1, &EBO4);
	glDeleteVertexArrays(1, &VAO5);
	glDeleteBuffers(1, &VBO5);
	glDeleteBuffers(1, &EBO5);
	glDeleteVertexArrays(1, &VAO6);
	glDeleteBuffers(1, &VBO6);
	glDeleteBuffers(1, &EBO6);
	glDeleteVertexArrays(1, &VAO7);
	glDeleteBuffers(1, &VBO7);
	glDeleteBuffers(1, &EBO7);
	glDeleteVertexArrays(1, &VAO8);
	glDeleteBuffers(1, &VBO8);
	glDeleteBuffers(1, &EBO8);
	glDeleteVertexArrays(1, &VAO9);
	glDeleteBuffers(1, &VBO9);
	glDeleteBuffers(1, &EBO9);
	glDeleteVertexArrays(1, &VAO10);
	glDeleteBuffers(1, &VBO10);
	glDeleteBuffers(1, &EBO10);
	glDeleteVertexArrays(1, &VAO11);
	glDeleteBuffers(1, &VBO11);
	glDeleteBuffers(1, &EBO11);
	glDeleteVertexArrays(1, &VAO12);
	glDeleteBuffers(1, &VBO12);
	glDeleteBuffers(1, &EBO12);
	glDeleteVertexArrays(1, &VAO13);
	glDeleteBuffers(1, &VBO13);
	glDeleteBuffers(1, &EBO13);
	glDeleteVertexArrays(1, &VAO14);
	glDeleteBuffers(1, &VBO14);
	glDeleteBuffers(1, &EBO14);
	glDeleteVertexArrays(1, &VAO15);
	glDeleteBuffers(1, &VBO15);
	glDeleteBuffers(1, &EBO15);
	glDeleteVertexArrays(1, &VAO16);
	glDeleteBuffers(1, &VBO16);
	glDeleteBuffers(1, &EBO16);
	glDeleteVertexArrays(1, &VAO17);
	glDeleteBuffers(1, &VBO17);
	glDeleteBuffers(1, &EBO17);
	glDeleteVertexArrays(1, &VAO18);
	glDeleteBuffers(1, &VBO18);
	glDeleteBuffers(1, &EBO18);
	glDeleteVertexArrays(1, &VAO19);
	glDeleteBuffers(1, &VBO19);
	glDeleteBuffers(1, &EBO19);
	glDeleteVertexArrays(1, &VAO20);
	glDeleteBuffers(1, &VBO20);
	glDeleteBuffers(1, &EBO20);
	glDeleteVertexArrays(1, &VAO21);
	glDeleteBuffers(1, &VBO21);
	glDeleteBuffers(1, &EBO21);
	glDeleteVertexArrays(1, &VAO22);
	glDeleteBuffers(1, &VBO22);
	glDeleteBuffers(1, &EBO22);
	glDeleteVertexArrays(1, &VAO13);
	glDeleteBuffers(1, &VBO23);
	glDeleteBuffers(1, &EBO23);
	glDeleteVertexArrays(1, &VAO24);
	glDeleteBuffers(1, &VBO24);
	glDeleteBuffers(1, &EBO24);
	glDeleteVertexArrays(1, &VAO25);
	glDeleteBuffers(1, &VBO25);
	glDeleteBuffers(1, &EBO25);
	glDeleteVertexArrays(1, &VAO26);
	glDeleteBuffers(1, &VBO26);
	glDeleteBuffers(1, &EBO26);
	glDeleteVertexArrays(1, &VAO27);
	glDeleteBuffers(1, &VBO27);
	glDeleteBuffers(1, &EBO27);
	glDeleteVertexArrays(1, &VAO28);
	glDeleteBuffers(1, &VBO28);
	glDeleteBuffers(1, &EBO28);
	glDeleteVertexArrays(1, &VAO29);
	glDeleteBuffers(1, &VBO29);
	glDeleteBuffers(1, &EBO29);
	glDeleteVertexArrays(1, &VAO30);
	glDeleteBuffers(1, &VBO30);
	glDeleteBuffers(1, &EBO30);
	glDeleteVertexArrays(1, &VAO31);
	glDeleteBuffers(1, &VBO31);
	glDeleteBuffers(1, &EBO31);
	glDeleteVertexArrays(1, &VAO32);
	glDeleteBuffers(1, &VBO32);
	glDeleteBuffers(1, &EBO32);
	glDeleteVertexArrays(1, &VAO33);
	glDeleteBuffers(1, &VBO33);
	glDeleteBuffers(1, &EBO33);
	glDeleteVertexArrays(1, &VAO34);
	glDeleteBuffers(1, &VBO34);
	glDeleteBuffers(1, &EBO34);
}

// process all input: query GLFW whether relevant keys are pressed/released this frame and react accordingly
// ---------------------------------------------------------------------------------------------------------
void Demo::ProcessInput(GLFWwindow* window) {
	if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS) {
		glfwSetWindowShouldClose(window, true);
	}

	// zoom camera
	// -----------
	if (glfwGetMouseButton(window, GLFW_MOUSE_BUTTON_RIGHT) == GLFW_PRESS) {
		if (fovy < 90) {
			fovy += 0.0001f;
		}
	}

	if (glfwGetMouseButton(window, GLFW_MOUSE_BUTTON_LEFT) == GLFW_PRESS) {
		if (fovy > 0) {
			fovy -= 0.0001f;
		}
	}

	// update camera movement 
	// -------------
	if (glfwGetKey(window, GLFW_KEY_W) == GLFW_PRESS) {
		MoveCamera(CAMERA_SPEED);
	}
	if (glfwGetKey(window, GLFW_KEY_S) == GLFW_PRESS) {
		MoveCamera(-CAMERA_SPEED);
	}

	if (glfwGetKey(window, GLFW_KEY_A) == GLFW_PRESS) {
		StrafeCamera(-CAMERA_SPEED);
	}

	if (glfwGetKey(window, GLFW_KEY_D) == GLFW_PRESS) {
		StrafeCamera(CAMERA_SPEED);
	}

	if (glfwGetKey(window, GLFW_KEY_SPACE) == GLFW_PRESS) {
		VerticalCamera(CAMERA_SPEED);
	}

	// update camera rotation
	// ----------------------
	double mouseX, mouseY;
	double midX = screenWidth / 2;
	double midY = screenHeight / 2;
	float angleY = 0.0f;
	float angleZ = 0.0f;

	// Get mouse position
	glfwGetCursorPos(window, &mouseX, &mouseY);
	if ((mouseX == midX) && (mouseY == midY)) {
		return;
	}

	// Set mouse position
	glfwSetCursorPos(window, midX, midY);

	// Get the direction from the mouse cursor, set a resonable maneuvering speed
	angleY = (float)((midX - mouseX)) / 1000;
	angleZ = (float)((midY - mouseY)) / 1000;

	// The higher the value is the faster the camera looks around.
	viewCamY += angleZ * 2;

	// limit the rotation around the x-axis
	if ((viewCamY - posCamY) > 8) {
		viewCamY = posCamY + 8;
	}
	if ((viewCamY - posCamY) < -8) {
		viewCamY = posCamY - 8;
	}
	RotateCamera(-angleY);

}

void Demo::Update(double deltaTime) {
	angleKipas -= (float)((deltaTime * 2.0f) / 2);
}

void Demo::Render() {
	glViewport(0, 0, this->screenWidth, this->screenHeight);

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);

	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

	glEnable(GL_DEPTH_TEST);
	glEnable(GL_ALPHA_TEST);
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	// Pass perspective projection matrix
	glm::mat4 projection = glm::perspective(fovy, (GLfloat)this->screenWidth / (GLfloat)this->screenHeight, 0.1f, 100.0f);
	GLint projLoc = glGetUniformLocation(this->shaderProgram, "projection");
	glUniformMatrix4fv(projLoc, 1, GL_FALSE, glm::value_ptr(projection));

	// LookAt camera (position, target/direction, up)
	glm::mat4 view = glm::lookAt(glm::vec3(posCamX, posCamY, posCamZ), glm::vec3(viewCamX, viewCamY, viewCamZ), glm::vec3(upCamX, upCamY, upCamZ));
	GLint viewLoc = glGetUniformLocation(this->shaderProgram, "view");
	glUniformMatrix4fv(viewLoc, 1, GL_FALSE, glm::value_ptr(view));

	// set lighting attributes
	GLint lightPosLoc = glGetUniformLocation(this->shaderProgram, "lightPos");
	glUniform3f(lightPosLoc, 0, 5.2, 15.5);
	GLint viewPosLoc = glGetUniformLocation(this->shaderProgram, "viewPos");
	glUniform3f(viewPosLoc, 0, -1, 0);
	GLint lightColorLoc = glGetUniformLocation(this->shaderProgram, "lightColor");
	glUniform3f(lightColorLoc, 1.0f, 1.0f, 1.0f);

	DrawLukisanADepan();

	DrawLukisanBDepan();

	DrawLukisanCDepan();

	DrawLukisanBingkai();

	DrawLukisanBBingkai();

	DrawLukisanCBingkai();

	DrawPilarDepanKiri();

	DrawPilarDepanKanan();

	DrawPilarKiriDepan();

	DrawPilarKiriBelakang();

	DrawPilarKananDepan();

	DrawPilarKananBelakang();

	DrawPilarBelakangKiri();

	DrawPilarBelakangKanan();

	DrawDindingKiriPapan();
	
	DrawDindingKananPapan();

	DrawDindingKiriBelakang();

	DrawDindingKananBelakang();

	DrawDindingBelakangPapan();

	DrawDindingKanan();

	DrawLukisanKananA();

	DrawPapanTulis();

	DrawPapanTulisBorder();

	DrawPintuBingkai();

	DrawDindingKiri();

	DrawLukisanKananB();

	DrawLantai();

	DrawPintu();

	DrawLukisanKananC();

	DrawLukisanKananABingkai();

	DrawLukisanKananBBingkai();

	DrawLukisanKananCBingkai();

	DrawSaklar();

	DrawSaklarBorder();

	DrawDindingBelakang();

	DrawAtap();

	DrawVentilasiDepanA();

	DrawVentilasiDepanB();

	DrawVentilasiBorderA();

	DrawVentilasiBorderB();

	DrawLampuDepan();

	DrawLampuBorder();

	DrawKanopiKipasA();

	DrawLeherKipasA();

	DrawKipasA();

	DrawKanopiKipasB();

	DrawLeherKipasB();

	DrawKipasB();

	DrawMeja();

	DrawKakiKursiA();

	DrawKakiKursiB();

	DrawKakiKursiC();

	DrawKakiKursiD();

	DrawKakiKursiE();

	DrawKakiKursiF();

	DrawKakiKursiG();

	DrawKakiKursiH();

	DrawKakiKursiI();

	DrawKakiKursiJ();

	DrawKakiKursiK();

	DrawKursiA();

	DrawKursiB();

	DrawKursiC();

	DrawKursiD();

	DrawKursiE();

	DrawKursiF();

	DrawKursiG();

	DrawKursiH();

	DrawKursiI();

	DrawKursiJ();

	DrawKursiK();

	DrawLaptopA();

	DrawLaptopB();

	DrawLaptopC();

	DrawLaptopD();

	DrawLaptopE();

	DrawLaptopF();

	DrawLaptopG();

	DrawLaptopH();

	DrawLaptopI();

	DrawLaptopJ();

	DrawLaptopK();

	DrawLaptopDepanA();

	DrawLaptopDepanB();

	DrawLaptopDepanC();

	DrawLaptopDepanD();

	DrawLaptopDepanE();

	DrawLaptopDepanF();

	DrawLaptopDepanG();

	DrawLaptopDepanH();

	DrawLaptopDepanI();

	DrawLaptopDepanJ();

	DrawLaptopDepanK();

	glDisable(GL_BLEND);
	glDisable(GL_DEPTH_TEST);
}

void Demo::BuildLukisanADepan() {
	// load image into texture memory
	// ------------------------------
	// Load and create a texture 
	glGenTextures(1, &texture);
	glBindTexture(GL_TEXTURE_2D, texture);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	int width, height;
	unsigned char* image = SOIL_load_image("lukisanADepan.png", &width, &height, 0, SOIL_LOAD_RGBA);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
	SOIL_free_image_data(image);
	glBindTexture(GL_TEXTURE_2D, 0);

	glGenTextures(1, &stexturelukisan);
	glBindTexture(GL_TEXTURE_2D, stexturelukisan);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	image = SOIL_load_image("lukisan_specular.png", &width, &height, 0, SOIL_LOAD_RGBA);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
	SOIL_free_image_data(image);
	glBindTexture(GL_TEXTURE_2D, 0);

	// set up vertex data (and buffer(s)) and configure vertex attributes
	// ------------------------------------------------------------------
	float vertices[] = {
		// format position, tex coords
		-1, 0, 0.2, 0, 0, 0.0f, 0.0f, 1.0f,  // 0
		 1, 0, 0.2, 1, 0, 0.0f, 0.0f, 1.0f,  // 1
		-1, 3, 0.2, 0, 1, 0.0f, 0.0f, 1.0f,  // 2
		 1, 3, 0.2, 1, 1, 0.0f, 0.0f, 1.0f,  // 3
		
	};

	unsigned int indices[] = {
		0,  1,  3,  0,  2,  3,   // bottom
	};

	glGenVertexArrays(1, &VAO);
	glGenBuffers(1, &VBO);
	glGenBuffers(1, &EBO);
	// bind the Vertex Array Object first, then bind and set vertex buffer(s), and then configure vertex attributes(s).
	glBindVertexArray(VAO);

	glBindBuffer(GL_ARRAY_BUFFER, VBO);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);

	// define position pointer layout 0
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(0 * sizeof(GLfloat)));
	glEnableVertexAttribArray(0);

	// define texcoord pointer layout 1
	glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
	glEnableVertexAttribArray(1);

	// define normal pointer layout 2
	glVertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(5 * sizeof(GLfloat)));
	glEnableVertexAttribArray(2);

	// note that this is allowed, the call to glVertexAttribPointer registered VBO as the vertex attribute's bound vertex buffer object so afterwards we can safely unbind
	glBindBuffer(GL_ARRAY_BUFFER, 0);

	// You can unbind the VAO afterwards so other VAO calls won't accidentally modify this VAO, but this rarely happens. Modifying other
	// VAOs requires a call to glBindVertexArray anyways so we generally don't unbind VAOs (nor VBOs) when it's not directly necessary.
	glBindVertexArray(0);

	// remember: do NOT unbind the EBO while a VAO is active as the bound element buffer object IS stored in the VAO; keep the EBO bound.
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);

}

void Demo::DrawLukisanADepan()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	glActiveTexture(GL_TEXTURE1);
	glBindTexture(GL_TEXTURE_2D, stexturelukisan);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.specular"), 1);

	GLint shininessMatLoc = glGetUniformLocation(this->shaderProgram, "material.shininess");
	glUniform1f(shininessMatLoc, 0.25f);

	glBindVertexArray(VAO); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(-8.5, 1, 8));

	model = glm::rotate(model, glm::radians(90.0f), glm::vec3(0, 1, 0));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::BuildLukisanBingkai() {
	// load image into texture memory
	// ------------------------------
	// Load and create a texture 
	glGenTextures(1, &texture2);
	glBindTexture(GL_TEXTURE_2D, texture2);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	int width, height;
	unsigned char* image = SOIL_load_image("lukisanBingkai.png", &width, &height, 0, SOIL_LOAD_RGBA);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
	SOIL_free_image_data(image);
	glBindTexture(GL_TEXTURE_2D, 0);

	// set up vertex data (and buffer(s)) and configure vertex attributes
	// ------------------------------------------------------------------
	float vertices[] = {
		// format position, tex coords
		// left
		-1, 0,   0, 0, 0, -1.0f, 0.0f, 0.0f,  // 0
		-1, 0, 0.2, 1, 0, -1.0f, 0.0f, 0.0f,  // 1
		-1, 3,   0, 0, 1, -1.0f, 0.0f, 0.0f,  // 2
		-1, 3, 0.2, 1, 1, -1.0f, 0.0f, 0.0f,  // 3

		// right
		1, 0,   0, 0, 0, 1.0f, 0.0f, 0.0f,  // 4
		1, 0, 0.2, 1, 0, 1.0f, 0.0f, 0.0f,  // 5
		1, 3,   0, 0, 1, 1.0f, 0.0f, 0.0f,  // 6
		1, 3, 0.2, 1, 1, 1.0f, 0.0f, 0.0f,  // 7

		// top
		-1, 3, 0.2, 0, 0, 0.0f, 1.0f, 0.0f,  // 8
		 1, 3, 0.2, 1, 0, 0.0f, 1.0f, 0.0f,  // 9
		-1, 3,   0, 0, 1, 0.0f, 1.0f, 0.0f,  // 10
		 1, 3,   0, 1, 1, 0.0f, 1.0f, 0.0f,  // 11

		// bottom
		-1, 0, 0.2, 0, 0, 0.0f, -1.0f, 0.0f,  // 12
		 1, 0, 0.2, 1, 0, 0.0f, -1.0f, 0.0f,  // 13
		-1, 0,   0, 0, 1, 0.0f, -1.0f, 0.0f,  // 14
		 1, 0,   0, 1, 1, 0.0f, -1.0f, 0.0f,  // 15

	};

	unsigned int indices[] = {
		 0,  1,  3,  0,  2,  3,   // left
		 4,  5,  7,  4,  6,  7,   // right
		 8,  9, 11,  8, 10, 11,   // top
		12, 13, 15, 12, 14, 15,   // bottom
	};

	glGenVertexArrays(1, &VAO2);
	glGenBuffers(1, &VBO2);
	glGenBuffers(1, &EBO2);
	// bind the Vertex Array Object first, then bind and set vertex buffer(s), and then configure vertex attributes(s).
	glBindVertexArray(VAO2);

	glBindBuffer(GL_ARRAY_BUFFER, VBO2);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO2);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);

	// define position pointer layout 0
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(0 * sizeof(GLfloat)));
	glEnableVertexAttribArray(0);

	// define texcoord pointer layout 1
	glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
	glEnableVertexAttribArray(1);

	// define normal pointer layout 2
	glVertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(5 * sizeof(GLfloat)));
	glEnableVertexAttribArray(2);

	// note that this is allowed, the call to glVertexAttribPointer registered VBO as the vertex attribute's bound vertex buffer object so afterwards we can safely unbind
	glBindBuffer(GL_ARRAY_BUFFER, 0);

	// You can unbind the VAO afterwards so other VAO calls won't accidentally modify this VAO, but this rarely happens. Modifying other
	// VAOs requires a call to glBindVertexArray anyways so we generally don't unbind VAOs (nor VBOs) when it's not directly necessary.
	glBindVertexArray(0);

	// remember: do NOT unbind the EBO while a VAO is active as the bound element buffer object IS stored in the VAO; keep the EBO bound.
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);

}

void Demo::DrawLukisanBingkai()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture2);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	GLint shininessMatLoc = glGetUniformLocation(this->shaderProgram, "material.shininess");
	glUniform1f(shininessMatLoc, 0.25f);

	glBindVertexArray(VAO2); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(-8.5, 1, 8));

	model = glm::rotate(model, glm::radians(90.0f), glm::vec3(0, 1, 0));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 24, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::DrawLukisanBBingkai()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture2);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	GLint shininessMatLoc = glGetUniformLocation(this->shaderProgram, "material.shininess");
	glUniform1f(shininessMatLoc, 0.25f);

	glBindVertexArray(VAO2); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(-8.5, 1, 16));

	model = glm::rotate(model, glm::radians(90.0f), glm::vec3(0, 1, 0));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 24, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::DrawLukisanCBingkai()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture2);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	GLint shininessMatLoc = glGetUniformLocation(this->shaderProgram, "material.shininess");
	glUniform1f(shininessMatLoc, 0.25f);

	glBindVertexArray(VAO2); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(-8.5, 1, 24));

	model = glm::rotate(model, glm::radians(90.0f), glm::vec3(0, 1, 0));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 24, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::BuildPilar() {
	// load image into texture memory
	// ------------------------------
	// Load and create a texture 
	glGenTextures(1, &texture3);
	glBindTexture(GL_TEXTURE_2D, texture3);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	int width, height;
	unsigned char* image = SOIL_load_image("pilar.png", &width, &height, 0, SOIL_LOAD_RGBA);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
	SOIL_free_image_data(image);
	glBindTexture(GL_TEXTURE_2D, 0);

	// set up vertex data (and buffer(s)) and configure vertex attributes
	// ------------------------------------------------------------------
	float vertices[] = {
		// format position, tex coords
		// pilar
		-0.5, 0, 0, 0, 0, 0.0f, 0.0f, 1.0f,  // 0
		 0.5, 0, 0, 1, 0, 0.0f, 0.0f, 1.0f,  // 1
		-0.5, 5, 0, 0, 1, 0.0f, 0.0f, 1.0f,  // 2
		 0.5, 5, 0, 1, 1, 0.0f, 0.0f, 1.0f,  // 3

	};

	unsigned int indices[] = {
		 0,  1,  3,  0,  2,  3,   // left
	};

	glGenVertexArrays(1, &VAO3);
	glGenBuffers(1, &VBO3);
	glGenBuffers(1, &EBO3);
	// bind the Vertex Array Object first, then bind and set vertex buffer(s), and then configure vertex attributes(s).
	glBindVertexArray(VAO3);

	glBindBuffer(GL_ARRAY_BUFFER, VBO3);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO3);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);

	// define position pointer layout 0
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(0 * sizeof(GLfloat)));
	glEnableVertexAttribArray(0);

	// define texcoord pointer layout 1
	glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
	glEnableVertexAttribArray(1);

	// define normal pointer layout 2
	glVertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(5 * sizeof(GLfloat)));
	glEnableVertexAttribArray(2);

	// note that this is allowed, the call to glVertexAttribPointer registered VBO as the vertex attribute's bound vertex buffer object so afterwards we can safely unbind
	glBindBuffer(GL_ARRAY_BUFFER, 0);

	// You can unbind the VAO afterwards so other VAO calls won't accidentally modify this VAO, but this rarely happens. Modifying other
	// VAOs requires a call to glBindVertexArray anyways so we generally don't unbind VAOs (nor VBOs) when it's not directly necessary.
	glBindVertexArray(0);

	// remember: do NOT unbind the EBO while a VAO is active as the bound element buffer object IS stored in the VAO; keep the EBO bound.
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);

}

void Demo::DrawPilarDepanKiri()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture3);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	glBindVertexArray(VAO3); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(-7.5, 0, 0.5));

	model = glm::rotate(model, glm::radians(90.0f), glm::vec3(0, 1, 0));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::DrawPilarDepanKanan()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture3);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);
	glBindVertexArray(VAO3); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(7.5, 0, 0.5));

	model = glm::rotate(model, glm::radians(90.0f), glm::vec3(0, 1, 0));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::DrawPilarKiriDepan()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture3);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	glBindVertexArray(VAO3); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(-8, 0, 1));

	/*model = glm::rotate(model, glm::radians(angle), glm::vec3(0, 0, 1));

	model = glm::scale(model, glm::vec3(3, 3, 3));*/

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::DrawPilarKiriBelakang()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture3);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	glBindVertexArray(VAO3); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(-8, 0, 30));

	/*model = glm::rotate(model, glm::radians(angle), glm::vec3(0, 0, 1));

	model = glm::scale(model, glm::vec3(3, 3, 3));*/

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::DrawPilarKananDepan()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture3);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	glBindVertexArray(VAO3); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(8, 0, 1));

	/*model = glm::rotate(model, glm::radians(angle), glm::vec3(0, 0, 1));

	model = glm::scale(model, glm::vec3(3, 3, 3));*/

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::DrawPilarKananBelakang()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture3);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	glBindVertexArray(VAO3); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(8, 0, 30));

	/*model = glm::rotate(model, glm::radians(angle), glm::vec3(0, 0, 1));

	model = glm::scale(model, glm::vec3(3, 3, 3));*/

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::DrawPilarBelakangKiri()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture3);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	glBindVertexArray(VAO3); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(-7.5, 0, 30.5));

	model = glm::rotate(model, glm::radians(90.0f), glm::vec3(0, 1, 0));

	/*model = glm::scale(model, glm::vec3(3, 3, 3));*/

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::DrawPilarBelakangKanan()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture3);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	glBindVertexArray(VAO3); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(7.5, 0, 30.5));

	model = glm::rotate(model, glm::radians(90.0f), glm::vec3(0, 1, 0));

	//model = glm::scale(model, glm::vec3(3, 3, 3));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::BuildDindingA() {
	// load image into texture memory
	// ------------------------------
	// Load and create a texture 
	glGenTextures(1, &texture4);
	glBindTexture(GL_TEXTURE_2D, texture4);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	int width, height;
	unsigned char* image = SOIL_load_image("dindingA.png", &width, &height, 0, SOIL_LOAD_RGBA);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
	SOIL_free_image_data(image);
	glBindTexture(GL_TEXTURE_2D, 0);

	// set up vertex data (and buffer(s)) and configure vertex attributes
	// ------------------------------------------------------------------
	float vertices[] = {
		// format position, tex coords
		// dinding a
		-1, 0, 0, 0, 0, 0.0f, 0.0f, 1.0f,  // 0
		 1, 0, 0, 1, 0, 0.0f, 0.0f, 1.0f,  // 1
		-1, 5, 0, 0, 1, 0.0f, 0.0f, 1.0f,  // 2
		 1, 5, 0, 1, 1, 0.0f, 0.0f, 1.0f,  // 3

	};

	unsigned int indices[] = {
		 0,  1,  3,  0,  2,  3,   // left
	};

	glGenVertexArrays(1, &VAO4);
	glGenBuffers(1, &VBO4);
	glGenBuffers(1, &EBO4);
	// bind the Vertex Array Object first, then bind and set vertex buffer(s), and then configure vertex attributes(s).
	glBindVertexArray(VAO4);

	glBindBuffer(GL_ARRAY_BUFFER, VBO4);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO4);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);

	// define position pointer layout 0
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(0 * sizeof(GLfloat)));
	glEnableVertexAttribArray(0);

	// define texcoord pointer layout 1
	glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
	glEnableVertexAttribArray(1);

	// define normal pointer layout 2
	glVertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(5 * sizeof(GLfloat)));
	glEnableVertexAttribArray(2);

	// note that this is allowed, the call to glVertexAttribPointer registered VBO as the vertex attribute's bound vertex buffer object so afterwards we can safely unbind
	glBindBuffer(GL_ARRAY_BUFFER, 0);

	// You can unbind the VAO afterwards so other VAO calls won't accidentally modify this VAO, but this rarely happens. Modifying other
	// VAOs requires a call to glBindVertexArray anyways so we generally don't unbind VAOs (nor VBOs) when it's not directly necessary.
	glBindVertexArray(0);

	// remember: do NOT unbind the EBO while a VAO is active as the bound element buffer object IS stored in the VAO; keep the EBO bound.
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);

}

void Demo::DrawDindingKananPapan()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture4);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	glBindVertexArray(VAO4); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(6.5, 0, 0));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::DrawDindingKiriPapan()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture4);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	glBindVertexArray(VAO4); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(-6.5, 0, 0));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::DrawDindingKananBelakang()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture4);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	glBindVertexArray(VAO4); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(6.5, 0, 31));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::DrawDindingKiriBelakang()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture4);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	glBindVertexArray(VAO4); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(-6.5, 0, 31));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::BuildDindingB() {
	// load image into texture memory
	// ------------------------------
	// Load and create a texture 
	glGenTextures(1, &texture5);
	glBindTexture(GL_TEXTURE_2D, texture5);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	int width, height;
	unsigned char* image = SOIL_load_image("dindingB.png", &width, &height, 0, SOIL_LOAD_RGBA);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
	SOIL_free_image_data(image);
	glBindTexture(GL_TEXTURE_2D, 0);

	// set up vertex data (and buffer(s)) and configure vertex attributes
	// ------------------------------------------------------------------
	float vertices[] = {
		// format position, tex coords
		// dinding b
		-5.5, 0, 0, 0, 0, 0.0f, 0.0f, 1.0f,  // 0
		 5.5, 0, 0, 1, 0, 0.0f, 0.0f, 1.0f,  // 1
		-5.5, 5, 0, 0, 1, 0.0f, 0.0f, 1.0f,  // 2
		 5.5, 5, 0, 1, 1, 0.0f, 0.0f, 1.0f,  // 3

	};

	unsigned int indices[] = {
		 0,  1,  3,  0,  2,  3,   // left
	};

	glGenVertexArrays(1, &VAO5);
	glGenBuffers(1, &VBO5);
	glGenBuffers(1, &EBO5);
	// bind the Vertex Array Object first, then bind and set vertex buffer(s), and then configure vertex attributes(s).
	glBindVertexArray(VAO5);

	glBindBuffer(GL_ARRAY_BUFFER, VBO5);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO5);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);

	// define position pointer layout 0
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(0 * sizeof(GLfloat)));
	glEnableVertexAttribArray(0);

	// define texcoord pointer layout 1
	glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
	glEnableVertexAttribArray(1);

	// define normal pointer layout 2
	glVertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(5 * sizeof(GLfloat)));
	glEnableVertexAttribArray(2);

	// note that this is allowed, the call to glVertexAttribPointer registered VBO as the vertex attribute's bound vertex buffer object so afterwards we can safely unbind
	glBindBuffer(GL_ARRAY_BUFFER, 0);

	// You can unbind the VAO afterwards so other VAO calls won't accidentally modify this VAO, but this rarely happens. Modifying other
	// VAOs requires a call to glBindVertexArray anyways so we generally don't unbind VAOs (nor VBOs) when it's not directly necessary.
	glBindVertexArray(0);

	// remember: do NOT unbind the EBO while a VAO is active as the bound element buffer object IS stored in the VAO; keep the EBO bound.
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);

}

void Demo::DrawDindingBelakangPapan()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture5);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	glBindVertexArray(VAO5); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::BuildPapanTulis() {
	// load image into texture memory
	// ------------------------------
	// Load and create a texture 
	glGenTextures(1, &texture6);
	glBindTexture(GL_TEXTURE_2D, texture6);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	int width, height;
	unsigned char* image = SOIL_load_image("papan.png", &width, &height, 0, SOIL_LOAD_RGBA);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
	SOIL_free_image_data(image);
	glBindTexture(GL_TEXTURE_2D, 0);

	glGenTextures(1, &stexturepapan);
	glBindTexture(GL_TEXTURE_2D, stexturepapan);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	image = SOIL_load_image("papan_specular.png", &width, &height, 0, SOIL_LOAD_RGBA);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
	SOIL_free_image_data(image);
	glBindTexture(GL_TEXTURE_2D, 0);

	// set up vertex data (and buffer(s)) and configure vertex attributes
	// ------------------------------------------------------------------
	float vertices[] = {
		// format position, tex coords
		// papan tulis
		-2.5, 0, 0.3, 0, 0, 0.0f, 0.0f, 1.0f,  // 0
		 2.5, 0, 0.3, 1, 0, 0.0f, 0.0f, 1.0f,  // 1
		-2.5, 3, 0.3, 0, 1, 0.0f, 0.0f, 1.0f,  // 2
		 2.5, 3, 0.3, 1, 1, 0.0f, 0.0f, 1.0f,  // 3

	};

	unsigned int indices[] = {
		 0,  1,  3,  0,  2,  3,   // left
	};

	glGenVertexArrays(1, &VAO6);
	glGenBuffers(1, &VBO6);
	glGenBuffers(1, &EBO6);
	// bind the Vertex Array Object first, then bind and set vertex buffer(s), and then configure vertex attributes(s).
	glBindVertexArray(VAO6);

	glBindBuffer(GL_ARRAY_BUFFER, VBO6);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO6);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);

	// define position pointer layout 0
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(0 * sizeof(GLfloat)));
	glEnableVertexAttribArray(0);

	// define texcoord pointer layout 1
	glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
	glEnableVertexAttribArray(1);

	// define normal pointer layout 2
	glVertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(5 * sizeof(GLfloat)));
	glEnableVertexAttribArray(2);

	// note that this is allowed, the call to glVertexAttribPointer registered VBO as the vertex attribute's bound vertex buffer object so afterwards we can safely unbind
	glBindBuffer(GL_ARRAY_BUFFER, 0);

	// You can unbind the VAO afterwards so other VAO calls won't accidentally modify this VAO, but this rarely happens. Modifying other
	// VAOs requires a call to glBindVertexArray anyways so we generally don't unbind VAOs (nor VBOs) when it's not directly necessary.
	glBindVertexArray(0);

	// remember: do NOT unbind the EBO while a VAO is active as the bound element buffer object IS stored in the VAO; keep the EBO bound.
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);

}

void Demo::DrawPapanTulis()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture6);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	glActiveTexture(GL_TEXTURE1);
	glBindTexture(GL_TEXTURE_2D, stexturepapan);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.specular"), 1);

	GLint shininessMatLoc = glGetUniformLocation(this->shaderProgram, "material.shininess");
	glUniform1f(shininessMatLoc, 0.25f);

	glBindVertexArray(VAO6); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(0, 1, 0));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::BuildPapanTulisBorder() {
	// load image into texture memory
	// ------------------------------
	// Load and create a texture 
	glGenTextures(1, &texture7);
	glBindTexture(GL_TEXTURE_2D, texture7);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	int width, height;
	unsigned char* image = SOIL_load_image("papanBorder.png", &width, &height, 0, SOIL_LOAD_RGBA);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
	SOIL_free_image_data(image);
	glBindTexture(GL_TEXTURE_2D, 0);

	// set up vertex data (and buffer(s)) and configure vertex attributes
	// ------------------------------------------------------------------
	float vertices[] = {
		// format position, tex coords
		// left
		-2.5, 0,   0, 0, 0, -1.0f, 0.0f, 0.0f,  // 0
		-2.5, 0, 0.3, 1, 0, -1.0f, 0.0f, 0.0f,  // 1
		-2.5, 3,   0, 0, 1, -1.0f, 0.0f, 0.0f,  // 2
		-2.5, 3, 0.3, 1, 1, -1.0f, 0.0f, 0.0f,  // 3

		// right
		2.5, 0,   0, 0, 0, 1.0f, 0.0f, 0.0f,  // 4
		2.5, 0, 0.3, 1, 0, 1.0f, 0.0f, 0.0f,  // 5
		2.5, 3,   0, 0, 1, 1.0f, 0.0f, 0.0f,  // 6
		2.5, 3, 0.3, 1, 1, 1.0f, 0.0f, 0.0f,  // 7

		//bottom
		-2.5, 0, 0.3, 0, 0, 0.0f, -1.0f, 0.0f,  // 8
		 2.5, 0, 0.3, 1, 0, 0.0f, -1.0f, 0.0f,  // 9
		-2.5, 0,   0, 0, 1, 0.0f, -1.0f, 0.0f,  // 10
		 2.5, 0,   0, 1, 1, 0.0f, -1.0f, 0.0f,  // 11

		//top
		-2.5, 3, 0.3, 0, 0, 0.0f, 1.0f, 0.0f,  // 12
		 2.5, 3, 0.3, 1, 0, 0.0f, 1.0f, 0.0f,  // 13
		-2.5, 3,   0, 0, 1, 0.0f, 1.0f, 0.0f,  // 14
		 2.5, 3,   0, 1, 1, 0.0f, 1.0f, 0.0f,  // 15

	};

	unsigned int indices[] = {
		  0,  1,  3,  0,  2,  3,   // left
		  4,  5,  7,  4,  6,  7,   // right
		  8,  9, 11,  8, 10, 11,   // bottom
		 12, 13, 15, 12, 14, 15,   // top
	};

	glGenVertexArrays(1, &VAO7);
	glGenBuffers(1, &VBO7);
	glGenBuffers(1, &EBO7);
	// bind the Vertex Array Object first, then bind and set vertex buffer(s), and then configure vertex attributes(s).
	glBindVertexArray(VAO7);

	glBindBuffer(GL_ARRAY_BUFFER, VBO7);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO7);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);

	// define position pointer layout 0
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(0 * sizeof(GLfloat)));
	glEnableVertexAttribArray(0);

	// define texcoord pointer layout 1
	glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
	glEnableVertexAttribArray(1);

	// define normal pointer layout 2
	glVertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(5 * sizeof(GLfloat)));
	glEnableVertexAttribArray(2);

	// note that this is allowed, the call to glVertexAttribPointer registered VBO as the vertex attribute's bound vertex buffer object so afterwards we can safely unbind
	glBindBuffer(GL_ARRAY_BUFFER, 0);

	// You can unbind the VAO afterwards so other VAO calls won't accidentally modify this VAO, but this rarely happens. Modifying other
	// VAOs requires a call to glBindVertexArray anyways so we generally don't unbind VAOs (nor VBOs) when it's not directly necessary.
	glBindVertexArray(0);

	// remember: do NOT unbind the EBO while a VAO is active as the bound element buffer object IS stored in the VAO; keep the EBO bound.
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);

}

void Demo::DrawPapanTulisBorder()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture7);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	GLint shininessMatLoc = glGetUniformLocation(this->shaderProgram, "material.shininess");
	glUniform1f(shininessMatLoc, 0.25f);

	glBindVertexArray(VAO7); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(0, 1, 0));

	/*model = glm::rotate(model, glm::radians(angle), glm::vec3(0, 0, 1));

	model = glm::scale(model, glm::vec3(3, 3, 3));*/

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 24, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::BuildPintuBingkai() {
	// load image into texture memory
	// ------------------------------
	// Load and create a texture 
	glGenTextures(1, &texture8);
	glBindTexture(GL_TEXTURE_2D, texture8);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	int width, height;
	unsigned char* image = SOIL_load_image("pintuBorder.png", &width, &height, 0, SOIL_LOAD_RGBA);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
	SOIL_free_image_data(image);
	glBindTexture(GL_TEXTURE_2D, 0);

	// set up vertex data (and buffer(s)) and configure vertex attributes
	// ------------------------------------------------------------------
	float vertices[] = {
		// format position, tex coords
		// left
		-1, 0,   0, 0, 0, -1.0f, 0.0f, 0.0f,  // 0
		-1, 0, 0.1, 1, 0, -1.0f, 0.0f, 0.0f,  // 1
		-1, 4,   0, 0, 1, -1.0f, 0.0f, 0.0f,  // 2
		-1, 4, 0.1, 1, 1, -1.0f, 0.0f, 0.0f,  // 3

		// right
		1, 0,   0, 0, 0, 1.0f, 0.0f, 0.0f,  // 4
		1, 0, 0.1, 1, 0, 1.0f, 0.0f, 0.0f,  // 5
		1, 4,   0, 0, 1, 1.0f, 0.0f, 0.0f,  // 6
		1, 4, 0.1, 1, 1, 1.0f, 0.0f, 0.0f,  // 7

		// top
		-1, 4, 0.1, 0, 0, 0.0f, 1.0f, 0.0f,  // 8
		 1, 4, 0.1, 1, 0, 0.0f, 1.0f, 0.0f,  // 9
		-1, 4,   0, 0, 1, 0.0f, 1.0f, 0.0f,  // 10
		 1, 4,   0, 1, 1, 0.0f, 1.0f, 0.0f,  // 11
	};

	unsigned int indices[] = {
		  0,  1,  3,  0,  2,  3,   // left
		  4,  5,  7,  4,  6,  7,   // right
		  8,  9, 11,  8, 10, 11,   // top
	};

	glGenVertexArrays(1, &VAO8);
	glGenBuffers(1, &VBO8);
	glGenBuffers(1, &EBO8);
	// bind the Vertex Array Object first, then bind and set vertex buffer(s), and then configure vertex attributes(s).
	glBindVertexArray(VAO8);

	glBindBuffer(GL_ARRAY_BUFFER, VBO8);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO8);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);

	// define position pointer layout 0
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(0 * sizeof(GLfloat)));
	glEnableVertexAttribArray(0);

	// define texcoord pointer layout 1
	glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
	glEnableVertexAttribArray(1);

	// define normal pointer layout 2
	glVertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(5 * sizeof(GLfloat)));
	glEnableVertexAttribArray(2);

	// note that this is allowed, the call to glVertexAttribPointer registered VBO as the vertex attribute's bound vertex buffer object so afterwards we can safely unbind
	glBindBuffer(GL_ARRAY_BUFFER, 0);

	// You can unbind the VAO afterwards so other VAO calls won't accidentally modify this VAO, but this rarely happens. Modifying other
	// VAOs requires a call to glBindVertexArray anyways so we generally don't unbind VAOs (nor VBOs) when it's not directly necessary.
	glBindVertexArray(0);

	// remember: do NOT unbind the EBO while a VAO is active as the bound element buffer object IS stored in the VAO; keep the EBO bound.
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);

}

void Demo::DrawPintuBingkai()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture8);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	glBindVertexArray(VAO8); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(8.5, 0, 25));

	model = glm::rotate(model, glm::radians(-90.0f), glm::vec3(0, 1, 0));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 18, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::BuildDindingC() {
	// load image into texture memory
	// ------------------------------
	// Load and create a texture 
	glGenTextures(1, &texture9);
	glBindTexture(GL_TEXTURE_2D, texture9);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	int width, height;
	unsigned char* image = SOIL_load_image("dindingC.png", &width, &height, 0, SOIL_LOAD_RGBA);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
	SOIL_free_image_data(image);
	glBindTexture(GL_TEXTURE_2D, 0);

	// set up vertex data (and buffer(s)) and configure vertex attributes
	// ------------------------------------------------------------------
	float vertices[] = {
		// format position, tex coords
		// dinding b
		-14.5, 0, 0, 0, 0, 0.0f, 0.0f, 1.0f,  // 0
		 14.5, 0, 0, 1, 0, 0.0f, 0.0f, 1.0f,  // 1
		-14.5, 5, 0, 0, 1, 0.0f, 0.0f, 1.0f,  // 2
		 14.5, 5, 0, 1, 1, 0.0f, 0.0f, 1.0f,  // 3

	};

	unsigned int indices[] = {
		 0,  1,  3,  0,  2,  3,   // left
	};

	glGenVertexArrays(1, &VAO9);
	glGenBuffers(1, &VBO9);
	glGenBuffers(1, &EBO9);
	// bind the Vertex Array Object first, then bind and set vertex buffer(s), and then configure vertex attributes(s).
	glBindVertexArray(VAO9);

	glBindBuffer(GL_ARRAY_BUFFER, VBO9);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO9);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);

	// define position pointer layout 0
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(0 * sizeof(GLfloat)));
	glEnableVertexAttribArray(0);

	// define texcoord pointer layout 1
	glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
	glEnableVertexAttribArray(1);

	// define normal pointer layout 2
	glVertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(5 * sizeof(GLfloat)));
	glEnableVertexAttribArray(2);

	// note that this is allowed, the call to glVertexAttribPointer registered VBO as the vertex attribute's bound vertex buffer object so afterwards we can safely unbind
	glBindBuffer(GL_ARRAY_BUFFER, 0);

	// You can unbind the VAO afterwards so other VAO calls won't accidentally modify this VAO, but this rarely happens. Modifying other
	// VAOs requires a call to glBindVertexArray anyways so we generally don't unbind VAOs (nor VBOs) when it's not directly necessary.
	glBindVertexArray(0);

	// remember: do NOT unbind the EBO while a VAO is active as the bound element buffer object IS stored in the VAO; keep the EBO bound.
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);

}

void Demo::DrawDindingKiri()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture9);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	glBindVertexArray(VAO9); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(-8.5, 0, 15.5));

	model = glm::rotate(model, glm::radians(90.0f), glm::vec3(0, 1, 0));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::BuildLukisanBDepan() {
	// load image into texture memory
	// ------------------------------
	// Load and create a texture 
	glGenTextures(1, &texture10);
	glBindTexture(GL_TEXTURE_2D, texture10);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	int width, height;
	unsigned char* image = SOIL_load_image("lukisanBDepan.png", &width, &height, 0, SOIL_LOAD_RGBA);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
	SOIL_free_image_data(image);
	glBindTexture(GL_TEXTURE_2D, 0);

	glGenTextures(1, &stexturelukisan);
	glBindTexture(GL_TEXTURE_2D, stexturelukisan);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	image = SOIL_load_image("lukisan_specular.png", &width, &height, 0, SOIL_LOAD_RGBA);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
	SOIL_free_image_data(image);
	glBindTexture(GL_TEXTURE_2D, 0);

	// set up vertex data (and buffer(s)) and configure vertex attributes
	// ------------------------------------------------------------------
	float vertices[] = {
		// format position, tex coords
		-1, 0, 0.2, 0, 0, 0.0f, 0.0f, 1.0f,  // 0
		 1, 0, 0.2, 1, 0, 0.0f, 0.0f, 1.0f,  // 1
		-1, 3, 0.2, 0, 1, 0.0f, 0.0f, 1.0f,  // 2
		 1, 3, 0.2, 1, 1, 0.0f, 0.0f, 1.0f,  // 3

	};

	unsigned int indices[] = {
		0,  1,  3,  0,  2,  3,   // bottom
	};

	glGenVertexArrays(1, &VAO10);
	glGenBuffers(1, &VBO10);
	glGenBuffers(1, &EBO10);
	// bind the Vertex Array Object first, then bind and set vertex buffer(s), and then configure vertex attributes(s).
	glBindVertexArray(VAO10);

	glBindBuffer(GL_ARRAY_BUFFER, VBO10);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO10);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);

	// define position pointer layout 0
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(0 * sizeof(GLfloat)));
	glEnableVertexAttribArray(0);

	// define texcoord pointer layout 1
	glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
	glEnableVertexAttribArray(1);

	// define normal pointer layout 2
	glVertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(5 * sizeof(GLfloat)));
	glEnableVertexAttribArray(2);

	// note that this is allowed, the call to glVertexAttribPointer registered VBO as the vertex attribute's bound vertex buffer object so afterwards we can safely unbind
	glBindBuffer(GL_ARRAY_BUFFER, 0);

	// You can unbind the VAO afterwards so other VAO calls won't accidentally modify this VAO, but this rarely happens. Modifying other
	// VAOs requires a call to glBindVertexArray anyways so we generally don't unbind VAOs (nor VBOs) when it's not directly necessary.
	glBindVertexArray(0);

	// remember: do NOT unbind the EBO while a VAO is active as the bound element buffer object IS stored in the VAO; keep the EBO bound.
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);

}

void Demo::DrawLukisanBDepan()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture10);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	glActiveTexture(GL_TEXTURE1);
	glBindTexture(GL_TEXTURE_2D, stexturelukisan);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.specular"), 1);

	GLint shininessMatLoc = glGetUniformLocation(this->shaderProgram, "material.shininess");
	glUniform1f(shininessMatLoc, 0.25f);

	glBindVertexArray(VAO10); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(-8.5, 1, 16));

	model = glm::rotate(model, glm::radians(90.0f), glm::vec3(0, 1, 0));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::BuildLukisanCDepan() {
	// load image into texture memory
	// ------------------------------
	// Load and create a texture 
	glGenTextures(1, &texture11);
	glBindTexture(GL_TEXTURE_2D, texture11);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	int width, height;
	unsigned char* image = SOIL_load_image("lukisanCDepan.png", &width, &height, 0, SOIL_LOAD_RGBA);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
	SOIL_free_image_data(image);
	glBindTexture(GL_TEXTURE_2D, 0);

	glGenTextures(1, &stexturelukisan);
	glBindTexture(GL_TEXTURE_2D, stexturelukisan);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	image = SOIL_load_image("lukisan_specular.png", &width, &height, 0, SOIL_LOAD_RGBA);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
	SOIL_free_image_data(image);
	glBindTexture(GL_TEXTURE_2D, 0);

	// set up vertex data (and buffer(s)) and configure vertex attributes
	// ------------------------------------------------------------------
	float vertices[] = {
		// format position, tex coords
		-1, 0, 0.2, 0, 0, 0.0f, 0.0f, 1.0f,  // 0
		 1, 0, 0.2, 1, 0, 0.0f, 0.0f, 1.0f,  // 1
		-1, 3, 0.2, 0, 1, 0.0f, 0.0f, 1.0f,  // 2
		 1, 3, 0.2, 1, 1, 0.0f, 0.0f, 1.0f,  // 3

	};

	unsigned int indices[] = {
		0,  1,  3,  0,  2,  3,   // bottom
	};

	glGenVertexArrays(1, &VAO11);
	glGenBuffers(1, &VBO11);
	glGenBuffers(1, &EBO11);
	// bind the Vertex Array Object first, then bind and set vertex buffer(s), and then configure vertex attributes(s).
	glBindVertexArray(VAO11);

	glBindBuffer(GL_ARRAY_BUFFER, VBO11);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO11);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);

	// define position pointer layout 0
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(0 * sizeof(GLfloat)));
	glEnableVertexAttribArray(0);

	// define texcoord pointer layout 1
	glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
	glEnableVertexAttribArray(1);

	// define normal pointer layout 2
	glVertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(5 * sizeof(GLfloat)));
	glEnableVertexAttribArray(2);

	// note that this is allowed, the call to glVertexAttribPointer registered VBO as the vertex attribute's bound vertex buffer object so afterwards we can safely unbind
	glBindBuffer(GL_ARRAY_BUFFER, 0);

	// You can unbind the VAO afterwards so other VAO calls won't accidentally modify this VAO, but this rarely happens. Modifying other
	// VAOs requires a call to glBindVertexArray anyways so we generally don't unbind VAOs (nor VBOs) when it's not directly necessary.
	glBindVertexArray(0);

	// remember: do NOT unbind the EBO while a VAO is active as the bound element buffer object IS stored in the VAO; keep the EBO bound.
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);

}

void Demo::DrawLukisanCDepan()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture11);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	glActiveTexture(GL_TEXTURE1);
	glBindTexture(GL_TEXTURE_2D, stexturelukisan);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.specular"), 1);

	GLint shininessMatLoc = glGetUniformLocation(this->shaderProgram, "material.shininess");
	glUniform1f(shininessMatLoc, 0.25f);

	glBindVertexArray(VAO10); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(-8.5, 1, 24));

	model = glm::rotate(model, glm::radians(90.0f), glm::vec3(0, 1, 0));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::BuildLantai() {
	// load image into texture memory
	// ------------------------------
	// Load and create a texture 
	glGenTextures(1, &texture12);
	glBindTexture(GL_TEXTURE_2D, texture12);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	int width, height;
	unsigned char* image = SOIL_load_image("lantai.png", &width, &height, 0, SOIL_LOAD_RGBA);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
	SOIL_free_image_data(image);
	glBindTexture(GL_TEXTURE_2D, 0);

	// set up vertex data (and buffer(s)) and configure vertex attributes
	// ------------------------------------------------------------------
	float vertices[] = {
		// format position, tex coords
		 8.5, 0,  0, 0, 0, 0.0f, 1.0f, 0.0f,  // 0
		-8.5, 0,  0, 1, 0, 0.0f, 1.0f, 0.0f,  // 1
		 8.5, 0, 31, 0, 1, 0.0f, 1.0f, 0.0f,  // 2
		-8.5, 0, 31, 1, 1, 0.0f, 1.0f, 0.0f,  // 3

	};

	unsigned int indices[] = {
		 0,  1,  3,  0,  2,  3,   // left
	};

	glGenVertexArrays(1, &VAO12);
	glGenBuffers(1, &VBO12);
	glGenBuffers(1, &EBO12);
	// bind the Vertex Array Object first, then bind and set vertex buffer(s), and then configure vertex attributes(s).
	glBindVertexArray(VAO12);

	glBindBuffer(GL_ARRAY_BUFFER, VBO12);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO12);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);

	// define position pointer layout 0
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(0 * sizeof(GLfloat)));
	glEnableVertexAttribArray(0);

	// define texcoord pointer layout 1
	glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
	glEnableVertexAttribArray(1);

	// define normal pointer layout 2
	glVertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(5 * sizeof(GLfloat)));
	glEnableVertexAttribArray(2);

	// note that this is allowed, the call to glVertexAttribPointer registered VBO as the vertex attribute's bound vertex buffer object so afterwards we can safely unbind
	glBindBuffer(GL_ARRAY_BUFFER, 0);

	// You can unbind the VAO afterwards so other VAO calls won't accidentally modify this VAO, but this rarely happens. Modifying other
	// VAOs requires a call to glBindVertexArray anyways so we generally don't unbind VAOs (nor VBOs) when it's not directly necessary.
	glBindVertexArray(0);

	// remember: do NOT unbind the EBO while a VAO is active as the bound element buffer object IS stored in the VAO; keep the EBO bound.
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);

}

void Demo::DrawLantai()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture12);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	glBindVertexArray(VAO12); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::BuildDindingKanan() {
	// load image into texture memory
	// ------------------------------
	// Load and create a texture 
	glGenTextures(1, &texture13);
	glBindTexture(GL_TEXTURE_2D, texture13);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	int width, height;
	unsigned char* image = SOIL_load_image("dindingC.png", &width, &height, 0, SOIL_LOAD_RGBA);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
	SOIL_free_image_data(image);
	glBindTexture(GL_TEXTURE_2D, 0);

	// set up vertex data (and buffer(s)) and configure vertex attributes
	// ------------------------------------------------------------------
	float vertices[] = {
		// format position, tex coords
		// dinding b
		-12.0, 0, 0, 0, 0, 0.0f, 0.0f, 1.0f,  // 0
		 12.0, 0, 0, 1, 0, 0.0f, 0.0f, 1.0f,  // 1
		-12.0, 5, 0, 0, 1, 0.0f, 0.0f, 1.0f,  // 2
		 12.0, 5, 0, 1, 1, 0.0f, 0.0f, 1.0f,  // 3

		12.0, 4, 0, 0, 0, 0.0f, 0.0f, 1.0f,  // 4
		13.5, 4, 0, 1, 0, 0.0f, 0.0f, 1.0f,  // 5
		12.0, 5, 0, 0, 1, 0.0f, 0.0f, 1.0f,  // 6
		13.5, 5, 0, 1, 1, 0.0f, 0.0f, 1.0f,  // 7

		13.5, 0, 0, 0, 0, 0.0f, 0.0f, 1.0f,  // 8
		17.5, 0, 0, 1, 0, 0.0f, 0.0f, 1.0f,  // 9
		13.5, 5, 0, 0, 1, 0.0f, 0.0f, 1.0f,  // 10
		17.5, 5, 0, 1, 1, 0.0f, 0.0f, 1.0f,  // 11

	};

	unsigned int indices[] = {
		 0,  1,  3,  0,  2,  3,   // A
		 4,  5,  7,  4,  6,  7,   // B
		 8,  9, 11,  8, 10, 11,   // C
	};

	glGenVertexArrays(1, &VAO13);
	glGenBuffers(1, &VBO13);
	glGenBuffers(1, &EBO13);
	// bind the Vertex Array Object first, then bind and set vertex buffer(s), and then configure vertex attributes(s).
	glBindVertexArray(VAO13);

	glBindBuffer(GL_ARRAY_BUFFER, VBO13);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO13);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);

	// define position pointer layout 0
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(0 * sizeof(GLfloat)));
	glEnableVertexAttribArray(0);

	// define texcoord pointer layout 1
	glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
	glEnableVertexAttribArray(1);

	// define normal pointer layout 2
	glVertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(5 * sizeof(GLfloat)));
	glEnableVertexAttribArray(2);

	// note that this is allowed, the call to glVertexAttribPointer registered VBO as the vertex attribute's bound vertex buffer object so afterwards we can safely unbind
	glBindBuffer(GL_ARRAY_BUFFER, 0);

	// You can unbind the VAO afterwards so other VAO calls won't accidentally modify this VAO, but this rarely happens. Modifying other
	// VAOs requires a call to glBindVertexArray anyways so we generally don't unbind VAOs (nor VBOs) when it's not directly necessary.
	glBindVertexArray(0);

	// remember: do NOT unbind the EBO while a VAO is active as the bound element buffer object IS stored in the VAO; keep the EBO bound.
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);

}

void Demo::DrawDindingKanan()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture13);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	glBindVertexArray(VAO13); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(8.5, 0, 12.5));

	model = glm::rotate(model, glm::radians(-90.0f), glm::vec3(0, 1, 0));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 18, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::BuildLukisanKananA() {
	// load image into texture memory
	// ------------------------------
	// Load and create a texture 
	glGenTextures(1, &texture14);
	glBindTexture(GL_TEXTURE_2D, texture14);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	int width, height;
	unsigned char* image = SOIL_load_image("lukisanKananA.png", &width, &height, 0, SOIL_LOAD_RGBA);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
	SOIL_free_image_data(image);
	glBindTexture(GL_TEXTURE_2D, 0);

	// set up vertex data (and buffer(s)) and configure vertex attributes
	// ------------------------------------------------------------------
	float vertices[] = {
		// format position, tex coords
		// lukisan kanan A
		-1, 2, 0.2, 0, 0, 0.0f, 0.0f, 1.0f,  // 0
		 1, 2, 0.2, 1, 0, 0.0f, 0.0f, 1.0f,  // 1
		-1, 4, 0.2, 0, 1, 0.0f, 0.0f, 1.0f,  // 2
		 1, 4, 0.2, 1, 1, 0.0f, 0.0f, 1.0f,  // 3

	};

	unsigned int indices[] = {
		 0,  1,  3,  0,  2,  3,   // left
	};

	glGenVertexArrays(1, &VAO14);
	glGenBuffers(1, &VBO14);
	glGenBuffers(1, &EBO14);
	// bind the Vertex Array Object first, then bind and set vertex buffer(s), and then configure vertex attributes(s).
	glBindVertexArray(VAO14);

	glBindBuffer(GL_ARRAY_BUFFER, VBO14);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO14);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);

	// define position pointer layout 0
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(0 * sizeof(GLfloat)));
	glEnableVertexAttribArray(0);

	// define texcoord pointer layout 1
	glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
	glEnableVertexAttribArray(1);

	// note that this is allowed, the call to glVertexAttribPointer registered VBO as the vertex attribute's bound vertex buffer object so afterwards we can safely unbind
	glBindBuffer(GL_ARRAY_BUFFER, 0);

	// You can unbind the VAO afterwards so other VAO calls won't accidentally modify this VAO, but this rarely happens. Modifying other
	// VAOs requires a call to glBindVertexArray anyways so we generally don't unbind VAOs (nor VBOs) when it's not directly necessary.
	glBindVertexArray(0);

	// remember: do NOT unbind the EBO while a VAO is active as the bound element buffer object IS stored in the VAO; keep the EBO bound.
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);

}

void Demo::DrawLukisanKananA()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture14);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	glBindVertexArray(VAO14); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(8.5, 0, 9));

	model = glm::rotate(model, glm::radians(-90.0f), glm::vec3(0, 1, 0));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::BuildLukisanKananB() {
	// load image into texture memory
	// ------------------------------
	// Load and create a texture 
	glGenTextures(1, &texture15);
	glBindTexture(GL_TEXTURE_2D, texture15);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	int width, height;
	unsigned char* image = SOIL_load_image("lukisanKananB.png", &width, &height, 0, SOIL_LOAD_RGBA);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
	SOIL_free_image_data(image);
	glBindTexture(GL_TEXTURE_2D, 0);

	// set up vertex data (and buffer(s)) and configure vertex attributes
	// ------------------------------------------------------------------
	float vertices[] = {
		// format position, tex coords
		// lukisan kanan B
		-1, 2, 0.2, 0, 0, 0.0f, 0.0f, 1.0f,  // 0
		 1, 2, 0.2, 1, 0, 0.0f, 0.0f, 1.0f,  // 1
		-1, 4, 0.2, 0, 1, 0.0f, 0.0f, 1.0f,  // 2
		 1, 4, 0.2, 1, 1, 0.0f, 0.0f, 1.0f,  // 3

	};

	unsigned int indices[] = {
		 0,  1,  3,  0,  2,  3,   // left
	};

	glGenVertexArrays(1, &VAO15);
	glGenBuffers(1, &VBO15);
	glGenBuffers(1, &EBO15);
	// bind the Vertex Array Object first, then bind and set vertex buffer(s), and then configure vertex attributes(s).
	glBindVertexArray(VAO15);

	glBindBuffer(GL_ARRAY_BUFFER, VBO15);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO15);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);

	// define position pointer layout 0
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(0 * sizeof(GLfloat)));
	glEnableVertexAttribArray(0);

	// define texcoord pointer layout 1
	glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
	glEnableVertexAttribArray(1);

	// define normal pointer layout 2
	glVertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(5 * sizeof(GLfloat)));
	glEnableVertexAttribArray(2);

	// note that this is allowed, the call to glVertexAttribPointer registered VBO as the vertex attribute's bound vertex buffer object so afterwards we can safely unbind
	glBindBuffer(GL_ARRAY_BUFFER, 0);

	// You can unbind the VAO afterwards so other VAO calls won't accidentally modify this VAO, but this rarely happens. Modifying other
	// VAOs requires a call to glBindVertexArray anyways so we generally don't unbind VAOs (nor VBOs) when it's not directly necessary.
	glBindVertexArray(0);

	// remember: do NOT unbind the EBO while a VAO is active as the bound element buffer object IS stored in the VAO; keep the EBO bound.
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);

}

void Demo::DrawLukisanKananB()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture15);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	glBindVertexArray(VAO15); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(8.5, 0, 11.025));

	model = glm::rotate(model, glm::radians(-90.0f), glm::vec3(0, 1, 0));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::BuildPintu() {
	// load image into texture memory
	// ------------------------------
	// Load and create a texture 
	glGenTextures(1, &texture16);
	glBindTexture(GL_TEXTURE_2D, texture16);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	int width, height;
	unsigned char* image = SOIL_load_image("pintu.png", &width, &height, 0, SOIL_LOAD_RGBA);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
	SOIL_free_image_data(image);
	glBindTexture(GL_TEXTURE_2D, 0);

	// set up vertex data (and buffer(s)) and configure vertex attributes
	// ------------------------------------------------------------------
	float vertices[] = {
		// format position, tex coords
		 1, 0, 0.1, 0, 0, 0.0f, 0.0f, 1.0f,  // 0
		-1, 0, 0.1, 1, 0, 0.0f, 0.0f, 1.0f,  // 1
		 1, 4, 0.1, 0, 1, 0.0f, 0.0f, 1.0f,  // 2
		-1, 4, 0.1, 1, 1, 0.0f, 0.0f, 1.0f,  // 3

	};

	unsigned int indices[] = {
		 0,  1,  3,  0,  2,  3,   // left
	};

	glGenVertexArrays(1, &VAO16);
	glGenBuffers(1, &VBO16);
	glGenBuffers(1, &EBO16);
	// bind the Vertex Array Object first, then bind and set vertex buffer(s), and then configure vertex attributes(s).
	glBindVertexArray(VAO16);

	glBindBuffer(GL_ARRAY_BUFFER, VBO16);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO16);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);

	// define position pointer layout 0
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(0 * sizeof(GLfloat)));
	glEnableVertexAttribArray(0);

	// define texcoord pointer layout 1
	glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
	glEnableVertexAttribArray(1);

	// define normal pointer layout 2
	glVertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(5 * sizeof(GLfloat)));
	glEnableVertexAttribArray(2);

	// note that this is allowed, the call to glVertexAttribPointer registered VBO as the vertex attribute's bound vertex buffer object so afterwards we can safely unbind
	glBindBuffer(GL_ARRAY_BUFFER, 0);

	// You can unbind the VAO afterwards so other VAO calls won't accidentally modify this VAO, but this rarely happens. Modifying other
	// VAOs requires a call to glBindVertexArray anyways so we generally don't unbind VAOs (nor VBOs) when it's not directly necessary.
	glBindVertexArray(0);

	// remember: do NOT unbind the EBO while a VAO is active as the bound element buffer object IS stored in the VAO; keep the EBO bound.
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);

}

void Demo::DrawPintu()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture16);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	GLint shininessMatLoc = glGetUniformLocation(this->shaderProgram, "material.shininess");
	glUniform1f(shininessMatLoc, 0.25f);

	glBindVertexArray(VAO16); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(8.5, 0, 25));

	model = glm::rotate(model, glm::radians(-90.0f), glm::vec3(0, 1, 0));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::BuildLukisanKananC() {
	// load image into texture memory
	// ------------------------------
	// Load and create a texture 
	glGenTextures(1, &texture17);
	glBindTexture(GL_TEXTURE_2D, texture17);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	int width, height;
	unsigned char* image = SOIL_load_image("lukisanKananC.png", &width, &height, 0, SOIL_LOAD_RGBA);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
	SOIL_free_image_data(image);
	glBindTexture(GL_TEXTURE_2D, 0);

	// set up vertex data (and buffer(s)) and configure vertex attributes
	// ------------------------------------------------------------------
	float vertices[] = {
		// format position, tex coords
		// lukisan kanan B
		-1, 2, 0.2, 0, 0, 0.0f, 0.0f, 1.0f,  // 0
		 1, 2, 0.2, 1, 0, 0.0f, 0.0f, 1.0f,  // 1
		-1, 4, 0.2, 0, 1, 0.0f, 0.0f, 1.0f,  // 2
		 1, 4, 0.2, 1, 1, 0.0f, 0.0f, 1.0f,  // 3

	};

	unsigned int indices[] = {
		 0,  1,  3,  0,  2,  3,   // left
	};

	glGenVertexArrays(1, &VAO17);
	glGenBuffers(1, &VBO17);
	glGenBuffers(1, &EBO17);
	// bind the Vertex Array Object first, then bind and set vertex buffer(s), and then configure vertex attributes(s).
	glBindVertexArray(VAO17);

	glBindBuffer(GL_ARRAY_BUFFER, VBO17);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO17);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);

	// define position pointer layout 0
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(0 * sizeof(GLfloat)));
	glEnableVertexAttribArray(0);

	// define texcoord pointer layout 1
	glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
	glEnableVertexAttribArray(1);

	// define normal pointer layout 2
	glVertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(5 * sizeof(GLfloat)));
	glEnableVertexAttribArray(2);

	// note that this is allowed, the call to glVertexAttribPointer registered VBO as the vertex attribute's bound vertex buffer object so afterwards we can safely unbind
	glBindBuffer(GL_ARRAY_BUFFER, 0);

	// You can unbind the VAO afterwards so other VAO calls won't accidentally modify this VAO, but this rarely happens. Modifying other
	// VAOs requires a call to glBindVertexArray anyways so we generally don't unbind VAOs (nor VBOs) when it's not directly necessary.
	glBindVertexArray(0);

	// remember: do NOT unbind the EBO while a VAO is active as the bound element buffer object IS stored in the VAO; keep the EBO bound.
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);

}

void Demo::DrawLukisanKananC()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture17);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	glBindVertexArray(VAO17); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(8.5, 0, 13.05));

	model = glm::rotate(model, glm::radians(-90.0f), glm::vec3(0, 1, 0));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::BuildLukisanKananBingkai() {
	// load image into texture memory
	// ------------------------------
	// Load and create a texture 
	glGenTextures(1, &texture18);
	glBindTexture(GL_TEXTURE_2D, texture18);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	int width, height;
	unsigned char* image = SOIL_load_image("lukisanBingkai.png", &width, &height, 0, SOIL_LOAD_RGBA);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
	SOIL_free_image_data(image);
	glBindTexture(GL_TEXTURE_2D, 0);

	// set up vertex data (and buffer(s)) and configure vertex attributes
	// ------------------------------------------------------------------
	float vertices[] = {
		// format position, tex coords
		// left
		-1, 2,   0, 0, 0, -1.0f, 0.0f, 0.0f,  // 0
		-1, 2, 0.2, 1, 0, -1.0f, 0.0f, 0.0f,  // 1
		-1, 4,   0, 0, 1, -1.0f, 0.0f, 0.0f,  // 2
		-1, 4, 0.2, 1, 1, -1.0f, 0.0f, 0.0f,  // 3

		// right
		1, 2,   0, 0, 0, 1.0f, 0.0f, 0.0f,  // 4
		1, 2, 0.2, 1, 0, 1.0f, 0.0f, 0.0f,  // 5
		1, 4,   0, 0, 1, 1.0f, 0.0f, 0.0f,  // 6
		1, 4, 0.2, 1, 1, 1.0f, 0.0f, 0.0f,  // 7

		// top
		-1, 4, 0.2, 0, 0, 0.0f, 1.0f, 0.0f,  // 8
		 1, 4, 0.2, 1, 0, 0.0f, 1.0f, 0.0f,  // 9
		-1, 4,   0, 0, 1, 0.0f, 1.0f, 0.0f,  // 10
		 1, 4,   0, 1, 1, 0.0f, 1.0f, 0.0f,  // 11

		// bottom
		-1, 2, 0.2, 0, 0, 0.0f, -1.0f, 0.0f,  // 12
		 1, 2, 0.2, 1, 0, 0.0f, -1.0f, 0.0f,  // 13
		-1, 2,   0, 0, 1, 0.0f, -1.0f, 0.0f,  // 14
		 1, 2,   0, 1, 1, 0.0f, -1.0f, 0.0f,  // 15

	};

	unsigned int indices[] = {
		 0,  1,  3,  0,  2,  3,   // left
		 4,  5,  7,  4,  6,  7,   // right
		 8,  9, 11,  8, 10, 11,   // top
		12, 13, 15, 12, 14, 15,   // bottom
	};

	glGenVertexArrays(1, &VAO18);
	glGenBuffers(1, &VBO18);
	glGenBuffers(1, &EBO18);
	// bind the Vertex Array Object first, then bind and set vertex buffer(s), and then configure vertex attributes(s).
	glBindVertexArray(VAO18);

	glBindBuffer(GL_ARRAY_BUFFER, VBO18);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO18);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);

	// define position pointer layout 0
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(0 * sizeof(GLfloat)));
	glEnableVertexAttribArray(0);

	// define texcoord pointer layout 1
	glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
	glEnableVertexAttribArray(1);

	// define normal pointer layout 2
	glVertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(5 * sizeof(GLfloat)));
	glEnableVertexAttribArray(2);

	// note that this is allowed, the call to glVertexAttribPointer registered VBO as the vertex attribute's bound vertex buffer object so afterwards we can safely unbind
	glBindBuffer(GL_ARRAY_BUFFER, 0);

	// You can unbind the VAO afterwards so other VAO calls won't accidentally modify this VAO, but this rarely happens. Modifying other
	// VAOs requires a call to glBindVertexArray anyways so we generally don't unbind VAOs (nor VBOs) when it's not directly necessary.
	glBindVertexArray(0);

	// remember: do NOT unbind the EBO while a VAO is active as the bound element buffer object IS stored in the VAO; keep the EBO bound.
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);

}

void Demo::DrawLukisanKananABingkai()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture18);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	GLint shininessMatLoc = glGetUniformLocation(this->shaderProgram, "material.shininess");
	glUniform1f(shininessMatLoc, 0.25f);

	glBindVertexArray(VAO18); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(8.5, 0, 9));

	model = glm::rotate(model, glm::radians(-90.0f), glm::vec3(0, 1, 0));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 24, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::DrawLukisanKananBBingkai()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture18);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	GLint shininessMatLoc = glGetUniformLocation(this->shaderProgram, "material.shininess");
	glUniform1f(shininessMatLoc, 0.25f);

	glBindVertexArray(VAO18); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(8.5, 0, 11.025));

	model = glm::rotate(model, glm::radians(-90.0f), glm::vec3(0, 1, 0));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 24, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::DrawLukisanKananCBingkai()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture18);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	GLint shininessMatLoc = glGetUniformLocation(this->shaderProgram, "material.shininess");
	glUniform1f(shininessMatLoc, 0.25f);

	glBindVertexArray(VAO18); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(8.5, 0, 13.05));

	model = glm::rotate(model, glm::radians(-90.0f), glm::vec3(0, 1, 0));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 24, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::BuildSaklar() {
	// load image into texture memory
	// ------------------------------
	// Load and create a texture 
	glGenTextures(1, &texture19);
	glBindTexture(GL_TEXTURE_2D, texture19);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	int width, height;
	unsigned char* image = SOIL_load_image("saklarDepan.png", &width, &height, 0, SOIL_LOAD_RGBA);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
	SOIL_free_image_data(image);
	glBindTexture(GL_TEXTURE_2D, 0);

	// set up vertex data (and buffer(s)) and configure vertex attributes
	// ------------------------------------------------------------------
	float vertices[] = {
		// format position, tex coords
		// saklar
		-0.3, 2.2, 0.1, 0, 0, 0.0f, 0.0f, 1.0f,  // 0
		 0.3, 2.2, 0.1, 1, 0, 0.0f, 0.0f, 1.0f,  // 1
		-0.3, 2.8, 0.1, 0, 1, 0.0f, 0.0f, 1.0f,  // 2
		 0.3, 2.8, 0.1, 1, 1, 0.0f, 0.0f, 1.0f,  // 3

	};

	unsigned int indices[] = {
		 0,  1,  3,  0,  2,  3,   // left
	};

	glGenVertexArrays(1, &VAO19);
	glGenBuffers(1, &VBO19);
	glGenBuffers(1, &EBO19);
	// bind the Vertex Array Object first, then bind and set vertex buffer(s), and then configure vertex attributes(s).
	glBindVertexArray(VAO19);

	glBindBuffer(GL_ARRAY_BUFFER, VBO19);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO19);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);

	// define position pointer layout 0
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(0 * sizeof(GLfloat)));
	glEnableVertexAttribArray(0);

	// define texcoord pointer layout 1
	glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
	glEnableVertexAttribArray(1);

	// define normal pointer layout 2
	glVertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(5 * sizeof(GLfloat)));
	glEnableVertexAttribArray(2);

	// note that this is allowed, the call to glVertexAttribPointer registered VBO as the vertex attribute's bound vertex buffer object so afterwards we can safely unbind
	glBindBuffer(GL_ARRAY_BUFFER, 0);

	// You can unbind the VAO afterwards so other VAO calls won't accidentally modify this VAO, but this rarely happens. Modifying other
	// VAOs requires a call to glBindVertexArray anyways so we generally don't unbind VAOs (nor VBOs) when it's not directly necessary.
	glBindVertexArray(0);

	// remember: do NOT unbind the EBO while a VAO is active as the bound element buffer object IS stored in the VAO; keep the EBO bound.
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);

}

void Demo::DrawSaklar()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture19);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	glBindVertexArray(VAO19); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(8.5, 0, 22.5));

	model = glm::rotate(model, glm::radians(-90.0f), glm::vec3(0, 1, 0));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::BuildSaklarBorder() {
	// load image into texture memory
	// ------------------------------
	// Load and create a texture 
	glGenTextures(1, &texture20);
	glBindTexture(GL_TEXTURE_2D, texture20);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	int width, height;
	unsigned char* image = SOIL_load_image("saklarBorder.png", &width, &height, 0, SOIL_LOAD_RGBA);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
	SOIL_free_image_data(image);
	glBindTexture(GL_TEXTURE_2D, 0);

	// set up vertex data (and buffer(s)) and configure vertex attributes
	// ------------------------------------------------------------------
	float vertices[] = {
		// format position, tex coords
		// left
		-0.3, 2.2,   0, 0, 0, -1.0f, 0.0f, 0.0f,  // 0
		-0.3, 2.2, 0.1, 1, 0, -1.0f, 0.0f, 0.0f,  // 1
		-0.3, 2.8,   0, 0, 1, -1.0f, 0.0f, 0.0f,  // 2
		-0.3, 2.8, 0.1, 1, 1, -1.0f, 0.0f, 0.0f,  // 3

		// right
		0.3, 2.2,   0, 0, 0, 1.0f, 0.0f, 0.0f,  // 4
		0.3, 2.2, 0.1, 1, 0, 1.0f, 0.0f, 0.0f,  // 5
		0.3, 2.8,   0, 0, 1, 1.0f, 0.0f, 0.0f,  // 6
		0.3, 2.8, 0.1, 1, 1, 1.0f, 0.0f, 0.0f,  // 7

		// top
		-0.3, 2.8, 0.1, 0, 0, 0.0f, 1.0f, 0.0f,  // 8
		 0.3, 2.8, 0.1, 1, 0, 0.0f, 1.0f, 0.0f,  // 9
		-0.3, 2.8,   0, 0, 1, 0.0f, 1.0f, 0.0f,  // 10
		 0.3, 2.8,   0, 1, 1, 0.0f, 1.0f, 0.0f,  // 11

		// bottom
		-0.3, 2.2, 0.1, 0, 0, 0.0f, -1.0f, 0.0f,  // 12
		 0.3, 2.2, 0.1, 1, 0, 0.0f, -1.0f, 0.0f,  // 13
		-0.3, 2.2,   0, 0, 1, 0.0f, -1.0f, 0.0f,  // 14
		 0.3, 2.2,   0, 1, 1, 0.0f, -1.0f, 0.0f,  // 15

	};

	unsigned int indices[] = {
		 0,  1,  3,  0,  2,  3,   // left
		 4,  5,  7,  4,  6,  7,   // right
		 8,  9, 11,  8, 10, 11,   // top
		12, 13, 15, 12, 14, 15,   // bottom
	};

	glGenVertexArrays(1, &VAO20);
	glGenBuffers(1, &VBO20);
	glGenBuffers(1, &EBO20);
	// bind the Vertex Array Object first, then bind and set vertex buffer(s), and then configure vertex attributes(s).
	glBindVertexArray(VAO20);

	glBindBuffer(GL_ARRAY_BUFFER, VBO20);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO20);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);

	// define position pointer layout 0
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(0 * sizeof(GLfloat)));
	glEnableVertexAttribArray(0);

	// define texcoord pointer layout 1
	glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
	glEnableVertexAttribArray(1);

	// define normal pointer layout 2
	glVertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(5 * sizeof(GLfloat)));
	glEnableVertexAttribArray(2);

	// note that this is allowed, the call to glVertexAttribPointer registered VBO as the vertex attribute's bound vertex buffer object so afterwards we can safely unbind
	glBindBuffer(GL_ARRAY_BUFFER, 0);

	// You can unbind the VAO afterwards so other VAO calls won't accidentally modify this VAO, but this rarely happens. Modifying other
	// VAOs requires a call to glBindVertexArray anyways so we generally don't unbind VAOs (nor VBOs) when it's not directly necessary.
	glBindVertexArray(0);

	// remember: do NOT unbind the EBO while a VAO is active as the bound element buffer object IS stored in the VAO; keep the EBO bound.
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);

}

void Demo::DrawSaklarBorder()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture20);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	glBindVertexArray(VAO20); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(8.5, 0, 22.5));

	model = glm::rotate(model, glm::radians(-90.0f), glm::vec3(0, 1, 0));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 24, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::BuildDindingBelakang() {
	// load image into texture memory
	// ------------------------------
	// Load and create a texture 
	glGenTextures(1, &texture21);
	glBindTexture(GL_TEXTURE_2D, texture21);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	int width, height;
	unsigned char* image = SOIL_load_image("dindingC.png", &width, &height, 0, SOIL_LOAD_RGBA);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
	SOIL_free_image_data(image);
	glBindTexture(GL_TEXTURE_2D, 0);

	// set up vertex data (and buffer(s)) and configure vertex attributes
	// ------------------------------------------------------------------
	float vertices[] = {
		// format position, tex coords
		// dinding belakang
		-5.5, 0, 0, 0, 0, 0.0f, 0.0f, 1.0f,  // 0
		 5.5, 0, 0, 1, 0, 0.0f, 0.0f, 1.0f,  // 1
		-5.5, 5, 0, 0, 1, 0.0f, 0.0f, 1.0f,  // 2
		 5.5, 5, 0, 1, 1, 0.0f, 0.0f, 1.0f,  // 3

	};

	unsigned int indices[] = {
		 0,  1,  3,  0,  2,  3,   // left
	};

	glGenVertexArrays(1, &VAO21);
	glGenBuffers(1, &VBO21);
	glGenBuffers(1, &EBO21);
	// bind the Vertex Array Object first, then bind and set vertex buffer(s), and then configure vertex attributes(s).
	glBindVertexArray(VAO21);

	glBindBuffer(GL_ARRAY_BUFFER, VBO21);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO21);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);

	// define position pointer layout 0
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(0 * sizeof(GLfloat)));
	glEnableVertexAttribArray(0);

	// define texcoord pointer layout 1
	glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
	glEnableVertexAttribArray(1);

	// define normal pointer layout 2
	glVertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(5 * sizeof(GLfloat)));
	glEnableVertexAttribArray(2);

	// note that this is allowed, the call to glVertexAttribPointer registered VBO as the vertex attribute's bound vertex buffer object so afterwards we can safely unbind
	glBindBuffer(GL_ARRAY_BUFFER, 0);

	// You can unbind the VAO afterwards so other VAO calls won't accidentally modify this VAO, but this rarely happens. Modifying other
	// VAOs requires a call to glBindVertexArray anyways so we generally don't unbind VAOs (nor VBOs) when it's not directly necessary.
	glBindVertexArray(0);

	// remember: do NOT unbind the EBO while a VAO is active as the bound element buffer object IS stored in the VAO; keep the EBO bound.
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);

}

void Demo::DrawDindingBelakang()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture21);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	glBindVertexArray(VAO21); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(0, 0, 31));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::BuildAtap() {
	// load image into texture memory
	// ------------------------------
	// Load and create a texture 
	glGenTextures(1, &texture22);
	glBindTexture(GL_TEXTURE_2D, texture22);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	int width, height;
	unsigned char* image = SOIL_load_image("atap.png", &width, &height, 0, SOIL_LOAD_RGBA);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
	SOIL_free_image_data(image);
	glBindTexture(GL_TEXTURE_2D, 0);

	// set up vertex data (and buffer(s)) and configure vertex attributes
	// ------------------------------------------------------------------
	float vertices[] = {
		// format position, tex coords
		-8.5, 0, 0, 0, 0, 0.0f, 0.0f, 1.0f,  // 0
		 8.5, 0, 0, 1, 0, 0.0f, 0.0f, 1.0f,  // 1
		-8.5, 2, 0, 0, 1, 0.0f, 0.0f, 1.0f,  // 2
		 8.5, 2, 0, 1, 1, 0.0f, 0.0f, 1.0f,  // 3

		-6.5,  2, 0, 0, 0, 0.0f, 0.0f, 1.0f,  // 4
		-8.5,  2, 0, 1, 0, 0.0f, 0.0f, 1.0f,  // 5
		-6.5, 29, 0, 0, 1, 0.0f, 0.0f, 1.0f,  // 6
		-8.5, 29, 0, 1, 1, 0.0f, 0.0f, 1.0f,  // 7

		6.5,  2, 0, 0, 0, 0.0f, 0.0f, 1.0f,  // 8
		8.5,  2, 0, 1, 0, 0.0f, 0.0f, 1.0f,  // 9
		6.5, 29, 0, 0, 1, 0.0f, 0.0f, 1.0f,  // 10
		8.5, 29, 0, 1, 1, 0.0f, 0.0f, 1.0f,  // 11

		-8.5, 29, 0, 0, 0, 0.0f, 0.0f, 1.0f,  // 12
		 8.5, 29, 0, 1, 0, 0.0f, 0.0f, 1.0f,  // 13
		-8.5, 31, 0, 0, 1, 0.0f, 0.0f, 1.0f,  // 14
		 8.5, 31, 0, 1, 1, 0.0f, 0.0f, 1.0f,  // 15

		-6.5, 2,  0, 0, 0, 0.0f, -1.0f, 0.0f,  // 16
		 6.5, 2,  0, 1, 0, 0.0f, -1.0f, 0.0f,  // 17
		-6.5, 2, -1, 0, 1, 0.0f, -1.0f, 0.0f,  // 18
		 6.5, 2, -1, 1, 1, 0.0f, -1.0f, 0.0f,  // 19

		-6.5,  2, -1, 0, 0, -1.0f, 0.0f, 0.0f,  // 20
		-6.5,  2,  0, 1, 0, -1.0f, 0.0f, 0.0f,  // 21
		-6.5, 29, -1, 0, 1, -1.0f, 0.0f, 0.0f,  // 22
		-6.5, 29,  0, 1, 1, -1.0f, 0.0f, 0.0f,  // 23

		6.5,  2, -1, 0, 0, 1.0f, 0.0f, 0.0f,  // 24
		6.5,  2,  0, 1, 0, 1.0f, 0.0f, 0.0f,  // 25
		6.5, 29, -1, 0, 1, 1.0f, 0.0f, 0.0f,  // 26
		6.5, 29,  0, 1, 1, 1.0f, 0.0f, 0.0f,  // 27

		-6.5, 29,  0, 0, 0, 0.0f, 1.0f, 0.0f,  // 28
		 6.5, 29,  0, 1, 0, 0.0f, 1.0f, 0.0f,  // 29
		-6.5, 29, -1, 0, 1, 0.0f, 1.0f, 0.0f,  // 30
		 6.5, 29, -1, 1, 1, 0.0f, 1.0f, 0.0f,  // 31

		-6.5,  2, -1, 0, 0, 0.0f, 0.0f, -1.0f,  // 32
		 6.5,  2, -1, 1, 0, 0.0f, 0.0f, -1.0f,  // 33
		-6.5, 29, -1, 0, 1, 0.0f, 0.0f, -1.0f,  // 34
		 6.5, 29, -1, 1, 1, 0.0f, 0.0f, -1.0f,  // 35

	};

	unsigned int indices[] = {
		 0,  1,  3,  0,  2,  3,
		 4,  5,  7,  4,  6,  7,
		 8,  9, 11,  8, 10, 11,
		12, 13, 15, 12, 14, 15,
		16, 17, 19, 16, 18, 19,
		20, 21, 23, 20, 22, 23,
		24, 25, 27, 24, 26, 27,
		28, 29, 31, 28, 30, 31,
		32, 33, 35, 32, 34, 35,
	};

	glGenVertexArrays(1, &VAO22);
	glGenBuffers(1, &VBO22);
	glGenBuffers(1, &EBO22);
	// bind the Vertex Array Object first, then bind and set vertex buffer(s), and then configure vertex attributes(s).
	glBindVertexArray(VAO22);

	glBindBuffer(GL_ARRAY_BUFFER, VBO22);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO22);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);

	// define position pointer layout 0
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(0 * sizeof(GLfloat)));
	glEnableVertexAttribArray(0);

	// define texcoord pointer layout 1
	glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
	glEnableVertexAttribArray(1);

	// define normal pointer layout 2
	glVertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(5 * sizeof(GLfloat)));
	glEnableVertexAttribArray(2);

	// note that this is allowed, the call to glVertexAttribPointer registered VBO as the vertex attribute's bound vertex buffer object so afterwards we can safely unbind
	glBindBuffer(GL_ARRAY_BUFFER, 0);

	// You can unbind the VAO afterwards so other VAO calls won't accidentally modify this VAO, but this rarely happens. Modifying other
	// VAOs requires a call to glBindVertexArray anyways so we generally don't unbind VAOs (nor VBOs) when it's not directly necessary.
	glBindVertexArray(0);

	// remember: do NOT unbind the EBO while a VAO is active as the bound element buffer object IS stored in the VAO; keep the EBO bound.
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);

}

void Demo::DrawAtap()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture22);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	glBindVertexArray(VAO22); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(0, 5, 0));

	model = glm::rotate(model, glm::radians(90.0f), glm::vec3(1, 0, 0));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 54, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::BuildVentilasiDepan() {
	// load image into texture memory
	// ------------------------------
	// Load and create a texture 
	glGenTextures(1, &texture23);
	glBindTexture(GL_TEXTURE_2D, texture23);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	int width, height;
	unsigned char* image = SOIL_load_image("ventilasi.png", &width, &height, 0, SOIL_LOAD_RGBA);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
	SOIL_free_image_data(image);
	glBindTexture(GL_TEXTURE_2D, 0);

	// set up vertex data (and buffer(s)) and configure vertex attributes
	// ------------------------------------------------------------------
	float vertices[] = {
		// format position, tex coords
		// ventilasi depan
		-0.5, 0, -0.9, 0, 0, 0.0f, 0.0f, 1.0f,  // 0
		 0.5, 0, -0.9, 1, 0, 0.0f, 0.0f, 1.0f,  // 1
		-0.5, 1, -0.9, 0, 1, 0.0f, 0.0f, 1.0f,  // 2
		 0.5, 1, -0.9, 1, 1, 0.0f, 0.0f, 1.0f,  // 3

	};

	unsigned int indices[] = {
		 0,  1,  3,  0,  2,  3,   // left
	};

	glGenVertexArrays(1, &VAO23);
	glGenBuffers(1, &VBO23);
	glGenBuffers(1, &EBO23);
	// bind the Vertex Array Object first, then bind and set vertex buffer(s), and then configure vertex attributes(s).
	glBindVertexArray(VAO23);

	glBindBuffer(GL_ARRAY_BUFFER, VBO23);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO23);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);

	// define position pointer layout 0
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(0 * sizeof(GLfloat)));
	glEnableVertexAttribArray(0);

	// define texcoord pointer layout 1
	glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
	glEnableVertexAttribArray(1);

	// define normal pointer layout 2
	glVertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(5 * sizeof(GLfloat)));
	glEnableVertexAttribArray(2);

	// note that this is allowed, the call to glVertexAttribPointer registered VBO as the vertex attribute's bound vertex buffer object so afterwards we can safely unbind
	glBindBuffer(GL_ARRAY_BUFFER, 0);

	// You can unbind the VAO afterwards so other VAO calls won't accidentally modify this VAO, but this rarely happens. Modifying other
	// VAOs requires a call to glBindVertexArray anyways so we generally don't unbind VAOs (nor VBOs) when it's not directly necessary.
	glBindVertexArray(0);

	// remember: do NOT unbind the EBO while a VAO is active as the bound element buffer object IS stored in the VAO; keep the EBO bound.
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);

}

void Demo::DrawVentilasiDepanA()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture23);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	GLint shininessMatLoc = glGetUniformLocation(this->shaderProgram, "material.shininess");
	glUniform1f(shininessMatLoc, 0.25f);

	glBindVertexArray(VAO23); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(0, 5, 5));

	model = glm::rotate(model, glm::radians(90.0f), glm::vec3(1, 0, 0));

	/*model = glm::scale(model, glm::vec3(3, 3, 3));*/

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::DrawVentilasiDepanB()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture23);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	GLint shininessMatLoc = glGetUniformLocation(this->shaderProgram, "material.shininess");
	glUniform1f(shininessMatLoc, 0.25f);

	glBindVertexArray(VAO23); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(0, 5, 25));

	model = glm::rotate(model, glm::radians(90.0f), glm::vec3(1, 0, 0));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::BuildVentilasiBorder() {
	// load image into texture memory
	// ------------------------------
	// Load and create a texture 
	glGenTextures(1, &texture24);
	glBindTexture(GL_TEXTURE_2D, texture24);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	int width, height;
	unsigned char* image = SOIL_load_image("ventilasiBorder.png", &width, &height, 0, SOIL_LOAD_RGBA);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
	SOIL_free_image_data(image);
	glBindTexture(GL_TEXTURE_2D, 0);

	// set up vertex data (and buffer(s)) and configure vertex attributes
	// ------------------------------------------------------------------
	float vertices[] = {
		// format position, tex coords
		-0.5, 0, -0.9, 0, 0, 0.0f, -1.0f, 0.0f,  // 0
		 0.5, 0, -0.9, 1, 0, 0.0f, -1.0f, 0.0f,  // 1
		-0.5, 0,   -1, 0, 1, 0.0f, -1.0f, 0.0f,  // 2
		 0.5, 0,   -1, 1, 1, 0.0f, -1.0f, 0.0f,  // 3

		-0.5, 1, -0.9, 0, 0, 0.0f, 1.0f, 0.0f,  // 4
		 0.5, 1, -0.9, 1, 0, 0.0f, 1.0f, 0.0f,  // 5
		-0.5, 1,   -1, 0, 1, 0.0f, 1.0f, 0.0f,  // 6
		 0.5, 1,   -1, 1, 1, 0.0f, 1.0f, 0.0f,  // 7

		-0.5, 0, -0.9, 0, 0, -1.0f, 0.0f, 0.0f,  // 8
		-0.5, 1, -0.9, 1, 0, -1.0f, 0.0f, 0.0f,  // 9
		-0.5, 0,   -1, 0, 1, -1.0f, 0.0f, 0.0f,  // 10
		-0.5, 1,   -1, 1, 1, -1.0f, 0.0f, 0.0f,  // 11

		0.5, 0, -0.9, 0, 0, 1.0f, 0.0f, 0.0f,  // 12
		0.5, 1, -0.9, 1, 0, 1.0f, 0.0f, 0.0f,  // 13
		0.5, 0,   -1, 0, 1, 1.0f, 0.0f, 0.0f,  // 14
		0.5, 1,   -1, 1, 1, 1.0f, 0.0f, 0.0f,  // 15

	};

	unsigned int indices[] = {
		 0,  1,  3,  0,  2,  3,
		 4,  5,  7,  4,  6,  7,
		 8,  9, 11,  8, 10, 11,
		12, 13, 15, 12, 14, 15,
	};

	glGenVertexArrays(1, &VAO24);
	glGenBuffers(1, &VBO24);
	glGenBuffers(1, &EBO24);
	// bind the Vertex Array Object first, then bind and set vertex buffer(s), and then configure vertex attributes(s).
	glBindVertexArray(VAO24);

	glBindBuffer(GL_ARRAY_BUFFER, VBO24);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO24);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);

	// define position pointer layout 0
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(0 * sizeof(GLfloat)));
	glEnableVertexAttribArray(0);

	// define texcoord pointer layout 1
	glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
	glEnableVertexAttribArray(1);

	// define normal pointer layout 2
	glVertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(5 * sizeof(GLfloat)));
	glEnableVertexAttribArray(2);

	// note that this is allowed, the call to glVertexAttribPointer registered VBO as the vertex attribute's bound vertex buffer object so afterwards we can safely unbind
	glBindBuffer(GL_ARRAY_BUFFER, 0);

	// You can unbind the VAO afterwards so other VAO calls won't accidentally modify this VAO, but this rarely happens. Modifying other
	// VAOs requires a call to glBindVertexArray anyways so we generally don't unbind VAOs (nor VBOs) when it's not directly necessary.
	glBindVertexArray(0);

	// remember: do NOT unbind the EBO while a VAO is active as the bound element buffer object IS stored in the VAO; keep the EBO bound.
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);

}

void Demo::DrawVentilasiBorderA()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture24);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	GLint shininessMatLoc = glGetUniformLocation(this->shaderProgram, "material.shininess");
	glUniform1f(shininessMatLoc, 0.25f);

	glBindVertexArray(VAO24); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(0, 5, 5));

	model = glm::rotate(model, glm::radians(90.0f), glm::vec3(1, 0, 0));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 24, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::DrawVentilasiBorderB()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture24);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	GLint shininessMatLoc = glGetUniformLocation(this->shaderProgram, "material.shininess");
	glUniform1f(shininessMatLoc, 0.25f);

	glBindVertexArray(VAO24); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(0, 5, 25));

	model = glm::rotate(model, glm::radians(90.0f), glm::vec3(1, 0, 0));

	/*model = glm::scale(model, glm::vec3(3, 3, 3));*/

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 24, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::BuildLampuDepan() {
	// load image into texture memory
	// ------------------------------
	// Load and create a texture 
	glGenTextures(1, &texture25);
	glBindTexture(GL_TEXTURE_2D, texture25);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	int width, height;
	unsigned char* image = SOIL_load_image("lampu.png", &width, &height, 0, SOIL_LOAD_RGBA);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
	SOIL_free_image_data(image);
	glBindTexture(GL_TEXTURE_2D, 0);

	// set up vertex data (and buffer(s)) and configure vertex attributes
	// ------------------------------------------------------------------
	float vertices[] = {
		// format position, tex coords
		// lampu depan
		-2.0, 0, -0.8, 0, 0, 0.0f, 0.0f, 1.0f,  // 0
		 2.0, 0, -0.8, 1, 0, 0.0f, 0.0f, 1.0f,  // 1
		-2.0, 3, -0.8, 0, 1, 0.0f, 0.0f, 1.0f,  // 2
		 2.0, 3, -0.8, 1, 1, 0.0f, 0.0f, 1.0f,  // 3

	};

	unsigned int indices[] = {
		 0,  1,  3,  0,  2,  3,   // left
	};

	glGenVertexArrays(1, &VAO25);
	glGenBuffers(1, &VBO25);
	glGenBuffers(1, &EBO25);
	// bind the Vertex Array Object first, then bind and set vertex buffer(s), and then configure vertex attributes(s).
	glBindVertexArray(VAO25);

	glBindBuffer(GL_ARRAY_BUFFER, VBO25);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO25);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);

	// define position pointer layout 0
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(0 * sizeof(GLfloat)));
	glEnableVertexAttribArray(0);

	// define texcoord pointer layout 1
	glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
	glEnableVertexAttribArray(1);

	// define normal pointer layout 2
	glVertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(5 * sizeof(GLfloat)));
	glEnableVertexAttribArray(2);

	// note that this is allowed, the call to glVertexAttribPointer registered VBO as the vertex attribute's bound vertex buffer object so afterwards we can safely unbind
	glBindBuffer(GL_ARRAY_BUFFER, 0);

	// You can unbind the VAO afterwards so other VAO calls won't accidentally modify this VAO, but this rarely happens. Modifying other
	// VAOs requires a call to glBindVertexArray anyways so we generally don't unbind VAOs (nor VBOs) when it's not directly necessary.
	glBindVertexArray(0);

	// remember: do NOT unbind the EBO while a VAO is active as the bound element buffer object IS stored in the VAO; keep the EBO bound.
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);

}

void Demo::DrawLampuDepan()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture25);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	glBindVertexArray(VAO25); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(0, 5, 14));

	model = glm::rotate(model, glm::radians(90.0f), glm::vec3(1, 0, 0));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::BuildLampuBorder() {
	// load image into texture memory
	// ------------------------------
	// Load and create a texture 
	glGenTextures(1, &texture26);
	glBindTexture(GL_TEXTURE_2D, texture26);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	int width, height;
	unsigned char* image = SOIL_load_image("lampuBorder.png", &width, &height, 0, SOIL_LOAD_RGBA);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
	SOIL_free_image_data(image);
	glBindTexture(GL_TEXTURE_2D, 0);

	// set up vertex data (and buffer(s)) and configure vertex attributes
	// ------------------------------------------------------------------
	float vertices[] = {
		// format position, tex coords
		// lampu border
		-2.0, 0, -0.8, 0, 0, 0.0f, -1.0f, 0.0f,  // 0
		 2.0, 0, -0.8, 1, 0, 0.0f, -1.0f, 0.0f,  // 1
		-2.0, 0,   -1, 0, 1, 0.0f, -1.0f, 0.0f,  // 2
		 2.0, 0,   -1, 1, 1, 0.0f, -1.0f, 0.0f,  // 3

		-2.0, 3, -0.8, 0, 0, 0.0f, 1.0f, 0.0f,  // 4
		 2.0, 3, -0.8, 1, 0, 0.0f, 1.0f, 0.0f,  // 5
		-2.0, 3,   -1, 0, 1, 0.0f, 1.0f, 0.0f,  // 6
		 2.0, 3,   -1, 1, 1, 0.0f, 1.0f, 0.0f,  // 7

		-2.0, 0, -0.8, 0, 0, -1.0f, 0.0f, 0.0f,  // 8
		-2.0, 3, -0.8, 1, 0, -1.0f, 0.0f, 0.0f,  // 9
		-2.0, 0,   -1, 0, 1, -1.0f, 0.0f, 0.0f,  // 10
		-2.0, 3,   -1, 1, 1, -1.0f, 0.0f, 0.0f,  // 11

		2.0, 0, -0.8, 0, 0, 1.0f, 0.0f, 0.0f,  // 12
		2.0, 3, -0.8, 1, 0, 1.0f, 0.0f, 0.0f,  // 13
		2.0, 0,   -1, 0, 1, 1.0f, 0.0f, 0.0f,  // 14
		2.0, 3,   -1, 1, 1, 1.0f, 0.0f, 0.0f,  // 15

	};

	unsigned int indices[] = {
		 0,  1,  3,  0,  2,  3,
		 4,  5,  7,  4,  6,  7,
		 8,  9, 11,  8, 10, 11,
		12, 13, 15, 12, 14, 15,
	};

	glGenVertexArrays(1, &VAO26);
	glGenBuffers(1, &VBO26);
	glGenBuffers(1, &EBO26);
	// bind the Vertex Array Object first, then bind and set vertex buffer(s), and then configure vertex attributes(s).
	glBindVertexArray(VAO26);

	glBindBuffer(GL_ARRAY_BUFFER, VBO26);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO26);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);

	// define position pointer layout 0
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(0 * sizeof(GLfloat)));
	glEnableVertexAttribArray(0);

	// define texcoord pointer layout 1
	glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
	glEnableVertexAttribArray(1);

	// define normal pointer layout 2
	glVertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(5 * sizeof(GLfloat)));
	glEnableVertexAttribArray(2);

	// note that this is allowed, the call to glVertexAttribPointer registered VBO as the vertex attribute's bound vertex buffer object so afterwards we can safely unbind
	glBindBuffer(GL_ARRAY_BUFFER, 0);

	// You can unbind the VAO afterwards so other VAO calls won't accidentally modify this VAO, but this rarely happens. Modifying other
	// VAOs requires a call to glBindVertexArray anyways so we generally don't unbind VAOs (nor VBOs) when it's not directly necessary.
	glBindVertexArray(0);

	// remember: do NOT unbind the EBO while a VAO is active as the bound element buffer object IS stored in the VAO; keep the EBO bound.
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);

}

void Demo::DrawLampuBorder()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture26);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	glBindVertexArray(VAO26); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(0, 5, 14));

	model = glm::rotate(model, glm::radians(90.0f), glm::vec3(1, 0, 0));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 24, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::BuildKanopiKipas() {
	// load image into texture memory
	// ------------------------------
	// Load and create a texture 
	glGenTextures(1, &texture27);
	glBindTexture(GL_TEXTURE_2D, texture27);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	int width, height;
	unsigned char* image = SOIL_load_image("kanopiKipas.png", &width, &height, 0, SOIL_LOAD_RGBA);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
	SOIL_free_image_data(image);
	glBindTexture(GL_TEXTURE_2D, 0);

	// set up vertex data (and buffer(s)) and configure vertex attributes
	// ------------------------------------------------------------------
	float vertices[] = {
		// format position, tex coords
		// belakang
		-0.2, -0.1, -0.2, 0, 0, 0.0f, 0.0f, -1.0f,  // 0
		 0.2, -0.1, -0.2, 1, 0, 0.0f, 0.0f, -1.0f,  // 1
		-0.2,  0.1, -0.2, 0, 1, 0.0f, 0.0f, -1.0f,  // 2
		 0.2,  0.1, -0.2, 1, 1, 0.0f, 0.0f, -1.0f,  // 3

		// depan
		-0.2, -0.1, 0.2, 0, 0, 0.0f, 0.0f, 1.0f,  // 4
		 0.2, -0.1, 0.2, 1, 0, 0.0f, 0.0f, 1.0f,  // 5
		-0.2,  0.1, 0.2, 0, 1, 0.0f, 0.0f, 1.0f,  // 6
		 0.2,  0.1, 0.2, 1, 1, 0.0f, 0.0f, 1.0f,  // 7

		// kiri
		-0.2, -0.1, -0.2, 0, 0, -1.0f, 0.0f, 0.0f,  // 8
		-0.2, -0.1,  0.2, 1, 0, -1.0f, 0.0f, 0.0f,  // 9
		-0.2,  0.1, -0.2, 0, 1, -1.0f, 0.0f, 0.0f,  // 10
		-0.2,  0.1,  0.2, 1, 1, -1.0f, 0.0f, 0.0f,  // 11

		// kanan
		0.2, -0.1, -0.2, 0, 0, 1.0f, 0.0f, 0.0f,  // 12
		0.2, -0.1,  0.2, 1, 0, 1.0f, 0.0f, 0.0f,  // 13
		0.2,  0.1, -0.2, 0, 1, 1.0f, 0.0f, 0.0f,  // 14
		0.2,  0.1,  0.2, 1, 1, 1.0f, 0.0f, 0.0f,  // 15

		// bawah
		-0.2, -0.1,  0.2, 0, 0, 0.0f, -1.0f, 0.0f,  // 16
		 0.2, -0.1,  0.2, 1, 0, 0.0f, -1.0f, 0.0f,  // 17
		-0.2, -0.1, -0.2, 0, 1, 0.0f, -1.0f, 0.0f,  // 18
		 0.2, -0.1, -0.2, 1, 1, 0.0f, -1.0f, 0.0f,  // 19

	};

	unsigned int indices[] = {
		 0,  1,  3,  0,  2,  3,
		 4,  5,  7,  4,  6,  7,
		 8,  9, 11,  8, 10, 11,
		12, 13, 15, 12, 14, 15,
		16, 17, 19, 16, 18, 19
	};

	glGenVertexArrays(1, &VAO27);
	glGenBuffers(1, &VBO27);
	glGenBuffers(1, &EBO27);
	// bind the Vertex Array Object first, then bind and set vertex buffer(s), and then configure vertex attributes(s).
	glBindVertexArray(VAO27);

	glBindBuffer(GL_ARRAY_BUFFER, VBO27);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO27);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);

	// define position pointer layout 0
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(0 * sizeof(GLfloat)));
	glEnableVertexAttribArray(0);

	// define texcoord pointer layout 1
	glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
	glEnableVertexAttribArray(1);

	// define normal pointer layout 2
	glVertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(5 * sizeof(GLfloat)));
	glEnableVertexAttribArray(2);

	// note that this is allowed, the call to glVertexAttribPointer registered VBO as the vertex attribute's bound vertex buffer object so afterwards we can safely unbind
	glBindBuffer(GL_ARRAY_BUFFER, 0);

	// You can unbind the VAO afterwards so other VAO calls won't accidentally modify this VAO, but this rarely happens. Modifying other
	// VAOs requires a call to glBindVertexArray anyways so we generally don't unbind VAOs (nor VBOs) when it's not directly necessary.
	glBindVertexArray(0);

	// remember: do NOT unbind the EBO while a VAO is active as the bound element buffer object IS stored in the VAO; keep the EBO bound.
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);

}

void Demo::DrawKanopiKipasA()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture27);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	GLint shininessMatLoc = glGetUniformLocation(this->shaderProgram, "material.shininess");
	glUniform1f(shininessMatLoc, 0.25f);

	glBindVertexArray(VAO27); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(0, 5.9, 10));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 30, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::DrawKanopiKipasB()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture27);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	GLint shininessMatLoc = glGetUniformLocation(this->shaderProgram, "material.shininess");
	glUniform1f(shininessMatLoc, 0.25f);

	glBindVertexArray(VAO27); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(0, 5.9, 21));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 30, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::BuildLeherKipas() {
	// load image into texture memory
	// ------------------------------
	// Load and create a texture 
	glGenTextures(1, &texture28);
	glBindTexture(GL_TEXTURE_2D, texture28);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	int width, height;
	unsigned char* image = SOIL_load_image("leherKipas.png", &width, &height, 0, SOIL_LOAD_RGBA);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
	SOIL_free_image_data(image);
	glBindTexture(GL_TEXTURE_2D, 0);

	// set up vertex data (and buffer(s)) and configure vertex attributes
	// ------------------------------------------------------------------
	float vertices[] = {
		// format position, tex coords
		// belakang
		-0.1, -0.3, -0.1, 0, 0, 0.0f, 0.0f, -1.0f,  // 0
		 0.1, -0.3, -0.1, 1, 0, 0.0f, 0.0f, -1.0f,  // 1
		-0.1,  0.3, -0.1, 0, 1, 0.0f, 0.0f, -1.0f,  // 2
		 0.1,  0.3, -0.1, 1, 1, 0.0f, 0.0f, -1.0f,  // 3

		// depan
		-0.1, -0.3, 0.1, 0, 0, 0.0f, 0.0f, 1.0f,  // 4
		 0.1, -0.3, 0.1, 1, 0, 0.0f, 0.0f, 1.0f,  // 5
		-0.1,  0.3, 0.1, 0, 1, 0.0f, 0.0f, 1.0f,  // 6
		 0.1,  0.3, 0.1, 1, 1, 0.0f, 0.0f, 1.0f,  // 7

		// kiri
		-0.1, -0.3, -0.1, 0, 0, -1.0f, 0.0f, 0.0f,  // 8
		-0.1, -0.3,  0.1, 1, 0, -1.0f, 0.0f, 0.0f,  // 9
		-0.1,  0.3, -0.1, 0, 1, -1.0f, 0.0f, 0.0f,  // 10
		-0.1,  0.3,  0.1, 1, 1, -1.0f, 0.0f, 0.0f,  // 11

		// kanan
		0.1, -0.3, -0.1, 0, 0, 1.0f, 0.0f, 0.0f,  // 12
		0.1, -0.3,  0.1, 1, 0, 1.0f, 0.0f, 0.0f,  // 13
		0.1,  0.3, -0.1, 0, 1, 1.0f, 0.0f, 0.0f,  // 14
		0.1,  0.3,  0.1, 1, 1, 1.0f, 0.0f, 0.0f,  // 15

	};

	unsigned int indices[] = {
		 0,  1,  3,  0,  2,  3,
		 4,  5,  7,  4,  6,  7,
		 8,  9, 11,  8, 10, 11,
		12, 13, 15, 12, 14, 15,
	};

	glGenVertexArrays(1, &VAO28);
	glGenBuffers(1, &VBO28);
	glGenBuffers(1, &EBO28);
	// bind the Vertex Array Object first, then bind and set vertex buffer(s), and then configure vertex attributes(s).
	glBindVertexArray(VAO28);

	glBindBuffer(GL_ARRAY_BUFFER, VBO28);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO28);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);

	// define position pointer layout 0
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(0 * sizeof(GLfloat)));
	glEnableVertexAttribArray(0);

	// define texcoord pointer layout 1
	glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
	glEnableVertexAttribArray(1);

	// define normal pointer layout 2
	glVertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(5 * sizeof(GLfloat)));
	glEnableVertexAttribArray(2);

	// note that this is allowed, the call to glVertexAttribPointer registered VBO as the vertex attribute's bound vertex buffer object so afterwards we can safely unbind
	glBindBuffer(GL_ARRAY_BUFFER, 0);

	// You can unbind the VAO afterwards so other VAO calls won't accidentally modify this VAO, but this rarely happens. Modifying other
	// VAOs requires a call to glBindVertexArray anyways so we generally don't unbind VAOs (nor VBOs) when it's not directly necessary.
	glBindVertexArray(0);

	// remember: do NOT unbind the EBO while a VAO is active as the bound element buffer object IS stored in the VAO; keep the EBO bound.
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);

}

void Demo::DrawLeherKipasA()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture28);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	GLint shininessMatLoc = glGetUniformLocation(this->shaderProgram, "material.shininess");
	glUniform1f(shininessMatLoc, 0.25f);

	glBindVertexArray(VAO28); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(0, 5.5, 10));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 24, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::DrawLeherKipasB()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture28);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	GLint shininessMatLoc = glGetUniformLocation(this->shaderProgram, "material.shininess");
	glUniform1f(shininessMatLoc, 0.25f);

	glBindVertexArray(VAO28); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(0, 5.5, 21));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 24, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::BuildKipas() {
	// load image into texture memory
	// ------------------------------
	// Load and create a texture 
	glGenTextures(1, &texture29);
	glBindTexture(GL_TEXTURE_2D, texture29);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	int width, height;
	unsigned char* image = SOIL_load_image("kipas.png", &width, &height, 0, SOIL_LOAD_RGBA);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
	SOIL_free_image_data(image);
	glBindTexture(GL_TEXTURE_2D, 0);

	// set up vertex data (and buffer(s)) and configure vertex attributes
	// ------------------------------------------------------------------
	float vertices[] = {
		// format position, tex coords
		// bawah
		-1, 0,  1, 0, 0, 0.0f, -1.0f, 0.0f,  // 16
		 1, 0,  1, 1, 0, 0.0f, -1.0f, 0.0f,  // 17
		-1, 0, -1, 0, 1, 0.0f, -1.0f, 0.0f,  // 18
		 1, 0, -1, 1, 1, 0.0f, -1.0f, 0.0f,  // 19

	};

	unsigned int indices[] = {
		 0,  1,  3,  0,  2,  3,
	};

	glGenVertexArrays(1, &VAO29);
	glGenBuffers(1, &VBO29);
	glGenBuffers(1, &EBO29);
	// bind the Vertex Array Object first, then bind and set vertex buffer(s), and then configure vertex attributes(s).
	glBindVertexArray(VAO29);

	glBindBuffer(GL_ARRAY_BUFFER, VBO29);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO29);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);

	// define position pointer layout 0
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(0 * sizeof(GLfloat)));
	glEnableVertexAttribArray(0);

	// define texcoord pointer layout 1
	glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
	glEnableVertexAttribArray(1);

	// define normal pointer layout 2
	glVertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(5 * sizeof(GLfloat)));
	glEnableVertexAttribArray(2);

	// note that this is allowed, the call to glVertexAttribPointer registered VBO as the vertex attribute's bound vertex buffer object so afterwards we can safely unbind
	glBindBuffer(GL_ARRAY_BUFFER, 0);

	// You can unbind the VAO afterwards so other VAO calls won't accidentally modify this VAO, but this rarely happens. Modifying other
	// VAOs requires a call to glBindVertexArray anyways so we generally don't unbind VAOs (nor VBOs) when it's not directly necessary.
	glBindVertexArray(0);

	// remember: do NOT unbind the EBO while a VAO is active as the bound element buffer object IS stored in the VAO; keep the EBO bound.
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);

}

void Demo::DrawKipasA()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture29);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	GLint shininessMatLoc = glGetUniformLocation(this->shaderProgram, "material.shininess");
	glUniform1f(shininessMatLoc, 0.25f);

	glBindVertexArray(VAO29); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(0, 5.2, 10));

	model = glm::rotate(model, glm::radians(angleKipas), glm::vec3(0, 1, 0));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::DrawKipasB()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture29);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	GLint shininessMatLoc = glGetUniformLocation(this->shaderProgram, "material.shininess");
	glUniform1f(shininessMatLoc, 0.25f);

	glBindVertexArray(VAO29); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(0, 5.2, 21));

	model = glm::rotate(model, glm::radians(angleKipas), glm::vec3(0, 1, 0));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::BuildMeja() {
	// load image into texture memory
	// ------------------------------
	// Load and create a texture 
	glGenTextures(1, &texture30);
	glBindTexture(GL_TEXTURE_2D, texture30);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	int width, height;
	unsigned char* image = SOIL_load_image("meja.png", &width, &height, 0, SOIL_LOAD_RGBA);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
	SOIL_free_image_data(image);
	glBindTexture(GL_TEXTURE_2D, 0);

	// set up vertex data (and buffer(s)) and configure vertex attributes
	// ------------------------------------------------------------------
	float vertices[] = {
		// format position, tex coords
		// left
		-3.5, 1.2,  0, 0, 0, -1.0f, 0.0f, 0.0f,  // 0
		-3.5, 1.2, 17, 1, 0, -1.0f, 0.0f, 0.0f,  // 1
		-3.5, 1.4,  0, 0, 1, -1.0f, 0.0f, 0.0f,  // 2
		-3.5, 1.4, 17, 1, 1, -1.0f, 0.0f, 0.0f,  // 3

		// right
		3.5, 1.2,  0, 0, 0, 1.0f, 0.0f, 0.0f,  // 4
		3.5, 1.2, 17, 1, 0, 1.0f, 0.0f, 0.0f,  // 5
		3.5, 1.4,  0, 0, 1, 1.0f, 0.0f, 0.0f,  // 6
		3.5, 1.4, 17, 1, 1, 1.0f, 0.0f, 0.0f,  // 7

		//top
		-3.5, 1.2,  0, 0, 0, 0.0f, 1.0f, 0.0f,  // 8
		 3.5, 1.2,  0, 1, 0, 0.0f, 1.0f, 0.0f,  // 9
		-3.5, 1.2, 17, 0, 1, 0.0f, 1.0f, 0.0f,  // 10
		 3.5, 1.2, 17, 1, 1, 0.0f, 1.0f, 0.0f,  // 11

		//bottom
		-3.5, 1.4,  0, 0, 0, 0.0f, -1.0f, 0.0f,  // 8
		 3.5, 1.4,  0, 1, 0, 0.0f, -1.0f, 0.0f,  // 9
		-3.5, 1.4, 17, 0, 1, 0.0f, -1.0f, 0.0f,  // 10
		 3.5, 1.4, 17, 1, 1, 0.0f, -1.0f, 0.0f,  // 11

		//front
		-3.5, 1.2, 0, 0, 0, 0.0f, 0.0f, 1.0f,  // 12
		 3.5, 1.2, 0, 1, 0, 0.0f, 0.0f, 1.0f,  // 13
		-3.5, 1.4, 0, 0, 1, 0.0f, 0.0f, 1.0f,  // 14
		 3.5, 1.4, 0, 1, 1, 0.0f, 0.0f, 1.0f,  // 15

		//back
		-3.5, 1.2, 17, 0, 0, 0.0f, 0.0f, -1.0f,  // 16
		 3.5, 1.2, 17, 1, 0, 0.0f, 0.0f, -1.0f,  // 17
		-3.5, 1.4, 17, 0, 1, 0.0f, 0.0f, -1.0f,  // 18
		 3.5, 1.4, 17, 1, 1, 0.0f, 0.0f, -1.0f,  // 19

		// kaki depan (depan)
		-2.5,   0, 3.4, 0, 0, 0.0f, 0.0f, 1.0f,  // 20
		 2.5,   0, 3.4, 1, 0, 0.0f, 0.0f, 1.0f,  // 21
		-2.5, 1.2, 3.4, 0, 1, 0.0f, 0.0f, 1.0f,  // 22
		 2.5, 1.2, 3.4, 1, 1, 0.0f, 0.0f, 1.0f,  // 23

		// kaki depan (belakang)
		-2.5,   0, 3.6, 0, 0, 0.0f, 0.0f, -1.0f,  // 24
		 2.5,   0, 3.6, 1, 0, 0.0f, 0.0f, -1.0f,  // 25
		-2.5, 1.2, 3.6, 0, 1, 0.0f, 0.0f, -1.0f,  // 26
		 2.5, 1.2, 3.6, 1, 1, 0.0f, 0.0f, -1.0f,  // 27

		// kaki depan (kiri)
		-2.5,   0, 3.4, 0, 0, -1.0f, 0.0f, 0.0f,  // 28
		-2.5,   0, 3.6, 1, 0, -1.0f, 0.0f, 0.0f,  // 29
		-2.5, 1.2, 3.4, 0, 1, -1.0f, 0.0f, 0.0f,  // 30
		-2.5, 1.2, 3.6, 1, 1, -1.0f, 0.0f, 0.0f,  // 31

		// kaki depan (kanan)
		2.5,   0, 3.4, 0, 0, 1.0f, 0.0f, 0.0f,  // 32
		2.5,   0, 3.6, 1, 0, 1.0f, 0.0f, 0.0f,  // 33
		2.5, 1.2, 3.4, 0, 1, 1.0f, 0.0f, 0.0f,  // 34
		2.5, 1.2, 3.6, 1, 1, 1.0f, 0.0f, 0.0f,  // 35

		// kaki belakang (depan)
		-2.5,   0, 13.4, 0, 0, 0.0f, 0.0f, 1.0f,  // 36
		 2.5,   0, 13.4, 1, 0, 0.0f, 0.0f, 1.0f,  // 37
		-2.5, 1.2, 13.4, 0, 1, 0.0f, 0.0f, 1.0f,  // 38
		 2.5, 1.2, 13.4, 1, 1, 0.0f, 0.0f, 1.0f,  // 39

		// kaki belakang (belakang)
		-2.5,   0, 13.6, 0, 0, 0.0f, 0.0f, -1.0f,  // 40
		 2.5,   0, 13.6, 1, 0, 0.0f, 0.0f, -1.0f,  // 41
		-2.5, 1.2, 13.6, 0, 1, 0.0f, 0.0f, -1.0f,  // 42
		 2.5, 1.2, 13.6, 1, 1, 0.0f, 0.0f, -1.0f,  // 43

		// kaki belakang (kiri)
		-2.5,   0, 13.4, 0, 0, -1.0f, 0.0f, 0.0f,  // 44
		-2.5,   0, 13.6, 1, 0, -1.0f, 0.0f, 0.0f,  // 45
		-2.5, 1.2, 13.4, 0, 1, -1.0f, 0.0f, 0.0f,  // 46
		-2.5, 1.2, 13.6, 1, 1, -1.0f, 0.0f, 0.0f,  // 47

		// kaki belakang (kanan)
		2.5,   0, 13.4, 0, 0, 1.0f, 0.0f, 0.0f,  // 48
		2.5,   0, 13.6, 1, 0, 1.0f, 0.0f, 0.0f,  // 49
		2.5, 1.2, 13.4, 0, 1, 1.0f, 0.0f, 0.0f,  // 50
		2.5, 1.2, 13.6, 1, 1, 1.0f, 0.0f, 0.0f,  // 51

	};

	unsigned int indices[] = {
		 0,  1,  3,  0,  2,  3,
		 4,  5,  7,  4,  6,  7,
		 8,  9, 11,  8, 10, 11,
		12, 13, 15, 12, 14, 15,
		16, 17, 19, 16, 18, 19,
		20, 21, 23, 20, 22, 23,
		24, 25, 27, 24, 26, 27,
		28, 29, 31, 28, 30, 31,
		32, 33, 35, 32, 34, 35,
		36, 37, 39, 36, 38, 39,
		40, 41, 43, 40, 42, 43,
		44, 45, 47, 44, 46, 47,
		48, 49, 51, 48, 50, 51,
	};

	glGenVertexArrays(1, &VAO30);
	glGenBuffers(1, &VBO30);
	glGenBuffers(1, &EBO30);
	// bind the Vertex Array Object first, then bind and set vertex buffer(s), and then configure vertex attributes(s).
	glBindVertexArray(VAO30);

	glBindBuffer(GL_ARRAY_BUFFER, VBO30);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO30);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);

	// define position pointer layout 0
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(0 * sizeof(GLfloat)));
	glEnableVertexAttribArray(0);

	// define texcoord pointer layout 1
	glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
	glEnableVertexAttribArray(1);

	// define normal pointer layout 2
	glVertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(5 * sizeof(GLfloat)));
	glEnableVertexAttribArray(2);

	// note that this is allowed, the call to glVertexAttribPointer registered VBO as the vertex attribute's bound vertex buffer object so afterwards we can safely unbind
	glBindBuffer(GL_ARRAY_BUFFER, 0);

	// You can unbind the VAO afterwards so other VAO calls won't accidentally modify this VAO, but this rarely happens. Modifying other
	// VAOs requires a call to glBindVertexArray anyways so we generally don't unbind VAOs (nor VBOs) when it's not directly necessary.
	glBindVertexArray(0);

	// remember: do NOT unbind the EBO while a VAO is active as the bound element buffer object IS stored in the VAO; keep the EBO bound.
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);

}

void Demo::DrawMeja()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture30);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	glBindVertexArray(VAO30); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(0, 0, 7));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 78, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::BuildKakiKursi() {
	// load image into texture memory
	// ------------------------------
	// Load and create a texture 
	glGenTextures(1, &texture31);
	glBindTexture(GL_TEXTURE_2D, texture31);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	int width, height;
	unsigned char* image = SOIL_load_image("kakiKursi.png", &width, &height, 0, SOIL_LOAD_RGBA);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
	SOIL_free_image_data(image);
	glBindTexture(GL_TEXTURE_2D, 0);

	// set up vertex data (and buffer(s)) and configure vertex attributes
	// ------------------------------------------------------------------
	float vertices[] = {
		// format position, tex coords
		-0.5,   0, -0.5, 0, 0, 0.0f, 0.0f, -1.0f,  // 0
		 0.5,   0, -0.5, 1, 0, 0.0f, 0.0f, -1.0f,  // 1
		-0.5, 0.1, -0.5, 0, 1, 0.0f, 0.0f, -1.0f,  // 2
		 0.5, 0.1, -0.5, 1, 1, 0.0f, 0.0f, -1.0f,  // 3

		-0.5,   0, -0.4, 0, 0, 0.0f, 0.0f, 1.0f,  // 4
		 0.5,   0, -0.4, 1, 0, 0.0f, 0.0f, 1.0f,  // 5
		-0.5, 0.1, -0.4, 0, 1, 0.0f, 0.0f, 1.0f,  // 6
		 0.5, 0.1, -0.4, 1, 1, 0.0f, 0.0f, 1.0f,  // 7

		-0.5, 0.1, -0.4, 0, 0, 0.0f, 1.0f, 0.0f,  // 8
		 0.5, 0.1, -0.4, 1, 0, 0.0f, 1.0f, 0.0f,  // 9
		-0.5, 0.1, -0.5, 0, 1, 0.0f, 1.0f, 0.0f,  // 10
		 0.5, 0.1, -0.5, 1, 1, 0.0f, 1.0f, 0.0f,  // 11

		-0.5,   0, -0.4, 0, 0, -1.0f, 0.0f, 0.0f,  // 12
		-0.5,   0, -0.5, 1, 0, -1.0f, 0.0f, 0.0f,  // 13
		-0.5, 0.1, -0.4, 0, 1, -1.0f, 0.0f, 0.0f,  // 14
		-0.5, 0.1, -0.5, 1, 1, -1.0f, 0.0f, 0.0f,  // 15

		-0.5,   0, 0.5, 0, 0, 0.0f, 0.0f, 1.0f,  // 16
		 0.5,   0, 0.5, 1, 0, 0.0f, 0.0f, 1.0f,  // 17
		-0.5, 0.1, 0.5, 0, 1, 0.0f, 0.0f, 1.0f,  // 18
		 0.5, 0.1, 0.5, 1, 1, 0.0f, 0.0f, 1.0f,  // 19

		-0.5,   0, 0.4, 0, 0, 0.0f, 0.0f, -1.0f,  // 20
		 0.5,   0, 0.4, 1, 0, 0.0f, 0.0f, -1.0f,  // 21
		-0.5, 0.1, 0.4, 0, 1, 0.0f, 0.0f, -1.0f,  // 22
		 0.5, 0.1, 0.4, 1, 1, 0.0f, 0.0f, -1.0f,  // 23

		-0.5, 0.1, 0.4, 0, 0, 0.0f, 1.0f, 0.0f,  // 24
		 0.5, 0.1, 0.4, 1, 0, 0.0f, 1.0f, 0.0f,  // 25
		-0.5, 0.1, 0.5, 0, 1, 0.0f, 1.0f, 0.0f,  // 26
		 0.5, 0.1, 0.5, 1, 1, 0.0f, 1.0f, 0.0f,  // 27

		-0.5,   0, 0.4, 0, 0, -1.0f, 0.0f, 0.0f,  // 28
		-0.5,   0, 0.5, 1, 0, -1.0f, 0.0f, 0.0f,  // 29
		-0.5, 0.1, 0.4, 0, 1, -1.0f, 0.0f, 0.0f,  // 30
		-0.5, 0.1, 0.5, 1, 1, -1.0f, 0.0f, 0.0f,  // 31

		0.4,   0,  0.4, 0, 0, -1.0f, 0.0f, 0.0f,  // 32
		0.4,   0, -0.4, 1, 0, -1.0f, 0.0f, 0.0f,  // 33
		0.4, 0.1,  0.4, 0, 1, -1.0f, 0.0f, 0.0f,  // 34
		0.4, 0.1, -0.4, 1, 1, -1.0f, 0.0f, 0.0f,  // 35

		0.5,   0,  0.5, 0, 0, 1.0f, 0.0f, 0.0f,  // 36
		0.5,   0, -0.5, 1, 0, 1.0f, 0.0f, 0.0f,  // 37
		0.5, 0.1,  0.5, 0, 1, 1.0f, 0.0f, 0.0f,  // 38
		0.5, 0.1, -0.5, 1, 1, 1.0f, 0.0f, 0.0f,  // 39

		0.4,   0, 0.5, 0, 0, 0.0f, 0.0f, 1.0f,  // 40
		0.5,   0, 0.5, 1, 0, 0.0f, 0.0f, 1.0f,  // 41
		0.4, 0.1, 0.5, 0, 1, 0.0f, 0.0f, 1.0f,  // 42
		0.5, 0.1, 0.5, 1, 1, 0.0f, 0.0f, 1.0f,  // 43

		0.4,   0, -0.5, 0, 0, 0.0f, 0.0f, -1.0f,  // 44
		0.5,   0, -0.5, 1, 0, 0.0f, 0.0f, -1.0f,  // 45
		0.4, 0.1, -0.5, 0, 1, 0.0f, 0.0f, -1.0f,  // 46
		0.5, 0.1, -0.5, 1, 1, 0.0f, 0.0f, -1.0f,  // 47

		0.4, 0.1,  0.5, 0, 0, 0.0f, 1.0f, 0.0f,  // 48
		0.5, 0.1,  0.5, 1, 0, 0.0f, 1.0f, 0.0f,  // 49
		0.4, 0.1, -0.5, 0, 1, 0.0f, 1.0f, 0.0f,  // 50
		0.5, 0.1, -0.5, 1, 1, 0.0f, 1.0f, 0.0f,  // 51

		-0.5, 0.1, 0.5, 0, 0, 0.0f, 0.0f, 1.0f,  // 52
		-0.4, 0.1, 0.5, 1, 0, 0.0f, 0.0f, 1.0f,  // 53
		-0.5, 0.9, 0.5, 0, 1, 0.0f, 0.0f, 1.0f,  // 54
		-0.4, 0.9, 0.5, 1, 1, 0.0f, 0.0f, 1.0f,  // 55

		-0.5, 0.1, 0.4, 0, 0, 0.0f, 0.0f, -1.0f,  // 56
		-0.4, 0.1, 0.4, 1, 0, 0.0f, 0.0f, -1.0f,  // 57
		-0.5, 0.9, 0.4, 0, 1, 0.0f, 0.0f, -1.0f,  // 58
		-0.4, 0.9, 0.4, 1, 1, 0.0f, 0.0f, -1.0f,  // 59

		-0.5, 0.1, 0.4, 0, 0, -1.0f, 0.0f, 0.0f,  // 60
		-0.5, 0.1, 0.5, 1, 0, -1.0f, 0.0f, 0.0f,  // 61
		-0.5, 0.9, 0.4, 0, 1, -1.0f, 0.0f, 0.0f,  // 62
		-0.5, 0.9, 0.5, 1, 1, -1.0f, 0.0f, 0.0f,  // 63

		-0.4, 0.1, 0.4, 0, 0, 1.0f, 0.0f, 0.0f,  // 64
		-0.4, 0.1, 0.5, 1, 0, 1.0f, 0.0f, 0.0f,  // 65
		-0.4, 0.9, 0.4, 0, 1, 1.0f, 0.0f, 0.0f,  // 66
		-0.4, 0.9, 0.5, 1, 1, 1.0f, 0.0f, 0.0f,  // 67

		-0.5, 0.1, -0.5, 0, 0, 0.0f, 0.0f, -1.0f,  // 68
		-0.4, 0.1, -0.5, 1, 0, 0.0f, 0.0f, -1.0f,  // 69
		-0.5, 0.9, -0.5, 0, 1, 0.0f, 0.0f, -1.0f,  // 70
		-0.4, 0.9, -0.5, 1, 1, 0.0f, 0.0f, -1.0f,  // 71

		-0.5, 0.1, -0.4, 0, 0, 0.0f, 0.0f, 1.0f,  // 72
		-0.4, 0.1, -0.4, 1, 0, 0.0f, 0.0f, 1.0f,  // 73
		-0.5, 0.9, -0.4, 0, 1, 0.0f, 0.0f, 1.0f,  // 74
		-0.4, 0.9, -0.4, 1, 1, 0.0f, 0.0f, 1.0f,  // 75

		-0.5, 0.1, -0.4, 0, 0, -1.0f, 0.0f, 0.0f,  // 76
		-0.5, 0.1, -0.5, 1, 0, -1.0f, 0.0f, 0.0f,  // 77
		-0.5, 0.9, -0.4, 0, 1, -1.0f, 0.0f, 0.0f,  // 78
		-0.5, 0.9, -0.5, 1, 1, -1.0f, 0.0f, 0.0f,  // 79

		-0.4, 0.1, -0.4, 0, 0, 1.0f, 0.0f, 0.0f,  // 80
		-0.4, 0.1, -0.5, 1, 0, 1.0f, 0.0f, 0.0f,  // 81
		-0.4, 0.9, -0.4, 0, 1, 1.0f, 0.0f, 0.0f,  // 82
		-0.4, 0.9, -0.5, 1, 1, 1.0f, 0.0f, 0.0f,  // 83
	};

	unsigned int indices[] = {
		 0,  1,  3,  0,  2,  3,
		 4,  5,  7,  4,  6,  7,
		 8,  9, 11,  8, 10, 11,
		12, 13, 15, 12, 14, 15,
		16, 17, 19, 16, 18, 19,
		20, 21, 23, 20, 22, 23,
		24, 25, 27, 24, 26, 27,
		28, 29, 31, 28, 30, 31,
		32, 33, 35, 32, 34, 35,
		36, 37, 39, 36, 38, 39,
		40, 41, 43, 40, 42, 43,
		44, 45, 47, 44, 46, 47,
		48, 49, 51, 48, 50, 51,
		52, 53, 55, 52, 54, 55,
		56, 57, 59, 56, 58, 59,
		60, 61, 63, 60, 62, 63,
		64, 65, 67, 64, 66, 67,
		68, 69, 71, 68, 70, 71,
		72, 73, 75, 72, 74, 75,
		76, 77, 79, 76, 78, 79,
		80, 81, 83, 80, 82, 83,
	};

	glGenVertexArrays(1, &VAO31);
	glGenBuffers(1, &VBO31);
	glGenBuffers(1, &EBO31);
	// bind the Vertex Array Object first, then bind and set vertex buffer(s), and then configure vertex attributes(s).
	glBindVertexArray(VAO31);

	glBindBuffer(GL_ARRAY_BUFFER, VBO31);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO31);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);

	// define position pointer layout 0
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(0 * sizeof(GLfloat)));
	glEnableVertexAttribArray(0);

	// define texcoord pointer layout 1
	glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
	glEnableVertexAttribArray(1);

	// define normal pointer layout 2
	glVertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(5 * sizeof(GLfloat)));
	glEnableVertexAttribArray(2);

	// note that this is allowed, the call to glVertexAttribPointer registered VBO as the vertex attribute's bound vertex buffer object so afterwards we can safely unbind
	glBindBuffer(GL_ARRAY_BUFFER, 0);

	// You can unbind the VAO afterwards so other VAO calls won't accidentally modify this VAO, but this rarely happens. Modifying other
	// VAOs requires a call to glBindVertexArray anyways so we generally don't unbind VAOs (nor VBOs) when it's not directly necessary.
	glBindVertexArray(0);

	// remember: do NOT unbind the EBO while a VAO is active as the bound element buffer object IS stored in the VAO; keep the EBO bound.
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);

}

void Demo::DrawKakiKursiA()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture31);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	GLint shininessMatLoc = glGetUniformLocation(this->shaderProgram, "material.shininess");
	glUniform1f(shininessMatLoc, 0.25f);

	glBindVertexArray(VAO31); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(3.5, 0, 11.5));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 126, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::DrawKakiKursiB()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture31);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	GLint shininessMatLoc = glGetUniformLocation(this->shaderProgram, "material.shininess");
	glUniform1f(shininessMatLoc, 0.25f);

	glBindVertexArray(VAO31); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(3.5, 0, 13.5));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 126, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::DrawKakiKursiC()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture31);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	GLint shininessMatLoc = glGetUniformLocation(this->shaderProgram, "material.shininess");
	glUniform1f(shininessMatLoc, 0.25f);

	glBindVertexArray(VAO31); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(3.5, 0, 15.5));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 126, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::DrawKakiKursiD()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture31);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	GLint shininessMatLoc = glGetUniformLocation(this->shaderProgram, "material.shininess");
	glUniform1f(shininessMatLoc, 0.25f);

	glBindVertexArray(VAO31); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(3.5, 0, 17.5));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 126, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::DrawKakiKursiE()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture31);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	GLint shininessMatLoc = glGetUniformLocation(this->shaderProgram, "material.shininess");
	glUniform1f(shininessMatLoc, 0.25f);

	glBindVertexArray(VAO31); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(3.5, 0, 19.5));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 126, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::DrawKakiKursiF()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture31);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	GLint shininessMatLoc = glGetUniformLocation(this->shaderProgram, "material.shininess");
	glUniform1f(shininessMatLoc, 0.25f);

	glBindVertexArray(VAO31); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(-3.5, 0, 11.5));
	model = glm::rotate(model, glm::radians(180.0f), glm::vec3(0, 1, 0));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 126, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::DrawKakiKursiG()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture31);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	GLint shininessMatLoc = glGetUniformLocation(this->shaderProgram, "material.shininess");
	glUniform1f(shininessMatLoc, 0.25f);

	glBindVertexArray(VAO31); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(-3.5, 0, 13.5));

	model = glm::rotate(model, glm::radians(180.0f), glm::vec3(0, 1, 0));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 126, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::DrawKakiKursiH()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture31);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	GLint shininessMatLoc = glGetUniformLocation(this->shaderProgram, "material.shininess");
	glUniform1f(shininessMatLoc, 0.25f);

	glBindVertexArray(VAO31); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(-3.5, 0, 15.5));

	model = glm::rotate(model, glm::radians(180.0f), glm::vec3(0, 1, 0));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 126, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::DrawKakiKursiI()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture31);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	GLint shininessMatLoc = glGetUniformLocation(this->shaderProgram, "material.shininess");
	glUniform1f(shininessMatLoc, 0.25f);

	glBindVertexArray(VAO31); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(-3.5, 0, 17.5));

	model = glm::rotate(model, glm::radians(180.0f), glm::vec3(0, 1, 0));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 126, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::DrawKakiKursiJ()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture31);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	GLint shininessMatLoc = glGetUniformLocation(this->shaderProgram, "material.shininess");
	glUniform1f(shininessMatLoc, 0.25f);

	glBindVertexArray(VAO31); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(-3.5, 0, 19.5));

	model = glm::rotate(model, glm::radians(180.0f), glm::vec3(0, 1, 0));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 126, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::DrawKakiKursiK()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture31);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	GLint shininessMatLoc = glGetUniformLocation(this->shaderProgram, "material.shininess");
	glUniform1f(shininessMatLoc, 0.25f);

	glBindVertexArray(VAO31); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(0, 0, 7));

	model = glm::rotate(model, glm::radians(90.0f), glm::vec3(0, 1, 0));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 126, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::BuildKursi() {
	// load image into texture memory
	// ------------------------------
	// Load and create a texture 
	glGenTextures(1, &texture32);
	glBindTexture(GL_TEXTURE_2D, texture32);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	int width, height;
	unsigned char* image = SOIL_load_image("kursi.png", &width, &height, 0, SOIL_LOAD_RGBA);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
	SOIL_free_image_data(image);
	glBindTexture(GL_TEXTURE_2D, 0);

	// set up vertex data (and buffer(s)) and configure vertex attributes
	// ------------------------------------------------------------------
	float vertices[] = {
		// format position, tex coords
		-0.5, 0.9,  0.5, 0, 0, 0.0f, -1.0f, 0.0f,  // 0
		 0.5, 0.9,  0.5, 1, 0, 0.0f, -1.0f, 0.0f,  // 1
		-0.5, 0.9, -0.5, 0, 1, 0.0f, -1.0f, 0.0f,  // 2
		 0.5, 0.9, -0.5, 1, 1, 0.0f, -1.0f, 0.0f,  // 3

		-0.5, 1.0,  0.5, 0, 0, 0.0f, 1.0f, 0.0f,  // 4
		 0.5, 1.0,  0.5, 1, 0, 0.0f, 1.0f, 0.0f,  // 5
		-0.5, 1.0, -0.5, 0, 1, 0.0f, 1.0f, 0.0f,  // 6
		 0.5, 1.0, -0.5, 1, 1, 0.0f, 1.0f, 0.0f,  // 7

		-0.5, 0.9, 0.5, 0, 0, 0.0f, 0.0f, 1.0f,  // 8
		 0.5, 0.9, 0.5, 1, 0, 0.0f, 0.0f, 1.0f,  // 9
		-0.5, 1.0, 0.5, 0, 1, 0.0f, 0.0f, 1.0f,  // 10
		 0.5, 1.0, 0.5, 1, 1, 0.0f, 0.0f, 1.0f,  // 11

		-0.5, 0.9, -0.5, 0, 0, 0.0f, 0.0f, -1.0f,  // 12
		 0.5, 0.9, -0.5, 1, 0, 0.0f, 0.0f, -1.0f,  // 13
		-0.5, 1.0, -0.5, 0, 1, 0.0f, 0.0f, -1.0f,  // 14
		 0.5, 1.0, -0.5, 1, 1, 0.0f, 0.0f, -1.0f,  // 15

		-0.5, 0.9, -0.5, 0, 0, -1.0f, 0.0f, 0.0f,  // 16
		-0.5, 0.9,  0.5, 1, 0, -1.0f, 0.0f, 0.0f,  // 17
		-0.5, 1.0, -0.5, 0, 1, -1.0f, 0.0f, 0.0f,  // 18
		-0.5, 1.0,  0.5, 1, 1, -1.0f, 0.0f, 0.0f,  // 19

		0.5, 0.9, -0.5, 0, 0, 1.0f, 0.0f, 0.0f,  // 20
		0.5, 0.9,  0.5, 1, 0, 1.0f, 0.0f, 0.0f,  // 21
		0.5, 1.0, -0.5, 0, 1, 1.0f, 0.0f, 0.0f,  // 22
		0.5, 1.0,  0.5, 1, 1, 1.0f, 0.0f, 0.0f,  // 23

		0.5, 1.0, -0.5, 0, 0, 1.0f, 0.0f, 0.0f,  // 24
		0.5, 1.0,  0.5, 1, 0, 1.0f, 0.0f, 0.0f,  // 25
		0.5, 2.0, -0.5, 0, 1, 1.0f, 0.0f, 0.0f,  // 26
		0.5, 2.0,  0.5, 1, 1, 1.0f, 0.0f, 0.0f,  // 27

		0.4, 1.0, -0.5, 0, 0, -1.0f, 0.0f, 0.0f,  // 28
		0.4, 1.0,  0.5, 1, 0, -1.0f, 0.0f, 0.0f,  // 29
		0.4, 2.0, -0.5, 0, 1, -1.0f, 0.0f, 0.0f,  // 30
		0.4, 2.0,  0.5, 1, 1, -1.0f, 0.0f, 0.0f,  // 31

		0.4, 1.0, 0.5, 0, 0, 0.0f, 0.0f, 1.0f,  // 32
		0.5, 1.0, 0.5, 1, 0, 0.0f, 0.0f, 1.0f,  // 33
		0.4, 2.0, 0.5, 0, 1, 0.0f, 0.0f, 1.0f,  // 34
		0.5, 2.0, 0.5, 1, 1, 0.0f, 0.0f, 1.0f,  // 35

		0.4, 1.0, -0.5, 0, 0, 0.0f, 0.0f, -1.0f,  // 36
		0.5, 1.0, -0.5, 1, 0, 0.0f, 0.0f, -1.0f,  // 37
		0.4, 2.0, -0.5, 0, 1, 0.0f, 0.0f, -1.0f,  // 38
		0.5, 2.0, -0.5, 1, 1, 0.0f, 0.0f, -1.0f,  // 39

		0.4, 2.0,  0.5, 0, 0, 0.0f, 1.0f, 0.0f,  // 40
		0.5, 2.0,  0.5, 1, 0, 0.0f, 1.0f, 0.0f,  // 41
		0.4, 2.0, -0.5, 0, 1, 0.0f, 1.0f, 0.0f,  // 42
		0.5, 2.0, -0.5, 1, 1, 0.0f, 1.0f, 0.0f,  // 43
	};

	unsigned int indices[] = {
		 0,  1,  3,  0,  2,  3,
		 4,  5,  7,  4,  6,  7,
		 8,  9, 11,  8, 10, 11,
		12, 13, 15, 12, 14, 15,
		16, 17, 19, 16, 18, 19,
		20, 21, 23, 20, 22, 23,
		24, 25, 27, 24, 26, 27,
		28, 29, 31, 28, 30, 31,
		32, 33, 35, 32, 34, 35,
		36, 37, 39, 36, 38, 39,
		40, 41, 43, 40, 42, 43,
	};

	glGenVertexArrays(1, &VAO32);
	glGenBuffers(1, &VBO32);
	glGenBuffers(1, &EBO32);
	// bind the Vertex Array Object first, then bind and set vertex buffer(s), and then configure vertex attributes(s).
	glBindVertexArray(VAO32);

	glBindBuffer(GL_ARRAY_BUFFER, VBO32);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO32);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);

	// define position pointer layout 0
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(0 * sizeof(GLfloat)));
	glEnableVertexAttribArray(0);

	// define texcoord pointer layout 1
	glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
	glEnableVertexAttribArray(1);

	// define normal pointer layout 2
	glVertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(5 * sizeof(GLfloat)));
	glEnableVertexAttribArray(2);

	// note that this is allowed, the call to glVertexAttribPointer registered VBO as the vertex attribute's bound vertex buffer object so afterwards we can safely unbind
	glBindBuffer(GL_ARRAY_BUFFER, 0);

	// You can unbind the VAO afterwards so other VAO calls won't accidentally modify this VAO, but this rarely happens. Modifying other
	// VAOs requires a call to glBindVertexArray anyways so we generally don't unbind VAOs (nor VBOs) when it's not directly necessary.
	glBindVertexArray(0);

	// remember: do NOT unbind the EBO while a VAO is active as the bound element buffer object IS stored in the VAO; keep the EBO bound.
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);

}

void Demo::DrawKursiA()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture32);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	glBindVertexArray(VAO32); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(3.5, 0, 11.5));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 66, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::DrawKursiB()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture32);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	glBindVertexArray(VAO32); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(3.5, 0, 13.5));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 66, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::DrawKursiC()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture32);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	glBindVertexArray(VAO32); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(3.5, 0, 15.5));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 66, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::DrawKursiD()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture32);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	glBindVertexArray(VAO32); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(3.5, 0, 17.5));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 66, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::DrawKursiE()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture32);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	glBindVertexArray(VAO32); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(3.5, 0, 19.5));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 66, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::DrawKursiF()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture32);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	glBindVertexArray(VAO32); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(-3.5, 0, 11.5));

	model = glm::rotate(model, glm::radians(180.0f), glm::vec3(0, 1, 0));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 66, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::DrawKursiG()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture32);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	glBindVertexArray(VAO32); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(-3.5, 0, 13.5));

	model = glm::rotate(model, glm::radians(180.0f), glm::vec3(0, 1, 0));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 66, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::DrawKursiH()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture32);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	glBindVertexArray(VAO32); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(-3.5, 0, 15.5));

	model = glm::rotate(model, glm::radians(180.0f), glm::vec3(0, 1, 0));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 66, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::DrawKursiI()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture32);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	glBindVertexArray(VAO32); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(-3.5, 0, 17.5));

	model = glm::rotate(model, glm::radians(180.0f), glm::vec3(0, 1, 0));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 66, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::DrawKursiJ()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture32);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	glBindVertexArray(VAO32); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(-3.5, 0, 19.5));

	model = glm::rotate(model, glm::radians(180.0f), glm::vec3(0, 1, 0));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 66, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::DrawKursiK()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture32);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	glBindVertexArray(VAO32); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(0, 0, 7));

	model = glm::rotate(model, glm::radians(90.0f), glm::vec3(0, 1, 0));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 66, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::BuildLaptop() {
	// load image into texture memory
	// ------------------------------
	// Load and create a texture 
	glGenTextures(1, &texture33);
	glBindTexture(GL_TEXTURE_2D, texture33);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	int width, height;
	unsigned char* image = SOIL_load_image("laptop.png", &width, &height, 0, SOIL_LOAD_RGBA);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
	SOIL_free_image_data(image);
	glBindTexture(GL_TEXTURE_2D, 0);

	// set up vertex data (and buffer(s)) and configure vertex attributes
	// ------------------------------------------------------------------
	float vertices[] = {
		// format position, tex coords
		-0.25, 0.08, -0.5, 0, 0, 0.0f, 1.0f, 0.0f,  // 0
		-0.25, 0.08,  0.5, 1, 0, 0.0f, 1.0f, 0.0f,  // 1
		 0.25, 0.08, -0.5, 0, 1, 0.0f, 1.0f, 0.0f,  // 2
		 0.25, 0.08,  0.5, 1, 1, 0.0f, 1.0f, 0.0f,  // 3

		-0.25, 0.0, -0.5, 0, 0, -1.0f, 0.0f, 0.0f,  // 4
		-0.25, 0.0,  0.5, 1, 0, -1.0f, 0.0f, 0.0f,  // 5
		-0.25, 0.08, -0.5, 0, 1, -1.0f, 0.0f, 0.0f,  // 6
		-0.25, 0.08,  0.5, 1, 1, -1.0f, 0.0f, 0.0f,  // 7

		0.25,  0.0, -0.5, 0, 0, 1.0f, 0.0f, 0.0f,  // 8
		0.25,  0.0,  0.5, 1, 0, 1.0f, 0.0f, 0.0f,  // 9
		0.25, 0.08, -0.5, 0, 1, 1.0f, 0.0f, 0.0f,  // 10
		0.25, 0.08,  0.5, 1, 1, 1.0f, 0.0f, 0.0f,  // 11

		-0.25,  0.0, -0.5, 0, 0, 0.0f, 0.0f, -1.0f,  // 12
		 0.25,  0.0, -0.5, 1, 0, 0.0f, 0.0f, -1.0f,  // 13
		-0.25, 0.08, -0.5, 0, 1, 0.0f, 0.0f, -1.0f,  // 14
		 0.25, 0.08, -0.5, 1, 1, 0.0f, 0.0f, -1.0f,  // 15

		-0.25,  0.0, 0.5, 0, 0, 0.0f, 0.0f, 1.0f,  // 16
		 0.25,  0.0, 0.5, 1, 0, 0.0f, 0.0f, 1.0f,  // 17
		-0.25, 0.08, 0.5, 0, 1, 0.0f, 0.0f, 1.0f,  // 18
		 0.25, 0.08, 0.5, 1, 1, 0.0f, 0.0f, 1.0f,  // 19

		-0.25, 0.09, -0.5, 0, 0, 0.0f, 0.0f, -1.0f,  // 20
		-0.25, 0.09,  0.5, 1, 0, 0.0f, 0.0f, -1.0f,  // 21
		 0.25, 0.09, -0.5, 0, 1, 0.0f, 0.0f, -1.0f,  // 22
		 0.25, 0.09,  0.5, 1, 1, 0.0f, 0.0f, -1.0f,  // 23

		-0.25, 0.09, -0.5, 0, 0, -1.0f, 0.0f, 0.0f,  // 24
		-0.25, 0.09,  0.5, 1, 0, -1.0f, 0.0f, 0.0f,  // 25
		-0.25, 0.13, -0.5, 0, 1, -1.0f, 0.0f, 0.0f,  // 26
		-0.25, 0.13,  0.5, 1, 1, -1.0f, 0.0f, 0.0f,  // 27

		0.25, 0.09, -0.5, 0, 0, 1.0f, 0.0f, 0.0f,  // 28
		0.25, 0.09,  0.5, 1, 0, 1.0f, 0.0f, 0.0f,  // 29
		0.25, 0.13, -0.5, 0, 1, 1.0f, 0.0f, 0.0f,  // 30
		0.25, 0.13,  0.5, 1, 1, 1.0f, 0.0f, 0.0f,  // 31

		-0.25, 0.09, -0.5, 0, 0, 0.0f, 0.0f, -1.0f,  // 32
		 0.25, 0.09, -0.5, 1, 0, 0.0f, 0.0f, -1.0f,  // 33
		-0.25, 0.13, -0.5, 0, 1, 0.0f, 0.0f, -1.0f,  // 34
		 0.25, 0.13, -0.5, 1, 1, 0.0f, 0.0f, -1.0f,  // 35

		-0.25, 0.09, 0.5, 0, 0, 0.0f, 0.0f, 1.0f,  // 36
		 0.25, 0.09, 0.5, 1, 0, 0.0f, 0.0f, 1.0f,  // 37
		-0.25, 0.13, 0.5, 0, 1, 0.0f, 0.0f, 1.0f,  // 38
		 0.25, 0.13, 0.5, 1, 1, 0.0f, 0.0f, 1.0f,  // 39
	};

	unsigned int indices[] = {
		 0,  1,  3,  0,  2,  3,
		 4,  5,  7,  4,  6,  7,
		 8,  9, 11,  8, 10, 11,
		12, 13, 15, 12, 14, 15,
		16, 17, 19, 16, 18, 19,
		20, 21, 23, 20, 22, 23,
		24, 25, 27, 24, 26, 27,
		28, 29, 31, 28, 30, 31,
		32, 33, 35, 32, 34, 35,
		36, 37, 39, 36, 38, 39,
	};

	glGenVertexArrays(1, &VAO33);
	glGenBuffers(1, &VBO33);
	glGenBuffers(1, &EBO33);
	// bind the Vertex Array Object first, then bind and set vertex buffer(s), and then configure vertex attributes(s).
	glBindVertexArray(VAO33);

	glBindBuffer(GL_ARRAY_BUFFER, VBO33);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO32);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);

	// define position pointer layout 0
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(0 * sizeof(GLfloat)));
	glEnableVertexAttribArray(0);

	// define texcoord pointer layout 1
	glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
	glEnableVertexAttribArray(1);

	// define normal pointer layout 2
	glVertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(5 * sizeof(GLfloat)));
	glEnableVertexAttribArray(2);

	// note that this is allowed, the call to glVertexAttribPointer registered VBO as the vertex attribute's bound vertex buffer object so afterwards we can safely unbind
	glBindBuffer(GL_ARRAY_BUFFER, 0);

	// You can unbind the VAO afterwards so other VAO calls won't accidentally modify this VAO, but this rarely happens. Modifying other
	// VAOs requires a call to glBindVertexArray anyways so we generally don't unbind VAOs (nor VBOs) when it's not directly necessary.
	glBindVertexArray(0);

	// remember: do NOT unbind the EBO while a VAO is active as the bound element buffer object IS stored in the VAO; keep the EBO bound.
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);

}

void Demo::DrawLaptopA()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture33);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	GLint shininessMatLoc = glGetUniformLocation(this->shaderProgram, "material.shininess");
	glUniform1f(shininessMatLoc, 0.25f);

	glBindVertexArray(VAO33); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(3, 1.4, 11.5));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 60, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::DrawLaptopB()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture33);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	GLint shininessMatLoc = glGetUniformLocation(this->shaderProgram, "material.shininess");
	glUniform1f(shininessMatLoc, 0.25f);

	glBindVertexArray(VAO33); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(3, 1.4, 13.5));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 60, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::DrawLaptopC()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture33);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	GLint shininessMatLoc = glGetUniformLocation(this->shaderProgram, "material.shininess");
	glUniform1f(shininessMatLoc, 0.25f);

	glBindVertexArray(VAO33); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(3, 1.4, 15.5));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 60, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::DrawLaptopD()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture33);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	GLint shininessMatLoc = glGetUniformLocation(this->shaderProgram, "material.shininess");
	glUniform1f(shininessMatLoc, 0.25f);

	glBindVertexArray(VAO33); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(3, 1.4, 17.5));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 60, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::DrawLaptopE()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture33);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	GLint shininessMatLoc = glGetUniformLocation(this->shaderProgram, "material.shininess");
	glUniform1f(shininessMatLoc, 0.25f);

	glBindVertexArray(VAO33); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(3, 1.4, 19.5));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 60, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::DrawLaptopF()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture33);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	GLint shininessMatLoc = glGetUniformLocation(this->shaderProgram, "material.shininess");
	glUniform1f(shininessMatLoc, 0.25f);

	glBindVertexArray(VAO33); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(-3, 1.4, 11.5));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 60, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::DrawLaptopG()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture33);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	GLint shininessMatLoc = glGetUniformLocation(this->shaderProgram, "material.shininess");
	glUniform1f(shininessMatLoc, 0.25f);

	glBindVertexArray(VAO33); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(-3, 1.4, 13.5));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 60, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::DrawLaptopH()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture33);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	GLint shininessMatLoc = glGetUniformLocation(this->shaderProgram, "material.shininess");
	glUniform1f(shininessMatLoc, 0.25f);

	glBindVertexArray(VAO33); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(-3, 1.4, 15.5));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 60, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::DrawLaptopI()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture33);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	GLint shininessMatLoc = glGetUniformLocation(this->shaderProgram, "material.shininess");
	glUniform1f(shininessMatLoc, 0.25f);

	glBindVertexArray(VAO33); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(-3, 1.4, 17.5));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 60, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::DrawLaptopJ()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture33);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	GLint shininessMatLoc = glGetUniformLocation(this->shaderProgram, "material.shininess");
	glUniform1f(shininessMatLoc, 0.25f);

	glBindVertexArray(VAO33); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(-3, 1.4, 19.5));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 60, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::DrawLaptopK()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture33);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	GLint shininessMatLoc = glGetUniformLocation(this->shaderProgram, "material.shininess");
	glUniform1f(shininessMatLoc, 0.25f);

	glBindVertexArray(VAO33); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(0, 1.4, 7.5));

	model = glm::rotate(model, glm::radians(90.0f), glm::vec3(0, 1, 0));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 60, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::BuildLaptopDepan() {
	// load image into texture memory
	// ------------------------------
	// Load and create a texture 
	glGenTextures(1, &texture34);
	glBindTexture(GL_TEXTURE_2D, texture34);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	int width, height;
	unsigned char* image = SOIL_load_image("laptopDepan.png", &width, &height, 0, SOIL_LOAD_RGBA);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
	SOIL_free_image_data(image);
	glBindTexture(GL_TEXTURE_2D, 0);

	// set up vertex data (and buffer(s)) and configure vertex attributes
	// ------------------------------------------------------------------
	float vertices[] = {
		// format position, tex coords
		 0.25, 0.13, -0.5, 0, 0, 0.0f, 1.0f, 0.0f,  // 0
		 0.25, 0.13,  0.5, 1, 0, 0.0f, 1.0f, 0.0f,  // 1
		-0.25, 0.13, -0.5, 0, 1, 0.0f, 1.0f, 0.0f,  // 2
		-0.25, 0.13,  0.5, 1, 1, 0.0f, 1.0f, 0.0f,  // 3

	};

	unsigned int indices[] = {
		 0,  1,  3,  0,  2,  3,
	};

	glGenVertexArrays(1, &VAO34);
	glGenBuffers(1, &VBO34);
	glGenBuffers(1, &EBO34);
	// bind the Vertex Array Object first, then bind and set vertex buffer(s), and then configure vertex attributes(s).
	glBindVertexArray(VAO34);

	glBindBuffer(GL_ARRAY_BUFFER, VBO34);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO34);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);

	// define position pointer layout 0
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(0 * sizeof(GLfloat)));
	glEnableVertexAttribArray(0);

	// define texcoord pointer layout 1
	glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
	glEnableVertexAttribArray(1);

	// define normal pointer layout 2
	glVertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(5 * sizeof(GLfloat)));
	glEnableVertexAttribArray(2);

	// note that this is allowed, the call to glVertexAttribPointer registered VBO as the vertex attribute's bound vertex buffer object so afterwards we can safely unbind
	glBindBuffer(GL_ARRAY_BUFFER, 0);

	// You can unbind the VAO afterwards so other VAO calls won't accidentally modify this VAO, but this rarely happens. Modifying other
	// VAOs requires a call to glBindVertexArray anyways so we generally don't unbind VAOs (nor VBOs) when it's not directly necessary.
	glBindVertexArray(0);

	// remember: do NOT unbind the EBO while a VAO is active as the bound element buffer object IS stored in the VAO; keep the EBO bound.
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);

}

void Demo::DrawLaptopDepanA()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture34);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	GLint shininessMatLoc = glGetUniformLocation(this->shaderProgram, "material.shininess");
	glUniform1f(shininessMatLoc, 0.25f);

	glBindVertexArray(VAO34); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(3, 1.4, 11.5));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::DrawLaptopDepanB()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture34);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	GLint shininessMatLoc = glGetUniformLocation(this->shaderProgram, "material.shininess");
	glUniform1f(shininessMatLoc, 0.25f);

	glBindVertexArray(VAO34); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(3, 1.4, 13.5));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::DrawLaptopDepanC()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture34);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	GLint shininessMatLoc = glGetUniformLocation(this->shaderProgram, "material.shininess");
	glUniform1f(shininessMatLoc, 0.25f);

	glBindVertexArray(VAO34); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(3, 1.4, 15.5));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::DrawLaptopDepanD()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture34);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	GLint shininessMatLoc = glGetUniformLocation(this->shaderProgram, "material.shininess");
	glUniform1f(shininessMatLoc, 0.25f);

	glBindVertexArray(VAO34); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(3, 1.4, 17.5));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::DrawLaptopDepanE()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture34);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	GLint shininessMatLoc = glGetUniformLocation(this->shaderProgram, "material.shininess");
	glUniform1f(shininessMatLoc, 0.25f);

	glBindVertexArray(VAO34); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(3, 1.4, 19.5));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::DrawLaptopDepanF()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture34);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	GLint shininessMatLoc = glGetUniformLocation(this->shaderProgram, "material.shininess");
	glUniform1f(shininessMatLoc, 0.25f);

	glBindVertexArray(VAO34); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(-3, 1.4, 11.5));

	model = glm::rotate(model, glm::radians(180.0f), glm::vec3(0, 1, 0));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::DrawLaptopDepanG()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture34);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	GLint shininessMatLoc = glGetUniformLocation(this->shaderProgram, "material.shininess");
	glUniform1f(shininessMatLoc, 0.25f);

	glBindVertexArray(VAO34); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(-3, 1.4, 13.5));

	model = glm::rotate(model, glm::radians(180.0f), glm::vec3(0, 1, 0));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::DrawLaptopDepanH()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture34);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	GLint shininessMatLoc = glGetUniformLocation(this->shaderProgram, "material.shininess");
	glUniform1f(shininessMatLoc, 0.25f);

	glBindVertexArray(VAO34); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(-3, 1.4, 15.5));

	model = glm::rotate(model, glm::radians(180.0f), glm::vec3(0, 1, 0));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::DrawLaptopDepanI()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture34);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	GLint shininessMatLoc = glGetUniformLocation(this->shaderProgram, "material.shininess");
	glUniform1f(shininessMatLoc, 0.25f);

	glBindVertexArray(VAO34); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(-3, 1.4, 17.5));

	model = glm::rotate(model, glm::radians(180.0f), glm::vec3(0, 1, 0));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::DrawLaptopDepanJ()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture34);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	GLint shininessMatLoc = glGetUniformLocation(this->shaderProgram, "material.shininess");
	glUniform1f(shininessMatLoc, 0.25f);

	glBindVertexArray(VAO34); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(-3, 1.4, 19.5));

	model = glm::rotate(model, glm::radians(180.0f), glm::vec3(0, 1, 0));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::DrawLaptopDepanK()
{
	glUseProgram(shaderProgram);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, texture34);
	glUniform1i(glGetUniformLocation(this->shaderProgram, "material.diffuse"), 0);

	GLint shininessMatLoc = glGetUniformLocation(this->shaderProgram, "material.shininess");
	glUniform1f(shininessMatLoc, 0.25f);

	glBindVertexArray(VAO34); // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized

	glm::mat4 model;
	model = glm::translate(model, glm::vec3(0, 1.4, 7.5));

	model = glm::rotate(model, glm::radians(90.0f), glm::vec3(0, 1, 0));

	GLint modelLoc = glGetUniformLocation(this->shaderProgram, "model");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));

	glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);

	glBindTexture(GL_TEXTURE_2D, 0);
	glBindVertexArray(0);
}

void Demo::InitCamera()
{
	posCamX = 0.0f;
	posCamY = 1.0f;
	posCamZ = 8.0f;
	viewCamX = 0.0f;
	viewCamY = 1.0f;
	viewCamZ = 0.0f;
	upCamX = 0.0f;
	upCamY = 1.0f;
	upCamZ = 0.0f;
	CAMERA_SPEED = 0.001f;
	fovy = 45.0f;
	glfwSetInputMode(this->window, GLFW_CURSOR, GLFW_CURSOR_DISABLED);
}

void Demo::MoveCamera(float speed)
{
	float x = viewCamX - posCamX;
	float z = viewCamZ - posCamZ;
	// forward positive cameraspeed and backward negative -cameraspeed.
	posCamX = posCamX + x * speed;
	posCamZ = posCamZ + z * speed;
	viewCamX = viewCamX + x * speed;
	viewCamZ = viewCamZ + z * speed;
}

void Demo::StrafeCamera(float speed)
{
	float x = viewCamX - posCamX;
	float z = viewCamZ - posCamZ;
	float orthoX = -z;
	float orthoZ = x;

	// left positive cameraspeed and right negative -cameraspeed.
	posCamX = posCamX + orthoX * speed;
	posCamZ = posCamZ + orthoZ * speed;
	viewCamX = viewCamX + orthoX * speed;
	viewCamZ = viewCamZ + orthoZ * speed;
}

void Demo::VerticalCamera(float speed)
{
	float y = viewCamY - posCamY;
	// forward positive cameraspeed and backward negative -cameraspeed.
	posCamY = posCamY + y * speed;
	viewCamY = viewCamY + y * speed;
}

void Demo::RotateCamera(float speed)
{
	float x = viewCamX - posCamX;
	float z = viewCamZ - posCamZ;
	viewCamZ = (float)(posCamZ + glm::sin(speed) * x + glm::cos(speed) * z);
	viewCamX = (float)(posCamX + glm::cos(speed) * x - glm::sin(speed) * z);
}

int main(int argc, char** argv) {
	RenderEngine& app = Demo();
	app.Start("Final Project PE Club", 1366, 768, false, false);
}