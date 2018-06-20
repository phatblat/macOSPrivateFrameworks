//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class CBDisplayModuleMacOS, NSObject<OS_dispatch_source>;

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct ALSStruct {
    float currentValue;
    float e1;
    float e1Sensor;
    float e2;
    float e2Sensor;
    float eThresh;
    float bl1;
    float bl2;
    _Bool autoEnabled;
};

struct BLRAggdInfo {
    float manualModeTime;
    float sunModeTime;
    float scheduleModeTime;
    int turnOnForNowCount;
    int turnOffForNowCount;
    int turnOnUntilTomorrowCount;
    int turnOffUntilTomorrowCount;
    double _aggdModeChangeTimestamp;
};

struct ColorEffects;

struct DSDevice {
    unsigned int _field1;
    unsigned long long _field2;
    struct __CFString *_field3;
    unsigned int _field4;
    unsigned int _field5;
    struct __CFDictionary *_field6;
    int _field7;
    _Bool _field8;
    _Bool _field9;
    float _field10;
    void *_field11;
    void *_field12;
    double _field13;
    id _field14;
    CDUnknownBlockType _field15;
    struct IONotificationPort *_field16;
    unsigned int _field17;
    id _field18;
    id _field19;
    _Bool _field20;
};

struct DisplayStruct {
    CBDisplayModuleMacOS *displayModule;
    float displayIncrement;
    _Bool needsBrightnessSmoothing;
    float minimumLinearBrightness;
    float maximumLinearBrightness;
    float currentFadeTarget;
    NSObject<OS_dispatch_source> *fadeTimer;
    NSObject<OS_dispatch_source> *alsIdleTimer;
    NSObject<OS_dispatch_source> *forceUpdateTimer;
    float magsafeFactor;
    struct MagSafeReduction magSafeReduction;
    struct DynamicSlider dynamicSlider;
    _Bool freezeBrightnessUpdates;
};

struct DynamicSlider {
    _Bool supported;
    NSObject<OS_dispatch_source> *fadeTimer;
    CDStruct_08e969a3 range;
    CDStruct_08e969a3 rangeBattery;
    struct *currentRange;
    float currentTargetFactor;
};

struct IONotificationPort;

struct MagSafeReduction {
    _Bool enabled;
    float linearBrightnessLimit;
    float luxThreshold;
};

struct NMFactorState {
    double rampStartTime;
    float factor;
    float target;
    float start;
    float rampLength;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long alsAccumulatedTimeSinceLastPost;
    float averageLux;
    _Bool isFirstReport;
    unsigned long long reportStatLastTimestamp;
    float lastLuxValue;
    float minLuxValue;
    float maxLuxValue;
    int numberOfUserBrightnessChanges;
    _Bool alsEnabled;
} CDStruct_93cb412c;

typedef struct {
    double _field1[17];
    int _field2[17];
    int _field3;
    unsigned long long _field4;
} CDStruct_c688133d;

typedef struct {
    float minCCT;
    float maxCCT;
    float midCCT;
} CDStruct_6ede4ed5;

typedef struct {
    float lux;
    float factor;
} CDStruct_46614362;

typedef struct {
    int hour;
    int minute;
} CDStruct_bdf7039f;

typedef struct {
    float _field1;
    float _field2[9];
    unsigned int _field3;
    float _field4;
    CDStruct_46614362 _field5;
} CDStruct_a0d89d44;

typedef struct {
    CDStruct_c688133d _field1;
    CDStruct_c688133d _field2;
    struct {
        double _field1;
        double _field2;
        double _field3;
        _Bool _field4;
        float _field5;
    } _field3;
    struct {
        double _field1[10];
        int _field2;
        double _field3;
    } _field4;
    struct {
        double _field1;
        double _field2;
        double _field3;
        double _field4;
        float _field5;
        float _field6;
    } _field5;
    int _field6;
} CDStruct_b1cf45a1;

typedef struct {
    CDStruct_46614362 minPoint;
    CDStruct_46614362 maxPoint;
    CDStruct_46614362 hysteresisPoint;
} CDStruct_08e969a3;

typedef struct {
    CDStruct_bdf7039f fromTime;
    CDStruct_bdf7039f toTime;
} CDStruct_6cee55f3;

typedef struct {
    char active;
    char enabled;
    char sunSchedulePermitted;
    int mode;
    CDStruct_6cee55f3 schedule;
    unsigned long long disableFlags;
} CDStruct_768fa5c4;

