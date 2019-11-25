//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CRAsyncCardRequestFeedback.h"

@class NSString, SFFeedback;

@interface CRBasicAsyncCardRequestFeedback : NSObject <CRAsyncCardRequestFeedback>
{
    id <CRCard> baseCard;
    id <CRCard> requestedCard;
}

@property(retain, nonatomic) id <CRCard> requestedCard; // @synthesize requestedCard;
@property(retain, nonatomic) id <CRCard> baseCard; // @synthesize baseCard;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, nonatomic) SFFeedback *backingFeedback;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

