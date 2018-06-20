//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary, NSRecursiveLock, NSString;

@interface MPLayerGroupInternal : NSObject
{
    double numberOfLoops;
    unsigned long long loopingMode;
    double durationPadding;
    double duration;
    double timeIn;
    double phaseInDuration;
    double phaseOutDuration;
    NSString *backgroundAudioID;
    struct CGColor *backgroundColor;
    NSDictionary *authoredVersionInfo;
    long long sendLiveNotification;
    NSRecursiveLock *liveLock;
    BOOL autoAdjustDuration;
    BOOL isDocumentLayerGroup;
    BOOL isTriggered;
    BOOL startsPaused;
    BOOL usedAllPaths;
    double opacity;
    struct CGPoint position;
    double zPosition;
    struct CGSize size;
    double rotationAngle;
    double xRotationAngle;
    double yRotationAngle;
    double scale;
    long long zIndex;
    NSString *uuid;
    NSMutableDictionary *layerKeyDictionary;
    NSDictionary *initialState;
}

@property(nonatomic) BOOL usedAllPaths; // @synthesize usedAllPaths;
@property(retain, nonatomic) NSDictionary *initialState; // @synthesize initialState;
@property(retain, nonatomic) NSMutableDictionary *layerKeyDictionary; // @synthesize layerKeyDictionary;
@property(nonatomic) long long zIndex; // @synthesize zIndex;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid;
@property(nonatomic) double scale; // @synthesize scale;
@property(nonatomic) double yRotationAngle; // @synthesize yRotationAngle;
@property(nonatomic) double xRotationAngle; // @synthesize xRotationAngle;
@property(nonatomic) double rotationAngle; // @synthesize rotationAngle;
@property(nonatomic) struct CGSize size; // @synthesize size;
@property(nonatomic) double zPosition; // @synthesize zPosition;
@property(nonatomic) struct CGPoint position; // @synthesize position;
@property(nonatomic) double opacity; // @synthesize opacity;
@property(nonatomic) BOOL isDocumentLayerGroup; // @synthesize isDocumentLayerGroup;
@property(nonatomic) BOOL autoAdjustDuration; // @synthesize autoAdjustDuration;
@property(retain, nonatomic) NSRecursiveLock *liveLock; // @synthesize liveLock;
@property(nonatomic) long long sendLiveNotification; // @synthesize sendLiveNotification;
@property(retain, nonatomic) NSDictionary *authoredVersionInfo; // @synthesize authoredVersionInfo;
@property(nonatomic) struct CGColor *backgroundColor; // @synthesize backgroundColor;
@property(nonatomic) unsigned long long loopingMode; // @synthesize loopingMode;
@property(retain, nonatomic) NSString *backgroundAudioID; // @synthesize backgroundAudioID;
@property(nonatomic) double phaseOutDuration; // @synthesize phaseOutDuration;
@property(nonatomic) double phaseInDuration; // @synthesize phaseInDuration;
@property(nonatomic) BOOL startsPaused; // @synthesize startsPaused;
@property(nonatomic) BOOL isTriggered; // @synthesize isTriggered;
@property(nonatomic) double timeIn; // @synthesize timeIn;
@property(nonatomic) double duration; // @synthesize duration;
@property(nonatomic) double durationPadding; // @synthesize durationPadding;
@property(nonatomic) double numberOfLoops; // @synthesize numberOfLoops;
- (void)dealloc;

@end

