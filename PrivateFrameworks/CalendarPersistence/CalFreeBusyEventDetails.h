//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSDate, NSString;

@interface CalFreeBusyEventDetails : NSObject <NSSecureCoding>
{
    NSString *_title;
    NSString *_uid;
    NSDate *_startTime;
    NSDate *_endTime;
}

+ (BOOL)supportsSecureCoding;
@property(retain) NSDate *endTime; // @synthesize endTime=_endTime;
@property(retain) NSDate *startTime; // @synthesize startTime=_startTime;
@property(retain) NSString *uid; // @synthesize uid=_uid;
@property(retain) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

