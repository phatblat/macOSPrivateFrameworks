//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMChatTranscriptDrawable.h"

@class IMTranscriptBubbleSizeCache, IMTranscriptChatItem, NSString, SOGenericStatusItemCollectionViewItem;

@interface SOGenericStatusLayoutItem : NSObject <IMChatTranscriptDrawable>
{
    SOGenericStatusItemCollectionViewItem *_referenceViewController;
    IMTranscriptBubbleSizeCache *_bubbleSizeCache;
    IMTranscriptChatItem *_chatTranscriptItem;
    id <SOGenericStatusLayoutItemDelegate> _delegate;
    struct NSEdgeInsets _textMargins;
}

+ (id)itemTypeIdentifier;
+ (Class)viewClass;
@property(readonly, nonatomic, getter=_textMargins) struct NSEdgeInsets textMargins; // @synthesize textMargins=_textMargins;
@property(nonatomic) __weak id <SOGenericStatusLayoutItemDelegate> delegate; // @synthesize delegate=_delegate;
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

