//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SAIntentGroupHandleIntent.h"

@interface SAIntentGroupHandleIntent (INSExtensionService)
- (BOOL)ins_shouldUseExtendedFlowTimeout;
- (long long)ins_analyticsEndEventType;
- (long long)ins_analyticsBeginEventType;
- (void)ins_sendIntent:(id)arg1 toExtensionProxy:(id)arg2 onQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)ins_protobufEncodedIntent;
- (id)ins_jsonEncodedIntent;
@end

