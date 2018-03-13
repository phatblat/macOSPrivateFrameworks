//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NotesShared/ICAttachmentModel.h>

@interface ICAttachmentImageModel : ICAttachmentModel
{
}

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1;
- (BOOL)canConvertToHTMLForSharing;
- (id)attributesForSharingHTMLWithTagName:(id *)arg1 textContent:(id *)arg2;
- (struct CGAffineTransform)previewImageOrientationTransform;
- (BOOL)supportsQuickLook;
- (void)updateAttachmentSize;
- (void)addLocation;
- (void)updateFileBasedAttributes;
- (BOOL)shouldCropImage;
- (BOOL)needsFullSizePreview;
- (id)generateHardLinkURLIfNecessaryForURL:(id)arg1;
- (BOOL)canSaveURL;
- (id)saveURL;
- (BOOL)canMarkup;
- (BOOL)showThumbnailInNoteList;
- (BOOL)hasThumbnailImage;
- (BOOL)hasPreviews;
- (id)previewItemTitle;
- (id)previewImageTypeUTI;

@end

