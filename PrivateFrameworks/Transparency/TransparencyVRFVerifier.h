//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class VRFPublicKey;

@interface TransparencyVRFVerifier : NSObject
{
    VRFPublicKey *_key;
}

+ (id)saltMessage:(id)arg1 salt:(id)arg2;
+ (BOOL)verifyMessage:(id)arg1 salt:(id)arg2 output:(id)arg3 proof:(id)arg4 key:(id)arg5 error:(id *)arg6;
+ (BOOL)verifyMessage:(id)arg1 output:(id)arg2 proof:(id)arg3 key:(id)arg4 error:(id *)arg5;
+ (id)verifierOfType:(int)arg1 key:(id)arg2;
@property(retain) VRFPublicKey *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (BOOL)verifyMessage:(id)arg1 salt:(id)arg2 output:(id)arg3 proof:(id)arg4 error:(id *)arg5;
- (BOOL)verifyMessage:(id)arg1 output:(id)arg2 proof:(id)arg3 error:(id *)arg4;
@property(readonly) int vrfType;
- (id)initWithKey:(id)arg1;

@end
