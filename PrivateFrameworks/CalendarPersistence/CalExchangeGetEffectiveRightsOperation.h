//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarPersistence/CalExchangeOperation.h>

@class NSManagedObjectID;

@interface CalExchangeGetEffectiveRightsOperation : CalExchangeOperation
{
    NSManagedObjectID *_calendarObjectID;
}

+ (id)responseShape;
+ (void)setPermission:(id)arg1 withEffectiveRights:(id)arg2;
- (BOOL)executeWithBinding:(id)arg1 inSession:(id)arg2 inContext:(id)arg3 error:(id *)arg4;
- (void)dealloc;
- (id)initWithSession:(id)arg1 calendarObjectID:(id)arg2;

@end

