//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TIConnectionsMetricsTracker : NSObject
{
    BOOL _inputContextDidChange;
}

+ (id)sharedInstance;
@property BOOL inputContextDidChange; // @synthesize inputContextDidChange=_inputContextDidChange;
- (void)trackPredictionEngagmentWithConversion:(BOOL)arg1 age:(unsigned long long)arg2 fieldType:(id)arg3 resultType:(id)arg4 fromBundleId:(id)arg5 targetApp:(id)arg6 linguistic:(BOOL)arg7 semantic:(BOOL)arg8;
- (void)trackTextFieldEntryWithEmpty:(BOOL)arg1 fieldType:(id)arg2 trigger:(id)arg3;
- (void)trackTextFieldEntryWithEmpty:(BOOL)arg1 fieldType:(id)arg2 linguistic:(BOOL)arg3 semantic:(BOOL)arg4 requestType:(id)arg5;

@end
