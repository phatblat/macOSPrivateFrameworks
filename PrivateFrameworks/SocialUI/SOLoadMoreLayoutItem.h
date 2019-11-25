//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMChatTranscriptDrawable.h"

@class IMTranscriptChatItem, NSString;

@interface SOLoadMoreLayoutItem : NSObject <IMChatTranscriptDrawable>
{
    IMTranscriptChatItem *_chatTranscriptItem;
}

+ (id)itemTypeIdentifier;
+ (Class)viewClass;
@property(retain, nonatomic) IMTranscriptChatItem *chatTranscriptItem; // @synthesize chatTranscriptItem=_chatTranscriptItem;
- (void).cxx_destruct;
- (long long)verticalSpaceToPrecedingItemOfClassification:(long long)arg1;
- (struct CGSize)sizeConstrainedToWidth:(double)arg1;
@property(readonly, nonatomic) long long layoutOrientation;
@property(readonly, nonatomic) long long layoutClassification;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

