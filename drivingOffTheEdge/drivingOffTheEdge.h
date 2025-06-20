class Car2D {
    // Everything is in meters, kilograms, seconds, newtons, etc.
    private:
        long double xPos = 0;
        long double yPos = 0;
        long double xVel = 0;
        long double yVel = 0;
        long double xAcc = 0;
        long double yAcc = 0;
        double carMass = 0;
    public:
        Car2D(long double xPos, long double yPos, long double xVel, long double yVel, long double xAcc, long double yAcc, double carMass): xPos(xPos), yPos(yPos), xVel(xVel), yVel(yVel), xAcc(xAcc), yAcc(yAcc), carMass(carMass){}
        //Getters
        double getCarMass(){
            return carMass;
        }
        long double getXPos(){
            return xPos;
        }
        long double getYPos(){
            return yPos;
        }
        long double getXVel(){
            return xVel;
        }
        long double getYVel(){
            return yVel;
        }
        long double getXAcc(){
            return xAcc;
        }
        long double getYAcc(){
            return yAcc;
        }
        //Setters
        //X Position Setters and Overloading
        void setXPos(long double inputPos){
            xPos = inputPos;
        }
        void setXPos(double inputPos){
            xPos = long(inputPos);
        }
        void setXPos(int inputPos){
            xPos = long(double(inputPos));
        }
        void setXPos(float inputPos){
            xPos = long(double(inputPos));
        }
        void setXPos(unsigned int inputPos){
            xPos = long(double(inputPos));
        }

        //Y Position Setters and Overloading
        void setYPos(long double inputPos){
            yPos = inputPos;
        }
        void setYPos(double inputPos){
            yPos = long(inputPos);
        }
        void setYPos(int inputPos){
            yPos = long(double(inputPos));
        }
        void setYPos(unsigned int inputPos){
            yPos = long(double(inputPos));
        }
        void setYPos(float inputPos){
            yPos = long(double(inputPos));
        }

        //X Velocity Setters and Overloading
        void setXVel(long double inputVel){
            xVel = inputVel;
        }
        void setXVel(double inputVel){
            xVel = long(inputVel);
        }
        void setXVel(float inputVel){
            xVel = long(double(inputVel));
        }
        void setXVel(int inputVel){
            xVel = long(double(inputVel));
        }
        void setXVel(unsigned int inputVel){
            xVel = long(double(inputVel));
        }

        //Y Velocity Setters and Overloading
        void setYVel(long double inputVel){
            yVel = inputVel;
        }
        void setYVel(double inputVel){
            yVel = long(inputVel);
        }
        void setYVel(float inputVel){
            yVel = long(double(inputVel));
        }
        void setYVel(int inputVel){
            yVel = long(double(inputVel));
        }
        void setYVel(unsigned int inputVel){
            yVel = long(double(inputVel));
        }

        //
        void setXAcc(long double inputAcc){
            xAcc = inputAcc;
        }

        void setYAcc(long double inputAcc){
            yAcc = inputAcc;
        }

        void setMass(long double inputMass){
            carMass = inputMass;
        }

        //Calculators
    
};

class World2D {
    private:
        double worldGravity = 9.80665;
        long double groundZeroY = 0;

};