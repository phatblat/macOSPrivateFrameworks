//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BMItem, NSDate;

@interface BMEvent : NSObject
{
    NSDate *_startDate;
    NSDate *_endDate;
    BMItem *_item;
}

@property(retain) BMItem *item; // @synthesize item=_item;
@property(retain) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain) NSDate *startDate; // @synthesize startDate=_startDate;
- (void).cxx_destruct;
- (id)description;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 item:(id)arg3;

@end

