//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CalDAVOccurrenceChange, NSDate, NSMutableDictionary, NSString;

@interface CalDAVScheduleChangesProperty : NSObject
{
    NSDate *_dateStamp;
    int _actionType;
    CalDAVOccurrenceChange *_masterChange;
    NSMutableDictionary *_occurrenceChanges;
    NSString *_attendeeAddress;
}

+ (id)propertyWithItem:(id)arg1;
+ (id)debugStringForType:(int)arg1;
+ (void)initialize;
@property(retain) CalDAVOccurrenceChange *masterChange; // @synthesize masterChange=_masterChange;
@property(retain) NSString *attendeeAddress; // @synthesize attendeeAddress=_attendeeAddress;
@property int actionType; // @synthesize actionType=_actionType;
@property(retain) NSDate *dateStamp; // @synthesize dateStamp=_dateStamp;
- (void).cxx_destruct;
- (id)changeForOccurrence:(id)arg1;
- (id)recurrenceIDs;
- (id)allChanges;
- (void)addOccurrenceChange:(id)arg1;
- (BOOL)isCreate;
- (BOOL)isUpdate;
- (BOOL)isReply;
- (BOOL)isCancel;
- (id)init;

@end

