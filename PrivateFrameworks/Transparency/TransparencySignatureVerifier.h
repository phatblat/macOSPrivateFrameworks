//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface TransparencySignatureVerifier : NSObject
{
    BOOL _needsRefresh;
    NSDictionary *_trustedKeys;
}

+ (BOOL)verifyMessage:(id)arg1 signature:(id)arg2 spkiHash:(id)arg3 trustedKeys:(id)arg4 algorithm:(struct __CFString *)arg5 error:(id *)arg6;
+ (int)protoAlgorithmForSecKeyAlgorithm:(struct __CFString *)arg1;
+ (const struct __CFString *)secKeyAlgorithmForProtoAlgorithm:(int)arg1;
@property(retain) NSDictionary *trustedKeys; // @synthesize trustedKeys=_trustedKeys;
@property BOOL needsRefresh; // @synthesize needsRefresh=_needsRefresh;
- (void).cxx_destruct;
- (BOOL)verifyMessage:(id)arg1 signature:(id)arg2 spkiHash:(id)arg3 algorithm:(struct __CFString *)arg4 error:(id *)arg5;
- (id)initWithTrustedKeys:(id)arg1;

@end

