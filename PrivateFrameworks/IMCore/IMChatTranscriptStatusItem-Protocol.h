//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IMChatTranscriptItem.h"

@class NSDate;

@protocol IMChatTranscriptStatusItem <IMChatTranscriptItem>
@property(readonly, nonatomic) NSDate *dateOfStatus;
@property(readonly, nonatomic) long long expireStatusType;
@property(readonly, nonatomic) long long statusType;
@end
