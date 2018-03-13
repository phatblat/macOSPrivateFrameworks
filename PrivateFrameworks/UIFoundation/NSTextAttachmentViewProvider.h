//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLayoutManager, NSTextAttachment, NSView;

@interface NSTextAttachmentViewProvider : NSObject
{
    NSView *_view;
    unsigned long long _characterIndex;
    BOOL _tracksTextAttachmentViewBounds;
    NSTextAttachment *_textAttachment;
    NSLayoutManager *_layoutManager;
}

@property(readonly) unsigned long long characterIndex; // @synthesize characterIndex=_characterIndex;
@property BOOL tracksTextAttachmentViewBounds; // @synthesize tracksTextAttachmentViewBounds=_tracksTextAttachmentViewBounds;
@property __weak NSLayoutManager *layoutManager; // @synthesize layoutManager=_layoutManager;
@property __weak NSTextAttachment *textAttachment; // @synthesize textAttachment=_textAttachment;
- (void).cxx_destruct;
- (struct CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3 characterIndex:(unsigned long long)arg4;
- (void)dealloc;
- (void)removeView;
- (void)loadView;
@property(retain) NSView *view; // @dynamic view;
- (id)initWithTextAttachment:(id)arg1 parentView:(id)arg2 characterIndex:(unsigned long long)arg3 layoutManager:(id)arg4;

@end

