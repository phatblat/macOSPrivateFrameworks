//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GKSConnectivitySettings : NSObject
{
}

+ (double)getLongTermValueWeightC;
+ (double)getShortTermValueWeightC;
+ (double)getAdjustmentFactorC;
+ (double)getLongTermValueWeightB;
+ (double)getShortTermValueWeightB;
+ (double)getAdjustmentFactorB;
+ (double)getAdaptiveLearningB;
+ (double)getLongTermValueWeightA;
+ (double)getShortTermValueWeightA;
+ (double)getAdjustmentFactorA;
+ (double)getAdaptiveLearningA;
+ (int)getLongTermHistoryLength;
+ (int)getShortTermHistoryLength;
+ (int)getAdaptiveLearningState;
+ (int)getRateControllerType;
+ (BOOL)supportiRATRecommendation;
+ (BOOL)isRedStateA;
+ (BOOL)supportsRedAudio;
+ (BOOL)supportsEVSCodec;
+ (BOOL)supportsHEVCEncoding;
+ (int)getKeepAliveTimeoutFromCarrierBundle;
+ (int)getNATTypeFromCarrierBundle;
+ (id)getAllSettings;
+ (struct tagIPPORT *)getIPPortForService:(id)arg1;
+ (struct tagIPPORT *)getCachedIPPort;
+ (id)getAddressForService:(id)arg1;
+ (id)getClientOption:(id)arg1;
+ (void)setClientOptions:(id)arg1;
+ (void)setServerAddresses:(id)arg1;
+ (void)setAddress:(id)arg1 forService:(id)arg2;
+ (void)initialize;
- (void)dealloc;
- (id)init;

@end

