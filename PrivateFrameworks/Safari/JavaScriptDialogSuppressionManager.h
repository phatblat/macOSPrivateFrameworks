//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate;

__attribute__((visibility("hidden")))
@interface JavaScriptDialogSuppressionManager : NSObject
{
    BOOL _suppressing;
    NSDate *_dateLastDialogWasDismissed;
    double _monitoredIntervalForOfferingSuppression;
}

- (void).cxx_destruct;
- (void)_test_setMonitoredIntervalForOfferingSuppression:(double)arg1;
- (void)reset;
- (void)suppressDialogs;
- (void)didRunDialog;
- (BOOL)shouldOfferToSuppressDialogs;
- (BOOL)canRunDialog;
- (id)init;

@end

