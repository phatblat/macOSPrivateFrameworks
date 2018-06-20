//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class ICAttachment, ICTextAttachment;

@interface ICBaseAttachmentView : NSView
{
    BOOL _selected;
    ICAttachment *_attachment;
    ICTextAttachment *_textAttachment;
    struct CGSize _attachmentContentSize;
}

@property(nonatomic) struct CGSize attachmentContentSize; // @synthesize attachmentContentSize=_attachmentContentSize;
@property(nonatomic) BOOL selected; // @synthesize selected=_selected;
@property(nonatomic) __weak ICTextAttachment *textAttachment; // @synthesize textAttachment=_textAttachment;
@property(nonatomic) __weak ICAttachment *attachment; // @synthesize attachment=_attachment;
- (void).cxx_destruct;
- (void)attachmentWillBeDeleted:(id)arg1;
- (void)attachmentPreviewImagesDidUpdate:(id)arg1;
- (void)mediaDidLoad:(id)arg1;
- (void)attachmentDidLoad:(id)arg1;
- (BOOL)cancelDidScrollIntoVisibleRange;
- (void)didScrollIntoVisibleRange;
- (void)didScrollOutOfVisibleRange;
- (void)didChangeSize;
- (void)contentSizeCategoryDidChange;
- (void)didSetSelected:(BOOL)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeKVOObserversForAttachment:(id)arg1;
- (void)addKVObserversForAttachment:(id)arg1;
- (void)willDeleteAttachment;
- (void)didUpdatePreviewImages;
- (void)didChangeAttachmentTitle;
- (void)didChangeMergeableData;
- (void)didChangeMedia;
- (void)didChangeAttachment;
- (void)willChangeAttachment;
- (void)dealloc;

@end

