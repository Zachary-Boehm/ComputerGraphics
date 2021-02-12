#pragma once

#include "ofMain.h"
#include "FlameParticleGenerator.h"
#include "FlameParticle.h"
#include "ParticleSystem.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

		//Function to build mesh with given information
		void buildMesh(ofMesh& mesh, float w, float h, glm::vec3 pos);
		//This function will take a translation a rotation and a scale in that order and create a matrix
		glm::mat4 buildMatrix(const glm::vec3& trans, const float& rot, const glm::vec3& scale);
		//Shader reload
		void ReloadShaders();
private:
	//Particle Generators
	FlameParticleGenerator particleGenerator{/*If not default put params here*/};

	//Particle Systems
	ParticleSystem<FlameParticle> particleSystem{particleGenerator, /*#particles*/ 42, /*#particles per second*/ 20.0f};

	//Shaders
	ofShader ParticleShader;

	//Meshes
	ofMesh FlameMesh;

	//Images
	ofImage Flame1;
	ofImage Flame2;

	//others
	bool needsReload{ true };
	
};
