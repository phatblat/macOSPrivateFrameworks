//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AccountPolicy/APMessage.h>

@class NSMutableDictionary;

@interface APRequest : APMessage
{
    NSMutableDictionary *_recordInfo;
    CDUnknownBlockType _retrieveData;
}

+ (id)requestWithType:(int)arg1 recordInfo:(id)arg2 timeDelta:(double)arg3 retrieveData:(CDUnknownBlockType)arg4;
+ (id)requestWithType:(int)arg1 recordInfo:(id)arg2 retrieveData:(CDUnknownBlockType)arg3;
@property(copy) CDUnknownBlockType retrieveData; // @synthesize retrieveData=_retrieveData;
@property(retain) NSMutableDictionary *recordInfo; // @synthesize recordInfo=_recordInfo;
- (void).cxx_destruct;
- (void)_convertToNSNumberTimeIntervalIfNeeded:(id)arg1;
- (long long)evaluatePolicyAndReturnExpiration;
- (int)evaluatePolicyAndReturnResultAndError:(id *)arg1;
- (id)evaluatePolicyAndReturnResponse;
- (id)logHandle;
- (id)initWithType:(int)arg1 recordInfo:(id)arg2 timeDelta:(double)arg3 retrieveData:(CDUnknownBlockType)arg4;

@end

