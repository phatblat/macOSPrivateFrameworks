//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate;

@interface WBSHistorySession : NSObject
{
    NSDate *_startDate;
}

+ (id)currentSession;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) BOOL isCurrentSession;
- (id)initWithSessionStartDate:(id)arg1;
- (id)init;

@end

