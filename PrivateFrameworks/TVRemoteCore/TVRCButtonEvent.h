//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSDate, TVRCButton;

@interface TVRCButtonEvent : NSObject <NSSecureCoding>
{
    NSDate *_timestamp;
    TVRCButton *_button;
    long long _eventType;
}

+ (id)buttonEventForButton:(id)arg1 eventType:(long long)arg2;
+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) long long eventType; // @synthesize eventType=_eventType;
@property(readonly, nonatomic) TVRCButton *button; // @synthesize button=_button;
@property(readonly, copy, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;

@end
