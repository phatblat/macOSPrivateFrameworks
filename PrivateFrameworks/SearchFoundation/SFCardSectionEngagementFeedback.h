//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SearchFoundation/SFCardSectionFeedback.h>

@class SFPunchout;

@interface SFCardSectionEngagementFeedback : SFCardSectionFeedback
{
    SFPunchout *_destination;
    unsigned long long _triggerEvent;
    unsigned long long _actionCardType;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) unsigned long long actionCardType; // @synthesize actionCardType=_actionCardType;
@property(nonatomic) unsigned long long triggerEvent; // @synthesize triggerEvent=_triggerEvent;
@property(retain, nonatomic) SFPunchout *destination; // @synthesize destination=_destination;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCardSection:(id)arg1 destination:(id)arg2 triggerEvent:(unsigned long long)arg3 actionCardType:(unsigned long long)arg4;

@end

