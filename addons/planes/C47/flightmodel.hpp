airFrictionCoefs2[] = { 0.00100, 0.00050, 0.00006};
airFrictionCoefs1[] = { 0.100, 0.050, 0.006 };
airFrictionCoefs0[] = { 0.0, 0.0, 0.0 };
acceleration = 200;
noseDownCoef = 0.3;
aileronCoef[] = {1.1,1.5,1,1.2,1.4,1.5,1.6};		// A-164 Wipeout Graph array, defines the influence of the ailerons control surface depending on the current speed
aileronControlsSensitivityCoef = 0.5;						// A-164 Wipeout Sensitivity of the player roll (aileron) input - how fast the control surface reaches it's max.
aileronSensitivity = 0.35;								// A-164 Wipeout Aileron authority. Lower values make the airplane bank slower, allowing to simulate heavier aircraft.
airBrake = 0;											// No airbrakes
altFullForce = 10000;									// Altitude value in meters at which the aircraft starts to progressively lose thrust influence until altNoForce is reached.
altNoForce = 15000;									// Altitude value in meters at which the aircraft loses its thrust influence completely.
angleOfIndicence = 0.08;							// A-164 Wipeout Relates to envelope, affects lift properties and ev. view from the cabin ;)
brakeDistance = 150;
cabinOpening = 0;										// Caesar BTT or A-164 Wipeout
cargoCanEject = 1;										// Cargo can eject Allows the cargo passengers to jump out even if the aircraft is moving. Not a plane-specific value, but it is important to allow parachute jumps.
draconicForceXCoef = 10;
draconicForceYCoef = 0.2;
draconicForceZCoef = 1.0;
draconicTorqueXCoef[] = {16.0,15.5,15.0,14.5,14.0,14.0,14.5,15.0,16.0,17.0,18.0};
draconicTorqueYCoef[] = {1.0,1.2,1.4,2.0,4.0,7.0,6.8,6.6,6.4,6.2,5.5,5.0,4.5,3.9,3.0,1.0};
ejectSpeed[] = {15,0,0};						// A-164 Wipeout, pilot is ejected upwards
elevatorCoef[] = {0.0,0.4,0.9,1.0,1.05,1.1,1.15};
elevatorControlsSensitivityCoef = 2;					// A-164 Wipeout Sensitivity of the player pitch (elevator) input - how fast the control surface reaches it's max. extent. (does not affect AI).
elevatorSensitivity = 1.1;
envelope[] = {
  0, //0%
  0.05, //12.5%
  0.3,//25
  0.9,//37
  1.3,//50
  1.7,//62
  2.5,//75
  3.3,//87
  4.2,//100
  4,//112
  3,//125
  2,//137
  0 //150%
};	// A-164 Wipeout The lift properties (G) of the wing dependent of the actual speed of the aircraft. Each of the positions in the array corresponds to a relative speed expressed as a proportion of the 125% of maxSpeed of the vehicle. Relates directly to angleOfIndicence and airplane's mass and can be used to simulate various wing sizes and camber.
thrustCoef[] = {0.6,0.7,0.8,0.9,1.1,1.2,1.1,0.9,0.5,0.05,0.0,0.0,0};
flaps = 1;												// Flaps Defines if the aircraft has flaps. Uses "..." animation source.
flapsFrictionCoef = 2;								// A-164 Wipeout Friction coefficient of flaps. Increases drag and lift. Relates to envelope.
gearRetracting = 1;										// A-164 Wipeout, retractable landing gear Defines if the aircraft has retracting landing gear. Uses "..." animation source.
gearDownTime = 3;										// Most aircrafts only if gearRetracting = 1;, defines the time in seconds it takes to extract the gear.
gearUpTime = 4.5;										// Most aircrafts Only if gearRetracting = 1;, defines the time in seconds it takes to retract the gear.
landingAoa = "rad 3";									// A-164 Wipeout Advised landing angle of attack for AI, autopilot and ILS indicator.
landingSpeed = 145;										// A-164 Wipeout Advised landing speed for AI and autopilot.
lightOnGear = 0;										// A-164 Wipeout Defines if the lights are on the landing gear, thus only shining when the gear is down.
maxSpeed = 310;
limitSpeed = 355;										// A-164 Wipeout maximum speed. Doesn't limit the speed the aircraft is able to reach. Value is used mainly for the AI and thrust, envelope and control surfaces coefficients.
rudderCoef[] = {0.6,1,1,0.9,0.8,0.7,0.6};				// A-164 Wipeout Defines the authority of the rudder in a given speed.
rudderControlsSensitivityCoef = 2;						// A-164 Wipeout Sensitivity of the player yaw (rudder) input - how fast the control surface reaches it's max. extent. (does not affect AI).
rudderInfluence = 0.3;								// A-164 Wipeout Cos of the angle in which rudder can turn the aircraft. Lower values mean less yaw extent and authority. Relates to rudderCoef, draconicTorqueXCoef and draconicForceXCoef.
rudderSensitivity = 0.8;
simulation = "airplaneX";								// Must be "airplaneX" for a plane
stallSpeed = 120;										// V-44 Blackfish Advised stall speed. Used for AI, stallWarningTreshold in instruments and animation sources.
stallWarningTreshold = 1;								// A-164 Wipeout Threshold of the stall warning - relates to display sources (i.e. airspeed indicated in red color).
wheelSteeringSensitivity = 1;							// A-164 Wipeout Once landed, defines the radius of steering with nose/tail wheel (same action as rudder).
dampersBumpCoef = 0;
class Wheels
{
  class Wheel_1
  {
    boneName = "Wheel_1";
    steering = 0;
    side = "left";
    center = "Wheel_1_center";
    boundary = "Wheel_1_rim";
    width = 0.3;
    mass = 50;
    MOI = 8;
    dampingRate = 0.1;
    dampingRateDamaged = 1;
    dampingRateDestroyed = 1000;
    maxBrakeTorque = 80;
    maxHandBrakeTorque = 160;
    suspTravelDirection[] = {0,-1,0};
    suspForceAppPointOffset = "Wheel_1_Axis";
    tireForceAppPointOffset = "Wheel_1_Axis";
    maxCompression = 0.036;
    maxDroop = 0.036;
    sprungMass = 750;
    springStrength = 1560000;
    springDamperRate = 11500;
    longitudinalStiffnessPerUnitGravity	= 90;
    latStiffX	= 15;
    latStiffY	= 120;
    frictionVsSlipGraph[] = {{0,2},{0.5,1},{1,1}};

  };
  class Wheel_2: Wheel_1
  {
    boneName = "Wheel_2";
    steering = 0;
    MOI = 8;
    center = "Wheel_2_center";
    boundary = "Wheel_2_rim";
    width = 0.46;
    sprungMass					= 3350;
    springStrength				= 335000;
    springDamperRate			= 67000;
    longitudinalStiffnessPerUnitGravity	= 500;
    suspForceAppPointOffset = "Wheel_2_Axis";
    tireForceAppPointOffset = "Wheel_2_Axis";
    maxCompression = 0.108;
    maxDroop = 0.108;
    suspTravelDirection[] = {0,-1,0};
  };
  class Wheel_3: Wheel_2
  {
    boneName = "Wheel_3";
    steering = 0;
    MOI = 8;
    side = "right";
    center = "Wheel_3_center";
    boundary = "Wheel_3_rim";
    suspForceAppPointOffset = "Wheel_3_Axis";
    tireForceAppPointOffset = "Wheel_3_Axis";
  };
};
