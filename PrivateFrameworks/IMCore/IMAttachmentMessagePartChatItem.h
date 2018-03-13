//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMCore/IMMessagePartChatItem.h>

@class NSString;

@interface IMAttachmentMessagePartChatItem : IMMessagePartChatItem
{
    NSString *_transferGUID;
    unsigned int _wantsAttachmentContiguous:1;
}

@property(readonly, copy, nonatomic) NSString *transferGUID; // @synthesize transferGUID=_transferGUID;
- (void).cxx_destruct;
- (id)_initWithItem:(id)arg1 text:(id)arg2 index:(long long)arg3 messagePartRange:(struct _NSRange)arg4 transferGUID:(id)arg5 visibleAssociatedMessageChatItems:(id)arg6;
- (id)_initWithItem:(id)arg1 text:(id)arg2 index:(long long)arg3 messagePartRange:(struct _NSRange)arg4 transferGUID:(id)arg5;
- (BOOL)isAttachmentContiguousWithChatItem:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end

