//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NotesShared/ICAttachmentModel.h>

@class ICDrawing, ICDrawingVersionedDocument;

@interface ICAttachmentDrawingModel : ICAttachmentModel
{
    ICDrawingVersionedDocument *_drawingDocument;
}

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1;
- (void).cxx_destruct;
- (id)previewItemURL;
- (id)previewItemTitle;
- (id)previewImageURL;
- (BOOL)shouldSyncPreviewImageToCloud:(id)arg1;
- (struct CGAffineTransform)previewImageOrientationTransform;
- (void)drawingPreviewIsUpToDate;
- (BOOL)showThumbnailInNoteList;
- (BOOL)supportsQuickLook;
- (BOOL)canSaveURL;
- (id)saveURL;
- (BOOL)hasPreviews;
- (void)writeMergeableData;
- (BOOL)mergeWithMergeableData:(id)arg1;
- (id)sharedDrawingController;
- (id)drawingDocument;
@property(readonly, nonatomic) ICDrawing *drawing;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithAttachment:(id)arg1;

@end

