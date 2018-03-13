//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PETScalarEventTracker;

@interface SGMNLEventInBanner : NSObject
{
    PETScalarEventTracker *_tracker;
}

@property(readonly, nonatomic) PETScalarEventTracker *tracker; // @synthesize tracker=_tracker;
- (void).cxx_destruct;
- (void)trackEventWithScalar:(unsigned long long)arg1 interface:(struct SGMNLEventInterface_)arg2 actionType:(struct SGMNLEventActionType_)arg3 eventType:(id)arg4 languageID:(id)arg5 daysFromStartDate:(unsigned long long)arg6 confidenceScore:(unsigned long long)arg7 significantSender:(struct SGMBoolOption_)arg8 participantCount:(unsigned long long)arg9 extractionLevel:(struct SGMNLEventExtractionLevel_)arg10 usedBubblesCount:(unsigned long long)arg11 titleSource:(struct SGMEventTitleSource_)arg12 titleAdj:(struct SGMEventStringAdj_)arg13 dateAdj:(struct SGMEventDateAdj_)arg14 duraAdj:(struct SGMEventDurationAdj_)arg15 locationAdj:(struct SGMEventLocationAdj_)arg16 addedAttendeesCount:(id)arg17 calendarAppUsageLevel:(id)arg18 mailAppUsageLevel:(struct SGMAppUsageLevel_)arg19 messagesAppUsageLevel:(struct SGMAppUsageLevel_)arg20;
- (id)init;

@end

