//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ICSDate, NSMutableDictionary;

@interface CalDAVOccurrenceChange : NSObject
{
    BOOL _isMaster;
    ICSDate *_recurrenceID;
    NSMutableDictionary *_changes;
}

+ (id)changeWithItem:(id)arg1;
+ (id)changeWithOccurrenceID:(id)arg1;
@property(retain) ICSDate *recurrenceID; // @synthesize recurrenceID=_recurrenceID;
@property BOOL isMaster; // @synthesize isMaster=_isMaster;
- (void).cxx_destruct;
@property(readonly) BOOL allDayChanged;
@property(readonly) BOOL privateCommentChanged;
@property(readonly) BOOL alternateTimeProposalChanged;
@property(readonly) BOOL participationChanged;
@property(readonly) BOOL recurrenceChanged;
@property(readonly) BOOL attachmentsChanged;
@property(readonly) BOOL statusChanged;
@property(readonly) BOOL descriptionChanged;
@property(readonly) BOOL attendeesChanged;
@property(readonly) BOOL summaryChanged;
@property(readonly) BOOL urlChanged;
@property(readonly) BOOL locationChanged;
@property(readonly) BOOL timeZoneChanged;
@property(readonly) BOOL endTimeChanged;
@property(readonly) BOOL startTimeChanged;
@property(readonly) BOOL dateTimeChanged;
- (id)changeTypeOnProperty:(id)arg1;
- (BOOL)didParameterChange:(id)arg1 onProperty:(id)arg2;
- (BOOL)didPropertyChange:(id)arg1;
- (void)addChanged:(id)arg1 named:(id)arg2 ofProperty:(id)arg3;
- (void)addChangedProperty:(id)arg1;
- (id)allChanges;
- (id)initWithOccurrenceID:(id)arg1;
- (id)init;

@end

