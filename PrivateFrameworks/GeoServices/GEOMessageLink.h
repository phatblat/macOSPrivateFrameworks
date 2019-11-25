//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOPDMessageLink, NSString, NSTimeZone;

@interface GEOMessageLink : NSObject
{
    GEOPDMessageLink *_messageLink;
    NSTimeZone *_timeZone;
}

@property(readonly, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
- (void).cxx_destruct;
- (id)messageBusinessHours;
- (int)responseTime;
@property(readonly, nonatomic) BOOL isVerified;
@property(readonly, nonatomic) NSString *navTintColorString;
@property(readonly, nonatomic) NSString *navBackgroundColorString;
@property(readonly, nonatomic) NSString *messageURLString;
@property(readonly, nonatomic) NSString *messageID;
- (id)initWithMessageLink:(id)arg1;

@end

