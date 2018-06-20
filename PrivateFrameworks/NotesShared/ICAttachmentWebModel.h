//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NotesShared/ICAttachmentModel.h>

@interface ICAttachmentWebModel : ICAttachmentModel
{
    id _reservedForWebView;
    CDUnknownBlockType _pendingFetchCompletionHandler;
}

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1;
@property(copy) CDUnknownBlockType pendingFetchCompletionHandler; // @synthesize pendingFetchCompletionHandler=_pendingFetchCompletionHandler;
@property(retain) id reservedForWebView; // @synthesize reservedForWebView=_reservedForWebView;
- (void).cxx_destruct;
- (BOOL)canConvertToHTMLForSharing;
- (id)attributesForSharingHTMLWithTagName:(id *)arg1 textContent:(id *)arg2;
- (BOOL)showThumbnailInNoteList;
- (BOOL)hasPreviews;

@end

