class IInput : public UCOM::IUnknown {
public:
	static inline uint32_t IHandle = 0x403AA0;

	virtual void ClearInput() = 0;
	virtual float GetControlBrake() = 0;
	virtual float GetControlGas() = 0;
	virtual float GetControlSteering() = 0;
	virtual float GetControlOverSteer() = 0;
	virtual bool GetControlNOS() = 0;
	virtual float GetControlHandBrake() = 0;
	virtual float GetControlClutch() = 0;
	virtual void SetControlSteering(float) = 0;
	virtual void SetControlOverSteer(float) = 0;
	virtual void SetControlGas(float) = 0;
	virtual void SetControlBrake(float) = 0;
	virtual void SetControlNOS(bool) = 0;
	virtual void SetControlHandBrake(float) = 0;
	virtual void SetControlClutch(float) = 0;
	virtual bool IsLookBackButtonPressed() = 0;
	virtual bool IsPullBackButtonPressed() = 0;
	virtual bool IsWingmanActivationButtonPressed() = 0;
	virtual bool IsAutomaticShift() = 0;
};